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
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
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
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = -1;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	struct<270> Local_122 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_392[32];
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	struct<8> Local_764[10];
	var uLocal_845[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	int iLocal_858 = 0;
	int iLocal_859 = 0;
	var uLocal_860 = 0;
	int iLocal_861 = 0;
	char* sLocal_862 = NULL;
	var uLocal_863 = 16;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_748 = -2;
	iLocal_749 = -1;
	sLocal_862 = "";
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1327(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_1276(ScriptParam_0);
	}
	else
	{
		func_1222();
	}
	while (true)
	{
		func_1221();
		if (func_1213())
		{
			func_1222();
		}
		Global_1676129.f_2 = Local_122.f_267;
		Global_1676129.f_3 = Local_122.f_268;
		switch (func_1212(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ALARM_BELL_02", false, -1))
				{
					if (func_1211() == 1)
					{
						if (func_1210())
						{
							func_1209();
							if (func_1208())
							{
								func_1191(169, 1, func_1206(), 0);
								func_1190();
								func_1188();
							}
							else
							{
								func_1191(169, 0, func_1206(), 0);
							}
							Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 1;
						}
					}
					else if (func_1211() == 4)
					{
						Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_1184(1))
				{
					Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 2;
				}
				if (func_1211() == 1)
				{
					func_1175();
					func_1092();
					func_453();
					func_437();
					if (!func_436())
					{
						if (func_1208() || func_434())
						{
							func_279(&(Global_1366969.f_534), &Global_1366969, 28, &(Global_1366969.f_1), &(Global_1366969.f_117), -1, 0, 0);
						}
					}
					else
					{
						func_274();
					}
					func_217();
					func_216();
				}
				else if (func_1211() == 4)
				{
					Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 3;
				}
				func_210();
				break;
			
			case 3:
				func_209(&(Local_122.f_224));
				if (func_208(&(Local_122.f_224)))
				{
					Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 4;
				}
				break;
			
			case 2:
				Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/] = 4;
			
			case 4:
				func_1222();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_1211())
			{
				case 0:
					if (func_1206() > -1)
					{
						func_206();
						func_204();
						func_203();
						func_200();
						if (func_43())
						{
							STATS::_0x6DEE77AFF8C21BD1(&(Local_122.f_267), &(Local_122.f_268));
							func_37();
							Local_122 = 1;
							Local_122.f_218 = NETWORK::PARTICIPANT_ID_TO_INT();
							Local_122.f_219 = PLAYER::PLAYER_ID();
							func_1191(169, 1, func_1206(), 0);
						}
					}
					break;
				
				case 1:
					func_29();
					func_200();
					func_22();
					func_4();
					if (func_2())
					{
						Local_122 = 4;
					}
					else if (func_1())
					{
						Local_122 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (Global_2540612.f_5188.f_40)
	{
		Global_2540612.f_5188.f_40 = 0;
		return 1;
	}
	return 0;
}

int func_2()
{
	if (func_3())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_122.f_1, 2))
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	return 0;
}

void func_4()
{
	switch (Local_122.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_436())
			{
				func_15();
				func_5();
			}
			if (MISC::IS_BIT_SET(Local_122.f_1, 1))
			{
				Local_122.f_214 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 3))
			{
				Local_122.f_214 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 4))
			{
				Local_122.f_214 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
}

void func_5()
{
	int iVar0;
	int iVar1;
	
	if (Local_122.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_122.f_228)))
	{
		if (MISC::IS_BIT_SET(Local_122.f_1, 6))
		{
			if (MISC::IS_BIT_SET(Local_122.f_1, 11))
			{
				if (!MISC::IS_BIT_SET(Local_122.f_1, 7))
				{
					func_10(&(Local_122.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_122.f_228)))
	{
		if (Local_122.f_222 > 0)
		{
			if (MISC::IS_BIT_SET(Local_122.f_1, 7))
			{
				func_9(&(Local_122.f_228));
				Local_122.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_122.f_228), iVar0, 0))
				{
					func_9(&(Local_122.f_228));
					Local_122.f_222 = (Local_122.f_222 - iVar1);
					if (Local_122.f_222 < 0)
					{
						Local_122.f_222 = 0;
					}
				}
			}
		}
		if (Local_122.f_222 <= 0)
		{
			if (!MISC::IS_BIT_SET(Local_122.f_1, 9))
			{
				MISC::SET_BIT(&(Local_122.f_1), 9);
			}
		}
	}
}

int func_6(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_7()
{
	return 10;
}

int func_8()
{
	return 2000;
}

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_11(var uParam0)
{
	return uParam0->f_1;
}

int func_12()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_122.f_2[0 /*10*/].f_2))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), -1, false);
			if (iVar0 != 0)
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (!PED::IS_PED_A_PLAYER(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_13(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_14(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_15()
{
	if (!func_436())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_122.f_1, 6))
	{
		if (!func_11(&(Local_122.f_234)))
		{
			func_10(&(Local_122.f_234), 0, 0);
		}
		if (func_6(&(Local_122.f_234), func_16(), 0))
		{
			MISC::SET_BIT(&(Local_122.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_436())
	{
		return;
	}
	if (!func_11(&(Local_122.f_238)))
	{
		func_10(&(Local_122.f_238), 0, 0);
	}
	else if (func_6(&(Local_122.f_238), func_18(), 0))
	{
		MISC::SET_BIT(&(Local_122.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_436())
	{
		return;
	}
	if (!func_11(&(Local_122.f_236)))
	{
		func_10(&(Local_122.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_122.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_122.f_226)))
	{
		func_10(&(Local_122.f_226), 0, 0);
	}
	else if (func_6(&(Local_122.f_226), func_20(), 0))
	{
		MISC::SET_BIT(&(Local_122.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_16147;
}

int func_21()
{
	return Local_122.f_223;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (func_28())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			switch (Local_122.f_2[iVar1 /*10*/].f_9)
			{
				case 0:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar1 /*10*/].f_1))
					{
						if (func_436())
						{
							Local_122.f_2[iVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_122.f_2[iVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				
				case 8:
					if (MISC::IS_BIT_SET(Local_122.f_1, 6))
					{
						Local_122.f_2[iVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, iVar1);
					}
					break;
				
				case 1:
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar1 /*10*/].f_1))
					{
						if (func_436())
						{
							func_25(iVar0, iVar1);
						}
					}
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_436())
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar1 /*10*/].f_1))
						{
							if (!func_24(Local_122.f_2[iVar1 /*10*/].f_1))
							{
								if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_122.f_2[iVar1 /*10*/].f_1)))
								{
									Local_122.f_2[iVar1 /*10*/].f_9 = 7;
								}
							}
						}
					}
					break;
				
				case 5:
					break;
				
				case 4:
					break;
				
				case 6:
					break;
				
				case 7:
					func_23(iVar1);
					break;
			}
			iVar1++;
		}
	}
}

void func_23(int iParam0)
{
	if (func_436())
	{
		if (iParam0 == 1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iParam0 /*10*/].f_1))
			{
				if (!func_24(Local_122.f_2[iParam0 /*10*/].f_1))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_122.f_2[0 /*10*/].f_1))
							{
								Local_122.f_2[iParam0 /*10*/].f_9 = 3;
							}
						}
					}
				}
			}
		}
	}
}

int func_24(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_25(int iParam0, int iParam1)
{
	if (!func_24(Local_122.f_2[iParam1 /*10*/].f_1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_122.f_2[iParam1 /*10*/].f_1)))
		{
			if (MISC::IS_BIT_SET(Local_122.f_205, iParam1))
			{
				MISC::SET_BIT(&(Local_122.f_204), iParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_122.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (MISC::IS_BIT_SET(Local_122.f_206, iParam1))
			{
				MISC::SET_BIT(&(Local_122.f_204), iParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_122.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (MISC::IS_BIT_SET(Local_122.f_207, iParam1))
			{
				MISC::SET_BIT(&(Local_122.f_204), iParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_122.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				MISC::SET_BIT(&(Local_122.f_204), iParam1);
				iParam0 = NETWORK::NET_TO_PED(Local_122.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_122.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(iParam1);
			}
		}
		else if (Local_122.f_2[iParam1 /*10*/].f_9 != 7)
		{
			Local_122.f_2[iParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_122.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_122.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(*iParam0), -1, false) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()
{
	return ((((((MISC::IS_BIT_SET(Local_122.f_1, 1) || MISC::IS_BIT_SET(Local_122.f_1, 3)) || MISC::IS_BIT_SET(Local_122.f_1, 4)) || MISC::IS_BIT_SET(Local_122.f_1, 5)) || MISC::IS_BIT_SET(Local_122.f_1, 8)) || MISC::IS_BIT_SET(Local_122.f_1, 9)) || MISC::IS_BIT_SET(Local_122.f_1, 15));
}

void func_29()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = -1;
	bVar3 = false;
	bVar4 = true;
	if (Local_122 != 4)
	{
		iLocal_747 = 0;
		while (iLocal_747 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_747)))
			{
				iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_747));
				if (!func_34(iVar5, 0))
				{
					if (func_1327(iVar5, 1, 1))
					{
					}
					func_33(iLocal_747);
					func_32(iLocal_747);
					if (func_436())
					{
						if (!MISC::IS_BIT_SET(Local_122.f_1, 8))
						{
							if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 9))
							{
								MISC::SET_BIT(&(Local_122.f_1), 8);
							}
						}
						if (!MISC::IS_BIT_SET(Local_122.f_1, 6))
						{
							if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 7))
							{
								MISC::SET_BIT(&(Local_122.f_1), 6);
							}
						}
						if (!MISC::IS_BIT_SET(Local_122.f_1, 11))
						{
							if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 10))
							{
								MISC::SET_BIT(&(Local_122.f_1), 11);
							}
						}
						if (!MISC::IS_BIT_SET(Local_122.f_217, iLocal_747))
						{
							if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 8))
							{
								MISC::SET_BIT(&(Local_122.f_217), iLocal_747);
							}
						}
						else if (!MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 8))
						{
							MISC::CLEAR_BIT(&(Local_122.f_217), iLocal_747);
						}
						if (iVar2 == -1)
						{
							if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 3))
							{
								iVar2 = iLocal_747;
							}
						}
						if (!MISC::IS_BIT_SET(Local_122.f_1, 4))
						{
							if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 2))
							{
								MISC::SET_BIT(&(Local_122.f_1), 4);
								Local_122.f_221 = Local_122.f_216;
							}
						}
						if (!MISC::IS_BIT_SET(Local_122.f_1, 17))
						{
							if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 15))
							{
								MISC::SET_BIT(&(Local_122.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (MISC::IS_BIT_SET(Local_122.f_1, 4))
							{
								if (!MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 14))
								{
									bVar4 = false;
								}
							}
							else
							{
								bVar4 = false;
							}
						}
					}
					else if (!MISC::IS_BIT_SET(Local_122.f_1, 13))
					{
						if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 11))
						{
							MISC::SET_BIT(&(Local_122.f_1), 13);
						}
					}
					if (!MISC::IS_BIT_SET(Local_122.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 4))
								{
									bVar3 = true;
								}
							}
							else
							{
								bVar3 = true;
							}
						}
					}
					if (!MISC::IS_BIT_SET(Local_122.f_1, 16))
					{
						if (MISC::IS_BIT_SET(Local_392[iLocal_747 /*11*/].f_1, 13))
						{
							MISC::SET_BIT(&(Local_122.f_1), 16);
						}
					}
				}
			}
			else if (!MISC::IS_BIT_SET(Local_122.f_1, 5))
			{
				if (Local_122.f_218 > -1)
				{
					if (iLocal_747 == Local_122.f_218)
					{
						MISC::SET_BIT(&(Local_122.f_1), 5);
					}
				}
			}
			iLocal_747++;
		}
		func_31();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (MISC::IS_BIT_SET(Local_122.f_209, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_122.f_213 != iVar0)
		{
			Local_122.f_213 = iVar0;
		}
		if (!MISC::IS_BIT_SET(Local_122.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				MISC::SET_BIT(&(Local_122.f_1), 1);
			}
		}
		if (func_436())
		{
			if (!MISC::IS_BIT_SET(Local_122.f_1, 7))
			{
				if (Local_122.f_217 != 0)
				{
					MISC::SET_BIT(&(Local_122.f_1), 7);
				}
			}
			else if (Local_122.f_217 == 0)
			{
				MISC::CLEAR_BIT(&(Local_122.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_122.f_215 != iVar2)
				{
					Local_122.f_215 = iVar2;
					if (Local_122.f_215 > -1)
					{
						iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_122.f_215));
						Local_122.f_216 = iVar6;
					}
					else
					{
						Local_122.f_216 = -1;
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_122.f_1, 18))
			{
				if (bVar4)
				{
					MISC::SET_BIT(&(Local_122.f_1), 18);
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_122.f_1, 2))
		{
			if (!bVar3)
			{
				MISC::SET_BIT(&(Local_122.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_122.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 6;
		
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 20:
			return 8;
		
		case 7:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 21:
			return 10;
		
		default:
	}
	return 8;
}

void func_31()
{
	int iVar0;
	
	if (func_436())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar0 /*10*/].f_1))
		{
			if (!MISC::IS_BIT_SET(Local_122.f_209, iVar0))
			{
				if (!func_11(&(Local_122.f_240[iVar0 /*2*/])))
				{
					if (func_24(Local_122.f_2[iVar0 /*10*/].f_1))
					{
						func_10(&(Local_122.f_240[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_122.f_240[iVar0 /*2*/]), 10000, 0))
				{
					MISC::SET_BIT(&(Local_122.f_209), iVar0);
				}
			}
		}
		iVar0++;
	}
}

void func_32(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!MISC::IS_BIT_SET(Local_122.f_205, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_392[iParam0 /*11*/].f_5, iVar0))
			{
				MISC::SET_BIT(&(Local_122.f_205), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_122.f_206, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_392[iParam0 /*11*/].f_2, iVar0))
			{
				MISC::SET_BIT(&(Local_122.f_206), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_122.f_208, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_392[iParam0 /*11*/].f_3, iVar0))
			{
				MISC::SET_BIT(&(Local_122.f_208), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_122.f_207, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_392[iParam0 /*11*/].f_4, iVar0))
			{
				MISC::SET_BIT(&(Local_122.f_207), iVar0);
			}
		}
		if (!MISC::IS_BIT_SET(Local_122.f_209, iVar0))
		{
			if (MISC::IS_BIT_SET(Local_392[iParam0 /*11*/].f_6, iVar0))
			{
				MISC::SET_BIT(&(Local_122.f_209), iVar0);
			}
			else if (MISC::IS_BIT_SET(Local_392[iParam0 /*11*/].f_7, iVar0))
			{
				MISC::SET_BIT(&(Local_122.f_209), iVar0);
			}
			else if (MISC::IS_BIT_SET(Local_392[iParam0 /*11*/].f_8, iVar0))
			{
				MISC::SET_BIT(&(Local_122.f_209), iVar0);
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	if (func_436())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_122.f_210, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_122.f_2[iVar0 /*10*/].f_2))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_122.f_2[iVar0 /*10*/].f_2), NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)), true);
					MISC::SET_BIT(&(Local_122.f_210), iParam0);
				}
			}
			else
			{
				MISC::SET_BIT(&(Local_122.f_210), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312763;
}

void func_37()
{
	struct<3> Var0;
	
	Var0 = { func_40() };
	if (!func_39(Var0))
	{
		func_38(&(Local_122.f_269), Var0, 1, 1103626240);
	}
}

void func_38(var uParam0, struct<3> Param1, bool bParam4, int iParam5)
{
	if (!MISC::DOES_POP_MULTIPLIER_AREA_EXIST(*uParam0))
	{
		*uParam0 = MISC::ADD_POP_MULTIPLIER_AREA(Param1 - Vector(iParam5, iParam5, iParam5), Param1 + Vector(iParam5, iParam5, iParam5), 1f, 0.25f, bParam4, true);
	}
}

int func_39(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_40()
{
	return func_41(Local_122.f_197 + 1);
}

Vector3 func_41(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 58.3f, -2560.8f, 5.0046f };
			break;
		
		case 2:
			Var0 = { -1082.958f, -1254.855f, 4.4214f };
			break;
		
		case 3:
			Var0 = { 900.0288f, -1029.762f, 33.9714f };
			break;
		
		case 4:
			Var0 = { 247.7398f, -1950.657f, 22.0817f };
			break;
		
		case 5:
			Var0 = { -404.5349f, 189.8157f, 80.518f };
			break;
		
		case 6:
			Var0 = { -1048.123f, -2017.136f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1267.888f, -818.313f, 16.0992f };
			break;
		
		case 8:
			Var0 = { -879.1935f, -2731.856f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 274.4458f, -3004f, 4.6994f };
			break;
		
		case 10:
			Var0 = { 1566.514f, -2137.776f, 76.6229f };
			break;
		
		case 11:
			Var0 = { -314.3864f, -2721.792f, 5.0003f };
			break;
		
		case 12:
			Var0 = { 497.1263f, -635.2617f, 23.8849f };
			break;
		
		case 13:
			Var0 = { -546.1532f, -1775.258f, 20.6843f };
			break;
		
		case 14:
			Var0 = { -307.6485f, -1364.914f, 30.2957f };
			break;
		
		case 15:
			Var0 = { 366.4851f, 333.3937f, 102.4653f };
			break;
		
		case 16:
			Var0 = { 921.407f, -1556.423f, 29.7756f };
			break;
		
		case 17:
			Var0 = { 746.1452f, -882.8884f, 24.0639f };
			break;
		
		case 18:
			Var0 = { 1042.462f, -2177.798f, 30.4457f };
			break;
		
		case 19:
			Var0 = { 1013.842f, -2514.939f, 27.3049f };
			break;
		
		case 20:
			Var0 = { -272.0028f, 193.3204f, 84.5697f };
			break;
		
		case 21:
			Var0 = { 549.6728f, -1929.794f, 23.8145f };
			break;
		
		case 22:
			Var0 = { 126.5327f, -2200.172f, 5.0333f };
			break;
	}
	return Var0;
}

int func_42(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_43()
{
	int iVar0;
	
	if (func_436())
	{
		func_66();
		if (!func_65())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			func_44(iVar0);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < func_30())
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar0 /*10*/].f_1))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_44(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	
	iVar0 = func_64();
	fVar5 = func_63();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iParam0 /*10*/].f_1))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (func_62(iVar0))
			{
				if (func_61(Local_122.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar4))
					{
						Local_122.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_122.f_2[iParam0 /*10*/].f_8 = uVar4;
					}
				}
				else if (func_46(&(Local_122.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_122.f_2[iParam0 /*10*/].f_5, Local_122.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), Global_1575009);
					PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), true);
					if ((iParam0 % 2) == 0)
					{
						iVar6 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1));
						fVar7 = SYSTEM::TO_FLOAT(iVar6);
						if (fVar5 != 0f)
						{
							fVar7 = (fVar7 * fVar5);
						}
						iVar6 = SYSTEM::ROUND(fVar7);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), iVar6);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), iVar6, 0);
						PED::SET_PED_ARMOUR(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 100);
						WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), joaat("WEAPON_ASSAULTRIFLE"), 9999999, false, true);
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), joaat("WEAPON_ASSAULTRIFLE"), 9999999, false, true);
					}
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 281, true);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 1);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 42, true);
					PED::SET_PED_HIGHLY_PERCEPTIVE(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 43, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 44, true);
					PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 0, false);
					}
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), 146, true);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), Local_122.f_2[iParam0 /*10*/].f_5, 7f, false, false);
					PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_122.f_2[iParam0 /*10*/].f_1), true);
					MISC::SET_BIT(&(Local_122.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (Local_122.f_197)
	{
		case 1:
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_46(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_47(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if (!func_61(Local_122.f_103[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_122.f_103[iVar0 /*5*/].f_4)
		{
			if (func_48(Local_122.f_103[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_122.f_103[iVar0 /*5*/] };
				*uParam2 = Local_122.f_103[iVar0 /*5*/].f_3;
				Local_122.f_103[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_122.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (PED::IS_ANY_PED_NEAR_POINT(Local_122.f_103[iVar0 /*5*/], Local_122.f_103[iVar0 /*5*/].f_1, (Local_122.f_103[iVar0 /*5*/].f_2 + 1f), 1f) || PED::IS_ANY_PED_NEAR_POINT(Local_122.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!MISC::IS_BIT_SET(Local_122.f_212, iVar0))
					{
						MISC::CLEAR_AREA(Local_122.f_103[iVar0 /*5*/], 5f, true, false, false, true);
						MISC::SET_BIT(&(Local_122.f_212), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_48(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2405074.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam14 > 0f)
	{
		if (func_54(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_49(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_49(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1327(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_51(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_1327(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_50(iVar1) || !bParam10) && !Global_2426097[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_51(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_51(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_50(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2426097[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

Vector3 func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1590682[iVar0 /*883*/].f_854) && !func_39(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_52(iParam0);
}

Vector3 func_52(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_53()
{
	return Global_2452015.f_18;
}

int func_54(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_1327(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam9) && bParam6) && func_55(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_52(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_55(int iParam0)
{
	if (func_60(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2515401 = { func_59(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2515401))
	{
		return 1;
	}
	if (func_56(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_57();
}

struct<13> func_59(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_60(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2515401 = { func_59(iParam0) };
		Global_2515414 = { func_59(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515401))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515414))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515331, 35, &Global_2515401);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515366, 35, &Global_2515414);
				if (Global_2515331 == Global_2515366)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_61(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_62(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

float func_63()
{
	return 2f;
}

int func_64()
{
	int iVar0;
	
	switch (Local_122.f_195)
	{
		case 0:
			iVar0 = joaat("g_m_m_armgoon_01");
			break;
		
		case 1:
			iVar0 = joaat("g_m_m_mexboss_01");
			break;
		
		case 2:
			iVar0 = joaat("g_m_y_korean_02");
			break;
	}
	return iVar0;
}

int func_65()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[1 /*10*/].f_1))
	{
		return 0;
	}
	return 1;
}

int func_66()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	struct<31> Var6;
	struct<3> Var40;
	
	iVar0 = func_199();
	iVar1 = func_64();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
		{
			if (func_62(iVar0))
			{
				if (!func_61(Local_122.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_122.f_262 };
					fVar5 = Local_122.f_265;
					if (!MISC::IS_BIT_SET(Local_122.f_211, 0))
					{
						MISC::CLEAR_AREA(Var2, 5f, true, false, false, true);
						MISC::SET_BIT(&(Local_122.f_211), 0);
					}
					if (func_196(&(Local_122.f_2[0 /*10*/].f_2), iVar0, Var2, fVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						ENTITY::_0x352E2B5CF420BF3B(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_2), 1);
						func_195(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2));
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false, 0);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), true);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false);
						VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), true);
						VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), 0.08f);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), Global_262145.f_15091, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), true);
						VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), true);
						VEHICLE::_0x2311DD7159F00582(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), true);
						VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), 2, 2);
						VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), 3, 2);
					}
				}
				else
				{
					Var6.f_4 = 1125515264;
					Var6.f_5 = 1;
					Var6.f_6 = 1;
					Var6.f_8 = 1082130432;
					Var6.f_9 = 1176255488;
					Var6.f_10 = 1;
					Var6.f_13 = 1;
					Var6.f_15 = 2;
					Var6.f_22 = 2;
					Var6.f_25 = 1;
					Var6.f_26 = 1;
					Var6.f_29 = 1123024896;
					Var6.f_30 = 1;
					Var6 = 0f;
					Var6.f_1 = 0;
					Var6.f_4 = 200f;
					Var6.f_5 = 1;
					Var6.f_6 = 1;
					Var6.f_12 = 1;
					Var6.f_3 = 1;
					Var40 = { func_193(Local_122.f_2[0 /*10*/].f_5, Local_122.f_2[0 /*10*/].f_8, 20f) };
					if (func_68(Local_122.f_2[0 /*10*/].f_5, Var40, iVar0, 0, &(Local_122.f_262), &(Local_122.f_2[0 /*10*/].f_8), &Var6))
					{
						Local_122.f_265 = Local_122.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (func_62(iVar1))
				{
					if (func_67(&(Local_122.f_2[0 /*10*/].f_1), Local_122.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1), true, 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1), true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1), Global_1575009);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1), 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1), 3, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1), 2, true);
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_1))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[1 /*10*/].f_1))
		{
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (func_62(iVar1))
				{
					if (func_67(&(Local_122.f_2[1 /*10*/].f_1), Local_122.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), true);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), true, 0f);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), Global_1575009);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), 42, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), 3, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), 2, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), 5, true);
						WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1), joaat("WEAPON_MICROSMG"), 9999999, false, true);
						Local_122.f_2[1 /*10*/].f_2 = Local_122.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_67(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_68(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<60> Var5;
	struct<60> Var65;
	
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2405074.f_514)
	{
		Global_2405074.f_514 = 0;
		return 0;
	}
	if (!func_192(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!Global_2405074.f_601 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_606) < func_191(0))
	{
		if (!Global_2405074.f_671 == 0)
		{
			Global_2405074.f_671 = 0;
			func_190();
			func_189();
		}
		return 0;
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_670)
	{
		if (!Global_2405074.f_671 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_674) < func_191(0))
			{
				return 0;
			}
			else
			{
				Global_2405074.f_671 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_672) > 30000)
		{
			Global_2405074.f_671 = 0;
		}
		if (!Global_2405074.f_671 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_674) > func_191(1))
			{
				Global_2405074.f_671 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_182(Param0))
		{
			if (func_181(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405074.f_671 == 0)
	{
		if (SYSTEM::VDIST(Global_2405074.f_689, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2405074.f_692 != iParam6)
		{
			return 0;
		}
	}
	PATHFIND::_0x07FB139B592FA687((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2405074.f_671 == 0)
	{
		Global_2405074.f_676 = 0;
		Global_2405074.f_672 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405074.f_670 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405074.f_674 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2405074.f_689 = { Param0 };
		Global_2405074.f_692 = iParam6;
		Global_2405074.f_675 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_180();
		func_190();
		if (!uParam10->f_27 || (((((((func_179(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2540612.f_921) && !Global_2540612.f_910) && !Global_2540612.f_918) && !Global_2540612.f_922) && !Global_2540612.f_930) && !Global_2540612.f_942))
		{
			func_160(Param0, iParam6);
		}
		if (func_145(Param0))
		{
			func_160(Param0, iParam6);
		}
		Global_2405074.f_671 = 2;
	}
	switch (Global_2405074.f_671)
	{
		case 2:
			if (PATHFIND::_ARE_PATH_NODES_LOADED_IN_AREA((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405074.f_677 = { Param0 };
				Global_2405074.f_680 = 0f;
				if (Global_2540612.f_921)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_48(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_143(Param0, *uParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2405074.f_677 = { Param0 };
					Global_2405074.f_680 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { Param3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					if (uParam10->f_32 && Global_2405074.f_676 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam10->f_30;
						Var5.f_29 = uParam10->f_31;
					}
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					Var5.f_59 = uParam10->f_33;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_89(&(Global_2405074.f_677), &(Global_2405074.f_680), &Var5);
				}
				func_86(Global_2405074.f_677, Global_2405074.f_680, iParam6, &(Global_2405074.f_668));
				Global_2405074.f_666 = 0;
				Global_2405074.f_667 = 0;
				Global_2405074.f_676++;
				Global_2405074.f_673 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2405074.f_672 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2405074.f_671 = 3;
			}
			break;
		
		case 3:
			if (Global_2405074.f_666)
			{
				if (Global_2405074.f_668 == Global_2405074.f_669)
				{
					if (Global_2405074.f_667)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_85(Global_2405074.f_677, Global_2405074.f_680, iParam6, 1, 1036831949))
							{
								Global_2405074.f_671 = 4;
								Global_2405074.f_694 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_83(Global_2405074.f_677, 0);
						func_82(-1);
					}
				}
				else
				{
					Global_2405074.f_666 = 0;
					Global_2405074.f_667 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_673) > 3000)
			{
				func_82(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_694) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405074.f_693))
					{
						if (NETWORK::_0x4DF7CFFF471A7FB1(Global_2405074.f_693))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2405074.f_693))
							{
								if (func_81(Global_2405074.f_677, Global_2405074.f_680, iParam6, PLAYER::PLAYER_ID(), 0) || func_70(Global_2405074.f_677, Global_2405074.f_680, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_83(Global_2405074.f_677, 0);
									func_82(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_83(Global_2405074.f_677, 0);
								func_82(-1);
							}
						}
					}
					else
					{
						func_82(-1);
					}
				}
				else
				{
					func_82(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405074.f_677 = { Param0 };
			Global_2405074.f_680 = 0f;
			Var65.f_6 = 1082130432;
			Var65.f_7 = 1176255488;
			Var65.f_8 = 1;
			Var65.f_10 = 1;
			Var65.f_13 = 1;
			Var65.f_15 = 1;
			Var65.f_16 = 1;
			Var65.f_31 = 1;
			Var65.f_34 = joaat("tailgater");
			Var65.f_38 = 2;
			Var65.f_45 = 2;
			Var65.f_49 = 1123024896;
			Var65.f_53 = 999;
			Var65.f_54 = 1176256410;
			Var65.f_55 = 1;
			Var65.f_56 = 1;
			Var65.f_57 = 1;
			Var65.f_9 = iParam7;
			Var65.f_3 = 3.5f;
			Var65.f_10 = uParam10->f_5;
			Var65.f_4 = *uParam10;
			Var65.f_12 = 1;
			Var65.f_13 = 0;
			Var65.f_15 = uParam10->f_6;
			Var65.f_11 = uParam10->f_7;
			Var65.f_6 = uParam10->f_8;
			Var65.f_7 = uParam10->f_9;
			Var65 = { Param3 };
			Var65.f_34 = iParam6;
			Var65.f_31 = uParam10->f_13;
			Var65.f_30 = 1;
			Var65.f_48 = uParam10->f_14;
			Var65.f_56 = uParam10->f_25;
			Var65.f_57 = uParam10->f_26;
			Var65.f_30 = uParam10->f_30;
			Var65.f_29 = uParam10->f_31;
			Var65.f_59 = uParam10->f_33;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var65.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var65.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var65.f_49 = uParam10->f_29;
			func_89(&(Global_2405074.f_677), &(Global_2405074.f_680), &Var65);
			Global_2405074.f_671 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405074.f_689 = { Param0 };
	Global_2405074.f_692 = iParam6;
	Global_2405074.f_674 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2405074.f_513 = 0;
		*uParam8 = { Global_2405074.f_677 };
		*uParam9 = Global_2405074.f_680;
		func_69(1);
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)
{
	Global_2405074.f_671 = 0;
	func_180();
	func_190();
	if (bParam0)
	{
		func_189();
	}
}

int func_70(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_1327(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_55(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_80(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_71(func_52(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_71(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_79(iParam7, 1008981770))
	{
		func_72(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_72(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_78(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_73(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.x - Var3.x));
}

void func_73(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_76(iParam0);
		if (iVar0 != 0)
		{
			func_74(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_74(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_75(iParam0, &Global_1315831);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1315831[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1315831[iVar0], &(Global_1315835[iVar0 /*3*/]), &(Global_1315842[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315835[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315842[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315835[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315842[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315835[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315842[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315849[iVar0] = (Global_1315842[iVar0 /*3*/] - Global_1315835[iVar0 /*3*/]);
		Global_1315852[iVar0] = (Global_1315842[iVar0 /*3*/].f_1 - Global_1315835[iVar0 /*3*/].f_1);
		Global_1315855[iVar0] = (Global_1315842[iVar0 /*3*/].f_2 - Global_1315835[iVar0 /*3*/].f_2);
		if (Global_1315849[iVar0] > Global_1315858)
		{
			Global_1315858 = Global_1315849[iVar0];
		}
		if (Global_1315855[iVar0] > Global_1315859)
		{
			Global_1315859 = Global_1315855[iVar0];
		}
		iVar0++;
	}
	Global_1315860 = (Global_1315858 * -0.5f);
	Global_1315863 = (Global_1315858 * 0.5f);
	Global_1315860.f_1 = ((((0.5f * Global_1315852[0]) + Global_1315852[1]) + Global_1315831.f_3) * -1f);
	Global_1315863.f_1 = (0.5f * Global_1315852[0]);
	Global_1315860.f_2 = (Global_1315855[0] * -0.5f);
	Global_1315863.f_2 = (Global_1315855[0] * 0.5f);
	*uParam1 = { Global_1315860 };
	*uParam2 = { Global_1315863 };
}

void func_75(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_77(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_78(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.x);
	fVar1 = SYSTEM::SIN(Param1.x);
	Var2.x = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_79(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_73(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_80(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_71(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	if (Global_1312332 && (iParam4 == joaat("kosatka") || iParam9 == joaat("kosatka")))
	{
		func_72(Param0, fParam3, iParam4, &Global_1707740, &(Global_1707740.f_3), &(Global_1707740.f_6), 1036831949);
		func_72(Param5, fParam8, iParam9, &(Global_1707740.f_7), &(Global_1707740.f_10), &(Global_1707740.f_13), 1036831949);
		if (MISC::_0xA0AD167E4B39D9A2(Global_1707740, Global_1707740.f_3, Global_1707740.f_6, Global_1707740.f_7, Global_1707740.f_10, Global_1707740.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_73(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
		Var20 = { 0f, Var17.f_1, 0f };
		func_78(&Var20, 0f, 0f, fParam3);
		Var23 = { 0f, Var14.f_1, 0f };
		func_78(&Var23, 0f, 0f, fParam3);
		Var26 = { (MISC::ABSF((Var17.x - Var14.x)) * 0.5f), 0f, 0f };
		func_78(&Var26, 0f, 0f, fParam3);
		Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
		Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((Var17.f_2 - Var14.f_2))));
		Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
		Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((Var17.f_2 - Var14.f_2))));
		Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
		Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((Var17.f_2 - Var14.f_2))));
		Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
		Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((Var17.f_2 - Var14.f_2))));
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_71(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam10)
		{
			if (func_80(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_81(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1327(iVar1, 0, 1) && func_1327(iParam5, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_71(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_71(func_52(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_71(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1327(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_71(func_52(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_82(int iParam0)
{
	if (Global_2405074.f_676 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2405074.f_675) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405074.f_676 < iParam0))
		{
			Global_2405074.f_671 = 2;
		}
		else
		{
			Global_2405074.f_671 = 5;
		}
	}
	else
	{
		Global_2405074.f_671 = 5;
	}
}

void func_83(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_84(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2405074.f_2730[iParam3 /*3*/] };
		Global_2405074.f_2730[iParam3 /*3*/] = { Param0 };
		func_83(Var0, iParam3 + 1);
	}
}

int func_84(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2405074.f_2730[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_85(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_190();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405074.f_681[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_72(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = MISC::ABSF((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0.5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
				}
				Global_2405074.f_681[iVar7] = NETWORK::_0x2B1C623823DB0D9D(Var0, Var3, fParam6);
				Global_2405074.f_685[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2405074.f_693 = Global_2405074.f_681[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_86(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	struct<8> Var0;
	
	*uParam5 = func_88(&Param0, &uParam3, &iParam4);
	Var0 = -1730227041;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_87(1, 1));
}

var func_87(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_1327(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_88(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	return iVar16;
}

void func_89(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_138(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_90(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_90(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float* fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float* fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_129(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	bVar10 = true;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		bVar10 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		bVar10 = false;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2412480.f_162 = 0;
	Global_2412480.f_163 = 0;
	Global_2412480.f_164 = -99;
	Global_2412480.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412480[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412480.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_76(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412480.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412480.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_122(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_119(Var1))
									{
										Var1 = { func_114(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_113(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_109(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_129(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.x, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_108(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_134(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_107(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_48(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_48(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_99(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412480.f_162)
																										{
																											Global_2412480[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412480.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412480.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412480.f_162 == 0)
																									{
																										Global_2412480[0 /*3*/] = { Var1 };
																										Global_2412480.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412480.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_98(Var1, fVar4, iVar16);
																													iVar16 = Global_2412480.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412480.f_162++;
																									if (Global_2412480.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412480[Global_2412480.f_162 /*3*/] = { Var1 };
																									Global_2412480.f_121[Global_2412480.f_162] = fVar4;
																									Global_2412480.f_162++;
																									if (func_109(Var1, uParam2))
																									{
																										Global_2412480.f_163++;
																									}
																									if (Global_2412480.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412480.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2412480.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
						{
							func_96(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412480.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412480[0 /*3*/] };
						uVar30 = Global_2412480.f_121[0];
						Global_2412480[0 /*3*/] = { Global_2412480[iVar26 /*3*/] };
						Global_2412480.f_121[0] = Global_2412480.f_121[iVar26];
						Global_2412480[iVar26 /*3*/] = { Var27 };
						Global_2412480.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412480[0 /*3*/] };
						*uParam1 = Global_2412480.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_95(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_134(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_129(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_91(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412480.f_164 = iVar8;
	}
	return 0;
}

void func_91(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_92(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_92(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_94(Param0, fParam3, iParam4, iParam5, 0) || func_93(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_93(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_71(Param0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1327(iVar2, 0, 1) && func_1327(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_94(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_1327(iVar1, 0, 1) && func_1327(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1327(iVar1, 0, 1) && func_1327(iParam4, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_52(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417956.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1327(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_52(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_95(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_114(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_119(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_96(int iParam0, var uParam1)
{
	if (!func_109(Global_2412480[iParam0 /*3*/], uParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_97(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_96(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_96(iParam0 + 1, uParam1);
	}
}

void func_97(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412480[iParam0 /*3*/] = { Global_2412480[iParam0 + 1 /*3*/] };
			Global_2412480.f_121[iParam0] = Global_2412480.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_98(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2412480[iParam4 /*3*/] };
	uVar3 = Global_2412480.f_121[iParam4];
	Global_2412480[iParam4 /*3*/] = { Param0 };
	Global_2412480.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412480.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_98(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_99(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_100(iVar5))
		{
			Var1 = { func_52(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_100(int iParam0)
{
	if (func_1327(iParam0, 0, 1))
	{
		if (!func_105(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_102(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_101(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_102(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_55(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_102(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_103(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_103(int iParam0)
{
	return func_104(iParam0);
}

bool func_104(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_105(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_106())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_106()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_107(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_80(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_80(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_108(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_81(Param0, fParam3, iParam4, iParam5, iParam6) || func_143(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_109(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_112(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_110(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_110(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_111(&Param3, &Param6);
	if (((!Param0.x >= Param3.x || !Param0.f_1 >= Param3.f_1) || !Param0.x <= Param6.x) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_111(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_112(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

int func_113(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_102(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_71(Param0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_4794 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_4794)
			{
				if (Global_4718592.f_4797[iVar0 /*280*/].f_15 != 0)
				{
					if (func_71(Param0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_58904 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_58904)
			{
				if (Global_4718592.f_58908[iVar0 /*339*/].f_12 != 0)
				{
					if (func_71(Param0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969055.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969055.f_233[iVar0], false))
				{
					if (func_71(Param0, ENTITY::GET_ENTITY_COORDS(Global_969055.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969055.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969055.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969055.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969055.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_969055.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_969055.f_119[iVar0], false))
				{
					if (func_71(Param0, ENTITY::GET_ENTITY_COORDS(Global_969055.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_969055.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_969055.f_119[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_114(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_117(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_116(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_115(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_115(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_117(Param0, *fParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(Param0, *fParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_115(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_115(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_115(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_73(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_116(struct<3> Param0)
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_117(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_78(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_118(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_118(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_119(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_121(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_120(Param0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_120(Param0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_120(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_121(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411475[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411475[1])
	{
		if (Param0 < Global_2411479[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411475[2])
	{
		if (Param0 < Global_2411479[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411479[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411479[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_122(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_128(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_127(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 0, fVar4);
			if (func_123(Var1, &uVar0) || func_128(Var1))
			{
				Var1 = { *uParam0 };
				func_127(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_123(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_126())
	{
		return 0;
	}
	iVar1 = func_125();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_124(Param0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_124(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_112(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405074.f_2728) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_110(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_125()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_126()
{
	return Global_1678289.f_482;
}

void func_127(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_78(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_78(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.x;
	uParam0->f_1 = Var3.f_1;
}

int func_128(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405074.f_591 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2405074.f_588);
		if (fVar0 < Global_2405074.f_591)
		{
			return 1;
		}
	}
	return 0;
}

bool func_129(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405074.f_26.f_18)
	{
		switch (Global_2405074.f_26.f_17)
		{
			case 0:
				if (func_112(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_110(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_130(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_130(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_127(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_133(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_131(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_112(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_110(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_131(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_132(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var3.x, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_118(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_118(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.x, Param1.f_1, 0f, Param4.x, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_132(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_132(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.x, Var26.f_1, Var29.x, Var29.f_1)));
		if (!bParam9)
		{
			if (func_118(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_118(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_132(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

void func_133(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1);
	fVar4 = (*uParam0 - Param4);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.x = (Param1 - fParam7);
			}
			else
			{
				Var0.x = (Param4 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.x = (Param4 + fParam7);
		}
		else
		{
			Var0.x = (Param1 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_134(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_182(Param0))
	{
		if (func_137(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_135(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_84(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_127(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_135(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_123(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_136(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_123(Var2, &uVar1) || func_128(Var2))
			{
				Var2 = { *uParam0 };
				func_136(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_136(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_130(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_130(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_130(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_127(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_133(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_131(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_137(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409990[iVar0 /*17*/].f_16))
			{
				if (func_124(*uParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409990[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409990[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_136(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_137(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_136(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_138(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2405074.f_1748 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_134(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_129(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2412480.f_162 = 0;
		Global_2412480.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2412480[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2412480.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_141(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_140();
		}
		else
		{
			func_139();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405074.f_1748)
		{
			iVar2 = Global_2405074.f_2154[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405074.f_1749[iVar2 /*4*/] };
				fVar6 = Global_2405074.f_1749[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_108(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_134(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_107(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_48(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_48(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_99(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2412480.f_162)
															{
																Global_2412480[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2412480.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2412480.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412480.f_162 == 0)
														{
															Global_2412480[0 /*3*/] = { Var3 };
															Global_2412480.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2412480.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2412480[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_98(Var3, fVar6, iVar7);
																		iVar7 = Global_2412480.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
													else
													{
														Global_2412480[Global_2412480.f_162 /*3*/] = { Var3 };
														Global_2412480.f_121[Global_2412480.f_162] = fVar6;
														Global_2412480.f_162++;
														if (Global_2412480.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405074.f_1748;
															}
															else if (Global_2412480.f_162 == 40)
															{
																iVar1 = Global_2405074.f_1748;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2412480.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412480.f_163 > 0 && !Global_2412480.f_163 == Global_2412480.f_162)
				{
					func_96(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2412480.f_162);
				Var15 = { Global_2412480[0 /*3*/] };
				uVar18 = Global_2412480.f_121[0];
				Global_2412480[0 /*3*/] = { Global_2412480[iVar0 /*3*/] };
				Global_2412480.f_121[0] = Global_2412480.f_121[iVar0];
				Global_2412480[iVar0 /*3*/] = { Var15 };
				Global_2412480.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2412480[0 /*3*/] };
				*uParam1 = Global_2412480.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2405074.f_1748 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_1748);
				*uParam0 = { Global_2405074.f_1749[iVar0 /*4*/] };
				*uParam1 = Global_2405074.f_1749[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_139()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_140()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_1748);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2405074.f_1748);
		uVar3 = Global_2405074.f_2154[iVar1];
		Global_2405074.f_2154[iVar1] = Global_2405074.f_2154[iVar2];
		Global_2405074.f_2154[iVar2] = uVar3;
		iVar0++;
	}
}

void func_141(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_142(Param0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_142(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405074.f_1748)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2405074.f_1749[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_143(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_144(Param0, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_80(Param0, fParam3, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1327(iVar2, 0, 1) && func_1327(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_144(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_79(iParam3, 1008981770);
	fVar1 = func_79(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_145(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2540612.f_921 && func_146(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam3 = -1;
	iVar2 = func_159(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_147(iVar1))
			{
				if (func_159(Global_1678289.f_496[iVar0 /*3*/], 0) == iVar2)
				{
					*uParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_147(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_158(iParam0);
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1590682[iVar1 /*883*/].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_6 == iParam0)
	{
		return 1;
	}
	if (func_157(PLAYER::PLAYER_ID(), 0) || (func_154(PLAYER::PLAYER_ID()) && func_152(func_153(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_151(PLAYER::PLAYER_ID()) || (func_154(PLAYER::PLAYER_ID()) && func_152(func_153(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_150(PLAYER::PLAYER_ID()) || (func_154(PLAYER::PLAYER_ID()) && func_152(func_153(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_149(PLAYER::PLAYER_ID()) || (func_154(PLAYER::PLAYER_ID()) && func_152(func_153(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_148(PLAYER::PLAYER_ID()) || (func_154(PLAYER::PLAYER_ID()) && func_152(func_153(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_148(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_149(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_150(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_57())
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_57())
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_153(int iParam0)
{
	if (iParam0 != func_57() && func_1327(iParam0, 1, 1))
	{
		return Global_2426097[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_154(int iParam0)
{
	if (iParam0 != func_57() && func_1327(iParam0, 1, 1))
	{
		if (func_156(iParam0) && !func_155(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_155(int iParam0)
{
	if (iParam0 != func_57() && func_1327(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_156(int iParam0)
{
	if (iParam0 != func_57() && func_1327(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_157(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1 && Global_2426097[iParam0 /*443*/].f_314.f_9 != func_57())
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_159(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_124(Param0, &(Global_2409990[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_160(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2405074.f_45.f_316)
	{
		return;
	}
	if (!func_178())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_177(Param0);
		if (iVar1 > -1)
		{
			func_189();
			switch (iVar1)
			{
				case 0:
					func_176(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_176(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_176(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_176(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_176(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_176(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_176(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_176(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_176(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_176(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_176(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_176(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_176(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_176(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_176(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_176(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_176(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_176(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_176(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_176(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_176(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_176(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_176(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_176(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_176(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_176(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_176(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_176(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_176(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_176(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_176(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_176(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_176(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_176(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_176(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_176(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_176(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_176(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_176(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_176(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_176(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_176(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_176(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_176(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_176(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_176(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_176(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_176(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_176(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_176(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_176(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_176(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_176(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_174(78);
					break;
				
				case 11:
					func_174(79);
					break;
				
				case 12:
					func_174(82);
					break;
				
				case 13:
					func_174(81);
					break;
				
				case 14:
					func_174(73);
					break;
				
				case 15:
					func_176(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_176(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_176(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_176(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_174(75);
					break;
				
				case 17:
					func_174(76);
					break;
				
				case 18:
					func_174(77);
					break;
				
				case 19:
					func_176(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_176(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_176(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_176(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_174(80);
					break;
				
				case 21:
				case 25:
					func_174(87);
					break;
				
				case 22:
				case 26:
					func_174(88);
					break;
				
				case 23:
				case 27:
					func_174(89);
					break;
				
				case 24:
				case 28:
					func_174(90);
					break;
				
				case 29:
				case 30:
					if (func_173(iParam3))
					{
						func_174(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28);
					}
					break;
				
				case 31:
					func_176(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_176(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_176(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_176(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_176(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_176(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_176(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_176(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_176(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_176(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_176(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_176(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_176(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_176(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_176(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_176(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_176(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_176(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_176(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_176(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_176(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_176(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_176(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_176(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_176(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_176(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_176(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_176(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_176(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_176(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_176(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_176(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_176(-194.254f, -2018.756f, 26.62f, 75f);
					func_176(-186.956f, -2031.369f, 26.62f, 338f);
					func_176(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_176(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_176(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_176(-233.372f, -2089.601f, 26.62f, 304f);
					func_176(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_176(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_176(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_176(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_176(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_176(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_176(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_176(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_176(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_176(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_176(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_176(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_176(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_176(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_176(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_176(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_170(Param0, &iVar2, &iVar6) || (func_146(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_189();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2405074.f_513 = 1;
				}
				if (!iVar6[iVar0] && func_169(iVar2[iVar0], -1))
				{
					if (func_173(iParam3))
					{
						func_174(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_168(PLAYER::PLAYER_PED_ID()) || func_167(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_166(iParam3))
						{
							func_165(iVar2[iVar0]);
						}
						else if (func_164(iParam3))
						{
							func_163(iVar2[iVar0]);
							func_165(iVar2[iVar0]);
						}
						else
						{
							func_163(iVar2[iVar0]);
							func_165(iVar2[iVar0]);
						}
					}
					else
					{
						func_161(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_174(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_161(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_176(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_176(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_176(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_176(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_176(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_176(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_176(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_176(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_176(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_176(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_176(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_176(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_176(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_176(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_176(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_176(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_176(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_176(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_176(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_176(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_176(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_176(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_176(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_176(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_176(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_176(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_176(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_176(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_176(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_176(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_176(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_176(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_176(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_176(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_176(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_176(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_176(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_176(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_176(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_176(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_176(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_176(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_176(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_176(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_176(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_176(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_176(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_176(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_176(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_176(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_176(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_176(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_176(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_176(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_176(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_176(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_176(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_176(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_176(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_176(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_176(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_176(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_176(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_176(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_176(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_176(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_176(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_176(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_176(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_176(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_176(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_176(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_176(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_176(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_176(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_176(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_176(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_176(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_176(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_176(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_176(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_176(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_176(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_176(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_176(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_176(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_176(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_176(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_176(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_176(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_176(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_176(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_176(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_176(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_176(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_176(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_176(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_176(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_176(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_176(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_176(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_176(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_176(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_176(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_176(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_176(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_176(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_176(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_176(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_176(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_176(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_176(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_176(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_176(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_176(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_176(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_176(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_176(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_176(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_176(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_176(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_176(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_176(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_176(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_176(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_176(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_176(142.7427f, -2536.147f, 5f, 205.0002f);
			func_176(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_176(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_176(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_176(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_176(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_176(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_176(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_176(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_176(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_176(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_176(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_176(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_176(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_176(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_176(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_176(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_176(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_176(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_176(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_176(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_176(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_176(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_176(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_176(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_176(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_176(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_176(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_176(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_176(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_176(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_176(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_176(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_176(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_176(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_176(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_176(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_176(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_176(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_176(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_176(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_176(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_176(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_176(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_176(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_176(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_176(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_176(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_176(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_176(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_176(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_176(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_176(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_176(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_176(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_176(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_176(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_176(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_176(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_176(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_176(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_176(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_176(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_176(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_176(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_176(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_176(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_176(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_176(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_176(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_176(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_176(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_176(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_176(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_176(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_176(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_176(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_176(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_176(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_176(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_176(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_176(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_176(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_176(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_176(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_176(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_176(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_176(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_176(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_176(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_176(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_176(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_176(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_176(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_176(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_176(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_176(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_176(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_176(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_176(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_176(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_176(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_176(-1823.414f, 3092.762f, 31.843f, 330f);
			func_176(-1819.045f, 3100.435f, 31.845f, 330f);
			func_176(-1833.313f, 3075.722f, 31.838f, 330f);
			func_176(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_176(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_176(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_176(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_176(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_176(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_176(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_176(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_176(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_176(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_176(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_176(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_176(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_176(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_176(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_176(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_176(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_176(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_176(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_176(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_176(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_176(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_176(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_176(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_176(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_176(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_176(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_176(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_176(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_176(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_176(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_176(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_176(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_176(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_176(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_176(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_176(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_176(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_176(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_176(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_176(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_176(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_176(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_176(1231.279f, 2910.881f, 43.3085f, 12f);
				func_176(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_176(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_176(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_176(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_176(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_176(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_176(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_176(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_176(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_176(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_176(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_176(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_176(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_176(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_176(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_176(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_176(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_176(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_176(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_176(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_176(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_176(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_176(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_176(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_176(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_176(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_176(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_176(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_176(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_176(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_176(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_176(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_176(3.855f, 2672.388f, 78.437f, 319.2f);
				func_176(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_176(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_176(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_176(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_176(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_176(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_176(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_176(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_176(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_176(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_176(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_176(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_176(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_176(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_176(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_176(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_176(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_176(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_176(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_176(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_176(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_176(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_176(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_176(102.851f, 2688.009f, 51.732f, 224f);
				func_176(109.815f, 2681.012f, 51.112f, 224f);
				func_176(116.355f, 2674.26f, 50.529f, 224f);
				func_176(125.138f, 2665.98f, 49.8f, 224f);
				func_176(132.228f, 2659.865f, 49.26f, 228.4f);
				func_176(139.354f, 2653.536f, 48.737f, 228.4f);
				func_176(88.512f, 2702.995f, 53.042f, 224.199f);
				func_176(81.565f, 2710.357f, 53.67f, 224.199f);
				func_176(75.156f, 2716.981f, 54.223f, 224.199f);
				func_176(68.442f, 2723.806f, 54.775f, 226.199f);
				func_176(61.449f, 2730.606f, 55.308f, 226.199f);
				func_176(53.702f, 2738.167f, 55.855f, 226.199f);
				func_176(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_176(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_176(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_176(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_176(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_176(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_176(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_176(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_176(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_176(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_176(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_176(2714.633f, 3918.283f, 42.938f, 16f);
				func_176(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_176(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_176(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_176(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_176(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_176(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_176(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_176(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_176(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_176(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_176(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_176(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_176(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_176(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_176(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_176(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_176(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_176(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_176(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_176(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_176(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_176(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_176(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_176(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_176(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_176(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_176(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_176(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_176(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_176(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_176(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_176(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_176(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_176(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_176(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_176(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_176(3374.923f, 5520.177f, 20.3207f, 86f);
				func_176(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_176(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_176(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_176(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_176(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_176(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_176(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_176(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_176(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_176(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_176(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_176(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_176(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_176(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_176(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_176(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_176(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_176(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_176(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_176(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_176(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_176(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_176(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_176(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_176(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_176(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(43.848f, 6845.657f, 13.379f, 247.2f);
				func_176(50.379f, 6861.146f, 15.105f, 247.2f);
				func_176(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_176(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_176(55.806f, 6875.081f, 14.824f, 247.2f);
				func_176(11.616f, 6877.079f, 11.466f, 247.2f);
				func_176(18.954f, 6891.633f, 11.37f, 247.2f);
				func_176(26.68f, 6907.587f, 11.869f, 247.2f);
				func_176(7.479f, 6907.895f, 12.024f, 247.2f);
				func_176(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_176(35.591f, 6836.608f, 13.288f, 274.4f);
				func_176(36.028f, 6830.135f, 13.801f, 270.8f);
				func_176(35.114f, 6823.884f, 14.527f, 260.8f);
				func_176(48.779f, 6838.693f, 14.337f, 273.6f);
				func_176(56.738f, 6821.8f, 15.244f, 244.8f);
				func_176(48.377f, 6825.895f, 14.656f, 249.8f);
				func_176(49.11f, 6831.439f, 13.991f, 274.8f);
				func_176(53.544f, 6818.275f, 16.342f, 243f);
				func_176(46.162f, 6821.945f, 15.483f, 249.8f);
				func_176(60.129f, 6836.8f, 15.605f, 269.6f);
				func_176(40.88f, 6802.952f, 20.113f, 242.6f);
				func_176(48.203f, 6799.134f, 20.897f, 244.4f);
				func_176(70.449f, 6809.271f, 16.846f, 243f);
				func_176(61.436f, 6814.266f, 16.71f, 244.2f);
				func_176(56.142f, 6793.458f, 19.806f, 242.6f);
				func_176(65.759f, 6791.12f, 18.433f, 276.4f);
				func_176(77.305f, 6805.391f, 18.558f, 245.6f);
				func_176(85.893f, 6800.243f, 18.535f, 249.8f);
				func_176(56.85f, 6780.582f, 18.822f, 297.999f);
				func_176(65.636f, 6784.669f, 18.789f, 293.799f);
				func_176(74.121f, 6788.498f, 18.739f, 293.799f);
				func_176(97.779f, 6796.32f, 19.02f, 276.799f);
				func_176(106.76f, 6796.983f, 18.914f, 272.599f);
				func_176(112.387f, 6802.858f, 18.994f, 210.599f);
				func_176(117.58f, 6802.644f, 18.663f, 209.399f);
				func_176(122.481f, 6802.693f, 18.468f, 209.399f);
				func_176(127.182f, 6802.686f, 18.218f, 209.399f);
				func_176(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_176(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_176(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_176(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_176(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_176(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_176(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_176(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_176(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_176(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_176(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_176(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_176(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_176(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_176(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_176(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_176(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_176(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_176(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_176(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_176(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_176(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_176(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_176(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_176(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_176(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_176(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_176(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_176(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_176(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_176(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_176(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_176(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_176(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_176(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_176(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_176(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_176(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_176(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_176(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_176(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_176(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_176(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_176(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_176(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_176(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_176(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_176(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_176(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_176(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_176(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_176(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_176(30.027f, 3292.351f, 38.604f, 140.199f);
				func_176(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_176(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_176(23.897f, 3283.152f, 39.381f, 145.399f);
				func_176(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_176(18.723f, 3274.025f, 40.054f, 155.799f);
				func_176(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_176(36.958f, 3298.847f, 38.001f, 127.799f);
				func_176(54.165f, 3311.582f, 36.517f, 303.799f);
				func_176(61.607f, 3317.105f, 35.916f, 306.999f);
				func_176(68.994f, 3323.129f, 35.364f, 308.199f);
				func_176(76.266f, 3329.467f, 34.805f, 311.399f);
				func_176(82.757f, 3335.915f, 34.344f, 316.598f);
				func_176(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_176(14.664f, 3263.688f, 40.931f, 160.398f);
				func_176(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_176(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_176(89.575f, 3343.311f, 33.932f, 318.398f);
				func_176(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_176(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_176(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_176(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_176(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_176(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_176(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_176(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_176(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_176(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_176(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_176(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_176(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_176(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_176(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_176(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_176(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_176(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_176(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_176(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_176(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_176(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_176(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_176(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_176(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_176(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_176(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_176(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_176(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_176(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_176(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_176(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_176(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_176(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_176(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_176(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_176(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_176(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_176(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_176(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_176(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_176(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_58 == 0)
			{
				func_176(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_176(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_176(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_176(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_176(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_176(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_176(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_176(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_176(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_176(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_176(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_176(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_176(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_176(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_176(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_176(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_176(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_176(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_176(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_176(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_176(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_176(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_176(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_176(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_176(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_176(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_176(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_176(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_176(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_176(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_176(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_176(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_176(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_176(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_176(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_176(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_176(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_176(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_162(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_162(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_162(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_162(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_162(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_162(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_162(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_162(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_162(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_162(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_162(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_162(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_162(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_162(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_162(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_162(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_162(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_162(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_162(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_162(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_162(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_73(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var7) };
		func_176(Var10, fParam3);
	}
	else
	{
		func_176(Param0, fParam3);
	}
}

void func_163(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_176(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_176(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_176(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_176(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_176(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_176(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_176(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_176(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_176(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_176(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_176(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_176(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_176(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_176(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_176(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_176(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_176(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_176(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_176(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_176(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_176(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_176(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_176(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_176(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_176(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_176(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_176(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_176(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_176(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_176(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_176(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_176(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_176(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_176(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_176(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_176(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_176(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_176(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_176(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_176(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_176(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_176(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_176(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_176(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_176(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_176(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_176(-1356.991f, -3242.228f, 12.945f, 330f);
			func_176(-1369.313f, -3234.758f, 12.945f, 330f);
			func_176(-1381.751f, -3227.408f, 12.945f, 330f);
			func_176(-1394.302f, -3220.021f, 12.945f, 330f);
			func_176(-1354.339f, -3223.129f, 12.945f, 330f);
			func_176(-1366.302f, -3215.809f, 12.945f, 330f);
			func_176(-1378.492f, -3208.645f, 12.945f, 330f);
			func_176(-1350.322f, -3203.405f, 12.945f, 330f);
			func_176(-1362.684f, -3196.451f, 12.945f, 330f);
			func_176(-1347.089f, -3182.69f, 12.945f, 330f);
			func_176(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_176(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_176(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_176(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_176(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_176(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_176(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_176(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_176(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_176(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_176(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_176(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_176(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_176(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_176(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_176(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_176(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_176(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_176(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_176(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_176(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_176(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_176(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_176(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_176(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_176(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_176(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_176(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_176(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_176(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_176(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_176(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_176(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_176(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_176(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_176(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_176(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_176(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_176(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_176(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_176(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_176(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_176(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_176(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_176(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_176(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_176(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_176(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_176(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_176(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_176(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_176(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_176(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_176(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_176(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_176(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_176(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_176(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_176(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_176(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_176(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_176(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_176(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_176(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_176(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_176(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_176(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_176(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_176(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_176(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_176(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_176(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_176(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_176(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_176(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_176(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_176(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_176(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_176(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_176(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_176(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_176(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_176(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_176(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_176(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_176(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_176(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_176(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_176(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_176(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_176(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_176(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_176(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_176(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_176(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_176(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_176(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_176(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_176(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_176(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_176(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_176(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_176(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_176(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_176(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_176(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_176(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_176(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_176(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_176(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_176(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_176(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_176(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_176(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_176(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_176(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_176(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_176(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_176(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_176(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_176(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_176(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_176(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_176(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_176(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_176(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_176(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_176(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_176(-2484.323f, 3249.294f, 31.828f, 151f);
			func_176(-2495.313f, 3255.746f, 31.828f, 151f);
			func_176(-2472.644f, 3242.684f, 31.828f, 151f);
			func_176(-2506.313f, 3262.27f, 31.823f, 151f);
			func_176(-2461.494f, 3235.93f, 31.828f, 151f);
			func_176(-2505.602f, 3238.049f, 31.828f, 151f);
			func_176(-2481.937f, 3224.8f, 31.828f, 151f);
			func_176(-2516.813f, 3244.266f, 31.823f, 151f);
			func_176(-2470.03f, 3217.899f, 31.828f, 151f);
			func_176(-2493.933f, 3231.308f, 31.828f, 151f);
			func_176(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_176(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_176(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_176(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_176(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_176(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_176(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_176(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_176(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_176(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_176(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_176(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_176(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_176(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_176(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_176(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_176(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_176(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_176(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_176(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_176(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_176(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_176(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_176(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_176(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_176(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_176(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_176(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_176(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_176(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_176(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_176(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_176(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_176(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_176(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_176(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_165(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_176(-947.712f, -3367.704f, 12.944f, 60f);
			func_176(-904.692f, -3293.072f, 12.944f, 60f);
			func_176(-863.71f, -3221.978f, 12.944f, 60f);
			func_176(-966.418f, -3162.773f, 12.944f, 60f);
			func_176(-1007.435f, -3233.93f, 12.944f, 60f);
			func_176(-1050.455f, -3308.559f, 12.944f, 60f);
			func_176(-1145.673f, -3253.456f, 12.944f, 60f);
			func_176(-1098.386f, -3181.428f, 12.944f, 60f);
			func_176(-1060.474f, -3108.903f, 12.944f, 60f);
			func_176(-1155.391f, -3053.632f, 12.944f, 60f);
			func_176(-1196.114f, -3125.146f, 12.948f, 60f);
			func_176(-1235.552f, -3201.86f, 12.944f, 60f);
			func_176(-1344.446f, -3139.177f, 12.944f, 60f);
			func_176(-1301.308f, -3064.341f, 12.944f, 60f);
			func_176(-1260.135f, -2992.912f, 12.944f, 60f);
			func_176(-1364.244f, -2932.9f, 12.98f, 60f);
			func_176(-1405.284f, -3004.108f, 12.96f, 60f);
			func_176(-1448.29f, -3078.72f, 12.95f, 60f);
			func_176(-1535.732f, -3028.318f, 12.945f, 60f);
			func_176(-1492.639f, -2953.558f, 12.945f, 60f);
			func_176(-1451.506f, -2882.2f, 12.944f, 60f);
			func_176(-1553.927f, -2823.12f, 13.002f, 60f);
			func_176(-1595.097f, -2894.571f, 12.944f, 60f);
			func_176(-1637.836f, -2968.714f, 12.945f, 60f);
			func_176(-1740.971f, -2911.484f, 12.944f, 330f);
			func_176(-1696.293f, -2833.978f, 12.944f, 330f);
			func_176(-1651.502f, -2756.273f, 12.945f, 330f);
			func_176(-1588.258f, -2647.575f, 12.944f, 330f);
			func_176(-1536.862f, -2681.378f, 12.945f, 330f);
			func_176(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_176(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_176(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_176(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_176(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_176(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_176(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_176(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_176(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_176(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_176(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_176(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_176(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_176(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_176(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_176(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_176(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_176(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_176(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_176(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_176(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_176(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_176(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_176(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_176(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_176(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_176(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_176(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_176(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_176(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_176(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_167(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_168(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_169(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_170(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 126)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1049924[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049924[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 148)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_147(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_171(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1678289.f_496[iVar0 /*3*/], Global_1678289.f_496[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam3)[iVar2] = iVar0;
				(*uParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_171(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_172(iParam0);
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1590682[iVar1 /*883*/].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_172(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_173(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_174(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_176(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_176(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_176(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_176(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("MPSV_LP0_31"):
			func_176(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_176(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_176(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_176(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_176(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_176(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_176(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_176(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_176(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_176(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_176(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_176(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_176(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_176(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_176(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_176(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_176(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_176(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_176(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_176(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_176(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_176(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_176(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_176(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_176(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_176(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_176(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_176(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_176(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_176(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_176(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_176(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_175())
			{
				func_176(-1608.297f, -556.875f, 33.406f, 310f);
				func_176(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_176(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_176(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_176(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_176(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_176(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_176(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_176(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_176(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_176(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_176(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_175())
			{
				func_176(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_176(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_176(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_176(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_176(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_176(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_176(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_176(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_176(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_176(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_176(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_176(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_175())
			{
				func_176(-102.737f, -597.379f, 35.053f, 160.999f);
				func_176(-97.793f, -589.568f, 35.082f, 134.799f);
				func_176(-110.357f, -619.402f, 35.055f, 160.599f);
				func_176(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_176(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_176(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_176(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_176(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_176(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_176(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_176(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_176(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_175())
			{
				func_176(-59.349f, -779.238f, 43.134f, 228.398f);
				func_176(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_176(-65.212f, -772.66f, 43.151f, 219.398f);
				func_176(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_176(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_176(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_176(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_176(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_176(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_176(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_176(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_176(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_176(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_176(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_176(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_176(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_176(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_176(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_176(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_176(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_176(-1464.5f, -927.9f, 9f, 296.7991f);
			func_176(-1466f, -926.1f, 9f, 296.7991f);
			func_176(-1467.9f, -924.7f, 9f, 296.7991f);
			func_176(-1469.7f, -923.7f, 9f, 296.7991f);
			func_176(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_176(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_176(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_176(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_176(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_176(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_176(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_176(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_176(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_176(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_176(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_176(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_176(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_176(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_176(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_176(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_176(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_176(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_176(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_176(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_176(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_176(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_176(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_176(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_176(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_176(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_176(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_176(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_176(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_176(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_176(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_176(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_176(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_176(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_176(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_176(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_176(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_176(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_176(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_176(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_176(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_176(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_176(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_176(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_176(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_176(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_176(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_176(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_176(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_176(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_176(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_176(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_176(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_176(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_176(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_176(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_176(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_176(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_176(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_176(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_176(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_176(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_176(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_176(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_176(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_176(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_176(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_176(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_176(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_176(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_176(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_176(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_176(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_176(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_176(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_176(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_176(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_176(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_176(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_176(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_176(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_176(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_176(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_176(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_175()
{
	return Global_2452015.f_16;
}

void func_176(struct<3> Param0, float fParam3)
{
	if (Global_2405074.f_1748 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405074.f_1749[Global_2405074.f_1748 /*4*/] = { Param0 };
		Global_2405074.f_1749[Global_2405074.f_1748 /*4*/].f_3 = fParam3;
		Global_2405074.f_1748++;
	}
}

int func_177(struct<3> Param0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2405074.f_2897, Param0) < Global_2405074.f_2905)
	{
		return Global_2405074.f_2900;
	}
	Global_2405074.f_2897 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2412241[iVar0 /*7*/].f_2 + Global_2412241[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_120(Param0, &(Global_2412241[iVar0 /*7*/])))
		{
			Global_2405074.f_2900 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405074.f_2900 = -1;
	return -1;
}

int func_178()
{
	if (MISC::IS_BIT_SET(Global_4456448.f_13, 0) && !Global_2452907.f_6329)
	{
		return 0;
	}
	return 0;
}

int func_179(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_147(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1678289.f_496[iVar0 /*3*/], Global_1678289.f_496[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405074.f_2730[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_181(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2412197[iVar0 /*7*/].f_2 + Global_2412197[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_120(Var1, &(Global_2412197[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_131(&Var1, Global_2412197[iVar0 /*7*/], Global_2412197[iVar0 /*7*/].f_3, Global_2412197[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_182(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_186(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_185(Param0, 1008981770))
			{
				if (!func_137(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_137(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_184(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_183(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_137(&Var1, 0, 0, 0, 1))
					{
						if (!func_137(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_183(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_184(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_124(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_185(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_124(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_186(int iParam0, bool bParam1)
{
	if (func_188() != 0)
	{
		return func_187(iParam0) != 0;
	}
	return func_102(iParam0, bParam1, 0);
}

int func_187(int iParam0)
{
	if (func_1327(iParam0, 0, 1))
	{
		return Global_2426097[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_188()
{
	return Global_30968;
}

void func_189()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405074.f_1749[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_1748 = 0;
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_685[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_685[iVar0])
			{
				if (!Global_2405074.f_681[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2405074.f_681[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2405074.f_681[iVar0]);
						Global_2405074.f_681[iVar0] = -1;
					}
					else
					{
						Global_2405074.f_681[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405074.f_681[iVar0] == -1)
		{
			Global_2405074.f_681[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_191(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_192(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2440277.f_1, iParam0);
	}
	return 1;
}

Vector3 func_193(struct<3> Param0, float fParam3, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_194(Var0, fParam3);
	Var0.x = (Var0.x * fParam4);
	Var0.f_1 = (Var0.f_1 * fParam4);
	Var0.f_2 = (Var0.f_2 * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_194(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.x * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

void func_195(int iParam0)
{
	if (!func_436())
	{
		switch (Local_122.f_195)
		{
			case 0:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, 0);
				break;
			
			case 1:
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iParam0, 2);
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, 15, 1);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, 0, 156);
	}
}

int func_196(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2540612.f_6583 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_197(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_197(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_198(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam5 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam3;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam4;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam5;
	}
}

int func_198(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_199()
{
	int iVar0;
	
	switch (Local_122.f_195)
	{
		case 0:
			iVar0 = joaat("mule");
			break;
		
		case 1:
			iVar0 = joaat("mule");
			break;
		
		case 2:
			iVar0 = joaat("mule");
			break;
	}
	return iVar0;
}

void func_200()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_436())
	{
		return;
	}
	if (Local_122.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_122.f_230)))
	{
		func_10(&(Local_122.f_230), 0, 0);
	}
	iVar1 = func_202();
	if (!func_6(&(Local_122.f_230), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_201())
		{
			iVar2 = 0;
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_199[iVar0]))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (func_62(iVar1))
					{
						if (!func_61(Local_122.f_179[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_122.f_179[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!MISC::IS_BIT_SET(Local_122.f_211, iVar0))
								{
									MISC::CLEAR_AREA(Local_122.f_179[iVar0 /*5*/], 5f, true, false, false, true);
									MISC::SET_BIT(&(Local_122.f_211), iVar0);
								}
								if (func_196(&(Local_122.f_199[iVar0]), iVar1, Local_122.f_179[iVar0 /*5*/], Local_122.f_179[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_122.f_199[iVar0]), true);
									func_195(NETWORK::NET_TO_VEH(Local_122.f_199[iVar0]));
								}
							}
							else
							{
								if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_122.f_179[iVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (PED::IS_ANY_PED_NEAR_POINT(Local_122.f_179[iVar0 /*5*/], Local_122.f_179[iVar0 /*5*/].f_1, (Local_122.f_179[iVar0 /*5*/].f_2 + 1f), 1f) || PED::IS_ANY_PED_NEAR_POINT(Local_122.f_179[iVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!MISC::IS_BIT_SET(Local_122.f_211, iVar0))
									{
										MISC::CLEAR_AREA(Local_122.f_179[iVar0 /*5*/], 6f, true, false, false, true);
										MISC::SET_BIT(&(Local_122.f_211), iVar0);
									}
								}
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_201()
{
	switch (Local_122.f_197)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 8:
			return 2;
		
		default:
	}
	return 3;
}

int func_202()
{
	int iVar0;
	
	switch (Local_122.f_195)
	{
		case 0:
			iVar0 = joaat("speedo");
			break;
		
		case 1:
			iVar0 = joaat("burrito3");
			break;
		
		case 2:
			iVar0 = joaat("gburrito2");
			break;
	}
	return iVar0;
}

void func_203()
{
	if (MISC::IS_BIT_SET(Local_122.f_1, 12))
	{
		return;
	}
	switch (Local_122.f_197)
	{
		case 0:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, true, true, true, true);
			break;
		
		case 1:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, true, true, true, true);
			break;
		
		case 2:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, true, true, true, true);
			break;
		
		case 3:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, true, true, true, true);
			break;
		
		case 4:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, true, true, true, true);
			break;
		
		case 5:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, true, true, true, true);
			break;
		
		case 6:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, true, true, true, true);
			break;
		
		case 7:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, true, true, true, true);
			break;
		
		case 8:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, true, true, true, true);
			break;
		
		case 9:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, true, true, true, true);
			break;
		
		case 10:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, true, true, true, true);
			break;
		
		case 11:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, true, true, true, true);
			break;
		
		case 12:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, true, true, true, true);
			break;
		
		case 13:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, true, true, true, true);
			break;
		
		case 14:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, true, true, true, true);
			break;
		
		case 15:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, true, true, true, true);
			break;
		
		case 16:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, true, true, true, true);
			break;
		
		case 17:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, true, true, true, true);
			break;
		
		case 18:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, true, true, true, true);
			break;
		
		case 19:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, true, true, true, true);
			break;
		
		case 20:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, true, true, true, true);
			break;
		
		case 21:
			Local_122.f_261 = PED::ADD_SCENARIO_BLOCKING_AREA(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, true, true, true, true);
			break;
	}
	MISC::SET_BIT(&(Local_122.f_1), 12);
}

void func_204()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_122.f_223 == 0)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var3 = { func_205() };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, false);
		if (fVar6 > 2500f)
		{
			Local_122.f_223 = Global_262145.f_16142;
		}
		else if (fVar6 > 2000f)
		{
			Local_122.f_223 = Global_262145.f_16143;
		}
		else if (fVar6 > 1500f)
		{
			Local_122.f_223 = Global_262145.f_16144;
		}
		else if (fVar6 > 1000f)
		{
			Local_122.f_223 = Global_262145.f_16145;
		}
		else
		{
			Local_122.f_223 = Global_262145.f_16146;
		}
	}
}

Vector3 func_205()
{
	switch (Local_122.f_197)
	{
		case 0:
			return 57.4898f, -2566.763f, 5.2753f;
		
		case 1:
			return -1080.198f, -1262.176f, 4.6922f;
		
		case 2:
			return 902.1754f, -1028.345f, 33.9666f;
		
		case 3:
			return 248.97f, -1955.611f, 22.1629f;
		
		case 4:
			return -420.2774f, 183.9635f, 79.5661f;
		
		case 5:
			return -1048.901f, -2013.738f, 12.1616f;
		
		case 6:
			return -1269.405f, -811.931f, 16.1114f;
		
		case 7:
			return -872.9662f, -2735.341f, 12.9538f;
		
		case 8:
			return 273.7365f, -3019.411f, 4.7024f;
		
		case 9:
			return 1561.409f, -2134.272f, 76.4751f;
		
		case 10:
			return -304.1417f, -2695.407f, 5.0003f;
		
		case 11:
			return 504.3576f, -651.182f, 23.7512f;
		
		case 12:
			return -529.7162f, -1779.501f, 20.3865f;
		
		case 13:
			return -297.2056f, -1362.507f, 30.2971f;
		
		case 14:
			return 346.6934f, 338.6926f, 104.2013f;
		
		case 15:
			return 962.1667f, -1557.684f, 29.8012f;
		
		case 16:
			return 749.9839f, -887.2051f, 24.0879f;
		
		case 17:
			return 1008.78f, -2144.658f, 29.5516f;
		
		case 18:
			return 1010.923f, -2523.426f, 27.3091f;
		
		case 19:
			return -259.173f, 200.7894f, 84.0941f;
		
		case 20:
			return 540.001f, -1945.595f, 23.9847f;
		
		case 21:
			return 95.5855f, -2215.18f, 5.1712f;
		
		default:
	}
	return 941.8403f, -1560.594f, 30.9244f;
}

void func_206()
{
	int iVar0;
	
	if (!func_61(Local_122.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_207();
	iVar0 = func_1206();
	switch (iVar0)
	{
		case 99:
			switch (Local_122.f_197)
			{
				case 0:
					Local_122.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_122.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				
				case 1:
					Local_122.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_122.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				
				case 2:
					Local_122.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_122.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				
				case 3:
					Local_122.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_122.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				
				case 4:
					Local_122.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_122.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				
				case 5:
					Local_122.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_122.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				
				case 6:
					Local_122.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_122.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				
				case 7:
					Local_122.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_122.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				
				case 8:
					Local_122.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_122.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				
				case 9:
					Local_122.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_122.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				
				case 10:
					Local_122.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_122.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				
				case 11:
					Local_122.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_122.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				
				case 12:
					Local_122.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_122.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				
				case 13:
					Local_122.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_122.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				
				case 14:
					Local_122.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_122.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				
				case 15:
					Local_122.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_122.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				
				case 16:
					Local_122.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_122.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				
				case 17:
					Local_122.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_122.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				
				case 18:
					Local_122.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_122.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				
				case 19:
					Local_122.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_122.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				
				case 20:
					Local_122.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_122.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				
				case 21:
					Local_122.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_122.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				
				default:
					Local_122.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_122.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		
		case 0:
			switch (Local_122.f_197)
			{
				case 0:
					Local_122.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_122.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_122.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_122.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_122.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_122.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_122.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_122.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_122.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_122.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_122.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_122.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_122.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_122.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_122.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_122.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				
				case 1:
					Local_122.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_122.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_122.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_122.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_122.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_122.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_122.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_122.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_122.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_122.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_122.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_122.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_122.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_122.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_122.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_122.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				
				case 2:
					Local_122.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_122.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_122.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_122.f_103[1 /*5*/].f_3 = 303.745f;
					Local_122.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_122.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_122.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_122.f_103[3 /*5*/].f_3 = 175.276f;
					Local_122.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_122.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_122.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_122.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_122.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_122.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_122.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_122.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				
				case 3:
					Local_122.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_122.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_122.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_122.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_122.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_122.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_122.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_122.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_122.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_122.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_122.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_122.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_122.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_122.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_122.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_122.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				
				case 4:
					Local_122.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_122.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_122.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_122.f_103[1 /*5*/].f_3 = 228.321f;
					Local_122.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_122.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_122.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_122.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_122.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_122.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_122.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_122.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_122.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_122.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_122.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_122.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				
				case 5:
					Local_122.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_122.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_122.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_122.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_122.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_122.f_103[2 /*5*/].f_3 = 197.023f;
					Local_122.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_122.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_122.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_122.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_122.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_122.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_122.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_122.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_122.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_122.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_122.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_122.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_122.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_122.f_179[1 /*5*/].f_3 = 280.333f;
					Local_122.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_122.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				
				case 6:
					Local_122.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_122.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_122.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_122.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_122.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_122.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_122.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_122.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_122.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_122.f_103[4 /*5*/].f_3 = 39.795f;
					Local_122.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_122.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_122.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_122.f_179[0 /*5*/].f_3 = 254.419f;
					Local_122.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_122.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				
				case 7:
					Local_122.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_122.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_122.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_122.f_103[1 /*5*/].f_3 = 335.853f;
					Local_122.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_122.f_103[2 /*5*/].f_3 = 33.564f;
					Local_122.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_122.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_122.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_122.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_122.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_122.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_122.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_122.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_122.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_122.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_122.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_122.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_122.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_122.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_122.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_122.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_122.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_122.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_122.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_122.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				
				case 8:
					Local_122.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_122.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_122.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_122.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_122.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_122.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_122.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_122.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_122.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_122.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_122.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_122.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_122.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_122.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_122.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_122.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				
				case 9:
					Local_122.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_122.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_122.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_122.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_122.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_122.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_122.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_122.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_122.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_122.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_122.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_122.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_122.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_122.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_122.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_122.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_122.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_122.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_122.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_122.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_122.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_122.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				
				case 10:
					Local_122.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_122.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_122.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_122.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_122.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_122.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_122.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_122.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_122.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_122.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_122.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_122.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_122.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_122.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_122.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_122.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_122.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_122.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_122.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_122.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_122.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_122.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				
				case 11:
					Local_122.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_122.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_122.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_122.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_122.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_122.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_122.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_122.f_103[3 /*5*/].f_3 = 303.125f;
					Local_122.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_122.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_122.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_122.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_122.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_122.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_122.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_122.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_122.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_122.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_122.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_122.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_122.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_122.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				
				case 12:
					Local_122.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_122.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_122.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_122.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_122.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_122.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_122.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_122.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_122.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_122.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_122.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_122.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_122.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_122.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_122.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_122.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_122.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_122.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_122.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_122.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_122.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_122.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				
				case 13:
					Local_122.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_122.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_122.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_122.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_122.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_122.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_122.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_122.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_122.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_122.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_122.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_122.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_122.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_122.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_122.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_122.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_122.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_122.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_122.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_122.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_122.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_122.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				
				case 14:
					Local_122.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_122.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_122.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_122.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_122.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_122.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_122.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_122.f_103[3 /*5*/].f_3 = 257.871f;
					Local_122.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_122.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_122.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_122.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_122.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_122.f_103[6 /*5*/].f_3 = 201.951f;
					Local_122.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_122.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_122.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_122.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_122.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_122.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_122.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_122.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				
				case 15:
					Local_122.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_122.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_122.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_122.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_122.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_122.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_122.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_122.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_122.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_122.f_103[4 /*5*/].f_3 = 241.449f;
					Local_122.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_122.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_122.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_122.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_122.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_122.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_122.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_122.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_122.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_122.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_122.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_122.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_122.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_122.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_122.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_122.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				
				case 16:
					Local_122.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_122.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_122.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_122.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_122.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_122.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_122.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_122.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_122.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_122.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_122.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_122.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_122.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_122.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_122.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_122.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_122.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_122.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_122.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_122.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_122.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_122.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_122.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_122.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_122.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_122.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				
				case 17:
					Local_122.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_122.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_122.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_122.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_122.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_122.f_103[2 /*5*/].f_3 = 2.675f;
					Local_122.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_122.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_122.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_122.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_122.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_122.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_122.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_122.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_122.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_122.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_122.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_122.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_122.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_122.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_122.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_122.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_122.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_122.f_179[1 /*5*/].f_3 = 259.47f;
					Local_122.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_122.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				
				case 18:
					Local_122.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_122.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_122.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_122.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_122.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_122.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_122.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_122.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_122.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_122.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_122.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_122.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_122.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_122.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_122.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_122.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_122.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_122.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_122.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_122.f_103[9 /*5*/].f_3 = 125.381f;
					Local_122.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_122.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_122.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_122.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_122.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_122.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				
				case 19:
					Local_122.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_122.f_103[0 /*5*/].f_3 = 121.811f;
					Local_122.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_122.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_122.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_122.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_122.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_122.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_122.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_122.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_122.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_122.f_103[5 /*5*/].f_3 = 103.808f;
					Local_122.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_122.f_103[6 /*5*/].f_3 = 262.768f;
					Local_122.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_122.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_122.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_122.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_122.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_122.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_122.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_122.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_122.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_122.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_122.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_122.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				
				case 20:
					Local_122.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_122.f_103[0 /*5*/].f_3 = 311.177f;
					Local_122.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_122.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_122.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_122.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_122.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_122.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_122.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_122.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_122.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_122.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_122.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_122.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_122.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_122.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_122.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_122.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_122.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_122.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_122.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_122.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				
				case 21:
					Local_122.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_122.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_122.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_122.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_122.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_122.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_122.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_122.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_122.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_122.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_122.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_122.f_103[5 /*5*/].f_3 = 248.253f;
					Local_122.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_122.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_122.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_122.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_122.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_122.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_122.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_122.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_122.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_122.f_179[0 /*5*/].f_3 = 139.258f;
					Local_122.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_122.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_122.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_122.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				
				default:
					Local_122.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_122.f_103[0 /*5*/].f_3 = 114.28f;
					Local_122.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_122.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_122.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_122.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_122.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_122.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_122.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_122.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_122.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_122.f_103[5 /*5*/].f_3 = 337.606f;
					Local_122.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_122.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_122.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_122.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_122.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_122.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_122.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_122.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_122.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_122.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_122.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_122.f_103[11 /*5*/].f_3 = 287.341f;
					Local_122.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_122.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_122.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_122.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_122.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_122.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_207()
{
	if (Local_122.f_195 != -1)
	{
		return Local_122.f_195;
	}
	Local_122.f_195 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	return Local_122.f_195;
}

int func_208(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_209(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_210()
{
	char* sVar0;
	
	func_215();
	if (MISC::IS_BIT_SET(iLocal_746, 9))
	{
		return;
	}
	if (func_1208())
	{
		if (!MISC::IS_BIT_SET(iLocal_746, 0))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			MISC::SET_BIT(&iLocal_746, 0);
		}
		if (!MISC::IS_BIT_SET(iLocal_746, 1))
		{
			if (!func_436())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (AUDIO::TRIGGER_MUSIC_EVENT(sVar0))
			{
				MISC::SET_BIT(&iLocal_746, 1);
			}
		}
		if (!func_436())
		{
			if (!MISC::IS_BIT_SET(iLocal_746, 3))
			{
				if (MISC::IS_BIT_SET(Local_122.f_1, 13))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						MISC::SET_BIT(&iLocal_746, 3);
					}
				}
			}
		}
		if (!func_436())
		{
			if (MISC::IS_BIT_SET(Local_122.f_1, 1))
			{
				if (!MISC::IS_BIT_SET(iLocal_746, 4))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_UNDER_ATTACK_STOP"))
					{
						MISC::SET_BIT(&iLocal_746, 4);
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_746, 6))
		{
			if ((((MISC::IS_BIT_SET(Local_122.f_1, 3) || MISC::IS_BIT_SET(Local_122.f_1, 15)) || MISC::IS_BIT_SET(Local_122.f_1, 5)) || MISC::IS_BIT_SET(Local_122.f_1, 9)) || MISC::IS_BIT_SET(Local_122.f_1, 8))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_UNDER_ATTACK_FAIL"))
				{
					MISC::SET_BIT(&iLocal_746, 6);
				}
			}
		}
		if (func_436())
		{
			if (!MISC::IS_BIT_SET(iLocal_746, 16))
			{
				if (Local_122.f_215 == -1)
				{
					if (func_211("DCONTRA_OBJ4"))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							MISC::SET_BIT(&iLocal_746, 16);
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_746, 17))
			{
				if (Local_122.f_215 != -1)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						MISC::SET_BIT(&iLocal_746, 17);
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_746, 18))
			{
				if (MISC::IS_BIT_SET(Local_122.f_1, 4))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("EXEC1_DEFEND_FLEEING_STOP"))
					{
						MISC::SET_BIT(&iLocal_746, 18);
					}
				}
			}
		}
	}
}

int func_211(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_214())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_212(sParam0);
}

bool func_212(char* sParam0)
{
	if (!func_214())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_213(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12));
}

bool func_213(char* sParam0)
{
	if (!func_214())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

int func_214()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

void func_215()
{
	if (MISC::IS_BIT_SET(iLocal_746, 8))
	{
		if (MISC::IS_BIT_SET(iLocal_746, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_746, 10))
			{
				if (MISC::IS_BIT_SET(iLocal_746, 11))
				{
					if (!MISC::IS_BIT_SET(iLocal_746, 12))
					{
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);
						AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", false);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_746, 15))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("APT_COUNTDOWN_30S_KILL"))
					{
						MISC::SET_BIT(&iLocal_746, 15);
					}
				}
				if (MISC::IS_BIT_SET(iLocal_746, 15))
				{
					if (!MISC::IS_BIT_SET(iLocal_746, 13))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("APT_FADE_IN_RADIO"))
						{
							MISC::SET_BIT(&iLocal_746, 13);
						}
					}
					if (MISC::IS_BIT_SET(iLocal_746, 13))
					{
						MISC::SET_BIT(&iLocal_746, 10);
					}
				}
			}
		}
	}
}

void func_216()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_1208() && !func_434())
	{
		return;
	}
	if (MISC::IS_BIT_SET(iLocal_745, 15))
	{
		if (!MISC::IS_BIT_SET(iLocal_745, 16))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
				{
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					MISC::SET_BIT(&iLocal_745, 16);
				}
			}
		}
		return;
	}
	if (func_436())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
	if (!MISC::IS_BIT_SET(iLocal_745, 17))
	{
		if (fVar3 < 250000f)
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			MISC::SET_BIT(&iLocal_745, 17);
		}
	}
	else if (fVar3 > 360000f)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&iLocal_745, 17);
	}
}

void func_217()
{
	struct<3> Var0;
	
	if (!func_1208() && !func_434())
	{
		return;
	}
	if (func_436())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!func_61(Var0, 0f, 0f, 0f, 0))
	{
		func_218(169, Var0, &uLocal_860, 1140457472, 1144750080, 0);
	}
}

void func_218(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if ((((func_273(PLAYER::PLAYER_ID()) && !func_272(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 8)) && (func_271(PLAYER::PLAYER_ID()) || func_270(PLAYER::PLAYER_ID()))) || func_39(Param1))
	{
		return;
	}
	Global_1676120 = { Param1 };
	fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Param1);
	func_268(iParam0, fVar0);
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_267(PLAYER::PLAYER_ID()) || func_265(PLAYER::PLAYER_ID()))
		{
			if (!HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
			{
				HUD::PAUSE_MENU_ACTIVATE_CONTEXT(1344549371);
			}
		}
		else if (HUD::PAUSE_MENU_IS_CONTEXT_ACTIVE(1344549371))
		{
			HUD::PAUSE_MENU_DEACTIVATE_CONTEXT(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!(func_264(PLAYER::PLAYER_ID(), 21) || func_264(PLAYER::PLAYER_ID(), 25)))
		{
			func_263(Param1, 1, 0);
		}
		if (!*uParam4 && func_1327(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 1;
			if (func_262(iParam0))
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(func_261(iParam0));
				if (func_260(iParam0, -1))
				{
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, true);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), true);
					}
					MISC::SET_BIT(&(Global_1676120.f_3), 0);
				}
			}
			if (func_259(iParam0))
			{
				fVar1 = func_258(iParam0);
				if (fVar1 != 1f)
				{
					func_255(fVar1);
					MISC::SET_BIT(&(Global_1676120.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_254(iParam0) && func_267(PLAYER::PLAYER_ID()))
				{
					func_252(1);
					func_251(2);
				}
			}
			func_250(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_249(PLAYER::PLAYER_ID(), 19))
			{
				func_248(19);
			}
		}
		if (*uParam4 && func_1327(PLAYER::PLAYER_ID(), 1, 1))
		{
			*uParam4 = 0;
			if (func_262(iParam0))
			{
				if (MISC::IS_BIT_SET(Global_1676120.f_3, 0))
				{
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
					PLAYER::SET_MAX_WANTED_LEVEL(5);
					MISC::CLEAR_BIT(&(Global_1676120.f_3), 0);
				}
			}
			if (func_259(iParam0))
			{
				func_247();
				MISC::CLEAR_BIT(&(Global_1676120.f_3), 1);
			}
			if (iParam7 && !func_273(PLAYER::PLAYER_ID()))
			{
				if (func_245(PLAYER::PLAYER_ID()) != 152)
				{
					func_221();
				}
			}
			if (func_220(2))
			{
				func_252(0);
				func_219(2);
			}
		}
	}
}

void func_219(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_2540612.f_5188.f_45), iParam0);
}

bool func_220(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2540612.f_5188.f_45, iParam0);
}

void func_221()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_24), &Global_2409333, 2);
	MISC::_COPY_MEMORY(&(Global_2405074.f_26), &Global_2409335, 19);
	func_243();
	func_224(1, 1, 0);
	func_222();
}

void func_222()
{
	func_223(0, 0);
}

void func_223(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_224(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_COPY_MEMORY(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_242();
	}
	if (!bParam2)
	{
		func_227(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_226(0);
	func_225();
}

void func_225()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_226(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_227(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_241())
		{
			func_240();
		}
		Global_2405074.f_708.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_238();
		func_231(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_228();
	}
}

void func_228()
{
	if (func_241() && !func_230())
	{
		func_240();
	}
	if (func_230())
	{
		func_229();
	}
	else
	{
		func_238();
		func_231(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_229()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_230()
{
	if ((Global_2405074.f_1746 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_1227.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440277.f_2005.f_703.f_16 != func_57())
	{
		if (MISC::IS_BIT_SET(Global_2426097[Global_2440277.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_232())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_232()
{
	if ((((((func_245(PLAYER::PLAYER_ID()) == 229 || func_245(PLAYER::PLAYER_ID()) == 191) || func_237()) || func_236()) || func_235(PLAYER::PLAYER_ID())) || Global_2516075.f_227 == 1) || (Global_2405074.f_1747 && func_233(PLAYER::PLAYER_ID())))
	{
		return 0;
	}
	return 1;
}

int func_233(int iParam0)
{
	if (func_271(iParam0))
	{
		return 1;
	}
	if (func_234(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_234(int iParam0)
{
	return func_249(iParam0, 20);
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2516074;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

var func_236()
{
	return Global_1574411;
}

int func_237()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	if (func_241() && !func_230())
	{
		func_240();
	}
	func_239();
	Global_2405074.f_708 = 0;
}

void func_239()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_240()
{
	if (func_230())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518)
	{
		MISC::_COPY_MEMORY(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_241()
{
	if ((Global_2405074.f_1747 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405074.f_708.f_518) && SCRIPT::IS_THREAD_ACTIVE(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_242()
{
	MISC::_COPY_MEMORY(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_243()
{
	func_244();
}

void func_244()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

int func_245(int iParam0)
{
	if (func_246(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_246(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_247()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2540612.f_5184))
	{
		if (!Global_2540612.f_5184 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2540612.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540612.f_5184 = -1;
	Global_2540612.f_5183 = 1f;
}

void func_248(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_4), iParam0);
}

bool func_249(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

void func_250(int iParam0)
{
	MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_4), iParam0);
}

void func_251(int iParam0)
{
	MISC::SET_BIT(&(Global_2540612.f_5188.f_45), iParam0);
}

void func_252(int iParam0)
{
	if (func_253() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_253()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
		case 179:
		case 189:
		case 193:
		case 198:
		case 205:
			return 1;
		
		default:
	}
	return 0;
}

void func_255(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_256())
	{
		return;
	}
	fVar0 = (Global_2540612.f_5183 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2540612.f_5184))
	{
		if (!Global_2540612.f_5184 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540612.f_5183 = fParam0;
	Global_2540612.f_5184 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

int func_256()
{
	switch (func_188())
	{
		case 0:
			return func_257();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_257()
{
	switch (Global_2464823)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

float func_258(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 157:
		case 159:
		case 151:
		case 148:
		case 164:
		case 152:
		case 153:
		case 154:
		case 155:
		case 160:
		case 162:
		case 166:
		case 173:
		case 169:
		case 167:
		case 168:
		case 170:
		case 178:
		case 179:
		case 189:
		case 180:
		case 182:
		case 183:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 199:
		case 201:
		case 185:
		case 197:
		case 186:
		case 198:
		case 195:
		case 205:
		case 207:
		case 208:
		case 209:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
		case 201:
		case 191:
		case 198:
		case 180:
		case 200:
		case 208:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_260(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 148:
		case 164:
		case 152:
		case 153:
		case 160:
			return 1;
		
		case 168:
			if ((iParam1 != 2 && iParam1 != 10) && iParam1 != 7)
			{
				return 1;
			}
			break;
		
		case 170:
		case 166:
		case 173:
			return 1;
		
		case 179:
		case 183:
		case 181:
		case 189:
		case 191:
		case 192:
		case 193:
		case 194:
		case 186:
		case 199:
		case 185:
		case 201:
		case 198:
		case 195:
		case 180:
		case 207:
		case 208:
		case 209:
		case 210:
		case 214:
		case 217:
		case 218:
		case 215:
		case 216:
		case 219:
		case 220:
		case 221:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
		case 227:
			return 1;
		
		case 190:
			if (((iParam1 != 6 && iParam1 != 9) && iParam1 != 7) && iParam1 != 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

float func_261(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 0f;
		
		case 144:
			return 0f;
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
		case 173:
		case 183:
		case 185:
		case 197:
		case 186:
		case 201:
		case 191:
		case 198:
		case 207:
		case 208:
		case 209:
		case 200:
		case 195:
		case 180:
		case 216:
		case 218:
		case 215:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
		case 227:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

void func_263(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam3;
	Global_2405074.f_45.f_53 = iParam4;
}

bool func_264(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_212, iParam1);
}

int func_265(int iParam0)
{
	if (func_266(iParam0))
	{
		if (func_267(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_266(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_57())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_249(iParam0, 9);
	}
	return 0;
}

void func_268(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_269(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_1188();
	}
}

int func_269(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_12530;
		
		case 142:
			return Global_262145.f_12518;
		
		case 157:
			return Global_262145.f_12485;
		
		case 159:
			return Global_262145.f_12468;
		
		case 162:
			return Global_262145.f_12579;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_270(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

bool func_272(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 2);
}

int func_273(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

void func_274()
{
	if (!func_436())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_122.f_1, 4))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_122.f_1, 18))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_122.f_1, 17))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_122.f_2[0 /*10*/].f_2))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2)))
				{
					func_278(&(Local_122.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 15))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_122.f_2[0 /*10*/].f_2))
		{
			if (func_275(Local_122.f_2[0 /*10*/].f_2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
				{
					NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), true, true);
					MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_275(int iParam0)
{
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0))
	{
		return 1;
	}
	if (func_276(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_276(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_277(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_277(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_278(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*uParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

void func_279(var uParam0, int* iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
{
	int iVar0;
	int iVar1[32];
	bool bVar34;
	int iVar35;
	char* sVar36;
	int iVar37;
	struct<4> Var38;
	int iVar42;
	int iVar43;
	int iVar44;
	float fVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	struct<2> Var57;
	
	if (func_424(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_422() || iParam2 == 28)
	{
		if (func_368(iParam1, iParam2, uParam3, Global_1574191, 0, func_420(), sParam7))
		{
			func_367(1);
			if ((!func_365() && !func_363()) || MISC::IS_BIT_SET(Global_2540612.f_4652, 1))
			{
				if (func_362())
				{
					func_357();
				}
				else
				{
					GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_356(1);
						Global_1574191 = 0;
						iVar54 = -1;
						if (Global_1574412 != 1)
						{
							func_355(iParam1, 0, 0);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
						{
							iVar52 = 0;
							while (iVar52 < 32)
							{
								iVar1[iVar52] = -1;
								iVar52++;
							}
							iVar52 = 0;
							while (iVar52 < 32)
							{
								if (func_1327(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((func_351(iVar35) || Global_2426097[iVar35 /*443*/].f_240 != -1) || func_350(iVar35))
										{
											iVar44 = iVar35;
											if (func_266(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_347(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_344(PLAYER::PLAYER_ID(), 0) && func_245(PLAYER::PLAYER_ID()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_343())
							{
								if (func_1327(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
								}
								else
								{
									iVar35 = func_57();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_342(iVar35) && func_338(iVar35, iParam2)) && func_1327(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1590682[iVar44 /*883*/].f_211.f_6;
								Var38 = { func_333(iVar35) };
								if (iVar35 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_59(iVar35) };
								iVar37 = func_327(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
								}
								Global_1574191++;
								if ((uParam0[iVar52 /*42*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*42*/])->f_22;
								}
								if ((uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									iVar46 = (uParam0[iVar52 /*42*/])->f_31;
								}
								if ((uParam0[iVar52 /*42*/])->f_41 != -1)
								{
									iVar47 = (uParam0[iVar52 /*42*/])->f_41;
								}
								iVar43 = (uParam0[iVar52 /*42*/])->f_9;
								if (((uParam0[iVar52 /*42*/])->f_9 != -1 || (uParam0[iVar52 /*42*/])->f_22 != -1f) || (uParam0[iVar52 /*42*/])->f_31 != -1)
								{
									if (!func_343())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_322(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_321(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*42*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_316(iVar35, 0);
								if (bVar34)
								{
									if (func_315(iVar35, 1) && iVar1[iVar44] != -1)
									{
										iVar53 = iVar1[iVar44];
									}
									else
									{
										iVar53 = (iVar0 + iVar56);
										iVar56++;
									}
								}
								uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
								if ((uParam0[iVar52 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var57, "UW_TM", 16);
									StringIntConCat(&Var57, (uParam0[iVar52 /*42*/])->f_39, 16);
								}
								if (func_314(iParam5))
								{
									func_313(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_313(iVar35, iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								MISC::SET_BIT(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							if (func_1327(iVar35, 0, 1) && !MISC::IS_BIT_SET(iVar49, iVar35))
							{
								iVar35 = PLAYER::INT_TO_PLAYERINDEX(iVar52);
							}
							else
							{
								iVar35 = func_57();
							}
							if (func_342(iVar35))
							{
								if (func_1327(PLAYER::INT_TO_PLAYERINDEX(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1590682[iVar44 /*883*/].f_211.f_6;
									Var38 = { func_333(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_59(iVar35) };
									iVar37 = func_327(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar37);
									}
									Global_1574191++;
									iVar51 = func_316(iVar35, 1);
									if (bVar34)
									{
										if (func_315(iVar35, 1))
										{
											iVar53 = iVar1[iVar52];
										}
										else
										{
											iVar53 = (iVar0 + iVar56);
											iVar56++;
										}
									}
									uParam3->f_38[iVar44 /*2*/].f_1 = iVar53;
									func_292(iVar35, PLAYER::GET_PLAYER_NAME(iVar35), iParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_289(uParam3, iParam1, iParam2);
						}
						func_9(&(uParam3->f_21));
						func_288();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_287(uParam3, iParam1);
							func_286(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_287(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_282(uParam3))
						{
							Global_1574412 = 1;
						}
						func_280(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_288();
			func_356(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_280(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_281(0);
	}
}

void func_281(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_282(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar15 != func_57() && func_1327(iVar15, 0, 1))
	{
		Var2 = { func_59(iVar15) };
		iVar1 = func_285(uParam0, uParam0->f_37);
		if (func_284(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_283(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_283(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar16 = 1;
							func_283(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_283(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_NETWORK_CAN_COMMUNICATE_WITH_GAMER_2(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar16 = 1;
							func_283(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar16 = 1;
						func_283(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar16;
}

void func_283(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_284(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_285(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_286(int* iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(bParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_287(var uParam0, int* iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_35);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_288()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_289(var uParam0, int* iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_57())
		{
			if (func_1327(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_291(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_290(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_290(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_ICON"))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

int func_291(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_292(int iParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_312() && iParam4 < func_311())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam2, sVar1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_310("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
			}
			func_310(sParam1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_310("");
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
			}
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			func_310("");
			if (uParam3->f_108 == 6)
			{
				func_310("");
			}
			else
			{
				func_310(&sParam5);
			}
			func_297(uParam3, iParam0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam9);
			if (func_296(uParam3))
			{
				func_295("DPAD_FRIEND");
			}
			else if (func_294(uParam3))
			{
				func_295("DPAD_FRIEND");
			}
			else if (func_293(uParam3))
			{
				func_295("DPAD_CREW");
			}
			else
			{
				func_295("");
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

bool func_293(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_294(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_295(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_296(var uParam0)
{
	if (func_294(uParam0) && func_293(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_297(var uParam0, int iParam1)
{
	if (func_309(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(121);
	}
	else if (func_301(iParam1))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2426097[iParam1 /*443*/].f_420, 0))
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(123);
	}
	else
	{
		if (func_298())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam0->f_36);
	}
}

int func_298()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_299() || func_175())
		{
			return 1;
		}
	}
	return 0;
}

bool func_299()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_175();
	}
	return func_300(Global_4456448.f_82708);
}

int func_300(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0)
{
	if ((func_1327(iParam0, 0, 1) && func_305()) && func_302(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_302(int iParam0, bool bParam1)
{
	return func_303(iParam0, bParam1, 1);
}

int func_303(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_304(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_57() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	if (iParam0 != func_57())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_57())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_305()
{
	if (func_273(PLAYER::PLAYER_ID()) || func_308())
	{
		if (!func_306(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	return 1;
}

int func_306(int iParam0)
{
	if (func_307(iParam0) == 236 || func_307(iParam0) == 150)
	{
		return func_271(iParam0);
	}
	return 0;
}

int func_307(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_308()
{
	switch (func_245(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_309(int iParam0)
{
	if (func_298())
	{
		if (func_1327(iParam0, 0, 1))
		{
			return func_266(iParam0);
		}
	}
	if ((func_1327(iParam0, 0, 1) && func_305()) && func_304(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_310(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_311()
{
	int iVar0;
	
	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_312()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_313(int iParam0, int* iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_312() && iParam3 < func_311())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam1, sVar1))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_310("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_295(sParam16);
				}
				else
				{
					func_310(&(uParam2->f_1));
				}
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_310("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
				}
				if (func_343())
				{
					func_310("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, true);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_295(&(uParam2->f_104));
					}
					else
					{
						func_310("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam10);
				}
				else
				{
					func_310("");
				}
				if (uParam2->f_108 == 6)
				{
					func_310("");
				}
				else
				{
					func_310(&sParam4);
				}
				func_297(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_310("");
					func_310("");
				}
				else
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(sParam8);
				}
				if (func_296(uParam2))
				{
					func_295("DPAD_FRIEND");
				}
				else if (func_294(uParam2))
				{
					func_295("DPAD_FRIEND");
				}
				else if (func_293(uParam2))
				{
					func_295("DPAD_CREW");
				}
				else
				{
					func_295("");
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	}
}

int func_314(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_315(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_266(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_57();
}

int func_316(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_273(iParam0)) && !func_234(iParam0))
	{
		iVar0 = func_320();
	}
	iVar1 = func_319(iParam0);
	if (!iVar1 == -1)
	{
		return func_317(iVar1);
	}
	return iVar0;
}

int func_317(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_318(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_318(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_319(int iParam0)
{
	if (!iParam0 == func_57())
	{
		if (func_315(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_320()
{
	return 21;
}

char* func_321(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_322(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_326(iParam3))
	{
		*fParam1 = (func_323(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_314(iParam3))
	{
		*fParam1 = (func_323(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_323(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_325(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::SHOULD_USE_METRIC_MEASUREMENTS())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_324(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_324(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_325(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_326(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_327(int iParam0)
{
	int iVar0;
	
	iVar0 = func_330(iParam0);
	if (iVar0 == -1)
	{
		func_328(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_328(int iParam0, bool bParam1)
{
	if (!func_1327(iParam0, 0, 1))
	{
		return;
	}
	if (func_330(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_329(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_329(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_330(int iParam0)
{
	int iVar0;
	
	if (!func_1327(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_331(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_331(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389221[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389382)
	{
		Global_1389221[iVar32 /*5*/] = { Global_1389221[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_332(&(Global_1389221[iVar32 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_332(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_57();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_333(int iParam0)
{
	char cVar0[32];
	
	if (func_1327(iParam0, 0, 1))
	{
		Global_2515401 = { func_59(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_284(Global_2515401))
			{
				if (!NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Global_2515401))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			return cVar0;
		}
		if (func_337(&Global_2515401))
		{
			Global_2515331 = { func_335(iParam0) };
			func_334(&Global_2515331, &cVar0);
		}
	}
	return cVar0;
}

void func_334(int* iParam0, char* sParam1)
{
	NETWORK::NETWORK_CLAN_GET_UI_FORMATTED_TAG(iParam0, 35, sParam1);
}

struct<35> func_335(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_336(iParam0))
	{
		return Global_1312928[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_59(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var13, 35, &Var0);
	return Var13;
}

int func_336(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_337(int* iParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_272(iParam0) || func_341(iParam0)) || func_340(iParam0))
		{
			return 0;
		}
	}
	if (!func_339(iParam0))
	{
		return 0;
	}
	if ((!func_351(iParam0) && Global_2426097[iParam0 /*443*/].f_240 == -1) && !func_350(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_339(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_142, 22);
}

bool func_340(int iParam0)
{
	if (func_272(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 8);
}

int func_341(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 10) || MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_342(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_34(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1590682[iVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_343()
{
	switch (func_245(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_307(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_234(PLAYER::PLAYER_ID()))
	{
		switch (func_245(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	if (func_306(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_344(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_345(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_345(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_346(iParam0, 0);
	return 0;
}

int func_346(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_347(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1327(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((func_351(iVar1) || Global_2426097[iVar1 /*443*/].f_240 != -1) || func_350(iVar1))
				{
					if (func_348(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_348(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_57())
	{
		if (!bParam2)
		{
			if (func_349(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_57())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_349(int iParam0, int iParam1)
{
	if (iParam1 != func_57())
	{
		if (iParam0 != func_57())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_57())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_350(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_351(int iParam0)
{
	if (func_1327(iParam0, 0, 1))
	{
		if (func_1327(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || (func_245(iParam0) == 233 && func_352(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_352(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_353(PLAYER::PLAYER_ID());
	bVar1 = func_353(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_353(int iParam0)
{
	return func_354(&(Global_2426097[iParam0 /*443*/].f_429), 0);
}

bool func_354(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_355(int* iParam0, int iParam1, int iParam2)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

void func_356(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_357()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 1))
	{
		if (func_361())
		{
			func_358();
		}
	}
}

void func_358()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440277.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440277.f_2834[iVar0 /*80*/].f_2 = 5;
			func_359(&(Global_2440277.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_359(var uParam0, int iParam1)
{
	func_360(uParam0, iParam1);
}

void func_360(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_361()
{
	return Global_2440277.f_2834[0 /*80*/].f_1 != 0;
}

int func_362()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 0) && func_361())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 1) && func_361())
	{
		return 1;
	}
	return 0;
}

int func_363()
{
	if (func_361())
	{
		if (func_364(Global_2440277.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_364(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

int func_365()
{
	if (func_361())
	{
		if (func_366(Global_2440277.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_367(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_368(int* iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	char* sVar9;
	
	StringCopy(&Var0, "", 16);
	bVar5 = iParam1 == 20;
	bVar6 = func_419(iParam1);
	fVar7 = func_418();
	iVar8 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_417())
		{
			if (func_416() > 0 && Global_1574193)
			{
				HUD::THEFEED_HIDE_THIS_FRAME();
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_402())
		{
			func_401(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_4655, 26))
	{
		func_401(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_416() == 1)
		{
			func_400(bVar6, iParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_401(iParam0, uParam2, 0);
			MISC::SET_BIT(&(Global_2540612.f_4656), 5);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_416() == 0 && !bParam5))
		{
			func_401(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_399();
				if (iParam1 == 27 || iParam1 == 28)
				{
					HUD::THEFEED_HIDE_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_399();
					if (iParam1 == 27 || iParam1 == 28)
					{
						HUD::THEFEED_HIDE_THIS_FRAME();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (func_400(bVar6, iParam0, 0))
				{
					func_355(iParam0, 0, 0);
					sVar4 = func_397(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_395(iParam1) };
					if (bParam4)
					{
						func_392(iParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_385(iParam0, func_389(uParam2), func_386(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar9 = func_378(uParam2);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
						{
							sVar9 = sParam6;
						}
						func_376(iParam0, sVar9, func_377(), -1);
					}
					else if (func_298())
					{
						uParam2->f_34 = Global_1574192;
						func_392(iParam0, sVar4, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar5)
					{
						iVar8 = func_369(iParam1);
						uParam2->f_34 = Global_1574192;
						func_392(iParam0, sVar4, "", 0, iVar8, Global_1574192, 1);
					}
					else
					{
						iVar8 = func_369(iParam1);
						func_392(iParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_375())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 26:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_374(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_373(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_372(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_370())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_370()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_53();
	}
	return func_371(Global_4456448.f_82708);
}

int func_371(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_372(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 4;
}

bool func_373(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 7;
}

bool func_374(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 2;
}

bool func_375()
{
	return Global_4456448.f_1 == 0;
}

void func_376(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_295(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_295("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_377()
{
	switch (func_245(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_378(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_245(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_381())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_380(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_380(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_379(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_379(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_380(bool bParam0)
{
	return func_302(PLAYER::PLAYER_ID(), bParam0);
}

bool func_381()
{
	return (func_384() && func_382(func_383()));
}

bool func_382(int iParam0)
{
	return func_304(iParam0, 1);
}

int func_383()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35;
}

bool func_384()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148;
}

void func_385(int* iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_295(sParam1);
		}
		else if (func_307(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_295("");
		if (iParam3 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

char* func_386(var uParam0)
{
	int iVar0;
	
	iVar0 = func_307(PLAYER::PLAYER_ID());
	if (func_388())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_387())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

int func_387()
{
	if (func_307(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2540612.f_5109;
	}
	return -1;
}

bool func_388()
{
	return Global_1590555;
}

char* func_389(var uParam0)
{
	int iVar0;
	
	iVar0 = func_307(PLAYER::PLAYER_ID());
	if (func_388())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_391() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_391() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_387())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_390() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_390()
{
	return Global_2540612.f_5112;
}

int func_391()
{
	if (func_307(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2540612.f_5107;
	}
	return -1;
}

void func_392(int* iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_310(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_295(sParam1);
		}
		if (func_417() && iParam6)
		{
			if (func_394())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_295(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
			if (func_393(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(166);
			}
			else if (func_53())
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(220);
			}
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
}

int func_393(int iParam0)
{
	if (func_374(iParam0) || func_373(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_394()
{
	return Global_1574193;
}

struct<4> func_395(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_396(PLAYER::PLAYER_ID()) || func_372(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_298() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_396(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 5;
}

char* func_397(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_298() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_398();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 26:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_398()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_399()
{
	Global_42556 = 1;
}

bool func_400(bool bParam0, int* iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = unk_0x67D02A194A2FC2BD("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_401(int* iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_288();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
			MISC::CLEAR_BIT(&(Global_2540612.f_4656), 5);
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
}

int func_402()
{
	if (func_415())
	{
		return 0;
	}
	if (func_414())
	{
		return 0;
	}
	if (!func_412())
	{
		return 0;
	}
	if (!func_410())
	{
		return 0;
	}
	if (func_409(8, -1))
	{
		return 0;
	}
	if (func_416() == 2)
	{
		return 0;
	}
	if (Global_2540612.f_4607)
	{
		return 0;
	}
	if (func_408())
	{
		return 0;
	}
	else if (!func_102(PLAYER::PLAYER_ID(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_407(1) || func_405(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_404() && Global_1696337 == 2)
	{
		return 0;
	}
	if (func_105(PLAYER::PLAYER_ID()) && !func_404())
	{
		return 0;
	}
	if (Global_1663772)
	{
		return 0;
	}
	if (Global_1663777)
	{
		return 0;
	}
	if (func_220(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690742.f_718.f_5 || Global_1693568.f_718.f_5) || Global_1689770.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697306.f_724.f_5 || Global_1697306.f_744.f_724.f_5) || Global_1697306.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704130.f_726.f_5)
	{
		return 0;
	}
	if (func_403(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_403(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_404()
{
	return (MISC::IS_BIT_SET(Global_4456448.f_30, 12) && MISC::IS_BIT_SET(Global_1696338, 0));
}

int func_405(bool bParam0)
{
	if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_406(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, true);
			if (((iVar0 == joaat("WEAPON_SNIPERRIFLE") || iVar0 == joaat("WEAPON_HEAVYSNIPER")) || iVar0 == joaat("WEAPON_MARKSMANRIFLE")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_407(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_408()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

bool func_409(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377236.f_1048, iParam0);
}

int func_410()
{
	if (func_411() == 0)
	{
		return 1;
	}
	return 0;
}

int func_411()
{
	return Global_1312485.f_18;
}

int func_412()
{
	if (func_413())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_413()
{
	return Global_1312458;
}

bool func_414()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 5;
}

bool func_415()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_416()
{
	return Global_1377236.f_68;
}

int func_417()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_418()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_420()
{
	if (func_421(PLAYER::PLAYER_ID()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_421(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_34(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

int func_422()
{
	if (func_420())
	{
		return 1;
	}
	if (func_340(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_388())
	{
		return 1;
	}
	if (func_273(PLAYER::PLAYER_ID()))
	{
		switch (func_307(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_423(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_423(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_423(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_423(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_424(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_273(PLAYER::PLAYER_ID()) && !func_234(PLAYER::PLAYER_ID())) && !func_306(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_246(PLAYER::PLAYER_ID(), 0) && func_234(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_425(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_425(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_273(iParam0) && !func_272(iParam0)) && !MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_234(iParam0);
	uVar3 = func_433();
	uVar4 = func_427();
	if ((bVar1 && (func_271(iParam0) || func_270(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_267(iParam0)) && !func_426(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540612.f_5188.f_217 != iVar0)
	{
		Global_2540612.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

bool func_426(int iParam0)
{
	return func_249(iParam0, 19);
}

int func_427()
{
	if ((func_249(PLAYER::PLAYER_ID(), 21) || func_249(PLAYER::PLAYER_ID(), 22)) || func_430())
	{
		return 1;
	}
	if (func_428())
	{
		func_250(22);
		return 1;
	}
	return 0;
}

int func_428()
{
	if (func_246(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_433() && !func_429()) || func_264(PLAYER::PLAYER_ID(), 21)) || func_264(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_248(27);
		}
	}
	return 0;
}

bool func_429()
{
	return Global_1312436.f_1;
}

bool func_430()
{
	return func_431(377, -1);
}

int func_431(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2588062[iParam0 /*3*/][func_432(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2551772 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551772 = 1;
		}
	}
	return iVar0;
}

bool func_433()
{
	return Global_1312436;
}

int func_434()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_34(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	else
	{
		iVar0 = func_435();
	}
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Local_392[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

int func_435()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_436()
{
	return Local_122.f_196 == 99;
}

void func_437()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_438(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_438(int iParam0)
{
	struct<6> Var0;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<14> Var18;
	int iVar32;
	int iVar33;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 13))
	{
		iVar32 = 0;
		while (iVar32 < 10)
		{
			if (!MISC::IS_BIT_SET(Local_122.f_209, iVar32))
			{
				if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6, iVar32))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (!MISC::IS_BIT_SET(Local_122.f_205, iVar32))
							{
								if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5, iVar32))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar32 /*10*/].f_2))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_122.f_2[iVar32 /*10*/].f_2)))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_122.f_2[iVar32 /*10*/].f_2))
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
														{
															if (func_1209() == Local_122.f_218)
															{
																MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5), iVar32);
															}
														}
														else if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
														{
															iVar33 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1));
															if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar33))
															{
																MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_5), iVar32);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_A_PED(Var0))
						{
							iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar32 /*10*/].f_1))
							{
								if (iVar14 == NETWORK::NET_TO_PED(Local_122.f_2[iVar32 /*10*/].f_1))
								{
									if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
									{
										if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
										{
											iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
											if (PED::IS_PED_A_PLAYER(iVar13))
											{
												iVar16 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
												if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar16))
												{
													if (Var0.f_5)
													{
														if (iVar16 == PLAYER::PLAYER_ID())
														{
															MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_6), iVar32);
															if (!func_436())
															{
																Var18.f_2 = 925785080;
																Var18.f_10 = PLAYER::PLAYER_ID();
																func_451(Var18, func_452(0));
															}
														}
													}
												}
												else if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7, iVar32))
												{
													if (Var0.f_5)
													{
														MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_7), iVar32);
													}
												}
											}
											else if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8, iVar32))
											{
												if (Var0.f_5)
												{
													MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8), iVar32);
												}
											}
										}
										else if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8, iVar32))
										{
											if (Var0.f_5)
											{
												MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_8), iVar32);
											}
										}
									}
								}
							}
						}
					}
				}
			}
			iVar32++;
		}
		if (!MISC::IS_BIT_SET(iLocal_745, 15))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (func_450(ENTITY::GET_ENTITY_MODEL(iVar14)))
					{
						MISC::SET_BIT(&iLocal_745, 15);
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
				{
					if (func_449(ENTITY::GET_ENTITY_MODEL(Var0)))
					{
						if (!func_448(PLAYER::PLAYER_PED_ID(), ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0), 0))
						{
							if (!func_447(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0), 0, 1))
							{
								MISC::SET_BIT(&iLocal_745, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_434())
	{
		if (!func_249(PLAYER::PLAYER_ID(), 20))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				if (ENTITY::IS_ENTITY_A_PED(Var0))
				{
					iVar14 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
					if (PED::IS_PED_A_PLAYER(iVar14))
					{
						iVar15 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar14);
						if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
							{
								iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
								if (PED::IS_PED_A_PLAYER(iVar13))
								{
									iVar16 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar13);
									if (iVar16 == PLAYER::PLAYER_ID())
									{
										if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar15))
										{
											if (func_315(iVar15, 1))
											{
												if (Local_122.f_218 > -1)
												{
													iVar17 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_122.f_218));
													if (func_348(iVar15, iVar17, 1))
													{
														func_439(0);
														func_1188();
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_439(int iParam0)
{
	if (!func_234(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_425(PLAYER::PLAYER_ID()) != 0)
		{
			func_250(20);
			func_440(func_442());
			if (func_273(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 8);
				}
			}
		}
	}
}

void func_440(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_441() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_441()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_442()
{
	int iVar0;
	
	iVar0 = func_245(PLAYER::PLAYER_ID());
	if (func_446(iVar0) == 0)
	{
		return -1;
	}
	if (func_445(iVar0))
	{
		return 65;
	}
	if (func_444(iVar0))
	{
		return 66;
	}
	if (func_443(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_445(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_446(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
		case 24:
		case 26:
		case 259:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

int func_447(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_56(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_56(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_448(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_VEHICLE(iParam0, iParam1, bParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_449(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_450(int iParam0)
{
	switch (iParam0)
	{
		case joaat("s_m_y_cop_01"):
		case joaat("s_f_y_cop_01"):
		case joaat("s_m_y_swat_01"):
		case joaat("s_m_m_fiboffice_01"):
		case joaat("s_m_y_sheriff_01"):
		case joaat("s_f_y_sheriff_01"):
		case joaat("s_m_y_ranger_01"):
		case joaat("s_f_y_ranger_01"):
		case joaat("s_m_y_blackops_01"):
		case joaat("s_m_m_armoured_01"):
		case joaat("s_m_y_pilot_01"):
		case joaat("s_m_m_fibsec_01"):
			return 1;
			break;
	}
	return 0;
}

void func_451(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = -1949011582;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_452(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_1327(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_453()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_34(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_745, 10))
		{
			MISC::CLEAR_BIT(&iLocal_745, 10);
		}
		return;
	}
	iVar0 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	if (!MISC::IS_BIT_SET(iLocal_745, 10))
	{
		if (Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 != 0)
		{
			Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1 = 0;
		}
		MISC::SET_BIT(&iLocal_745, 10);
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 11))
	{
		MISC::SET_BIT(&iLocal_745, 11);
		func_1091();
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			iVar2 = iVar1;
			iVar3 = Local_392[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_943();
					func_928();
					func_919();
					func_454();
					break;
				
				case 2:
					func_454();
					break;
				
				case 3:
					func_1222();
					break;
				}
			}
	}
}

void func_454()
{
	struct<20> Var0;
	int iVar23;
	char* sVar24;
	var uVar25;
	int iVar26;
	int iVar27;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	iVar23 = func_57();
	iVar26 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar27 = PLAYER::PLAYER_ID();
	if (func_34(PLAYER::PLAYER_ID(), 0))
	{
		iVar26 = func_435();
		iVar27 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	}
	if (!MISC::IS_BIT_SET(Local_392[iVar26 /*11*/].f_1, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_745, 3))
		{
			if (MISC::IS_BIT_SET(Local_122.f_1, 1))
			{
				if (iVar26 == Local_122.f_218 || func_1209() == Local_122.f_218)
				{
					if (func_425(PLAYER::PLAYER_ID()) >= 2)
					{
						sVar24 = func_913(iVar27);
						uVar25 = func_912(iVar27);
						func_910(87, "BIGM_DEFENDED", "BIGM_CONTRAS", sVar24, uVar25, 0, -1, -1, -1, 2, -1);
					}
					if (iVar27 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_745, 6))
						{
							func_792(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_745, 6);
						}
						func_630(169, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
				}
				else if (func_434())
				{
				}
				iLocal_754 = func_20();
				iLocal_755 = (func_20() - func_629(&(Local_122.f_226), 0, 0));
				MISC::SET_BIT(&iLocal_745, 3);
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 4))
			{
				if (MISC::IS_BIT_SET(Local_392[iVar26 /*11*/].f_1, 14))
				{
					if (Local_122.f_221 >= 0)
					{
						iVar23 = PLAYER::INT_TO_PLAYERINDEX(Local_122.f_221);
						if (iVar23 == iVar27)
						{
							func_591(87, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2, 1, 0);
						}
						else if (func_425(iVar27) >= 2)
						{
							sVar24 = func_913(iVar27);
							uVar25 = func_912(iVar27);
							func_910(87, "BIGM_SECURED", "BIGM_CONTRAGR", sVar24, uVar25, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar27 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_745, 6))
						{
							func_792(1, 1, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_745, 6);
						}
						func_630(169, 1, &Var0, 0);
						PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					}
					iLocal_754 = func_20();
					iLocal_755 = (func_20() - func_629(&(Local_122.f_226), 0, 0));
					MISC::SET_BIT(&iLocal_745, 3);
				}
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 3))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_122.f_218 || func_1209() == Local_122.f_218)
				{
					if (func_425(iVar27) >= 2)
					{
						sVar24 = func_913(iVar27);
						uVar25 = func_912(PLAYER::PLAYER_ID());
						func_910(88, "BIGM_DCLOST", "BIGM_CONTRAFD", sVar24, uVar25, 0, -1, -1, -1, 2, -1);
					}
					if (iVar27 == PLAYER::PLAYER_ID())
					{
						if (!MISC::IS_BIT_SET(iLocal_745, 6))
						{
							func_792(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
							MISC::SET_BIT(&iLocal_745, 6);
						}
						func_630(169, 0, &Var0, 0);
					}
				}
				iLocal_754 = func_20();
				iLocal_755 = (func_20() - func_629(&(Local_122.f_226), 0, 0));
				MISC::SET_BIT(&iLocal_745, 3);
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 9))
			{
				if (func_544())
				{
					if (func_425(iVar27) >= 2)
					{
						sVar24 = func_913(iVar27);
						uVar25 = func_912(iVar27);
						func_910(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar24, uVar25, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar27 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_745, 6))
					{
						func_792(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_745, 6);
					}
					func_630(169, 0, &Var0, 0);
				}
				iLocal_754 = func_20();
				iLocal_755 = (func_20() - func_629(&(Local_122.f_226), 0, 0));
				MISC::SET_BIT(&iLocal_745, 3);
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 8))
			{
				if (func_544())
				{
					if (func_425(iVar27) >= 2)
					{
						sVar24 = func_913(iVar27);
						uVar25 = func_912(iVar27);
						func_910(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar24, uVar25, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar27 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_745, 6))
					{
						func_792(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_745, 6);
					}
					func_630(169, 0, &Var0, 0);
				}
				iLocal_754 = func_20();
				iLocal_755 = (func_20() - func_629(&(Local_122.f_226), 0, 0));
				MISC::SET_BIT(&iLocal_745, 3);
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 15))
			{
				if (func_544())
				{
					if (func_425(iVar27) >= 2)
					{
						sVar24 = func_913(iVar27);
						uVar25 = func_912(iVar27);
						func_910(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar24, uVar25, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar27 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_745, 6))
					{
						func_792(0, 2, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_745, 6);
					}
					func_630(169, 0, &Var0, 0);
				}
				iLocal_754 = func_20();
				iLocal_755 = (func_20() - func_629(&(Local_122.f_226), 0, 0));
				MISC::SET_BIT(&iLocal_745, 3);
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 5))
			{
				if (func_544())
				{
					if (func_1208())
					{
						if (func_425(iVar27) >= 2)
						{
						}
					}
					else if (func_425(iVar27) >= 2)
					{
						func_591(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2, 1, 0);
					}
				}
				if (iVar27 == PLAYER::PLAYER_ID())
				{
					if (!MISC::IS_BIT_SET(iLocal_745, 6))
					{
						func_792(0, 8, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_745, 6);
					}
					func_630(169, 0, &Var0, 0);
				}
				MISC::SET_BIT(&iLocal_745, 3);
			}
		}
		if (MISC::IS_BIT_SET(iLocal_745, 3))
		{
			func_1091();
			if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_122.f_218)
			{
				if (!MISC::IS_BIT_SET(Local_122.f_1, 16) && !MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 13))
				{
					if ((((MISC::IS_BIT_SET(Local_122.f_1, 15) || MISC::IS_BIT_SET(Local_122.f_1, 8)) || MISC::IS_BIT_SET(Local_122.f_1, 3)) || func_11(&(Local_122.f_226))) || (func_436() && MISC::IS_BIT_SET(Local_122.f_1, 9)))
					{
						func_487();
					}
					else
					{
						MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
						if (!func_486(38))
						{
							func_485(38);
						}
					}
					if (iLocal_756 == 2)
					{
						MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
					}
					if (iLocal_756 == 3)
					{
						MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
					}
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_746, 8))
			{
				func_483();
				func_481();
				MISC::SET_BIT(&iLocal_746, 8);
			}
			if (!MISC::IS_BIT_SET(iLocal_745, 7))
			{
				if (Local_122.f_219 != -1)
				{
					if (MISC::IS_BIT_SET(iLocal_745, 5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219)))
						{
							func_479(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 432, 0, 0);
							func_478(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 1, 0, 0);
							func_477(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 0, 0, 0);
							func_476(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 0);
							func_473(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), Global_262145.f_12363, 0, 0);
							MISC::SET_BIT(&iLocal_745, 7);
						}
					}
				}
			}
			if (func_455(&uLocal_757, 1, 0) && (MISC::IS_BIT_SET(Local_122.f_1, 16) || MISC::IS_BIT_SET(Local_122.f_1, 5)))
			{
				if (iVar26 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 4);
				}
			}
		}
	}
}

int func_455(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_250(29);
	if ((*uParam0 > 0 && !func_361()) && func_425(PLAYER::PLAYER_ID()) != 0)
	{
		if (!func_471())
		{
			func_470();
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_11(&(uParam0->f_3)))
			{
				func_10(&(uParam0->f_3), 0, 0);
			}
			else if (func_6(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1676120.f_3), 2);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2540612.f_4652), 0);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_469(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_11(&(uParam0->f_5)))
			{
				if (func_6(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_462(iParam2);
				func_469(uParam0, 2);
			}
			break;
		
		case 2:
			func_462(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_456(func_457(0)))
				{
					HUD::CLEAR_HELP(true);
				}
				func_469(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2540612.f_4652), 1);
				MISC::CLEAR_BIT(&(Global_1676120.f_3), 2);
				func_469(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2540612.f_4652), 1);
			MISC::CLEAR_BIT(&(Global_1676120.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_456(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

char* func_457(int iParam0)
{
	if (((func_460(PLAYER::PLAYER_ID()) || func_459(PLAYER::PLAYER_ID())) || func_381()) || iParam0)
	{
		if (func_459(PLAYER::PLAYER_ID()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_345(func_458()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_458()
{
	return Global_1652336;
}

bool func_459(int iParam0)
{
	return func_346(func_245(iParam0), 0);
}

bool func_460(int iParam0)
{
	return func_461(func_245(iParam0));
}

int func_461(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148 && func_304(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_35, 1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 182:
		case 183:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 193:
		case 194:
		case 195:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 205:
		case 207:
		case 208:
		case 209:
		case 210:
		case 211:
			return 1;
	}
	return 0;
}

void func_462(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_2540612.f_4652, 0))
	{
		if (((((((((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2540612.f_833, 2)) && func_1327(PLAYER::PLAYER_ID(), 1, 1)) && !Global_74030) && !Global_58898) && !CAM::IS_SCREEN_FADED_OUT()) && !func_249(PLAYER::PLAYER_ID(), 22)) && func_425(PLAYER::PLAYER_ID()) != 0) && !func_467(func_468())) && !func_460(PLAYER::PLAYER_ID())) && !func_466(func_245(PLAYER::PLAYER_ID()))) && !func_465(func_245(PLAYER::PLAYER_ID())))
		{
			MISC::SET_BIT(&(Global_2540612.f_4652), 1);
			func_464(func_457(iParam0), -1);
			func_463(1);
			MISC::CLEAR_BIT(&(Global_2540612.f_4652), 0);
		}
	}
}

void func_463(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_380(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_361())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Boss_Message_Orange", sVar0, false);
	}
}

void func_464(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 150:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 244:
		case 248:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_466(int iParam0)
{
	switch (iParam0)
	{
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 188:
		case 178:
			return 1;
		
		default:
	}
	return 0;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 169:
		case 168:
			return 1;
		
		default:
	}
	return 0;
}

int func_468()
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_469(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_470()
{
	Global_2464021 = 1;
}

int func_471()
{
	if (((((((func_245(PLAYER::PLAYER_ID()) == 170 || func_245(PLAYER::PLAYER_ID()) == 219) || func_245(PLAYER::PLAYER_ID()) == 221) || func_245(PLAYER::PLAYER_ID()) == 220) || func_245(PLAYER::PLAYER_ID()) == 216) || func_245(PLAYER::PLAYER_ID()) == 215) || func_245(PLAYER::PLAYER_ID()) == 214) || func_245(PLAYER::PLAYER_ID()) == 218)
	{
		return 1;
	}
	if (func_472(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_472(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

void func_473(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_475(iParam0))
	{
		return;
	}
	if (func_474(&(Global_2416085.f_756[iParam0]), &(Global_2416085.f_1119[iParam0]), &(Global_2416085.f_392), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_558[iParam0] = uParam1;
		}
	}
}

int func_474(var uParam0, var uParam1, int* iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(*uParam1) || *uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			*uParam1 = SCRIPT::GET_ID_OF_THIS_THREAD();
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(*uParam0) || *uParam0 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam3)
		{
			if (!MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::SET_BIT(iParam2, iParam4);
			}
			*uParam0 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			if (MISC::IS_BIT_SET(*iParam2, iParam4))
			{
				*uParam6 = 1;
				MISC::CLEAR_BIT(iParam2, iParam4);
			}
			if (*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (SCRIPT::IS_THREAD_ACTIVE(*uParam1) && !*uParam1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
	}
	return 0;
}

int func_475(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 1;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_256())
	{
		return 1;
	}
	return 0;
}

void func_476(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_2416085.f_368), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2416085.f_368), iParam0);
	}
	if (HUD::DOES_BLIP_EXIST(Global_2416085[iParam0]))
	{
		if (bParam1)
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416085[iParam0], false);
		}
		else
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_2416085[iParam0], true);
		}
	}
}

void func_477(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_475(iParam0))
	{
		return;
	}
	if (func_474(&(Global_2416085.f_822[iParam0]), &(Global_2416085.f_1185[iParam0]), &(Global_2416085.f_367), bParam1, iParam0, bParam3, &uVar0))
	{
		func_476(iParam0, bParam2);
	}
}

void func_478(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_475(iParam0))
	{
		return;
	}
	if (func_474(&(Global_2416085.f_624[iParam0]), &(Global_2416085.f_987[iParam0]), &(Global_2416085.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_459[iParam0] = iParam1;
		}
	}
}

void func_479(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	
	if (func_475(iParam0))
	{
		return;
	}
	if (func_474(&(Global_2416085.f_591[iParam0]), &(Global_2416085.f_954[iParam0]), &(Global_2416085.f_388), bParam2, iParam0, bParam3, &bVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_426[iParam0] = iParam1;
		}
		if (bVar0)
		{
			func_480();
		}
	}
}

void func_480()
{
	Global_2416085.f_1651 = 1;
}

void func_481()
{
	int iVar0;
	int iVar1;
	
	if (!func_436())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 9))
	{
		MISC::SET_BIT(&iLocal_745, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					func_479(iVar1, 478, 0, 0);
					func_478(iVar1, func_482(iLocal_859), 0, 0);
				}
			}
			iVar0++;
		}
	}
}

int func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_483()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_845[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_845[iVar0]));
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_858))
	{
		HUD::REMOVE_BLIP(&iLocal_858);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_856))
	{
		HUD::REMOVE_BLIP(&iLocal_856);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_857))
	{
		HUD::REMOVE_BLIP(&iLocal_857);
	}
	if (MISC::IS_BIT_SET(iLocal_745, 12))
	{
		AUDIO::STOP_SOUND(iLocal_753);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ALARM_BELL_02");
		MISC::CLEAR_BIT(&iLocal_745, 12);
	}
	if (((func_456("DCONTRA_HLP1") || func_456("DCONTRA_HLP2")) || func_456("DCONTRA_HLPVCR")) || func_456("DCONTRA_HLPCR"))
	{
		HUD::CLEAR_HELP(true);
	}
	func_484();
}

void func_484()
{
	if (MISC::IS_BIT_SET(iLocal_745, 14))
	{
		func_238();
		func_227(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
		MISC::CLEAR_BIT(&iLocal_745, 14);
	}
}

void func_485(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2540612.f_5188.f_7[iVar0]), iVar1);
}

bool func_486(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2540612.f_5188.f_7[iVar0], iVar1);
}

void func_487()
{
	float fVar0;
	
	if (func_436())
	{
		if (MISC::IS_BIT_SET(Local_122.f_1, 9) || MISC::IS_BIT_SET(Local_122.f_1, 8))
		{
			func_488(func_543());
			if (!func_486(36))
			{
				func_485(36);
			}
		}
	}
	else if (func_11(&(Local_122.f_226)))
	{
		if (iLocal_755 <= 0)
		{
			func_488(func_543());
			if (!func_486(36))
			{
				func_485(36);
			}
		}
		else
		{
			fVar0 = (SYSTEM::TO_FLOAT((iLocal_754 - iLocal_755)) / SYSTEM::TO_FLOAT(iLocal_754));
			fVar0 = (fVar0 * 0.5f);
			func_488(fVar0);
			if (!func_486(37))
			{
				func_485(37);
			}
		}
	}
}

void func_488(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_122.f_197 + 1;
	iVar1 = func_542(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * fParam0));
		if (SYSTEM::TO_FLOAT(iVar2) > (SYSTEM::TO_FLOAT(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_489(iVar0, iVar2, 0, 0, &iLocal_756, 0);
	}
	else
	{
		MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 13);
	}
}

void func_489(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam1 <= 0)
	{
		if (iParam1 == 0)
		{
		}
		*uParam4 = 3;
		return;
	}
	if (*uParam4 != 0 && *uParam4 != 1)
	{
		*uParam4 = 0;
	}
	iVar0 = func_542(iParam0);
	iVar1 = func_541(iParam0);
	if (!func_540())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (func_542(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			func_526(iParam0, iVar1, iVar2, iVar3, 0, 11);
			func_524(func_525(iVar1), iVar2, -1, 1);
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar1 /*3*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				func_520(iParam0, iVar3);
				func_516(iParam0, iVar3);
			}
			if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				STATS::_0x5688585E6D563CD8(10);
			}
			func_513(1490700264, 10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (func_542(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_490(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4, Global_2540612.f_5188.f_383))
		{
			if (*uParam4 == 2)
			{
				func_526(iParam0, iVar1, iVar4, iVar5, 0, 11);
				func_524(func_525(iVar1), iVar4, -1, 1);
				Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar1 /*3*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					func_516(iParam0, iVar5);
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					STATS::_0x5688585E6D563CD8(10);
				}
				func_513(1490700264, 10, 0);
				*uParam4 = 2;
			}
			else if (*uParam4 == 3)
			{
				*uParam4 = 3;
			}
		}
	}
	else
	{
		*uParam4 = 3;
	}
}

bool func_490(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (*uParam5 != 0 && *uParam5 != 1)
	{
		*uParam5 = 0;
	}
	switch (*uParam5)
	{
		case 0:
			iVar0 = func_512(iParam0);
			iVar1 = func_510(0, iParam1, 0, -1);
			iVar2 = func_509(iParam0);
			iVar3 = func_508(iParam0);
			switch (iParam4)
			{
				case 0:
					iVar4 = -1003644442;
					break;
				
				case 1:
					iVar4 = 402112378;
					break;
				
				case 2:
					iVar4 = 1283718111;
					break;
				
				case 3:
					iVar4 = 1783677420;
					break;
			}
			if (iParam4 == 0 || func_504(78225582, -1799524201, iVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_504(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || func_504(78225582, 69656641, iVar3, -788753717, iParam2, 0, 1, 4, 0, 3))
					{
						if (func_504(78225582, -739932302, iVar4, -788753717, 1, iParam3, 0, 4, iVar2, 3))
						{
							*uParam5 = 1;
						}
						else
						{
							*uParam5 = 3;
						}
					}
					else
					{
						*uParam5 = 3;
					}
				}
				else
				{
					*uParam5 = 3;
				}
			}
			else
			{
				*uParam5 = 3;
			}
			if (*uParam5 == 1 && func_499())
			{
			}
			else
			{
				*uParam5 = 3;
				func_494(func_498());
			}
			break;
		
		case 1:
			if (func_493(func_498()))
			{
				if (func_492(func_498()) == 2)
				{
					if (iParam3 > 0)
					{
						NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_491(func_498()));
						MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam3, iParam6);
					}
					*uParam5 = 2;
					func_494(func_498());
				}
				else
				{
					*uParam5 = 3;
					func_494(func_498());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_491(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_492(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_493(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

void func_494(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_540())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_497(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_495(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_495(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_496(&(uParam0->f_14));
	func_496(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_496(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_497(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_498()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_491(iVar0) != 2147483647)
		{
			if (func_497(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_499()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_540())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_498();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_36()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_503(Global_4264051[iVar2 /*85*/].f_66.f_6, Global_4264051[iVar2 /*85*/].f_66.f_4, Global_4264051[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4265553 = 1;
			}
			return 0;
		}
		if (Global_2463638)
		{
			if (Global_4264051[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_491(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4264051[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4264051[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4264051[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4264051[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4264051[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_500(Global_4264051[iVar2 /*85*/], iVar2);
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	return 0;
}

void func_500(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_502(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_501();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_501()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_502(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_503(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_504(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_540())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_36()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463638)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_498();
	if (iVar1 == -1)
	{
		if (!func_506(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_505(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4264051[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4264051[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4264051[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_505(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_506(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_540())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_36()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463638)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4264051[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4264051[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
		{
			NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_507(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_507(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_540())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_500(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_508(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_SPCONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_509(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_CONTOTALFORWHOUSE4_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_510(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	func_511(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_511(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam1)
	{
		if (iParam2 == -1)
		{
			StringCopy(sParam0, "CB_NONE_0_t0_v0", 64);
		}
		else if (bParam3)
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t1_v", 64);
			StringIntConCat(sParam0, iParam4, 64);
		}
		else
		{
			StringCopy(sParam0, "CB_BUY_", 64);
			StringIntConCat(sParam0, iParam2, 64);
			StringConCat(sParam0, "_t0_v0", 64);
		}
	}
	else
	{
		StringCopy(sParam0, "CB_SELL_0_t0_v0", 64);
	}
}

int func_512(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MISSIONFORWHOUSE4_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_513(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_515(iParam1, iParam2))
	{
		iVar0 = func_514();
		Global_2462355[iVar0] = iParam1;
		Global_2462366[iVar0] = iParam0;
	}
}

int func_514()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462355[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_515(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_516(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 5;
	while (iVar0 >= 0)
	{
		if (iVar1 < iParam1)
		{
			if (Global_1678001[iVar0] == iParam0)
			{
				Global_1677994[iVar0] = 0;
				Global_1678001[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1678001[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1677994[iVar2] = Global_1677994[iVar0];
			Global_1678001[iVar2] = Global_1678001[iVar0];
			Global_1677994[iVar0] = 0;
			Global_1678001[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_518(func_519(iVar0), Global_1677994[iVar0], -1, 1);
		func_518(func_517(iVar0), Global_1678001[iVar0], -1, 1);
		iVar0++;
	}
}

int func_517(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7648;
	}
	else if (iParam0 == 1)
	{
		return 7649;
	}
	else if (iParam0 == 2)
	{
		return 7650;
	}
	else if (iParam0 == 3)
	{
		return 7651;
	}
	else if (iParam0 == 4)
	{
		return 7652;
	}
	else if (iParam0 == 5)
	{
		return 7653;
	}
	return 7648;
}

bool func_518(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	bVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, bParam3);
	return bVar2;
}

int func_519(int iParam0)
{
	if (iParam0 == 0)
	{
		return 7642;
	}
	else if (iParam0 == 1)
	{
		return 7643;
	}
	else if (iParam0 == 2)
	{
		return 7644;
	}
	else if (iParam0 == 3)
	{
		return 7645;
	}
	else if (iParam0 == 4)
	{
		return 7646;
	}
	else if (iParam0 == 5)
	{
		return 7647;
	}
	return 7642;
}

void func_520(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_523(func_541(iParam0));
	iVar1 = func_522(iVar0, -1, 0);
	if (iVar1 >= iParam1)
	{
		func_521(iVar0, (iVar1 - iParam1), -1, 1, 0);
	}
}

void func_521(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2552060[iParam0 /*3*/][func_432(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_522(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2552060[iParam0 /*3*/][func_432(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_523(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3647;
	}
	else if (iParam0 == 1)
	{
		return 3648;
	}
	else if (iParam0 == 2)
	{
		return 3649;
	}
	else if (iParam0 == 3)
	{
		return 3650;
	}
	else if (iParam0 == 4)
	{
		return 3651;
	}
	return 3647;
}

void func_524(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2552060[iParam0 /*3*/][func_432(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_432(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_432(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_432(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_432(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_432(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_432(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_432(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_432(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_432(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_432(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_432(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_432(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_432(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_432(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_432(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_432(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_432(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_432(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_432(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_432(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_432(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_432(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_432(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_432(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590645[0 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590645[1 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590645[2 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590645[3 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590794[func_432(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_432(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_432(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_432(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_432(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_432(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_432(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590718[0 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590718[1 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590718[2 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590718[3 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590718[4 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590797[0 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590797[1 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590797[2 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590797[3 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590797[4 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590813[0 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590813[1 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590813[2 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590813[3 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590813[4 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590718[5 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590645[4 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590829[func_432(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590838[func_432(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590832[func_432(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590841[func_432(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590835[func_432(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590844[func_432(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590847[func_432(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590718[6 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590645[5 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590718[7 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590645[6 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590718[8 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590645[7 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590718[9 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590645[8 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590718[10 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590645[9 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590718[11 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590645[10 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590718[12 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590645[11 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590718[13 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590645[12 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590718[14 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590645[13 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590718[15 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590645[14 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590718[16 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590645[15 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590718[17 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590645[16 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590645[17 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590645[18 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590645[19 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590645[20 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590850[func_432(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590853[func_432(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590856[func_432(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590859[func_432(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590862[func_432(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590865[func_432(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590868[func_432(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590871[func_432(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590874[func_432(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590877[func_432(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590880[func_432(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590883[func_432(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590886[func_432(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590889[func_432(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590645[21 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590718[23 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590645[22 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590718[24 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590645[23 /*3*/][func_432(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_525(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3642;
		
		case 1:
			return 3643;
		
		case 2:
			return 3644;
		
		case 3:
			return 3645;
		
		case 4:
			return 3646;
		
		default:
	}
	return 11771;
}

void func_526(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
	bool bVar9;
	int iVar10;
	int iVar11;
	
	if (bParam4)
	{
		iVar0 = func_542(iParam0);
		while (iVar0 <= (iParam2 - 1))
		{
			if (iVar0 < func_539(iParam0))
			{
				if (iVar2 < iParam3)
				{
					if (func_537(func_538(iParam0), iVar0))
					{
						iVar3 = func_536(iParam5);
						func_534(iParam1, iVar0, func_535(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (iParam2 - 1))
						{
							if (func_537(func_538(iParam0), iVar4))
							{
								if (!func_531(func_532(func_533(iParam1, iVar4, -1, -1))))
								{
									iVar5 = func_533(iParam1, iVar4, -1, -1);
									iVar6 = func_536(iParam5);
									func_534(iParam1, iVar4, func_535(iVar6), 1, -1);
									func_534(iParam1, (iParam2 - 1), iVar5, 1, -1);
									iVar2++;
									return;
								}
							}
							iVar4++;
						}
					}
				}
				else
				{
					iVar7 = 0;
					iVar8 = func_528(iParam0, iVar0, iParam5);
					if (iVar0 > 0 && !func_527(func_538(iParam0), iVar0))
					{
						while (iVar8 == func_532(func_533(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_528(iParam0, iVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_533(iParam1, iVar0, -1, -1) == 0)
						{
							func_534(iParam1, iVar0, func_535(iVar8), 1, -1);
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= (func_542(iParam0) - 1))
		{
			if (iVar0 < func_539(iParam0))
			{
				if (iParam3 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (func_542(iParam0) - 1))
					{
						if (func_531(func_532(func_533(iParam1, iVar1, -1, -1))))
						{
							if (!func_531(func_532(func_533(iParam1, iVar0, -1, -1))))
							{
								iVar10 = func_533(iParam1, iVar1, -1, -1);
								func_534(iParam1, iVar1, func_533(iParam1, iVar0, -1, -1), 1, -1);
								func_534(iParam1, iVar0, iVar10, 1, -1);
							}
						}
						iVar1++;
					}
				}
				else if (func_531(func_532(func_533(iParam1, iVar0, -1, -1))))
				{
					bVar9 = false;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (!bVar9)
						{
							if (iParam2 >= iVar1)
							{
								if (func_537(func_538(iParam0), iVar1))
								{
									if (!func_531(func_532(func_533(iParam1, iVar1, -1, -1))))
									{
										iVar11 = func_533(iParam1, iVar1, -1, -1);
										func_534(iParam1, iVar1, func_533(iParam1, iVar0, -1, -1), 1, -1);
										func_534(iParam1, iVar0, iVar11, 1, -1);
										bVar9 = true;
									}
								}
							}
						}
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		iVar0 = iParam2;
		while (iVar0 <= (func_542(iParam0) - 1))
		{
			if (iVar0 < func_539(iParam0))
			{
				func_534(iParam1, iVar0, func_535(0), 1, -1);
			}
			iVar0++;
		}
	}
	Global_1678124 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1678120[iVar0] = 0;
		iVar0++;
	}
}

int func_527(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_528(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (func_527(func_538(iParam0), iParam1))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_530(func_538(iParam0), iParam1);
	return func_529(uParam2, uVar2, bVar1);
}

int func_529(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	iVar1 = uParam0;
	iVar2 = uParam1;
	if (bParam2)
	{
		switch (iVar1)
		{
			case 0:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_ms");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 1:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return -1958;
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			
			case 4:
				switch (iVar2)
				{
					case 0:
						switch (iVar0)
						{
							case 0:
								return joaat("ex_prop_crate_closed_sc");
							
							case 1:
								return joaat("ex_prop_crate_closed_mw");
							
							default:
						}
						break;
					
					case 1:
						return joaat("ex_prop_crate_closed_bc");
				}
				break;
			}
	}
	switch (iVar1)
	{
		case 0:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_sc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_med_bc");
						
						case 1:
							return joaat("ex_prop_crate_biohazard_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 1:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_tob_sc");
				
				case 1:
					return joaat("ex_prop_crate_tob_bc");
				
				default:
			}
			break;
		
		case 2:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_sc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_art_bc");
						
						case 1:
							return joaat("ex_prop_crate_art_02_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 3:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_elec_sc");
				
				case 1:
					return joaat("ex_prop_crate_elec_bc");
				
				default:
			}
			break;
		
		case 4:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_sc");
						
						case 1:
							return joaat("ex_prop_crate_expl_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_ammo_bc");
						
						case 1:
							return joaat("ex_prop_crate_expl_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 5:
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_sc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_sc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_narc_bc");
						
						case 1:
							return joaat("ex_prop_crate_pharma_bc");
						
						case 2:
							return joaat("ex_prop_crate_highend_pharma_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 6:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_gems_sc");
				
				case 1:
					return joaat("ex_prop_crate_gems_bc");
				
				default:
			}
			break;
		
		case 7:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_sc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_wlife_bc");
						
						case 1:
							return joaat("ex_prop_crate_furjacket_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 8:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_sc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_money_bc");
						
						case 1:
							return joaat("ex_prop_crate_clothing_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 9:
			switch (iVar2)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_sc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_sc");
						
						default:
					}
					break;
				
				case 1:
					switch (iVar0)
					{
						case 0:
							return joaat("ex_prop_crate_jewels_bc");
						
						case 1:
							return joaat("ex_prop_crate_jewels_racks_bc");
						
						default:
					}
					break;
			}
			break;
		
		case 10:
			switch (iVar2)
			{
				case 0:
					return joaat("ex_prop_crate_bull_sc_02");
				
				case 1:
					return joaat("ex_prop_crate_bull_bc_02");
				
				default:
			}
			break;
	}
	return 0;
}

int func_530(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
			}
			break;
	}
	return -1;
}

int func_531(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ex_prop_crate_oegg"):
		case joaat("ex_prop_crate_minig"):
		case joaat("ex_prop_crate_xldiam"):
		case joaat("ex_prop_crate_shide"):
		case joaat("ex_prop_crate_freel"):
		case joaat("ex_prop_crate_watch"):
			return 1;
		
		default:
	}
	return 0;
}

int func_532(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return joaat("ex_prop_crate_closed_sc");
		
		case 2:
			return joaat("ex_prop_crate_med_sc");
		
		case 3:
			return joaat("ex_prop_crate_tob_sc");
		
		case 4:
			return joaat("ex_prop_crate_art_sc");
		
		case 5:
			return joaat("ex_prop_crate_elec_sc");
		
		case 6:
			return joaat("ex_prop_crate_ammo_sc");
		
		case 7:
			return joaat("ex_prop_crate_narc_sc");
		
		case 8:
			return joaat("ex_prop_crate_gems_sc");
		
		case 9:
			return joaat("ex_prop_crate_wlife_sc");
		
		case 10:
			return joaat("ex_prop_crate_jewels_sc");
		
		case 11:
			return joaat("ex_prop_crate_bull_sc_02");
		
		case 12:
			return joaat("ex_prop_crate_closed_bc");
		
		case 13:
			return joaat("ex_prop_crate_med_bc");
		
		case 14:
			return joaat("ex_prop_crate_tob_bc");
		
		case 15:
			return joaat("ex_prop_crate_art_bc");
		
		case 16:
			return joaat("ex_prop_crate_elec_bc");
		
		case 17:
			return joaat("ex_prop_crate_ammo_bc");
		
		case 18:
			return joaat("ex_prop_crate_narc_bc");
		
		case 19:
			return joaat("ex_prop_crate_gems_bc");
		
		case 20:
			return joaat("ex_prop_crate_wlife_bc");
		
		case 21:
			return joaat("ex_prop_crate_jewels_bc");
		
		case 22:
			return joaat("ex_prop_crate_bull_bc_02");
		
		case 23:
			return joaat("ex_prop_crate_oegg");
		
		case 24:
			return joaat("ex_prop_crate_minig");
		
		case 25:
			return joaat("ex_prop_crate_xldiam");
		
		case 26:
			return joaat("ex_prop_crate_shide");
		
		case 27:
			return joaat("ex_prop_crate_freel");
		
		case 28:
			return joaat("ex_prop_crate_watch");
		
		case 29:
			return joaat("ex_prop_crate_expl_sc");
		
		case 30:
			return joaat("ex_prop_crate_expl_bc");
		
		case 31:
			return joaat("ex_prop_crate_jewels_racks_sc");
		
		case 32:
			return joaat("ex_prop_crate_jewels_racks_bc");
		
		case 33:
			return joaat("ex_prop_crate_furjacket_sc");
		
		case 34:
			return joaat("ex_prop_crate_furjacket_bc");
		
		case 35:
			return joaat("ex_prop_crate_pharma_sc");
		
		case 36:
			return joaat("ex_prop_crate_pharma_bc");
		
		case 37:
			return joaat("ex_prop_crate_highend_pharma_sc");
		
		case 38:
			return joaat("ex_prop_crate_highend_pharma_bc");
		
		case 39:
			return joaat("ex_prop_crate_biohazard_sc");
		
		case 40:
			return joaat("ex_prop_crate_biohazard_bc");
		
		case 41:
			return joaat("ex_prop_crate_clothing_sc");
		
		case 42:
			return joaat("ex_prop_crate_clothing_bc");
		
		case 43:
			return joaat("ex_prop_crate_money_sc");
		
		case 44:
			return joaat("ex_prop_crate_money_bc");
		
		case 45:
			return joaat("ex_prop_crate_closed_ms");
		
		case 46:
			return -1958;
		
		case 47:
			return joaat("ex_prop_crate_closed_mw");
		
		case 48:
			return joaat("ex_prop_crate_art_02_bc");
		
		case 49:
			return joaat("ex_prop_crate_art_02_sc");
		
		default:
	}
	return 0;
}

int func_533(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar0 = 0;
	iVar1 = func_36();
	if (iParam3 > -1)
	{
		iVar1 = iParam3;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = MISC::GET_HASH_KEY(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_534(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[64];
	int iVar18;
	int iVar19;
	
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			iParam1 += 111;
			break;
		
		case 2:
			iParam1 += 222;
			break;
		
		case 3:
			iParam1 += 333;
			break;
		
		case 4:
			iParam1 += 444;
			break;
	}
	iVar1 = func_36();
	if (iParam4 > -1)
	{
		iVar1 = iParam4;
	}
	StringCopy(&cVar2, "MP", 64);
	StringIntConCat(&cVar2, iVar1, 64);
	StringConCat(&cVar2, "_WAREHOUSE_CRATES", 64);
	StringIntConCat(&cVar2, (iParam1 / 8), 64);
	iVar18 = MISC::GET_HASH_KEY(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		bVar0 = STATS::STAT_SET_MASKED_INT(iVar18, iParam2, iVar19, 8, bParam3);
	}
	return bVar0;
}

int func_535(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case joaat("ex_prop_crate_closed_sc"):
			return 1;
		
		case joaat("ex_prop_crate_med_sc"):
			return 2;
		
		case joaat("ex_prop_crate_tob_sc"):
			return 3;
		
		case joaat("ex_prop_crate_art_sc"):
			return 4;
		
		case joaat("ex_prop_crate_elec_sc"):
			return 5;
		
		case joaat("ex_prop_crate_ammo_sc"):
			return 6;
		
		case joaat("ex_prop_crate_narc_sc"):
			return 7;
		
		case joaat("ex_prop_crate_gems_sc"):
			return 8;
		
		case joaat("ex_prop_crate_wlife_sc"):
			return 9;
		
		case joaat("ex_prop_crate_jewels_sc"):
			return 10;
		
		case joaat("ex_prop_crate_bull_sc_02"):
			return 11;
		
		case joaat("ex_prop_crate_closed_bc"):
			return 12;
		
		case joaat("ex_prop_crate_med_bc"):
			return 13;
		
		case joaat("ex_prop_crate_tob_bc"):
			return 14;
		
		case joaat("ex_prop_crate_art_bc"):
			return 15;
		
		case joaat("ex_prop_crate_elec_bc"):
			return 16;
		
		case joaat("ex_prop_crate_ammo_bc"):
			return 17;
		
		case joaat("ex_prop_crate_narc_bc"):
			return 18;
		
		case joaat("ex_prop_crate_gems_bc"):
			return 19;
		
		case joaat("ex_prop_crate_wlife_bc"):
			return 20;
		
		case joaat("ex_prop_crate_jewels_bc"):
			return 21;
		
		case joaat("ex_prop_crate_bull_bc_02"):
			return 22;
		
		case joaat("ex_prop_crate_oegg"):
			return 23;
		
		case joaat("ex_prop_crate_minig"):
			return 24;
		
		case joaat("ex_prop_crate_xldiam"):
			return 25;
		
		case joaat("ex_prop_crate_shide"):
			return 26;
		
		case joaat("ex_prop_crate_freel"):
			return 27;
		
		case joaat("ex_prop_crate_watch"):
			return 28;
		
		case joaat("ex_prop_crate_expl_sc"):
			return 29;
		
		case joaat("ex_prop_crate_expl_bc"):
			return 30;
		
		case joaat("ex_prop_crate_jewels_racks_sc"):
			return 31;
		
		case joaat("ex_prop_crate_jewels_racks_bc"):
			return 32;
		
		case joaat("ex_prop_crate_furjacket_sc"):
			return 33;
		
		case joaat("ex_prop_crate_furjacket_bc"):
			return 34;
		
		case joaat("ex_prop_crate_pharma_sc"):
			return 35;
		
		case joaat("ex_prop_crate_pharma_bc"):
			return 36;
		
		case joaat("ex_prop_crate_highend_pharma_sc"):
			return 37;
		
		case joaat("ex_prop_crate_highend_pharma_bc"):
			return 38;
		
		case joaat("ex_prop_crate_biohazard_sc"):
			return 39;
		
		case joaat("ex_prop_crate_biohazard_bc"):
			return 40;
		
		case joaat("ex_prop_crate_clothing_sc"):
			return 41;
		
		case joaat("ex_prop_crate_clothing_bc"):
			return 42;
		
		case joaat("ex_prop_crate_money_sc"):
			return 43;
		
		case joaat("ex_prop_crate_money_bc"):
			return 44;
		
		case joaat("ex_prop_crate_closed_ms"):
			return 45;
		
		case joaat("ex_prop_crate_closed_rw"):
			return 46;
		
		case joaat("ex_prop_crate_closed_mw"):
			return 47;
		
		case joaat("ex_prop_crate_art_02_bc"):
			return 48;
		
		case joaat("ex_prop_crate_art_02_sc"):
			return 49;
		
		default:
	}
	return 0;
}

int func_536(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 2:
			return joaat("ex_prop_crate_oegg");
		
		case 4:
			return joaat("ex_prop_crate_minig");
		
		case 6:
			return joaat("ex_prop_crate_xldiam");
		
		case 7:
			return joaat("ex_prop_crate_shide");
		
		case 8:
			return joaat("ex_prop_crate_freel");
		
		case 9:
			return joaat("ex_prop_crate_watch");
		
		default:
	}
	return 0;
}

int func_537(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		
		case 2:
			if ((((((iParam1 < 7 || (iParam1 > 20 && iParam1 < 28)) || (iParam1 > 41 && iParam1 < 49)) || (iParam1 > 62 && iParam1 < 70)) || (iParam1 > 83 && iParam1 < 87)) || (iParam1 > 92 && iParam1 < 96)) || (iParam1 > 101 && iParam1 < 105))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_538(int iParam0)
{
	if (func_42(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_539(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_538(iParam0);
		if (iVar0 == 0)
		{
			return 16;
		}
		else if (iVar0 == 1)
		{
			return 42;
		}
		else
		{
			return 111;
		}
	}
	return 0;
}

int func_540()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_541(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_542(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/])
			{
				return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_543()
{
	if (!func_436())
	{
		return (SYSTEM::TO_FLOAT(Global_262145.f_16140) * 0.01f);
	}
	return (SYSTEM::TO_FLOAT(Global_262145.f_16141) * 0.01f);
}

int func_544()
{
	int iVar0;
	
	if (!func_34(PLAYER::PLAYER_ID(), 0))
	{
		if (!func_545(1, 1, 1, 0))
		{
			if (MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 12))
			{
				MISC::CLEAR_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (func_427())
		{
			if (MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 12))
			{
				MISC::CLEAR_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 12))
		{
			MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_435();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_392[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

int func_545(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_590(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_264(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_264(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_339(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_589(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_588())
	{
		return 0;
	}
	if (func_414())
	{
		return 0;
	}
	if (func_587())
	{
		return 0;
	}
	if (func_408())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_103(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_410())
	{
		return 0;
	}
	if (func_264(PLAYER::PLAYER_ID(), 0) || func_264(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_264(PLAYER::PLAYER_ID(), 12) || func_264(PLAYER::PLAYER_ID(), 14)) || func_264(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_582(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_555())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_554())
		{
			return 0;
		}
	}
	if (Global_1663772)
	{
		return 0;
	}
	if (func_553(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_552())
	{
		return 0;
	}
	if (func_551(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_156(PLAYER::PLAYER_ID()) && func_153(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_550())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_549(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_235(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_234(PLAYER::PLAYER_ID()))
	{
		if (func_548(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_546())
	{
		return 0;
	}
	return 1;
}

bool func_546()
{
	return func_547() == 1;
}

int func_547()
{
	return Global_1704009;
}

int func_548(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_549(int iParam0)
{
	if (Global_2426097[iParam0 /*443*/].f_265.f_4 != 0 || Global_2426097[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_550()
{
	return Global_1678289.f_4347 != -1;
}

int func_551(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_552()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_553(int iParam0)
{
	if (!func_1327(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

bool func_554()
{
	return Global_99007.f_352 > 0;
}

int func_555()
{
	int iVar0;
	
	iVar0 = func_245(PLAYER::PLAYER_ID());
	if (((func_581(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28) || func_580(PLAYER::PLAYER_ID())) || func_579(PLAYER::PLAYER_ID())) || func_574(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_573(PLAYER::PLAYER_ID()))
	{
		if (func_444(iVar0) || func_572(iVar0))
		{
			return 1;
		}
	}
	if (func_472(PLAYER::PLAYER_ID()))
	{
		if (func_572(iVar0))
		{
			return 1;
		}
	}
	if (func_571(PLAYER::PLAYER_ID()))
	{
		if (func_570(iVar0))
		{
			return 1;
		}
	}
	if (func_569(PLAYER::PLAYER_ID()))
	{
		if (func_568(iVar0))
		{
			return 1;
		}
	}
	if (func_567(PLAYER::PLAYER_ID()))
	{
		if (func_566(iVar0))
		{
			return 1;
		}
	}
	if (func_565(PLAYER::PLAYER_ID()))
	{
		if (func_564(iVar0))
		{
			return 1;
		}
	}
	if (func_157(PLAYER::PLAYER_ID(), 0))
	{
		if (func_443(iVar0))
		{
			if (func_562(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_561(PLAYER::PLAYER_ID()))
	{
		if (func_560(iVar0))
		{
			return 1;
		}
		if (func_559(iVar0))
		{
			return 1;
		}
		if (func_558())
		{
			return 1;
		}
	}
	if (func_557(PLAYER::PLAYER_ID()))
	{
		if (func_556())
		{
			return 1;
		}
	}
	return 0;
}

bool func_556()
{
	return Global_2540612.f_6663;
}

int func_557(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_558()
{
	return Global_2540612.f_6662;
}

int func_559(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_560(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_561(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_562(int iParam0)
{
	if (func_563(iParam0) != func_57())
	{
		return func_563(iParam0) == func_58(iParam0);
	}
	return 0;
}

int func_563(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_564(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_565(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_567(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_569(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_571(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_572(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_573(int iParam0)
{
	if (func_169(Global_1590682[iParam0 /*883*/].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_574(int iParam0)
{
	if (func_575(Global_1590682[iParam0 /*883*/].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_575(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_576(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_576(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_576(int iParam0, bool bParam1)
{
	if (Global_1590518 != func_57())
	{
		if (!func_578(Global_1590518))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1590518)
			{
				if (MISC::IS_BIT_SET(Global_2426097[Global_1590518 /*443*/].f_199, 24) || func_577(Global_1590518))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_199, 24);
}

int func_577(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_199, 9);
	}
	return 0;
}

int func_578(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 2);
	}
	return 0;
}

int func_579(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_580(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_581(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_582(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_580(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_472(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_579(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_571(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_569(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_567(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_151(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_565(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_586(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_157(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_585(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_561(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_584(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_557(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_583(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_583(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_584(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_585(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_586(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			if (Global_2426097[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_152(Global_2426097[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

bool func_587()
{
	return Global_1312896;
}

bool func_588()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 0);
}

int func_589(int iParam0)
{
	if (func_102(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_590(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

int func_591(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_628(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_359(&(Var0.f_69), iParam7);
	}
	return func_592(&Var0);
}

int func_592(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440277.f_3156)
		{
			return 0;
		}
	}
	func_603(uParam0, uParam0->f_17);
	func_602(uParam0);
	if (func_53())
	{
		func_602(uParam0);
	}
	if (func_601(uParam0->f_1))
	{
		func_594();
		if (Global_2440277.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440277.f_2834[0 /*80*/] = { *uParam0 };
			if (func_593(uParam0->f_69, 8192))
			{
				Global_1663778 = 1;
			}
			return 1;
		}
		if (((Global_2440277.f_2834[0 /*80*/].f_1 == 13 || Global_2440277.f_2834[0 /*80*/].f_1 == 53) || Global_2440277.f_2834[0 /*80*/].f_1 == 54) || Global_2440277.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440277.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440277.f_2834[iVar0 + 1 /*80*/] = { Global_2440277.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440277.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440277.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440277.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_594();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_359(&(Global_2440277.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440277.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_593(uParam0->f_69, 128))
			{
				if (func_364(Global_2440277.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440277.f_2834[iVar0 /*80*/].f_2 = 5;
					func_359(&(Global_2440277.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_593(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_594()
{
	bool bVar0;
	
	if (Global_2440277.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_595();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_595()
{
	Global_2440277.f_3158 = 0;
	Global_2440277.f_3158.f_578 = 0;
	func_599(&(Global_2440277.f_3158.f_1));
	Global_2440277.f_3158.f_1.f_1 = 0;
	func_596(&(Global_2440277.f_3158.f_1), 1);
}

void func_596(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_77102)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_598(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_597(0);
}

void func_597(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_598(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_77081, 0);
}

void func_599(var uParam0)
{
	func_600(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_600(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_601(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_602(var uParam0)
{
	if (func_366(uParam0->f_1))
	{
		uParam0->f_72 = func_320();
	}
}

void func_603(var uParam0, int iParam1)
{
	if (func_366(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_57() || !func_1327(iParam1, 0, 1))
	{
		return;
	}
	if (func_364(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_604(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_604(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_105(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_105(PLAYER::PLAYER_ID()) || (func_627() && func_626())) && !MISC::IS_BIT_SET(Global_2540612.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_625();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_1327(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_623(iParam1, iParam0, 0);
							}
							else
							{
								return func_616(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_616(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_623(iParam1, iParam0, 0);
				}
				else
				{
					return func_605(0, -1, 0);
				}
			}
			else
			{
				return func_605(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_623(iParam1, iParam0, 0);
		}
		else
		{
			return func_616(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_616(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_605(bool bParam0, int iParam1, bool bParam2)
{
	return func_606(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_606(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_615() || (func_614() && func_612())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_611(iParam2, iVar0);
		}
		else
		{
			return func_611(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_101(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_610(1);
				}
				else
				{
					return func_610(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_607(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_607(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_610(1);
	}
	return func_610(0);
}

int func_607(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_609(iParam0, iParam1, iParam3);
	if (func_608(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_608(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_609(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_101(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_610(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_611(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_609(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_612()
{
	if (func_613())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_133494, 4);
}

bool func_613()
{
	return MISC::IS_BIT_SET(Global_4456448.f_123318, 12);
}

bool func_614()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_133494, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_133494, 0) || Global_1655244) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_615()
{
	if (func_613() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_616(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_619())
			{
				iVar3 = func_319(iParam0);
				if (!iVar3 == -1)
				{
					return func_317(iVar3);
				}
			}
			if ((func_618(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_101(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_610(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_617(1);
			}
			else
			{
				return func_606(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_610(1);
			}
			else
			{
				return func_606(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_319(iParam0);
	if (!iVar4 == -1)
	{
		return func_317(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_617(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_618(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_619()
{
	if ((((func_175() || func_622()) || func_53()) || func_621()) || func_620())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_620()
{
	return Global_2452015.f_23;
}

var func_621()
{
	return Global_2452015.f_20;
}

var func_622()
{
	return Global_2452015.f_17;
}

int func_623(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_619())
	{
		iVar2 = func_319(iParam1);
		if (!iVar2 == -1)
		{
			return func_317(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_57())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_606(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_624(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_101(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_617(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_624(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_625()
{
	return Global_2359302.f_2;
}

bool func_626()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_627()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

void func_628(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_57();
	uParam1->f_18 = func_57();
	uParam1->f_19 = func_57();
	uParam1->f_20 = func_57();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_629(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

void func_630(int iParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	func_790(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_789(iParam0, uParam2->f_13, bParam3));
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		if ((iParam0 == 158 && uParam2->f_21 == 1) && !uParam2->f_22)
		{
			iVar1 = 200;
		}
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_788(iParam0, bParam3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if ((iParam0 == 185 || iParam0 == 220) || iParam0 == 221)
	{
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * fVar3));
		iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(uParam2->f_4)));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * fVar2));
		iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (uParam2->f_18 > -1)
	{
		iVar0 = (iVar0 + uParam2->f_18);
	}
	if (uParam2->f_19 > -1)
	{
		iVar1 = (iVar1 + uParam2->f_19);
	}
	if (func_786(iParam0))
	{
		if (bParam1)
		{
			if (func_785(PLAYER::PLAYER_ID()) > 0)
			{
				func_784();
			}
			else
			{
				func_783();
			}
		}
		else
		{
			func_782();
		}
	}
	func_769(iParam0, bParam1, uParam2, &iVar0, &iVar4);
	func_767(iParam0, uParam2, &iVar0, &iVar5);
	func_743(iParam0, uParam2, &iVar0, &iVar5);
	func_740(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	func_723(iParam0, uParam2, &iVar0, &iVar5);
	if (iParam0 == 168)
	{
		Global_2540612.f_5188.f_383 = iVar4;
	}
	else
	{
		Global_2540612.f_5188.f_383 = iVar5;
	}
	iVar8 = func_383();
	if (iVar8 != func_57() && iParam0 != 148)
	{
		if (func_315(PLAYER::PLAYER_ID(), 0))
		{
			if (!func_348(PLAYER::PLAYER_ID(), iVar8, 1))
			{
				func_709(&iVar0, 1);
			}
		}
	}
	func_705(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1676129.f_10 = iVar1;
		func_704();
		func_665(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1676129.f_9 = iVar0;
		func_648(iParam0, iVar0, iVar7, iVar4, iVar5, uParam2);
		func_647(iParam0, iVar0);
		if (func_646(iParam0))
		{
			if (func_645(iParam0) > -1)
			{
				func_644(func_645(iParam0), iVar0);
			}
		}
		Global_2464679 = iVar0;
		func_643(&Global_2462943, 0, 0);
	}
	if (func_267(PLAYER::PLAYER_ID()) || func_234(PLAYER::PLAYER_ID()))
	{
		func_637(iParam0);
	}
	if (func_461(iParam0))
	{
		Global_1676147.f_13 = iVar0;
		Global_1676147.f_14 = iVar1;
	}
	if (func_466(iParam0))
	{
		Global_1676201.f_13 = iVar0;
		Global_1676201.f_14 = iVar1;
	}
	if (func_570(iParam0))
	{
		Global_1676264.f_12 = iVar0;
		Global_1676264.f_13 = iVar1;
	}
	if (func_568(iParam0))
	{
		Global_1676308.f_12 = iVar0;
		Global_1676308.f_13 = iVar1;
	}
	if (func_566(iParam0))
	{
		Global_1676362.f_12 = iVar0;
		Global_1676362.f_13 = iVar1;
	}
	if (func_465(iParam0))
	{
		if (func_636(iParam0))
		{
			Global_1676444.f_12 = iVar0;
			Global_1676444.f_13 = iVar1;
		}
		else if (func_632(iParam0))
		{
			Global_1676498.f_12 = iVar0;
			Global_1676498.f_13 = iVar1;
		}
	}
	if (func_631(iParam0))
	{
		Global_1676582.f_12 = iVar0;
		Global_1676582.f_13 = iVar1;
	}
	if (func_560(iParam0))
	{
		Global_1676657.f_16 = iVar0;
		Global_1676657.f_17 = iVar1;
	}
	if (func_559(iParam0))
	{
		Global_1676744.f_16 = iVar0;
		Global_1676744.f_17 = iVar1;
	}
}

int func_631(int iParam0)
{
	switch (iParam0)
	{
		case 243:
			return 1;
		
		default:
	}
	return 0;
}

int func_632(int iParam0)
{
	if (((((((((iParam0 == 250 || iParam0 == 238) || iParam0 == 242) || iParam0 == 244) || iParam0 == 248) || iParam0 == 241) || iParam0 == 239) || iParam0 == 240) || iParam0 == 249) || (iParam0 == 237 && func_633(func_634(PLAYER::PLAYER_ID()))))
	{
		return 1;
	}
	return 0;
}

int func_633(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 3:
		case 2:
		case 5:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

int func_634(int iParam0)
{
	if (func_245(iParam0) == 237 || func_245(iParam0) == 250)
	{
		return func_635(iParam0);
	}
	return -1;
}

int func_635(int iParam0)
{
	if (func_246(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_636(int iParam0)
{
	if (iParam0 == 237)
	{
		return 1;
	}
	return 0;
}

void func_637(int iParam0)
{
	if (func_642(PLAYER::PLAYER_ID()) && func_641())
	{
		if (func_444(iParam0))
		{
			func_639(10268, -1);
		}
		else if (func_445(iParam0))
		{
			func_639(10270, -1);
		}
		else if (func_346(iParam0, 1))
		{
			func_639(10271, -1);
		}
		else if (func_638(iParam0))
		{
			func_639(10272, -1);
		}
	}
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 194:
		case 193:
		case 189:
		case 153:
			return 1;
		
		default:
	}
	return 0;
}

void func_639(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_522(iParam0, func_432(iParam1), 0);
	iVar0++;
	if (!func_640(iParam0))
	{
		func_521(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_524(iParam0, iVar0, iParam1, 1);
	}
}

int func_640(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_641()
{
	return func_382(PLAYER::PLAYER_ID());
}

bool func_642(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_123, 14);
}

void func_643(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_644(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23502 == 1)
			{
				Global_2540612.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540612.f_284 = iParam1;
				Global_2540612.f_285 = 0;
			}
		}
	}
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return 25;
		
		case 157:
			return 22;
		
		case 159:
			return 21;
		
		case 151:
			return 33;
		
		case 148:
			return 23;
		
		case 164:
			return 24;
		
		case 152:
			return 26;
		
		case 153:
			return 30;
		
		case 154:
			return 32;
		
		case 155:
			return 28;
		
		case 160:
			return 29;
		
		case 162:
			return 31;
		
		case 163:
			return 27;
		
		case 166:
			return 38;
		
		case 170:
			return 34;
		
		case 171:
			return 35;
		
		case 172:
			return 36;
		
		case 173:
			return 37;
		
		case 179:
			return 23;
		
		default:
	}
	return 0;
}

int func_646(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 167:
			iVar0 = 0;
			break;
		
		case 169:
			iVar0 = 0;
			break;
		
		case 168:
			iVar0 = 0;
			break;
		
		case 166:
			iVar0 = 0;
			break;
		
		case 190:
			iVar0 = 0;
			break;
		
		case 191:
			iVar0 = 0;
			break;
		
		case 192:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

void func_647(int iParam0, int iParam1)
{
	if (func_642(PLAYER::PLAYER_ID()) && func_641())
	{
		if (func_444(iParam0) && iParam1 > 0)
		{
			func_521(10269, (func_522(10269, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_648(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	struct<2> Var7;
	
	iVar5 = func_664();
	if (iVar5 != func_57())
	{
		func_663(iVar5, &iVar0, &iVar1);
	}
	bVar6 = !func_662(1);
	Var7.f_1 = -1;
	switch (iParam0)
	{
		case 168:
			if (!func_540())
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam3);
			}
			break;
		
		case 190:
			if (func_641())
			{
				if (!func_540())
				{
					Var7 = { func_661() };
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_660(Var7)), func_659(Var7), iParam4);
				}
			}
			else if (func_540())
			{
				func_655(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 226:
			if (func_654())
			{
				if (!func_540())
				{
					MONEY::_NETWORK_EARN_FROM_BUSINESS_PRODUCT(iParam1, MISC::GET_HASH_KEY(func_660(func_653(PLAYER::PLAYER_ID()))), 5, iParam4);
				}
			}
			else if (func_540())
			{
				func_655(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 230:
			if (func_654())
			{
				if (!func_540())
				{
					iVar2 = func_649(uParam5->f_16, iParam4);
					iVar3 = iParam1;
					if (iVar2 > 0)
					{
						iVar3 = (iVar3 - iVar2);
					}
					if (iParam2 > 0)
					{
						iVar3 = (iVar3 - iParam2);
					}
					MONEY::_0x6B7E4FB50D5F3D65(iVar3, iParam4, iParam2, iVar2, uParam5->f_16);
				}
			}
			else if (func_540())
			{
				func_655(463142405, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_SMUGGLING(iVar0, iVar1, iParam1, bVar6);
			}
			break;
		
		case 233:
			if (func_540())
			{
				func_655(1407278493, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_GANGOPS_JOBS_PREP_PARTICIPATION(iParam1);
			}
			break;
		
		case 237:
			if (func_654())
			{
				if (!func_540())
				{
					MONEY::_0x0B39CF0D53F1C883(iParam1, uParam5->f_20, iParam4);
				}
			}
			else if (func_540())
			{
				func_655(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CONTRABAND(iParam1, iParam4);
			}
			break;
		
		case 250:
			if (func_540())
			{
				func_655(-961034881, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xA75EAC69F59E96E7(iParam1);
			}
			break;
		
		case 249:
			if (func_540())
			{
				func_655(1135468152, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0xC5156361F26E2212(iParam1);
			}
			break;
		
		case 242:
		case 244:
		case 248:
		case 241:
		case 239:
		case 240:
			if (func_540())
			{
				func_655(-634726636, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x1FDA0AA679C9919B(iParam1);
			}
			break;
		
		case 243:
			if (func_540())
			{
				func_655(1698417709, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_NETWORK_EARN_FROM_CASINO_MISSION_REWARD(iParam1);
			}
			break;
		
		case 158:
			if (uParam5->f_22)
			{
				if (func_540())
				{
					func_655(1668610896, iParam1, &iVar4, 0, 1, 0);
				}
				else
				{
					MONEY::_0x72E7C7B9615FA3C3(iParam1, 0, 0, 1, iParam1, 0, 0);
				}
			}
			else if (func_540())
			{
				func_655(-2032529561, iParam1, &iVar4, 0, 1, 0);
			}
			else
			{
				MONEY::_0x72E7C7B9615FA3C3(iParam1, 1, iParam1, 0, 0, 0, 0);
			}
			break;
		
		default:
			if (func_540())
			{
				func_655(-856006867, iParam1, &iVar4, 0, 1, 0);
				Global_4264051[iVar4 /*85*/].f_6 = iVar0;
				Global_4264051[iVar4 /*85*/].f_7 = iVar1;
				Global_4264051[iVar4 /*85*/].f_8 = bVar6;
			}
			else
			{
				MONEY::_0x0CB1BE0633C024A8(iVar0, iVar1, iParam1, bVar6);
			}
			break;
	}
}

int func_649(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_652(iParam0, iParam1);
	fVar1 = (SYSTEM::TO_FLOAT(func_650(iParam0, iParam1)) * fVar0);
	return SYSTEM::ROUND(fVar1);
}

int func_650(int iParam0, int iParam1)
{
	return (func_651(iParam0) * iParam1);
}

int func_651(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_22319;
		
		case 0:
			return Global_262145.f_22320;
		
		case 1:
			return Global_262145.f_22321;
		
		case 2:
			return Global_262145.f_22322;
		
		case 3:
			return Global_262145.f_22323;
		
		case 4:
			return Global_262145.f_22324;
		
		case 5:
			return Global_262145.f_22325;
		
		case 6:
			return Global_262145.f_22326;
		
		case 7:
			return Global_262145.f_22327;
		
		default:
	}
	return 0;
}

float func_652(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22329);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_22331;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22328);
			break;
		
		case 3:
			fVar0 = Global_262145.f_22331;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22328);
			break;
		
		case 0:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 1:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 4:
			fVar0 = Global_262145.f_22332;
			break;
		
		case 6:
			fVar0 = Global_262145.f_22333;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22330);
			break;
		
		case 2:
			fVar0 = Global_262145.f_22333;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22330);
			break;
		
		case 5:
			fVar0 = Global_262145.f_22333;
			fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22330);
			break;
	}
	iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam1) / fVar1));
	return (SYSTEM::TO_FLOAT(iVar2) * fVar0);
}

int func_653(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

bool func_654()
{
	return func_266(PLAYER::PLAYER_ID());
}

void func_655(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_540())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27658)
			{
				func_656(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_656(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27658)
			{
				func_656(iParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_656(iParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_656(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_540())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_36()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463638)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_507(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_658(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_657(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_657(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_494(iParam0);
	}
}

void func_658(int iParam0, int iParam1)
{
	Global_2464818 = iParam1;
	Global_2464817 = iParam0;
}

int func_659(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

char* func_660(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

struct<2> func_661()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_193;
}

bool func_662(bool bParam0)
{
	return func_315(PLAYER::PLAYER_ID(), bParam0);
}

void func_663(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1630317[iParam0 /*595*/].f_11.f_8[0];
	*uParam2 = Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_664()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

int func_665(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_666(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_666(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_676(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_672(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_667(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_667(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_670(iParam0, 1) };
	if (iParam0 == func_669(PLAYER::PLAYER_PED_ID()))
	{
		func_668(1);
	}
	func_672(Var0, iParam1, 0, sParam2, iParam3);
}

void func_668(int iParam0)
{
	Global_2440277.f_2002 = iParam0;
}

int func_669(int iParam0)
{
	return iParam0;
}

Vector3 func_670(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_671(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_671(int iParam0)
{
	return iParam0;
}

void func_672(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440277.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440277.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440277.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440277.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440277.f_1401[iVar1 /*30*/].f_4 = func_675(Global_2440277.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440277.f_1401[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2440277.f_1401[iVar1 /*30*/].f_3 = iParam3;
			Global_2440277.f_1401[iVar1 /*30*/].f_8 = iParam4;
			Global_2440277.f_1401[iVar1 /*30*/].f_9 = func_674();
			Global_2440277.f_1401[iVar1 /*30*/].f_10 = func_673();
			StringCopy(&(Global_2440277.f_1401[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2440277.f_1401[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_673()
{
	if (Global_2440277.f_2002)
	{
		Global_2440277.f_2002 = 0;
		return 1;
	}
	Global_2440277.f_2002 = 0;
	return 0;
}

var func_674()
{
	var uVar0;
	
	uVar0 = Global_2440277.f_2004;
	Global_2440277.f_2004 = 1;
	return uVar0;
}

float func_675(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0.402f;
		*uParam4 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0.212f;
		*uParam4 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam3 = (fVar2 + 0.212f);
	*uParam4 = (fVar3 + 0.286f);
	return fVar1;
}

var func_676(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_677(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_677(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_703(PLAYER::PLAYER_ID()) || func_702(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_370() || func_701(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_700(sParam2))
	{
	}
	if (func_699())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_697(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_696(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_694(0, &iVar1);
					break;
				
				case 3:
					func_694(1, &iVar1);
					break;
				
				case 1:
					func_692(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688740)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_691(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_687((func_690(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_2 != -1)
				{
					func_691(1165, iVar1, -1);
				}
				func_682(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_678((func_680(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_678((func_680(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_678(int iParam0)
{
	if (func_699())
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_5 = iParam0;
		func_679(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_679(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_680(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1327(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_681(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_681(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_681(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_682(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_59(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_685(func_686(&Var0));
			if (iVar13 == 0)
			{
				func_684(&Global_1388052, iParam0);
				func_683(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar13 == 1)
			{
				func_684(&Global_1388053, iParam0);
				func_683(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar13 == 2)
			{
				func_684(&Global_1388054, iParam0);
				func_683(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar13 == 3)
			{
				func_684(&Global_1388055, iParam0);
				func_683(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar13 == 4)
			{
				func_684(&Global_1388056, iParam0);
				func_683(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_683(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_684(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_685(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_686(int* iParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return Global_2462403;
		}
	}
	return Global_2462403;
}

void func_687(int iParam0, int iParam1, int iParam2)
{
	if (func_699())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_432(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_432(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_192(PLAYER::PLAYER_ID()))
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_6 = func_688(iParam0, 1);
		}
		func_524(639, iParam0, -1, 1);
		func_521(640, func_688(iParam0, 1), -1, 1, 0);
		Global_1388197[func_432(-1)] = iParam0;
		func_513(-1109644434, 7, 0);
	}
}

int func_688(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_689(iParam0, 0);
}

int func_689(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292403[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292403[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_690(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388197[func_432(-1)];
			}
			else if (func_192(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_432(-1)];
	}
	return 0;
}

void func_691(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_522(iParam0, func_432(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_640(iParam0))
	{
		func_521(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_524(iParam0, iVar0, iParam2, 1);
	}
}

void func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_101(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_60(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_693(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_693(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_693(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_694(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_1327(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_60(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_1327(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_695(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_60(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_693(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_693(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_695(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_52(iParam0), func_52(iParam1));
	return 0f;
}

int func_696(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_693(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_697(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_690(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_690(PLAYER::PLAYER_ID());
		}
	}
	if (func_698(8000, 0, 0) > 0)
	{
		if (func_698(8000, 0, 0) < (iParam0 + func_690(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_698(8000, 0, 0) - func_690(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_698(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292403[iParam0];
}

int func_699()
{
	return 1;
}

int func_700(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_701(int iParam0)
{
	return func_566(func_245(iParam0));
}

bool func_702(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 2;
}

bool func_703(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_119 == 7;
}

void func_704()
{
	Global_2464020 = 1;
}

void func_705(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_220(7))
	{
		return;
	}
	iVar0 = func_708(iParam0);
	iVar1 = func_707(iParam0);
	iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2540612.f_5188.f_266, NETWORK::GET_NETWORK_TIME()));
	if (func_706(iParam0) != -1)
	{
		if (iVar2 > func_706(iParam0))
		{
			iVar2 = func_706(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_12403)
	{
		iVar2 = Global_262145.f_12403;
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_706(int iParam0)
{
	if (func_346(iParam0, 0) || func_445(iParam0))
	{
		return Global_262145.f_18495;
	}
	if (func_444(iParam0))
	{
		return Global_262145.f_18494;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_18491;
		
		case 191:
			return Global_262145.f_18493;
		
		case 190:
			return Global_262145.f_18492;
		
		case 227:
			return Global_262145.f_21053;
		
		case 226:
			return Global_262145.f_21041;
		
		case 225:
			return Global_262145.f_21061;
		
		case 230:
			return Global_262145.f_22316;
		
		case 229:
			return Global_262145.f_22220;
		
		case 233:
			return Global_262145.f_22792;
		
		case 237:
			return Global_262145.f_23955;
		
		case 238:
			return Global_262145.f_24066;
		
		case 249:
			return Global_262145.f_24082;
		
		case 243:
			return Global_262145.f_26375;
		
		default:
	}
	return -1;
}

int func_707(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12494;
		
		case 152:
			return Global_262145.f_12529;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12517;
		
		case 157:
			return Global_262145.f_12484;
		
		case 159:
			return Global_262145.f_12467;
		
		case 164:
			return Global_262145.f_12507;
		
		case 160:
			return Global_262145.f_12557;
		
		case 162:
			return Global_262145.f_12577;
		
		case 163:
			return Global_262145.f_12542;
		
		case 154:
			return Global_262145.f_12612;
		
		case 155:
			return Global_262145.f_12602;
		
		case 153:
			return Global_262145.f_12566;
		
		case 170:
			return Global_262145.f_15003;
		
		case 171:
			return Global_262145.f_15062;
		
		case 172:
			return Global_262145.f_15080;
		
		case 173:
			return Global_262145.f_15021;
		
		case 166:
			return Global_262145.f_15036;
		
		case 167:
			return Global_262145.f_15127;
		
		case 169:
			return Global_262145.f_15099;
		
		case 168:
			return Global_262145.f_15092;
		
		case 179:
			return Global_262145.f_18374;
		
		case 180:
			return Global_262145.f_18152;
		
		case 182:
			return Global_262145.f_18152;
		
		case 183:
			return Global_262145.f_18152;
		
		case 185:
			return Global_262145.f_18152;
		
		case 186:
			return Global_262145.f_18152;
		
		case 189:
			return Global_262145.f_18374;
		
		case 190:
			return Global_262145.f_18028;
		
		case 191:
			return Global_262145.f_18119;
		
		case 192:
			return Global_262145.f_17913;
		
		case 193:
			return Global_262145.f_18374;
		
		case 194:
			return Global_262145.f_18374;
		
		case 195:
			return Global_262145.f_18152;
		
		case 197:
			return Global_262145.f_18152;
		
		case 198:
			return Global_262145.f_18152;
		
		case 199:
			return Global_262145.f_18374;
		
		case 200:
			return Global_262145.f_18374;
		
		case 201:
			return Global_262145.f_18374;
		
		case 205:
			return Global_262145.f_18374;
		
		case 207:
			return Global_262145.f_18152;
		
		case 208:
			return Global_262145.f_18152;
		
		case 209:
			return Global_262145.f_18152;
		
		case 210:
			return Global_262145.f_18374;
		
		case 211:
			return Global_262145.f_18374;
		
		case 214:
			return Global_262145.f_19224;
		
		case 215:
			return Global_262145.f_19226;
		
		case 216:
			return Global_262145.f_19228;
		
		case 217:
			return Global_262145.f_19230;
		
		case 218:
			return Global_262145.f_19232;
		
		case 219:
			return Global_262145.f_19234;
		
		case 220:
			return Global_262145.f_19236;
		
		case 221:
			return Global_262145.f_19238;
		
		case 225:
			if (!func_654())
			{
				return Global_262145.f_21063;
			}
			break;
		
		case 226:
			if (!func_654())
			{
				return Global_262145.f_21043;
			}
			break;
		
		case 227:
			if (!func_654())
			{
				return Global_262145.f_21055;
			}
			break;
		
		case 229:
			if (!func_654())
			{
				return Global_262145.f_22222;
			}
			break;
		
		case 230:
			if (!func_654())
			{
				return Global_262145.f_22318;
			}
			break;
		
		case 233:
			if (!func_654())
			{
				return Global_262145.f_22791;
			}
			break;
		
		case 241:
			return 100;
		
		case 242:
			return 100;
		
		case 244:
			return 100;
		
		case 248:
			return 100;
		
		case 239:
			return 100;
		
		case 240:
			return 100;
		
		case 250:
			return 100;
		
		case 237:
			if (!func_654())
			{
				return Global_262145.f_23957;
			}
			break;
		
		case 238:
			if (!func_654())
			{
				return Global_262145.f_24068;
			}
			break;
		
		case 249:
			if (!func_654())
			{
				return Global_262145.f_24084;
			}
			break;
		
		case 243:
			if (!func_654())
			{
				return Global_262145.f_26378;
			}
			break;
		
		case 158:
			if (!func_654())
			{
				return 100;
			}
			break;
	}
	return 0;
}

int func_708(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_12493;
		
		case 152:
			return Global_262145.f_12528;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_12516;
		
		case 157:
			return Global_262145.f_12483;
		
		case 159:
			return Global_262145.f_12466;
		
		case 164:
			return Global_262145.f_12506;
		
		case 160:
			return Global_262145.f_12556;
		
		case 162:
			return Global_262145.f_12576;
		
		case 163:
			return Global_262145.f_12541;
		
		case 154:
			return Global_262145.f_12611;
		
		case 155:
			return Global_262145.f_12601;
		
		case 153:
			return Global_262145.f_12565;
		
		case 170:
			return Global_262145.f_15002;
		
		case 171:
			return Global_262145.f_15061;
		
		case 172:
			return Global_262145.f_15079;
		
		case 173:
			return Global_262145.f_15020;
		
		case 166:
			return Global_262145.f_15035;
		
		case 179:
			return Global_262145.f_18373;
		
		case 180:
			return Global_262145.f_18151;
		
		case 182:
			return Global_262145.f_18151;
		
		case 183:
			return Global_262145.f_18151;
		
		case 185:
			return Global_262145.f_18151;
		
		case 186:
			return Global_262145.f_18151;
		
		case 189:
			return Global_262145.f_18373;
		
		case 193:
			return Global_262145.f_18373;
		
		case 194:
			return Global_262145.f_18373;
		
		case 195:
			return Global_262145.f_18151;
		
		case 197:
			return Global_262145.f_18151;
		
		case 198:
			return Global_262145.f_18151;
		
		case 199:
			return Global_262145.f_18373;
		
		case 200:
			return Global_262145.f_18373;
		
		case 201:
			return Global_262145.f_18373;
		
		case 205:
			return Global_262145.f_18373;
		
		case 207:
			return Global_262145.f_18151;
		
		case 208:
			return Global_262145.f_18151;
		
		case 209:
			return Global_262145.f_18151;
		
		case 210:
			return Global_262145.f_18373;
		
		case 211:
			return Global_262145.f_18373;
		
		case 190:
			if (func_380(0))
			{
				return Global_262145.f_18027;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (func_380(0))
			{
				return Global_262145.f_18118;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (func_380(0))
			{
				return Global_262145.f_17912;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_19223;
		
		case 215:
			return Global_262145.f_19225;
		
		case 216:
			return Global_262145.f_19227;
		
		case 217:
			return Global_262145.f_19229;
		
		case 218:
			return Global_262145.f_19231;
		
		case 219:
			return Global_262145.f_19233;
		
		case 220:
			return Global_262145.f_19235;
		
		case 221:
			return Global_262145.f_19237;
		
		case 225:
			if (func_380(0))
			{
				return Global_262145.f_21062;
			}
			break;
		
		case 226:
			if (func_380(0))
			{
				return Global_262145.f_21042;
			}
			break;
		
		case 227:
			if (func_380(0))
			{
				return Global_262145.f_21054;
			}
			break;
		
		case 229:
			if (func_380(0))
			{
				return Global_262145.f_22221;
			}
			break;
		
		case 230:
			if (func_380(0))
			{
				return Global_262145.f_22317;
			}
			break;
		
		case 233:
			if (func_380(0))
			{
				return Global_262145.f_22793;
			}
			break;
		
		case 241:
			return 500;
		
		case 242:
			return 500;
		
		case 244:
			return 500;
		
		case 248:
			return 500;
		
		case 239:
			return 500;
		
		case 240:
			return 500;
		
		case 250:
			return 500;
		
		case 237:
			if (func_380(0))
			{
				return Global_262145.f_23956;
			}
			break;
		
		case 238:
			if (func_380(0))
			{
				return Global_262145.f_24067;
			}
			break;
		
		case 249:
			if (func_380(0))
			{
				return Global_262145.f_24083;
			}
			break;
		
		case 243:
			return Global_262145.f_26374;
		
		case 158:
			if (func_380(0))
			{
				return 500;
			}
			break;
	}
	return 0;
}

void func_709(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_654())
		{
			if (func_662(0))
			{
				if (!func_380(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_664()))
					{
						if (func_722() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_722());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_720(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_713("GB_BCUT_TICK1", func_664(), iVar0, 0, 0, 1);
						}
						func_485(20);
						func_710(func_664(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_710(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1327(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_712(iParam0);
		func_711(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_502(iParam0));
	}
}

void func_711(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_712(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

int func_713(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_604(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_718(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_714(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_714(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_717() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_34(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_715(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672612.f_5[iVar0 /*53*/] = iParam0;
		Global_1672612.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672612.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672612.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672612.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672612.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672612.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672612.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_715(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672612 - 1))
	{
		if (iParam0 > Global_1672612.f_5[iVar0 /*53*/].f_1)
		{
			func_716(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672612++;
	if (Global_1672612 > 5)
	{
		Global_1672612 = 5;
		return Global_1672612;
	}
	return (Global_1672612 - 1);
}

void func_716(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672612.f_5[iVar0 /*53*/] = { Global_1672612.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_717()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_718(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_719(&cVar0);
}

var func_719(char[4] cParam0)
{
	return cParam0;
}

void func_720(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_721(1);
	}
	else
	{
		iVar1 = func_721(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_721(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_722()
{
	return Global_262145.f_12397;
}

void func_723(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	bVar18 = func_380(1);
	bVar19 = false;
	if (iParam0 == 237)
	{
		if (func_654())
		{
			iVar17 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar17 = func_664();
		}
		iVar11 = iVar17;
		if (iVar11 != -1)
		{
			iVar0 = Global_1590682[iVar11 /*883*/].f_861.f_1;
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar19 = true;
			}
			else
			{
				fVar12 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar13 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar14 = ((fVar12 / fVar13) * 100f);
				fVar15 = ((IntToFloat(iVar0) / 100f) * fVar14);
				iVar1 = SYSTEM::CEIL(fVar15);
			}
			*uParam3 = iVar1;
			if (bVar19)
			{
				iVar2 = Global_1590682[iVar11 /*883*/].f_861.f_2;
			}
			else
			{
				iVar2 = func_739(Global_1590682[iVar11 /*883*/].f_861, *uParam3);
			}
			if (uParam1->f_17)
			{
				iVar20 = (iVar2 - SYSTEM::CEIL((IntToFloat(iVar2) * 0.9f)));
				if (iVar20 > 100000)
				{
					iVar20 = 100000;
				}
				iVar2 = (iVar2 - iVar20);
			}
			*iParam2 = (*iParam2 + iVar2);
			iVar10 = func_738(*iParam2);
			if (iVar10 > 0)
			{
				if (iVar17 == PLAYER::PLAYER_ID())
				{
					func_737("TICK_TCUT", iVar10);
				}
				*iParam2 = (*iParam2 - iVar10);
			}
			Global_1676444.f_49 = *uParam3;
			if (iVar17 == PLAYER::PLAYER_ID())
			{
				if (iVar2 > 0)
				{
					func_736(iVar2);
				}
				if (*uParam3 > 0)
				{
					func_734(*uParam3);
				}
				iVar6 = func_733(&uVar5);
				iVar7 = Global_262145.f_23986;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar9 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_23985));
				iVar8 = ((*iParam2 / 100) * iVar9);
				*iParam2 = (*iParam2 + iVar8);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_485(140);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar18)
					{
						iVar21 = 0;
						while (iVar21 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar22 = iVar21;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar22))
							{
								iVar23 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar22);
								if (func_732(iVar23))
								{
									func_724(iVar23, 1, 198210293);
								}
							}
							iVar21++;
						}
					}
				}
				Global_2540612.f_5188.f_382 = *iParam2;
			}
			else if (bVar18)
			{
				fVar16 = Global_262145.f_23958;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar16));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_23959;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688749 = *iParam2;
					func_485(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_724(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_726(iParam0);
	func_725(iParam0, uVar0, iParam1, iParam2);
}

void func_725(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0 = -2029779863;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_712(iParam0);
	func_711(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_57())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_502(iParam0));
		}
	}
}

int func_726(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_731();
	iVar0 = func_729(iParam0, iVar0);
	iVar1 = Global_1630317[func_664() /*595*/].f_11.f_422;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14963));
	if (iVar0 < func_728())
	{
		iVar0 = func_728();
	}
	if (iVar0 > func_727())
	{
		iVar0 = func_727();
	}
	return iVar0;
}

int func_727()
{
	return Global_262145.f_14964;
}

int func_728()
{
	return Global_262145.f_16139;
}

int func_729(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_785(iParam0) * func_730());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_730()
{
	return Global_262145.f_16138;
}

var func_731()
{
	return Global_262145.f_12389;
}

int func_732(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (iParam0 != PLAYER::PLAYER_ID())
		{
			if (func_348(iParam0, PLAYER::PLAYER_ID(), 0))
			{
				if (!func_249(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_733(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_34(iVar2, 0) && !func_348(iVar2, PLAYER::PLAYER_ID(), 1))
			{
				iVar1++;
			}
			else if (func_34(iVar2, 0))
			{
				*uParam0++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_734(int iParam0)
{
	func_735(iParam0, 7237);
}

void func_735(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_522(iParam1, -1, 0);
	func_521(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

void func_736(int iParam0)
{
	func_735(iParam0, 7232);
}

int func_737(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_714(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_738(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_23987);
	if (fVar1 > 100000f)
	{
		fVar1 = 100000f;
	}
	return SYSTEM::ROUND(fVar1);
}

int func_739(struct<5> Param0, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (iParam5 == Param0.f_1)
	{
		return Param0.f_2;
	}
	iVar0 = Param0.f_2;
	if ((Param0.f_4 == 1 || Param0.f_4 == 2) || Param0.f_4 == 3)
	{
		iVar0 = (iVar0 - Param0.f_3);
	}
	fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(Param0.f_1));
	fVar2 = SYSTEM::TO_FLOAT(iVar0);
	return SYSTEM::FLOOR((fVar2 * fVar1));
}

void func_740(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	*uParam4 = 0;
	bVar16 = func_380(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_654())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_664();
		}
		if (iVar15 != -1)
		{
			iVar0 = (uParam1->f_15 + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
				bVar17 = true;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_650(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_649(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_742(*iParam2) > 0)
			{
				if (iVar15 == PLAYER::PLAYER_ID())
				{
					func_737("SMTICK_RONCUT", func_742(*iParam2));
				}
				*iParam2 = (*iParam2 - func_742(*iParam2));
			}
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_741(iVar2, iVar9);
				iVar6 = func_733(&uVar5);
				iVar7 = Global_262145.f_22335;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_22334));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_485(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_732(iVar20))
								{
									func_724(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540612.f_5188.f_382 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_22268;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_22269;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688749 = *iParam2;
					func_485(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_741(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_735(iParam0, 6117);
	}
	if (iParam1 > 0)
	{
		func_735(iParam1, 6118);
	}
}

int func_742(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (fVar0 * Global_262145.f_22302);
	if (fVar1 > SYSTEM::TO_FLOAT(Global_262145.f_22303))
	{
		fVar1 = SYSTEM::TO_FLOAT(Global_262145.f_22303);
	}
	return SYSTEM::ROUND(fVar1);
}

void func_743(int iParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	bVar17 = func_380(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_654())
		{
			iVar15 = PLAYER::PLAYER_ID();
		}
		else
		{
			iVar15 = func_664();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_653(iVar15);
			iVar0 = (func_766(iVar15, iVar16) + uParam1->f_8);
			if (uParam1->f_10 == uParam1->f_11)
			{
				iVar1 = iVar0;
			}
			else
			{
				fVar10 = SYSTEM::TO_FLOAT(uParam1->f_10);
				fVar11 = SYSTEM::TO_FLOAT(uParam1->f_11);
				fVar12 = ((fVar10 / fVar11) * 100f);
				fVar13 = ((IntToFloat(iVar0) / 100f) * fVar12);
				iVar1 = SYSTEM::CEIL(fVar13);
			}
			*uParam3 = iVar1;
			iVar2 = func_762(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21045));
			}
			else
			{
				iVar2 = SYSTEM::CEIL((IntToFloat(iVar2) * Global_262145.f_21044));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				func_757(iVar16, iVar2);
				if (func_753(iVar16) >= Global_262145.f_20591 || iVar2 >= Global_262145.f_20591)
				{
					func_744(5);
				}
				iVar6 = func_733(&uVar5);
				iVar7 = SYSTEM::ROUND(Global_262145.f_21047);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = SYSTEM::CEIL((IntToFloat(iVar6) * Global_262145.f_21046));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_485(108);
					}
					else
					{
						func_485(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
						{
							iVar19 = iVar18;
							if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar19))
							{
								iVar20 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar19);
								if (func_732(iVar20))
								{
									func_724(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2540612.f_5188.f_382 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_21048;
				iVar3 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21049;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1688749 = *iParam2;
					func_485(112);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
	else if (iParam0 == 227)
	{
	}
}

void func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_20579)
			{
				if (func_746(Global_262145.f_20580))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_20581)
			{
				if (func_746(Global_262145.f_20582))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_20583)
			{
				if (func_746(Global_262145.f_20584))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_20585)
			{
				if (func_746(Global_262145.f_20586))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_20587)
			{
				if (func_746(Global_262145.f_20588))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_20589)
			{
				if (func_746(Global_262145.f_20590))
				{
					func_737("CLOTHAWDSTRAP3", Global_262145.f_20591);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_20592)
			{
				if (func_746(Global_262145.f_20593))
				{
					func_737("CLOTHAWDSTRAP5", Global_262145.f_20727);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_20595)
			{
				if (func_746(Global_262145.f_20596))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_20597)
			{
				if (func_746(Global_262145.f_20598))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_20599)
			{
				if (func_746(Global_262145.f_20600))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_20601)
			{
				if (func_746(Global_262145.f_20602))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_20603)
			{
				if (func_746(Global_262145.f_20604))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_20605)
			{
				if (func_746(Global_262145.f_20606))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_20607)
			{
				if (func_746(Global_262145.f_20608))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_20609)
			{
				if (func_746(Global_262145.f_20610))
				{
					func_745("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0);
				}
			}
			break;
	}
}

int func_745(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	if (!iParam2 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam2);
	}
	if (!iParam3 == 0)
	{
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	if (!bParam4)
	{
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	}
	else
	{
		Global_2515401 = { func_59(PLAYER::PLAYER_ID()) };
		if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515331, 35, &Global_2515401))
		{
			bVar1 = false;
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2515331.f_22), "Leader") && Global_2515331.f_30 == 0)
			{
				bVar1 = true;
			}
			if (Global_2515331.f_21 > 0)
			{
				bVar2 = false;
			}
			else
			{
				bVar2 = true;
			}
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar2, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515331, 35), &(Global_2515331.f_17), Global_2515331.f_30, bVar1, false, Global_2515331, PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), Global_1314053, Global_1314054, Global_1314055);
		}
		else
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
	}
	func_714(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_746(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_750(15417, -1, -1))
			{
				func_749(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_750(15418, -1, -1))
			{
				func_749(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_750(15425, -1, -1))
			{
				func_749(15425, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_DECL_5_0"):
		case joaat("DLC_MP_GR_F_DECL_5_0"):
		case -1307315235:
		case joaat("CLO_GRF_DECL_19"):
			if (!func_750(15405, -1, -1))
			{
				func_749(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_750(15393, -1, -1))
			{
				func_749(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_750(15409, -1, -1))
			{
				func_749(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_750(15396, -1, -1))
			{
				func_749(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_750(15412, -1, -1))
			{
				func_749(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_750(15403, -1, -1))
			{
				func_749(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_750(15389, -1, -1))
			{
				func_749(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_750(15398, -1, -1))
			{
				func_749(15398, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_PHEAD_6_0"):
		case joaat("DLC_MP_GR_F_PHEAD_6_0"):
		case joaat("DLC_MP_GR_M_PHEAD_7_0"):
		case joaat("DLC_MP_GR_F_PHEAD_7_0"):
		case -1991379993:
		case joaat("CLO_GRF_PH_6_0"):
			if (!func_750(15400, -1, -1))
			{
				func_749(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_750(15408, -1, -1))
			{
				func_749(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_750(15411, -1, -1))
			{
				func_749(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_750(15397, -1, -1))
			{
				func_749(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_750(15413, -1, -1))
			{
				func_749(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_750(15391, -1, -1))
			{
				func_749(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_750(15388, -1, -1))
			{
				func_749(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_750(15401, -1, -1))
			{
				func_749(15401, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_000_M"):
		case joaat("MP_Gunrunning_Award_000_F"):
		case -1604737223:
		case joaat("CLO_GRF_DECL_0"):
			if (!func_750(15394, -1, -1))
			{
				func_749(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_750(15406, -1, -1))
			{
				func_749(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_750(15395, -1, -1))
			{
				func_749(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_750(15410, -1, -1))
			{
				func_749(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_750(15407, -1, -1))
			{
				func_749(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_750(15414, -1, -1))
			{
				func_749(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_750(15415, -1, -1))
			{
				func_749(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_750(15399, -1, -1))
			{
				func_749(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_750(15404, -1, -1))
			{
				func_749(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_750(15392, -1, -1))
			{
				func_749(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_750(15390, -1, -1))
			{
				func_749(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_750(15402, -1, -1))
			{
				func_749(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_750(15416, -1, -1))
			{
				func_749(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_431(209, -1))
			{
				func_747(209, 1, -1, 1);
				return 1;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("MP_Gunrunning_Award_019_M"):
		case joaat("MP_Gunrunning_Award_025_F"):
		case -14316613:
		case joaat("CLO_GRF_DECL_30"):
			if (!func_750(15426, -1, -1))
			{
				func_749(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_750(15422, -1, -1))
			{
				func_749(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_750(15423, -1, -1))
			{
				func_749(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_750(15421, -1, -1))
			{
				func_749(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_750(15427, -1, -1))
			{
				func_749(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_750(15419, -1, -1))
			{
				func_749(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_750(15420, -1, -1))
			{
				func_749(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_747(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_748())
	{
		iVar0 = Global_2588062[iParam0 /*3*/][func_432(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_748()
{
	return 1;
	return 0;
}

bool func_749(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	bVar0 = false;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar20, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar21, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar22, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar23, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar24, bParam1, iVar1, bParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
		bVar0 = STATS::STAT_SET_BOOL_MASKED(iVar25, bParam1, iVar1, bParam3);
	}
	return bVar0;
}

bool func_750(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_752(iParam0, iParam1);
	iVar2 = func_751(iParam0);
	if (0 != iVar1)
	{
		bVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, iVar2, iParam2);
	}
	return bVar0;
}

int func_751(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_752(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), false, true, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), true, true, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), false, false, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), true, false, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 2919), false, false, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_BOOL_STAT_KEY((iParam0 - 3111), false, true, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), false, false, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), false, true, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), false, true, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), false, false, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), false, true, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), false, true, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), false, true, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), false, true, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), false, true, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), false, true, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), false, true, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), false, true, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 26810), false, true, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28098), false, true, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 28355), false, true, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30227), false, true, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30355), false, true, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 30515), false, true, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_753(int iParam0)
{
	int iVar0;
	
	iVar0 = func_755(iParam0);
	return func_522(func_754(iVar0), -1, 0);
}

int func_754(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3952;
		
		case 1:
			return 3953;
		
		case 2:
			return 3954;
		
		case 3:
			return 3955;
		
		case 4:
			return 3956;
		
		case 5:
			return 5457;
		
		default:
	}
	return 3952;
}

int func_755(int iParam0)
{
	int iVar0;
	
	if (func_756(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_756(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_757(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_755(iParam0);
	iVar1 = func_754(iVar0);
	iVar2 = (func_522(iVar1, -1, 0) + iParam1);
	func_521(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_759(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
			{
				iVar1 = func_754(iVar0);
				iVar3 = (iVar3 + func_522(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_758(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_518(9357, iVar5, -1, 1);
	}
}

int func_758(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 100000;
			break;
		
		case 2:
			return 300000;
			break;
		
		case 3:
			return 500000;
			break;
	}
	return 0;
}

int func_759(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_761(iParam0, iParam1);
	iVar2 = func_760(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_760(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - STATS::_STAT_GET_PACKED_INT_MASK((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_761(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 384), false, true, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 457), true, true, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1281), false, false, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::GET_PACKED_INT_STAT_KEY((iParam0 - 1305), true, false, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1361), false, false, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_PACKED_TITLE_UPDATE_INT_STAT_KEY((iParam0 - 1393), false, true, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), false, false, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), false, true, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), false, true, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), false, true, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), false, true, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), false, true, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), false, true, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), false, true, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), false, false, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), false, true, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), false, true, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), false, true, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), false, true, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), false, true, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 25538), false, true, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 27258), false, true, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 28483), false, true, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 30483), false, true, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

int func_762(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_659(iParam1);
	if (func_756(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16968;
				if (func_763(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16973);
				}
				if (func_763(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16978);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16967;
				if (func_763(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16972);
				}
				if (func_763(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16977);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16966;
				if (func_763(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16971);
				}
				if (func_763(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16976);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16964;
				if (func_763(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16969);
				}
				if (func_763(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16974);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16965;
				if (func_763(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16970);
				}
				if (func_763(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16975);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_21070;
				if (func_763(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_21072);
				}
				if (func_763(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_21071);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_763(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_765(iParam0, iParam1))
	{
		iVar0 = func_764(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_764(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_756(iParam1) && iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_765(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_756(iParam1) && iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_766(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_756(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_767(int iParam0, var uParam1, int iParam2, var uParam3)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<2> Var15;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	float fVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	int iVar25;
	
	if (iParam0 == 192)
	{
	}
	else if (iParam0 == 190)
	{
		if (uParam1->f_10 > 0)
		{
			if (func_641())
			{
				Var0 = { func_661() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar2 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar3 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (uParam1->f_15 + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = SYSTEM::CEIL(fVar6);
				}
				iVar7 = func_762(PLAYER::PLAYER_ID(), Var0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18603);
					iVar7 = SYSTEM::ROUND(fVar8);
				}
				else
				{
					fVar9 = (SYSTEM::TO_FLOAT(iVar7) * Global_262145.f_18602);
					iVar7 = SYSTEM::ROUND(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_733(&uVar10);
				iVar12 = SYSTEM::ROUND(Global_262145.f_18593);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = SYSTEM::CEIL((IntToFloat(iVar11) * Global_262145.f_18592));
				iVar14 = ((*iParam2 / 100) * iVar13);
				*iParam2 = (*iParam2 + iVar14);
				if (uParam1->f_6)
				{
					*iParam2 = (*iParam2 + *uParam1);
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
					else if (uParam1->f_12 == 9)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
				if (iVar11 > 0)
				{
					func_485(86);
				}
				Global_2540612.f_5188.f_382 = *iParam2;
			}
			else if (func_380(0))
			{
				Var15 = { func_768(func_664()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (uParam1->f_15 + uParam1->f_8);
				}
				else
				{
					fVar17 = SYSTEM::TO_FLOAT(uParam1->f_10);
					fVar18 = SYSTEM::TO_FLOAT(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (uParam1->f_15 + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = SYSTEM::CEIL(fVar21);
				}
				iVar22 = func_762(func_664(), Var15, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18603));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = SYSTEM::CEIL((IntToFloat(iVar22) * Global_262145.f_18602));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_18642;
				iVar24 = SYSTEM::CEIL((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_18643;
				if (*iParam2 > iVar25)
				{
					*iParam2 = iVar25;
				}
				if (uParam1->f_6)
				{
					if (uParam1->f_12 == 11)
					{
						if (*uParam1 > 0)
						{
							*iParam2 = (*iParam2 + *uParam1);
						}
					}
				}
			}
		}
	}
}

struct<2> func_768(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_193;
}

void func_769(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam0 == 167)
	{
		if (func_266(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				func_781();
			}
			func_780();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_266(PLAYER::PLAYER_ID()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_775(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_182));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_774(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_733(&uVar2);
					iVar4 = Global_262145.f_16149;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = SYSTEM::CEIL((IntToFloat(iVar3) * Global_262145.f_15358));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_485(44);
					}
				}
				func_772(*iParam3);
				func_771();
				Global_2540612.f_5188.f_382 = *iParam3;
				iVar7 = 0;
				while (iVar7 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					iVar8 = iVar7;
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar8))
					{
						iVar9 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar8);
						if (func_732(iVar9))
						{
							func_724(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_266(PLAYER::PLAYER_ID()))
		{
			func_770();
		}
	}
}

void func_770()
{
	int iVar0;
	
	iVar0 = Global_2590835[func_36()];
	iVar0++;
	func_524(3668, iVar0, -1, 1);
}

void func_771()
{
	int iVar0;
	
	iVar0 = Global_2590841[func_36()];
	iVar0++;
	func_524(3667, iVar0, -1, 1);
}

void func_772(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2590844[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_524(3669, iVar0, -1, 1);
	if (func_759(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_773(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_518(7666, iVar2, -1, 1);
	}
}

int func_773(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_16282;
			break;
		
		case 2:
			return Global_262145.f_16283;
			break;
		
		case 3:
			return Global_262145.f_16284;
			break;
		
		case 4:
			return Global_262145.f_16285;
			break;
		
		case 5:
			return Global_262145.f_16286;
			break;
		
		case 6:
			return Global_262145.f_16287;
			break;
		
		case 7:
			return Global_262145.f_16288;
			break;
		
		case 8:
			return Global_262145.f_16289;
			break;
		
		case 9:
			return Global_262145.f_16290;
			break;
		
		case 10:
			return Global_262145.f_16291;
			break;
		
		case 11:
			return Global_262145.f_16292;
			break;
		
		case 12:
			return Global_262145.f_16293;
			break;
		
		case 13:
			return Global_262145.f_16294;
			break;
		
		case 14:
			return Global_262145.f_16295;
			break;
		
		case 15:
			return Global_262145.f_16296;
			break;
		
		case 16:
			return Global_262145.f_16297;
			break;
		
		case 17:
			return Global_262145.f_16298;
			break;
		
		case 18:
			return Global_262145.f_16299;
			break;
		
		case 19:
			return Global_262145.f_16300;
			break;
		
		case 20:
			return Global_262145.f_16301;
			break;
		
		case 21:
			return Global_262145.f_16302;
			break;
		
		case 22:
			return Global_262145.f_16303;
			break;
		
		case 23:
			return Global_262145.f_16304;
			break;
		
		case 24:
			return Global_262145.f_16305;
			break;
	}
	return 0;
}

var func_774(int iParam0)
{
	if (iParam0 >= Global_262145.f_15336)
	{
		return Global_262145.f_15357;
	}
	else if (iParam0 >= Global_262145.f_15335)
	{
		return Global_262145.f_15356;
	}
	else if (iParam0 >= Global_262145.f_15334)
	{
		return Global_262145.f_15355;
	}
	else if (iParam0 >= Global_262145.f_15333)
	{
		return Global_262145.f_15354;
	}
	else if (iParam0 >= Global_262145.f_15332)
	{
		return Global_262145.f_15353;
	}
	else if (iParam0 >= Global_262145.f_15331)
	{
		return Global_262145.f_15352;
	}
	else if (iParam0 >= Global_262145.f_15330)
	{
		return Global_262145.f_15351;
	}
	else if (iParam0 >= Global_262145.f_15329)
	{
		return Global_262145.f_15350;
	}
	else if (iParam0 >= Global_262145.f_15328)
	{
		return Global_262145.f_15349;
	}
	else if (iParam0 >= Global_262145.f_15327)
	{
		return Global_262145.f_15348;
	}
	else if (iParam0 >= Global_262145.f_15326)
	{
		return Global_262145.f_15347;
	}
	else if (iParam0 >= Global_262145.f_15325)
	{
		return Global_262145.f_15346;
	}
	else if (iParam0 >= Global_262145.f_15324)
	{
		return Global_262145.f_15345;
	}
	else if (iParam0 >= Global_262145.f_15323)
	{
		return Global_262145.f_15344;
	}
	else if (iParam0 >= Global_262145.f_15322)
	{
		return Global_262145.f_15343;
	}
	else if (iParam0 >= Global_262145.f_15321)
	{
		return Global_262145.f_15342;
	}
	else if (iParam0 >= Global_262145.f_15320)
	{
		return Global_262145.f_15341;
	}
	else if (iParam0 >= Global_262145.f_15319)
	{
		return Global_262145.f_15340;
	}
	else if (iParam0 >= Global_262145.f_15318)
	{
		return Global_262145.f_15339;
	}
	else if (iParam0 >= Global_262145.f_15317)
	{
		return Global_262145.f_15338;
	}
	return Global_262145.f_15337;
}

int func_775(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_779(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_778(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_777(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_776(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_776(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_777(MISC::GET_RANDOM_INT_IN_RANGE(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_776(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_523(func_541(iParam0));
		return func_522(iVar0, -1, 0);
	}
	return 0;
}

int func_777(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_15536;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_15534;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_15538;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_15532;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_15530;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_15540;
	}
	return 0;
}

int func_778(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1677994[iVar0] == iParam1 && Global_1678001[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_779(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_106[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_780()
{
	int iVar0;
	
	iVar0 = Global_2590832[func_36()];
	iVar0++;
	Global_2590832[func_36()] = iVar0;
	func_524(3666, iVar0, -1, 1);
}

void func_781()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2590829[func_36()];
	iVar1 = Global_2590838[func_36()];
	iVar0++;
	iVar1++;
	Global_2590829[func_36()] = iVar0;
	Global_2590838[func_36()] = iVar1;
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_128 = iVar1;
	func_524(3664, iVar0, -1, 1);
	func_524(3665, iVar1, -1, 1);
}

void func_782()
{
	if (func_654())
	{
		Global_2452907.f_3074.f_134 = 0;
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_422 = Global_2452907.f_3074.f_134;
	}
}

void func_783()
{
	if (func_654())
	{
		if (Global_2452907.f_3074.f_134 < 10)
		{
			Global_2452907.f_3074.f_134++;
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_422 = Global_2452907.f_3074.f_134;
		}
	}
}

void func_784()
{
	if (func_654())
	{
		if (Global_2452907.f_3074.f_134 > 0)
		{
			Global_2452907.f_3074.f_134 = (Global_2452907.f_3074.f_134 - 1);
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_422 = Global_2452907.f_3074.f_134;
		}
	}
}

int func_785(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_28;
}

int func_786(int iParam0)
{
	switch (iParam0)
	{
		case 167:
		case 168:
		case 178:
		case 188:
			return 1;
		
		case 225:
		case 226:
		case 229:
		case 230:
		case 233:
		case 237:
		case 158:
		case 256:
		case 258:
			if (func_662(1) && !func_380(1))
			{
				if (func_787(func_664()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_787(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

int func_788(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return Global_262145.f_18289;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12514) * Global_262145.f_12519));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12464) * Global_262145.f_12469));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12491) * Global_262145.f_12495));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12504) * Global_262145.f_12508));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12526) * Global_262145.f_12531));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12688) * Global_262145.f_12689));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12694) * Global_262145.f_12695));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12692) * Global_262145.f_12693));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12686) * Global_262145.f_12687));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12690) * Global_262145.f_12691));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12684) * Global_262145.f_12685));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_15059;
		
		case 172:
			return Global_262145.f_15075;
		
		case 173:
			return Global_262145.f_15018;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_18297;
		
		case 180:
			return Global_262145.f_18172;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18180;
		
		case 185:
			return Global_262145.f_18189;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18385;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18402;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18249;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18433;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18311;
		
		case 205:
			return Global_262145.f_18420;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18278;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18415;
		
		case 211:
			return Global_262145.f_18379;
		
		case 214:
			return Global_262145.f_18973;
		
		case 215:
			return Global_262145.f_18983;
		
		case 216:
			return Global_262145.f_18993;
		
		case 217:
			return Global_262145.f_19002;
		
		case 218:
			return Global_262145.f_19011;
		
		case 219:
			return Global_262145.f_19027;
		
		case 241:
			return Global_262145.f_24103;
		
		case 242:
			return Global_262145.f_24099;
		
		case 248:
			return Global_262145.f_24102;
		
		case 244:
			return Global_262145.f_24100;
		
		case 239:
			return Global_262145.f_24104;
		
		case 240:
			return Global_262145.f_24105;
		
		case 243:
			return Global_262145.f_26373;
		
		default:
	}
	return 0;
}

int func_789(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return Global_262145.f_18290;
	}
	switch (iParam0)
	{
		case 142:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12515) * Global_262145.f_12520));
		
		case 157:
			return 0;
		
		case 159:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12465) * Global_262145.f_12470));
		
		case 151:
			return 0;
		
		case 148:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12492) * Global_262145.f_12496));
		
		case 164:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12505) * Global_262145.f_12509));
		
		case 152:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12527) * Global_262145.f_12532));
		
		case 153:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12564) * Global_262145.f_12567));
		
		case 154:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12610) * Global_262145.f_12613));
		
		case 155:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12600) * Global_262145.f_12603));
		
		case 160:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12555) * Global_262145.f_12558));
		
		case 162:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12575) * Global_262145.f_12580));
		
		case 163:
			return SYSTEM::ROUND((IntToFloat(Global_262145.f_12540) * Global_262145.f_12543));
		
		case 170:
			return Global_262145.f_15001;
		
		case 171:
			return Global_262145.f_15060;
		
		case 172:
			return Global_262145.f_15076;
		
		case 173:
			return Global_262145.f_15019;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_17098;
		
		case 168:
			return Global_262145.f_17097;
		
		case 179:
			return Global_262145.f_18298;
		
		case 180:
			return Global_262145.f_18173;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_18181;
		
		case 185:
			return Global_262145.f_18190;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_18386;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_18403;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_18250;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_18434;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_18312;
		
		case 205:
			return Global_262145.f_18421;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_18279;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_18416;
		
		case 211:
			return Global_262145.f_18380;
		
		case 214:
			return Global_262145.f_18974;
		
		case 215:
			return Global_262145.f_18984;
		
		case 216:
			return Global_262145.f_18994;
		
		case 217:
			return Global_262145.f_19003;
		
		case 218:
			return Global_262145.f_19012;
		
		case 219:
			return Global_262145.f_19028;
		
		case 178:
			if (func_654())
			{
				return Global_262145.f_18851;
			}
			else if (bParam1)
			{
				return Global_262145.f_18852;
			}
			break;
		
		case 188:
			if (func_654())
			{
				return Global_262145.f_18935;
			}
			else if (bParam1)
			{
				return Global_262145.f_18936;
			}
			break;
		
		case 225:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21058;
				}
				else
				{
					return Global_262145.f_21059;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_21060;
			}
			break;
		
		case 226:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21038;
				}
				else
				{
					return Global_262145.f_21039;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_21040;
			}
			break;
		
		case 227:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_21050;
				}
				else
				{
					return Global_262145.f_21051;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_21052;
			}
			break;
		
		case 229:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22217;
				}
				else
				{
					return Global_262145.f_22218;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_22219;
			}
			break;
		
		case 230:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22313;
				}
				else
				{
					return Global_262145.f_22314;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_22315;
			}
			break;
		
		case 233:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_22789;
				}
				else
				{
					return Global_262145.f_22790;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_22788;
			}
			break;
		
		case 241:
			return Global_262145.f_24110;
		
		case 242:
			return Global_262145.f_24106;
		
		case 244:
			return Global_262145.f_24107;
		
		case 248:
			return Global_262145.f_24109;
		
		case 239:
			return Global_262145.f_24111;
		
		case 240:
			return Global_262145.f_24112;
		
		case 237:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_23952;
				}
				else
				{
					return Global_262145.f_23953;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_23954;
			}
			break;
		
		case 238:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24063;
				}
				else
				{
					return Global_262145.f_24064;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_24065;
			}
			break;
		
		case 249:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_24079;
				}
				else
				{
					return Global_262145.f_24080;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_24081;
			}
			break;
		
		case 243:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return Global_262145.f_26376;
				}
				else
				{
					return Global_262145.f_26377;
				}
			}
			else if (func_641())
			{
				return Global_262145.f_26376;
			}
			break;
		
		case 158:
			if (func_654() && !func_641())
			{
				if (func_787(PLAYER::PLAYER_ID()))
				{
					return 1500;
				}
				else
				{
					return 1000;
				}
			}
			else if (func_641())
			{
				return 1500;
			}
			break;
	}
	return 0;
}

void func_790(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_791(iParam0))
	{
		if (!func_654())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_12408;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_315(PLAYER::PLAYER_ID(), 1))
	{
		if (func_461(iParam0))
		{
			*uParam1 = (Global_262145.f_18149 / 100f);
			*uParam2 = (Global_262145.f_18149 / 100f);
		}
		else if (iParam0 == 242)
		{
			*uParam1 = Global_262145.f_24113;
			*uParam2 = Global_262145.f_24113;
		}
		else if (iParam0 == 244)
		{
			*uParam1 = Global_262145.f_24114;
			*uParam2 = Global_262145.f_24114;
		}
		else if (iParam0 == 248)
		{
			*uParam1 = Global_262145.f_24116;
			*uParam2 = Global_262145.f_24116;
		}
		else if (iParam0 == 241)
		{
			*uParam1 = Global_262145.f_24117;
			*uParam2 = Global_262145.f_24117;
		}
		else if (iParam0 == 239)
		{
			*uParam1 = Global_262145.f_24118;
			*uParam2 = Global_262145.f_24118;
		}
		else if (iParam0 == 240)
		{
			*uParam1 = Global_262145.f_24119;
			*uParam2 = Global_262145.f_24119;
		}
		else
		{
			*uParam1 = Global_262145.f_12405;
			*uParam2 = Global_262145.f_12404;
		}
	}
	else if (func_461(iParam0))
	{
		*uParam1 = (Global_262145.f_18150 / 100f);
		*uParam2 = (Global_262145.f_18150 / 100f);
	}
	else if (iParam0 == 242)
	{
		*uParam1 = Global_262145.f_24120;
		*uParam2 = Global_262145.f_24120;
	}
	else if (iParam0 == 244)
	{
		*uParam1 = Global_262145.f_24121;
		*uParam2 = Global_262145.f_24121;
	}
	else if (iParam0 == 248)
	{
		*uParam1 = Global_262145.f_24123;
		*uParam2 = Global_262145.f_24123;
	}
	else if (iParam0 == 241)
	{
		*uParam1 = Global_262145.f_24124;
		*uParam2 = Global_262145.f_24124;
	}
	else if (iParam0 == 239)
	{
		*uParam1 = Global_262145.f_24125;
		*uParam2 = Global_262145.f_24125;
	}
	else if (iParam0 == 240)
	{
		*uParam1 = Global_262145.f_24126;
		*uParam2 = Global_262145.f_24126;
	}
	else
	{
		*uParam1 = Global_262145.f_12407;
		*uParam2 = Global_262145.f_12406;
	}
	iVar0 = func_383();
	if (iVar0 != func_57())
	{
		if (func_348(PLAYER::PLAYER_ID(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 160:
		case 162:
		case 153:
		case 154:
		case 155:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return 0;
}

void func_792(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam9)
	{
		iVar0 = func_307(PLAYER::PLAYER_ID());
		Global_1676408.f_4 = func_909();
		Global_1676408.f_5 = func_908();
		if (func_270(PLAYER::PLAYER_ID()) || func_271(PLAYER::PLAYER_ID()))
		{
			Global_1676408.f_6 = 1;
		}
		else
		{
			Global_1676408.f_6 = 0;
		}
		Global_1676408.f_1 = func_902(bParam9);
		Global_1676408.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676408.f_9 = func_901(bParam0);
		Global_1676408.f_10 = iParam1;
		Global_1676408.f_17 = Global_1676408.f_2;
		Global_1676408.f_18 = Global_1676408.f_2;
		Global_1676408.f_19 = func_900();
		Global_1676408.f_21 = (Global_1676408.f_8 - Global_1676408.f_7);
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676408.f_23 = func_901(func_380(1));
		}
		Global_1676408.f_24 = func_899(PLAYER::PLAYER_ID());
		Global_1676408.f_28 = func_898(PLAYER::PLAYER_ID());
		if (Global_1676408.f_24 > 2)
		{
			Global_1676408.f_24 = 2;
		}
		func_896(iVar0);
	}
	else
	{
		iVar0 = func_245(PLAYER::PLAYER_ID());
	}
	if (func_461(iVar0))
	{
		Global_1676147.f_2 = func_909();
		Global_1676147.f_3 = func_908();
		Global_1676147.f_50 = iParam4;
		Global_1676147.f_51 = iParam5;
		Global_1676147.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676147.f_20 = (Global_1676147.f_10 - Global_1676147.f_9);
		Global_1676147.f_12 = iParam1;
		Global_1676147.f_19 = func_892(iVar0, bParam0, func_895(bParam3));
		if (bParam0)
		{
			Global_1676147.f_11 = 1;
		}
		else
		{
			Global_1676147.f_11 = 0;
		}
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676147.f_8 = 1;
		}
		else
		{
			Global_1676147.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1676147.f_43 = 0;
			Global_1676147.f_45 = func_891(func_664(), iParam2);
			Global_1676147.f_47 = iParam7;
			Global_1676147.f_46 = iParam6;
			Global_1676147.f_52 = func_890(func_664(), iParam2);
		}
		func_888(iVar0);
	}
	else if (func_466(iVar0))
	{
		Global_1676201.f_2 = func_909();
		Global_1676201.f_3 = func_908();
		Global_1676201.f_10 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676201.f_19 = (Global_1676201.f_10 - Global_1676201.f_9);
		Global_1676201.f_12 = iParam1;
		if (bParam0)
		{
			Global_1676201.f_11 = 1;
		}
		else
		{
			Global_1676201.f_11 = 0;
		}
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676201.f_8 = 1;
		}
		else
		{
			Global_1676201.f_8 = 0;
		}
		func_886(iVar0);
	}
	else if (func_570(iVar0))
	{
		Global_1676264.f_2 = func_909();
		Global_1676264.f_3 = func_908();
		Global_1676264.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676264.f_18 = (Global_1676264.f_9 - Global_1676264.f_8);
		Global_1676264.f_11 = iParam1;
		Global_1676264.f_7 = func_900();
		Global_1676264.f_42 = func_884(func_36(), 5);
		iVar1 = PLAYER::PLAYER_ID();
		iVar2 = func_653(iVar1);
		Global_1676264.f_28 = iVar2;
		Global_1676264.f_29 = func_901((func_883(iVar1) || func_882(iVar1)));
		Global_1676264.f_30 = func_901(func_881(iVar1));
		Global_1676264.f_32 = func_901(func_880(iVar1));
		Global_1676264.f_33 = func_901(func_879(iVar1));
		Global_1676264.f_34 = func_901(func_878(iVar1));
		Global_1676264.f_35 = func_901(func_877(0, iVar1) == 1);
		Global_1676264.f_36 = func_901(func_876(iVar1));
		Global_1676264.f_37 = func_901(func_875(iVar1));
		Global_1676264.f_38 = func_901(func_874(iVar1));
		Global_1676264.f_39 = func_901(func_763(iVar1, iVar2, 0));
		Global_1676264.f_40 = func_901(func_763(iVar1, iVar2, 2));
		Global_1676264.f_41 = func_901(func_763(iVar1, iVar2, 1));
		if (func_873(iVar1))
		{
			Global_1676264.f_31 = 2;
		}
		else if (func_872(iVar1))
		{
			Global_1676264.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1676264.f_10 = 1;
		}
		else
		{
			Global_1676264.f_10 = 0;
		}
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676264.f_6 = 1;
		}
		else
		{
			Global_1676264.f_6 = 0;
		}
		Global_1676264.f_21 = -2;
		Global_1676264.f_22 = -2;
		func_870(iVar0);
	}
	else if (func_568(iVar0))
	{
		Global_1676308.f_2 = func_909();
		Global_1676308.f_3 = func_908();
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676308.f_6 = 1;
		}
		else
		{
			Global_1676308.f_6 = 0;
		}
		Global_1676308.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676308.f_10 = func_901(bParam0);
		Global_1676308.f_11 = iParam1;
		Global_1676308.f_17 = func_869(func_383());
		Global_1676308.f_18 = (Global_1676308.f_9 - Global_1676308.f_8);
		Global_1676308.f_20 = iParam8;
		Global_1676308.f_21 = -2;
		Global_1676308.f_22 = -2;
		Global_1676308.f_27 = func_868();
		Global_1676308.f_29 = func_522(6108, -1, 0);
		Global_1676308.f_30 = func_522(6104, -1, 0);
		Global_1676308.f_31 = func_522(6105, -1, 0);
		Global_1676308.f_32 = func_522(6107, -1, 0);
		Global_1676308.f_33 = func_522(6106, -1, 0);
		Global_1676308.f_34 = func_522(6109, -1, 0);
		Global_1676308.f_36 = func_901(func_380(1));
		Global_1676308.f_37 = func_866();
		func_852();
		func_850(iVar0);
	}
	else if (func_566(iVar0))
	{
		Global_1676362.f_2 = func_909();
		Global_1676362.f_3 = func_908();
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676362.f_6 = 1;
		}
		else
		{
			Global_1676362.f_6 = 0;
		}
		Global_1676362.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676362.f_10 = func_901(bParam0);
		Global_1676362.f_11 = iParam1;
		Global_1676362.f_18 = (Global_1676362.f_9 - Global_1676362.f_8);
		Global_1676362.f_20 = iParam8;
		Global_1676362.f_23 = Global_786547;
		Global_1676362.f_36 = Global_786547.f_1;
		Global_1676362.f_24 = func_522(6158, -1, 0);
		Global_1676362.f_25 = func_522(6163, -1, 0);
		Global_1676362.f_26 = func_522(6164, -1, 0);
		Global_1676362.f_27 = func_901((((func_849() || func_848()) || func_847()) || func_846(PLAYER::PLAYER_ID())));
		Global_1676362.f_28 = func_522(6165, -1, 0);
		Global_1676362.f_29 = func_901(func_845());
		Global_1676362.f_35 = -1;
		Global_1676362.f_38 = -1;
		Global_1676362.f_39 = Global_1676362.f_4;
		Global_1676362.f_40 = Global_1676362.f_5;
		Global_1676362.f_41 = func_909();
		Global_1676362.f_42 = func_901(func_380(1));
		Global_1676362.f_44 = Global_1676362.f_18;
		func_843(iVar0);
	}
	else if (func_632(iVar0))
	{
		if (Global_1676498.f_2 == -1)
		{
			Global_1676498.f_2 = func_909();
		}
		if (Global_1676498.f_3 == -1)
		{
			Global_1676498.f_3 = func_908();
		}
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676498.f_6 = 1;
		}
		else
		{
			Global_1676498.f_6 = 0;
		}
		Global_1676498.f_1 = func_902(0);
		Global_1676498.f_7 = func_900();
		Global_1676498.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676498.f_10 = func_901(bParam0);
		Global_1676498.f_11 = iParam1;
		if (func_664() != -1)
		{
			Global_1676498.f_17 = func_842(func_664());
		}
		Global_1676498.f_18 = (Global_1676498.f_9 - Global_1676498.f_8);
		Global_1676498.f_19 = Global_2540612.f_6650;
		Global_1676498.f_28 = func_898(PLAYER::PLAYER_ID());
		Global_1676498.f_29 = func_901(func_841(PLAYER::PLAYER_ID()));
		Global_1676498.f_30 = func_901(func_840(PLAYER::PLAYER_ID()));
		Global_1676498.f_31 = func_839(PLAYER::PLAYER_ID());
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676498.f_33 = func_901(func_380(1));
		}
		if (Global_1676498.f_34 > 2)
		{
			Global_1676498.f_34 = 2;
		}
		func_837(iVar0);
	}
	else if (func_636(iVar0))
	{
		Global_1676444.f_2 = func_909();
		Global_1676444.f_3 = func_908();
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676444.f_6 = 1;
		}
		else
		{
			Global_1676444.f_6 = 0;
		}
		Global_1676444.f_1 = func_902(0);
		Global_1676444.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676444.f_10 = func_901(bParam0);
		Global_1676444.f_11 = iParam1;
		Global_1676444.f_18 = (Global_1676444.f_9 - Global_1676444.f_8);
		Global_1676444.f_28 = func_898(PLAYER::PLAYER_ID());
		if (Global_1676444.f_28)
		{
			Global_1676444.f_29 = func_836(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1676444.f_29 = 0;
		}
		Global_1676444.f_30 = func_820(PLAYER::PLAYER_ID(), 4, -1);
		Global_1676444.f_31 = func_839(PLAYER::PLAYER_ID());
		Global_1676444.f_32 = func_901(func_819(PLAYER::PLAYER_ID()));
		Global_1676444.f_33 = func_901(func_818(PLAYER::PLAYER_ID()));
		Global_1676444.f_34 = func_901(func_817(PLAYER::PLAYER_ID()));
		Global_1676444.f_35 = func_901(func_816(PLAYER::PLAYER_ID()));
		Global_1676444.f_36 = func_815(PLAYER::PLAYER_ID());
		Global_1676444.f_37 = func_814(PLAYER::PLAYER_ID());
		Global_1676444.f_39 = func_813(PLAYER::PLAYER_ID());
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676444.f_41 = func_901(func_380(1));
		}
		if (Global_1676444.f_42 > 2)
		{
			Global_1676444.f_42 = 2;
		}
		func_811(iVar0);
	}
	else if (func_631(iVar0))
	{
		Global_1676582.f_2 = func_909();
		Global_1676582.f_3 = func_908();
		Global_1676582.f_4 = func_810(func_664());
		Global_1676582.f_5 = func_809(func_664());
		if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
		{
			Global_1676582.f_6 = 1;
		}
		else
		{
			Global_1676582.f_6 = 0;
		}
		Global_1676582.f_7 = func_900();
		Global_1676582.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676582.f_10 = func_901(bParam0);
		Global_1676582.f_11 = iParam1;
		if (func_383() != -1)
		{
			Global_1676582.f_17 = func_842(func_383());
		}
		Global_1676582.f_18 = (Global_1676582.f_9 - Global_1676582.f_8);
		Global_1676582.f_21 = 1;
		Global_1676582.f_22 = 1;
		Global_1676582.f_25 = func_808(PLAYER::PLAYER_ID());
		Global_1676582.f_27 = func_901(func_807(PLAYER::PLAYER_ID()));
		Global_1676582.f_28 = func_803(21, -1);
		Global_1676582.f_29 = func_901(func_802(PLAYER::PLAYER_ID()));
		func_800(iVar0);
	}
	else if (func_560(iVar0))
	{
		if (func_664() != -1)
		{
			Global_1676657.f_6 = func_810(func_664());
			Global_1676657.f_7 = func_809(func_664());
		}
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676657.f_8 = func_901(func_380(1));
		}
		Global_1676657.f_10 = func_900();
		Global_1676657.f_11 = 1;
		Global_1676657.f_13 = (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1703846);
		Global_1676657.f_14 = iParam1;
		Global_1676657.f_19 = 1;
		Global_1676657.f_20 = 1;
		func_798(iVar0);
	}
	else if (func_559(iVar0))
	{
		Global_1676744.f_2 = func_909();
		if (func_664() != -1)
		{
			Global_1676744.f_6 = func_810(func_664());
			Global_1676744.f_7 = func_809(func_664());
		}
		Global_1676744.f_8 = func_901(func_380(1));
		if (func_664() != -1)
		{
			Global_1676744.f_9 = func_842(func_664());
		}
		Global_1676744.f_10 = func_900();
		Global_1676744.f_11 = 1;
		Global_1676744.f_14 = iParam1;
		Global_1676744.f_19 = 1;
		Global_1676744.f_20 = 1;
		func_796(iVar0);
	}
	else if (func_795(iVar0))
	{
		Global_1676856.f_2 = func_909();
		Global_1676856.f_9 = 1;
		Global_1676856.f_10 = bParam0;
		Global_1676856.f_11 = iParam1;
		func_793(iVar0);
	}
	else
	{
		Global_1676129.f_6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (bParam0)
		{
			Global_1676129.f_7 = 1;
		}
		else
		{
			Global_1676129.f_7 = 0;
		}
		Global_1676129.f_8 = iParam1;
		if (Global_1676129.f_4 == 0)
		{
			if ((func_267(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID())) || func_234(PLAYER::PLAYER_ID()))
			{
				Global_1676129.f_4 = 1;
			}
		}
	}
}

void func_793(int iParam0)
{
	STATS::_0xD6CA58B3B53A0F22(&Global_1676856);
	func_794();
}

void func_794()
{
	struct<21> Var0;
	
	Global_1676856 = { Var0 };
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case 258:
			return 1;
		
		default:
	}
	return 0;
}

void func_796(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xDFCDB14317A9B361(&Global_1676744);
	func_797();
}

void func_797()
{
	struct<35> Var0;
	
	Global_1676744 = { Var0 };
	Global_1676744.f_23 = 0;
	Global_1676744.f_22 = 0;
	Global_1676744.f_21 = 0;
}

void func_798(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x53C31853EC9531FF(&Global_1676657);
	func_799();
}

void func_799()
{
	struct<36> Var0;
	
	Global_1676657 = { Var0 };
	Global_1676657.f_23 = 0;
	Global_1676657.f_22 = 0;
	Global_1676657.f_21 = 0;
}

void func_800(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_CASINO_MISSION_ENDED(&Global_1676582);
	func_801();
}

void func_801()
{
	struct<31> Var0;
	
	Global_1676582 = { Var0 };
}

int func_802(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_369.f_2, 6);
	}
	return 0;
}

int func_803(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_16992)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_806(iParam0);
		if (iVar1 == 0 && func_522(5394, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_805(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_898(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_804(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1388203[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2590794[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 25)
		{
			return 0;
		}
		return Global_2590645[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_804(int iParam0)
{
	return func_522(9513, iParam0, 0) != 0;
}

bool func_805(int iParam0)
{
	if (!Global_262145.f_23676)
	{
		return 0;
	}
	return func_522(7208, iParam0, 0) != 0;
}

int func_806(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_807(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_808(int iParam0)
{
	if (func_245(iParam0) == 243)
	{
		return func_635(iParam0);
	}
	return -1;
}

int func_809(int iParam0)
{
	if (iParam0 == func_57())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[1];
}

int func_810(int iParam0)
{
	if (iParam0 == func_57())
	{
		return -1;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_8[0];
}

void func_811(int iParam0)
{
	STATS::_0x2D7A9B577E72385E(&Global_1676444);
	func_812();
}

void func_812()
{
	struct<54> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Global_1676444 = { Var0 };
}

int func_813(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_334, 12);
	}
	return 0;
}

int func_814(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_334, 10);
	}
	return 0;
}

int func_815(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_334, 11);
	}
	return 0;
}

bool func_816(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 4);
}

bool func_817(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 3);
}

bool func_818(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 2);
}

bool func_819(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 1);
}

int func_820(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == func_57() || !func_835(iParam1))
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			return func_830(iParam0, iParam2);
		
		case 1:
			return func_828(iParam0, iParam2);
		
		case 3:
			return func_827(iParam0);
		
		case 2:
			return func_822(iParam0, iParam2);
		
		case 4:
			return func_821(iParam0);
		
		default:
	}
	return 0;
}

bool func_821(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 6);
}

int func_822(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 10:
			return func_826(iParam0);
		
		case 11:
			return func_825(iParam0);
		
		case 12:
			return func_824(iParam0);
		
		case 13:
			return func_823(iParam0);
		
		default:
	}
	return 0;
}

bool func_823(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 15);
}

bool func_824(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 14);
}

bool func_825(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 13);
}

bool func_826(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 12);
}

bool func_827(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 5);
}

int func_828(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_829(iParam0);
		
		case 6:
			return func_819(iParam0);
		
		case 7:
			return func_818(iParam0);
		
		case 8:
			return func_817(iParam0);
		
		case 9:
			return func_816(iParam0);
		
		default:
	}
	return 0;
}

bool func_829(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 0);
}

int func_830(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_834(iParam0);
		
		case 1:
			return func_833(iParam0);
		
		case 2:
			return func_832(iParam0);
		
		case 3:
			return func_831(iParam0);
		
		case 4:
			return func_839(iParam0);
		
		default:
	}
	return 0;
}

bool func_831(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 10);
}

bool func_832(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 9);
}

bool func_833(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 8);
}

bool func_834(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_281.f_4, 7);
}

bool func_835(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 6);
}

int func_836(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 1;
	if (func_820(iParam0, 2, 13))
	{
		iVar0 = 5;
	}
	else if (func_820(iParam0, 2, 12))
	{
		iVar0 = 4;
	}
	else if (func_820(iParam0, 2, 11))
	{
		iVar0 = 3;
	}
	else if (func_820(iParam0, 2, 10))
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_837(int iParam0)
{
	STATS::_0x830C3A44EB3F2CF9(&Global_1676498);
	func_838();
}

void func_838()
{
	struct<39> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Global_1676498 = { Var0 };
}

int func_839(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 31);
	}
	return 0;
}

bool func_840(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 0);
}

bool func_841(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_322.f_1, 19);
}

var func_842(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

void func_843(int iParam0)
{
	STATS::_PLAYSTATS_H2_FMPREP_END(&Global_1676362);
	func_844();
}

void func_844()
{
	struct<46> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Global_1676362 = { Var0 };
	Global_1676362.f_16 = 0;
}

bool func_845()
{
	return func_522(6157, -1, 0) != 0;
}

int func_846(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_271 != 0;
	}
	return 0;
}

bool func_847()
{
	return func_522(6165, -1, 0) == 3;
}

bool func_848()
{
	return func_522(6165, -1, 0) == 2;
}

bool func_849()
{
	return func_522(6165, -1, 0) == 1;
}

void func_850(int iParam0)
{
	STATS::_PLAYSTATS_SMUG_MISSION_ENDED(&Global_1676308);
	func_851();
}

void func_851()
{
	struct<54> Var0;
	
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676308 = { Var0 };
	Global_1676308.f_23 = 0;
	Global_1676308.f_24 = 0;
	Global_1676308.f_16 = 0;
}

void func_852()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar2 = (iVar0 + func_863(12));
		func_862(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1323678[iVar1 /*141*/].f_66 != 0 && func_854(Global_1323678[iVar1 /*141*/].f_66, 1))
			{
				if (Global_2540612.f_955 != iVar1)
				{
					if (func_853(Global_1323678[iVar1 /*141*/].f_66))
					{
						if (Global_1323678[iVar1 /*141*/].f_66 != 0)
						{
							iVar3 = Global_1323678[iVar1 /*141*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1676308.f_38 = iVar3;
								break;
							
							case 1:
								Global_1676308.f_39 = iVar3;
								break;
							
							case 2:
								Global_1676308.f_40 = iVar3;
								break;
							
							case 3:
								Global_1676308.f_41 = iVar3;
								break;
							
							case 4:
								Global_1676308.f_42 = iVar3;
								break;
							
							case 5:
								Global_1676308.f_43 = iVar3;
								break;
							
							case 6:
								Global_1676308.f_44 = iVar3;
								break;
							
							case 7:
								Global_1676308.f_45 = iVar3;
								break;
							
							case 8:
								Global_1676308.f_46 = iVar3;
								break;
							
							case 9:
								Global_1676308.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_853(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_854(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_861())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_860() && !func_859()) && !func_858()) && !func_857()) && !func_861())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_858())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_856(iParam0))
		{
			return 0;
		}
	}
	if (!func_855(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_855(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_540())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_856(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515441)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26053 && iVar1 < Global_262145.f_26055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25071 && iVar1 < Global_262145.f_25064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25096 && iVar1 < Global_262145.f_25117)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27916 && iVar1 < Global_262145.f_27937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27939 && iVar1 < Global_262145.f_27940) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27942 && iVar1 < Global_262145.f_27943) && !Global_262145.f_27895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27949 && iVar1 < Global_262145.f_27952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28951 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28603 && iVar1 < Global_262145.f_28609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28624)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29411)
		{
		}
		else if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29409 && iVar1 < Global_262145.f_29392)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_857()
{
	return 0;
}

int func_858()
{
	return 1;
}

int func_859()
{
	return 1;
}

int func_860()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_861()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_862(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_10165)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1672965[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_863(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_806(iParam0);
		return func_865(iVar0);
	}
	return (func_864(iParam0, -1, 1) * iParam0);
}

int func_864(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_575(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_581(iParam1))
			{
				return 0;
			}
			else if (func_169(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 <= 126 && iParam1 > 0)
			{
				if (Global_1049924[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1049924[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
	}
	return 0;
}

int func_865(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

var func_866()
{
	var uVar0;
	
	uVar0 = func_867();
	if (!func_654())
	{
		if (func_664() != func_57())
		{
			uVar0 = func_899(func_664()) + 1;
		}
	}
	return uVar0;
}

int func_867()
{
	return func_899(PLAYER::PLAYER_ID()) + 1;
}

int func_868()
{
	return func_522(6114, -1, 0);
}

int func_869(int iParam0)
{
	if (func_315(iParam0, 1))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_424;
	}
	return -1;
}

void func_870(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Global_1676264);
	func_871();
}

void func_871()
{
	struct<44> Var0;
	
	Global_1676264 = { Var0 };
	Global_1676264.f_23 = 0;
	Global_1676264.f_24 = 0;
	Global_1676264.f_16 = 0;
}

bool func_872(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 12);
}

bool func_873(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 13);
}

int func_874(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 12) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 13)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_875(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_876(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (((((MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 5)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 0)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_877(int iParam0, int iParam1)
{
	if (iParam1 == func_57())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 0))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 3))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 6))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 9))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 12))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 15))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 18))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 21))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 1))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 4))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 7))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 10))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 13))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 16))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 19))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 22))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 2))
			{
				return 3;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 5))
			{
				return 2;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 8))
			{
				return 4;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 11))
			{
				return 1;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 14))
			{
				return 7;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 17))
			{
				return 5;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 20))
			{
				return 6;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 23))
			{
				return 0;
			}
			else if (MISC::IS_BIT_SET(Global_1590682[iParam1 /*883*/].f_274.f_259, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_878(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 6) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 7)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_879(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 8);
}

bool func_880(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 7);
}

bool func_881(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 9);
}

bool func_882(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 11);
}

bool func_883(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_351, 10);
}

int func_884(int iParam0, int iParam1)
{
	return func_522(func_885(iParam1), iParam0, 0);
}

int func_885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3899;
		
		case 1:
			return 3928;
		
		case 2:
			return 3932;
		
		case 3:
			return 3936;
		
		case 4:
			return 3940;
		
		case 5:
			return 5451;
		
		default:
	}
	return 3899;
}

void func_886(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0x7D8BA05688AD64C7(&Global_1676201);
	func_887();
}

void func_887()
{
	struct<63> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Var0.f_54 = -1;
	Var0.f_55 = -1;
	Var0.f_56 = -1;
	Var0.f_57 = -1;
	Var0.f_58 = -1;
	Var0.f_59 = -1;
	Var0.f_60 = -1;
	Var0.f_61 = -1;
	Var0.f_62 = -1;
	Global_1676201 = { Var0 };
	Global_1676201.f_24 = 0;
	Global_1676201.f_25 = 0;
	Global_1676201.f_17 = 0;
}

void func_888(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	STATS::_0xBF371CD2B64212FD(&Global_1676147);
	func_889();
}

void func_889()
{
	struct<54> Var0;
	
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Var0.f_35 = -1;
	Var0.f_36 = -1;
	Var0.f_37 = -1;
	Var0.f_38 = -1;
	Var0.f_39 = -1;
	Var0.f_40 = -1;
	Var0.f_41 = -1;
	Var0.f_42 = -1;
	Var0.f_43 = -1;
	Var0.f_44 = -1;
	Var0.f_45 = -1;
	Var0.f_46 = -1;
	Var0.f_47 = -1;
	Var0.f_48 = -1;
	Var0.f_49 = -1;
	Var0.f_50 = -1;
	Var0.f_51 = -1;
	Var0.f_52 = -1;
	Var0.f_53 = -1;
	Global_1676147 = { Var0 };
	Global_1676147.f_29 = 0;
	Global_1676147.f_30 = 0;
	Global_1676147.f_17 = 0;
}

int func_890(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_763(iParam0, iParam1, 2);
	bVar1 = func_763(iParam0, iParam1, 1);
	bVar2 = func_763(iParam0, iParam1, 0);
	if ((bVar0 && bVar1) && bVar2)
	{
		return 7;
	}
	else if ((bVar1 && bVar0) && !bVar2)
	{
		return 6;
	}
	else if ((bVar2 && bVar0) && !bVar1)
	{
		return 5;
	}
	else if ((bVar2 && bVar1) && !bVar0)
	{
		return 4;
	}
	else if (bVar0)
	{
		return 3;
	}
	else if (bVar1)
	{
		return 2;
	}
	else if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_891(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_756(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_892(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_444(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 19;
	}
	else if (func_572(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_346(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_17687;
			iVar1 = 20;
		}
	}
	else if (func_461(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_17707;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_17706;
		}
		else
		{
			iVar0 = Global_262145.f_17688;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		STATS::_PLAYSTATS_EARNED_MC_POINTS(func_810(func_664()), func_809(func_664()), func_909(), func_908(), iVar1, iVar0);
	}
	func_894(iVar0);
	func_893(iVar0);
	return iVar0;
}

void func_893(int iParam0)
{
	int iVar0;
	
	iVar0 = func_522(3969, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_463 = iVar0;
	func_521(3969, iVar0, -1, 1, 0);
}

void func_894(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1630317[iVar0 /*595*/].f_11.f_462 = (Global_1630317[iVar0 /*595*/].f_11.f_462 + iParam0);
	if (Global_1630317[iVar0 /*595*/].f_11.f_462 < -9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
	else if (Global_1630317[iVar0 /*595*/].f_11.f_462 > 9999)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_462 = 9999;
	}
}

int func_895(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_267(PLAYER::PLAYER_ID()) || func_234(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

void func_896(var uParam0)
{
	STATS::_0x316DB59CD14C1774(&Global_1676408);
	func_897();
}

void func_897()
{
	struct<36> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_20 = -1;
	Var0.f_21 = -1;
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	Var0.f_24 = -1;
	Var0.f_25 = -1;
	Var0.f_26 = -1;
	Var0.f_27 = -1;
	Var0.f_29 = -1;
	Var0.f_30 = -1;
	Var0.f_31 = -1;
	Var0.f_32 = -1;
	Var0.f_33 = -1;
	Var0.f_34 = -1;
	Global_1676408 = { Var0 };
}

int func_898(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_899(int iParam0)
{
	if (func_58(iParam0) == func_57())
	{
		return 0;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_19;
}

int func_900()
{
	int iVar0;
	
	if (func_641())
	{
		return 4;
	}
	else if (func_654())
	{
		if (func_787(PLAYER::PLAYER_ID()))
		{
			return 8;
		}
		return 6;
	}
	if (func_380(1))
	{
		iVar0 = func_869(PLAYER::PLAYER_ID());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_662(1))
	{
		if (func_787(func_664()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

int func_901(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_902(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	if (bParam0)
	{
		iVar0 = func_307(PLAYER::PLAYER_ID());
	}
	else
	{
		iVar0 = func_245(PLAYER::PLAYER_ID());
	}
	if (iVar0 != -1)
	{
	}
	switch (iVar0)
	{
		case 236:
			iVar2 = func_907(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 150:
			iVar2 = func_905(PLAYER::PLAYER_ID());
			iVar1 = iVar2;
			break;
		
		case 237:
			iVar2 = func_904(PLAYER::PLAYER_ID());
			if (func_633(func_634(PLAYER::PLAYER_ID())))
			{
				iVar1 = 100;
			}
			else
			{
				iVar1 = 200;
			}
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 250:
			iVar2 = func_904(PLAYER::PLAYER_ID());
			iVar1 = 300;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 238:
			iVar2 = func_903(PLAYER::PLAYER_ID());
			iVar1 = 400;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 249:
			iVar2 = func_903(PLAYER::PLAYER_ID());
			iVar1 = 500;
			iVar1 = (iVar1 + iVar2);
			break;
		
		case 239:
			iVar1 = 600;
			break;
		
		case 240:
			iVar1 = 700;
			break;
		
		case 241:
			iVar1 = 800;
			break;
		
		case 242:
			iVar1 = 900;
			break;
		
		case 244:
			iVar1 = 1100;
			break;
		
		case 248:
			iVar1 = 1200;
			break;
	}
	return iVar1;
}

int func_903(int iParam0)
{
	if (func_245(PLAYER::PLAYER_ID()) == 238 || func_245(PLAYER::PLAYER_ID()) == 249)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_472;
	}
	return -1;
}

int func_904(int iParam0)
{
	if (func_245(PLAYER::PLAYER_ID()) == 237 || func_245(PLAYER::PLAYER_ID()) == 250)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_471;
	}
	return -1;
}

int func_905(int iParam0)
{
	return func_906(iParam0, 150);
}

int func_906(int iParam0, int iParam1)
{
	if (func_307(iParam0) == iParam1)
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_469;
	}
	return -1;
}

int func_907(int iParam0)
{
	return func_906(iParam0, 236);
}

int func_908()
{
	if (Global_1676129.f_3 != 0)
	{
		return Global_1676129.f_3;
	}
	return -1;
}

int func_909()
{
	if (Global_1676129.f_2 != 0)
	{
		return Global_1676129.f_2;
	}
	return -1;
}

int func_910(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_57();
	iVar1 = func_57();
	iVar2 = func_57();
	return func_911(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_911(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_628(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_359(&(Var0.f_69), 4);
	return func_592(&Var0);
}

int func_912(int iParam0)
{
	int iVar0;
	
	iVar0 = func_319(iParam0);
	if (iVar0 != -1)
	{
		return func_317(iVar0);
	}
	return 1;
}

char* func_913(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_918(&(Global_1630317[iParam0 /*595*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1630317[iParam0 /*595*/].f_11.f_120 != Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_120)
	{
		sVar0 = func_916(iParam0, 0);
		return sVar0;
	}
	if (((func_249(iParam0, 28) || func_249(PLAYER::PLAYER_ID(), 28)) || func_915(iParam0)) && !func_914(iParam0))
	{
		return func_916(iParam0, 0);
	}
	iVar1 = func_58(iParam0);
	if (iVar1 != func_57())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				return func_916(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_57())
	{
		sVar0 = func_918(&(Global_1630317[iVar1 /*595*/].f_11.f_104));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_916(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_914(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_59(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
		{
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_915(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_57())
	{
		Var0 = { func_59(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			{
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_916(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_302(iParam0, 1))
		{
			return func_917();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_917()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_918(var uParam0)
{
	return uParam0;
}

void func_919()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (func_28())
	{
		return;
	}
	if (func_436())
	{
		if (func_11(&(Local_122.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_122.f_238), iVar1, 0);
			if (bVar0)
			{
				func_927();
				if ((func_18() - func_629(&(Local_122.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_629(&(Local_122.f_238), 0, 0)) > 30000)
					{
						func_926((func_18() - func_629(&(Local_122.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, -1);
					}
					else
					{
						func_926((func_18() - func_629(&(Local_122.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					}
				}
				else
				{
					func_926(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
		}
		return;
	}
	if (!func_1208() && !func_434())
	{
		return;
	}
	if (!func_544())
	{
		return;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if (func_34(PLAYER::PLAYER_ID(), 0))
	{
		iVar2 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	}
	iVar3 = func_425(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_122.f_213);
	if (MISC::IS_BIT_SET(Local_122.f_1, 13))
	{
		func_923(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (func_11(&(Local_122.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_629(&(Local_122.f_226), 0, 0));
		func_920(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_920(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0);
	}
}

void func_920(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_922(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_921(0, iVar0);
		Global_1378744.f_1135[iVar0] = iParam0;
		Global_1378744.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1378744.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1378744.f_1135.f_194[iVar0] = iParam3;
		Global_1378744.f_1135.f_183[iVar0] = iParam4;
		Global_1378744.f_1135.f_216[iVar0] = iParam5;
		Global_1378744.f_1135.f_227[iVar0 /*3*/] = iParam6;
		Global_1378744.f_1135.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1378744.f_1135.f_258[iVar0] = iParam8;
		Global_1378744.f_1135.f_269[iVar0] = iParam9;
		Global_1378744.f_1135.f_312[iVar0] = iParam10;
		Global_1378744.f_1135.f_323[iVar0] = iParam11;
		Global_1378744.f_1135.f_334[iVar0] = iParam12;
		Global_1378744.f_1135.f_345[iVar0] = iParam13;
		Global_1378744.f_1130 = 1;
		Global_1378744.f_1135.f_356[iVar0] = iParam14;
		Global_1378744.f_1135.f_367[iVar0] = iParam15;
		Global_1378744.f_1135.f_378[iVar0] = iParam16;
		Global_1378744.f_1135.f_389[iVar0] = iParam17;
		Global_1378744.f_1135.f_400[iVar0] = iParam18;
		Global_1378744.f_1135.f_411[iVar0] = iParam19;
		Global_1378744.f_1135.f_422[iVar0] = iParam20;
		Global_1378744.f_1135.f_433[iVar0] = iParam21;
		Global_1378744.f_1135.f_444[iVar0] = iParam22;
		Global_1378744.f_1135.f_455[iVar0] = iParam23;
		Global_1378744.f_1135.f_466[iVar0] = iParam24;
		Global_1378744.f_1135.f_205[iVar0] = iParam25;
		Global_1378744.f_1135.f_477[iVar0] = iParam26;
		Global_1378744.f_1135.f_488[iVar0] = iParam27;
		Global_1378744.f_1135.f_499[iVar0] = iParam28;
		Global_1378744.f_1135.f_510[iVar0] = iParam29;
		Global_1378744.f_1135.f_521[iVar0] = iParam30;
		Global_1378744.f_1135.f_532[iVar0] = iParam31;
		Global_1378744.f_1135.f_543[iVar0] = iParam32;
		Global_1378744.f_1135.f_554[iVar0] = iParam33;
		Global_1378744.f_1135.f_565[iVar0] = iParam34;
	}
}

void func_921(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_922(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1378744.f_6304[iParam0], iParam1);
}

void func_923(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_922(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_921(6, iVar0);
		Global_1378744.f_3955[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_3955.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_3955.f_183[iVar0] = iParam3;
		Global_1378744.f_3955.f_172[iVar0] = iParam2;
		Global_1378744.f_3955.f_260[iVar0] = iParam4;
		Global_1378744.f_3955.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_3955.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_3955.f_443[iVar0] = iParam7;
		Global_1378744.f_3955.f_454[iVar0] = iParam8;
		Global_1378744.f_3955.f_497[iVar0] = iParam9;
		Global_1378744.f_3955.f_508[iVar0] = iParam10;
		Global_1378744.f_3955.f_205[iVar0] = iParam11;
		Global_1378744.f_3955.f_216[iVar0] = iParam12;
		Global_1378744.f_3955.f_227[iVar0] = iParam13;
		Global_1378744.f_3955.f_238[iVar0] = iParam14;
		Global_1378744.f_3955.f_249[iVar0] = iParam15;
		Global_1378744.f_3955.f_519[iVar0] = iParam16;
		Global_1378744.f_3955.f_530[iVar0] = iParam17;
		Global_1378744.f_3955.f_541[iVar0] = iParam18;
		Global_1378744.f_3955.f_552[iVar0] = iParam19;
		Global_1378744.f_3955.f_563[iVar0] = iParam20;
		Global_1378744.f_3955.f_574[iVar0] = iParam21;
		Global_1378744.f_3955.f_585[iVar0] = iParam22;
		Global_1378744.f_3955.f_596[iVar0] = iParam23;
		Global_1378744.f_3955.f_607[iVar0] = iParam24;
		Global_1378744.f_3955.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_925())
		{
			Global_1378744.f_1130 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378744.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378744.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378744.f_1130 = 1;
			}
			if (func_924())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_924()
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_925()
{
	if (((LOCALIZATION::GET_CURRENT_LANGUAGE() == 8 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 9) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 12)
	{
		return 1;
	}
	return 0;
}

void func_926(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_922(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_921(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

void func_927()
{
	Global_1378744.f_1131 = 1;
}

void func_928()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = PLAYER::PLAYER_ID();
	iVar4 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!MISC::IS_BIT_SET(iLocal_745, 1))
	{
		return;
	}
	if (func_34(PLAYER::PLAYER_ID(), 0))
	{
		iVar4 = func_435();
		iVar3 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	}
	iVar5 = func_425(iVar3);
	if (!func_544())
	{
		if (func_211("DCONTRA_OBJ"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_OBJ2"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_OBJ3"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_OBJ4"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_TOBJ"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_TOBJ2"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_TOBJ3"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_WOBJ"))
		{
			func_1091();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_211("DCONTRA_OBJ"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_OBJ2"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_OBJ3"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_OBJ4"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_TOBJ"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_TOBJ2"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_TOBJ3"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_WOBJ"))
		{
			func_1091();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_436())
	{
		if (!MISC::IS_BIT_SET(Local_122.f_1, 13) && !MISC::IS_BIT_SET(Local_392[iVar4 /*11*/].f_1, 11))
		{
			if (!func_211("DCONTRA_WOBJ"))
			{
				func_942("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_122.f_218)
		{
			if (!func_211("DCONTRA_OBJ"))
			{
				func_942("DCONTRA_OBJ", 0);
			}
		}
		else if (func_1209() == Local_122.f_218)
		{
			if (!func_211("DCONTRA_OBJ"))
			{
				func_942("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_941())
	{
		if (iVar4 == Local_122.f_218)
		{
			if (!func_211("DCONTRA_OBJ2"))
			{
				func_942("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_1209() == Local_122.f_218)
		{
			if (!func_211("DCONTRA_OBJ2"))
			{
				func_942("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_211("DCONTRA_OBJ2"))
		{
			func_1091();
		}
		if (func_211("DCONTRA_TOBJ2"))
		{
			func_1091();
		}
		if (Local_122.f_216 < 0)
		{
			if (!func_211("DCONTRA_OBJ4"))
			{
				func_942("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			iVar2 = func_940();
			if (iVar2 != func_57())
			{
				if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!func_211("DCONTRA_OBJ3"))
						{
							func_942("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_211("DCONTRA_TOBJ3"))
					{
						iVar0 = func_319(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_317(iVar0);
							func_929("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_929(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_930(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 19;
		Global_1312603.f_56 = iParam2;
	}
}

int func_930(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_939(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_934();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = uParam3;
	Global_1312603.f_56 = uParam3;
	func_933();
	func_932(bParam2);
	func_931();
	return 1;
}

void func_931()
{
	MISC::SET_BIT(&(Global_1312603.f_59), 1);
}

void func_932(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312603.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312603.f_59), 0);
}

void func_933()
{
	Global_1312603.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_934()
{
	func_936();
	func_935(0);
}

void func_935(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_936()
{
	if (!func_938())
	{
	}
	if (func_214())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312603.f_12));
		func_937();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_937()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

bool func_938()
{
	if (!func_214())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312603.f_12));
	func_937();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_939(char* sParam0, char* sParam1)
{
	if (!func_214())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

int func_940()
{
	int iVar0;
	
	iVar0 = func_57();
	if (Local_122.f_216 > -1)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_122.f_216);
	}
	return iVar0;
}

int func_941()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_122.f_2[0 /*10*/].f_2))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2);
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_122.f_2[0 /*10*/].f_1))
				{
					iVar1 = NETWORK::NET_TO_PED(Local_122.f_2[0 /*10*/].f_1);
					if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
					{
						return 1;
					}
				}
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_122.f_2[1 /*10*/].f_1))
				{
					iVar1 = NETWORK::NET_TO_PED(Local_122.f_2[1 /*10*/].f_1);
					if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_942(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_212(sParam0))
	{
		return;
	}
	func_934();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_933();
	func_932(bParam1);
	func_931();
}

void func_943()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1208() && !func_434())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 18))
	{
		iVar0 = func_425(PLAYER::PLAYER_ID());
		if (iVar0 >= 2)
		{
			MISC::SET_BIT(&iLocal_745, 18);
			func_1052(-1, 0, 0, -1, 0, 0);
		}
	}
	if (!func_544())
	{
		return;
	}
	iVar1 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar2 = PLAYER::PLAYER_ID();
	if (func_34(PLAYER::PLAYER_ID(), 0))
	{
		iVar1 = func_435();
		iVar2 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 1))
	{
		iVar0 = func_425(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_122.f_218)
			{
				if (func_436())
				{
					if (func_971())
					{
						func_591(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2, 1, 0);
						MISC::SET_BIT(&iLocal_745, 1);
					}
				}
				else if (func_971())
				{
					func_591(86, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2, 1, 0);
					MISC::SET_BIT(&iLocal_745, 1);
				}
				if (MISC::IS_BIT_SET(iLocal_745, 1))
				{
					if (iVar2 == PLAYER::PLAYER_ID())
					{
						func_970(1);
					}
				}
			}
			else if (func_1209() == Local_122.f_218)
			{
				if (func_436())
				{
					if (func_944(func_965(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_591(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2, 1, 0);
					}
				}
				else if (func_944(func_965(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_591(86, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2, 1, 0);
				}
				if (iVar2 == PLAYER::PLAYER_ID())
				{
					func_970(1);
				}
				MISC::SET_BIT(&iLocal_745, 1);
			}
			else
			{
				MISC::SET_BIT(&iLocal_745, 1);
			}
		}
		else
		{
			MISC::SET_BIT(&iLocal_745, 1);
		}
	}
}

int func_944(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_7551, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_946(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_945(iParam0) };
			Global_8238 = iParam0;
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_945(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_946(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_958();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_957() == 0)
	{
		func_955();
		return 0;
	}
	func_954(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), sParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_24 = iParam2;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_25 = iParam7;
	Global_111858.f_14137[Global_22072 /*104*/].f_26 = uParam8;
	Global_111858.f_14137[Global_22072 /*104*/].f_29 = uParam9;
	Global_111858.f_14137[Global_22072 /*104*/].f_30 = uParam12;
	Global_111858.f_14137[Global_22072 /*104*/].f_31 = uParam11;
	Global_111858.f_14137[Global_22072 /*104*/].f_28 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_33), sParam4, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_50), sParam5, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_7551, 10))
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
		Global_8257 = 4;
		func_953(0);
		func_953(2);
		func_953(1);
	}
	else
	{
		func_958();
		switch (iParam16)
		{
			case 3:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[Global_19681] = 1;
				break;
			
			case 0:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19681)
			{
				case 0:
					func_953(0);
					Global_8257 = 0;
					break;
				
				case 1:
					func_953(1);
					Global_8257 = 1;
					break;
				
				case 2:
					func_953(2);
					Global_8257 = 2;
					break;
				
				case 3:
					func_953(3);
					Global_8257 = 3;
					break;
				
				default:
					Global_8257 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_7551, 10))
		{
			Global_111858.f_14047[0 /*20*/].f_17 = 1;
			Global_111858.f_14047[1 /*20*/].f_17 = 1;
			Global_111858.f_14047[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111858.f_14047[Global_19681 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111858.f_14047[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111858.f_14047[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111858.f_14047[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22074[Global_22072] = 0;
	if (bParam10)
	{
		func_958();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_587())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_952(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_949(1);
			func_952(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_947(iParam0, sParam1);
	return 1;
}

void func_947(int iParam0, char* sParam1)
{
	if (!func_948())
	{
		return;
	}
	STATS::_0x0077F15613D36993(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_948()
{
	if (!Global_262145.f_28161)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_57())
	{
		return 0;
	}
	if (func_234(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

void func_949(int iParam0)
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
	int iVar9;
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_951(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_295(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462473)
							{
								if (iVar1 == 14)
								{
									func_950(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_950(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_950(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_950(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_950(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_295(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7557);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_295(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_295(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_295(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7552, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_295(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_950(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_950(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_950(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_295(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_295(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_295(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_295(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_295(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_951(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_952(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_953(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_954(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_111858.f_14137[iParam0 /*104*/].f_18 = iVar0;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_955()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_956(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_956(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_957()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0)
		{
			Global_22072 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0 || Global_111858.f_14137[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_956(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
			{
				Global_22072 = iVar2;
			}
		}
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22072 == 34)
	{
		return 0;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 0;
	return 1;
}

void func_958()
{
	if (func_951(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_959();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_959()
{
	func_960();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_960()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_963(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_962(PLAYER::PLAYER_PED_ID());
			if (func_961(iVar0) && (!func_951(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_961(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_961(int iParam0)
{
	return iParam0 < 3;
}

int func_962(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_963(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_963(int iParam0)
{
	if (func_961(iParam0))
	{
		return func_964(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_964(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_965(bool bParam0)
{
	if (func_968(bParam0))
	{
		if (bParam0 && func_967())
		{
			func_966(22, Global_19681, 1);
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_967())
	{
		func_966(22, Global_19681, 1);
		return 22;
	}
	return 74;
}

void func_966(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

int func_967()
{
	int iVar0;
	
	iVar0 = func_58(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_57()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_968(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_58(PLAYER::PLAYER_ID());
		if (func_967())
		{
			if (func_969(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_522(3223, -1, 0) != 0;
}

bool func_969(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 29);
}

void func_970(bool bParam0)
{
	if (bParam0)
	{
		if (!func_249(PLAYER::PLAYER_ID(), 9))
		{
			if (func_425(PLAYER::PLAYER_ID()) != 0)
			{
				func_250(9);
			}
		}
	}
	else if (func_249(PLAYER::PLAYER_ID(), 9))
	{
		func_248(9);
	}
}

int func_971()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_965(1);
	switch (iLocal_861)
	{
		case 0:
			sLocal_862 = func_1051();
			if (func_968(1))
			{
				func_1050(&uLocal_863, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_1050(&uLocal_863, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_861++;
			break;
		
		case 1:
			if (func_1044(0, 1, 0, 1))
			{
				MISC::SET_BIT(&iVar1, 4);
				if (func_972(&uLocal_863, iVar0, "EXCALAU", sLocal_862, iVar1, 0))
				{
					iLocal_861++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_972(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_1042())
	{
		return 0;
	}
	if (func_1041())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_973(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_973(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_1040(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_1039(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_1034(iParam6))
	{
		return 0;
	}
	if (func_1031(iVar0, iVar1, iVar2))
	{
		if (func_1030())
		{
			return 0;
		}
		func_1029();
		return func_980(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_979(iParam4))
	{
		return 0;
	}
	func_974(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_974(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370593.f_40.f_1 = iParam0;
	Global_1370593.f_40.f_2 = iParam1;
	Global_1370593.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370593.f_40.f_4), sParam3, 16);
	Global_1370593.f_40.f_8 = iParam4;
	Global_1370593.f_40.f_9 = iParam5;
	Global_1370593.f_40.f_14 = iParam6;
	func_975(iParam4);
	func_1029();
	Global_1370593.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_975(int iParam0)
{
	if (func_978(iParam0))
	{
		func_977();
		return;
	}
	func_976();
}

void func_976()
{
	Global_1370593.f_40.f_10 = 0;
}

void func_977()
{
	Global_1370593.f_40.f_10 = 1;
}

int func_978(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_979(int iParam0)
{
	return iParam0 > Global_1370593.f_40.f_8;
}

int func_980(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_1028();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_1025(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_1022(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_1025(uParam0, sParam3, sParam4);
		}
		return func_1005(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_1004(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_1000(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_999(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_981(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_981(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_998();
	bVar0 = true;
	if (func_983(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_982(120000);
		return 1;
	}
	return 0;
}

void func_982(int iParam0)
{
	Global_1370593.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370593.f_40.f_12 = 1;
}

int func_983(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_57();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_327(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_997(sParam5, bParam6, &iVar3);
	uVar5 = func_995(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_994(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_987(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_986();
	}
	func_998();
	func_985();
	func_984();
	return 1;
}

void func_984()
{
	Global_1370593.f_57 = 0;
	Global_1370593.f_57.f_1 = 0;
}

void func_985()
{
	Global_1370593.f_40 = 3;
}

void func_986()
{
	MISC::SET_BIT(&Global_7551, 8);
}

int func_987(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_988(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			MISC::SET_BIT(&Global_4271024, 0);
		}
		return 1;
	}
	return 0;
}

int func_988(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_958();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4271009 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_993() == 0)
	{
		func_991();
		return 0;
	}
	func_990(Global_4271008);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/]), sParam1, 64);
	Global_4269759[Global_4271008 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4269759[Global_4271008 /*104*/].f_24 = iParam2;
	}
	Global_4269759[Global_4271008 /*104*/].f_25 = iParam7;
	Global_4269759[Global_4271008 /*104*/].f_26 = uParam8;
	Global_4269759[Global_4271008 /*104*/].f_29 = uParam9;
	Global_4269759[Global_4271008 /*104*/].f_30 = uParam12;
	Global_4269759[Global_4271008 /*104*/].f_31 = uParam11;
	Global_4269759[Global_4271008 /*104*/].f_28 = 0;
	Global_4269759[Global_4271008 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_33), sParam4, 64);
	Global_4269759[Global_4271008 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_50), sParam5, 64);
	Global_4269759[Global_4271008 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_83), sParam15, 64);
	func_958();
	switch (iParam16)
	{
		case 3:
			Global_4269759[Global_4271008 /*104*/].f_99[Global_19681] = 1;
			break;
		
		case 0:
			Global_4269759[Global_4271008 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4269759[Global_4271008 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4269759[Global_4271008 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19681)
		{
			case 0:
				func_953(0);
				break;
			
			case 1:
				func_953(1);
				break;
			
			case 2:
				func_953(2);
				break;
			
			case 3:
				func_953(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4271009 = 1;
				break;
			
			case 0:
				Global_4271009 = 1;
				break;
			
			case 2:
				Global_4271009 = 1;
				break;
			
			case 1:
				Global_4271009 = 1;
				break;
			}
	}
	Global_22074[Global_4271008] = 0;
	if (bParam10)
	{
		func_958();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_587())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_952(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_949(1);
			func_952(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_989(iParam0, sParam1);
	return 1;
}

void func_989(int iParam0, char* sParam1)
{
	if (!func_948())
	{
		return;
	}
	STATS::_0x0077F15613D36993(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0);
}

void func_990(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4269759[iParam0 /*104*/].f_18 = iVar0;
	Global_4269759[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4269759[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4269759[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4269759[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4269759[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_991()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_992(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
		{
			Global_4271008 = iVar2;
		}
		iVar2++;
	}
	Global_4269759[Global_4271008 /*104*/].f_24 = 1;
}

int func_992(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_993()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0)
		{
			Global_4271008 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0 || Global_4269759[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_992(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
			{
				Global_4271008 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4271008 == 11)
	{
		return 0;
	}
	Global_4269759[Global_4271008 /*104*/].f_99[0] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[1] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[2] = 0;
	return 1;
}

int func_994(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_988(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			MISC::SET_BIT(&Global_4271024, 0);
		}
		return 1;
	}
	return 0;
}

int func_995(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_996(2, iParam1);
	return iParam0;
}

void func_996(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_997(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_996(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

void func_998()
{
	Global_1370593.f_40.f_9 = 4;
}

int func_999(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_998();
	bVar0 = false;
	return func_983(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_1000(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_1001(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_1001(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_57();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_327(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22066 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_997(sParam5, bParam6, &iVar3);
	uVar5 = func_995(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_1003(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_944(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_986();
	}
	func_1002();
	func_985();
	func_984();
	return 1;
}

void func_1002()
{
	Global_1370593.f_40.f_9 = 3;
}

int func_1003(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_7551, 10);
	iVar0 = 3;
	if (func_946(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			Global_8161[3 /*6*/] = { func_945(iParam0) };
			Global_8238 = iParam0;
			StringCopy(&Global_8239, sParam5, 64);
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

int func_1004(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_1002();
	bVar0 = true;
	if (func_1001(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_982(120000);
		return 1;
	}
	return 0;
}

int func_1005(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_1021(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_1011(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_1010(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_1009(1);
		}
		func_1008();
		func_985();
		func_1007();
		func_1006();
		return 1;
	}
	return 0;
}

void func_1006()
{
	Global_2550198 = 0;
}

void func_1007()
{
	Global_1370593.f_57 = 1;
	Global_1370593.f_57.f_1 = 0;
}

void func_1008()
{
	Global_1370593.f_40.f_9 = 1;
}

void func_1009(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7553, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7553, 0);
	}
}

void func_1010(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7551, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7551, 20);
	}
}

int func_1011(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_1020(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_1012(sParam3, iParam4, bParam7);
}

int func_1012(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_1019();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_409(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_1018();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			MISC::CLEAR_BIT(&Global_7551, 20);
			MISC::CLEAR_BIT(&Global_7552, 17);
			MISC::CLEAR_BIT(&Global_7553, 0);
			if (bParam2)
			{
				func_958();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_1017())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_1016())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7551, 9))
				{
					return 0;
				}
			}
			func_1015();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_1014();
		func_1013();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_1019();
	}
	return 0;
}

void func_1013()
{
	if (!func_948())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703981.f_1), {Global_20624}, 4);
		Global_1703981 = Global_6866;
		Global_1703981.f_6 = Global_21015;
	}
}

void func_1014()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21005 = 1;
}

void func_1015()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	MISC::CLEAR_BIT(&Global_7552, 16);
}

int func_1016()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_1017()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1018()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

void func_1019()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22016 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21005 = 6;
		return;
	}
}

void func_1020(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

int func_1021(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_1020(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 1;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_1012(sParam3, iParam4, bParam7);
}

int func_1022(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_1024(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_1023();
		func_1008();
		func_985();
		func_1007();
		func_1006();
		return 1;
	}
	return 0;
}

void func_1023()
{
	Global_22023 = 0;
}

bool func_1024(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_1020(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 1;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 1;
	Global_21059 = 0;
	StringCopy(&Global_21153, sParam5, 24);
	Global_2621441 = 0;
	return func_1012(sParam3, iParam4, bParam8);
}

int func_1025(var uParam0, char* sParam1, char* sParam2)
{
	if (func_1027(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_1026();
		func_985();
		func_1007();
		return 1;
	}
	return 0;
}

void func_1026()
{
	Global_1370593.f_40.f_9 = 2;
}

bool func_1027(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1020(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_1012(sParam2, iParam3, 0);
}

void func_1028()
{
	Global_1370593.f_55 = Global_1370593.f_40.f_1;
	Global_1370593.f_55.f_1 = Global_1370593.f_40.f_10;
}

void func_1029()
{
	Global_1370593.f_40 = 1;
}

bool func_1030()
{
	return Global_1370593.f_40 == 1;
}

int func_1031(int iParam0, int iParam1, int iParam2)
{
	if (!func_1032(iParam0))
	{
		return 0;
	}
	if (Global_1370593.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370593.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_1032(int iParam0)
{
	if (!func_1033())
	{
		return 0;
	}
	if (!Global_1370593.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_1033()
{
	if (Global_1370593.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1034(int iParam0)
{
	if (func_1038())
	{
		return 0;
	}
	if (func_1037())
	{
		return 0;
	}
	if (func_1036(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1663772 || func_552())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_1035())
		{
			return 0;
		}
	}
	return 1;
}

bool func_1035()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1387851);
}

int func_1036(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7551, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_1037()
{
	return Global_1370593.f_40 == 3;
}

bool func_1038()
{
	return func_1016();
}

int func_1039(int iParam0, int iParam1, int iParam2)
{
	if (!func_1037())
	{
		return 0;
	}
	return func_1031(iParam0, iParam1, iParam2);
}

int func_1040(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_1041()
{
	return Global_2547287.f_1;
}

int func_1042()
{
	if (Global_1370781.f_2)
	{
		return 1;
	}
	return func_1043();
}

bool func_1043()
{
	return func_1038();
}

int func_1044(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_1049())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_415())
	{
		return 0;
	}
	if (func_588())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_102(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_1048(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_1047())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_1046())
	{
		return 0;
	}
	if (func_1045())
	{
		return 0;
	}
	if (func_408())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (Global_2550682)
	{
		return 0;
	}
	if (func_235(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_1045()
{
	return Global_2452015.f_689;
}

bool func_1046()
{
	return Global_2452015.f_842;
}

bool func_1047()
{
	return Global_2440277.f_3158.f_578;
}

int func_1048(int iParam0)
{
	if (Global_2426097[iParam0 /*443*/].f_212 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1049()
{
	if (Global_21005 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_1050(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

char* func_1051()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = !func_968(1);
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	if (!func_436())
	{
		if (bVar0)
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAF";
				
				case 1:
					return "EXCAL_ATTAF2";
				
				default:
			}
			return "EXCAL_ATTAF3";
		}
		else
		{
			switch (iVar1)
			{
				case 0:
					return "EXCAL_ATTAM";
				
				case 1:
					return "EXCAL_ATTAM2";
				
				default:
			}
			return "EXCAL_ATTAM3";
		}
	}
	else if (bVar0)
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEF";
			
			case 1:
				return "EXCAL_STOLF2";
			
			default:
		}
		return "EXCAL_STOLF3";
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "EXCAL_STOLEM";
			
			case 1:
				return "EXCAL_STOLM2";
			
			default:
		}
		return "EXCAL_STOLM3";
	}
	return "";
}

void func_1052(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (bParam5)
	{
		iVar0 = func_307(PLAYER::PLAYER_ID());
		Global_1676408 = iVar0;
		Global_1676408.f_1 = iParam0;
		if (func_664() != func_57())
		{
			Global_1676408.f_2 = func_810(func_664());
			Global_1676408.f_3 = func_809(func_664());
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676408.f_2), &(Global_1676408.f_3));
		}
		Global_1676408.f_7 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676408.f_28 = func_898(PLAYER::PLAYER_ID());
		Global_1676408.f_13 = 0;
		Global_1676408.f_14 = 0;
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676408.f_23 = func_901(func_380(1));
		}
	}
	else
	{
		iVar0 = func_245(PLAYER::PLAYER_ID());
	}
	if (iParam2 || func_461(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1676147 = iVar0;
		if (func_444(iVar0))
		{
			Global_1676147.f_1 = 4;
		}
		else if (func_572(iVar0))
		{
			Global_1676147.f_1 = 5;
		}
		else if (func_346(iVar0, 0))
		{
			Global_1676147.f_1 = 2;
			if (func_638(iVar0))
			{
				Global_1676147.f_1 = 3;
			}
		}
		else
		{
			Global_1676147.f_1 = 1;
		}
		if (func_664() != func_57())
		{
			Global_1676147.f_4 = func_810(func_664());
			Global_1676147.f_5 = func_809(func_664());
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676147.f_6), &(Global_1676147.f_7));
		}
		Global_1676147.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1676147.f_27 = 1;
			Global_1676147.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1676147.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1676147.f_40 = func_659(iParam1);
			Global_1676147.f_41 = func_1090();
			Global_1676147.f_42 = func_766(PLAYER::PLAYER_ID(), iParam1);
			Global_1676147.f_44 = func_891(PLAYER::PLAYER_ID(), iParam1);
		}
		if (!func_654() || iVar0 != 192)
		{
			Global_1676147.f_53 = 0;
		}
	}
	else if (func_570(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1676264 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1676264 = iParam0 + 1;
		}
		else
		{
			Global_1676264 = func_1089(PLAYER::PLAYER_ID());
		}
		switch (iVar0)
		{
			case 225:
				if (func_635(PLAYER::PLAYER_ID()) == 0)
				{
					Global_1676264.f_1 = 0;
				}
				else
				{
					Global_1676264.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1676264.f_1 = 2;
				break;
			
			case 227:
				Global_1676264.f_1 = 3;
				break;
		}
		Global_1676264.f_21 = 1;
		Global_1676264.f_22 = 1;
		if (func_664() != func_57())
		{
			Global_1676264.f_4 = func_810(func_664());
			Global_1676264.f_5 = func_809(func_664());
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676264.f_4), &(Global_1676264.f_5));
		}
		Global_1676264.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1676264.f_20 = iParam0;
		}
	}
	else if (func_466(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1676201 = iVar0;
		Global_1676147.f_1 = 1;
		if (func_664() != func_57())
		{
			Global_1676201.f_4 = func_810(func_664());
			Global_1676201.f_5 = func_809(func_664());
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676201.f_6), &(Global_1676201.f_7));
		}
		Global_1676201.f_9 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1676201.f_21 = iParam0;
		}
	}
	else if (func_568(iVar0))
	{
		Global_1676308 = iVar0;
		Global_1676308.f_1 = iParam0;
		Global_1676308.f_21 = 1;
		Global_1676308.f_22 = 1;
		if (func_664() != func_57())
		{
			Global_1676308.f_4 = func_810(func_664());
			Global_1676308.f_5 = func_809(func_664());
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676308.f_4), &(Global_1676308.f_5));
		}
		Global_1676308.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1676308.f_20 = iParam0;
		}
		Global_1676308.f_27 = func_884(func_36(), 5);
		Global_1676308.f_28 = func_901(func_1088(PLAYER::PLAYER_ID()));
		Global_1676308.f_29 = func_522(6108, -1, 0);
		Global_1676308.f_30 = func_522(6104, -1, 0);
		Global_1676308.f_31 = func_522(6105, -1, 0);
		Global_1676308.f_32 = func_522(6107, -1, 0);
		Global_1676308.f_33 = func_522(6106, -1, 0);
		Global_1676308.f_34 = func_522(6109, -1, 0);
		Global_1676308.f_7 = func_900();
		Global_1676308.f_51 = func_901(bParam4);
	}
	else if (func_566(iVar0))
	{
		Global_1676362 = iVar0;
		Global_1676362.f_1 = iParam0;
		Global_1676362.f_21 = 1;
		Global_1676362.f_22 = 1;
		if (func_664() != func_57())
		{
			Global_1676362.f_4 = func_810(func_664());
			Global_1676362.f_5 = func_809(func_664());
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676362.f_4), &(Global_1676362.f_5));
		}
		Global_1676362.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (iParam0 != -1)
		{
			Global_1676362.f_20 = iParam0;
		}
		Global_1676362.f_24 = func_522(6158, -1, 0);
		Global_1676362.f_25 = func_522(6163, -1, 0);
		Global_1676362.f_26 = func_522(6164, -1, 0);
		Global_1676362.f_27 = func_901((((func_849() || func_848()) || func_847()) || func_846(PLAYER::PLAYER_ID())));
		Global_1676362.f_28 = func_522(6165, -1, 0);
		Global_1676362.f_29 = func_901(func_845());
		Global_1676362.f_31 = 0;
		Global_1676362.f_30 = 0;
		Global_1676362.f_32 = 0;
		Global_1676362.f_33 = 0;
		Global_1676362.f_34 = 0;
		Global_1676362.f_16 = 0;
		Global_1676362.f_7 = func_900();
	}
	else if (((((((((iVar0 == 250 || iVar0 == 238) || iVar0 == 242) || iVar0 == 244) || iVar0 == 248) || iVar0 == 241) || iVar0 == 239) || iVar0 == 240) || iVar0 == 249) || (iVar0 == 237 && func_633(func_634(PLAYER::PLAYER_ID()))))
	{
		Global_1676498 = iVar0;
		Global_1676498.f_1 = iParam0;
		Global_1676498.f_21 = 1;
		Global_1676498.f_22 = 1;
		Global_1676498.f_7 = func_900();
		if (func_664() != func_57())
		{
			Global_1676498.f_4 = func_810(func_664());
			Global_1676498.f_5 = func_809(func_664());
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676498.f_4), &(Global_1676498.f_5));
		}
		if (func_664() != -1)
		{
			Global_1676498.f_17 = func_842(func_664());
		}
		Global_1676498.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676498.f_28 = func_898(PLAYER::PLAYER_ID());
		Global_1676498.f_16 = 0;
		Global_1676498.f_24 = 0;
		Global_1676498.f_23 = 0;
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676498.f_33 = func_901(func_380(1));
		}
	}
	else if (iVar0 == 237)
	{
		Global_1676444 = iVar0;
		Global_1676444.f_1 = iParam0;
		Global_1676444.f_21 = 1;
		Global_1676444.f_22 = 1;
		Global_1676444.f_7 = func_900();
		Global_1676444.f_24 = 0;
		Global_1676444.f_23 = 0;
		Global_1676444.f_16 = 0;
		if (func_664() != func_57())
		{
			Global_1676444.f_4 = func_810(func_664());
			Global_1676444.f_5 = func_809(func_664());
		}
		Global_1676444.f_28 = func_898(PLAYER::PLAYER_ID());
		if (Global_1676444.f_28)
		{
			Global_1676444.f_29 = func_836(PLAYER::PLAYER_ID());
		}
		else
		{
			Global_1676444.f_29 = 0;
		}
		Global_1676444.f_30 = func_820(PLAYER::PLAYER_ID(), 4, -1);
		Global_1676444.f_31 = func_839(PLAYER::PLAYER_ID());
		Global_1676444.f_32 = func_901(func_819(PLAYER::PLAYER_ID()));
		Global_1676444.f_33 = func_901(func_818(PLAYER::PLAYER_ID()));
		Global_1676444.f_34 = func_901(func_817(PLAYER::PLAYER_ID()));
		Global_1676444.f_35 = func_901(func_816(PLAYER::PLAYER_ID()));
		Global_1676444.f_36 = func_815(PLAYER::PLAYER_ID());
		Global_1676444.f_37 = func_814(PLAYER::PLAYER_ID());
		Global_1676444.f_39 = func_813(PLAYER::PLAYER_ID());
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676444.f_41 = func_901(func_380(1));
		}
		if (func_383() != func_57())
		{
			func_663(func_383(), &(Global_1676444.f_4), &(Global_1676444.f_5));
		}
		Global_1676444.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676444.f_28 = func_898(PLAYER::PLAYER_ID());
	}
	else if (func_631(iVar0))
	{
		Global_1676582 = iVar0;
		Global_1676582.f_1 = func_635(PLAYER::PLAYER_ID());
		Global_1676582.f_2 = func_909();
		Global_1676582.f_3 = func_908();
		Global_1676582.f_4 = func_810(func_664());
		Global_1676582.f_5 = func_809(func_664());
		Global_1676582.f_7 = func_900();
		Global_1676582.f_8 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (func_664() != -1)
		{
			Global_1676582.f_17 = func_842(func_664());
		}
		Global_1676582.f_21 = 1;
		Global_1676582.f_22 = 1;
		Global_1676582.f_25 = iParam0;
		Global_1676582.f_27 = func_901(func_807(PLAYER::PLAYER_ID()));
		Global_1676582.f_28 = func_803(21, -1);
	}
	else if (func_560(iVar0))
	{
		Global_1676657 = Global_786547.f_1;
		Global_1676657.f_2 = Global_786547;
		Global_1676657.f_6 = func_810(func_664());
		Global_1676657.f_7 = func_809(func_664());
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676657.f_8 = func_901(func_380(1));
		}
		if (func_664() != -1)
		{
			Global_1676657.f_9 = func_842(func_664());
		}
		Global_1676657.f_10 = func_900();
		Global_1676657.f_19 = 1;
		Global_1676657.f_20 = 1;
		Global_1676657.f_21 = 0;
		Global_1676657.f_22 = 0;
		Global_1676657.f_23 = 0;
		Global_1703846 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	else if (func_559(iVar0))
	{
		Global_1676744 = Global_786547.f_1;
		Global_1676744.f_3 = Global_786547;
		Global_1676744.f_6 = func_810(func_664());
		Global_1676744.f_7 = func_809(func_664());
		if (func_315(PLAYER::PLAYER_ID(), 1))
		{
			Global_1676744.f_8 = func_901(func_380(1));
		}
		if (func_664() != -1)
		{
			Global_1676744.f_9 = func_842(func_664());
		}
		Global_1676744.f_10 = func_900();
		Global_1676744.f_19 = 1;
		Global_1676744.f_20 = 1;
		Global_1676744.f_21 = 0;
		Global_1676744.f_22 = 0;
		Global_1676744.f_23 = 0;
		Global_1676744.f_26 = func_1072(1);
		Global_1676744.f_34 = func_1072(0);
		Global_1676744.f_15 = !func_348(PLAYER::PLAYER_ID(), func_383(), 1);
	}
	else if (func_795(iVar0))
	{
		Global_1676856 = iParam0;
		Global_1676856.f_1 = iVar0;
		Global_1676856.f_3 = func_810(func_664());
		Global_1676856.f_4 = func_809(func_664());
		Global_1676856.f_5 = func_901(func_380(1));
		Global_1676856.f_6 = func_900();
		Global_1676856.f_7 = func_842(func_664());
		Global_1676856.f_8 = 0;
	}
	else
	{
		if (func_664() != func_57())
		{
			Global_1676129 = func_810(func_664());
			Global_1676129.f_1 = func_809(func_664());
		}
		Global_1676129.f_5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		Global_1676129.f_13 = func_1071();
		Global_1676129.f_15 = 0;
		if (func_662(1))
		{
			if (func_383() == func_664())
			{
				Global_1676129.f_15 = 1;
			}
		}
		if (func_1070())
		{
			Global_1676264.f_28 = 1;
		}
		if (((((func_1069() || func_1068()) || func_1067()) || func_1066()) || func_1065()) || func_1064(PLAYER::PLAYER_ID()))
		{
			Global_1676264.f_30 = 1;
		}
		if (func_1062(func_1063(joaat("trailersmall2"))))
		{
			Global_1676264.f_32 = 1;
		}
		if (func_1056(func_1061(joaat("caddy"))))
		{
			Global_1676264.f_31 = 1;
		}
		if (func_883(PLAYER::PLAYER_ID()) || func_882(PLAYER::PLAYER_ID()))
		{
			Global_1676264.f_29 = 1;
		}
		if (func_879(PLAYER::PLAYER_ID()))
		{
			Global_1676264.f_33 = 1;
			Global_1676264.f_34 = 1;
		}
		if (func_880(PLAYER::PLAYER_ID()))
		{
			Global_1676264.f_36 = 1;
		}
		if (func_877(0, PLAYER::PLAYER_ID()) == 1)
		{
			Global_1676264.f_35 = 1;
		}
		if (func_1055(PLAYER::PLAYER_ID(), 3, &uVar1))
		{
			Global_1676264.f_37 = 1;
		}
		if (func_1055(PLAYER::PLAYER_ID(), 7, &uVar1))
		{
			Global_1676264.f_38 = 1;
		}
		if (func_1054(PLAYER::PLAYER_ID()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_1053(PLAYER::PLAYER_ID(), iVar2);
				if (func_763(PLAYER::PLAYER_ID(), iVar3, 0))
				{
					Global_1676264.f_39 = 1;
				}
				if (func_763(PLAYER::PLAYER_ID(), iVar3, 2))
				{
					Global_1676264.f_40 = 1;
				}
				if (func_763(PLAYER::PLAYER_ID(), iVar3, 1))
				{
					Global_1676264.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_1053(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_756(Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/]))
	{
		uVar0 = Global_1590682[iParam0 /*883*/].f_274.f_183[iParam1 /*12*/];
	}
	return uVar0;
}

int func_1054(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1055(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_877(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1056(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_803(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_863(11));
		func_862(iVar1, &iVar0, 1);
		iVar2 = func_803(func_1058(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_522(func_1057(4, iVar0), -1, 0);
			if (iVar2 > 0)
			{
			}
			if (iVar3 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1057(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1629;
				
				case 1:
					return 1636;
				
				case 2:
					return 1643;
				
				case 3:
					return 1650;
				
				case 4:
					return 1657;
				
				case 5:
					return 1664;
				
				case 6:
					return 1671;
				
				case 7:
					return 1678;
				
				case 8:
					return 1685;
				
				case 9:
					return 1692;
				
				case 10:
					return 1699;
				
				case 11:
					return 1705;
				
				case 12:
					return 1711;
				
				case 13:
					return 1717;
				
				case 14:
					return 1796;
				
				case 15:
					return 1803;
				
				case 16:
					return 1810;
				
				case 17:
					return 1817;
				
				case 18:
					return 1824;
				
				case 19:
					return 1831;
				
				case 20:
					return 1838;
				
				case 21:
					return 1845;
				
				case 22:
					return 1852;
				
				case 23:
					return 1859;
				
				case 24:
					return 1865;
				
				case 25:
					return 1871;
				
				case 26:
					return 2166;
				
				case 27:
					return 2173;
				
				case 28:
					return 2180;
				
				case 29:
					return 2187;
				
				case 30:
					return 2194;
				
				case 31:
					return 2201;
				
				case 32:
					return 2208;
				
				case 33:
					return 2215;
				
				case 34:
					return 2222;
				
				case 35:
					return 2229;
				
				case 36:
					return 2236;
				
				case 37:
					return 2242;
				
				case 38:
					return 2248;
				
				case 39:
					return 2829;
				
				case 40:
					return 2836;
				
				case 41:
					return 2843;
				
				case 42:
					return 2850;
				
				case 43:
					return 2857;
				
				case 44:
					return 2864;
				
				case 45:
					return 2871;
				
				case 46:
					return 2878;
				
				case 47:
					return 2885;
				
				case 48:
					return 2892;
				
				case 49:
					return 2899;
				
				case 50:
					return 2905;
				
				case 51:
					return 2911;
				
				case 52:
					return 2953;
				
				case 53:
					return 2960;
				
				case 54:
					return 2967;
				
				case 55:
					return 2974;
				
				case 56:
					return 2981;
				
				case 57:
					return 2988;
				
				case 58:
					return 2995;
				
				case 59:
					return 3002;
				
				case 60:
					return 3009;
				
				case 61:
					return 3016;
				
				case 62:
					return 3023;
				
				case 63:
					return 3029;
				
				case 64:
					return 3035;
				
				case 65:
					return 3236;
				
				case 66:
					return 3244;
				
				case 67:
					return 3252;
				
				case 68:
					return 3260;
				
				case 69:
					return 3268;
				
				case 70:
					return 3276;
				
				case 71:
					return 3284;
				
				case 72:
					return 3292;
				
				case 73:
					return 3300;
				
				case 74:
					return 3308;
				
				case 75:
					return 3316;
				
				case 76:
					return 3324;
				
				case 77:
					return 3332;
				
				case 78:
					return 3340;
				
				case joaat("MPSV_LP0_31"):
					return 3348;
				
				case 80:
					return 3356;
				
				case 81:
					return 3364;
				
				case 82:
					return 3372;
				
				case 83:
					return 3380;
				
				case 84:
					return 3388;
				
				case 85:
					return 3396;
				
				case 86:
					return 3403;
				
				case 87:
					return 3410;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4032;
				
				case 89:
					return 4040;
				
				case 90:
					return 4048;
				
				case 91:
					return 4056;
				
				case 92:
					return 4064;
				
				case 93:
					return 4072;
				
				case 94:
					return 4080;
				
				case 95:
					return 4088;
				
				case 96:
					return 4096;
				
				case 97:
					return 4104;
				
				case 98:
					return 4112;
				
				case 99:
					return 4120;
				
				case 100:
					return 4128;
				
				case 101:
					return 4136;
				
				case 102:
					return 4144;
				
				case 103:
					return 4152;
				
				case 104:
					return 4160;
				
				case 105:
					return 4168;
				
				case 106:
					return 4176;
				
				case 107:
					return 4184;
				
				case 108:
					return 4192;
				
				case 109:
					return 4200;
				
				case 110:
					return 4208;
				
				case 111:
					return 4216;
				
				case 112:
					return 4224;
				
				case 113:
					return 4232;
				
				case 114:
					return 4240;
				
				case 115:
					return 4248;
				
				case 116:
					return 4256;
				
				case 117:
					return 4264;
				
				case 118:
					return 4272;
				
				case 119:
					return 4280;
				
				case 120:
					return 4288;
				
				case 121:
					return 4296;
				
				case 122:
					return 4304;
				
				case 123:
					return 4312;
				
				case 124:
					return 4320;
				
				case 125:
					return 4328;
				
				case 126:
					return 4336;
				
				case 127:
					return 4344;
				
				case 128:
					return 4352;
				
				case 129:
					return 4360;
				
				case 130:
					return 4368;
				
				case 131:
					return 4376;
				
				case 132:
					return 4384;
				
				case 133:
					return 4392;
				
				case 134:
					return 4400;
				
				case 135:
					return 4408;
				
				case 136:
					return 4416;
				
				case 137:
					return 4424;
				
				case 138:
					return 4432;
				
				case 139:
					return 4440;
				
				case 140:
					return 4448;
				
				case 141:
					return 4456;
				
				case 142:
					return 4464;
				
				case 143:
					return 4472;
				
				case 144:
					return 4480;
				
				case 145:
					return 4488;
				
				case 146:
					return 4496;
				
				case 147:
					return 4504;
				
				case 148:
					return 4512;
				
				case 149:
					return 4520;
				
				case 150:
					return 4528;
				
				case 151:
					return 4536;
				
				case 152:
					return 4544;
				
				case 153:
					return 4552;
				
				case 154:
					return 4560;
				
				case 155:
					return 4568;
				
				case 156:
					return 4576;
				
				case 157:
					return 4584;
				
				case 158:
					return 5477;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5926;
				
				case 160:
					return 5933;
				
				case 161:
					return 5940;
				
				case 162:
					return 5947;
				
				case 163:
					return 5954;
				
				case 164:
					return 5961;
				
				case 165:
					return 5968;
				
				case 166:
					return 5975;
				
				case 167:
					return 5982;
				
				case 168:
					return 5989;
				
				case 169:
					return 5996;
				
				case 170:
					return 6003;
				
				case 171:
					return 6010;
				
				case 172:
					return 6017;
				
				case 173:
					return 6024;
				
				case 174:
					return 6031;
				
				case 175:
					return 6038;
				
				case 176:
					return 6045;
				
				case 177:
					return 6052;
				
				case 178:
					return 6059;
				
				case 179:
					return 6066;
				
				case 180:
					return 6073;
				
				case 181:
					return 6080;
				
				case 182:
					return 6087;
				
				case 183:
					return 6094;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6171;
				
				case 185:
					return 6178;
				
				case 186:
					return 6185;
				
				case 187:
					return 6192;
				
				case 188:
					return 6199;
				
				case 189:
					return 6206;
				
				case 190:
					return 6213;
				
				case 191:
					return 6220;
				
				case 192:
					return 6227;
				
				case 193:
					return 6234;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6568;
				
				case 195:
					return 6575;
				
				case 196:
					return 6582;
				
				case 197:
					return 6589;
				
				case 198:
					return 6596;
				
				case 199:
					return 6603;
				
				case 200:
					return 6610;
				
				case 201:
					return 6617;
				
				case 202:
					return 6624;
				
				case 203:
					return 6631;
				
				case 204:
					return 6638;
				
				case 205:
					return 6645;
				
				case 206:
					return 6652;
				
				case 207:
					return 6659;
				
				case 208:
					return 6666;
				
				case 209:
					return 6673;
				
				case 210:
					return 6680;
				
				case 211:
					return 6687;
				
				case 212:
					return 6694;
				
				case 213:
					return 6701;
				
				case 214:
					return 6708;
				
				case 215:
					return 6715;
				
				case 216:
					return 6722;
				
				case 217:
					return 6729;
				
				case 218:
					return 6736;
				
				case 219:
					return 6743;
				
				case 220:
					return 6750;
				
				case 221:
					return 6757;
				
				case 222:
					return 6764;
				
				case 223:
					return 6771;
				
				case 224:
					return 6778;
				
				case 225:
					return 6785;
				
				case 226:
					return 6792;
				
				case 227:
					return 6799;
				
				case 228:
					return 6806;
				
				case 229:
					return 6813;
				
				case 230:
					return 6820;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7290;
				
				case 232:
					return 7297;
				
				case 233:
					return 7304;
				
				case 234:
					return 7311;
				
				case 235:
					return 7318;
				
				case 236:
					return 7325;
				
				case 237:
					return 7332;
				
				case 238:
					return 7339;
				
				case 239:
					return 7346;
				
				case 240:
					return 7353;
				
				case 241:
					return 7360;
				
				case 242:
					return 7367;
				
				case 243:
					return 7374;
				
				case 244:
					return 7381;
				
				case 245:
					return 7388;
				
				case 246:
					return 7395;
				
				case 247:
					return 7402;
				
				case 248:
					return 7409;
				
				case 249:
					return 7416;
				
				case 250:
					return 7423;
				
				case 251:
					return 7430;
				
				case 252:
					return 7437;
				
				case 253:
					return 7444;
				
				case 254:
					return 7451;
				
				case 255:
					return 7458;
				
				case 256:
					return 7465;
				
				case 257:
					return 7472;
				
				case 258:
					return 7479;
				
				case 259:
					return 7486;
				
				case 260:
					return 7493;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8013;
				
				case 262:
					return 8020;
				
				case 263:
					return 8027;
				
				case 264:
					return 8034;
				
				case 265:
					return 8041;
				
				case 266:
					return 8048;
				
				case 267:
					return 8055;
				
				case 268:
					return 8062;
				
				case 269:
					return 8069;
				
				case 270:
					return 8076;
				
				case 271:
					return 8537;
				
				case 272:
					return 8544;
				
				case 273:
					return 8551;
				
				case 274:
					return 8558;
				
				case 275:
					return 8565;
				
				case 276:
					return 8572;
				
				case 277:
					return 8579;
				
				case 278:
					return 8586;
				
				case 279:
					return 8593;
				
				case 280:
					return 8600;
				
				case 281:
					return 8982;
				
				case 282:
					return 8989;
				
				case 283:
					return 8996;
				
				case 284:
					return 9003;
				
				case 285:
					return 9010;
				
				case 286:
					return 9017;
				
				case 287:
					return 9024;
				
				case 288:
					return 9031;
				
				case 289:
					return 9038;
				
				case 290:
					return 9045;
				
				case 291:
					return 9052;
				
				case 292:
					return 9058;
				
				case 293:
					return 9064;
				
				case 294:
					return 9070;
				
				case 295:
					return 9077;
				
				case 296:
					return 9084;
				
				case 297:
					return 9091;
				
				case 298:
					return 9098;
				
				case 299:
					return 9105;
				
				case 300:
					return 9112;
				
				case 301:
					return 9119;
				
				case 302:
					return 9126;
				
				case 303:
					return 9133;
				
				case 304:
					return 9140;
				
				case 305:
					return 9146;
				
				case 306:
					return 9152;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2830;
				
				case 40:
					return 2837;
				
				case 41:
					return 2844;
				
				case 42:
					return 2851;
				
				case 43:
					return 2858;
				
				case 44:
					return 2865;
				
				case 45:
					return 2872;
				
				case 46:
					return 2879;
				
				case 47:
					return 2886;
				
				case 48:
					return 2893;
				
				case 49:
					return 2900;
				
				case 50:
					return 2906;
				
				case 51:
					return 2912;
				
				case 52:
					return 2954;
				
				case 53:
					return 2961;
				
				case 54:
					return 2968;
				
				case 55:
					return 2975;
				
				case 56:
					return 2982;
				
				case 57:
					return 2989;
				
				case 58:
					return 2996;
				
				case 59:
					return 3003;
				
				case 60:
					return 3010;
				
				case 61:
					return 3017;
				
				case 62:
					return 3024;
				
				case 63:
					return 3030;
				
				case 64:
					return 3036;
				
				case 65:
					return 3237;
				
				case 66:
					return 3245;
				
				case 67:
					return 3253;
				
				case 68:
					return 3261;
				
				case 69:
					return 3269;
				
				case 70:
					return 3277;
				
				case 71:
					return 3285;
				
				case 72:
					return 3293;
				
				case 73:
					return 3301;
				
				case 74:
					return 3309;
				
				case 75:
					return 3317;
				
				case 76:
					return 3325;
				
				case 77:
					return 3333;
				
				case 78:
					return 3341;
				
				case joaat("MPSV_LP0_31"):
					return 3349;
				
				case 80:
					return 3357;
				
				case 81:
					return 3365;
				
				case 82:
					return 3373;
				
				case 83:
					return 3381;
				
				case 84:
					return 3389;
				
				case 85:
					return 3397;
				
				case 86:
					return 3404;
				
				case 87:
					return 3411;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4033;
				
				case 89:
					return 4041;
				
				case 90:
					return 4049;
				
				case 91:
					return 4057;
				
				case 92:
					return 4065;
				
				case 93:
					return 4073;
				
				case 94:
					return 4081;
				
				case 95:
					return 4089;
				
				case 96:
					return 4097;
				
				case 97:
					return 4105;
				
				case 98:
					return 4113;
				
				case 99:
					return 4121;
				
				case 100:
					return 4129;
				
				case 101:
					return 4137;
				
				case 102:
					return 4145;
				
				case 103:
					return 4153;
				
				case 104:
					return 4161;
				
				case 105:
					return 4169;
				
				case 106:
					return 4177;
				
				case 107:
					return 4185;
				
				case 108:
					return 4193;
				
				case 109:
					return 4201;
				
				case 110:
					return 4209;
				
				case 111:
					return 4217;
				
				case 112:
					return 4225;
				
				case 113:
					return 4233;
				
				case 114:
					return 4241;
				
				case 115:
					return 4249;
				
				case 116:
					return 4257;
				
				case 117:
					return 4265;
				
				case 118:
					return 4273;
				
				case 119:
					return 4281;
				
				case 120:
					return 4289;
				
				case 121:
					return 4297;
				
				case 122:
					return 4305;
				
				case 123:
					return 4313;
				
				case 124:
					return 4321;
				
				case 125:
					return 4329;
				
				case 126:
					return 4337;
				
				case 127:
					return 4345;
				
				case 128:
					return 4353;
				
				case 129:
					return 4361;
				
				case 130:
					return 4369;
				
				case 131:
					return 4377;
				
				case 132:
					return 4385;
				
				case 133:
					return 4393;
				
				case 134:
					return 4401;
				
				case 135:
					return 4409;
				
				case 136:
					return 4417;
				
				case 137:
					return 4425;
				
				case 138:
					return 4433;
				
				case 139:
					return 4441;
				
				case 140:
					return 4449;
				
				case 141:
					return 4457;
				
				case 142:
					return 4465;
				
				case 143:
					return 4473;
				
				case 144:
					return 4481;
				
				case 145:
					return 4489;
				
				case 146:
					return 4497;
				
				case 147:
					return 4505;
				
				case 148:
					return 4513;
				
				case 149:
					return 4521;
				
				case 150:
					return 4529;
				
				case 151:
					return 4537;
				
				case 152:
					return 4545;
				
				case 153:
					return 4553;
				
				case 154:
					return 4561;
				
				case 155:
					return 4569;
				
				case 156:
					return 4577;
				
				case 157:
					return 4585;
				
				case 158:
					return 5478;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5927;
				
				case 160:
					return 5934;
				
				case 161:
					return 5941;
				
				case 162:
					return 5948;
				
				case 163:
					return 5955;
				
				case 164:
					return 5962;
				
				case 165:
					return 5969;
				
				case 166:
					return 5976;
				
				case 167:
					return 5983;
				
				case 168:
					return 5990;
				
				case 169:
					return 5997;
				
				case 170:
					return 6004;
				
				case 171:
					return 6011;
				
				case 172:
					return 6018;
				
				case 173:
					return 6025;
				
				case 174:
					return 6032;
				
				case 175:
					return 6039;
				
				case 176:
					return 6046;
				
				case 177:
					return 6053;
				
				case 178:
					return 6060;
				
				case 179:
					return 6067;
				
				case 180:
					return 6074;
				
				case 181:
					return 6081;
				
				case 182:
					return 6088;
				
				case 183:
					return 6095;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6172;
				
				case 185:
					return 6179;
				
				case 186:
					return 6186;
				
				case 187:
					return 6193;
				
				case 188:
					return 6200;
				
				case 189:
					return 6207;
				
				case 190:
					return 6214;
				
				case 191:
					return 6221;
				
				case 192:
					return 6228;
				
				case 193:
					return 6235;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6569;
				
				case 195:
					return 6576;
				
				case 196:
					return 6583;
				
				case 197:
					return 6590;
				
				case 198:
					return 6597;
				
				case 199:
					return 6604;
				
				case 200:
					return 6611;
				
				case 201:
					return 6618;
				
				case 202:
					return 6625;
				
				case 203:
					return 6632;
				
				case 204:
					return 6639;
				
				case 205:
					return 6646;
				
				case 206:
					return 6653;
				
				case 207:
					return 6660;
				
				case 208:
					return 6667;
				
				case 209:
					return 6674;
				
				case 210:
					return 6681;
				
				case 211:
					return 6688;
				
				case 212:
					return 6695;
				
				case 213:
					return 6702;
				
				case 214:
					return 6709;
				
				case 215:
					return 6716;
				
				case 216:
					return 6723;
				
				case 217:
					return 6730;
				
				case 218:
					return 6737;
				
				case 219:
					return 6744;
				
				case 220:
					return 6751;
				
				case 221:
					return 6758;
				
				case 222:
					return 6765;
				
				case 223:
					return 6772;
				
				case 224:
					return 6779;
				
				case 225:
					return 6786;
				
				case 226:
					return 6793;
				
				case 227:
					return 6800;
				
				case 228:
					return 6807;
				
				case 229:
					return 6814;
				
				case 230:
					return 6821;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7291;
				
				case 232:
					return 7298;
				
				case 233:
					return 7305;
				
				case 234:
					return 7312;
				
				case 235:
					return 7319;
				
				case 236:
					return 7326;
				
				case 237:
					return 7333;
				
				case 238:
					return 7340;
				
				case 239:
					return 7347;
				
				case 240:
					return 7354;
				
				case 241:
					return 7361;
				
				case 242:
					return 7368;
				
				case 243:
					return 7375;
				
				case 244:
					return 7382;
				
				case 245:
					return 7389;
				
				case 246:
					return 7396;
				
				case 247:
					return 7403;
				
				case 248:
					return 7410;
				
				case 249:
					return 7417;
				
				case 250:
					return 7424;
				
				case 251:
					return 7431;
				
				case 252:
					return 7438;
				
				case 253:
					return 7445;
				
				case 254:
					return 7452;
				
				case 255:
					return 7459;
				
				case 256:
					return 7466;
				
				case 257:
					return 7473;
				
				case 258:
					return 7480;
				
				case 259:
					return 7487;
				
				case 260:
					return 7494;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8014;
				
				case 262:
					return 8021;
				
				case 263:
					return 8028;
				
				case 264:
					return 8035;
				
				case 265:
					return 8042;
				
				case 266:
					return 8049;
				
				case 267:
					return 8056;
				
				case 268:
					return 8063;
				
				case 269:
					return 8070;
				
				case 270:
					return 8077;
				
				case 271:
					return 8538;
				
				case 272:
					return 8545;
				
				case 273:
					return 8552;
				
				case 274:
					return 8559;
				
				case 275:
					return 8566;
				
				case 276:
					return 8573;
				
				case 277:
					return 8580;
				
				case 278:
					return 8587;
				
				case 279:
					return 8594;
				
				case 280:
					return 8601;
				
				case 281:
					return 8983;
				
				case 282:
					return 8990;
				
				case 283:
					return 8997;
				
				case 284:
					return 9004;
				
				case 285:
					return 9011;
				
				case 286:
					return 9018;
				
				case 287:
					return 9025;
				
				case 288:
					return 9032;
				
				case 289:
					return 9039;
				
				case 290:
					return 9046;
				
				case 291:
					return 9053;
				
				case 292:
					return 9059;
				
				case 293:
					return 9065;
				
				case 294:
					return 9071;
				
				case 295:
					return 9078;
				
				case 296:
					return 9085;
				
				case 297:
					return 9092;
				
				case 298:
					return 9099;
				
				case 299:
					return 9106;
				
				case 300:
					return 9113;
				
				case 301:
					return 9120;
				
				case 302:
					return 9127;
				
				case 303:
					return 9134;
				
				case 304:
					return 9141;
				
				case 305:
					return 9147;
				
				case 306:
					return 9153;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case joaat("MPSV_LP0_31"):
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8984;
				
				case 282:
					return 8991;
				
				case 283:
					return 8998;
				
				case 284:
					return 9005;
				
				case 285:
					return 9012;
				
				case 286:
					return 9019;
				
				case 287:
					return 9026;
				
				case 288:
					return 9033;
				
				case 289:
					return 9040;
				
				case 290:
					return 9047;
				
				case 291:
					return 9054;
				
				case 292:
					return 9060;
				
				case 293:
					return 9066;
				
				case 294:
					return 9072;
				
				case 295:
					return 9079;
				
				case 296:
					return 9086;
				
				case 297:
					return 9093;
				
				case 298:
					return 9100;
				
				case 299:
					return 9107;
				
				case 300:
					return 9114;
				
				case 301:
					return 9121;
				
				case 302:
					return 9128;
				
				case 303:
					return 9135;
				
				case 304:
					return 9142;
				
				case 305:
					return 9148;
				
				case 306:
					return 9154;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case joaat("MPSV_LP0_31"):
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8985;
				
				case 282:
					return 8992;
				
				case 283:
					return 8999;
				
				case 284:
					return 9006;
				
				case 285:
					return 9013;
				
				case 286:
					return 9020;
				
				case 287:
					return 9027;
				
				case 288:
					return 9034;
				
				case 289:
					return 9041;
				
				case 290:
					return 9048;
				
				case 291:
					return 9055;
				
				case 292:
					return 9061;
				
				case 293:
					return 9067;
				
				case 294:
					return 9073;
				
				case 295:
					return 9080;
				
				case 296:
					return 9087;
				
				case 297:
					return 9094;
				
				case 298:
					return 9101;
				
				case 299:
					return 9108;
				
				case 300:
					return 9115;
				
				case 301:
					return 9122;
				
				case 302:
					return 9129;
				
				case 303:
					return 9136;
				
				case 304:
					return 9143;
				
				case 305:
					return 9149;
				
				case 306:
					return 9155;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case joaat("MPSV_LP0_31"):
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 65:
					return 3243;
				
				case 66:
					return 3251;
				
				case 67:
					return 3259;
				
				case 68:
					return 3267;
				
				case 69:
					return 3275;
				
				case 70:
					return 3283;
				
				case 71:
					return 3291;
				
				case 72:
					return 3299;
				
				case 73:
					return 3307;
				
				case 74:
					return 3315;
				
				case 75:
					return 3323;
				
				case 76:
					return 3331;
				
				case 77:
					return 3339;
				
				case 78:
					return 3347;
				
				case joaat("MPSV_LP0_31"):
					return 3355;
				
				case 80:
					return 3363;
				
				case 81:
					return 3371;
				
				case 82:
					return 3379;
				
				case 83:
					return 3387;
				
				case 84:
					return 3395;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				
				case 89:
					return 4047;
				
				case 90:
					return 4055;
				
				case 91:
					return 4063;
				
				case 92:
					return 4071;
				
				case 93:
					return 4079;
				
				case 94:
					return 4087;
				
				case 95:
					return 4095;
				
				case 96:
					return 4103;
				
				case 97:
					return 4111;
				
				case 98:
					return 4119;
				
				case 99:
					return 4127;
				
				case 100:
					return 4135;
				
				case 101:
					return 4143;
				
				case 102:
					return 4151;
				
				case 103:
					return 4159;
				
				case 104:
					return 4167;
				
				case 105:
					return 4175;
				
				case 106:
					return 4183;
				
				case 107:
					return 4191;
				
				case 108:
					return 4199;
				
				case 109:
					return 4207;
				
				case 110:
					return 4215;
				
				case 111:
					return 4223;
				
				case 112:
					return 4231;
				
				case 113:
					return 4239;
				
				case 114:
					return 4247;
				
				case 115:
					return 4255;
				
				case 116:
					return 4263;
				
				case 117:
					return 4271;
				
				case 118:
					return 4279;
				
				case 119:
					return 4287;
				
				case 120:
					return 4295;
				
				case 121:
					return 4303;
				
				case 122:
					return 4311;
				
				case 123:
					return 4319;
				
				case 124:
					return 4327;
				
				case 125:
					return 4335;
				
				case 126:
					return 4343;
				
				case 127:
					return 4351;
				
				case 128:
					return 4359;
				
				case 129:
					return 4367;
				
				case 130:
					return 4375;
				
				case 131:
					return 4383;
				
				case 132:
					return 4391;
				
				case 133:
					return 4399;
				
				case 134:
					return 4407;
				
				case 135:
					return 4415;
				
				case 136:
					return 4423;
				
				case 137:
					return 4431;
				
				case 138:
					return 4439;
				
				case 139:
					return 4447;
				
				case 140:
					return 4455;
				
				case 141:
					return 4463;
				
				case 142:
					return 4471;
				
				case 143:
					return 4479;
				
				case 144:
					return 4487;
				
				case 145:
					return 4495;
				
				case 146:
					return 4503;
				
				case 147:
					return 4511;
				
				case 148:
					return 4519;
				
				case 149:
					return 4527;
				
				case 150:
					return 4535;
				
				case 151:
					return 4543;
				
				case 152:
					return 4551;
				
				case 153:
					return 4559;
				
				case 154:
					return 4567;
				
				case 155:
					return 4575;
				
				case 156:
					return 4583;
				
				case 157:
					return 4591;
				
				case 158:
					return 5484;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case joaat("MPSV_LP0_31"):
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				default:
			}
			break;
	}
	return 1629;
}

int func_1058(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 307)
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (iParam0 >= func_863(iVar0) && iParam0 < func_1059(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_1059(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_806(iParam0);
		return func_1060(iVar0);
	}
	return (func_864(iParam0, -1, 1) * iParam0 + 1);
}

int func_1060(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_1061(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_1062(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_862(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_522(func_1057(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1063(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

int func_1064(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_339 != 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1065()
{
	return func_522(6543, -1, 0) != 0;
}

bool func_1066()
{
	return func_522(6164, -1, 0) != 0;
}

bool func_1067()
{
	return func_522(5381, -1, 0) != 0;
}

bool func_1068()
{
	return func_522(3829, -1, 0) != 0;
}

bool func_1069()
{
	return func_522(3224, -1, 0) != 0;
}

bool func_1070()
{
	return func_522(5380, -1, 0) != 0;
}

int func_1071()
{
	int iVar0;
	
	iVar0 = func_664();
	if (iVar0 != func_57())
	{
		return Global_1630317[iVar0 /*595*/].f_11.f_98;
	}
	return 0;
}

var func_1072(bool bParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		if (func_1085(iVar1, 4, 0))
		{
			MISC::SET_BIT(&uVar0, 0);
		}
		if (func_1085(iVar1, 5, 0))
		{
			MISC::SET_BIT(&uVar0, 1);
		}
		if (func_1085(iVar1, 6, 1))
		{
			MISC::SET_BIT(&uVar0, 2);
		}
		if (func_1085(iVar1, 1, 0))
		{
			MISC::SET_BIT(&uVar0, 3);
		}
		if (func_1085(iVar1, 2, 0))
		{
			MISC::SET_BIT(&uVar0, 4);
		}
		if (func_1085(iVar1, 3, 0))
		{
			MISC::SET_BIT(&uVar0, 5);
		}
		if ((((func_1084(iVar1, 61) || func_1084(iVar1, 62)) || func_1084(iVar1, 63)) || func_1084(iVar1, 64)) || func_1084(iVar1, 65))
		{
			MISC::SET_BIT(&uVar0, 6);
		}
		if (func_787(iVar1))
		{
			MISC::SET_BIT(&uVar0, 7);
		}
		if (func_1083(iVar1, 0))
		{
			MISC::SET_BIT(&uVar0, 8);
		}
		if (func_1083(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 9);
		}
		if (func_1083(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 10);
		}
		if (func_642(iVar1))
		{
			MISC::SET_BIT(&uVar0, 11);
		}
		if (func_1079(iVar1, 3))
		{
			MISC::SET_BIT(&uVar0, 12);
		}
		if (func_1079(iVar1, 4))
		{
			MISC::SET_BIT(&uVar0, 13);
		}
		if (func_1079(iVar1, 2))
		{
			MISC::SET_BIT(&uVar0, 14);
		}
		if (func_1079(iVar1, 6))
		{
			MISC::SET_BIT(&uVar0, 15);
		}
		if (func_1079(iVar1, 5))
		{
			MISC::SET_BIT(&uVar0, 16);
		}
		if (func_1077(iVar1))
		{
			MISC::SET_BIT(&uVar0, 17);
		}
		if (func_1079(iVar1, 1))
		{
			MISC::SET_BIT(&uVar0, 18);
		}
		if (func_1088(iVar1))
		{
			MISC::SET_BIT(&uVar0, 19);
		}
		if (func_846(iVar1))
		{
			MISC::SET_BIT(&uVar0, 20);
		}
		if (func_1064(iVar1))
		{
			MISC::SET_BIT(&uVar0, 21);
		}
		if (func_898(iVar1))
		{
			MISC::SET_BIT(&uVar0, 22);
		}
		if (func_807(iVar1))
		{
			MISC::SET_BIT(&uVar0, 23);
		}
		if (func_1076(iVar1))
		{
			MISC::SET_BIT(&uVar0, 24);
		}
		if (func_1075(iVar1))
		{
			MISC::SET_BIT(&uVar0, 25);
		}
		if (func_880(iVar1))
		{
			MISC::SET_BIT(&uVar0, 26);
		}
		if (func_1074(iVar1))
		{
			MISC::SET_BIT(&uVar0, 27);
		}
		if (func_839(iVar1))
		{
			MISC::SET_BIT(&uVar0, 28);
		}
		if (func_1073(iVar1))
		{
			MISC::SET_BIT(&uVar0, 29);
		}
	}
	return uVar0;
}

bool func_1073(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_443, 0);
}

int func_1074(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_270, 1);
	}
	return 0;
}

bool func_1075(int iParam0)
{
	return Global_2426097[iParam0 /*443*/].f_265;
}

int func_1076(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_393 != 0;
	}
	return 0;
}

bool func_1077(int iParam0)
{
	return func_1078(iParam0) != 0;
}

int func_1078(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_134;
}

int func_1079(int iParam0, int iParam1)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			return func_1082(iParam0);
		
		case 2:
			return func_1081(iParam0, 4);
		
		case 3:
			return func_1081(iParam0, 3);
		
		case 4:
			return func_1081(iParam0, 1);
		
		case 5:
			return func_1081(iParam0, 0);
		
		case 6:
			return func_1081(iParam0, 2);
		
		case 0:
			if (func_1088(iParam0) || func_1080(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1080(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1081(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] != 0)
		{
			iVar1 = Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/];
			if (func_659(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_1082(int iParam0)
{
	return func_653(iParam0) != 0;
}

int func_1083(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/] != 0)
		{
			if (func_538(Global_1590682[iParam0 /*883*/].f_274.f_106[iVar0 /*3*/]) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1084(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_57() && func_1327(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 25)
		{
			if (Global_1590682[iParam0 /*883*/].f_274[iVar0] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1085(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 < 1 || iParam1 > 10)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 126)
	{
		if (func_1087(iVar0) == iParam1 && (!func_1086(iVar0) || !bParam2))
		{
			if (func_1084(iParam0, iVar0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1086(int iParam0)
{
	switch (iParam0)
	{
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 1;
		
		default:
	}
	return 0;
}

int func_1087(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

int func_1088(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_264 != 0;
	}
	return 0;
}

int func_1089(int iParam0)
{
	if (func_245(iParam0) == 225 || func_245(iParam0) == 226)
	{
		return func_635(iParam0);
	}
	return -1;
}

var func_1090()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_765(PLAYER::PLAYER_ID(), iVar0))
		{
			MISC::SET_BIT(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_1091()
{
	if (!func_214())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312603.f_9)
	{
		return;
	}
	func_934();
}

void func_1092()
{
	if (func_34(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9)
	{
		case 0:
			func_1145();
			func_454();
			if (Local_122.f_214 == 2)
			{
				Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 2;
			}
			else if (Local_122.f_214 == 3)
			{
				Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_1093();
			func_454();
			if (Local_122.f_214 == 3)
			{
				Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_1222();
			break;
	}
}

void func_1093()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = Local_122.f_197 + 1;
	if (func_34(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_435();
	}
	if (!func_436())
	{
		if (!MISC::IS_BIT_SET(Local_392[iVar0 /*11*/].f_1, 14))
		{
			MISC::SET_BIT(&(Local_392[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_1143())
	{
		if (!MISC::IS_BIT_SET(Local_392[iVar0 /*11*/].f_1, 14))
		{
			MISC::SET_BIT(&(Local_392[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_122.f_2[0 /*10*/].f_2))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false))
			{
				return;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_392[iVar0 /*11*/].f_1, 14))
	{
		if (!func_1108(iVar1, NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			if (!MISC::IS_BIT_SET(iLocal_745, 13))
			{
				if (func_1106(PLAYER::PLAYER_ID(), iVar1))
				{
					MISC::SET_BIT(&iLocal_745, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
						if (func_1106(iVar3, iVar1))
						{
							if (!func_1101(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					func_1094();
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(Local_392[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_1094()
{
	func_1095();
}

void func_1095()
{
	int iVar0;
	
	if (func_1100(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_1099(PLAYER::PLAYER_ID());
		if (!func_1098(3, iVar0))
		{
			func_1096(3, iVar0);
		}
	}
}

void func_1096(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_1097(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_1678289.f_2426[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_1678289.f_2432[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_1678289.f_2438[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_1678289.f_3038[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_1678289.f_3044[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_1678289.f_3312[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_1678289.f_3318[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			MISC::SET_BIT(&(Global_1678289.f_3324[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			MISC::SET_BIT(&(Global_1678289.f_3344[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			MISC::SET_BIT(&(Global_1678289.f_3350[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			MISC::SET_BIT(&(Global_1678289.f_3050[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			MISC::SET_BIT(&(Global_1678289.f_3330[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			MISC::SET_BIT(&(Global_1678289.f_3336[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			MISC::SET_BIT(&(Global_1678289.f_3059[iVar0]), iVar1);
			return;
			break;
	}
}

void func_1097(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_1098(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_1097(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			return MISC::IS_BIT_SET(Global_1678289.f_2426[iVar0], iVar1);
			break;
		
		case 1:
			return MISC::IS_BIT_SET(Global_1678289.f_2432[iVar0], iVar1);
			break;
		
		case 2:
			return MISC::IS_BIT_SET(Global_1678289.f_2438[iVar0], iVar1);
			break;
		
		case 3:
			return MISC::IS_BIT_SET(Global_1678289.f_3038[iVar0], iVar1);
			break;
		
		case 4:
			return MISC::IS_BIT_SET(Global_1678289.f_3044[iVar0], iVar1);
			break;
		
		case 5:
			return MISC::IS_BIT_SET(Global_1678289.f_3312[iVar0], iVar1);
			break;
		
		case 6:
			return MISC::IS_BIT_SET(Global_1678289.f_3318[iVar0], iVar1);
			break;
		
		case 7:
			return MISC::IS_BIT_SET(Global_1678289.f_3324[iVar0], iVar1);
			break;
		
		case 8:
			return MISC::IS_BIT_SET(Global_1678289.f_3344[iVar0], iVar1);
			break;
		
		case 9:
			return MISC::IS_BIT_SET(Global_1678289.f_3350[iVar0], iVar1);
			break;
		
		case 10:
			return MISC::IS_BIT_SET(Global_1678289.f_3050[iVar0], iVar1);
			break;
		
		case 11:
			return MISC::IS_BIT_SET(Global_1678289.f_3330[iVar0], iVar1);
			break;
		
		case 12:
			return MISC::IS_BIT_SET(Global_1678289.f_3336[iVar0], iVar1);
			break;
		
		case 13:
			return MISC::IS_BIT_SET(Global_1678289.f_3059[iVar0], iVar1);
			break;
	}
	return 0;
}

int func_1099(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_2426097[iParam0 /*443*/].f_314.f_14;
	}
	return -1;
}

int func_1100(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_57() && (func_1327(iParam0, 1, 1) || Global_2405074.f_2673))
	{
		bVar0 = MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 1);
		return bVar0;
	}
	return 0;
}

bool func_1101(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1104(iParam1);
	return func_1102(iParam0, iVar0);
}

int func_1102(int iParam0, int iParam1)
{
	if (iParam0 != func_57() && func_1327(iParam0, 1, 1))
	{
		if (func_1100(iParam0))
		{
			if (func_1099(iParam0) == iParam1)
			{
				if (func_1103(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_1103(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 2);
}

int func_1104(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_1105(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 3;
			break;
		
		case 3:
			return 4;
			break;
		
		case 4:
			return 5;
			break;
		
		case 5:
			return 6;
			break;
		
		case 6:
			return 7;
			break;
		
		case 7:
			return 8;
			break;
		
		case 8:
			return 9;
			break;
		
		case 9:
			return 10;
			break;
		
		case 10:
			return 11;
			break;
		
		case 11:
			return 12;
			break;
		
		case 12:
			return 13;
			break;
		
		case 13:
			return 14;
			break;
		
		case 14:
			return 15;
			break;
		
		case 15:
			return 16;
			break;
		
		case 16:
			return 17;
			break;
		
		case 17:
			return 18;
			break;
		
		case 18:
			return 19;
			break;
		
		case 19:
			return 20;
			break;
		
		case 20:
			return 21;
			break;
		
		case 21:
			return 22;
			break;
	}
	return 0;
}

bool func_1106(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1104(iParam1);
	return func_1107(iParam0, iVar0);
}

int func_1107(int iParam0, int iParam1)
{
	if (iParam0 != func_57() && func_1327(iParam0, 1, 1))
	{
		if (func_1100(iParam0))
		{
			if (func_1099(iParam0) == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1108(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	iVar0 = func_1104(iParam0);
	if (func_1098(4, iVar0))
	{
		return 1;
	}
	else if (!func_1142(iVar0))
	{
		if (func_1141(iParam0, iParam1, &Var1, &uVar4))
		{
			func_1109(iVar0, 1, 1, Var1, uVar4, 0, 0, 0);
		}
		else
		{
			func_1109(iVar0, 1, 0, Var1, 0, 0, 0, 0);
		}
	}
	return 0;
}

int func_1109(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!func_1140(iParam0))
	{
		return 0;
	}
	bParam7 = true;
	if (func_1100(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!bParam7)
	{
		if (!(func_1139(iParam0) || func_1114(iParam0, 0, 1)))
		{
			func_1113(iParam0);
			return 0;
		}
	}
	else
	{
		func_1096(2, iParam0);
	}
	if (func_1098(0, iParam0))
	{
		return 0;
	}
	func_1096(0, iParam0);
	func_1112(4, iParam0);
	func_1111(iParam0);
	if (bParam2)
	{
		func_1096(1, iParam0);
		Global_1678289.f_2444[iParam0 /*3*/] = { Param3 };
		Global_1678289.f_2889[iParam0] = iParam6;
	}
	else
	{
		func_1112(1, iParam0);
		Global_1678289.f_2444[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1678289.f_2889[iParam0] = 0f;
	}
	if (bParam1)
	{
		func_1112(3, iParam0);
	}
	else
	{
		func_1096(3, iParam0);
	}
	func_1112(10, iParam0);
	if (bParam8)
	{
		func_1096(10, iParam0);
	}
	func_1112(13, iParam0);
	if (bParam9)
	{
		func_1096(13, iParam0);
	}
	func_1110(1, iParam0);
	return 1;
}

void func_1110(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314, 1))
		{
			MISC::SET_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314), 1);
			MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314), 2);
			Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_14 = iParam1;
			func_643(&(Global_1678289.f_3066), 0, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314), 1);
		func_1096(4, iParam1);
		Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_14 = -1;
		func_9(&(Global_1678289.f_3066));
	}
}

void func_1111(int iParam0)
{
	int iVar0;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (iVar0 != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
			{
				Global_1678289.f_3135 = iParam0;
				Global_1678289.f_3136 = iVar0;
				func_643(&(Global_1678289.f_3137), 0, 0);
				Global_1678289.f_3139 = 0;
			}
		}
	}
}

void func_1112(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_1097(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_1678289.f_2426[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(Global_1678289.f_2432[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(Global_1678289.f_2438[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			MISC::CLEAR_BIT(&(Global_1678289.f_3038[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_1678289.f_3044[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			MISC::CLEAR_BIT(&(Global_1678289.f_3312[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			MISC::CLEAR_BIT(&(Global_1678289.f_3318[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			MISC::CLEAR_BIT(&(Global_1678289.f_3324[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			MISC::CLEAR_BIT(&(Global_1678289.f_3344[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			MISC::CLEAR_BIT(&(Global_1678289.f_3350[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			MISC::CLEAR_BIT(&(Global_1678289.f_3050[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			MISC::CLEAR_BIT(&(Global_1678289.f_3330[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			MISC::CLEAR_BIT(&(Global_1678289.f_3336[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			MISC::CLEAR_BIT(&(Global_1678289.f_3059[iVar0]), iVar1);
			return;
			break;
	}
}

void func_1113(int iParam0)
{
	if (!func_1140(iParam0))
	{
		return;
	}
	func_1112(0, iParam0);
	func_1112(1, iParam0);
	func_1112(2, iParam0);
	func_1112(3, iParam0);
	func_1112(4, iParam0);
	func_1112(10, iParam0);
	Global_1678289.f_2444[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1678289.f_2889[iParam0] = 0f;
	if (Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_14 == iParam0)
	{
		Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314.f_14 = -1;
		MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314), 2);
		MISC::CLEAR_BIT(&(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314), 1);
	}
	if (MISC::IS_BIT_SET(Global_1678289.f_1, 22))
	{
		MISC::CLEAR_BIT(&(Global_1678289.f_1), 22);
	}
	MISC::CLEAR_BIT(&(Global_1678289.f_6), 9);
}

int func_1114(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if ((func_1327(PLAYER::PLAYER_ID(), 1, 1) || Global_2405074.f_2673) && (!func_1138() || func_1132()))
	{
		if (func_1130(iParam0))
		{
			return 0;
		}
		if (Global_1678289.f_3379 == iParam0)
		{
			return 0;
		}
		if (func_152(iParam0) == 5)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_1129())
				{
					if (MISC::IS_BIT_SET(Global_2426097[PLAYER::PLAYER_ID() /*443*/].f_314, 5))
					{
						return 1;
					}
				}
			}
			if (func_571(PLAYER::PLAYER_ID()))
			{
				if (func_1132())
				{
					return 1;
				}
			}
		}
		if (func_152(iParam0) == 4)
		{
			if (func_150(PLAYER::PLAYER_ID()) || (func_1128() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
			{
				if (func_1132())
				{
					if (func_1125(Global_1590519) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (func_152(iParam0) == 8)
		{
			if (func_567(PLAYER::PLAYER_ID()))
			{
				if (func_1132())
				{
					return 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (func_1129())
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_1327(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 1, 1))
						{
							if (MISC::IS_BIT_SET(Global_2426097[NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0) /*443*/].f_314, 5) && func_1124(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0)))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		if (func_152(iParam0) == 9)
		{
			if (func_151(PLAYER::PLAYER_ID()) || (func_1123() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
			{
				if (func_1132())
				{
					if (func_1121(func_1122(Global_1590524)) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (iParam0 == 122 && Global_2452907.f_6514)
		{
			return 0;
		}
		if (iParam2 && func_1116(iParam0))
		{
			return 1;
		}
		else if (iParam1 && func_1115(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1115(int iParam0)
{
	if (func_1142(iParam0))
	{
		return func_1098(2, iParam0);
	}
	return 0;
}

int func_1116(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 210;
	if (func_1117(iParam0))
	{
		iVar0 = 150;
	}
	Var1 = { Global_1678289.f_941[iParam0 /*3*/] };
	if (!func_39(Var1))
	{
		return MISC::GET_DISTANCE_BETWEEN_COORDS(func_52(PLAYER::PLAYER_ID()), Var1, true) <= IntToFloat(iVar0);
	}
	return 0;
}

int func_1117(int iParam0)
{
	if (func_1327(PLAYER::PLAYER_ID(), 1, 1))
	{
		switch (iParam0)
		{
			case 81:
				if (func_1120(PLAYER::PLAYER_ID()))
				{
					if (!func_1119(PLAYER::PLAYER_ID()))
					{
						return 1;
					}
				}
				break;
			
			case 117:
				if (func_1118(PLAYER::PLAYER_ID()))
				{
					if (!func_1119(PLAYER::PLAYER_ID()))
					{
						return 1;
					}
				}
				break;
			}
	}
	return 0;
}

int func_1118(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314.f_3, 4);
	}
	return 0;
}

int func_1119(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1327(iParam0, 1, 1))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == PLAYER::PLAYER_ID()) && func_1327(iParam0, 1, 0))
		{
			return Global_2426097[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_1120(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314, 6);
	}
	return 0;
}

int func_1121(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_152(iVar0) == 9)
		{
			if (func_172(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1122(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_271;
}

bool func_1123()
{
	return MISC::IS_BIT_SET(Global_1678289.f_2, 10);
}

int func_1124(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314.f_2, 7);
	}
	return 0;
}

int func_1125(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return -1;
	}
	iVar0 = func_653(iParam0);
	if (!iVar0 == 0)
	{
		return func_1126(iVar0);
	}
	return -1;
}

int func_1126(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_1127(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1127(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("MPSV_LP0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

bool func_1128()
{
	return MISC::IS_BIT_SET(Global_1678289, 17);
}

int func_1129()
{
	if (func_1327(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) != PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1130(int iParam0)
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_1131(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1131(int iParam0)
{
	if (Global_1678289.f_3397)
	{
		if (((((func_152(iParam0) == 6 || func_152(iParam0) == 10) || func_152(iParam0) == 9) || func_152(iParam0) == 14) || func_152(iParam0) == 17) || func_152(iParam0) == 11)
		{
			return 1;
		}
	}
	return 0;
}

int func_1132()
{
	if (func_1327(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (func_571(PLAYER::PLAYER_ID()))
		{
			if (Global_1590520 != func_57())
			{
				if (func_880(Global_1590520))
				{
					if ((func_1120(Global_1590520) && !func_1137()) && !func_1136())
					{
						return 1;
					}
				}
			}
		}
		else if (func_150(PLAYER::PLAYER_ID()) || (func_1128() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (Global_1590519 != func_57())
			{
				if (func_880(Global_1590519))
				{
					if ((func_1120(Global_1590519) && !func_1136()) && !func_1137())
					{
						return 1;
					}
				}
			}
		}
		else if (func_567(PLAYER::PLAYER_ID()))
		{
			if (Global_1590525 != func_57())
			{
				if (func_1074(Global_1590525))
				{
					if ((func_1135(Global_1590525) && !func_1134()) && !func_1133())
					{
						return 1;
					}
				}
			}
		}
		else if (func_151(PLAYER::PLAYER_ID()) || (func_1123() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (Global_1590524 != func_57())
			{
				if (func_1074(Global_1590524))
				{
					if ((func_1135(Global_1590524) && !func_1133()) && !func_1134())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_1133()
{
	return MISC::IS_BIT_SET(Global_1678289.f_2, 3);
}

bool func_1134()
{
	return MISC::IS_BIT_SET(Global_1678289.f_2, 4);
}

int func_1135(int iParam0)
{
	if (iParam0 != func_57())
	{
		return MISC::IS_BIT_SET(Global_2426097[iParam0 /*443*/].f_314.f_2, 6);
	}
	return 0;
}

bool func_1136()
{
	return MISC::IS_BIT_SET(Global_1678289, 30);
}

bool func_1137()
{
	return MISC::IS_BIT_SET(Global_1678289, 31);
}

bool func_1138()
{
	int iVar0;
	
	iVar0 = SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_smpl_interior_int"));
	return iVar0 > 0;
}

int func_1139(int iParam0)
{
	if ((NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(PLAYER::PLAYER_ID(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", iParam0, true, 0)) || func_1098(12, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_1140(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 148)
	{
		return 1;
	}
	return 0;
}

int func_1141(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_538(iParam0))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.3114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -4.3114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2.8114f, 5.8923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2.8114f, 4.3923f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -6.1997f, 8.7449f, 0.0001f };
					*uParam3 = 260f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -6.6f, 7.345f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -6.6f, 5.7449f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -6.1997f, 4.2449f, 0.0001f };
					*uParam3 = 280f;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -7.6002f, 5.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -7.6002f, 3.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -7.6002f, 1.7561f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -7.6002f, -0.2439f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_1142(int iParam0)
{
	return func_1098(0, iParam0);
}

int func_1143()
{
	if (MISC::IS_BIT_SET(iLocal_745, 13))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_1144(Local_122.f_197 + 1), true) > 100f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_1144(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!func_42(iParam0))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 1:
			Var0 = { 50.9205f, -2560.01f, 6f };
			break;
		
		case 2:
			Var0 = { -1074.852f, -1257.452f, 5.6938f };
			break;
		
		case 3:
			Var0 = { 901.936f, -1019.425f, 34.9666f };
			break;
		
		case 4:
			Var0 = { 253.9006f, -1955.933f, 22.9477f };
			break;
		
		case 5:
			Var0 = { -426.279f, 180.9043f, 80.6855f };
			break;
		
		case 6:
			Var0 = { -1050.36f, -2023.939f, 12.1616f };
			break;
		
		case 7:
			Var0 = { -1275.378f, -815.4295f, 17.1148f };
			break;
		
		case 8:
			Var0 = { -883.2906f, -2730.542f, 12.8285f };
			break;
		
		case 9:
			Var0 = { 269.6765f, -3016.279f, 5.7176f };
			break;
		
		case 10:
			Var0 = { 1561.402f, -2138.697f, 77.5275f };
			break;
		
		case 11:
			Var0 = { -303.7892f, -2698.39f, 6.0003f };
			break;
		
		case 12:
			Var0 = { 507.2061f, -649.5859f, 24.7512f };
			break;
		
		case 13:
			Var0 = { -525.8206f, -1775.87f, 21.3501f };
			break;
		
		case 14:
			Var0 = { -291.6372f, -1352.556f, 31.3146f };
			break;
		
		case 15:
			Var0 = { 348.6436f, 324.428f, 104.3185f };
			break;
		
		case 16:
			Var0 = { 922.0838f, -1561.299f, 29.7475f };
			break;
		
		case 17:
			Var0 = { 763.7448f, -885.2086f, 25.0869f };
			break;
		
		case 18:
			Var0 = { 1043.884f, -2172.603f, 30.471f };
			break;
		
		case 19:
			Var0 = { 1001.659f, -2511.88f, 28.302f };
			break;
		
		case 20:
			Var0 = { -263.138f, 194.3424f, 85.184f };
			break;
		
		case 21:
			Var0 = { 547.8112f, -1942.514f, 23.9851f };
			break;
		
		case 22:
			Var0 = { 88.9678f, -2216.882f, 6.0613f };
			break;
	}
	return Var0;
}

void func_1145()
{
	func_1174();
	func_943();
	func_1173();
	func_1170();
	func_928();
	func_1167();
	func_1151();
	func_1147();
	func_919();
	func_1146();
}

void func_1146()
{
}

void func_1147()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_436())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { func_1144(Local_122.f_197 + 1) };
	fVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0);
	if (fVar3 < 62500f)
	{
		if (!MISC::IS_BIT_SET(iLocal_745, 14))
		{
			func_227(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
			func_1148();
			MISC::SET_BIT(&iLocal_745, 14);
		}
	}
	else if (fVar3 > 250000f)
	{
		func_484();
	}
}

void func_1148()
{
	int iVar0;
	
	if (func_436())
	{
		return;
	}
	iVar0 = Local_122.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_1149(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216);
			func_1149(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			func_1149(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216);
			func_1149(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216);
			func_1149(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216);
			func_1149(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216);
			func_1149(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216);
			func_1149(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216);
			break;
		
		case 2:
			func_1149(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			func_1149(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216);
			func_1149(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216);
			func_1149(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216);
			func_1149(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216);
			func_1149(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216);
			func_1149(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216);
			func_1149(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216);
			break;
		
		case 3:
			func_1149(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216);
			func_1149(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			func_1149(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			func_1149(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			func_1149(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216);
			func_1149(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216);
			func_1149(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216);
			func_1149(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216);
			break;
		
		case 4:
			func_1149(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			func_1149(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			func_1149(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216);
			func_1149(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216);
			func_1149(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			func_1149(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216);
			func_1149(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216);
			func_1149(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216);
			break;
		
		case 5:
			func_1149(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			func_1149(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			func_1149(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			func_1149(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			func_1149(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			func_1149(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			func_1149(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			func_1149(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		
		case 6:
			func_1149(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216);
			func_1149(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216);
			func_1149(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216);
			func_1149(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216);
			func_1149(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216);
			func_1149(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216);
			func_1149(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216);
			func_1149(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216);
			break;
		
		case 7:
			func_1149(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			func_1149(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			func_1149(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			func_1149(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			func_1149(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			func_1149(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			func_1149(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			func_1149(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		
		case 8:
			func_1149(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216);
			func_1149(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216);
			func_1149(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216);
			func_1149(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216);
			func_1149(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216);
			func_1149(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			func_1149(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216);
			func_1149(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216);
			break;
		
		case 9:
			func_1149(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216);
			func_1149(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			func_1149(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216);
			func_1149(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216);
			func_1149(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216);
			func_1149(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216);
			func_1149(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216);
			func_1149(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216);
			break;
		
		case 10:
			func_1149(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216);
			func_1149(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216);
			func_1149(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			func_1149(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216);
			func_1149(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216);
			func_1149(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216);
			func_1149(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216);
			func_1149(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216);
			break;
		
		case 11:
			func_1149(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			func_1149(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216);
			func_1149(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216);
			func_1149(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216);
			func_1149(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216);
			func_1149(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			func_1149(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216);
			func_1149(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216);
			break;
		
		case 12:
			func_1149(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			func_1149(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			func_1149(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			func_1149(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			func_1149(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			func_1149(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			func_1149(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			func_1149(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		
		case 13:
			func_1149(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216);
			func_1149(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216);
			func_1149(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216);
			func_1149(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216);
			func_1149(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216);
			func_1149(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216);
			func_1149(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216);
			func_1149(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216);
			break;
		
		case 14:
			func_1149(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216);
			func_1149(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216);
			func_1149(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216);
			func_1149(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216);
			func_1149(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			func_1149(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216);
			func_1149(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216);
			func_1149(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216);
			break;
		
		case 15:
			func_1149(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			func_1149(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			func_1149(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			func_1149(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			func_1149(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			func_1149(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			func_1149(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			func_1149(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		
		case 16:
			func_1149(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216);
			func_1149(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216);
			func_1149(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216);
			func_1149(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216);
			func_1149(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216);
			func_1149(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216);
			func_1149(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216);
			func_1149(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		
		case 17:
			func_1149(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			func_1149(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			func_1149(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			func_1149(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			func_1149(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			func_1149(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			func_1149(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			func_1149(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		
		case 18:
			func_1149(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216);
			func_1149(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			func_1149(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			func_1149(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216);
			func_1149(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216);
			func_1149(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216);
			func_1149(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			func_1149(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216);
			break;
		
		case 19:
			func_1149(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			func_1149(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			func_1149(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216);
			func_1149(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216);
			func_1149(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216);
			func_1149(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216);
			func_1149(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216);
			func_1149(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216);
			break;
		
		case 20:
			func_1149(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			func_1149(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			func_1149(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			func_1149(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			func_1149(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			func_1149(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			func_1149(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			func_1149(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		
		case 21:
			func_1149(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216);
			func_1149(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216);
			func_1149(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216);
			func_1149(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216);
			func_1149(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216);
			func_1149(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216);
			func_1149(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216);
			func_1149(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216);
			break;
		
		case 22:
			func_1149(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216);
			func_1149(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216);
			func_1149(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216);
			func_1149(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216);
			func_1149(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216);
			func_1149(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216);
			func_1149(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216);
			func_1149(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_1149(struct<3> Param0, float fParam3, int iParam4)
{
	func_1150(Param0, fParam3, iParam4);
}

void func_1150(struct<3> Param0, var uParam3, var uParam4)
{
	if (!Global_2405074.f_1747)
	{
	}
	if (Global_2405074.f_708 < 100)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405074.f_708.f_1[Global_2405074.f_708 /*5*/] = { Param0 };
		Global_2405074.f_708.f_1[Global_2405074.f_708 /*5*/].f_3 = uParam3;
		Global_2405074.f_708.f_1[Global_2405074.f_708 /*5*/].f_4 = uParam4;
		Global_2405074.f_708++;
	}
}

void func_1151()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	if (!func_436())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 19))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_122.f_2[0 /*10*/].f_2))
			{
				VEHICLE::_0x7D6F9A3EF26136A0(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false, false);
				MISC::SET_BIT(&iLocal_745, 19);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_122.f_1, 8))
	{
		if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 9))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_122.f_2[0 /*10*/].f_2))
				{
					MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_122.f_1, 6))
	{
		if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 7))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), false) };
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var1) < 90000f)
				{
					MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_748 == -2)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_122.f_2[0 /*10*/].f_2))
			{
				if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 8))
				{
					if (func_1166(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2)))
					{
						MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 8);
					}
				}
				else if (!func_1166(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2)))
				{
					MISC::CLEAR_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 2) && !MISC::IS_BIT_SET(Local_122.f_1, 4))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			iVar0 = NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == iVar0)
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
								{
									MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
								}
							}
							else if (MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
							{
								MISC::CLEAR_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
							}
						}
						else if (MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
						{
							MISC::CLEAR_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
						}
					}
					else if (MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
					{
						MISC::CLEAR_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
					}
				}
				else if (MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 3))
				{
					MISC::CLEAR_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 3);
				}
			}
		}
	}
	iVar4 = func_57();
	iVar5 = func_57();
	if (iLocal_748 != Local_122.f_215)
	{
		if (!func_28())
		{
			if (!func_941())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_858))
				{
					HUD::REMOVE_BLIP(&iLocal_858);
				}
				if (Local_122.f_215 == NETWORK::PARTICIPANT_ID_TO_INT())
				{
					func_1165(1);
				}
				else if (Local_122.f_215 > -1)
				{
					iVar4 = func_1164();
					if (iVar4 != func_57())
					{
						if (func_662(1))
						{
							iVar5 = func_664();
							if (iVar5 != func_57())
							{
								if (func_348(iVar4, iVar5, 1))
								{
									func_479(iVar4, 478, 1, 0);
									func_478(iVar4, func_482(iLocal_859), 1, 0);
									func_1165(1);
								}
							}
						}
						func_1162("DCONTRA_TCKV", iVar4, 0, 0, 0, 1, 0);
					}
				}
				else if (Local_122.f_215 == -1)
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_856))
					{
						HUD::REMOVE_BLIP(&iLocal_856);
					}
					iVar4 = func_1161();
					if (iVar4 != func_57())
					{
						func_479(iVar4, 478, 0, 0);
						func_478(iVar4, func_482(iLocal_859), 0, 0);
					}
					func_1160(3, 1);
				}
				iLocal_748 = Local_122.f_215;
			}
			else
			{
				func_1160(1, 0);
			}
		}
	}
	func_1159();
	func_1157(0);
	func_1152();
}

void func_1152()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar0 = func_1164();
	Var1 = { func_40() };
	if (HUD::DOES_BLIP_EXIST(iLocal_856))
	{
		HUD::GET_HUD_COLOUR(12, &iVar4, &iVar5, &iVar6, &uVar7);
		GRAPHICS::DRAW_MARKER(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, iVar4, iVar5, iVar6, 100, false, false, 2, false, 0, 0, false);
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 2))
			{
				if (iVar0 == PLAYER::PLAYER_ID())
				{
					if (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar0)))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar0), Var1, 6f, 6f, 2f, false, true, 0))
						{
							func_1153(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), &uLocal_1028, 0, 1);
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2)))
							{
								VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2), true);
							}
							MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_1153(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_1155(iParam0, 1, 1, 0, 0, 0, 1, 0, 1))
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_1327(iVar1, 0, 1))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), iParam0, false))
					{
						func_1154(func_502(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = NETWORK::GET_NETWORK_TIME();
		}
	}
	else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
	else
	{
		if (bParam3)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam0, true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		if (bParam2)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
		}
		return 1;
	}
	return 0;
}

void func_1154(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = -1333236192;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = MISC::GET_FRAME_COUNT();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 9, iParam0);
	}
}

int func_1155(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_1156(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_57()) && func_1327(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_1156(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_1157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (func_2())
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_122.f_2[iParam0 /*10*/].f_2))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_858))
			{
				if (Local_122.f_216 > -1)
				{
					HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				else if (iLocal_748 == -2)
				{
					HUD::GET_HUD_COLOUR(6, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				else
				{
					HUD::GET_HUD_COLOUR(9, &iVar0, &iVar1, &iVar2, &uVar3);
				}
				func_1158(NETWORK::NET_TO_VEH(Local_122.f_2[iParam0 /*10*/].f_2), iVar0, iVar1, iVar2, 0);
			}
		}
	}
}

void func_1158(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	GRAPHICS::DRAW_MARKER(2, ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iParam1, iParam2, iParam3, 100, true, true, 2, false, 0, 0, false);
}

void func_1159()
{
	if (iLocal_748 == -2)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_858))
		{
			if (iLocal_749 != Local_122.f_222)
			{
				iLocal_749 = Local_122.f_222;
				HUD::SET_BLIP_ALPHA(iLocal_858, iLocal_749);
			}
		}
	}
	else if (iLocal_749 != 255)
	{
		iLocal_749 = 255;
	}
}

void func_1160(int iParam0, bool bParam1)
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_858))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_122.f_2[0 /*10*/].f_2))
			{
				iLocal_858 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_122.f_2[0 /*10*/].f_2));
				HUD::SET_BLIP_PRIORITY(iLocal_858, 12);
				HUD::SET_BLIP_SPRITE(iLocal_858, 478);
				HUD::SET_BLIP_COLOUR(iLocal_858, iParam0);
				if (bParam1)
				{
					HUD::SET_BLIP_ROUTE(iLocal_858, true);
				}
			}
		}
	}
}

int func_1161()
{
	int iVar0;
	
	iVar0 = func_57();
	if (iLocal_748 < 0)
	{
		return iVar0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iLocal_748)))
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iLocal_748);
	}
	return iVar0;
}

int func_1162(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_77785[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_623(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_604(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_604(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_718(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2515401 = { func_59(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515331, 35, &Global_2515401))
			{
				bVar18 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2515331.f_22), "Leader") && Global_2515331.f_30 == 0)
				{
					bVar18 = true;
				}
				if (Global_2515331.f_21 > 0)
				{
					bVar19 = false;
				}
				else
				{
					bVar19 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_1163(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515331, 35), &(Global_2515331.f_17), Global_2515331.f_30, bVar18, false, Global_2515331, &Var2, Global_1314053, Global_1314054, Global_1314055);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515331, 35), &(Global_2515331.f_17), Global_2515331.f_30, bVar18, false, Global_2515331, Global_1314053, Global_1314054, Global_1314055);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_714(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_1163(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_1164()
{
	int iVar0;
	
	iVar0 = func_57();
	if (Local_122.f_216 > -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_216)))
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(Local_122.f_216);
		}
	}
	return iVar0;
}

void func_1165(bool bParam0)
{
	struct<3> Var0;
	
	if (!HUD::DOES_BLIP_EXIST(iLocal_856))
	{
		Var0 = { func_40() };
		iLocal_856 = HUD::ADD_BLIP_FOR_COORD(Var0);
		if (bParam0)
		{
			HUD::SET_BLIP_ROUTE(iLocal_856, true);
		}
	}
}

int func_1166(int iParam0)
{
	struct<3> Var0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, false) < 50f)
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
	{
		if (CAM::IS_SPHERE_VISIBLE(Var0, 1f))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1167()
{
	int iVar0;
	
	if (!func_544())
	{
		if (func_456("DCONTRA_HLP1"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_456("DCONTRA_HLP2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_456("DCONTRA_HLPCR"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_456("DCONTRA_HLPVCR"))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	iVar0 = func_425(PLAYER::PLAYER_ID());
	if (iVar0 < 2)
	{
		if (func_456("DCONTRA_HLP1"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_456("DCONTRA_HLP2"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_456("DCONTRA_HLPVCR"))
		{
			HUD::CLEAR_HELP(true);
		}
		if (func_456("DCONTRA_HLPCR"))
		{
			HUD::CLEAR_HELP(true);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 1))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 2))
	{
		if (!func_1169(86))
		{
			if (func_1044(0, 1, 1, 1))
			{
				if (NETWORK::PARTICIPANT_ID_TO_INT() == Local_122.f_218)
				{
					if (func_436())
					{
						func_464("DCONTRA_HLP3", -1);
					}
					else
					{
						func_464("DCONTRA_HLP1", -1);
					}
					func_463(1);
					MISC::SET_BIT(&iLocal_745, 2);
				}
				else if (func_1209() == Local_122.f_218)
				{
					if (func_436())
					{
						func_464("DCONTRA_HLP4", -1);
					}
					else
					{
						func_464("DCONTRA_HLP2", -1);
					}
					func_463(1);
					MISC::SET_BIT(&iLocal_745, 2);
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_745, 8))
	{
		if (!func_436())
		{
			if (func_1044(0, 1, 1, 1))
			{
				if (func_654())
				{
					func_464("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_464("DCONTRA_HLPCR", -1);
				}
				func_463(1);
				MISC::SET_BIT(&iLocal_745, 8);
			}
		}
	}
	if (func_436())
	{
		if (MISC::IS_BIT_SET(iLocal_745, 2))
		{
			if (!MISC::IS_BIT_SET(iLocal_745, 4))
			{
				if (func_1044(0, 1, 1, 1))
				{
					func_1168("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_463(1);
					MISC::SET_BIT(&iLocal_745, 4);
					MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_1168(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam2);
}

bool func_1169(int iParam0)
{
	return Global_2440277.f_2834[0 /*80*/].f_1 == iParam0;
}

void func_1170()
{
	struct<3> Var0;
	
	if (!MISC::IS_BIT_SET(iLocal_745, 12))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { func_1171(func_1104(Local_122.f_197 + 1)) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var0, true) <= 200f)
			{
				iLocal_753 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_COORD(iLocal_753, "Bell_02", Var0, "ALARMS_SOUNDSET", false, 0, false);
				MISC::SET_BIT(&iLocal_745, 12);
			}
		}
	}
}

Vector3 func_1171(int iParam0)
{
	struct<3> Var0;
	
	func_1172(iParam0, &Var0);
	return Var0;
}

void func_1172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 54.191f, -2569.248f, 5.0046f };
			break;
		
		case 1:
			*uParam1 = { -1083.054f, -1261.893f, 4.534f };
			break;
		
		case 2:
			*uParam1 = { 896.3665f, -1035.749f, 34.1096f };
			break;
		
		case 3:
			*uParam1 = { 247.473f, -1956.943f, 22.1908f };
			break;
		
		case 4:
			*uParam1 = { -424.828f, 185.825f, 79.775f };
			break;
		
		case 5:
			*uParam1 = { -1042.482f, -2023.516f, 12.1616f };
			break;
		
		case 6:
			*uParam1 = { -1268.119f, -812.2741f, 16.1075f };
			break;
		
		case 7:
			*uParam1 = { -873.65f, -2735.948f, 12.9438f };
			break;
		
		case 8:
			*uParam1 = { 274.5224f, -3015.413f, 4.6993f };
			break;
		
		case 9:
			*uParam1 = { 1569.69f, -2129.792f, 77.3351f };
			break;
		
		case 10:
			*uParam1 = { -315.551f, -2698.654f, 6.5495f };
			break;
		
		case 11:
			*uParam1 = { 499.81f, -651.982f, 23.909f };
			break;
		
		case 12:
			*uParam1 = { -528.5296f, -1784.573f, 20.5853f };
			break;
		
		case 13:
			*uParam1 = { -295.8596f, -1353.238f, 30.3138f };
			break;
		
		case 14:
			*uParam1 = { 349.839f, 328.889f, 103.272f };
			break;
		
		case 15:
			*uParam1 = { 926.2818f, -1560.311f, 29.7404f };
			break;
		
		case 16:
			*uParam1 = { 759.566f, -909.466f, 24.244f };
			break;
		
		case 17:
			*uParam1 = { 1037.813f, -2173.062f, 30.5334f };
			break;
		
		case 18:
			*uParam1 = { 1019.116f, -2511.69f, 27.302f };
			break;
		
		case 19:
			*uParam1 = { -245.3405f, 203.3286f, 82.818f };
			break;
		
		case 20:
			*uParam1 = { 539.346f, -1945.682f, 23.984f };
			break;
		
		case 21:
			*uParam1 = { 96.1538f, -2216.4f, 5.1712f };
			break;
	}
}

void func_1173()
{
	struct<3> Var0;
	
	if (func_436())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_745, 1))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_122.f_1, 13))
	{
		if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0) < 22500f)
			{
				MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 11);
			}
		}
		if (func_544())
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_857))
			{
				iLocal_857 = HUD::ADD_BLIP_FOR_COORD(func_40());
				HUD::SET_BLIP_ROUTE(iLocal_857, true);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_857))
		{
			HUD::REMOVE_BLIP(&iLocal_857);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_857))
	{
		HUD::REMOVE_BLIP(&iLocal_857);
	}
}

void func_1174()
{
	if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1, 1))
	{
		if (!func_1208())
		{
			if (MISC::IS_BIT_SET(Local_122.f_1, 6))
			{
				func_252(1);
				MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_1), 1);
			}
		}
	}
}

void func_1175()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (func_28())
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		if (func_436())
		{
			if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2, iVar3))
			{
				if (!MISC::IS_BIT_SET(Local_122.f_206, iVar3))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (func_1209() == Local_122.f_218)
								{
									if (func_1182(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1)))
									{
										MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_2), iVar3);
									}
								}
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3, iVar3))
			{
				if (!MISC::IS_BIT_SET(Local_122.f_208, iVar3))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_2))
					{
						if (func_1181(iVar3))
						{
							MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_3), iVar3);
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4, iVar3))
			{
				if (!MISC::IS_BIT_SET(Local_122.f_207, iVar3))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
						{
							if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), true), 10f, true))
							{
								MISC::SET_BIT(&(Local_392[NETWORK::PARTICIPANT_ID_TO_INT() /*11*/].f_4), iVar3);
							}
						}
					}
				}
			}
		}
		if (func_544())
		{
			if (!func_436())
			{
				if (MISC::IS_BIT_SET(Local_122.f_1, 13))
				{
					func_1177(Local_122.f_2[iVar3 /*10*/].f_1, &(Local_764[iVar3 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
			{
				if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), false))
					{
						func_1177(Local_122.f_2[iVar3 /*10*/].f_1, &(Local_764[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
					}
				}
				else
				{
					func_1177(Local_122.f_2[iVar3 /*10*/].f_1, &(Local_764[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
				}
			}
		}
		switch (Local_122.f_2[iVar3 /*10*/].f_9)
		{
			case 1:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_2))
					{
						if (func_13(Local_122.f_2[iVar3 /*10*/].f_2))
						{
							if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_122.f_2[iVar3 /*10*/].f_2)))
								{
									iVar5 = NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1);
									if (func_27(&iVar5))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), -258271821) != 0)
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_122.f_2[iVar3 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
						{
							if (func_13(Local_122.f_2[iVar3 /*10*/].f_2))
							{
								if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_122.f_2[iVar3 /*10*/].f_2)))
									{
										if ((TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), -258271821) != 0) || MISC::IS_BIT_SET(Local_122.f_204, iVar3))
										{
											TASK::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), NETWORK::NET_TO_VEH(Local_122.f_2[iVar3 /*10*/].f_2), 30f, 786469);
											if (MISC::IS_BIT_SET(Local_122.f_204, iVar3))
											{
												MISC::CLEAR_BIT(&(Local_122.f_204), iVar3);
											}
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), -828834893);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_275(Local_122.f_2[iVar3 /*10*/].f_1))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), true);
								TASK::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), 0, 0);
							}
						}
					}
				}
				break;
			
			case 5:
				break;
			
			case 4:
				break;
			
			case 7:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), -1442466670);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_275(Local_122.f_2[iVar3 /*10*/].f_1))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), false);
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_122.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = TASK::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), 1120685857);
						if (iVar4 != 1 && iVar4 != 0)
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), false);
							Var0 = { func_205() };
							TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(NETWORK::NET_TO_PED(Local_122.f_2[iVar3 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		iVar3++;
	}
	func_1176();
}

void func_1176()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iLocal_1030 /*10*/].f_1))
	{
		if (!func_24(Local_122.f_2[iLocal_1030 /*10*/].f_1))
		{
			if (!MISC::IS_BIT_SET(iLocal_1029, iLocal_1030))
			{
				NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_122.f_2[iLocal_1030 /*10*/].f_1, true);
				MISC::SET_BIT(&iLocal_1029, iLocal_1030);
			}
		}
	}
	iLocal_1030++;
	if (iLocal_1030 == 10)
	{
		iLocal_1030 = 0;
	}
}

void func_1177(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_1180())
		{
			Global_2440277 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_1179(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2440277, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1179(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2440277, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_1178(iParam1);
	}
}

void func_1178(int* iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_1179(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == -1)
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
			}
			else
			{
				HUD::_SET_PED_HAS_AI_BLIP_WITH_COLOR(iParam0, true, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1180()
{
	return Global_1312872;
}

int func_1181(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_122.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_122.f_2[iParam0 /*10*/].f_2))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_122.f_2[iParam0 /*10*/].f_2), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_122.f_2[iParam0 /*10*/].f_2), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_1182(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_1183())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_1183()
{
	return Global_1574410;
}

int func_1184(bool bParam0)
{
	if (func_1187(1))
	{
		return 1;
	}
	if (Global_2540612.f_5188.f_41)
	{
		Global_2540612.f_5188.f_41 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_383() == func_57() || !func_1327(func_383(), 0, 1))
		{
			return 1;
		}
	}
	if (!func_562(PLAYER::PLAYER_ID()))
	{
		if (func_1185())
		{
			return 1;
		}
	}
	return 0;
}

int func_1185()
{
	if (func_155(PLAYER::PLAYER_ID()) && func_1186())
	{
		return 1;
	}
	if (func_546())
	{
		return 1;
	}
	return 0;
}

int func_1186()
{
	switch (func_152(func_153(PLAYER::PLAYER_ID())))
	{
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_1187(bool bParam0)
{
	bool bVar0;
	
	if (!func_662(1))
	{
		bVar0 = false;
		if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57 != func_57())
		{
			if (func_1327(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57, 0, 1))
			{
				if ((Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_24 == 4 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_24 == 8) || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_446(func_245(PLAYER::PLAYER_ID())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_485(31);
				if (func_461(func_245(PLAYER::PLAYER_ID())))
				{
					func_485(81);
				}
				if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57 != func_57() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57))
				{
					Global_1627096 = func_604(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57, -2, 0, 0, 0);
					if (!func_382(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57))
					{
						func_485(88);
					}
				}
				else
				{
					Global_1627096 = 1;
				}
				Global_1627080 = { Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_104 };
			}
			return 1;
		}
	}
	return 0;
}

void func_1188()
{
	if (!func_1189(PLAYER::PLAYER_ID()))
	{
		func_250(25);
	}
}

bool func_1189(int iParam0)
{
	return func_249(iParam0, 25);
}

void func_1190()
{
	int iVar0;
	
	iVar0 = func_319(PLAYER::PLAYER_ID());
	iLocal_859 = func_317(iVar0);
}

void func_1191(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 != iParam0)
	{
		func_1205(-1);
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 = iParam0;
		if (func_1204() != -1)
		{
			func_1203(-1);
		}
		if (func_1202() != -1)
		{
			func_1201(-1);
		}
		func_1200(iParam2);
		func_1198(iParam0);
		if (!func_259(iParam0))
		{
			fVar0 = func_258(iParam0);
			if (fVar0 != 1f)
			{
				func_255(fVar0);
				MISC::SET_BIT(&(Global_1676120.f_3), 1);
			}
		}
		if (!func_262(iParam0) || iParam3)
		{
			if (func_260(iParam0, iParam2) && iParam3 == 1)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				}
				MISC::SET_BIT(&(Global_1676120.f_3), 0);
			}
			else if (PLAYER::GET_MAX_WANTED_LEVEL() < 5)
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
			}
		}
		if (func_433())
		{
			func_250(27);
		}
		if (bParam1)
		{
			if (!func_427())
			{
				func_252(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((MISC::IS_BIT_SET(Global_2540612.f_4619, 1) || MISC::IS_BIT_SET(Global_2540612.f_4619, 4)) || MISC::IS_BIT_SET(Global_2540612.f_4619, 0))
			{
				func_485(6);
			}
			func_1197();
		}
		if (((iParam0 == 164 || iParam0 == 208) || iParam0 == 250) || iParam0 == 237)
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
		}
		if (func_273(PLAYER::PLAYER_ID()) && func_267(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1), 8);
		}
		func_1193();
		if (func_1192(iParam0))
		{
			MISC::ENABLE_DISPATCH_SERVICE(3, false);
			MISC::ENABLE_DISPATCH_SERVICE(5, false);
			MISC::SET_BIT(&(Global_1676120.f_3), 6);
		}
		Global_2540612.f_6650 = 0;
	}
}

int func_1192(int iParam0)
{
	switch (iParam0)
	{
		case 216:
		case 218:
		case 215:
		case 120:
		case 214:
		case 220:
		case 221:
		case 217:
		case 219:
			return 1;
		
		default:
	}
	return 0;
}

void func_1193()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = func_1196();
	iVar2 = func_58(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (func_348(iVar1, iVar2, 1) || func_1194(iVar1, PLAYER::PLAYER_ID()))
			{
				PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), iVar1, iVar3);
				PLAYER::_0x55FCC0C390620314(iVar1, PLAYER::PLAYER_ID(), iVar3);
			}
		}
		iVar0++;
	}
}

int func_1194(int iParam0, int iParam1)
{
	if (func_315(iParam0, 1) && func_315(iParam1, 1))
	{
		return (func_1195(iParam0) == func_58(iParam1) || func_1195(iParam1) == func_58(iParam0));
	}
	return 0;
}

int func_1195(int iParam0)
{
	if (func_315(iParam0, 1))
	{
		return Global_1630317[func_58(iParam0) /*595*/].f_11.f_457;
	}
	return func_57();
}

int func_1196()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_664();
	if (iVar0 != func_57())
	{
		if (func_1327(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return MISC::IS_BIT_SET(Global_1630317[iVar1 /*595*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1197()
{
	if (MISC::IS_BIT_SET(Global_2540612.f_4619, 1))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_4619), 1);
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_4619, 4))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_4619), 4);
	}
	if (MISC::IS_BIT_SET(Global_2540612.f_4619, 6))
	{
		MISC::CLEAR_BIT(&(Global_2540612.f_4619), 6);
	}
	MISC::CLEAR_BIT(&(Global_2540612.f_4619), 0);
	MISC::CLEAR_BIT(&(Global_2540612.f_4619), 2);
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_758 = 0;
	if (Global_2540612.f_4621 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(Global_2540612.f_4621);
	}
	Global_2540612.f_4620 = 0;
}

void func_1198(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_522(3792, -1, 0);
	iVar1 = func_1199(iParam0);
	if (iVar1 != -1)
	{
		MISC::SET_BIT(&iVar0, iVar1);
		func_521(3792, iVar0, -1, 1, 0);
	}
}

int func_1199(int iParam0)
{
	switch (iParam0)
	{
		case 170:
			return 0;
		
		case 166:
			return 1;
		
		case 171:
			return 2;
		
		case 172:
			return 3;
		
		case 173:
			return 4;
		
		case 214:
			return 5;
		
		case 215:
			return 6;
		
		case 216:
			return 7;
		
		case 217:
			return 8;
		
		case 218:
			return 9;
		
		case 219:
			return 10;
		
		case 220:
			return 11;
		
		case 221:
			return 12;
		
		default:
	}
	return -1;
}

void func_1200(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (Global_1630317[iVar0 /*595*/].f_11.f_181 != iParam0)
	{
		Global_1630317[iVar0 /*595*/].f_11.f_181 = iParam0;
	}
}

void func_1201(int iParam0)
{
	if (Global_2540612.f_5188.f_341 != iParam0)
	{
		Global_2540612.f_5188.f_341 = iParam0;
	}
}

int func_1202()
{
	return Global_2540612.f_5188.f_341;
}

void func_1203(int iParam0)
{
	if (Global_2540612.f_5188.f_340 != iParam0)
	{
		Global_2540612.f_5188.f_340 = iParam0;
	}
}

int func_1204()
{
	return Global_2540612.f_5188.f_340;
}

void func_1205(int iParam0)
{
	Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_32 = iParam0;
}

int func_1206()
{
	struct<4> Var0;
	int iVar4;
	
	if (Local_122.f_196 != -1)
	{
		return Local_122.f_196;
	}
	Var0 = { func_1207() };
	Local_122.f_198 = func_542(Var0);
	Local_122.f_197 = (Var0 - 1);
	if (Local_122.f_197 < 0)
	{
		Local_122.f_197 = 0;
	}
	if (Local_122.f_196 == -1)
	{
		iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
		if (iVar4 > 7)
		{
			Local_122.f_196 = 99;
		}
		else
		{
			Local_122.f_196 = 0;
		}
		if (Global_262145.f_15227 && Local_122.f_196 == 0)
		{
			Local_122.f_196 = 99;
		}
		else if (Global_262145.f_15226 && Local_122.f_196 == 99)
		{
			Local_122.f_196 = 0;
		}
	}
	return Local_122.f_196;
}

struct<4> func_1207()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_182;
}

int func_1208()
{
	int iVar0;
	
	iVar0 = func_1209();
	if (iVar0 > -1)
	{
		if (Local_122.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1209()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar1 = PLAYER::PLAYER_ID();
	if (func_34(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_435();
		iVar1 = Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_747;
	}
	if (Local_392[iVar0 /*11*/].f_10 != -1)
	{
		return Local_392[iVar0 /*11*/].f_10;
	}
	if (func_266(iVar1))
	{
		Local_392[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_122.f_218)
		{
			func_970(1);
		}
	}
	else if (func_315(iVar1, 1))
	{
		iVar2 = func_664();
		if (iVar2 != func_57())
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
			{
				Local_392[iVar0 /*11*/].f_10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
			}
		}
	}
	return Local_392[iVar0 /*11*/].f_10;
}

int func_1210()
{
	if (func_436())
	{
		if (!func_65())
		{
			return 0;
		}
	}
	return 1;
}

int func_1211()
{
	return Local_122;
}

int func_1212(int iParam0)
{
	return Local_392[iParam0 /*11*/];
}

int func_1213()
{
	var uVar0;
	
	func_1218(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_1217())
	{
		return 1;
	}
	if (Global_2464721)
	{
		return 1;
	}
	if (func_1216())
	{
		return 1;
	}
	if (func_1215(159))
	{
		if (!func_1214())
		{
			return 1;
		}
	}
	if (func_1215(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_256() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_256()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1214()
{
	return Global_2452015.f_696;
}

int func_1215(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1216()
{
	return Global_2462478;
}

bool func_1217()
{
	return Global_2452015.f_691;
}

void func_1218(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_1219(iVar0);
					break;
				
				case 1120313136:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1219(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_1327(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_1220(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_1220(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1221()
{
	SYSTEM::WAIT(0);
}

void func_1222()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (!func_34(PLAYER::PLAYER_ID(), 0))
	{
		if (MISC::IS_BIT_SET(iLocal_745, 18))
		{
			if (!MISC::IS_BIT_SET(iLocal_745, 6))
			{
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (func_1208() || func_434())
					{
						func_792(0, 4, 0, 0, -1, -1, -1, -1, -1, 0);
						MISC::SET_BIT(&iLocal_745, 6);
					}
				}
			}
			uVar0 = Local_122.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_122.f_197 + 1;
			iVar4 = Local_122.f_198;
			iVar5 = -1;
			bVar6 = !func_436();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_122.f_213;
			if (MISC::IS_BIT_SET(Local_122.f_1, 1) || MISC::IS_BIT_SET(Local_122.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (MISC::IS_BIT_SET(Local_122.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((MISC::IS_BIT_SET(Local_122.f_1, 3) || MISC::IS_BIT_SET(Local_122.f_1, 9)) || MISC::IS_BIT_SET(Local_122.f_1, 15)) || MISC::IS_BIT_SET(Local_122.f_1, 5))
			{
				iVar7 = 0;
			}
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1676129.f_2 = Local_122.f_267;
				Global_1676129.f_3 = Local_122.f_268;
				func_1268(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_484();
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_750)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_752);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			PED::REMOVE_SCENARIO_BLOCKING_AREA(Local_122.f_261, true);
		}
		func_481();
	}
	func_1267();
	if (Local_122.f_219 != -1)
	{
		if (MISC::IS_BIT_SET(iLocal_745, 5))
		{
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219)))
			{
				func_479(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 432, 0, 0);
				func_478(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 1, 0, 0);
				func_477(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 0, 0, 0);
				func_476(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), 0);
				func_473(PLAYER::INT_TO_PLAYERINDEX(Local_122.f_219), Global_262145.f_12363, 0, 0);
			}
		}
	}
	if (func_220(0))
	{
		func_219(0);
	}
	if (MISC::IS_BIT_SET(iLocal_746, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_746, 2))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		}
	}
	MISC::SET_BIT(&iLocal_746, 8);
	func_215();
	OBJECT::_0x78857FC65CADB909(true);
	func_970(0);
	func_1266(&(Local_122.f_269), 1);
	func_1224(1, 0);
	if (!func_34(PLAYER::PLAYER_ID(), 0))
	{
		PLAYER::SET_MAX_WANTED_LEVEL(5);
	}
	func_1223();
}

void func_1223()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1224(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1366969.f_1.f_108 != 0)
	{
		Global_1366969.f_1.f_108 = 0;
	}
	Global_1366969.f_1.f_109 = -1;
	Global_1366969.f_1.f_110 = -1;
	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 167 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 168)
	{
		func_1264();
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 4);
	}
	if ((func_641() && iParam1 != 0) && Global_262145.f_16989)
	{
		if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 190 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 192)
		{
			func_1246(PLAYER::PLAYER_ID(), iParam1, 1, 0);
		}
	}
	if (((Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 164 || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 208) || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 250) || Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 == 237)
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
	}
	if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 != -1)
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_33 = -1;
		if (!MISC::IS_BIT_SET(Global_1574656.f_1, 14) && !func_273(PLAYER::PLAYER_ID()))
		{
			func_252(0);
		}
	}
	else if (func_1244(PLAYER::PLAYER_ID()) != -1)
	{
		func_1205(-1);
	}
	func_1243(func_57());
	if (func_220(16))
	{
		func_219(16);
	}
	func_1240(0);
	func_1200(-1);
	func_1239();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1237(iVar0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(Global_1676120.f_3, 0))
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 0);
	}
	if (MISC::IS_BIT_SET(Global_1676120.f_3, 5))
	{
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 5);
	}
	iVar1 = func_468();
	if ((func_345(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_1236(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_444(iVar1))
	{
		func_1233(-1, 1);
	}
	else if (((((func_467(iVar1) || func_1232(iVar1)) || func_1231(iVar1)) || func_570(iVar1)) || func_568(iVar1)) || func_566(iVar1))
	{
	}
	else
	{
		func_1233(-1, 1);
	}
	func_248(19);
	func_248(20);
	func_248(21);
	func_248(22);
	func_248(27);
	func_219(3);
	func_219(4);
	func_219(7);
	func_1230();
	if (func_267(PLAYER::PLAYER_ID()))
	{
		func_970(0);
	}
	func_248(29);
	Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_57 = func_57();
	if (Global_2540612.f_5188.f_41 != 0)
	{
		Global_2540612.f_5188.f_41 = 0;
	}
	if (bParam0)
	{
		func_221();
	}
	if (!func_273(PLAYER::PLAYER_ID()))
	{
		func_247();
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 1);
	}
	if (MISC::IS_BIT_SET(Global_1676120.f_3, 6))
	{
		MISC::ENABLE_DISPATCH_SERVICE(3, true);
		MISC::ENABLE_DISPATCH_SERVICE(5, true);
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 6);
	}
	if (MISC::IS_BIT_SET(Global_1676120.f_3, 7))
	{
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 7);
	}
	if (MISC::IS_BIT_SET(Global_1676120.f_3, 8))
	{
		func_1229("IMPEXP_SELFDES", 0);
		func_1227("IMPEXP_SELFDES");
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 8);
	}
	func_1225(iVar1, 0);
}

void func_1225(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1676120.f_3, 9))
		{
			AUDIO::START_AUDIO_SCENE(func_1226(iParam0));
			MISC::SET_BIT(&(Global_1676120.f_3), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1676120.f_3, 9))
	{
		AUDIO::STOP_AUDIO_SCENE(func_1226(iParam0));
		MISC::CLEAR_BIT(&(Global_1676120.f_3), 9);
	}
}

char* func_1226(int iParam0)
{
	switch (iParam0)
	{
		case 219:
			return "DLC_IE_VIP_Velocity_Vehicle_Scene";
		
		case 221:
			return "DLC_IE_VIP_Stockpiling_Vehicle_Scene";
		
		case 220:
			return "DLC_IE_VIP_Ramped_Up_Vehicle_Scene";
		
		case 214:
			return "DLC_IE_VIP_Plowed_Vehicle_Scene";
		
		case 217:
			return "DLC_IE_VIP_Transporter_Vehicle_Scene";
		
		case 218:
			return "DLC_IE_VIP_Fortified_Vehicle_Scene";
		
		case 215:
			return "DLC_IE_VIP_Fully_Loaded_Vehicle_Scene";
		
		case 216:
			return "DLC_IE_VIP_Amphibious_Assault_Vehicle_Scene";
		
		default:
	}
	return "";
}

void func_1227(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_958();
					Global_111858.f_14137[iVar0 /*104*/].f_99[Global_19681] = 0;
					if (func_1228(iVar0))
					{
					}
					else
					{
						Global_111858.f_14137[iVar0 /*104*/].f_24 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111858.f_14137[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1228(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1229(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111858.f_14137[iVar0 /*104*/].f_24 = 1;
				if (Global_111858.f_14137[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111858.f_14047[0 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111858.f_14047[1 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111858.f_14047[2 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111858.f_14047[3 /*20*/].f_17 = 0;
					}
					Global_111858.f_14137[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111858.f_14137[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1230()
{
	if (func_1189(PLAYER::PLAYER_ID()))
	{
		func_248(25);
	}
}

int func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 178:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_1232(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1233(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_468();
	}
	if (iParam0 > 0)
	{
		if (func_664() != func_57())
		{
			if (func_563(PLAYER::PLAYER_ID()) == PLAYER::PLAYER_ID())
			{
				Global_2516845.f_93[func_1235(iParam0)] = 1;
			}
		}
		iVar0 = func_1235(159);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(157);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(148);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(164);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(142);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(152);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(166);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(170);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(173);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(179);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(200);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(201);
		if (func_1234(iVar0, Global_262145.f_12614, bParam1))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(182);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(183);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(185);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(186);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(180);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(195);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(197);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(198);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(207);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(208);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(209);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(214);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(215);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(216);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(217);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(218);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(219);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(220);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(221);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1234(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_249(PLAYER::PLAYER_ID(), 19) && !func_249(PLAYER::PLAYER_ID(), 20)) && !func_249(PLAYER::PLAYER_ID(), 9))
		{
			return 0;
		}
	}
	if (Global_2516845.f_93[iParam0] == 1 && func_11(&(Global_2516845[iParam0 /*2*/])))
	{
		if (func_629(&(Global_2516845[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2516845.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1235(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 11;
		
		case 157:
			return 12;
		
		case 148:
			return 13;
		
		case 164:
			return 14;
		
		case 142:
			return 15;
		
		case 152:
			return 16;
		
		case 163:
			return 17;
		
		case 155:
			return 18;
		
		case 160:
			return 19;
		
		case 153:
			return 20;
		
		case 162:
			return 21;
		
		case 154:
			return 22;
		
		case 166:
			return 8;
		
		case 170:
			return 9;
		
		case 173:
			return 10;
		
		case 171:
			return 23;
		
		case 172:
			return 24;
		
		case 179:
			return 25;
		
		case 189:
			return 26;
		
		case 193:
			return 27;
		
		case 194:
			return 28;
		
		case 199:
			return 29;
		
		case 201:
			return 30;
		
		case 200:
			return 31;
		
		case 205:
			return 32;
		
		case 210:
			return 33;
		
		case 182:
			return 34;
		
		case 183:
			return 35;
		
		case 185:
			return 36;
		
		case 186:
			return 37;
		
		case 180:
			return 38;
		
		case 195:
			return 39;
		
		case 197:
			return 40;
		
		case 198:
			return 41;
		
		case 207:
			return 42;
		
		case 208:
			return 43;
		
		case 209:
			return 44;
		
		case 211:
			return 45;
		
		case 214:
			return 0;
		
		case 215:
			return 1;
		
		case 216:
			return 2;
		
		case 217:
			return 3;
		
		case 218:
			return 4;
		
		case 219:
			return 5;
		
		case 220:
			return 6;
		
		case 221:
			return 7;
		
		default:
	}
	return -1;
}

void func_1236(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_468();
	}
	if (iParam0 > 0)
	{
		if (func_664() != func_57())
		{
			Global_2516845.f_93[func_1235(iParam0)] = 1;
		}
		iVar0 = func_1235(155);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(163);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(160);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(153);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(162);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(154);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(171);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(172);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(199);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(194);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(193);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(210);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(205);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(189);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1235(211);
		if (func_1234(iVar0, Global_262145.f_12615, 0))
		{
			func_9(&(Global_2516845[iVar0 /*2*/]));
			func_10(&(Global_2516845[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1237(int iParam0)
{
	if (!func_61(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_150[iParam0 /*3*/], func_1238(), 0))
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_150[iParam0 /*3*/] = { func_1238() };
	}
	if (!func_61(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_125[iParam0 /*3*/], func_1238(), 0))
	{
		Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_125[iParam0 /*3*/] = { func_1238() };
	}
}

Vector3 func_1238()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1239()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573907 = { Var0 };
	Global_1573907.f_13 = func_57();
	if (MISC::IS_BIT_SET(Global_1573344, 3))
	{
		MISC::CLEAR_BIT(&Global_1573344, 3);
	}
}

void func_1240(bool bParam0)
{
	if (bParam0)
	{
		if (!func_590(PLAYER::PLAYER_ID(), 14))
		{
			func_1242(14);
		}
	}
	else if (func_590(PLAYER::PLAYER_ID(), 14))
	{
		func_1241(14);
	}
}

void func_1241(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_5), iParam0);
}

void func_1242(int iParam0)
{
	MISC::SET_BIT(&(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_5), iParam0);
}

void func_1243(int iParam0)
{
	if (func_266(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::PLAYER_ID() != iParam0)
		{
			if (Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_457 != iParam0)
			{
				Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11.f_457 = iParam0;
				if (iParam0 != func_57())
				{
				}
			}
		}
	}
}

int func_1244(int iParam0)
{
	if (func_1245(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_32;
	}
	return -1;
}

int func_1245(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_32 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1246(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_765(iParam0, iParam1) && func_1263(iParam0, iParam1))
	{
		iVar0 = func_764(iParam0, iParam1);
		func_1250(iVar0, bParam2, bParam3);
		func_1247(iVar0, 1);
	}
}

void func_1247(int iParam0, bool bParam1)
{
	if (!func_1249(iParam0))
	{
		return;
	}
	func_749(func_1248(iParam0), bParam1, -1, 1);
	Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_6 = bParam1;
}

int func_1248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7628;
		
		case 1:
			return 7629;
		
		case 2:
			return 7630;
		
		case 3:
			return 7631;
		
		case 4:
			return 7632;
		
		case 5:
			return 15373;
		
		default:
	}
	return 7628;
}

bool func_1249(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 6);
}

void func_1250(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_1053(PLAYER::PLAYER_ID(), iParam0);
	if (!bParam1)
	{
		func_1262(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2515658[iParam0];
		iVar0 = func_1261(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1678140 = -1;
		}
		func_1260(iParam0, 0, bParam2);
	}
	else if (func_1258(iParam0, bParam2))
	{
		iVar0 = func_1257(iVar2, 0);
		iVar3 = func_891(PLAYER::PLAYER_ID(), iVar2);
		iVar4 = func_1256(iVar2, bParam2);
		iVar5 = func_1257(iVar2, bParam2);
		fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
		iVar0 = (iVar0 - SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1255(iVar2) && func_1254(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1262(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1253(PLAYER::PLAYER_ID(), iVar2) > 0)
		{
			func_1252(iParam0, (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 - (func_1256(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1257(iVar2, bParam2) / func_1253(PLAYER::PLAYER_ID(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1255(iVar2) && func_1254(PLAYER::PLAYER_ID(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1251(PLAYER::PLAYER_ID(), iVar2, iVar0, bParam2);
}

void func_1251(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return;
	}
	if (func_756(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1590682[iParam0 /*883*/].f_274.f_257 = iParam2;
				}
				else
				{
					Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1252(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_2)
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_183[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1253(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_756(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1254(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_756(iParam1) && func_1255(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/] == iParam1)
			{
				return Global_1590682[iParam0 /*883*/].f_274.f_183[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1255(int iParam0)
{
	return func_659(iParam0) == 5;
}

int func_1256(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_659(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16958;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16963;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16957;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16962;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16956;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16961;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16954;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16959;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16955;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16960;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_21084;
				if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21085;
				}
			}
			else
			{
				uVar0 = Global_262145.f_21068;
				if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
				{
					uVar0 = Global_262145.f_21069;
				}
			}
			break;
	}
	return uVar0;
}

int func_1257(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_659(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16939;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16948);
			}
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16953);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16940;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16947);
			}
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16952);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16941;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16946);
			}
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16951);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16942;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16944);
			}
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16949);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16943;
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16945);
			}
			if (func_763(PLAYER::PLAYER_ID(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16950);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_21081;
			}
			else
			{
			}
			{
				{
}