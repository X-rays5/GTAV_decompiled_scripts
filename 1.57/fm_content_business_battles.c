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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	float fLocal_91 = 0f;
	int iLocal_92[5] = { 0, 0, 0, 0, 0 };
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	struct<2> Local_108 = { 0, 0 } ;
	struct<2> Local_110[8];
	struct<2> Local_127 = { 0, 0 } ;
	struct<4> Local_129[8];
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	float fLocal_166 = 0f;
	int iLocal_167 = 0;
	int iLocal_168[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = -1;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	int iLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	struct<1793> Local_227 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 8, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 30, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 2, 1443296302, 5, -1, -1, -1, -1, -1, 0, -1, 1443296302, 5, -1, -1, -1, -1, -1, 0, -1, 0, 15, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, -1, 0, 23, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 2, -1, -1, 3, 15000, 5000, 1128792064, 0, 0, 1, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 0, 3, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 1, 0, 5, 0, 0, 0, 1073741824, 1119092736, -1, 12, 1065353216, 0, 12, 0, 0, 0, 1, -1056964608, 0, 1060320051, 1067450368, 0, -1, -1, 1, 1, 0, 0, 5, 1, -1, 3, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = -1;
	var uLocal_2025 = -1;
	var uLocal_2026 = 1;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = -1;
	var uLocal_2033 = -1;
	var uLocal_2034 = 1;
	var uLocal_2035 = 0;
	struct<541> Local_2036 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	struct<20> Local_2579 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_2599[5];
	struct<21> Local_2700[7];
	struct<19> Local_2848 = { 30, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2867 = 0;
	var uLocal_2868 = 1;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 5;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 1;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 5;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 1;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 5;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 1;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 5;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 1;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 5;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 1;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 5;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 1;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 5;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 1;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 5;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 1;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 5;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 1;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 5;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 1;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 5;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 1;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 5;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 1;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 5;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 1;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 5;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 1;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 5;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 1;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 5;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 1;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 5;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 1;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 5;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 1;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 5;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 1;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 5;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 1;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 5;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 1;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 5;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 1;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 5;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 1;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 5;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 1;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 5;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 1;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 5;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 1;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 5;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 1;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 5;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 1;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 5;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 2;
	var uLocal_3423 = 0;
	var uLocal_3424 = 5;
	var uLocal_3425 = -1;
	var uLocal_3426 = 6;
	var uLocal_3427 = -1;
	var uLocal_3428 = 0;
	var uLocal_3429 = -1;
	var uLocal_3430 = 0;
	var uLocal_3431 = -1;
	var uLocal_3432 = 0;
	var uLocal_3433 = -1;
	var uLocal_3434 = 0;
	var uLocal_3435 = -1;
	var uLocal_3436 = 0;
	var uLocal_3437 = -1;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = -1;
	var uLocal_3445 = 6;
	var uLocal_3446 = -1;
	var uLocal_3447 = 0;
	var uLocal_3448 = -1;
	var uLocal_3449 = 0;
	var uLocal_3450 = -1;
	var uLocal_3451 = 0;
	var uLocal_3452 = -1;
	var uLocal_3453 = 0;
	var uLocal_3454 = -1;
	var uLocal_3455 = 0;
	var uLocal_3456 = -1;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = -1;
	var uLocal_3464 = 6;
	var uLocal_3465 = -1;
	var uLocal_3466 = 0;
	var uLocal_3467 = -1;
	var uLocal_3468 = 0;
	var uLocal_3469 = -1;
	var uLocal_3470 = 0;
	var uLocal_3471 = -1;
	var uLocal_3472 = 0;
	var uLocal_3473 = -1;
	var uLocal_3474 = 0;
	var uLocal_3475 = -1;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = -1;
	var uLocal_3483 = 6;
	var uLocal_3484 = -1;
	var uLocal_3485 = 0;
	var uLocal_3486 = -1;
	var uLocal_3487 = 0;
	var uLocal_3488 = -1;
	var uLocal_3489 = 0;
	var uLocal_3490 = -1;
	var uLocal_3491 = 0;
	var uLocal_3492 = -1;
	var uLocal_3493 = 0;
	var uLocal_3494 = -1;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = -1;
	var uLocal_3502 = 6;
	var uLocal_3503 = -1;
	var uLocal_3504 = 0;
	var uLocal_3505 = -1;
	var uLocal_3506 = 0;
	var uLocal_3507 = -1;
	var uLocal_3508 = 0;
	var uLocal_3509 = -1;
	var uLocal_3510 = 0;
	var uLocal_3511 = -1;
	var uLocal_3512 = 0;
	var uLocal_3513 = -1;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 5;
	var uLocal_3522 = -1;
	var uLocal_3523 = 6;
	var uLocal_3524 = -1;
	var uLocal_3525 = 0;
	var uLocal_3526 = -1;
	var uLocal_3527 = 0;
	var uLocal_3528 = -1;
	var uLocal_3529 = 0;
	var uLocal_3530 = -1;
	var uLocal_3531 = 0;
	var uLocal_3532 = -1;
	var uLocal_3533 = 0;
	var uLocal_3534 = -1;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = -1;
	var uLocal_3542 = 6;
	var uLocal_3543 = -1;
	var uLocal_3544 = 0;
	var uLocal_3545 = -1;
	var uLocal_3546 = 0;
	var uLocal_3547 = -1;
	var uLocal_3548 = 0;
	var uLocal_3549 = -1;
	var uLocal_3550 = 0;
	var uLocal_3551 = -1;
	var uLocal_3552 = 0;
	var uLocal_3553 = -1;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = -1;
	var uLocal_3561 = 6;
	var uLocal_3562 = -1;
	var uLocal_3563 = 0;
	var uLocal_3564 = -1;
	var uLocal_3565 = 0;
	var uLocal_3566 = -1;
	var uLocal_3567 = 0;
	var uLocal_3568 = -1;
	var uLocal_3569 = 0;
	var uLocal_3570 = -1;
	var uLocal_3571 = 0;
	var uLocal_3572 = -1;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = -1;
	var uLocal_3580 = 6;
	var uLocal_3581 = -1;
	var uLocal_3582 = 0;
	var uLocal_3583 = -1;
	var uLocal_3584 = 0;
	var uLocal_3585 = -1;
	var uLocal_3586 = 0;
	var uLocal_3587 = -1;
	var uLocal_3588 = 0;
	var uLocal_3589 = -1;
	var uLocal_3590 = 0;
	var uLocal_3591 = -1;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = -1;
	var uLocal_3599 = 6;
	var uLocal_3600 = -1;
	var uLocal_3601 = 0;
	var uLocal_3602 = -1;
	var uLocal_3603 = 0;
	var uLocal_3604 = -1;
	var uLocal_3605 = 0;
	var uLocal_3606 = -1;
	var uLocal_3607 = 0;
	var uLocal_3608 = -1;
	var uLocal_3609 = 0;
	var uLocal_3610 = -1;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<7> Local_3633 = { 8, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 1203982208;
	var uLocal_3643 = 1203982208;
	var uLocal_3644 = 1203982208;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 1203982208;
	var uLocal_3650 = 1203982208;
	var uLocal_3651 = 1203982208;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 1203982208;
	var uLocal_3657 = 1203982208;
	var uLocal_3658 = 1203982208;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 1203982208;
	var uLocal_3664 = 1203982208;
	var uLocal_3665 = 1203982208;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 1203982208;
	var uLocal_3671 = 1203982208;
	var uLocal_3672 = 1203982208;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 1203982208;
	var uLocal_3678 = 1203982208;
	var uLocal_3679 = 1203982208;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 1203982208;
	var uLocal_3685 = 1203982208;
	var uLocal_3686 = 1203982208;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = -1;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697[23] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_3721[2];
	struct<2> Local_3726 = { 0, 0 } ;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	struct<6> Local_3730 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	struct<7> Local_3738 = { 0, -1, -1, 0, 0, 0, 0 } ;
	var uLocal_3745 = 0;
	int iLocal_3746 = 0;
	struct<2> Local_3747 = { -1, -1 } ;
	struct<11> Local_3749 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432 } ;
	int iLocal_3760[1] = { -1 };
	struct<16> Local_3762 = { 1, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<996> Local_3778 = { 0, 0, 0, 0, 0, 0, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1015222895, 1021665346, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, -1, 996499522, 1002740646, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1016296636, 220, 255, 255, 255, 255, 255, 255, 4096, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 1065353216, 0, 0, 1056964608, 1056964608, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0 } ;
	var uLocal_4774 = 1;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	struct<3> Local_4778[3];
	var uLocal_4788[6] = { -1, -1, -1, -1, -1, -1 };
	struct<4> Local_4795[1];
	struct<3> Local_4800 = { 1, 0, 3 } ;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	int iLocal_4806 = -1;
	struct<8> Local_4807 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_4815 = 0;
	struct<3> Local_4816 = { 1, 0, 1 } ;
	var uLocal_4819 = 0;
	var uLocal_4820 = -1;
	bool bLocal_4821 = 0;
	bool bLocal_4822 = 0;
	bool bLocal_4823 = 0;
	var uLocal_4824 = 0;
	int iLocal_4825 = 0;
	int iLocal_4826 = 0;
	int iLocal_4827 = 0;
	int iLocal_4828 = 0;
	struct<3> Local_4829 = { 0, 0, 0 } ;
	int iLocal_4832 = 0;
	int iLocal_4833 = 0;
	bool bLocal_4834 = 0;
	bool bLocal_4835 = 0;
	struct<2> Local_4836 = { -1, -1 } ;
	int iLocal_4838 = 0;
	int iLocal_4839 = 0;
	var uLocal_4840 = 3;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	int iLocal_4844 = 0;
	int iLocal_4845 = 0;
	var uLocal_4846 = 0;
	int iLocal_4847 = 0;
	int iLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	int iLocal_4851[2] = { 0, 0 };
	int iLocal_4854 = 0;
	float fLocal_4855 = 0f;
	float fLocal_4856 = 0f;
	float fLocal_4857 = 0f;
	float fLocal_4858 = 0f;
	float fLocal_4859 = 0f;
	int iLocal_4860 = 0;
	int iLocal_4861[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_4870[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	struct<16> Local_4884 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<1094> Local_4900 = { 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 23, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 2, 0, -1, -1, 1232348144, 1232348144, 0, -1, -1, 1232348144, 1232348144, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 3, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, -1, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, -1, -1000, 18 } ;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 1;
	var uLocal_6014 = 0;
	struct<206> Local_6015[32];
	int iLocal_12608 = 0;
	float fLocal_12609 = 0f;
	var uLocal_12610 = 0;
	var uLocal_12611 = 0;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	int iLocal_12614 = 0;
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
	fLocal_91 = 0f;
	fLocal_98 = 0f;
	fLocal_99 = 0f;
	fLocal_100 = 0f;
	fLocal_163 = 0.62f;
	fLocal_164 = 0.51f;
	fLocal_165 = 0.55f;
	fLocal_166 = 25f;
	iLocal_4844 = -1;
	iLocal_4845 = -1;
	iLocal_4848 = -1;
	fLocal_4855 = -1f;
	fLocal_4856 = 99999f;
	fLocal_4857 = 99999f;
	fLocal_4858 = 99999f;
	fLocal_4859 = 999999f;
	StringCopy(&Local_4884, unk_0x471C98FD94C0A5FD(), 64);
	Local_4884 = { Local_4884 };
	Local_2579 = { Local_2579 };
	func_3621(0);
	if (unk_0x02BFF15CAA701972())
	{
		if (bLocal_4821)
		{
			if (!func_3609(ScriptParam_0))
			{
				func_3547(0, 1);
				func_3481();
			}
		}
		else
		{
			func_3481();
		}
	}
	else
	{
		func_3547(0, 1);
		func_3481();
	}
	func_3479(&(Local_4900.f_1090));
	func_3342();
	while (true)
	{
		func_3341();
		if (func_3334())
		{
			func_3547(0, 1);
			func_3481();
		}
		if (func_3329())
		{
			func_3547(0, 1);
			func_3481();
		}
		if (Local_2036.f_91.f_4 != 0)
		{
			Call_Loc(Local_2036.f_91.f_4);
			if (StackVal)
			{
				func_3547(0, 1);
				func_3481();
			}
		}
		func_3621(1);
		switch (func_3328())
		{
			case 0:
				switch (func_3327())
				{
					case 1:
						if (func_3103())
						{
							func_3102(1);
						}
						break;
					
					case 2:
					case 3:
						func_3102(3);
						break;
				}
				break;
			
			case 1:
				func_3057();
				func_2098();
				func_2038();
				if (func_3327() != 1)
				{
					func_2035();
					if (Local_2036.f_91.f_5 != 0)
					{
						Call_Loc(Local_2036.f_91.f_5);
					}
					func_3102(func_3327());
				}
				break;
			
			case 2:
				func_3057();
				func_2038();
				func_1111();
				if (func_3327() > 2)
				{
					func_3547(func_1110(11), 0);
					func_3102(3);
				}
				break;
			
			case 3:
				func_3481();
				break;
		}
		if (bLocal_4823)
		{
			switch (func_3327())
			{
				case 0:
					if (func_515())
					{
						func_514(1);
					}
					break;
				
				case 1:
					if (func_513() == 0)
					{
						func_8();
					}
					else
					{
						func_514(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_514(3);
					}
					break;
				
				case 3:
					func_3481();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_2848.f_573++;
	if (Local_2848.f_573 >= Local_227.f_129)
	{
		Local_2848.f_573 = 0;
	}
}

int func_2()
{
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)
{
	return func_4(&(Local_4900.f_1038), iParam0);
}

bool func_4(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0x234B68AC2E35ED5A((*uParam0)[iVar1], iVar2);
}

int func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 18))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0, int iParam1)
{
	return func_4(&(Local_4900.f_2.f_26[iParam0 /*3*/]), iParam1);
}

int func_7()
{
	return Local_227.f_19;
}

void func_8()
{
	func_512();
	if (Local_2036.f_3 != 0)
	{
		Call_Loc(Local_2036.f_3);
	}
	func_460();
	func_186();
	func_168();
	func_40();
	func_34();
	func_26();
	func_25();
	func_22();
	func_14();
	func_9();
}

void func_9()
{
	if (!func_13())
	{
		return;
	}
	if (!func_11(func_12(), 0, 1) || !unk_0xFCC26BA7572E9F1F(func_12()))
	{
		func_10(2);
	}
}

void func_10(int iParam0)
{
	if (!bLocal_4823)
	{
		return;
	}
	Local_4900.f_1032 = iParam0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xCAD1755E530A6012(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2441237.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_12()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_35;
}

int func_13()
{
	return 0;
}

void func_14()
{
	if (func_21() == -1)
	{
		return;
	}
	if (Local_2036.f_72 == 0)
	{
		return;
	}
	Call_Loc(Local_2036.f_72);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_2036.f_72.f_1 != 0)
	{
		Call_Loc(Local_2036.f_72.f_1);
		if (StackVal)
		{
			func_20(&(Local_4900.f_1062), 0, 0);
			func_18(5);
		}
	}
	if (!func_17(&(Local_4900.f_1062)))
	{
		func_16(&(Local_4900.f_1062), 0, 0);
	}
	else if (func_17(&(Local_4900.f_1062)))
	{
		if (func_15(&(Local_4900.f_1062), func_21(), 0))
		{
			func_10(1);
		}
	}
}

int func_15(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_16(uParam0, bParam2, 0);
	if (unk_0x02BFF15CAA701972() && !bParam2)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x02BFF15CAA701972() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				*uParam0 = unk_0xCB3024ED32EBF9EC();
			}
		}
		else
		{
			*uParam0 = unk_0xDFB7BFA6482FEE1E();
		}
		uParam0->f_1 = 1;
	}
}

bool func_17(var uParam0)
{
	return uParam0->f_1;
}

void func_18(int iParam0)
{
	if (func_19(&(Local_4900.f_1038), iParam0))
	{
	}
}

int func_19(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!unk_0x234B68AC2E35ED5A((*uParam0)[iVar1], iVar2))
	{
		unk_0x191DDA30577F440A(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

void func_20(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x551F46B3C7DFB654();
		}
		else
		{
			*uParam0 = unk_0xCB3024ED32EBF9EC();
		}
	}
	else
	{
		*uParam0 = unk_0xDFB7BFA6482FEE1E();
	}
	uParam0->f_1 = 1;
}

int func_21()
{
	if (Local_227.f_1274 != -1)
	{
		return Local_227.f_1274 * 60 * 1000;
	}
	return Local_227.f_1274;
}

void func_22()
{
	int iVar0;
	
	if (func_24() == -1)
	{
		func_23(0);
		Call_Loc(Local_2599[func_24() /*20*/].f_17);
		return;
	}
	while ((func_24() < iLocal_4838 && iVar0 < Local_2599[func_24() /*20*/].f_19) && Local_2599[func_24() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_2599[func_24() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			Call_Loc(Local_2599[func_24() /*20*/].f_18);
			Local_4900.f_1036 = func_24();
			func_23(Local_2599[func_24() /*20*/].f_1[iVar0 /*3*/]);
			unk_0x191DDA30577F440A(&(Local_4900.f_1037), func_24());
			Call_Loc(Local_2599[func_24() /*20*/].f_17);
			return;
		}
		iVar0++;
	}
}

void func_23(int iParam0)
{
	if (!bLocal_4823)
	{
		return;
	}
	Local_4900.f_1035 = iParam0;
}

int func_24()
{
	return Local_4900.f_1035;
}

void func_25()
{
}

void func_26()
{
	if (func_32())
	{
		if (func_29())
		{
			if (func_17(&(Local_4900.f_984.f_11)))
			{
				func_28(&(Local_4900.f_984.f_11));
				func_27();
				Local_4900.f_984.f_13++;
			}
		}
	}
}

void func_27()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Local_4900.f_984[iVar0 /*5*/].f_3 = 999999f;
		Local_4900.f_984[iVar0 /*5*/].f_4 = 999999f;
		Local_4900.f_984[iVar0 /*5*/].f_1 = -1;
		iVar0++;
	}
}

void func_28(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_29()
{
	return (func_31() && func_30());
}

int func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!unk_0x234B68AC2E35ED5A(Local_4900.f_984.f_15, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_31()
{
	return Local_4900.f_984.f_16;
}

int func_32()
{
	if (func_33(13))
	{
		return 0;
	}
	return 1;
}

bool func_33(int iParam0)
{
	return func_4(&(Local_227.f_16), iParam0);
}

void func_34()
{
	if (!func_39())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_35(&(Local_4900.f_979), &(Local_4900.f_979.f_3)))
		{
			func_18(2);
		}
	}
}

int func_35(var uParam0, int iParam1)
{
	int iVar0[8];
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar10 = 0;
	while (iVar10 < 8)
	{
		if (func_38(iVar10))
		{
			iVar0[iVar9] = iVar10;
			iVar9++;
		}
		iVar10++;
	}
	if (iVar9 < func_7())
	{
		return 0;
	}
	iVar10 = 0;
	while (iVar10 < func_7())
	{
		if (func_37())
		{
			if (iVar10 > 0)
			{
				(*uParam0)[iVar10] = (*uParam0)[(iVar10 - 1)];
			}
			else
			{
				iVar11 = unk_0xB36B8558948EA7A8(0, iVar9);
				(*uParam0)[iVar10] = iVar0[iVar11];
				if (iVar0[iVar11] < 32)
				{
					unk_0x191DDA30577F440A(iParam1, iVar0[iVar11]);
				}
				if (iVar10 < (func_7() - 1))
				{
					func_36(&(iVar0[iVar11]), &(iVar0[(iVar9 - 1)]));
					iVar9 = (iVar9 - 1);
				}
			}
			iVar10++;
			return 1;
		}

void func_36(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_37()
{
	return 0;
}

int func_38(int iParam0)
{
	return 0;
}

int func_39()
{
	return 0;
}

void func_40()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	func_167(&iVar5);
	iVar6 = 0;
	while (iVar6 < Local_227.f_129)
	{
		func_166(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_2036.f_139.f_145 != 0)
			{
				Stack.Push(iVar6);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_2036.f_139.f_145);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_165(iVar6, 6);
				}
				else if (bVar3)
				{
					func_165(iVar6, 6);
				}
				else if (func_144(iVar6, iVar0))
				{
					func_165(iVar6, 6);
				}
				else
				{
					func_143(&iVar5, iVar6);
				}
			}
		}
		else
		{
			func_143(&iVar5, iVar6);
		}
		switch (iVar4)
		{
			case 0:
				if (func_139(iVar6))
				{
					func_165(iVar6, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_136(iVar6))
					{
						func_165(iVar6, 2);
					}
				}
				else
				{
					func_135(&(Local_4900.f_110[iVar6 /*22*/]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_124(iVar6))
					{
						if (func_79(iVar6))
						{
							func_165(iVar6, 3);
							func_78(iVar6);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (func_77(iVar6, iVar0))
					{
						func_165(iVar6, 6);
						break;
					}
					if (!bVar3)
					{
						func_58(iVar6);
						func_53(iVar6, iVar0, 1);
						if (func_52(iVar6))
						{
							func_165(iVar6, 4);
						}
					}
				}
				break;
			
			case 6:
				func_51(iVar6, 8);
				if (bVar2)
				{
					if (func_77(iVar6, iVar0))
					{
						break;
					}
					if (func_52(iVar6))
					{
						func_165(iVar6, 4);
					}
				}
				if (func_50())
				{
					func_135(&(Local_4900.f_110[iVar6 /*22*/]));
				}
				if (func_43(iVar6))
				{
					func_135(&(Local_4900.f_110[iVar6 /*22*/]));
					func_165(iVar6, 1);
				}
				if (func_513() == 0)
				{
					if (func_42(iVar6, 0))
					{
						func_10(9);
					}
				}
				break;
			
			case 4:
				if (!func_42(iVar6, 14) && !unk_0xDC89C3FDCADCA32F(iVar0))
				{
					func_51(iVar6, 26);
					func_165(iVar6, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar6++;
	}
	func_41(&iVar5);
	iVar6 = Local_2848.f_573;
	func_166(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_53(iVar6, iVar0, 0);
				}
			}
			break;
	}
}

void func_41(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x234B68AC2E35ED5A(*iParam0, iVar0))
		{
			if (!unk_0x234B68AC2E35ED5A(Local_4900.f_984.f_15, iVar0))
			{
				unk_0x191DDA30577F440A(&(Local_4900.f_984.f_15), iVar0);
			}
		}
		else if (unk_0x234B68AC2E35ED5A(Local_4900.f_984.f_15, iVar0))
		{
			unk_0xC664C0067EEAB8D1(&(Local_4900.f_984.f_15), iVar0);
		}
		iVar0++;
	}
}

bool func_42(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_129.f_1[iParam0 /*21*/]), iParam1);
}

int func_43(int iParam0)
{
	if (func_513() != 0)
	{
		return 0;
	}
	if (func_49(iParam0, 19))
	{
		return func_44(Local_227.f_129.f_1[iParam0 /*21*/].f_8);
	}
	if (func_42(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_139.f_134);
		return StackVal;
	}
	return 0;
}

int func_44(int iParam0)
{
	if (func_50())
	{
		return 0;
	}
	if (func_47())
	{
		return 0;
	}
	if (!func_45(iParam0))
	{
		return 0;
	}
	if (func_32() && !func_29())
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = func_46(1, iParam0);
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Local_4900.f_984.f_15, iVar0);
	}
	return 0;
}

int func_46(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Local_227.f_1282[iVar0] == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		
		case 0:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (Local_227.f_1282[iVar0] == Local_227.f_129.f_1[iParam1 /*21*/].f_8)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
	}
	return -1;
}

bool func_47()
{
	return Local_4900.f_984.f_13 >= func_48();
}

int func_48()
{
	return Local_4900.f_984.f_14;
}

bool func_49(int iParam0, int iParam1)
{
	return func_4(&(Local_4900.f_110[iParam0 /*22*/].f_3), iParam1);
}

int func_50()
{
	if (func_1110(58))
	{
		Stack.Push(Local_2036.f_466.f_8 != 0);
		Call_Loc(Local_2036.f_466.f_8);
		if (StackVal && StackVal)
		{
			return 1;
		}
	}
	return 0;
}

void func_51(int iParam0, int iParam1)
{
	if (func_19(&(Local_4900.f_110[iParam0 /*22*/].f_3), iParam1))
	{
	}
}

int func_52(int iParam0)
{
	if (Local_2036.f_139.f_133 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_139.f_133);
		return StackVal;
	}
	return 0;
}

void func_53(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_57(iParam0);
	if (func_56(iParam0) == -1)
	{
		func_55(iParam0, 0);
		if (Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14);
		}
		return;
	}
	if (func_54(Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/]) != iParam2)
	{
		return;
	}
	if (Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_17 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_17);
	}
	while ((func_56(iParam0) < Local_2848.f_574[iVar0 /*97*/] && iVar1 < Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_18) && Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_15 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_15);
			}
			func_55(iParam0, Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_1[iVar1 /*2*/]);
			if (Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_2848.f_574[iVar0 /*97*/].f_1[func_56(iParam0) /*19*/].f_14);
			}
			return;
		}
		iVar1++;
	}
}

int func_54(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

void func_55(int iParam0, int iParam1)
{
	if (!bLocal_4823)
	{
		return;
	}
	Local_4900.f_110[iParam0 /*22*/].f_2 = iParam1;
}

int func_56(int iParam0)
{
	return Local_4900.f_110[iParam0 /*22*/].f_2;
}

int func_57(int iParam0)
{
	if (func_4(&(Local_4900.f_110[iParam0 /*22*/].f_3), 19))
	{
		return 1;
	}
	if (Local_2036.f_139.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_139.f_1);
		return StackVal;
	}
	return 0;
}

void func_58(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_75(iParam0))
	{
		return;
	}
	iVar0 = Local_227.f_129.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < Local_2848[iParam0 /*19*/].f_16)
	{
		if (Local_2848[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_2848[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				unk_0x191DDA30577F440A(&(Local_4900.f_978), iVar0);
				if (Local_2036.f_139.f_137 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(iVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_2036.f_139.f_137);
				}
				func_59(iParam0);
			}
		}
		iVar1++;
	}
}

void func_59(int iParam0)
{
	if (func_33(28))
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_4900.f_110[iParam0 /*22*/]))
	{
		if (func_74(unk_0x8A437068C87289B7(Local_4900.f_110[iParam0 /*22*/])))
		{
			func_60(func_72(), 1, 0);
		}
	}
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	if (func_70(1))
	{
		func_62(Local_4836, func_63(1), iParam0, iParam1, iParam2);
	}
	else
	{
		func_62(Local_4836, func_61(iLocal_4825), iParam0, iParam1, iParam2);
	}
}

int func_61(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

void func_62(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	struct<7> Var0;
	
	Var0 = -257186027;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = unk_0x666C16A4ED8F3098();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 7, iParam1);
	}
}

int func_63(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_70(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar3 = unk_0xC502CD39B4994F3A(iVar1);
			if (func_11(iVar3, 0, 0))
			{
				if (func_68())
				{
					if (func_66(iVar3, unk_0x1146A9AE09CE2B14(), bParam0))
					{
						unk_0x191DDA30577F440A(&uVar0, iVar3);
					}
				}
				else
				{
					iVar2 = func_65();
					if (iVar2 != func_64())
					{
						if (func_66(iVar3, iVar2, bParam0))
						{
							unk_0x191DDA30577F440A(&uVar0, iVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

int func_64()
{
	return -1;
}

int func_65()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

int func_66(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_64())
	{
		if (!bParam2)
		{
			if (func_67(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_64())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1)
{
	if (iParam1 != func_64())
	{
		if (iParam0 != func_64())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_64())
			{
				if (Global_1630816[iParam0 /*597*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_68()
{
	return func_69(unk_0x1146A9AE09CE2B14());
}

int func_69(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_64())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_70(bool bParam0)
{
	return func_71(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_71(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_69(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_64();
}

int func_72()
{
	int iVar0;
	
	iVar0 = func_73();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_73()
{
	Call_Loc(Local_2036.f_55);
	return StackVal;
}

int func_74(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if ((unk_0x017139B13A2573C8(iParam0) == 6 || unk_0x017139B13A2573C8(iParam0) == 29) || unk_0x017139B13A2573C8(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

bool func_75(int iParam0)
{
	return func_76(Local_227.f_129.f_1[iParam0 /*21*/].f_14);
}

bool func_76(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Local_4900.f_978, iParam0);
}

int func_77(int iParam0, int iParam1)
{
	Stack.Push(Local_2036.f_139.f_154 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_2036.f_139.f_154);
	if (StackVal && StackVal)
	{
		if (Local_2036.f_139.f_153 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_2036.f_139.f_153);
		}
		func_135(&(Local_4900.f_110[iParam0 /*22*/]));
		return 1;
	}
	return 0;
}

void func_78(int iParam0)
{
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	func_123(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_2036.f_139.f_139);
	iVar0 = StackVal;
	if (func_122(iVar0))
	{
		iVar1 = Local_227.f_129.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (func_121(Local_4900.f_771[iVar1 /*6*/]))
			{
				if (func_120(&(Local_4900.f_110[iParam0 /*22*/]), Local_4900.f_771[iVar1 /*6*/], 26, iVar0, Local_227.f_129.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_99(iParam0);
					unk_0x824F744352C8BC82(iVar0);
					func_98();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_2036.f_139.f_140);
			Var2 = { StackVal, StackVal, StackVal };
			if (!func_97(Var2))
			{
				if (!func_96(iParam0) || func_81(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_4900.f_110[iParam0 /*22*/]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(Var2);
					Stack.Push(iParam0);
					Call_Loc(Local_2036.f_139.f_141);
					if (func_80(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_99(iParam0);
						func_98();
						unk_0x824F744352C8BC82(iVar0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_80(var uParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	iVar0 = unk_0x0FDCFECB2EF2BC1C(uParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x818C6D67AB3F266B(iVar0);
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(iVar0, iParam9);
		if (unk_0x895470BB92940DC6(iVar0))
		{
			if (bParam7)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_81(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405077.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x4B1BAFAB7E8F4DA7(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x95F3ABD15748A3D6(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x95F3ABD15748A3D6(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x091D6114DC63264E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam13)
	{
		if (unk_0x1009A332C2986B7C(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (fParam14 > 0f)
	{
		if (func_90(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_82(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_82(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_11(unk_0x1146A9AE09CE2B14(), 1, 1))
		{
			if (!unk_0x8B6A925F148E0E94())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x0BABEFEA577FCFA4(func_87(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x3D6C3476988DE6E1(Param0, fParam3))
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
		if (func_11(iVar1, 1, 1))
		{
			if (!func_84(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_83(iVar1) || !bParam10) && !Global_2426865[iVar1 /*449*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))) || unk_0x7C3E030BC3ED6671(iVar1) == -1)
							{
								if (unk_0x0BABEFEA577FCFA4(func_87(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x7C3E030BC3ED6671(iVar1) != iParam8 || unk_0x7C3E030BC3ED6671(iVar1) == -1)
						{
							if (unk_0x0BABEFEA577FCFA4(func_87(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xD9A82F3AB1350294(iVar1, Param0, fParam3))
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

int func_83(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_84(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_85(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590908[iParam0 /*874*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x8CFC2F41A749E236(iParam0))
		{
			bVar0 = unk_0x7C3E030BC3ED6671(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_85(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_86();
	}
	if (Global_1312882[iVar1] == 1)
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

int func_86()
{
	return Global_1312763;
}

Vector3 func_87(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_89() && Global_1590908[iVar0 /*874*/].f_844) && !func_97(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_88(iParam0);
}

Vector3 func_88(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

bool func_89()
{
	return Global_2453009.f_19;
}

int func_90(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam8 == 0)
		{
			if (func_11(iVar1, bParam4, bParam5))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam7 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_83(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam9) && bParam6) && func_91(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								if (unk_0x0BABEFEA577FCFA4(func_88(iVar1), Param0, 1) < fParam3)
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

int func_91(int iParam0)
{
	if (func_95(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_94(iParam0) };
	if (unk_0x9B050CE2036A4DAD(&Global_2518253))
	{
		return 1;
	}
	if (func_92(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_93(iParam0);
	if (!iVar0 == func_64())
	{
		if (iVar0 == func_93(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (iParam0 != func_64())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_64();
}

struct<13> func_94(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_95(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_94(iParam0) };
		Global_2518266 = { func_94(iParam1) };
		if (unk_0xDA1611E46AAEA71B(&Global_2518253))
		{
			if (unk_0xDA1611E46AAEA71B(&Global_2518266))
			{
				unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253);
				unk_0xEDDAF8F99F371228(&Global_2518218, 35, &Global_2518266);
				if (Global_2518183 == Global_2518218)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0)
{
	if (func_42(iParam0, 10) && func_49(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

int func_97(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_98()
{
	if (Local_4900.f_1049 != -1)
	{
		Local_4900.f_1068 = { 0f, 0f, 0f };
		Local_4900.f_1077 = 0f;
		iLocal_4847 = 0;
		Local_4900.f_1034 = -1;
		Local_4900.f_1049 = -1;
	}
}

void func_99(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x8A437068C87289B7(Local_4900.f_110[iParam0 /*22*/]);
	bVar1 = func_49(iParam0, 19);
	func_114(iParam0, iVar0);
	if (bVar1)
	{
		func_112(iParam0, iVar0);
	}
	else
	{
		func_105(iParam0, iVar0);
	}
	if (Local_2036.f_139.f_143 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_2036.f_139.f_143);
	}
	if (func_42(iParam0, 5))
	{
		if (!unk_0xC49311A2A500FF09(iVar0, 0))
		{
			unk_0xA2C015B68CE01357(iVar0, true);
		}
		unk_0xC595907BB71C921D(iVar0, 101, 0);
		func_100(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_100(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (Local_227.f_129.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, -5f, 0f) };
				Var3 = { unk_0x885F3A431ECE75E3(iParam0, 31086, 0f, 0f, 0f) };
				unk_0xF79020AE00268B91(Var0, Var3, 25, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
				unk_0xF79020AE00268B91(Var3, Var0, 25, 1, joaat("weapon_assaultshotgun"), 0, 1, 1, -1082130432);
			}
			if (bParam3)
			{
				unk_0x7B28A83A0D3DD0F9(iParam0, 227, bParam2);
			}
			unk_0x7B28A83A0D3DD0F9(iParam0, 115, bParam3);
		}
		else
		{
			Var6 = { unk_0xD6E677FAD7521410(iParam0, 0) };
			func_103(Var6, &Var9, &Var12, 0);
			unk_0xF79020AE00268B91(Var9, Var12, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
			if (bParam3)
			{
				unk_0x7B28A83A0D3DD0F9(iParam0, 227, bParam2);
			}
			unk_0x7B28A83A0D3DD0F9(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_101(iParam0, -1, 0);
		}
	}
}

void func_101(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0xB36B8558948EA7A8(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_102(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_102(iVar0, iParam0);
	}
}

void func_102(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF8CB06E00EDBA43B(uParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			unk_0xF8CB06E00EDBA43B(uParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			unk_0xF8CB06E00EDBA43B(uParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			unk_0xF8CB06E00EDBA43B(uParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			unk_0xF8CB06E00EDBA43B(uParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			unk_0xF8CB06E00EDBA43B(uParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			unk_0xF8CB06E00EDBA43B(uParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			unk_0xF8CB06E00EDBA43B(uParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			unk_0xF8CB06E00EDBA43B(uParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			unk_0xF8CB06E00EDBA43B(uParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			unk_0xF8CB06E00EDBA43B(uParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
			break;
		
		case 11:
			unk_0x6C8A8DADCB013067(uParam1, 1, 0.49f, 0.5f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0x6C8A8DADCB013067(uParam1, 1, 0.48f, 0.55f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0x6C8A8DADCB013067(uParam1, 1, 0.5f, 0.56f, 0f, 0.025f, 0, 0f, "BulletLarge");
			unk_0x6C8A8DADCB013067(uParam1, 0, 0.726f, 0.789f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x6C8A8DADCB013067(uParam1, 0, 0.724f, 0.799f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x6C8A8DADCB013067(uParam1, 0, 0.737f, 0.723f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x6C8A8DADCB013067(uParam1, 0, 0.726f, 0.753f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x6C8A8DADCB013067(uParam1, 0, 0.726f, 0.76f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x6C8A8DADCB013067(uParam1, 0, 0.736f, 0.802f, 0f, 0.019f, 0, 140f, "BulletSmall");
			unk_0x6C8A8DADCB013067(uParam1, 0, 0.715f, 0.806f, 0f, 0.019f, 0, 140f, "BulletSmall");
			break;
		
		case 12:
			unk_0x6C8A8DADCB013067(uParam1, 3, 0.401f, 0.1f, 0f, 1f, 0, 0f, "BulletLarge");
			unk_0x6C8A8DADCB013067(uParam1, 3, 0.514f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			unk_0x6C8A8DADCB013067(uParam1, 3, 0.62f, 0.13f, 0f, 1f, 0, 0f, "BulletLarge");
			break;
	}
}

void func_103(struct<3> Param0, var uParam3, var uParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar0 = 0.1f;
	iVar1 = unk_0xB36B8558948EA7A8(0, 6);
	fVar2 = 0.5f;
	fVar3 = 0.1f;
	fVar4 = 0.4f;
	if (bParam5)
	{
		iVar5 = unk_0xB36B8558948EA7A8(0, 5);
		fVar2 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_104())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = unk_0xB36B8558948EA7A8(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (func_104())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = unk_0xB36B8558948EA7A8(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_104())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam3 = { (Param0.x + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.x - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 1:
			*uParam3 = { (Param0.x + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.x - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 2:
			*uParam3 = { (Param0.x - fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.x + fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 3:
			*uParam3 = { (Param0.x - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.x + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 4:
			*uParam3 = { (Param0.x - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.x + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 5:
			*uParam3 = { (Param0.x + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.x - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
	}
}

int func_104()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_105(int iParam0, int iParam1)
{
	unk_0xBE91B077ADADE97F(iParam1, 1);
	unk_0x504B26425DFF773C(iParam1, 1);
	unk_0x8D8037621076DC86(iParam1, 0);
	if (func_42(iParam0, 6))
	{
		unk_0x7B28A83A0D3DD0F9(iParam1, 146, false);
		unk_0xC51E8EBEB2F5DF46(iParam1, 1);
	}
	else
	{
		unk_0x7B28A83A0D3DD0F9(iParam1, 146, true);
		unk_0xC51E8EBEB2F5DF46(iParam1, 0);
	}
	unk_0xA415F00D0E0DFBCE(iParam1, 43, 1);
	unk_0xEA480A62F5D29812(iParam1, Local_227.f_129.f_1[iParam0 /*21*/].f_15);
	unk_0x095503B9F1CAC814(iParam1, func_111());
	unk_0xF8207455457B967E(iParam1, func_110(iParam0));
	unk_0xA1217FA3D209873F(iParam1, func_109());
	unk_0xA415F00D0E0DFBCE(iParam1, 24, 0);
	unk_0xF8E5239A2E6E0754(iParam1, func_108());
	unk_0xC595907BB71C921D(iParam1, func_108(), 0);
	unk_0xB8FD45B9686D7177(iParam1, 1);
	func_106(iParam0, iParam1);
}

void func_106(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_227.f_129.f_1[iParam0 /*21*/].f_20 != -1f)
	{
		unk_0xD478F2D087D53713(iParam1, unk_0xD6E677FAD7521410(iParam1, 0), Local_227.f_129.f_1[iParam0 /*21*/].f_20, 0, 0);
		return;
	}
	iVar0 = Local_227.f_129.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = Local_227.f_129.f_632[iVar0 /*9*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_107(iVar2, 4))
			{
				unk_0xFEF60EAEB2A1B906(iParam1, Local_227.f_1404.f_1[iVar2 /*9*/].f_2, Local_227.f_1404.f_1[iVar2 /*9*/].f_5, Local_227.f_1404.f_1[iVar2 /*9*/].f_8, 0, 0);
			}
		}
		iVar1++;
	}
}

bool func_107(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_1404.f_1[iParam0 /*9*/]), iParam1);
}

int func_108()
{
	switch (Local_4900.f_1033)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		default:
	}
	return 200;
}

int func_109()
{
	switch (Local_4900.f_1033)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		default:
	}
	return 60;
}

int func_110(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_2036.f_139.f_142);
	Stack.Push(StackVal == joaat("weapon_rpg"));
	Stack.Push(iParam0);
	Call_Loc(Local_2036.f_139.f_142);
	if (StackVal || StackVal == joaat("weapon_railgun"))
	{
		return 2;
	}
	switch (Local_4900.f_1033)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		default:
	}
	return 10;
}

int func_111()
{
	switch (Local_4900.f_1033)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		default:
	}
	return 1;
}

void func_112(int iParam0, int iParam1)
{
	unk_0xE5DEE9FAEB9878C1(iParam1, 1f);
	unk_0xBCE3958041BC6707(iParam1, 1f);
	unk_0x817234E2BB671752(iParam1, 17, 5f);
	unk_0x504B26425DFF773C(iParam1, 1);
	unk_0xA415F00D0E0DFBCE(iParam1, 2, 1);
	unk_0x7B28A83A0D3DD0F9(iParam1, 272, true);
	unk_0xEA38A0CECA79D07B(iParam1, 1);
	unk_0x7B28A83A0D3DD0F9(iParam1, 42, true);
	unk_0x817234E2BB671752(iParam1, 27, 0f);
	unk_0xF8207455457B967E(iParam1, func_110(iParam0));
	unk_0xA1217FA3D209873F(iParam1, func_109());
	unk_0xF8E5239A2E6E0754(iParam1, func_108());
	unk_0xC595907BB71C921D(iParam1, func_108(), 0);
	unk_0x095503B9F1CAC814(iParam1, func_111());
	if (func_113(iParam0))
	{
		unk_0xA415F00D0E0DFBCE(iParam1, 52, 1);
		unk_0xA415F00D0E0DFBCE(iParam1, 53, 1);
	}
}

int func_113(int iParam0)
{
	if (func_42(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_117(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(unk_0xD93F965CFAC1D06A(Local_4900.f_110[iParam0 /*22*/]), 1);
	}
	if (!func_74(iParam1))
	{
		unk_0x7B28A83A0D3DD0F9(iParam1, 324, true);
	}
	if (Local_227.f_129.f_1[iParam0 /*21*/].f_2 == joaat("mp_g_m_pros_01"))
	{
		switch (unk_0x094C1D2DFE050D6E(iParam1, 0))
		{
			case 0:
				unk_0x2BECAC1144990347(iParam1, -825996427);
				break;
			
			case 1:
				unk_0x2BECAC1144990347(iParam1, 1534454358);
				break;
			
			case 2:
				unk_0x2BECAC1144990347(iParam1, -1422042494);
				break;
			}
	}
	if (Local_227.f_129.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_51(iParam0, 2);
		unk_0xC5DE9743D6DA2C15(iParam1);
		unk_0x8B58E7AC53EED9F1(iParam1, 1);
		unk_0x46EDFC827DC67D89(iParam1, 1, 1);
	}
	if (func_42(iParam0, 11))
	{
		unk_0xFC4706297CB9D7D2(iParam1, 1, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_2036.f_139.f_142);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			unk_0x6A021CF02A47AF78(iParam1, 1);
		}
		else
		{
			unk_0xD82D50E4AC0D46B9(iParam1, iVar0, 9999999, func_116(iParam0), 1);
		}
	}
	unk_0x7BC3A9305442B7FD(iParam1, 1);
	unk_0x2BDB866C1791F9D7(iParam1, 1);
	unk_0x087B9DEC55AB5B29(iParam1, Local_227.f_129.f_1[iParam0 /*21*/].f_17);
	unk_0xACF48634C49FCE07(iParam1, Local_227.f_129.f_1[iParam0 /*21*/].f_18);
	unk_0x91B8E16D0EB126A5(iParam1, Local_227.f_129.f_1[iParam0 /*21*/].f_19);
	iVar1 = func_115(iParam0);
	if (iVar1 != joaat("COP"))
	{
		unk_0x2271ED1E65FB75EE(iParam1, iVar1);
	}
}

var func_115(int iParam0)
{
	return Local_227.f_129.f_632[Local_227.f_129.f_1[iParam0 /*21*/].f_14 /*9*/];
}

int func_116(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_2036.f_139.f_2);
	Stack.Push(!unk_0xAB6A270F84A8781E(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_2036.f_139.f_2);
	if (StackVal && unk_0xDA654EB115F9FF7D(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_49(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_117(int iParam0)
{
	if (Local_227.f_129.f_1[iParam0 /*21*/].f_12 != -1)
	{
		if (func_118(Local_227.f_1401.f_1[Local_227.f_129.f_1[iParam0 /*21*/].f_12]))
		{
			return 1;
		}
	}
	if (func_33(22))
	{
		return 1;
	}
	return 0;
}

bool func_118(int iParam0)
{
	return func_119(iParam0) == -1;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 16;
		
		case 1:
			return 10;
		
		case 2:
			return 34;
		
		case 0:
			return 36;
		
		case 4:
			return 42;
		
		case 14:
			return 14;
		
		case 24:
			return 9;
		
		case 25:
			return 1;
		
		default:
	}
	return -1;
}

int func_120(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x035BBFB481EB12F2(1))
	{
		return 0;
	}
	if (!unk_0xB7D6400C89373777(uParam1))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(unk_0x854C404AEB476240(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x818C6D67AB3F266B(unk_0x42F3C85A00B4FC7B(unk_0x854C404AEB476240(iParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0x8A437068C87289B7(*uParam0), iParam7);
		if (unk_0x895470BB92940DC6(unk_0x8A437068C87289B7(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_121(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

bool func_122(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

void func_123(int iParam0, var uParam1)
{
	if (Local_4900.f_1049 == -1)
	{
		Local_4900.f_1034 = iParam0;
		Local_4900.f_1049 = uParam1;
	}
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (!func_134(0, iParam0))
	{
		return 0;
	}
	if (Local_227.f_129.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (!func_132(Local_4900.f_771[Local_227.f_129.f_1[iParam0 /*21*/].f_8 /*6*/]))
		{
			return 0;
		}
	}
	iVar0 = Local_227.f_129.f_1[iParam0 /*21*/].f_12;
	if (iVar0 != -1)
	{
		if (!func_125(Local_227.f_1401.f_1[iVar0]) || !func_15(&(Local_4900.f_1060), 2000, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_125(int iParam0)
{
	int iVar0;
	
	if (func_131(iParam0))
	{
		return func_126(func_119(iParam0));
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_227.f_1401)
		{
			if (Local_227.f_1401.f_1[iVar0] == iParam0)
			{
				if (unk_0xE75EE67F14EAAE37(Local_4816[iVar0 /*3*/]) && !unk_0x0DF1FA6C09C3E674(Local_4816[iVar0 /*3*/]))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	if (iParam0 == 28)
	{
		return func_130(&(Global_1688652.f_54), iParam0);
	}
	if (iParam0 != -1)
	{
		func_127(iParam0);
		return (func_130(&(Global_1688652.f_54), iParam0) && unk_0xC4EACCE45DBAA313(Global_1688652[iParam0]));
	}
	return 0;
}

void func_127(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (Global_1688652[iVar0] == 0)
	{
		Global_1688652[iVar0] = unk_0xFA82BD1142427E0F(func_129(iParam0), func_128(iParam0));
	}
}

char* func_128(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		case 15:
			return "gr_gta_milo_bridge";
		
		case 16:
			return "v_recycle";
		
		case 17:
			return "v_lab";
		
		case 18:
			return "v_garagem";
		
		case 19:
			return "v_studio_lo";
		
		case 20:
			return "v_apart_midspaz";
		
		case 21:
			return "v_sheriff";
		
		case 22:
			return "v_sheriff2";
		
		case 23:
			return "dt1_03_carpark";
		
		case 24:
			return "v_carshowroom";
		
		case 27:
			return "v_faceoffice";
		
		case 25:
			return "v_abattoir";
		
		case 26:
			return "V_JEWEL2";
		
		case 28:
			return "smboat";
		
		case 29:
			return "vb_33_garage";
		
		case 30:
			return "v_chopshop";
		
		case 31:
			return "v_methlab";
		
		case 32:
			return "v_office_lobby";
		
		case 33:
			return "v_lab";
		
		case 34:
			return "v_foundry";
		
		case 35:
			return "v_refit";
		
		case 36:
			return "hei_int_mph_carrierhang3";
		
		case 37:
			return "hei_int_mph_carrierhang2";
		
		case 38:
			return "hei_int_mph_carrierhang1";
		
		case 39:
			return "hei_int_mph_carrierupper";
		
		case 40:
			return "hei_int_mph_carriercontrol1";
		
		case 41:
			return "hei_int_mph_carriercontrol2";
		
		case 42:
			return "ch3_01_trlr_int";
		
		default:
	}
	return "";
}

Vector3 func_129(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 983.2747f, -99.3188f, 73.8454f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		case 15:
			return -1426.362f, 6754.506f, 11.7821f;
		
		case 16:
			return -583.2097f, -1599.302f, 26.3052f;
		
		case 17:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 18:
			return 630f, 4750f, -60f;
		
		case 19:
			return 600f, 4750f, -60f;
		
		case 20:
			return 575f, 4750f, -60f;
		
		case 21:
			return 1853.625f, 3687.826f, 33.2671f;
		
		case 22:
			return -447.5651f, 6013.988f, 30.7164f;
		
		case 23:
			return -28.1023f, -688.8687f, 34.4437f;
		
		case 24:
			return -40.2938f, -1097.321f, 25.4223f;
		
		case 27:
			return -1074.853f, -250.3996f, 36.7388f;
		
		case 25:
			return 982.233f, -2160.382f, 28.4761f;
		
		case 26:
			return -630.4205f, -236.7843f, 37.057f;
		
		case 28:
			return -2032f, -1035f, 5f;
		
		case 29:
			return -1078.561f, -1678.615f, 3.5752f;
		
		case 30:
			return 479.88f, -1318.57f, 28.2f;
		
		case 31:
			return 1392.512f, 3603.185f, 38.5f;
		
		case 32:
			return 105.4557f, -745.4835f, 44.7548f;
		
		case 33:
			return 3522.845f, 3707.965f, 19.9918f;
		
		case 34:
			return 1087.195f, -1988.445f, 28.649f;
		
		case 35:
			return -583.1606f, -282.3967f, 35.394f;
		
		case 36:
			return 3053.565f, -4653.67f, 5.0773f;
		
		case 37:
			return 3058.002f, -4700.8f, 5.0773f;
		
		case 38:
			return 3080.619f, -4772.69f, 5.0773f;
		
		case 39:
			return 3088.469f, -4708.33f, 20.567f;
		
		case 40:
			return 3085.222f, -4690.66f, 26.2522f;
		
		case 41:
			return 3092.459f, -4711.389f, 26.2657f;
		
		case 42:
			return 2329.242f, 2571.494f, 45.6772f;
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_130(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0x234B68AC2E35ED5A((*uParam0)[iVar0], iVar1);
}

bool func_131(int iParam0)
{
	return func_119(iParam0) != -1;
}

int func_132(int iParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_133(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_133(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xBFCE58B2B3249999(iParam0, 0))
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

int func_134(int iParam0, int iParam1)
{
	if (Local_4900.f_1034 == -1)
	{
		return 1;
	}
	if (Local_4900.f_1034 == iParam0)
	{
		if (Local_4900.f_1049 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_135(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

int func_136(int iParam0)
{
	if (func_49(iParam0, 19))
	{
		if (!func_137(Local_4900.f_984.f_11, func_138(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_137(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_17(&uParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x02BFF15CAA701972() && !bParam3)
	{
		if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_138()
{
	return Local_227.f_1282.f_5;
}

int func_139(int iParam0)
{
	if (func_49(iParam0, 19))
	{
		return func_140();
	}
	if (Local_2036.f_139.f_138 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_139.f_138);
		return StackVal;
	}
	return 1;
}

int func_140()
{
	Call_Loc(Local_2036.f_466);
	if (StackVal)
	{
		if (func_15(&(Local_4900.f_984.f_11), func_142(), 0))
		{
			func_141(58);
			return 1;
		}
	}
	return 0;
}

void func_141(int iParam0)
{
	if (func_19(&uLocal_4840, iParam0))
	{
	}
}

int func_142()
{
	return Local_227.f_1282.f_4;
}

void func_143(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_49(iParam1, 19))
	{
		iVar0 = func_46(0, iParam1);
		if (iVar0 != -1)
		{
			unk_0xC664C0067EEAB8D1(iParam0, iVar0);
		}
	}
}

int func_144(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_49(iParam0, 19))
	{
		iVar0 = func_46(0, iParam0);
		if (iVar0 != -1)
		{
			if ((Local_4900.f_984[iVar0 /*5*/].f_2 != -1 && func_164(Local_4900.f_984[iVar0 /*5*/].f_2) == 6) && Local_4900.f_984[iVar0 /*5*/].f_3 >= 299f)
			{
				return 1;
			}
			if (Local_4900.f_984[iVar0 /*5*/].f_3 != 999999f && Local_4900.f_984[iVar0 /*5*/].f_3 > func_163())
			{
				return 1;
			}
			if (Local_4900.f_984[iVar0 /*5*/].f_4 != 999999f && Local_4900.f_984[iVar0 /*5*/].f_4 < func_162())
			{
				return 1;
			}
			if (func_145(iVar0))
			{
				return 1;
			}
			if (func_50())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_145(int iParam0)
{
	if (!func_146(func_155(iParam0, 1), func_152(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_146(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_2036.f_466.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2036.f_466.f_1);
		return StackVal;
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	switch (func_151())
	{
		case 3:
			if (func_6(iParam0, 23))
			{
				return 0;
			}
			if (func_162() == -1f || Local_3633[iParam0 /*7*/].f_2 > func_162())
			{
				if (Local_3633[iParam0 /*7*/].f_4 != func_64())
				{
					if (func_149(Local_3633[iParam0 /*7*/].f_4))
					{
						return 0;
					}
				}
			}
			break;
		
		case 4:
			iVar0 = iParam0;
			if (func_11(iVar0, 0, 1) && unk_0xFCC26BA7572E9F1F(iVar0))
			{
				iVar1 = unk_0x4645C707A0067CB6(iVar0);
				if (func_148(iVar1, 2) || func_148(iVar1, 8))
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_49(iParam0, 2))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_147(iParam0, 2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_147(int iParam0, int iParam1)
{
	return func_4(&(Local_4900.f_771[iParam0 /*6*/].f_2), iParam1);
}

bool func_148(int iParam0, int iParam1)
{
	return func_4(&(Local_6015[iParam0 /*206*/].f_1), iParam1);
}

int func_149(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2426865[iParam0 /*449*/].f_245 > -1)
		{
			if (func_150(Global_2426865[iParam0 /*449*/].f_245) == 4)
			{
				return 1;
			}
		}
		if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_150(int iParam0)
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
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
	}
	return 6;
}

int func_151()
{
	if (Local_2036.f_466.f_3 != 0)
	{
		Call_Loc(Local_2036.f_466.f_3);
		return StackVal;
	}
	return 3;
}

int func_152(int iParam0)
{
	return func_153(func_155(iParam0, 0));
}

int func_153(int iParam0)
{
	return func_154(func_151(), iParam0);
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		return iVar0;
	}
	switch (iParam0)
	{
		case 3:
			if (unk_0x159BC3DDA80D71AC(Local_4900.f_2[iParam1]))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam1]), 0))
				{
					iVar0 = unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam1]);
				}
			}
			break;
		
		case 0:
			if (unk_0x159BC3DDA80D71AC(Local_4900.f_110[iParam1 /*22*/]))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0xD93F965CFAC1D06A(Local_4900.f_110[iParam1 /*22*/]), 0))
				{
					iVar0 = unk_0xD93F965CFAC1D06A(Local_4900.f_110[iParam1 /*22*/]);
				}
			}
			break;
		
		case 1:
			if (unk_0x159BC3DDA80D71AC(Local_4900.f_771[iParam1 /*6*/]))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0xD93F965CFAC1D06A(Local_4900.f_771[iParam1 /*6*/]), 0))
				{
					iVar0 = unk_0xD93F965CFAC1D06A(Local_4900.f_771[iParam1 /*6*/]);
				}
			}
			break;
		
		case 2:
			if (unk_0x159BC3DDA80D71AC(Local_4900.f_862[iParam1 /*5*/]))
			{
				if (!unk_0xE50EB54E0F21BED0(unk_0xD93F965CFAC1D06A(Local_4900.f_862[iParam1 /*5*/]), 0))
				{
					iVar0 = unk_0xD93F965CFAC1D06A(Local_4900.f_862[iParam1 /*5*/]);
				}
			}
			break;
		
		case 4:
			if (func_11(iParam1, 0, 1))
			{
				iVar0 = unk_0xD56332194D622ECE(iParam1);
			}
			break;
	}
	return iVar0;
}

int func_155(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (!bParam1)
		{
			if (!unk_0x419E13582192CFEA(func_153(Local_4900.f_984[iParam0 /*5*/].f_1)))
			{
				Local_4900.f_984[iParam0 /*5*/].f_1 = func_156(iParam0);
			}
		}
		return Local_4900.f_984[iParam0 /*5*/].f_1;
	}
	return -1;
}

int func_156(int iParam0)
{
	int iVar0[32];
	int iVar33[32];
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	
	iVar70 = -1;
	iVar66 = 0;
	while (iVar66 < func_161())
	{
		if (func_158(iVar66))
		{
			iVar71 = func_153(iVar66);
			if (unk_0x419E13582192CFEA(iVar71))
			{
				if (func_146(iVar66, iVar71))
				{
					if (func_157(iVar66, iVar71))
					{
						iVar33[iVar68] = iVar66;
						iVar68++;
					}
					iVar0[iVar67] = iVar66;
					iVar67++;
				}
				iVar69 = iVar66;
			}
		}
		iVar66++;
	}
	if (iVar68 > 0)
	{
		iVar70 = iVar33[unk_0xB36B8558948EA7A8(0, iVar68)];
	}
	else if (iVar67 > 0)
	{
		iVar70 = iVar0[unk_0xB36B8558948EA7A8(0, iVar67)];
	}
	else
	{
		iVar70 = iVar69;
	}
	return iVar70;
}

int func_157(int iParam0, int iParam1)
{
	if (Local_2036.f_466.f_2 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2036.f_466.f_2);
		return StackVal;
	}
	switch (func_151())
	{
		case 3:
			if (Local_3633[iParam0 /*7*/].f_4 != func_64())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_158(int iParam0)
{
	switch (func_151())
	{
		case 3:
			return 1;
		
		case 0:
			return func_42(iParam0, 2);
		
		case 2:
			return func_160(iParam0, 24);
		
		case 1:
			return func_159(iParam0, 2);
		
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

bool func_159(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_780.f_1[iParam0 /*14*/]), iParam1);
}

bool func_160(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_993.f_1[iParam0 /*12*/]), iParam1);
}

int func_161()
{
	switch (func_151())
	{
		case 3:
			return Local_227.f_19;
		
		case 0:
			return Local_227.f_129;
		
		case 2:
			return Local_227.f_993;
		
		case 1:
			return Local_227.f_780;
		
		case 4:
			return 32;
		
		default:
	}
	return 0;
}

float func_162()
{
	if (Local_2036.f_466.f_4 != 0)
	{
		Call_Loc(Local_2036.f_466.f_4);
		return StackVal;
	}
	return 200f;
}

float func_163()
{
	if (Local_2036.f_466.f_7 != 0)
	{
		Call_Loc(Local_2036.f_466.f_7);
		return StackVal;
	}
	return 400f;
}

int func_164(int iParam0)
{
	return Local_4900.f_110[iParam0 /*22*/].f_1;
}

void func_165(int iParam0, int iParam1)
{
	if (!bLocal_4823)
	{
		return;
	}
	Local_4900.f_110[iParam0 /*22*/].f_1 = iParam1;
}

void func_166(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_164(iParam0);
	*bParam1 = unk_0x159BC3DDA80D71AC(Local_4900.f_110[iParam0 /*22*/]);
	if (*bParam1)
	{
		*iParam3 = unk_0x8A437068C87289B7(Local_4900.f_110[iParam0 /*22*/]);
		*bParam2 = unk_0xECEC7528A52B4EE8(*iParam3);
	}
}

void func_167(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		unk_0x191DDA30577F440A(iParam0, iVar0);
		iVar0++;
	}
}

void func_168()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < Local_227.f_993)
	{
		bVar3 = unk_0x159BC3DDA80D71AC(Local_4900.f_862[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = unk_0xD93F965CFAC1D06A(Local_4900.f_862[iVar4 /*5*/]);
			bVar2 = unk_0xE50EB54E0F21BED0(iVar0, 0);
			if (Local_2036.f_343.f_33 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_2036.f_343.f_33);
			}
		}
		if (func_185(iVar4) > 1 && func_185(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_184(iVar4, 3);
				}
				else if (func_183(iVar4))
				{
					func_184(iVar4, 3);
				}
			}
			else
			{
				func_184(iVar4, 3);
			}
		}
		func_180(iVar4, iVar0);
		switch (func_185(iVar4))
		{
			case 0:
				if (func_179(iVar4))
				{
					func_184(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_178(iVar4)) && func_169(iVar4))
				{
					func_184(iVar4, 2);
					bVar1 = true;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_169(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x159BC3DDA80D71AC(Local_4900.f_862[iParam0 /*5*/]))
	{
		Var1 = { func_177(iParam0) };
		Var4 = { func_176(iParam0) };
		if (func_97(Var1))
		{
			return 0;
		}
		iVar7 = Local_227.f_993.f_1[iParam0 /*12*/].f_3;
		if (!func_122(iVar7))
		{
			return 0;
		}
		if (func_175(&(Local_4900.f_862[iParam0 /*5*/]), iVar7, Var1, 1, 1, 1, func_160(iParam0, 22), 1, 0, 0))
		{
			iVar0 = unk_0xBD11ACD80727BD31(Local_4900.f_862[iParam0 /*5*/]);
			unk_0xBDDCDEC7B6205897(iVar0, Var4, 2, 1);
			func_170(iParam0, iVar0);
			unk_0x824F744352C8BC82(iVar7);
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_4900.f_862[iParam0 /*5*/]))
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, int iParam1)
{
	var uVar0;
	var uVar6;
	
	unk_0xE3DD1DA290B04CCE(unk_0xBD11ACD80727BD31(Local_4900.f_862[iParam0 /*5*/]), 300);
	unk_0x3A653D4F5FA4B665(iParam1, func_160(iParam0, 17), func_160(iParam0, 18), func_160(iParam0, 19), func_160(iParam0, 20), func_160(iParam0, 21), 0, 0, 0);
	func_173(iParam0, 0);
	if (Local_227.f_993.f_1[iParam0 /*12*/].f_11 != -1 && func_118(Local_227.f_1401.f_1[Local_227.f_993.f_1[iParam0 /*12*/].f_11]))
	{
		func_172(iParam0, 8);
	}
	if (func_160(iParam0, 32))
	{
		unk_0x8F160110753EB17B(iParam1, true);
		unk_0x4603196EEEA2355C(iParam1, false, 0);
		unk_0xA2C015B68CE01357(iParam1, true);
		unk_0x3CBE9F07524C242D(iParam1, false, 0);
	}
	if (!func_160(iParam0, 1))
	{
		unk_0xAFD4554ABD55837D(unk_0xBD11ACD80727BD31(Local_4900.f_862[iParam0 /*5*/]));
	}
	if (func_160(iParam0, 2))
	{
		unk_0x49783353F325DA92(Local_4900.f_862[iParam0 /*5*/], 1, 1);
		unk_0x0C0EE4235CEF6BEB(Local_4900.f_862[iParam0 /*5*/], 1);
		unk_0xD6CC8E0FECE4BC9E(iParam1, 1, 1);
	}
	if (func_160(iParam0, 3))
	{
		unk_0x3CBE9F07524C242D(iParam1, false, 0);
	}
	if (func_160(iParam0, 4))
	{
		unk_0xA74E37218BD2AF3E(iParam1, 1);
	}
	if (func_160(iParam0, 5))
	{
		unk_0x1D43372AC14C8C87(iParam1, 0);
	}
	if (func_160(iParam0, 6))
	{
		unk_0x0B87A8220B73252D(iParam1, 1);
	}
	if (func_160(iParam0, 7))
	{
		unk_0xBC5268D1B5C5B73B(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
	}
	if (func_160(iParam0, 15))
	{
		unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(Local_4900.f_862[iParam0 /*5*/]), 1200);
	}
	if (func_160(iParam0, 8))
	{
		unk_0xA2C015B68CE01357(iParam1, true);
	}
	if (func_160(iParam0, 9))
	{
		unk_0x577BE43A512C41FE(unk_0xBD11ACD80727BD31(Local_4900.f_862[iParam0 /*5*/]), 1);
	}
	if (func_160(iParam0, 16))
	{
		unk_0x78CDDD1E6367978D(iParam1, func_177(iParam0), 1, 0, 0, 1);
	}
	if (func_160(iParam0, 10))
	{
		unk_0x8F160110753EB17B(iParam1, true);
	}
	if (func_160(iParam0, 11))
	{
		unk_0x75DE023B2CB7B528(iParam1, 1);
	}
	if (func_171(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(iParam1, 1);
	}
	if (func_160(iParam0, 13))
	{
		unk_0x4603196EEEA2355C(iParam1, false, 0);
	}
	if (func_160(iParam0, 14))
	{
		Stack.Push(Local_2036.f_343.f_22 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar6);
		Call_Loc(Local_2036.f_343.f_22);
		if (StackVal && StackVal)
		{
			unk_0xDD0CBE69BF0D526F(&uVar0, iParam1);
			unk_0xCDF87F9AAD28040F(&uVar0, 1);
			unk_0xCC0AF533DD744245(&uVar0, &uVar6);
		}
	}
	if (Local_2036.f_343.f_30 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2036.f_343.f_30);
	}
}

int func_171(int iParam0)
{
	if (func_160(iParam0, 12))
	{
		return 1;
	}
	if (Local_227.f_993.f_1[iParam0 /*12*/].f_11 != -1 && func_118(Local_227.f_1401.f_1[Local_227.f_993.f_1[iParam0 /*12*/].f_11]))
	{
		return 1;
	}
	if (func_33(22))
	{
		return 1;
	}
	return 0;
}

void func_172(int iParam0, int iParam1)
{
	if (func_19(&(Local_4900.f_862[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

void func_173(int iParam0, int iParam1)
{
	if (func_174(&(Local_4900.f_862[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_174(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (unk_0x234B68AC2E35ED5A((*uParam0)[iVar1], iVar2))
	{
		unk_0xC664C0067EEAB8D1(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

int func_175(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0x3E42A32E15B11FFA(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x0358AFF5157FE26F(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0x99A6768052B30AE8(unk_0x795434E153F90E41(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		unk_0x8B58E7AC53EED9F1(unk_0xBD11ACD80727BD31(*uParam0), bParam8);
		if (bParam10)
		{
			unk_0x6DA4D1FB7DCE9FD8(unk_0xBD11ACD80727BD31(*uParam0), 1);
		}
		if (bParam11)
		{
			unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(*uParam0), false, 0);
		}
		if (unk_0x895470BB92940DC6(unk_0xBD11ACD80727BD31(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

Vector3 func_176(int iParam0)
{
	struct<3> Var0;
	
	if (Local_2036.f_343.f_35 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_343.f_35);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_97(Var0))
	{
		Var0 = { Local_227.f_993.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_177(int iParam0)
{
	struct<3> Var0;
	
	if (Local_2036.f_343.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_343.f_34);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_97(Var0))
	{
		Var0 = { Local_227.f_993.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_178(int iParam0)
{
	return 1;
}

int func_179(int iParam0)
{
	if (Local_2036.f_343.f_21 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_343.f_21);
		return StackVal;
	}
	return 1;
}

void func_180(int iParam0, int iParam1)
{
	if (Local_227.f_993.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_185(iParam0) > 1 && func_185(iParam0) < 3)
	{
		if (func_181(iParam0, iParam1))
		{
			func_172(iParam0, 8);
		}
		else
		{
			func_173(iParam0, 8);
		}
	}
}

bool func_181(int iParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(iParam1))
	{
	}
	return func_182(iParam0, 8);
}

bool func_182(int iParam0, int iParam1)
{
	return func_4(&(Local_4900.f_862[iParam0 /*5*/].f_2), iParam1);
}

int func_183(int iParam0)
{
	if (Local_2036.f_343.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_343.f_24);
		return StackVal;
	}
	return 0;
}

void func_184(int iParam0, int iParam1)
{
	Local_4900.f_862[iParam0 /*5*/].f_1 = iParam1;
}

int func_185(int iParam0)
{
	return Local_4900.f_862[iParam0 /*5*/].f_1;
}

void func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	
	iVar1 = -1;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < Local_227.f_780)
	{
		bVar6 = unk_0x159BC3DDA80D71AC(Local_4900.f_771[iVar0 /*6*/]);
		if (bVar6)
		{
			iVar3 = unk_0x854C404AEB476240(Local_4900.f_771[iVar0 /*6*/]);
			bVar5 = func_132(Local_4900.f_771[iVar0 /*6*/]);
			bVar7 = func_458(iVar3, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar5)
			{
				iVar1 = func_455(iVar0, 2);
			}
		}
		if (func_454(iVar0) > 2)
		{
			if (func_454(iVar0) != 5 && func_454(iVar0) != 3)
			{
				if (!bVar6)
				{
					func_453(iVar0, 5);
				}
				else if (!bVar5)
				{
					func_453(iVar0, 5);
				}
				else if (func_452(iVar0, iVar3))
				{
					func_453(iVar0, 5);
				}
				else
				{
					func_451(iVar0, &iVar2);
				}
			}
		}
		else
		{
			func_451(iVar0, &iVar2);
		}
		if (Local_2036.f_294.f_41 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar3);
			Stack.Push(bVar5);
			Stack.Push(iVar1);
			Call_Loc(Local_2036.f_294.f_41);
		}
		func_448(iVar0, iVar3);
		switch (func_454(iVar0))
		{
			case 0:
				if (func_447(iVar0))
				{
					func_453(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar6)
				{
					if (func_446(iVar0))
					{
						func_453(iVar0, 2);
					}
				}
				else
				{
					func_135(&(Local_4900.f_771[iVar0 /*6*/]));
				}
				break;
			
			case 2:
				if (!bVar4)
				{
					if (func_445(iVar0))
					{
						if (func_200(iVar0))
						{
							func_453(iVar0, 4);
							bVar4 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar6)
				{
					if (func_199(iVar0, iVar3))
					{
						func_453(iVar0, 5);
					}
					else
					{
						if (bVar5)
						{
							func_198(iVar0, iVar3);
							func_192(iVar0, iVar3);
						}
						break;
					
					case 5:
						if (func_159(iVar0, 0))
						{
							func_10(10);
						}
						if (bVar6)
						{
							if (func_199(iVar0, iVar3))
							{
							}
							else
							{
								if (func_159(iVar0, 23))
								{
									if (bVar6)
									{
										func_135(&(Local_4900.f_771[iVar0 /*6*/]));
									}
								}
								if (func_191(iVar0))
								{
									func_135(&(Local_4900.f_771[iVar0 /*6*/]));
									func_453(iVar0, 1);
								}
								break;
							
							case 3:
								break;
							
							case 6:
								if (bVar6 && func_190(iVar0, iVar3))
								{
									func_135(&(Local_4900.f_771[iVar0 /*6*/]));
								}
								break;
							
							case 7:
								break;
						}
						if (bVar7)
						{
							func_189(iVar0, 13);
						}
						else
						{
							func_188(iVar0, 13);
						}
					}
					iVar0++;
					func_187(&iVar2);
				}

void func_187(int iParam0)
{
	if (Local_4900.f_984.f_16 != *iParam0)
	{
		Local_4900.f_984.f_16 = *iParam0;
	}
}

void func_188(int iParam0, int iParam1)
{
	if (func_174(&(Local_4900.f_771[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

void func_189(int iParam0, int iParam1)
{
	if (func_19(&(Local_4900.f_771[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

int func_190(int iParam0, int iParam1)
{
	if (func_159(iParam0, 23) || func_147(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_2036.f_294.f_47 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_2036.f_294.f_47);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

int func_191(int iParam0)
{
	if (func_513() != 0)
	{
		return 0;
	}
	if (func_147(iParam0, 15))
	{
		return func_44(iParam0);
	}
	if (func_159(iParam0, 13))
	{
		if (Local_2036.f_294.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_2036.f_294.f_30);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (!func_147(iParam0, 15))
	{
		return;
	}
	iVar0 = func_46(1, iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	fVar4 = SYSTEM::VDIST(Var1, func_193());
	if (unk_0x0BCA9ADE67DF9DD8((fVar4 - Local_4900.f_984[iVar0 /*5*/].f_4)) > 10f)
	{
		Local_4900.f_984[iVar0 /*5*/].f_4 = fVar4;
	}
	iVar5 = func_152(iVar0);
	if (unk_0x419E13582192CFEA(iVar5))
	{
		fVar4 = SYSTEM::VDIST(Var1, unk_0xD6E677FAD7521410(iVar5, 0));
		if (unk_0x0BCA9ADE67DF9DD8((fVar4 - Local_4900.f_984[iVar0 /*5*/].f_3)) > 10f)
		{
			Local_4900.f_984[iVar0 /*5*/].f_3 = fVar4;
		}
	}
}

Vector3 func_193()
{
	if (Local_2036.f_488.f_4.f_2 != 0)
	{
		Call_Loc(Local_2036.f_488.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_194(func_197());
}

Vector3 func_194(int iParam0)
{
	if (bLocal_4822 && unk_0xC49311A2A500FF09(iLocal_4826, 0))
	{
		return func_196(iParam0);
	}
	return func_195(iParam0);
}

Vector3 func_195(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1689734.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_196(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1689734.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

int func_197()
{
	if (Local_2036.f_488.f_4.f_1 != 0)
	{
		Call_Loc(Local_2036.f_488.f_4.f_1);
		return StackVal;
	}
	if (iLocal_4827 != -1)
	{
		return Local_3749.f_1[Local_6015[iLocal_4827 /*206*/].f_137 /*4*/];
	}
	return 0;
}

void func_198(int iParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (iParam0 != Local_227.f_780.f_212)
	{
		return;
	}
	Var0 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	fVar3 = 500f;
	if (func_97(Local_4900.f_1074))
	{
		Local_4900.f_1074 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_4900.f_1074) > (550f * 550f))
	{
		if (Local_4900.f_1053 != -1)
		{
			unk_0x559B06B6D67877B4(Local_4900.f_1053, 0);
		}
		Local_4900.f_1074 = { Var0 };
		Local_4900.f_1053 = unk_0xE5A1E4E094971D4D(Local_4900.f_1074, fVar3, 1f, 0.02f, 0, 1);
	}
}

int func_199(int iParam0, int iParam1)
{
	Stack.Push(Local_2036.f_294.f_47 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_2036.f_294.f_47);
	if (StackVal && StackVal)
	{
		func_135(&(Local_4900.f_771[iParam0 /*6*/]));
		return 1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_123(1, iParam0);
	iVar0 = Local_227.f_780.f_1[iParam0 /*14*/].f_3;
	func_444(&iVar0, iParam0);
	if (!func_122(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_97(Local_4900.f_1068))
	{
		if (func_147(iParam0, 15))
		{
			if (unk_0xE267416B80E7921F(iVar0) || unk_0x48E10529AEAE00F9(iVar0))
			{
				if (!func_439(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (!func_431(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_159(iParam0, 17))
		{
			if (!func_305(iParam0, &(Local_4900.f_1068), &(Local_4900.f_1077)))
			{
				bVar1 = false;
			}
		}
		else if (func_159(iParam0, 25))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_4900.f_1068));
			Stack.Push(&(Local_4900.f_1077));
			Call_Loc(Local_2036.f_294.f_33);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_159(iParam0, 18))
		{
			if (!func_431(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_159(iParam0, 19))
		{
			if (!func_439(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_4900.f_1068 = { Local_227.f_780.f_1[iParam0 /*14*/].f_4 };
			Local_4900.f_1077 = Local_227.f_780.f_1[iParam0 /*14*/].f_7;
		}
	}
	if (bVar1)
	{
		if (!func_159(iParam0, 30))
		{
			func_284(Local_4900.f_1068, 30f, 0);
			unk_0x6AF7EE4DD9F8B944(Local_4900.f_1068, 30f, 0, 0, 0, 1);
		}
		if (func_281(&(Local_4900.f_771[iParam0 /*6*/]), iVar0, Local_4900.f_1068, Local_4900.f_1077, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar2 = unk_0x854C404AEB476240(Local_4900.f_771[iParam0 /*6*/]);
			func_201(iParam0, iVar2);
			func_98();
			return 1;
		}
	}
	return 0;
}

void func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam1);
	if (!func_216(iParam0, iParam1))
	{
		func_215(iParam0, iParam1);
	}
	if (Local_227.f_780.f_1[iParam0 /*14*/].f_9 != -1 && func_118(Local_227.f_1401.f_1[Local_227.f_780.f_1[iParam0 /*14*/].f_9]))
	{
		func_189(iParam0, 2);
	}
	if (func_214(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(iParam1, 1);
	}
	unk_0x8F160110753EB17B(iParam1, func_159(iParam0, 10));
	unk_0xBB18EA5F1620FF5F(iParam1, func_159(iParam0, 3));
	unk_0x5E3D11E1DC5FBF4D(iParam1, func_159(iParam0, 3));
	unk_0x0201EE6F15BD3F23(iParam1, func_159(iParam0, 5));
	if (unk_0x8C6BE3ED9638F314(iVar0))
	{
		unk_0x2310A8F9421EBF43(iParam1);
	}
	if (func_159(iParam0, 4))
	{
		unk_0x5C052A30B9FCA449(iParam1, 7);
	}
	if (func_159(iParam0, 25))
	{
		unk_0xDB8D6815E13996A9(iParam1, Local_4900.f_1068, 0, 0, 1);
	}
	if (func_159(iParam0, 8))
	{
		unk_0x70B2AB1977EB9053(iParam1, 2, 2);
		unk_0x70B2AB1977EB9053(iParam1, 3, 2);
		unk_0x639C36116F049ECB(iParam1, 0);
	}
	if (func_159(iParam0, 28))
	{
		unk_0x49783353F325DA92(Local_4900.f_771[iParam0 /*6*/], 1, 1);
		unk_0xD6CC8E0FECE4BC9E(iParam1, 1, 1);
	}
	if (func_147(iParam0, 14))
	{
		unk_0xC595907BB71C921D(iParam1, 1000, 0);
		unk_0xED4E91A1FC7ABBF6(iParam1, 0);
		unk_0xAC2B08493719B297(iParam1, 1);
		unk_0x3CCFC106A6738860(iParam1, 0);
		if (func_213(iParam0, iVar0))
		{
			unk_0x1F7ED1C13023483B(iParam1, 0);
			unk_0x47DE5E87A1AC7CBD(iParam1, func_212(iParam0, iVar0));
		}
		if (unk_0x48E10529AEAE00F9(iVar0))
		{
			unk_0x510B8B2F51ECC627(iParam1, 0);
			unk_0xA5D39CB3073E83F4(iParam1, 0f);
		}
		func_210(iParam1, iVar0);
		func_209(iParam1, 1);
		unk_0x84418AD4000B0403(iParam1, 0);
		unk_0x78683FED1CF3DDE3(iParam1, func_159(iParam0, 7), 0);
		func_205(iParam0, iParam1);
	}
	if (func_159(iParam0, 11))
	{
		unk_0xA2C015B68CE01357(iParam1, true);
	}
	if (func_159(iParam0, 32))
	{
		unk_0xC55DA02D18D77322(iParam1, 3);
		unk_0xA3FD819B07AA6542(iParam1, 1);
	}
	if (func_159(iParam0, 33))
	{
		unk_0xE3F32DF0088B1EA4(iParam1, 1);
	}
	if (func_147(iParam0, 15))
	{
		iVar1 = func_204(iParam0);
		unk_0x49CB177958B472A8(iParam1, unk_0x4DDAC4C80BACF92C(iVar1));
		if (unk_0x48E10529AEAE00F9(iVar0))
		{
			unk_0x0DF115F2DFB9476F(iParam1, 3);
			unk_0x587EA57CAF325AC7(iParam1, 1);
		}
		unk_0xED4E91A1FC7ABBF6(iParam1, 1);
		unk_0xD4DF29F3D7B97053(iParam1, 0);
		unk_0x1F7ED1C13023483B(iParam1, 1);
		unk_0x89E171705EA920DA(iParam1, 1, 1, 0);
		if (unk_0xCF1FE5DEA3E2E135(iParam1) > 0)
		{
			unk_0x7D867CDA26E248C7(iParam1, 0);
			if (!unk_0x0350660BE3973FF3(iParam1, 18))
			{
				unk_0xC6A2E001AEBB5B7F(iParam1, 18, true);
			}
		}
	}
	else
	{
		if (unk_0x48E10529AEAE00F9(iVar0))
		{
			unk_0x0DF115F2DFB9476F(iParam1, 2);
		}
		if (unk_0x8D367F0B53916265(iVar0))
		{
			unk_0x4B7B525F9E13CE0C(iParam1, 1);
		}
	}
	if (func_147(iParam0, 15) || func_159(iParam0, 19))
	{
		if (unk_0xE267416B80E7921F(iVar0))
		{
			unk_0x4B43AFBD2CEE7724(iParam1);
			unk_0x89E171705EA920DA(iParam1, 1, 1, 0);
			unk_0xC5DE9743D6DA2C15(iParam1);
			unk_0x0B87A8220B73252D(iParam1, 1);
		}
	}
	unk_0x4551B6FEB638C979(iParam1, 1);
	unk_0x9467B0584C318BAD(iParam1, 1);
	unk_0x1FB6C0DF282CC98A(iParam1, 1);
	unk_0x83E421E5A4A2A512(iParam1, 1200);
	unk_0x824F744352C8BC82(iVar0);
	unk_0xB10D331AF5A4D8F3(iParam1, 1);
	func_202(iParam1);
	unk_0xEE46C75CC4278490(Local_4900.f_771[iParam0 /*6*/], 1);
	if (Local_2036.f_294.f_38 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2036.f_294.f_38);
	}
}

void func_202(int iParam0)
{
	int iVar0;
	
	func_203(iParam0);
	if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
	{
		if (unk_0x5B38E054B758C032(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x05351AF95891EE5C(iParam0, "MPBitset");
		}
		unk_0x191DDA30577F440A(&iVar0, 10);
		unk_0x191DDA30577F440A(&iVar0, 11);
		unk_0x6C9577C090944B92(iParam0, "MPBitset", iVar0);
	}
}

void func_203(int iParam0)
{
	if (unk_0x8BA4AD00568AB5FC("Not_Allow_As_Saved_Veh", 3))
	{
		if (!unk_0x5B38E054B758C032(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			unk_0x6C9577C090944B92(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

int func_204(int iParam0)
{
	return func_153(func_155(func_46(1, iParam0), 0));
}

void func_205(int iParam0, int iParam1)
{
	if (unk_0x8BA4AD00568AB5FC("BBCarrier", 2))
	{
		unk_0x674364FB1963C598(iParam1, "BBCarrier", 1);
	}
	if (unk_0x8BA4AD00568AB5FC("FMCVehicle", 2))
	{
		unk_0x674364FB1963C598(iParam1, "FMCVehicle", 1);
	}
	func_206(iParam1, func_455(iParam0, 2), 935751890, 0, 0);
}

void func_206(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8BA4AD00568AB5FC("ContrabandOwner", 3))
	{
		iVar0 = func_12();
		func_208(iParam1, &iVar0);
		unk_0x6C9577C090944B92(iParam0, "ContrabandOwner", iVar0);
		if (unk_0x8BA4AD00568AB5FC("ContrabandDeliveryType", 3))
		{
			unk_0x6C9577C090944B92(iParam0, "ContrabandDeliveryType", iParam2);
		}
		func_207(iParam2);
		if (iParam2 == -81613951)
		{
			if (unk_0x8BA4AD00568AB5FC("ExportVehicle", 3))
			{
				iVar1 = iParam3;
				iVar1 = (iVar1 + iParam4);
				unk_0x6C9577C090944B92(iParam0, "ExportVehicle", iVar1);
			}
		}
	}
}

void func_207(int iParam0)
{
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_460 != iParam0)
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_460 = iParam0;
	}
}

void func_208(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 >= 0 && iParam0 < 8)
	{
		iVar0 = (24 + iParam0);
		unk_0x191DDA30577F440A(iParam1, iVar0);
	}
}

void func_209(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
	{
		if (unk_0x5B38E054B758C032(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x05351AF95891EE5C(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0x191DDA30577F440A(&iVar0, 13);
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&iVar0, 13);
		}
		unk_0x6C9577C090944B92(iParam0, "MPBitset", iVar0);
	}
}

void func_210(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			unk_0x87F4BEB993196F12(iParam0, 0);
			break;
	}
	func_211(iParam0);
}

void func_211(int iParam0)
{
	if (!Global_262145.f_4684)
	{
		unk_0x040C47F5DFA52DB2(iParam0, 0);
	}
}

float func_212(int iParam0, int iParam1)
{
	if (Local_2036.f_294.f_32 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_294.f_32);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		
		default:
	}
	return 0.2f;
}

bool func_213(int iParam0, int iParam1)
{
	return func_212(iParam0, iParam1) != 1f;
}

int func_214(int iParam0)
{
	if (Local_227.f_780.f_1[iParam0 /*14*/].f_9 != -1)
	{
		if (func_118(Local_227.f_1401.f_1[Local_227.f_780.f_1[iParam0 /*14*/].f_9]))
		{
			return 1;
		}
	}
	if (func_33(22))
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, int iParam1)
{
	if (Local_227.f_780.f_1[iParam0 /*14*/].f_8 != -1)
	{
		unk_0xC612552622E74D36(iParam1, Local_227.f_780.f_1[iParam0 /*14*/].f_8, Local_227.f_780.f_1[iParam0 /*14*/].f_8);
		unk_0xA2FEFE3BBCD9FB23(iParam1, Local_227.f_780.f_1[iParam0 /*14*/].f_8, Local_227.f_780.f_1[iParam0 /*14*/].f_8);
	}
}

int func_216(var uParam0, int iParam1)
{
	struct<101> Var0;
	
	if (Local_2036.f_294.f_39 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(uParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_2036.f_294.f_39);
		if (StackVal)
		{
			func_217(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

void func_217(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if ((unk_0x02BFF15CAA701972() && unk_0xA6BE8F025C6B653F(iParam0)) || !unk_0x02BFF15CAA701972())
		{
			if (unk_0x1146A9AE09CE2B14() != func_64())
			{
				uParam1->f_100 = unk_0x1146A9AE09CE2B14();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_268(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					unk_0xED4E91A1FC7ABBF6(iParam0, 1);
					unk_0x5AC79C98C5C17F05(iParam0, 0);
				}
				else if (uParam1->f_102 == 1)
				{
					unk_0xED4E91A1FC7ABBF6(iParam0, 0);
					unk_0x5AC79C98C5C17F05(iParam0, 0);
				}
				else if (uParam1->f_102 == 3)
				{
					unk_0xED4E91A1FC7ABBF6(iParam0, 1);
					unk_0x5AC79C98C5C17F05(iParam0, 1);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x6A293C827ECF5B46(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0xDF412ECDA6E66201(iParam0, uParam1->f_79);
			}
			if (func_267(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0xD5C0F2C0C23EEEBE(iParam0, uParam1->f_80);
			unk_0x2835492575BEB0E6(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0x78EF6BDFD91C7D7F(iParam0, uParam1->f_99);
			}
			if (func_266(iParam0))
			{
				func_260(iParam0, func_263(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0xFEFC4CE79A79BEE5(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x912E56FD8DB2CADC(iParam0, uParam1->f_98);
			}
			if (unk_0x234B68AC2E35ED5A(uParam1->f_95, 0))
			{
				func_231(iParam0, &(uParam1->f_81));
			}
			if ((!func_223(4) && !bParam4) && !unk_0xE45310E861787FC2())
			{
				func_220(iParam0);
			}
			if (func_219(unk_0x6471F4759775FCA4(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0xD6844D3104C3ABBF(iParam0, 16);
						break;
					
					case 1:
						unk_0xD6844D3104C3ABBF(iParam0, 16);
						if ((unk_0xEACFC87E44438F24(iParam0, joaat("scarab")) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab2"))) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab3")))
						{
							unk_0x6895CB0D4F2E7CDC(iParam0, 16, 0, false);
						}
						else
						{
							unk_0x6895CB0D4F2E7CDC(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0xD6844D3104C3ABBF(iParam0, 16);
						if ((unk_0xEACFC87E44438F24(iParam0, joaat("scarab")) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab2"))) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab3")))
						{
							unk_0x6895CB0D4F2E7CDC(iParam0, 16, 1, false);
						}
						else
						{
							unk_0x6895CB0D4F2E7CDC(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0xD6844D3104C3ABBF(iParam0, 16);
						if ((unk_0xEACFC87E44438F24(iParam0, joaat("scarab")) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab2"))) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab3")))
						{
							unk_0x6895CB0D4F2E7CDC(iParam0, 16, 2, false);
						}
						else
						{
							unk_0x6895CB0D4F2E7CDC(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0xD6844D3104C3ABBF(iParam0, 16);
							if ((unk_0xEACFC87E44438F24(iParam0, joaat("scarab")) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab2"))) || unk_0xEACFC87E44438F24(iParam0, joaat("scarab3")))
							{
								unk_0x6895CB0D4F2E7CDC(iParam0, 16, 2, false);
							}
							else
							{
								unk_0x6895CB0D4F2E7CDC(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (unk_0x234B68AC2E35ED5A(uParam1->f_95, 1) && unk_0x234B68AC2E35ED5A(uParam1->f_95, 2))
					{
						if (unk_0x234B68AC2E35ED5A(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x8BA4AD00568AB5FC("Player_Vehicle", 3))
					{
						unk_0x6C9577C090944B92(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0x234B68AC2E35ED5A(uParam1->f_95, 1) && unk_0x234B68AC2E35ED5A(uParam1->f_95, 2))
					{
						if (unk_0x8BA4AD00568AB5FC("Veh_Modded_By_Player", 3))
						{
							unk_0x6C9577C090944B92(iParam0, "Veh_Modded_By_Player", unk_0x17114A8CCDEB9E3D(unk_0x1146A9AE09CE2B14()));
						}
					}
					else if (unk_0x8BA4AD00568AB5FC("Veh_Modded_By_Player", 3))
					{
						if (func_218(uParam1->f_81) && unk_0x9B4A5ABBC2942C51(&(uParam1->f_81)))
						{
							unk_0x6C9577C090944B92(iParam0, "Veh_Modded_By_Player", unk_0x17114A8CCDEB9E3D(unk_0x817F41864B424C70(&(uParam1->f_81))));
						}
						else
						{
							unk_0x6C9577C090944B92(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_218(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_220(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19863)
	{
		if (unk_0x419E13582192CFEA(iParam0))
		{
			if (unk_0x895470BB92940DC6(iParam0))
			{
				Var0.x = unk_0x6471F4759775FCA4(iParam0);
				Var0.f_1 = unk_0x15173FB88ABC94F9(unk_0x0B676D4511ABB729(iParam0));
				if (unk_0x8BA4AD00568AB5FC("RandomID", 3))
				{
					if (!unk_0x5B38E054B758C032(iParam0, "RandomID"))
					{
						Var0.f_2 = unk_0xB36B8558948EA7A8(0, 65535);
						unk_0x6C9577C090944B92(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = unk_0x05351AF95891EE5C(iParam0, "RandomID");
					}
				}
				func_221(Var0);
			}
		}
	}
}

void func_221(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.x = 1146815758;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = Param0.x;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	unk_0xA5C82A39FF8ED272(1, &Var0, 5, func_222(1, 1));
}

int func_222(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if (func_11(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
			{
				if (bParam1)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
				else if (!func_84(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_223(int iParam0)
{
	int iVar0;
	
	if (func_230())
	{
		iVar0 = 0;
		while (iVar0 < 56)
		{
			if (func_150(iVar0) == iParam0)
			{
				if (func_224(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_224(int iParam0)
{
	return func_225(iParam0, 6, 1);
}

int func_225(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0x234B68AC2E35ED5A(Global_99422.f_1378[iParam0], iParam1);
	}
	else if (unk_0x02BFF15CAA701972())
	{
		if (func_229() == 0)
		{
			return unk_0x234B68AC2E35ED5A(func_226(func_228(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_227(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_227(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_86();
		if (iVar1 > -1)
		{
			Global_2555428 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2555428 = 1;
		}
	}
	return iVar0;
}

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10402;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12074;
}

int func_229()
{
	return Global_31345;
}

bool func_230()
{
	return Global_99422.f_364 > 0;
}

int func_231(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_241(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = unk_0x7CFE5F3C5F742479(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_239(iParam0))
		{
			iVar1 = unk_0x817F41864B424C70(uParam1);
			if (func_234(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_232(iParam0))
	{
	}
	return 0;
}

int func_232(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = unk_0x7CFE5F3C5F742479(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x02BFF15CAA701972())
			{
				iVar1 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				iVar1 = unk_0xDFB7BFA6482FEE1E();
			}
			iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(iVar1, Global_1315755));
			iVar3 = 20000;
			if (Global_1574425)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0xDC5B18561A18AD5E(iParam0);
				func_233(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_233(int iParam0)
{
	int iVar0;
	
	if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
	{
		if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x5B38E054B758C032(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x05351AF95891EE5C(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0x234B68AC2E35ED5A(iVar0, 16))
	{
		unk_0x191DDA30577F440A(&iVar0, 16);
		unk_0x6C9577C090944B92(iParam0, "MPBitset", iVar0);
	}
}

int func_234(int iParam0, int iParam1)
{
	func_238();
	if (Global_1312485.f_18 != 0 || unk_0x3114795AF6B2812D(*iParam0))
	{
		Global_1683856.f_11 = unk_0x35B66DA5A0E5ABE2(*iParam0);
		if (Global_1683856.f_11 < 0f)
		{
			Global_1683856.f_11 = 0f;
		}
	}
	func_236(*iParam0, &Global_1683856, &(Global_1683856.f_1), &(Global_1683856.f_4), &(Global_1683856.f_7), &(Global_1683856.f_10));
	Global_1683856.f_1.f_2 = (Global_1683856.f_1.f_2 - Global_1683856.f_11);
	if (Global_1683856.f_4.f_2 < 0f)
	{
		Global_1683856.f_12 = 1;
	}
	Global_1683856.f_13 = 200;
	if (unk_0x6471F4759775FCA4(*iParam0) == joaat("windsor") || unk_0x6471F4759775FCA4(*iParam0) == joaat("comet4"))
	{
		Global_1683856.f_13 = 255;
	}
	if (Global_1683856.f_12)
	{
		if (func_235(iParam0, iParam1, Global_1683856, Global_1683856.f_1, Global_1683856.f_4, Global_1683856.f_7, Global_1683856.f_10, 0, Global_1683856.f_13))
		{
			if (unk_0x02BFF15CAA701972())
			{
				Global_1315755 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				Global_1315755 = unk_0xDFB7BFA6482FEE1E();
			}
			return 1;
		}
	}
	else
	{
		Global_1683856.f_14 = { Global_1683856.f_1 };
		Global_1683856.f_14 = (Global_1683856.f_14 * -1f);
		Global_1683856.f_17 = { Global_1683856.f_4 };
		Global_1683856.f_17 = (Global_1683856.f_17 * -1f);
		Global_1683856.f_20 = { Global_1683856.f_7 };
		Global_1683856.f_20.f_1 = (Global_1683856.f_20.f_1 * -1f);
		Global_1683856.f_20.f_2 = (Global_1683856.f_20.f_2 * -1f);
		if (!unk_0x88CF23F322C9687A(*iParam0, 0))
		{
			Global_1683856.f_23 = unk_0x7CFE5F3C5F742479(*iParam0, 0);
		}
		else
		{
			Global_1683856.f_23 = 3;
		}
		Global_1683856.f_24 = unk_0x7CFE5F3C5F742479(*iParam0, 1);
		if (!unk_0x88CF23F322C9687A(*iParam0, 1))
		{
			Global_1683856.f_24 = unk_0x7CFE5F3C5F742479(*iParam0, 1);
		}
		else
		{
			Global_1683856.f_24 = 3;
		}
		if (((Global_1683856.f_23 == 0 && func_235(iParam0, iParam1, Global_1683856, Global_1683856.f_1, Global_1683856.f_4, Global_1683856.f_7, Global_1683856.f_10, 0, Global_1683856.f_13)) || Global_1683856.f_23 != 0) && ((Global_1683856.f_24 == 0 && func_235(iParam0, iParam1, Global_1683856, Global_1683856.f_14, Global_1683856.f_17, Global_1683856.f_20, Global_1683856.f_10, 1, Global_1683856.f_13)) || Global_1683856.f_24 != 0))
		{
			if (unk_0x02BFF15CAA701972())
			{
				Global_1315755 = unk_0x551F46B3C7DFB654();
			}
			else
			{
				Global_1315755 = unk_0xDFB7BFA6482FEE1E();
			}
			return 1;
		}
	}
	return 0;
}

bool func_235(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, var uParam12, int iParam13, var uParam14)
{
	return unk_0x45381F1E5E17264C(*uParam0, unk_0xD56332194D622ECE(iParam1), uParam2, Param3, Param6, Param9, uParam12, iParam13, uParam14);
}

int func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0xED5AD56E2C551D1E(iParam0, "chassis_dummy");
	if (((!func_237(Global_1683882, 0f, 0f, 0f, 0) && !func_237(Global_1683885, 0f, 0f, 0f, 0)) && !func_237(Global_1683888, 0f, 0f, 0f, 0)) && !Global_1683891 == 0f)
	{
		*uParam2 = { Global_1683882 };
		*uParam3 = { Global_1683885 };
		*uParam4 = { Global_1683888 };
		*uParam5 = Global_1683891;
		return 1;
	}
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0xED5AD56E2C551D1E(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0xED5AD56E2C551D1E(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1.24f, 0.42f, -0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.035f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = unk_0xED5AD56E2C551D1E(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.18f;
			break;
		
		case joaat("avenger"):
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
	}
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("speedo4"):
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*uParam5 = 0.775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("nebula"):
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -1858654120:
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.19f;
			break;
		
		case -1193912403:
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case -1582061455:
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1726022652:
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 579912970:
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1377217886:
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1540373595:
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 426742808:
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.3f;
			break;
		
		case 1755697647:
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.4f;
			break;
		
		case -452604007:
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -291021213:
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.23f;
			break;
		
		case -1244461404:
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1416471345:
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 736672010:
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case -1507230520:
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 2038480341:
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
		
		case 1304459735:
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0.35f;
			break;
	}
	return 1;
}

bool func_237(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_238()
{
	Global_1683856 = 0;
	Global_1683856.f_1 = { 0f, 0f, 0f };
	Global_1683856.f_4 = { 0f, 0f, 0f };
	Global_1683856.f_7 = { 0f, 0f, 0f };
	Global_1683856.f_10 = 0f;
	Global_1683856.f_11 = 0f;
	Global_1683856.f_12 = 0;
	Global_1683856.f_13 = 0;
	Global_1683856.f_14 = { 0f, 0f, 0f };
	Global_1683856.f_17 = { 0f, 0f, 0f };
	Global_1683856.f_20 = { 0f, 0f, 0f };
	Global_1683856.f_23 = 0;
	Global_1683856.f_24 = 0;
}

int func_239(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0x88CF23F322C9687A(iParam0, 0) || func_240(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	int iVar0;
	
	if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
	{
		if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x5B38E054B758C032(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x05351AF95891EE5C(iParam0, "MPBitset");
				return unk_0x234B68AC2E35ED5A(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_241(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x3699D36B67CC8836(uParam1, 13) && unk_0x9B4A5ABBC2942C51(uParam1))
	{
		iVar0 = unk_0x817F41864B424C70(uParam1);
	}
	else
	{
		iVar0 = func_64();
	}
	bVar1 = false;
	if (iVar0 == unk_0x1146A9AE09CE2B14())
	{
		if (func_252(15, 0))
		{
			bVar1 = true;
		}
		else if (func_248(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0x419E13582192CFEA(iParam0) && !unk_0xE50EB54E0F21BED0(iParam0, 0)) || !unk_0xA6BE8F025C6B653F(iParam0)) || !unk_0x68E0E843A17D2933(0, -1, 1)) || !((unk_0x3699D36B67CC8836(uParam1, 13) && unk_0x29712F962253A7EB()) && unk_0xDA1611E46AAEA71B(uParam1))) || iVar0 == func_64()) || !func_11(iVar0, 0, 0)) || !bVar1) || func_242(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_242(int iParam0)
{
	if (!unk_0x02BFF15CAA701972())
	{
		return 1;
	}
	if (func_244(unk_0x1146A9AE09CE2B14()) == 3)
	{
		if (func_243(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1683881)
	{
		return 1;
	}
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (unk_0xB51972B58BF40F96(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0xB51972B58BF40F96(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("gp1"):
			return 1;
			break;
		
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
			return 1;
			break;
		
		case joaat("club"):
			if ((unk_0xB51972B58BF40F96(iParam0, 7) == 0 || unk_0xB51972B58BF40F96(iParam0, 7) == 1) || unk_0xB51972B58BF40F96(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((unk_0xB51972B58BF40F96(iParam0, 45) == 4 || unk_0xB51972B58BF40F96(iParam0, 45) == 5) || unk_0xB51972B58BF40F96(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_243(int iParam0)
{
	if (unk_0x8BA4AD00568AB5FC("FMDeliverableID", 3))
	{
		if (unk_0x5B38E054B758C032(iParam0, "FMDeliverableID"))
		{
			return unk_0x05351AF95891EE5C(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_244(int iParam0)
{
	if (func_247(iParam0) == 233)
	{
		return func_245(iParam0);
	}
	return -1;
}

int func_245(int iParam0)
{
	if (func_246(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_246(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_247(int iParam0)
{
	if (func_246(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

bool func_248(bool bParam0)
{
	return func_249(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_249(int iParam0, bool bParam1)
{
	return func_250(iParam0, bParam1, 1);
}

int func_250(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_64())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_251(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_64() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_251(int iParam0, int iParam1)
{
	if (iParam0 != func_64())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_64())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_252(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_257(unk_0x1146A9AE09CE2B14()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	iVar0 = func_254(iParam0);
	iVar1 = iParam0;
	return unk_0x234B68AC2E35ED5A(iVar0, func_253(iVar1));
}

int func_253(int iParam0)
{
	return (iParam0 % 32);
}

int func_254(int iParam0)
{
	int iVar0;
	
	iVar0 = func_226(func_255(iParam0), -1, 0);
	return iVar0;
}

int func_255(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_256(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_256(int iParam0)
{
	return (iParam0 / 32);
}

int func_257(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_258(iParam0) && Global_2426865[iParam0 /*449*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_258(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_259(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_259(int iParam0)
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
		case joaat("mpsv_lp0_31"):
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
		
		case 148:
		case 150:
		case 152:
		case 151:
		case 149:
			return 21;
			break;
		
		case 153:
			return 22;
			break;
	}
	return -1;
}

void func_260(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_262(iParam1);
	func_261(iVar1, &uVar0);
	unk_0x78EF6BDFD91C7D7F(iParam0, uVar0);
}

bool func_261(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((unk_0x02BFF15CAA701972() && func_264()) && Global_1314058)
	{
		if ((iParam0 == Global_1314059 && iParam1 == Global_1314060) && iParam2 == Global_1314061)
		{
			return 13;
		}
	}
	return 0;
}

int func_264()
{
	struct<13> Var0;
	
	if (unk_0x5B99D5C0DE301BD3())
	{
		if ((unk_0x0B4295B1608BB934() && unk_0xB2EC8B4970766623()) && unk_0x678E959F60C0DB94())
		{
			Var0 = { func_265() };
			if (unk_0x29712F962253A7EB() && unk_0xDA1611E46AAEA71B(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_265()
{
	struct<13> Var0;
	
	unk_0x738A74C5899697B7(&Var0, 13);
	return Var0;
}

int func_266(int iParam0)
{
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_267(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

void func_268(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_279(iParam0))
		{
			if (unk_0x15173FB88ABC94F9(&(uParam1->f_1)) != 0)
			{
				unk_0xFA4E6005E549B59C(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0xF8A80F26627AA333())
			{
				unk_0xCF882B151A34557C(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_278(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_278(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_278(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_278(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_278(iVar2)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_278(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_278(iVar3)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_278(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_278(iVar4)))
					{
					}
					else
					{
						unk_0x191DDA30577F440A(&(uParam1->f_77), func_278(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_278(4)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_278(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0xB51972B58BF40F96(iParam0, 10) != 0)
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			unk_0x191DDA30577F440A(&(uParam1->f_77), func_278(1));
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xAA707B921102DC82(iParam0, 0);
			if (unk_0xB51972B58BF40F96(iParam0, 5) != -1)
			{
				unk_0xAA707B921102DC82(iParam0, 1);
			}
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 13))
		{
			unk_0x5527519A6ADC0506(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xF03ACE54462622C9(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 12))
		{
			unk_0x18709FF6990F23CC(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x9327D4C0D6DF2D4A(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0xC612552622E74D36(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xA2FEFE3BBCD9FB23(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0x234B68AC2E35ED5A(uParam1->f_77, 15) || func_277(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_276())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xD18C8678B41DB690(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_275(uParam1->f_66))
		{
			unk_0x64058BD9F4A43D49(iParam0, 0);
		}
		else
		{
			unk_0x64058BD9F4A43D49(iParam0, 0);
			unk_0x64058BD9F4A43D49(iParam0, uParam1->f_65);
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 9))
		{
			unk_0xED4E91A1FC7ABBF6(iParam0, 0);
			unk_0x5AC79C98C5C17F05(iParam0, 0);
		}
		if (bParam2)
		{
			unk_0x5C052A30B9FCA449(iParam0, uParam1->f_70);
		}
		unk_0xEDE3A270F1277EA3(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xAB256D7C8D6A4AC9(iParam0, 2, unk_0x234B68AC2E35ED5A(uParam1->f_77, 28));
		unk_0xAB256D7C8D6A4AC9(iParam0, 3, unk_0x234B68AC2E35ED5A(uParam1->f_77, 29));
		unk_0xAB256D7C8D6A4AC9(iParam0, 0, unk_0x234B68AC2E35ED5A(uParam1->f_77, 30));
		unk_0xAB256D7C8D6A4AC9(iParam0, 1, unk_0x234B68AC2E35ED5A(uParam1->f_77, 31));
		unk_0x2AC1ECA957EB9158(iParam0, unk_0x234B68AC2E35ED5A(uParam1->f_77, 10));
		if (unk_0x8F37B08BFE649B87(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xF7E38415C6027209(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(iParam0)))
			{
				if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_274(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_274(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xCBD5BF9FD895F81F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x6E74C4FAEF001064(iParam0, 1);
			}
			else
			{
				unk_0x149D9B4375AB4239(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_269(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xE267416B80E7921F(uParam1->f_66) && !unk_0x8D367F0B53916265(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_278(iVar5 + 1)))
				{
					if (!unk_0xE3C9546BB1ECEC04(iParam0, iVar5 + 1))
					{
						unk_0xB021D5C8EC8634FA(iParam0, iVar5 + 1, 0);
					}
				}
				else if (unk_0xE3C9546BB1ECEC04(iParam0, iVar5 + 1))
				{
					unk_0xB021D5C8EC8634FA(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((unk_0x6471F4759775FCA4(iParam0) == joaat("sheava") || unk_0x6471F4759775FCA4(iParam0) == joaat("omnis")) || unk_0x6471F4759775FCA4(iParam0) == joaat("le7b"))
		{
			if (unk_0xB51972B58BF40F96(iParam0, 0) == -1)
			{
				unk_0xB021D5C8EC8634FA(iParam0, 1, 0);
			}
		}
		if (((unk_0x48E10529AEAE00F9(uParam1->f_66) && unk_0x1C4692901D44F0EE(iParam0)) && !unk_0xEACFC87E44438F24(iParam0, joaat("avenger"))) && !((((Global_4456448.f_76587 == 6 || Global_4456448.f_76587 == 7) || Global_4456448.f_76587 == 18) || Global_4456448.f_76587 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0x234B68AC2E35ED5A(uParam1->f_77, 23))
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 22))
				{
					unk_0x0DF115F2DFB9476F(iParam0, 2);
				}
				else
				{
					unk_0x0DF115F2DFB9476F(iParam0, 3);
				}
			}
			else
			{
				unk_0x0DF115F2DFB9476F(iParam0, 4);
			}
		}
		if (unk_0x234B68AC2E35ED5A(uParam1->f_77, 27))
		{
			unk_0x674364FB1963C598(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x674364FB1963C598(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_269(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFCE58B2B3249999(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xCF1FE5DEA3E2E135(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x7D867CDA26E248C7(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0x0DCD513510DC5D8A(*iParam0, 255);
				}
				else
				{
					unk_0x0DCD513510DC5D8A(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0xC6A2E001AEBB5B7F(*iParam0, iVar1, false);
			}
		}
		else if (unk_0xB51972B58BF40F96(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0xD6844D3104C3ABBF(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6895CB0D4F2E7CDC(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_273(unk_0x6471F4759775FCA4(*iParam0), 1) && unk_0xB51972B58BF40F96(*iParam0, 24) != func_272(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6895CB0D4F2E7CDC(*iParam0, 24, func_272(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_271(iParam0);
	if (func_270(*iParam0))
	{
		unk_0xAC2B08493719B297(*iParam0, 1);
		unk_0xD4DF29F3D7B97053(*iParam0, 1);
	}
	return 1;
}

int func_270(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0)) && unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xB51972B58BF40F96(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x00BA91AE0048DAC9(iParam0, iVar1, unk_0xB51972B58BF40F96(iParam0, iVar1)), 32);
				iVar2 = unk_0x15173FB88ABC94F9(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x15173FB88ABC94F9("MNU_CAGE") || iVar2 == unk_0x15173FB88ABC94F9("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_271(var uParam0)
{
	switch (unk_0x6471F4759775FCA4(*uParam0))
	{
		case joaat("starling"):
			if (unk_0xB51972B58BF40F96(*uParam0, 4) == 0)
			{
				unk_0x6895CB0D4F2E7CDC(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0xD6844D3104C3ABBF(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			unk_0x6895CB0D4F2E7CDC(*uParam0, 24, 3, false);
			break;
	}
}

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		switch (unk_0x6471F4759775FCA4(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0x622E46C9F30FB60D(iParam0, 38);
		iVar1 = unk_0x622E46C9F30FB60D(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14397)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14398)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14396)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14399)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14401)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14400)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18848)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18850)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18854)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18851)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18858)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18856)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18861)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20806)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20807)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

void func_274(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCF1FE5DEA3E2E135(iParam0) > 0)
	{
		unk_0x7D867CDA26E248C7(iParam0, 0);
		iVar0 = unk_0xB51972B58BF40F96(iParam0, 24);
		iVar1 = unk_0xB7A74982A8F639B9(iParam0, 24);
		unk_0x29CE559068C8CC1D(iParam0, uParam1);
		if (unk_0x6471F4759775FCA4(iParam0) == joaat("tornado6") || unk_0x6471F4759775FCA4(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0xD6844D3104C3ABBF(iParam0, 24);
		}
		else
		{
			unk_0x6895CB0D4F2E7CDC(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_275(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_276()
{
	return unk_0x14FA206D9CE730A9(-1691188696);
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (unk_0x8BA4AD00568AB5FC("MPBitset", 3))
			{
				if (unk_0x5B38E054B758C032(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x05351AF95891EE5C(iParam0, "MPBitset");
				}
				return unk_0x234B68AC2E35ED5A(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_279(int iParam0)
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!func_280(unk_0x1146A9AE09CE2B14(), -1))
		{
			iParam0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		}
	}
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	if (func_244(unk_0x1146A9AE09CE2B14()) == 3)
	{
		if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (func_243(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_11(iParam0, 1, 1))
	{
		if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iParam0), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iParam0), 0);
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (unk_0x7D2B9E6A64637269() == unk_0x27FC1B0077581B37(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_281(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x3F1DFD4C1BC6827A(iParam1))
	{
		return 0;
	}
	if (!unk_0xA8911798335DCDA2(1))
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
		unk_0xB7D390F8F682127B(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	if (unk_0x419E13582192CFEA(iVar1))
	{
		*uParam0 = unk_0x431E33F39AEFC4C4(iVar1);
		Global_2544210.f_6610 = iVar1;
		if (unk_0xB7D6400C89373777(*uParam0))
		{
			if (bParam15)
			{
				unk_0x6DA4D1FB7DCE9FD8(iVar1, 1);
			}
			unk_0x8B58E7AC53EED9F1(iVar1, iParam10);
			if (unk_0x895470BB92940DC6(iVar1))
			{
				if (bParam8)
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 1);
				}
				else
				{
					unk_0xFEDD7E9148CF3B3E(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0x84CE5E7CD3A7E197(*uParam0, unk_0x1146A9AE09CE2B14(), 1);
				}
			}
			unk_0x2AC1ECA957EB9158(iVar1, bParam9);
			unk_0xF4B0F1D16C5ECDB7(iVar1, 1);
			if (bParam12)
			{
				unk_0xD1A5295FE7ADF001(iVar1);
				unk_0x65FFB0A9D15E084E(iVar1, 5, 5, 1f);
			}
			func_282(Param2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_282(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_283(unk_0x1146A9AE09CE2B14(), Param0, iParam4) > -1)
	{
		if ((Global_2405077.f_2919[1 /*6*/].f_5 == iParam5 && Global_2405077.f_2919[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405077.f_2919[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405077.f_2919[iVar0 /*6*/] = { Global_2405077.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405077.f_2919[1 /*6*/] = { Param0 };
		Global_2405077.f_2919[1 /*6*/].f_3 = uParam3;
		Global_2405077.f_2919[1 /*6*/].f_4 = iParam4;
		Global_2405077.f_2919[1 /*6*/].f_5 = iParam5;
	}
}

int func_283(int iParam0, struct<3> Param1, int iParam4)
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
			if (Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (unk_0x0BCA9ADE67DF9DD8((Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_284(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_301(&(Global_76066.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0BABEFEA577FCFA4(Param0, Global_76066.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_285(iVar0);
			}
		}
		iVar0++;
	}
}

void func_285(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_301(&(Global_76066.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x419E13582192CFEA(Global_76066.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
			{
				if (unk_0xBFCE58B2B3249999(Global_76066.f_139[iParam0], 0))
				{
					if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_76066.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x4985CD0720AFD468(Global_76066.f_139[iParam0], 1, 1);
				unk_0x5420D0D520CF44D0(&(Global_76066.f_139[iParam0]));
			}
		}
		Global_76066[iParam0] = 1;
		if (unk_0x234B68AC2E35ED5A(Global_76066.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_300(iParam0, 0)) && Global_76975.f_66 == 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] != 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] > 3) && (!func_289(0, Global_76066.f_555[0 /*21*/].f_12) || !func_289(1, Global_76066.f_555[0 /*21*/].f_12)))
			{
				func_288(&(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]), &Global_76975);
				Global_77053 = Global_112293.f_32747.f_5591;
			}
			func_286(iParam0, 0);
		}
	}
}

void func_286(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_300(iParam0, 0))
		{
			func_287(iParam0, 1, 0);
			func_287(iParam0, 2, 0);
			func_287(iParam0, 3, 0);
			func_287(iParam0, 4, 0);
			func_287(iParam0, 0, 1);
			Global_76066[iParam0] = 1;
		}
	}
	else
	{
		func_287(iParam0, 0, 0);
	}
}

void func_287(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x191DDA30577F440A(&(Global_112293.f_32747[iParam0]), iParam1);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&(Global_112293.f_32747[iParam0]), iParam1);
	}
}

void func_288(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_289(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_299(&(Global_112293.f_32747.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_290(Global_112293.f_32747.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_290(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xB4DD528ED76ED647(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x02BFF15CAA701972()) || (iParam0 == joaat("buffalo3") && !unk_0x02BFF15CAA701972())) || (iParam0 == joaat("gauntlet2") && !unk_0x02BFF15CAA701972())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x02BFF15CAA701972()))
	{
		if (!func_298())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xE4F2BC3D40737711())
		{
			if (unk_0x953EAC8A463313E4(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD1ABD511D9C326A3(Var1))
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
		if ((((!func_297() && !func_296()) && !func_295()) && !func_294()) && !func_298())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_295())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_293(iParam0))
		{
			return 0;
		}
	}
	if (!func_291(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_292())
	{
		return 1;
	}
	unk_0xB4989F41D2C06478(&iVar0, &uVar1);
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
	if (!unk_0x14D8BAC5AEFB49EB(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_292()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2518293)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x666C16A4ED8F3098();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6770 && !Global_262145.f_13100) && iVar1 < Global_262145.f_13101)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14400 && iVar1 < Global_262145.f_14412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14396 && iVar1 < Global_262145.f_14408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14397 && iVar1 < Global_262145.f_14409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14398 && iVar1 < Global_262145.f_14410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14399 && iVar1 < Global_262145.f_14411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14401 && iVar1 < Global_262145.f_14413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14402 && iVar1 < Global_262145.f_14405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14403 && iVar1 < Global_262145.f_14406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14404 && iVar1 < Global_262145.f_14407)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_16997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_16992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_16996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_16995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_16989)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_16990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_16993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_16994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_16991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_16999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_16988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_16987)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_16986)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_16998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17037 && iVar1 < Global_262145.f_17002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17038 && iVar1 < Global_262145.f_17003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17039 && iVar1 < Global_262145.f_17004)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17186 && iVar1 < Global_262145.f_17208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17187 && iVar1 < Global_262145.f_17209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17188 && iVar1 < Global_262145.f_17210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17189 && iVar1 < Global_262145.f_17211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17190 && iVar1 < Global_262145.f_17212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17191 && iVar1 < Global_262145.f_17213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17193 && iVar1 < Global_262145.f_17214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17194 && iVar1 < Global_262145.f_17215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17195 && iVar1 < Global_262145.f_17216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17196 && iVar1 < Global_262145.f_17217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17197 && iVar1 < Global_262145.f_17218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17198 && iVar1 < Global_262145.f_17219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17199 && iVar1 < Global_262145.f_17220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17205 && iVar1 < Global_262145.f_17227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17202 && iVar1 < Global_262145.f_17223)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17203 && iVar1 < Global_262145.f_17224)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17204 && iVar1 < Global_262145.f_17225)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17192 && iVar1 < Global_262145.f_17226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17206 && iVar1 < Global_262145.f_17228)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17200 && iVar1 < Global_262145.f_17221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17201 && iVar1 < Global_262145.f_17222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17207 && iVar1 < Global_262145.f_17229)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18838 && iVar1 < Global_262145.f_18935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18839 && iVar1 < Global_262145.f_18936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18840 && iVar1 < Global_262145.f_18937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18841 && iVar1 < Global_262145.f_18938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18842 && iVar1 < Global_262145.f_18939)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18843 && iVar1 < Global_262145.f_18940)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18844 && iVar1 < Global_262145.f_18941)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18942)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18943)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18944)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18945)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18849 && iVar1 < Global_262145.f_18946)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18850 && iVar1 < Global_262145.f_18947)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18851 && iVar1 < Global_262145.f_18948)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18852 && iVar1 < Global_262145.f_18949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18853 && iVar1 < Global_262145.f_18950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18854 && iVar1 < Global_262145.f_18951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18855 && iVar1 < Global_262145.f_18952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18856 && iVar1 < Global_262145.f_18953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18857 && iVar1 < Global_262145.f_18954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18858 && iVar1 < Global_262145.f_18955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18859 && iVar1 < Global_262145.f_18956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18860 && iVar1 < Global_262145.f_18957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18861 && iVar1 < Global_262145.f_18958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18862 && iVar1 < Global_262145.f_18959)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19919 && iVar1 < Global_262145.f_19915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19920 && iVar1 < Global_262145.f_19916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19921 && iVar1 < Global_262145.f_19917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19922 && iVar1 < Global_262145.f_19918)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20800 && iVar1 < Global_262145.f_20808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20801 && iVar1 < Global_262145.f_20809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20802 && iVar1 < Global_262145.f_20810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20803 && iVar1 < Global_262145.f_20811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20804 && iVar1 < Global_262145.f_20812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20805 && iVar1 < Global_262145.f_20813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21580 && iVar1 < Global_262145.f_21600)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21592 && iVar1 < Global_262145.f_21612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21583 && iVar1 < Global_262145.f_21603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21593 && iVar1 < Global_262145.f_21613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21581 && iVar1 < Global_262145.f_21601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21597 && iVar1 < Global_262145.f_21617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21595 && iVar1 < Global_262145.f_21615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21596 && iVar1 < Global_262145.f_21616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21591 && iVar1 < Global_262145.f_21611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21598 && iVar1 < Global_262145.f_21618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21594 && iVar1 < Global_262145.f_21614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21590 && iVar1 < Global_262145.f_21610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21582 && iVar1 < Global_262145.f_21602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21584 && iVar1 < Global_262145.f_21604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21585 && iVar1 < Global_262145.f_21605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21586 && iVar1 < Global_262145.f_21606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21587 && iVar1 < Global_262145.f_21607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21588 && iVar1 < Global_262145.f_21608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21589 && iVar1 < Global_262145.f_21609)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22541 && iVar1 < Global_262145.f_22569)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22542 && iVar1 < Global_262145.f_22570)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22543 && iVar1 < Global_262145.f_22571)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22544 && iVar1 < Global_262145.f_22572)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22545 && iVar1 < Global_262145.f_22573)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22546 && iVar1 < Global_262145.f_22574)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22547 && iVar1 < Global_262145.f_22575)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22548 && iVar1 < Global_262145.f_22576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22549 && iVar1 < Global_262145.f_22577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22550 && iVar1 < Global_262145.f_22578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22551 && iVar1 < Global_262145.f_22579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22552 && iVar1 < Global_262145.f_22580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22553 && iVar1 < Global_262145.f_22581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22554 && iVar1 < Global_262145.f_22582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22555 && iVar1 < Global_262145.f_22583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22556 && iVar1 < Global_262145.f_22584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22557 && iVar1 < Global_262145.f_22585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22558 && iVar1 < Global_262145.f_22586)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22559 && iVar1 < Global_262145.f_22587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22560 && iVar1 < Global_262145.f_22588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22561 && iVar1 < Global_262145.f_22589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22562 && iVar1 < Global_262145.f_22590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22563 && iVar1 < Global_262145.f_22591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22564 && iVar1 < Global_262145.f_22592)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22565 && iVar1 < Global_262145.f_22593)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22566 && iVar1 < Global_262145.f_22594)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22567 && iVar1 < Global_262145.f_22595)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22568 && iVar1 < Global_262145.f_22596)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23761 && iVar1 < Global_262145.f_23777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23762 && iVar1 < Global_262145.f_23778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23766 && iVar1 < Global_262145.f_23782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23769 && iVar1 < Global_262145.f_23785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23774 && iVar1 < Global_262145.f_23790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23768 && iVar1 < Global_262145.f_23784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23760 && iVar1 < Global_262145.f_23776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23767 && iVar1 < Global_262145.f_23783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23773 && iVar1 < Global_262145.f_23789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23772 && iVar1 < Global_262145.f_23788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23763 && iVar1 < Global_262145.f_23779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23765 && iVar1 < Global_262145.f_23781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23775 && iVar1 < Global_262145.f_23791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23771 && iVar1 < Global_262145.f_23787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23764 && iVar1 < Global_262145.f_23780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23770 && iVar1 < Global_262145.f_23786)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23845)
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
		if (!Global_262145.f_26267 && iVar1 < Global_262145.f_26269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25280 && iVar1 < Global_262145.f_25273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25281 && iVar1 < Global_262145.f_25274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25282 && iVar1 < Global_262145.f_25275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25283 && iVar1 < Global_262145.f_25276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26268 && iVar1 < Global_262145.f_26270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25284 && iVar1 < Global_262145.f_25277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25285 && iVar1 < Global_262145.f_25278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25286 && iVar1 < Global_262145.f_25279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25291 && iVar1 < Global_262145.f_25312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25292 && iVar1 < Global_262145.f_25313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25293 && iVar1 < Global_262145.f_25314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25294 && iVar1 < Global_262145.f_25315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25295 && iVar1 < Global_262145.f_25316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25296 && iVar1 < Global_262145.f_25317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25297 && iVar1 < Global_262145.f_25318)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25298 && iVar1 < Global_262145.f_25319)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25299 && iVar1 < Global_262145.f_25320)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25300 && iVar1 < Global_262145.f_25321)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25301 && iVar1 < Global_262145.f_25322)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25302 && iVar1 < Global_262145.f_25323)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25303 && iVar1 < Global_262145.f_25324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25304 && iVar1 < Global_262145.f_25325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25305 && iVar1 < Global_262145.f_25326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25306 && iVar1 < Global_262145.f_25327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25307 && iVar1 < Global_262145.f_25328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25308 && iVar1 < Global_262145.f_25329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25309 && iVar1 < Global_262145.f_25330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25310 && iVar1 < Global_262145.f_25331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25311 && iVar1 < Global_262145.f_25332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28111 && iVar1 < Global_262145.f_28132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28112 && iVar1 < Global_262145.f_28133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28113 && iVar1 < Global_262145.f_28134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28114 && iVar1 < Global_262145.f_28135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28115 && iVar1 < Global_262145.f_28136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28116 && iVar1 < Global_262145.f_28137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28117 && iVar1 < Global_262145.f_28138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28118 && iVar1 < Global_262145.f_28139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28119 && iVar1 < Global_262145.f_28140)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28120 && iVar1 < Global_262145.f_28141)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28121 && iVar1 < Global_262145.f_28142)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28122 && iVar1 < Global_262145.f_28143)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28123 && iVar1 < Global_262145.f_28144)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28124 && iVar1 < Global_262145.f_28145)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28125 && iVar1 < Global_262145.f_28146)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28126 && iVar1 < Global_262145.f_28147)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28127 && iVar1 < Global_262145.f_28148)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28128 && iVar1 < Global_262145.f_28149)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28129 && iVar1 < Global_262145.f_28150)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28130 && iVar1 < Global_262145.f_28151)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28131 && iVar1 < Global_262145.f_28152)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28154 && iVar1 < Global_262145.f_28155) && !Global_262145.f_28109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28157 && iVar1 < Global_262145.f_28158) && !Global_262145.f_28110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28162 && iVar1 < Global_262145.f_28165)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28163 && iVar1 < Global_262145.f_28166)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28164 && iVar1 < Global_262145.f_28167)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29178 && iVar1 < Global_262145.f_28843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28829 && iVar1 < Global_262145.f_28850)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28830 && iVar1 < Global_262145.f_28836)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29176 && iVar1 < Global_262145.f_28844)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29177 && iVar1 < Global_262145.f_28845)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28823 && iVar1 < Global_262145.f_28842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28824 && iVar1 < Global_262145.f_28851)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28825 && iVar1 < Global_262145.f_28841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28826 && iVar1 < Global_262145.f_28839)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29172 && iVar1 < Global_262145.f_28846)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29173 && iVar1 < Global_262145.f_28847)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29174 && iVar1 < Global_262145.f_28848)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29175 && iVar1 < Global_262145.f_28849)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28827 && iVar1 < Global_262145.f_28838)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28828 && iVar1 < Global_262145.f_28840)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29620 && iVar1 < Global_262145.f_29603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29621 && iVar1 < Global_262145.f_29604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29622 && iVar1 < Global_262145.f_29605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29623 && iVar1 < Global_262145.f_29606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29624 && iVar1 < Global_262145.f_29607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29625 && iVar1 < Global_262145.f_29608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29626 && iVar1 < Global_262145.f_29609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29627 && iVar1 < Global_262145.f_29610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29628 && iVar1 < Global_262145.f_29611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29637)
		{
		}
		else if (!Global_262145.f_29629 && iVar1 < Global_262145.f_29612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29630 && iVar1 < Global_262145.f_29613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29631 && iVar1 < Global_262145.f_29614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29632 && iVar1 < Global_262145.f_29615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29633 && iVar1 < Global_262145.f_29616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29638)
		{
		}
		else if (!Global_262145.f_29634 && iVar1 < Global_262145.f_29617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29635 && iVar1 < Global_262145.f_29618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29636 && iVar1 < Global_262145.f_29619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1244461404)
	{
		if (!Global_262145.f_30484 && iVar1 < Global_262145.f_30467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2038480341)
	{
		if (!Global_262145.f_30485 && iVar1 < Global_262145.f_30468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -291021213)
	{
		if (!Global_262145.f_30486 && iVar1 < Global_262145.f_30469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -452604007)
	{
		if (!Global_262145.f_30487 && iVar1 < Global_262145.f_30470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1540373595)
	{
		if (!Global_262145.f_30488 && iVar1 < Global_262145.f_30471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1858654120)
	{
		if (!Global_262145.f_30489 && iVar1 < Global_262145.f_30472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 579912970)
	{
		if (!Global_262145.f_30490 && iVar1 < Global_262145.f_30473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1193912403)
	{
		if (!Global_262145.f_30491 && iVar1 < Global_262145.f_30474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1377217886)
	{
		if (!Global_262145.f_30492 && iVar1 < Global_262145.f_30475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1755697647)
	{
		if (!Global_262145.f_30493 && iVar1 < Global_262145.f_30476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 426742808)
	{
		if (!Global_262145.f_30494 && iVar1 < Global_262145.f_30477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1582061455)
	{
		if (!Global_262145.f_30495 && iVar1 < Global_262145.f_30478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1507230520)
	{
		if (!Global_262145.f_30496 && iVar1 < Global_262145.f_30479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 736672010)
	{
		if (!Global_262145.f_30497 && iVar1 < Global_262145.f_30480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1416471345)
	{
		if (!Global_262145.f_30498 && iVar1 < Global_262145.f_30481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1304459735)
	{
		if (!Global_262145.f_30499 && iVar1 < Global_262145.f_30482)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1726022652)
	{
		if (!Global_262145.f_30500 && iVar1 < Global_262145.f_30483)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_294()
{
	return 0;
}

int func_295()
{
	return 1;
}

int func_296()
{
	return 1;
}

int func_297()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_298()
{
	var uVar0;
	
	if (unk_0xB2EC8B4970766623())
	{
		if (unk_0x1D0F0A8090E1551E())
		{
			if (unk_0x722D5CFE95568B02())
			{
				unk_0xD885BEFA31A18D47(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x191DDA30577F440A(&uVar0, 2);
				unk_0x191DDA30577F440A(&uVar0, 4);
				unk_0x191DDA30577F440A(&uVar0, 6);
				unk_0x191DDA30577F440A(&Global_25, 2);
				unk_0x191DDA30577F440A(&Global_25, 4);
				unk_0x191DDA30577F440A(&Global_25, 6);
				unk_0xAC4FD27671081628(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xF7701A907195ED86())
				{
					uVar0 = unk_0xC82CD1DB42480082(866);
					unk_0x191DDA30577F440A(&uVar0, 0);
					unk_0x0E32F508F8A14DE9(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151130 == 2)
	{
		return 1;
	}
	else if (Global_151130 == 3)
	{
		return 0;
	}
	if (unk_0xF7701A907195ED86())
	{
		if (unk_0x234B68AC2E35ED5A(unk_0xC82CD1DB42480082(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_299(var uParam0)
{
	return *uParam0;
}

bool func_300(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_32747[iParam0], iParam1);
}

int func_301(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_302(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_302(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_302(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_302(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 14);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 28);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 27);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 24);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 10);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 11);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 9);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 22);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 13);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 2);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 0);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 21);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x191DDA30577F440A(&(uParam0->f_9), 30);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 23);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_112293.f_32747.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_237(Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_112293.f_32747.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_112293.f_32747.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 19))
	{
		if (!func_237(Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 20))
	{
		if (!func_237(Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_302(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_304(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_303(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_303(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_112293.f_9083.f_99.f_58[128] && !Global_112293.f_9083.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_112293.f_9083.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_112293.f_9083.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_304(int iParam0)
{
	return iParam0 < 3;
}

bool func_305(int iParam0, var uParam1, var uParam2)
{
	struct<35> Var0;
	
	Stack.Push(iParam0);
	Call_Loc(Local_2036.f_294.f_34);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_306(Local_227.f_780.f_1[iParam0 /*14*/].f_4, Local_227.f_780.f_1[iParam0 /*14*/].f_4, Local_227.f_780.f_1[iParam0 /*14*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_306(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var66;
	
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (!func_428())
	{
		return 0;
	}
	if (func_427() && !Global_2405077.f_679 == unk_0x2053F6ACFD4ED4BC())
	{
		if (!Global_2405077.f_675 == 0)
		{
			Global_2405077.f_675 = 0;
			func_426();
			func_425();
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_674)
	{
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) < func_424(0))
			{
				return 0;
			}
			else
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	else
	{
		if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_676) > 30000)
		{
			Global_2405077.f_675 = 0;
		}
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) > func_424(1))
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_418(Param0))
		{
			if (func_417(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405077.f_675 == 0)
	{
		if (SYSTEM::VDIST(Global_2405077.f_694, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2405077.f_697 != iParam6)
		{
			return 0;
		}
	}
	unk_0xABAA7F8FD10DCDF2((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2405077.f_675 == 0)
	{
		Global_2405077.f_681 = 0;
		Global_2405077.f_676 = unk_0xCB3024ED32EBF9EC();
		Global_2405077.f_674 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_678 = unk_0xCB3024ED32EBF9EC();
		Global_2405077.f_694 = { Param0 };
		Global_2405077.f_697 = iParam6;
		Global_2405077.f_680 = unk_0xCB3024ED32EBF9EC();
		func_416();
		func_426();
		if (!uParam10->f_27 || (((((((func_415(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2544210.f_924) && !Global_2544210.f_913) && !Global_2544210.f_921) && !Global_2544210.f_925) && !Global_2544210.f_933) && !Global_2544210.f_945))
		{
			func_396(Param0, iParam6);
		}
		if (func_382(Param0))
		{
			func_396(Param0, iParam6);
		}
		Global_2405077.f_675 = 2;
	}
	switch (Global_2405077.f_675)
	{
		case 2:
			if (unk_0xA1CB00B61C47B900((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405077.f_682 = { Param0 };
				Global_2405077.f_685 = 0f;
				if (Global_2544210.f_924)
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
				if (((uParam10->f_3 && func_81(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_380(Param0, *uParam9, iParam6, unk_0x1146A9AE09CE2B14(), 0))
				{
					Global_2405077.f_682 = { Param0 };
					Global_2405077.f_685 = *uParam9;
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
					if (uParam10->f_32 && Global_2405077.f_681 > 0)
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
					Var5.f_60 = uParam10->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_326(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var5);
				}
				func_324(Global_2405077.f_682, Global_2405077.f_685, iParam6, &(Global_2405077.f_672));
				Global_2405077.f_670 = 0;
				Global_2405077.f_671 = 0;
				Global_2405077.f_681++;
				Global_2405077.f_677 = unk_0xCB3024ED32EBF9EC();
				Global_2405077.f_676 = unk_0xCB3024ED32EBF9EC();
				Global_2405077.f_675 = 3;
			}
			break;
		
		case 3:
			if (Global_2405077.f_670)
			{
				if (Global_2405077.f_672 == Global_2405077.f_673)
				{
					if (Global_2405077.f_671)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_323(Global_2405077.f_682, Global_2405077.f_685, iParam6, 1, 1036831949))
							{
								Global_2405077.f_675 = 4;
								Global_2405077.f_699 = unk_0xCB3024ED32EBF9EC();
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
						func_321(Global_2405077.f_682, 0);
						func_320(-1);
					}
				}
				else
				{
					Global_2405077.f_670 = 0;
					Global_2405077.f_671 = 0;
				}
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_677) > 3000)
			{
				func_320(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_699) < 10000)
				{
					if (unk_0xB02FAE47395D3028(Global_2405077.f_698))
					{
						if (unk_0x61C86D1F86F629E4(Global_2405077.f_698))
						{
							if (!unk_0xED1E23A658F29D8D(Global_2405077.f_698))
							{
								if (func_319(Global_2405077.f_682, Global_2405077.f_685, iParam6, unk_0x1146A9AE09CE2B14(), 0) || func_308(Global_2405077.f_682, Global_2405077.f_685, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_321(Global_2405077.f_682, 0);
									func_320(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_321(Global_2405077.f_682, 0);
								func_320(-1);
							}
						}
					}
					else
					{
						func_320(-1);
					}
				}
				else
				{
					func_320(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405077.f_682 = { Param0 };
			Global_2405077.f_685 = 0f;
			Var66.f_6 = 1082130432;
			Var66.f_7 = 1176255488;
			Var66.f_8 = 1;
			Var66.f_10 = 1;
			Var66.f_13 = 1;
			Var66.f_15 = 1;
			Var66.f_16 = 1;
			Var66.f_31 = 1;
			Var66.f_34 = joaat("tailgater");
			Var66.f_38 = 2;
			Var66.f_45 = 2;
			Var66.f_49 = 1123024896;
			Var66.f_53 = 999;
			Var66.f_54 = 1176256410;
			Var66.f_55 = 1;
			Var66.f_56 = 1;
			Var66.f_57 = 1;
			Var66.f_9 = iParam7;
			Var66.f_3 = 3.5f;
			Var66.f_10 = uParam10->f_5;
			Var66.f_4 = *uParam10;
			Var66.f_12 = 1;
			Var66.f_13 = 0;
			Var66.f_15 = uParam10->f_6;
			Var66.f_11 = uParam10->f_7;
			Var66.f_6 = uParam10->f_8;
			Var66.f_7 = uParam10->f_9;
			Var66 = { Param3 };
			Var66.f_34 = iParam6;
			Var66.f_31 = uParam10->f_13;
			Var66.f_30 = 1;
			Var66.f_48 = uParam10->f_14;
			Var66.f_56 = uParam10->f_25;
			Var66.f_57 = uParam10->f_26;
			Var66.f_30 = uParam10->f_30;
			Var66.f_29 = uParam10->f_31;
			Var66.f_59 = uParam10->f_33;
			Var66.f_60 = uParam10->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var66.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var66.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var66.f_49 = uParam10->f_29;
			func_326(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var66);
			Global_2405077.f_675 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405077.f_694 = { Param0 };
	Global_2405077.f_697 = iParam6;
	Global_2405077.f_678 = unk_0xCB3024ED32EBF9EC();
	if (bVar0)
	{
		Global_2405077.f_515 = 0;
		*uParam8 = { Global_2405077.f_682 };
		*uParam9 = Global_2405077.f_685;
		func_307(1);
		return 1;
	}
	return 0;
}

void func_307(bool bParam0)
{
	Global_2405077.f_675 = 0;
	func_416();
	func_426();
	if (bParam0)
	{
		func_425();
	}
}

int func_308(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
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
		if ((iParam9 == 1 && unk_0x1146A9AE09CE2B14() != iVar1) || iParam9 == 0)
		{
			if (func_11(iVar1, bParam5, bParam6))
			{
				if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
				{
					if (!bParam8 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_83(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam10) && bParam7) && func_91(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iVar1), 0))
								{
									iVar3 = unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iVar1), 0);
									if (unk_0x419E13582192CFEA(iVar3) && !unk_0xE50EB54E0F21BED0(iVar3, 0))
									{
										iVar4 = unk_0x6471F4759775FCA4(iVar3);
										Var5 = { unk_0xD6E677FAD7521410(iVar3, 0) };
										fVar8 = unk_0xA8D713A937F31250(iVar3);
										if (func_318(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_309(func_88(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_309(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_317(iParam7, 1008981770))
	{
		func_310(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_310(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_316(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_311(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x0BCA9ADE67DF9DD8((Var6.x - Var3.x));
}

void func_311(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F1DFD4C1BC6827A(iParam0))
	{
		unk_0xC78A38E5FBC66080(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_314(iParam0);
		if (iVar0 != 0)
		{
			func_312(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_312(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_313(iParam0, &Global_1315836);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x3F1DFD4C1BC6827A(Global_1315836[iVar0]))
		{
			unk_0xC78A38E5FBC66080(Global_1315836[iVar0], &(Global_1315840[iVar0 /*3*/]), &(Global_1315847[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1315840[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1315847[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315840[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315847[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315840[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315847[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315854[iVar0] = (Global_1315847[iVar0 /*3*/] - Global_1315840[iVar0 /*3*/]);
		Global_1315857[iVar0] = (Global_1315847[iVar0 /*3*/].f_1 - Global_1315840[iVar0 /*3*/].f_1);
		Global_1315860[iVar0] = (Global_1315847[iVar0 /*3*/].f_2 - Global_1315840[iVar0 /*3*/].f_2);
		if (Global_1315854[iVar0] > Global_1315863)
		{
			Global_1315863 = Global_1315854[iVar0];
		}
		if (Global_1315860[iVar0] > Global_1315864)
		{
			Global_1315864 = Global_1315860[iVar0];
		}
		iVar0++;
	}
	Global_1315865 = (Global_1315863 * -0.5f);
	Global_1315868 = (Global_1315863 * 0.5f);
	Global_1315865.f_1 = ((((0.5f * Global_1315857[0]) + Global_1315857[1]) + Global_1315836.f_3) * -1f);
	Global_1315868.f_1 = (0.5f * Global_1315857[0]);
	Global_1315865.f_2 = (Global_1315860[0] * -0.5f);
	Global_1315868.f_2 = (Global_1315860[0] * 0.5f);
	*uParam1 = { Global_1315865 };
	*uParam2 = { Global_1315868 };
}

void func_313(int iParam0, var uParam1)
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

int func_314(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_315(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_315(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_316(var uParam0, struct<3> Param1)
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

float func_317(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_311(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_318(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_309(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_310(Param0, fParam3, iParam4, &Global_1713901, &(Global_1713901.f_3), &(Global_1713901.f_6), 1036831949);
	func_310(Param5, fParam8, iParam9, &(Global_1713901.f_7), &(Global_1713901.f_10), &(Global_1713901.f_13), 1036831949);
	if (unk_0x55D9593FF40BF91B(Global_1713901, Global_1713901.f_3, Global_1713901.f_6, Global_1713901.f_7, Global_1713901.f_10, Global_1713901.f_13))
	{
		return 1;
	}
	return 0;
}

int func_319(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_11(iVar1, 0, 1) && func_11(iParam5, 0, 1))
			{
				if (Global_2418033.f_261[iVar0])
				{
					if (func_309(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_309(func_88(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2418033.f_261[iVar0])
			{
				if (func_309(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_11(iVar1, 0, 0))
			{
				if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
				{
					if (func_309(func_88(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_320(int iParam0)
{
	if (Global_2405077.f_681 < 20 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_680) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405077.f_681 < iParam0))
		{
			Global_2405077.f_675 = 2;
		}
		else
		{
			Global_2405077.f_675 = 5;
		}
	}
	else
	{
		Global_2405077.f_675 = 5;
	}
}

void func_321(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_322(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2405077.f_2735[iParam3 /*3*/] };
		Global_2405077.f_2735[iParam3 /*3*/] = { Param0 };
		func_321(Var0, iParam3 + 1);
	}
}

int func_322(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2405077.f_2735[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_323(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!unk_0x443E2CA72E118E64())
	{
		return 0;
	}
	else
	{
		func_426();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405077.f_686[iVar7] == -1 && unk_0x443E2CA72E118E64())
			{
				func_310(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0.5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
				}
				Global_2405077.f_686[iVar7] = unk_0xC7776239A391CCD0(Var0, Var3, fParam6);
				Global_2405077.f_690[iVar7] = unk_0x62D18D65FE22FF39();
				Global_2405077.f_698 = Global_2405077.f_686[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_324(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	struct<8> Var0;
	
	*uParam5 = func_325(&Param0, &uParam3, &iParam4);
	Var0 = 1926582096;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_222(1, 1));
}

int func_325(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = unk_0x15173FB88ABC94F9(&cVar0);
	return iVar16;
}

void func_326(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405077.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_375(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_327(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_327(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
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
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_371(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_366(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	iVar10 = 1;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		iVar10 = 0;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		iVar10 = 0;
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
	Global_2412555.f_162 = 0;
	Global_2412555.f_163 = 0;
	Global_2412555.f_164 = -99;
	Global_2412555.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412555[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412555.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_314(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0xA10A963F310E9A56(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x197809C7C480B379(iVar8))
		{
			unk_0x94D607F083224BCF(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412555.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412555.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x4664EA53DEDF81DD(iVar8)) || unk_0x16EF1D267886F0A5(iVar8))
			{
				unk_0x8748E0122DD45064(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_359(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_356(Var1))
									{
										Var1 = { func_351(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_350(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_346(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_366(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_345(Var1, fVar4, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_371(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_344(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_81(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_81(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_308(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_336(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412555.f_162)
																										{
																											Global_2412555[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412555.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412555.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412555.f_162 == 0)
																									{
																										Global_2412555[0 /*3*/] = { Var1 };
																										Global_2412555.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412555.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2412555[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_335(Var1, fVar4, iVar16);
																													iVar16 = Global_2412555.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412555.f_162++;
																									if (Global_2412555.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412555.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412555[Global_2412555.f_162 /*3*/] = { Var1 };
																									Global_2412555.f_121[Global_2412555.f_162] = fVar4;
																									Global_2412555.f_162++;
																									if (func_346(Var1, uParam2))
																									{
																										Global_2412555.f_163++;
																									}
																									if (Global_2412555.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412555.f_162 == 40)
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
				if (Global_2412555.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412555[0 /*3*/] };
						*uParam1 = Global_2412555.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2412555.f_163 > 0 && !Global_2412555.f_163 == Global_2412555.f_162)
						{
							func_333(0, uParam2);
						}
						iVar26 = unk_0xB36B8558948EA7A8(0, Global_2412555.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412555[0 /*3*/] };
						uVar30 = Global_2412555.f_121[0];
						Global_2412555[0 /*3*/] = { Global_2412555[iVar26 /*3*/] };
						Global_2412555.f_121[0] = Global_2412555.f_121[iVar26];
						Global_2412555[iVar26 /*3*/] = { Var27 };
						Global_2412555.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412555[0 /*3*/] };
						*uParam1 = Global_2412555.f_121[0];
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
						func_332(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_371(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_366(&Var31, bVar35))
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
				func_328(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2412555.f_164 = iVar8;
	}
	return 0;
}

void func_328(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_329(*(uParam0[iVar2 /*4*/]), 5f, unk_0x1146A9AE09CE2B14(), 0, 0))
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

int func_329(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_331(Param0, fParam3, iParam4, iParam5, 0) || func_330(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_330(struct<3> Param0, int iParam3, int iParam4)
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
				if (!Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_309(Param0, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_11(iVar2, 0, 1) && func_11(iParam3, 0, 1))
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

int func_331(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_11(iVar1, 0, 1) && func_11(iParam4, 0, 1))
				{
					if (unk_0x7C3E030BC3ED6671(iVar1) == unk_0x7C3E030BC3ED6671(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_11(iVar1, 0, 1) && func_11(iParam4, 0, 1))
				{
					if (Global_2418033.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2418033.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_88(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2418033.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2418033.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_11(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_88(iVar1), Param0) < 1f)
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

void func_332(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0xB36B8558948EA7A8((1 + iParam0), (40 + iParam0));
		unk_0x87BE0E4947F798AC(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_351(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
		if (!func_356(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_333(int iParam0, var uParam1)
{
	if (!func_346(Global_2412555[iParam0 /*3*/], uParam1))
	{
		Global_2412555.f_162 = (Global_2412555.f_162 - 1);
		func_334(iParam0);
		if (Global_2412555.f_162 > Global_2412555.f_163)
		{
			func_333(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_333(iParam0 + 1, uParam1);
	}
}

void func_334(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412555[iParam0 /*3*/] = { Global_2412555[iParam0 + 1 /*3*/] };
			Global_2412555.f_121[iParam0] = Global_2412555.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_335(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2412555[iParam4 /*3*/] };
	uVar3 = Global_2412555.f_121[iParam4];
	Global_2412555[iParam4 /*3*/] = { Param0 };
	Global_2412555.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412555.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_335(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_336(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_337(iVar5))
		{
			Var1 = { func_88(iVar5) };
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

int func_337(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		if (!func_342(iParam0))
		{
			if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (!unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
				{
					if (func_339(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_338(unk_0x7C3E030BC3ED6671(iParam0), unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
				{
					if (!func_339(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_91(iParam0))
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

int func_338(int iParam0, int iParam1, int iParam2)
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
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 0);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 1);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 2);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 4);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 5);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 6);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 8);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 9);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 10);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 12);
				
				case 1:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 13);
				
				case 2:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 14);
				
				case 3:
					return unk_0x234B68AC2E35ED5A(Global_4456448.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_339(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_340(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590908[iParam0 /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_340(int iParam0)
{
	return func_341(iParam0);
}

bool func_341(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_342(int iParam0)
{
	if (func_84(iParam0, 0))
	{
		return 1;
	}
	if (func_343())
	{
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return 1;
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_343()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_344(struct<3> Param0, float fParam3, int iParam4)
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
	iVar1 = unk_0x7A0F33AA19956CEB(Param0, 30f, 0, iVar0);
	if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
	{
		iVar2 = unk_0x6471F4759775FCA4(iVar1);
		Var3 = { unk_0xD6E677FAD7521410(iVar1, 0) };
		fVar6 = unk_0xA8D713A937F31250(iVar1);
		if (func_318(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x7A0F33AA19956CEB(Param0, 30f, 0, iVar0);
	if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
	{
		iVar2 = unk_0x6471F4759775FCA4(iVar1);
		Var3 = { unk_0xD6E677FAD7521410(iVar1, 0) };
		fVar6 = unk_0xA8D713A937F31250(iVar1);
		if (func_318(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_345(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_319(Param0, fParam3, iParam4, iParam5, iParam6) || func_380(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_346(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_349(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_347(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x09C4C80EA1D5B2F7(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_347(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_348(&Param3, &Param6);
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

void func_348(var uParam0, var uParam1)
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

bool func_349(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_350(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_339(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (Global_4718592.f_32298 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_32298)
			{
				if (Global_4718592.f_32299[iVar0 /*121*/].f_7 != 0)
				{
					if (func_309(Param0, Global_4718592.f_32299[iVar0 /*121*/], Global_4718592.f_32299[iVar0 /*121*/].f_6, Global_4718592.f_32299[iVar0 /*121*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_5739)
			{
				if (Global_4718592.f_5742[iVar0 /*346*/].f_15 != 0)
				{
					if (func_309(Param0, Global_4718592.f_5742[iVar0 /*346*/], Global_4718592.f_5742[iVar0 /*346*/].f_3, Global_4718592.f_5742[iVar0 /*346*/].f_15, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4718592.f_70985 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_70985)
			{
				if (Global_4718592.f_70989[iVar0 /*392*/].f_12 != 0)
				{
					if (func_309(Param0, Global_4718592.f_70989[iVar0 /*392*/], Global_4718592.f_70989[iVar0 /*392*/].f_3, Global_4718592.f_70989[iVar0 /*392*/].f_12, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969056.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969056.f_268)
			{
				if (unk_0x419E13582192CFEA(Global_969056.f_233[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_969056.f_233[iVar0], 0))
				{
					if (func_309(Param0, unk_0xD6E677FAD7521410(Global_969056.f_233[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_233[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_233[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_969056.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_969056.f_266)
			{
				if (unk_0x419E13582192CFEA(Global_969056.f_119[iVar0]) && !unk_0xE50EB54E0F21BED0(Global_969056.f_119[iVar0], 0))
				{
					if (func_309(Param0, unk_0xD6E677FAD7521410(Global_969056.f_119[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_119[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_119[iVar0]), 0.5f))
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

Vector3 func_351(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
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
			if (!func_354(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x8748E0122DD45064(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x74F971D19CAD1757(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
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
			if (unk_0xE267416B80E7921F(iParam11) && func_353(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*uParam3 = (*uParam3 + 180f);
			if (*uParam3 > 360f)
			{
				*uParam3 = (*uParam3 + -360f);
			}
		}
		if (*uParam3 <= 90f || *uParam3 > 270f)
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
					fVar14 = func_352(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_352(iParam11, 1.5f);
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
		if (!func_354(Param0, *uParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*uParam3 = (*uParam3 + 180f);
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
	Var0 = { unk_0x26C2ACB261895E70(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA625D96BDE6A2827(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_352(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_352(iParam11, 1.5f);
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

float func_352(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_311(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_353(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0x7956E831D8C0C17C(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_354(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_316(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_355(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_355(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_356(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_358(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412262[iVar1])
	{
		if (func_357(Param0, &(Global_2411559[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412262[8])
	{
		if (func_357(Param0, &(Global_2411559[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_357(struct<3> Param0, var uParam3)
{
	return unk_0x09C4C80EA1D5B2F7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_358(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411550[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411550[1])
	{
		if (Param0 < Global_2411554[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411550[2])
	{
		if (Param0 < Global_2411554[1])
		{
			return 3;
		}
		else if (Param0 < Global_2411554[2])
		{
			return 4;
		}
		else if (Param0 < Global_2411554[3])
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

int func_359(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_365(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x644B8DBA4F69BB73(0.01f, 360f);
			func_364(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 0, fVar4);
			if (func_360(Var1, &uVar0) || func_365(Var1))
			{
				Var1 = { *uParam0 };
				func_364(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_360(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_363())
	{
		return 0;
	}
	iVar1 = func_362();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_361(Param0, &(Global_2405077.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_361(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_349(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405077.f_2733) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_347(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x09C4C80EA1D5B2F7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x09C4C80EA1D5B2F7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x09C4C80EA1D5B2F7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x09C4C80EA1D5B2F7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_362()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_363()
{
	return Global_1683970.f_502;
}

void func_364(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_316(&Var0, 0f, 0f, unk_0x644B8DBA4F69BB73(0f, 360f));
		}
		else
		{
			func_316(&Var0, 0f, 0f, fParam7);
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

int func_365(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405077.f_595 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2405077.f_592);
		if (fVar0 < Global_2405077.f_595)
		{
			return 1;
		}
	}
	return 0;
}

bool func_366(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405077.f_26.f_18)
	{
		switch (Global_2405077.f_26.f_17)
		{
			case 0:
				if (func_349(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_347(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x09C4C80EA1D5B2F7(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_367(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, Global_2405077.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_367(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_364(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_370(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_368(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x9FB743331EC18DF4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_349(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_347(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x09C4C80EA1D5B2F7(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_368(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_369(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(unk_0x6EE46314283D3C7D(Var0.x, Var0.f_1, Var3.x, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_355(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_355(Var6, Var3) >= 0f)
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
		Var6 = { func_369(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_369(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(unk_0x6EE46314283D3C7D(Var26.x, Var26.f_1, Var29.x, Var29.f_1)));
		if (!bParam9)
		{
			if (func_355(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_355(Var6, Var29) >= 0f)
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

Vector3 func_369(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

void func_370(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_371(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_418(Param0))
	{
		if (func_374(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_372(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_322(*uParam3, 1056964608))
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
				func_364(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_372(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_360(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_373(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_360(Var2, &uVar1) || func_365(Var2))
			{
				Var2 = { *uParam0 };
				func_373(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_373(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_367(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_367(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_367(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_364(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_370(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_368(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_374(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2410002[iVar0 /*17*/].f_16))
			{
				if (func_361(*uParam0, &(Global_2410002[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2410002[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2410002[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_373(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_374(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_373(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_375(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2405077.f_1753 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_371(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_366(uParam0, 1))
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
		Global_2412555.f_162 = 0;
		Global_2412555.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2412555[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2412555.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_378(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_377();
		}
		else
		{
			func_376();
		}
		iVar1 = 0;
		while (iVar1 < Global_2405077.f_1753)
		{
			iVar2 = Global_2405077.f_2159[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2405077.f_1754[iVar2 /*4*/] };
				fVar6 = Global_2405077.f_1754[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.x, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_345(Var3, fVar6, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_371(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_344(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_81(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_81(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_308(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar13 = func_336(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2412555.f_162)
															{
																Global_2412555[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2412555.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2412555.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412555.f_162 == 0)
														{
															Global_2412555[0 /*3*/] = { Var3 };
															Global_2412555.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2412555.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2412555[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_335(Var3, fVar6, iVar7);
																		iVar7 = Global_2412555.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2412555.f_162++;
														if (Global_2412555.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405077.f_1753;
															}
															else if (Global_2412555.f_162 == 40)
															{
																iVar1 = Global_2405077.f_1753;
															}
														}
													}
													else
													{
														Global_2412555[Global_2412555.f_162 /*3*/] = { Var3 };
														Global_2412555.f_121[Global_2412555.f_162] = fVar6;
														Global_2412555.f_162++;
														if (Global_2412555.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2405077.f_1753;
															}
															else if (Global_2412555.f_162 == 40)
															{
																iVar1 = Global_2405077.f_1753;
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
		if (Global_2412555.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412555[0 /*3*/] };
				*uParam1 = Global_2412555.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412555.f_163 > 0 && !Global_2412555.f_163 == Global_2412555.f_162)
				{
					func_333(0, uParam2);
				}
				iVar0 = unk_0xB36B8558948EA7A8(0, Global_2412555.f_162);
				Var15 = { Global_2412555[0 /*3*/] };
				uVar18 = Global_2412555.f_121[0];
				Global_2412555[0 /*3*/] = { Global_2412555[iVar0 /*3*/] };
				Global_2412555.f_121[0] = Global_2412555.f_121[iVar0];
				Global_2412555[iVar0 /*3*/] = { Var15 };
				Global_2412555.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2412555[0 /*3*/] };
				*uParam1 = Global_2412555.f_121[0];
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
			else if (uParam2->f_59 && Global_2405077.f_1753 > 0)
			{
				iVar0 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
				*uParam0 = { Global_2405077.f_1754[iVar0 /*4*/] };
				*uParam1 = Global_2405077.f_1754[iVar0 /*4*/].f_3;
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

void func_376()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_377()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		iVar1 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
		iVar2 = unk_0xB36B8558948EA7A8(0, Global_2405077.f_1753);
		uVar3 = Global_2405077.f_2159[iVar1];
		Global_2405077.f_2159[iVar1] = Global_2405077.f_2159[iVar2];
		Global_2405077.f_2159[iVar2] = uVar3;
		iVar0++;
	}
}

void func_378(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405077.f_1753)
	{
		uVar1 = func_379(Param0, fVar0, &fVar0);
		Global_2405077.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_379(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405077.f_1753)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2405077.f_1754[iVar3 /*4*/]);
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

int func_380(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_381(Param0, iParam4, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_318(Param0, fParam3, iParam4, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_11(iVar2, 0, 1) && func_11(iParam5, 0, 1))
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

int func_381(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_317(iParam3, 1008981770);
	fVar1 = func_317(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_382(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2544210.f_924 && func_383(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_383(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam3 = -1;
	iVar2 = func_395(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_384(iVar1))
			{
				if (func_395(Global_1683970.f_516[iVar0 /*3*/], 0) == iVar2)
				{
					*iParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_394(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_266 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_64())
	{
		if (Global_1590908[iVar1 /*874*/].f_267.f_266 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	if (func_393(unk_0x1146A9AE09CE2B14(), 0) || (func_390(unk_0x1146A9AE09CE2B14()) && func_259(func_389(unk_0x1146A9AE09CE2B14())) == 12))
	{
		return 1;
	}
	if (func_388(unk_0x1146A9AE09CE2B14()) || (func_390(unk_0x1146A9AE09CE2B14()) && func_259(func_389(unk_0x1146A9AE09CE2B14())) == 8))
	{
		return 1;
	}
	if (func_387(unk_0x1146A9AE09CE2B14()) || (func_390(unk_0x1146A9AE09CE2B14()) && func_259(func_389(unk_0x1146A9AE09CE2B14())) == 5))
	{
		return 1;
	}
	if (func_386(unk_0x1146A9AE09CE2B14()) || (func_390(unk_0x1146A9AE09CE2B14()) && func_259(func_389(unk_0x1146A9AE09CE2B14())) == 10))
	{
		return 1;
	}
	if (func_385(unk_0x1146A9AE09CE2B14()) || (func_390(unk_0x1146A9AE09CE2B14()) && func_259(func_389(unk_0x1146A9AE09CE2B14())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_259(Global_2426865[iParam0 /*449*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_259(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_64())
			{
				return func_259(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_388(int iParam0)
{
	if (iParam0 != func_64())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_64())
			{
				return func_259(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != func_64() && func_11(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_390(int iParam0)
{
	if (iParam0 != func_64() && func_11(iParam0, 1, 1))
	{
		if (func_392(iParam0) && !func_391(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_391(int iParam0)
{
	if (iParam0 != func_64() && func_11(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_392(int iParam0)
{
	if (iParam0 != func_64() && func_11(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_393(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_64())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_64())
			{
				return func_259(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_394(int iParam0)
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

int func_395(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_361(Param0, &(Global_2410002[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_396(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2405077.f_45.f_318)
	{
		return;
	}
	if (!func_414())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_413(Param0);
		if (iVar1 > -1)
		{
			func_425();
			switch (iVar1)
			{
				case 0:
					func_412(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_412(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_412(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_412(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_412(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_412(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_412(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_412(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_412(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_412(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_412(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_412(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_412(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_412(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_412(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_412(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_412(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_412(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_412(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_412(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_412(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_412(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_412(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_412(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_412(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_412(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_412(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_412(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_412(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_412(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_412(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_412(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_412(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_412(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_412(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_412(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_412(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_412(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_412(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_412(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_412(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_412(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_412(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_412(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_412(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_412(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_412(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_412(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_412(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_412(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_412(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_412(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_412(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_410(78);
					break;
				
				case 11:
					func_410(79);
					break;
				
				case 12:
					func_410(82);
					break;
				
				case 13:
					func_410(81);
					break;
				
				case 14:
					func_410(73);
					break;
				
				case 15:
					func_412(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_412(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_412(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_412(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_410(75);
					break;
				
				case 17:
					func_410(76);
					break;
				
				case 18:
					func_410(77);
					break;
				
				case 19:
					func_412(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_412(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_412(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_412(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_410(80);
					break;
				
				case 21:
				case 25:
					func_410(87);
					break;
				
				case 22:
				case 26:
					func_410(88);
					break;
				
				case 23:
				case 27:
					func_410(89);
					break;
				
				case 24:
				case 28:
					func_410(90);
					break;
				
				case 29:
				case 30:
					if (func_409(iParam3))
					{
						func_410(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29);
					}
					break;
				
				case 31:
					func_412(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_412(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_412(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_412(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_412(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_412(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_412(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_412(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_412(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_412(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_412(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_412(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_412(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_412(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_412(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_412(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_412(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_412(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_412(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_412(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_412(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_412(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_412(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_412(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_412(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_412(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_412(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_412(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_412(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_412(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_412(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_412(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_412(-194.254f, -2018.756f, 26.62f, 75f);
					func_412(-186.956f, -2031.369f, 26.62f, 338f);
					func_412(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_412(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_412(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_412(-233.372f, -2089.601f, 26.62f, 304f);
					func_412(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_412(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_412(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_412(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_412(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_412(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_412(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_412(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_412(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_412(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_412(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_412(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_412(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_412(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_412(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_412(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_406(Param0, &iVar2, &iVar6) || (func_383(Param0, &(iVar2[0])) && (unk_0x48E10529AEAE00F9(iParam3) || unk_0xE267416B80E7921F(iParam3))))
		{
			func_425();
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
					Global_2405077.f_515 = 1;
				}
				if (!iVar6[iVar0] && func_405(iVar2[iVar0], -1))
				{
					if (func_409(iParam3))
					{
						func_410(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_404(unk_0x7D2B9E6A64637269()) || func_403(unk_0x7D2B9E6A64637269())) && unk_0x48E10529AEAE00F9(iParam3)) || unk_0xE267416B80E7921F(iParam3))
					{
						if (func_402(iParam3))
						{
							func_401(iVar2[iVar0]);
						}
						else if (func_400(iParam3))
						{
							func_399(iVar2[iVar0]);
							func_401(iVar2[iVar0]);
						}
						else
						{
							func_399(iVar2[iVar0]);
							func_401(iVar2[iVar0]);
						}
					}
					else
					{
						func_397(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_410(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_397(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_412(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_412(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_412(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_412(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_412(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_412(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_412(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_412(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_412(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_412(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_412(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_412(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_412(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_412(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_412(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_412(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_412(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_412(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_412(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_412(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_412(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_412(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_412(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_412(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_412(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_412(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_412(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_412(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_412(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_412(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_412(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_412(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_412(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_412(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_412(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_412(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_412(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_412(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_412(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_412(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_412(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_412(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_412(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_412(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_412(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_412(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_412(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_412(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_412(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_412(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_412(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_412(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_412(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_412(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_412(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_412(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_412(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_412(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_412(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_412(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_412(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_412(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_412(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_412(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_412(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_412(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_412(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_412(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_412(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_412(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_412(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_412(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_412(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_412(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_412(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_412(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_412(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_412(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_412(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_412(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_412(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_412(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_412(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_412(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_412(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_412(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_412(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_412(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_412(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_412(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_412(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_412(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_412(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_412(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_412(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_412(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_412(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_412(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_412(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_412(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_412(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_412(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_412(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_412(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_412(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_412(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_412(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_412(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_412(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_412(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_412(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_412(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_412(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_412(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_412(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_412(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_412(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_412(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_412(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_412(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_412(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_412(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_412(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_412(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_412(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_412(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_412(142.7427f, -2536.147f, 5f, 205.0002f);
			func_412(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_412(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_412(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_412(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_412(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_412(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_412(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_412(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_412(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_412(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_412(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_412(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_412(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_412(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_412(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_412(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_412(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_412(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_412(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_412(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_412(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_412(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_412(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_412(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_412(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_412(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_412(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_412(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_412(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_412(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_412(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_412(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_412(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_412(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_412(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_412(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_412(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_412(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_412(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_412(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_412(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_412(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_412(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_412(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_412(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_412(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_412(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_412(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_412(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_412(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_412(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_412(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_412(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_412(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_412(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_412(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_412(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_412(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_412(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_412(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_412(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_412(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_412(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_412(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_412(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_412(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_412(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_412(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_412(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_412(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_412(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_412(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_412(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_412(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_412(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_412(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_412(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_412(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_412(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_412(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_412(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_412(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_412(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_412(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_412(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_412(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_412(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_412(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_412(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_412(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_412(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_412(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_412(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_412(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_412(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_412(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_412(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_412(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_412(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_412(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_412(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_412(-1823.414f, 3092.762f, 31.843f, 330f);
			func_412(-1819.045f, 3100.435f, 31.845f, 330f);
			func_412(-1833.313f, 3075.722f, 31.838f, 330f);
			func_412(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_412(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_412(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_412(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_412(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_412(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_412(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_412(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_412(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_412(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_412(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_412(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_412(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_412(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_412(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_412(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_412(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_412(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_412(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_412(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_412(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_412(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_412(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_412(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_412(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_412(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_412(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_412(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_412(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_412(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_412(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_412(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_412(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_412(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_412(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_412(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_412(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_412(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_412(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_412(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_412(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_412(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_412(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_412(1231.279f, 2910.881f, 43.3085f, 12f);
				func_412(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_412(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_412(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_412(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_412(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_412(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_412(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_412(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_412(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_412(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_412(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_412(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_412(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_412(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_412(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_412(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_412(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_412(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_412(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_412(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_412(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_412(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_412(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_412(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_412(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_412(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_412(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_412(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_412(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_412(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_412(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_412(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_412(3.855f, 2672.388f, 78.437f, 319.2f);
				func_412(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_412(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_412(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_412(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_412(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_412(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_412(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_412(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_412(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_412(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_412(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_412(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_412(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_412(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_412(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_412(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_412(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_412(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_412(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_412(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_412(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_412(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_412(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_412(102.851f, 2688.009f, 51.732f, 224f);
				func_412(109.815f, 2681.012f, 51.112f, 224f);
				func_412(116.355f, 2674.26f, 50.529f, 224f);
				func_412(125.138f, 2665.98f, 49.8f, 224f);
				func_412(132.228f, 2659.865f, 49.26f, 228.4f);
				func_412(139.354f, 2653.536f, 48.737f, 228.4f);
				func_412(88.512f, 2702.995f, 53.042f, 224.199f);
				func_412(81.565f, 2710.357f, 53.67f, 224.199f);
				func_412(75.156f, 2716.981f, 54.223f, 224.199f);
				func_412(68.442f, 2723.806f, 54.775f, 226.199f);
				func_412(61.449f, 2730.606f, 55.308f, 226.199f);
				func_412(53.702f, 2738.167f, 55.855f, 226.199f);
				func_412(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_412(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_412(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_412(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_412(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_412(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_412(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_412(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_412(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_412(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_412(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_412(2714.633f, 3918.283f, 42.938f, 16f);
				func_412(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_412(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_412(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_412(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_412(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_412(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_412(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_412(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_412(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_412(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_412(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_412(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_412(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_412(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_412(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_412(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_412(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_412(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_412(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_412(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_412(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_412(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_412(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_412(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_412(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_412(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_412(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_412(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_412(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_412(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_412(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_412(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_412(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_412(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_412(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_412(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_412(3374.923f, 5520.177f, 20.3207f, 86f);
				func_412(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_412(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_412(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_412(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_412(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_412(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_412(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_412(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_412(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_412(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_412(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_412(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_412(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_412(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_412(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_412(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_412(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_412(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_412(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_412(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_412(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_412(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_412(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_412(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_412(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_412(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(43.848f, 6845.657f, 13.379f, 247.2f);
				func_412(50.379f, 6861.146f, 15.105f, 247.2f);
				func_412(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_412(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_412(55.806f, 6875.081f, 14.824f, 247.2f);
				func_412(11.616f, 6877.079f, 11.466f, 247.2f);
				func_412(18.954f, 6891.633f, 11.37f, 247.2f);
				func_412(26.68f, 6907.587f, 11.869f, 247.2f);
				func_412(7.479f, 6907.895f, 12.024f, 247.2f);
				func_412(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_412(35.591f, 6836.608f, 13.288f, 274.4f);
				func_412(36.028f, 6830.135f, 13.801f, 270.8f);
				func_412(35.114f, 6823.884f, 14.527f, 260.8f);
				func_412(48.779f, 6838.693f, 14.337f, 273.6f);
				func_412(56.738f, 6821.8f, 15.244f, 244.8f);
				func_412(48.377f, 6825.895f, 14.656f, 249.8f);
				func_412(49.11f, 6831.439f, 13.991f, 274.8f);
				func_412(53.544f, 6818.275f, 16.342f, 243f);
				func_412(46.162f, 6821.945f, 15.483f, 249.8f);
				func_412(60.129f, 6836.8f, 15.605f, 269.6f);
				func_412(40.88f, 6802.952f, 20.113f, 242.6f);
				func_412(48.203f, 6799.134f, 20.897f, 244.4f);
				func_412(70.449f, 6809.271f, 16.846f, 243f);
				func_412(61.436f, 6814.266f, 16.71f, 244.2f);
				func_412(56.142f, 6793.458f, 19.806f, 242.6f);
				func_412(65.759f, 6791.12f, 18.433f, 276.4f);
				func_412(77.305f, 6805.391f, 18.558f, 245.6f);
				func_412(85.893f, 6800.243f, 18.535f, 249.8f);
				func_412(56.85f, 6780.582f, 18.822f, 297.999f);
				func_412(65.636f, 6784.669f, 18.789f, 293.799f);
				func_412(74.121f, 6788.498f, 18.739f, 293.799f);
				func_412(97.779f, 6796.32f, 19.02f, 276.799f);
				func_412(106.76f, 6796.983f, 18.914f, 272.599f);
				func_412(112.387f, 6802.858f, 18.994f, 210.599f);
				func_412(117.58f, 6802.644f, 18.663f, 209.399f);
				func_412(122.481f, 6802.693f, 18.468f, 209.399f);
				func_412(127.182f, 6802.686f, 18.218f, 209.399f);
				func_412(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_412(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_412(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_412(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_412(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_412(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_412(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_412(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_412(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_412(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_412(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_412(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_412(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_412(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_412(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_412(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_412(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_412(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_412(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_412(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_412(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_412(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_412(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_412(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_412(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_412(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_412(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_412(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_412(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_412(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_412(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_412(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_412(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_412(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_412(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_412(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_412(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_412(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_412(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_412(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_412(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_412(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_412(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_412(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_412(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_412(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_412(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_412(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_412(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_412(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_412(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_412(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_412(30.027f, 3292.351f, 38.604f, 140.199f);
				func_412(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_412(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_412(23.897f, 3283.152f, 39.381f, 145.399f);
				func_412(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_412(18.723f, 3274.025f, 40.054f, 155.799f);
				func_412(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_412(36.958f, 3298.847f, 38.001f, 127.799f);
				func_412(54.165f, 3311.582f, 36.517f, 303.799f);
				func_412(61.607f, 3317.105f, 35.916f, 306.999f);
				func_412(68.994f, 3323.129f, 35.364f, 308.199f);
				func_412(76.266f, 3329.467f, 34.805f, 311.399f);
				func_412(82.757f, 3335.915f, 34.344f, 316.598f);
				func_412(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_412(14.664f, 3263.688f, 40.931f, 160.398f);
				func_412(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_412(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_412(89.575f, 3343.311f, 33.932f, 318.398f);
				func_412(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_412(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_412(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_412(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_412(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_412(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_412(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_412(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_412(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_412(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_412(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_412(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_412(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_412(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_412(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_412(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_412(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_412(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_412(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_412(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_412(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_412(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_412(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_412(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_412(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_412(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_412(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_412(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_412(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_412(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_412(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_412(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_412(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_412(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_412(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_412(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_412(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_412(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_412(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_412(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_412(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_412(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_412(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_412(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_412(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_412(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_412(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_412(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_412(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_412(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_412(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_412(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_412(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_412(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_412(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_412(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_412(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_412(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_412(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_412(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_412(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_412(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_412(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_412(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_412(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_412(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_412(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_412(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_412(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_412(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_412(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_412(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_412(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_412(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_412(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_412(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_412(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_412(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_412(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_412(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_398(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_398(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_398(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_398(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_398(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_398(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_398(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_398(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_398(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_398(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_398(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_398(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_398(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_398(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_398(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_398(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_398(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_398(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_398(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_398(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_398(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_398(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_398(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_398(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_398(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_398(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_398(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_398(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_398(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_398(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_398(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_398(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_398(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_311(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { unk_0x26C2ACB261895E70(Param0, fParam3, Var7) };
		func_412(Var10, fParam3);
	}
	else
	{
		func_412(Param0, fParam3);
	}
}

void func_399(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_412(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_412(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_412(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_412(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_412(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_412(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_412(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_412(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_412(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_412(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_412(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_412(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_412(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_412(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_412(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_412(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_412(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_412(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_412(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_412(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_412(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_412(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_412(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_412(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_412(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_412(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_412(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_412(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_412(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_412(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_412(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_412(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_412(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_412(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_412(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_412(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_412(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_412(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_412(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_412(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_412(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_412(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_412(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_412(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_412(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_412(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_412(-1356.991f, -3242.228f, 12.945f, 330f);
			func_412(-1369.313f, -3234.758f, 12.945f, 330f);
			func_412(-1381.751f, -3227.408f, 12.945f, 330f);
			func_412(-1394.302f, -3220.021f, 12.945f, 330f);
			func_412(-1354.339f, -3223.129f, 12.945f, 330f);
			func_412(-1366.302f, -3215.809f, 12.945f, 330f);
			func_412(-1378.492f, -3208.645f, 12.945f, 330f);
			func_412(-1350.322f, -3203.405f, 12.945f, 330f);
			func_412(-1362.684f, -3196.451f, 12.945f, 330f);
			func_412(-1347.089f, -3182.69f, 12.945f, 330f);
			func_412(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_412(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_412(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_412(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_412(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_412(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_412(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_412(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_412(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_412(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_412(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_412(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_412(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_412(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_412(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_412(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_412(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_412(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_412(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_412(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_412(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_412(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_412(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_412(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_412(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_412(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_412(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_412(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_412(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_412(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_412(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_412(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_412(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_412(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_412(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_412(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_412(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_412(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_412(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_412(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_412(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_412(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_412(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_412(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_412(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_412(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_412(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_412(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_412(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_412(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_412(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_412(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_412(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_412(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_412(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_412(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_412(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_412(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_412(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_412(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_412(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_412(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_412(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_412(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_412(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_412(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_412(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_412(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_412(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_412(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_412(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_412(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_412(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_412(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_412(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_412(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_412(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_412(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_412(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_412(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_412(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_412(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_412(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_412(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_412(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_412(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_412(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_412(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_412(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_412(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_412(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_412(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_412(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_412(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_412(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_412(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_412(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_412(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_412(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_412(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_412(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_412(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_412(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_412(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_412(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_412(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_412(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_412(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_412(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_412(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_412(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_412(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_412(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_412(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_412(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_412(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_412(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_412(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_412(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_412(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_412(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_412(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_412(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_412(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_412(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_412(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_412(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_412(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_412(-2484.323f, 3249.294f, 31.828f, 151f);
			func_412(-2495.313f, 3255.746f, 31.828f, 151f);
			func_412(-2472.644f, 3242.684f, 31.828f, 151f);
			func_412(-2506.313f, 3262.27f, 31.823f, 151f);
			func_412(-2461.494f, 3235.93f, 31.828f, 151f);
			func_412(-2505.602f, 3238.049f, 31.828f, 151f);
			func_412(-2481.937f, 3224.8f, 31.828f, 151f);
			func_412(-2516.813f, 3244.266f, 31.823f, 151f);
			func_412(-2470.03f, 3217.899f, 31.828f, 151f);
			func_412(-2493.933f, 3231.308f, 31.828f, 151f);
			func_412(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_412(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_412(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_412(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_412(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_412(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_412(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_412(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_412(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_412(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_412(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_412(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_412(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_412(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_412(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_412(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_412(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_412(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_412(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_412(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_412(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_412(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_412(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_412(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_412(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_412(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_412(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_412(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_412(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_412(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_412(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_412(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_412(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_412(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_412(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_412(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_400(int iParam0)
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

void func_401(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_412(-947.712f, -3367.704f, 12.944f, 60f);
			func_412(-904.692f, -3293.072f, 12.944f, 60f);
			func_412(-863.71f, -3221.978f, 12.944f, 60f);
			func_412(-966.418f, -3162.773f, 12.944f, 60f);
			func_412(-1007.435f, -3233.93f, 12.944f, 60f);
			func_412(-1050.455f, -3308.559f, 12.944f, 60f);
			func_412(-1145.673f, -3253.456f, 12.944f, 60f);
			func_412(-1098.386f, -3181.428f, 12.944f, 60f);
			func_412(-1060.474f, -3108.903f, 12.944f, 60f);
			func_412(-1155.391f, -3053.632f, 12.944f, 60f);
			func_412(-1196.114f, -3125.146f, 12.948f, 60f);
			func_412(-1235.552f, -3201.86f, 12.944f, 60f);
			func_412(-1344.446f, -3139.177f, 12.944f, 60f);
			func_412(-1301.308f, -3064.341f, 12.944f, 60f);
			func_412(-1260.135f, -2992.912f, 12.944f, 60f);
			func_412(-1364.244f, -2932.9f, 12.98f, 60f);
			func_412(-1405.284f, -3004.108f, 12.96f, 60f);
			func_412(-1448.29f, -3078.72f, 12.95f, 60f);
			func_412(-1535.732f, -3028.318f, 12.945f, 60f);
			func_412(-1492.639f, -2953.558f, 12.945f, 60f);
			func_412(-1451.506f, -2882.2f, 12.944f, 60f);
			func_412(-1553.927f, -2823.12f, 13.002f, 60f);
			func_412(-1595.097f, -2894.571f, 12.944f, 60f);
			func_412(-1637.836f, -2968.714f, 12.945f, 60f);
			func_412(-1740.971f, -2911.484f, 12.944f, 330f);
			func_412(-1696.293f, -2833.978f, 12.944f, 330f);
			func_412(-1651.502f, -2756.273f, 12.945f, 330f);
			func_412(-1588.258f, -2647.575f, 12.944f, 330f);
			func_412(-1536.862f, -2681.378f, 12.945f, 330f);
			func_412(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_412(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_412(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_412(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_412(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_412(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_412(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_412(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_412(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_412(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_412(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_412(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_412(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_412(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_412(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_412(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_412(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_412(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_412(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_412(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_412(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_412(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_412(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_412(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_412(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_412(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_412(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_412(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_412(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_412(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_412(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_402(int iParam0)
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

int func_403(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_404(int iParam0)
{
	if (!unk_0x419E13582192CFEA(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_405(int iParam0, int iParam1)
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

int func_406(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 127)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1049961[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049961[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
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
	while (iVar0 < 154)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_384(iVar0))
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
			if (func_407(iVar0))
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
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1683970.f_516[iVar0 /*3*/], Global_1683970.f_516[iVar0 /*3*/].f_1, 0f);
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

int func_407(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_408(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_273 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_64())
	{
		if (Global_1590908[iVar1 /*874*/].f_267.f_273 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
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

int func_409(int iParam0)
{
	if ((unk_0x69AF387D1A91914C(iParam0) || unk_0x3DA0AF866B552ECB(iParam0)) || unk_0x2F040F7AF0534E16(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_410(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_412(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_412(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_412(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_412(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_412(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_412(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_412(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_412(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_412(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_412(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_412(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_412(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_412(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_412(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_412(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_412(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_412(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_412(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_412(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_412(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_412(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_412(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_412(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_412(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_412(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_412(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_412(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_412(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_412(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_412(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_412(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_412(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_412(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_412(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_412(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_412(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_411())
			{
				func_412(-1608.297f, -556.875f, 33.406f, 310f);
				func_412(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_412(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_412(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_412(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_412(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_412(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_412(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_412(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_412(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_412(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_412(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_411())
			{
				func_412(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_412(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_412(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_412(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_412(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_412(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_412(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_412(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_412(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_412(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_412(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_412(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_411())
			{
				func_412(-102.737f, -597.379f, 35.053f, 160.999f);
				func_412(-97.793f, -589.568f, 35.082f, 134.799f);
				func_412(-110.357f, -619.402f, 35.055f, 160.599f);
				func_412(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_412(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_412(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_412(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_412(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_412(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_412(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_412(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_412(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_411())
			{
				func_412(-59.349f, -779.238f, 43.134f, 228.398f);
				func_412(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_412(-65.212f, -772.66f, 43.151f, 219.398f);
				func_412(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_412(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_412(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_412(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_412(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_412(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_412(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_412(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_412(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_412(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_412(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_412(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_412(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_412(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_412(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_412(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_412(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_412(-1464.5f, -927.9f, 9f, 296.7991f);
			func_412(-1466f, -926.1f, 9f, 296.7991f);
			func_412(-1467.9f, -924.7f, 9f, 296.7991f);
			func_412(-1469.7f, -923.7f, 9f, 296.7991f);
			func_412(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_412(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_412(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_412(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_412(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_412(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_412(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_412(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_412(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_412(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_412(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_412(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_412(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_412(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_412(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_412(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_412(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_412(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_412(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_412(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_412(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_412(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_412(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_412(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_412(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_412(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_412(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_412(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_412(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_412(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_412(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_412(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_412(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_412(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_412(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_412(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_412(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_412(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_412(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_412(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_412(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_412(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_412(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_412(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_412(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_412(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_412(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_412(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_412(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_412(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_412(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_412(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_412(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_412(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_412(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_412(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_412(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_412(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_412(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_412(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_412(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_412(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_412(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_412(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_412(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_412(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_412(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_412(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_412(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_412(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_412(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_412(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_412(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_412(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_412(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_412(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_412(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_412(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_412(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_412(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_412(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_412(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_412(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_412(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_411()
{
	return Global_2453009.f_17;
}

void func_412(struct<3> Param0, float fParam3)
{
	if (Global_2405077.f_1753 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/] = { Param0 };
		Global_2405077.f_1754[Global_2405077.f_1753 /*4*/].f_3 = fParam3;
		Global_2405077.f_1753++;
	}
}

int func_413(struct<3> Param0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2405077.f_2902, Param0) < Global_2405077.f_2910)
	{
		return Global_2405077.f_2905;
	}
	Global_2405077.f_2902 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2412316[iVar0 /*7*/].f_2 + Global_2412316[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_357(Param0, &(Global_2412316[iVar0 /*7*/])))
		{
			Global_2405077.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405077.f_2905 = -1;
	return -1;
}

int func_414()
{
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_13, 0) && !Global_2453903.f_6343)
	{
		return 0;
	}
	return 0;
}

int func_415(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
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
			if (func_384(iVar0))
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
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1683970.f_516[iVar0 /*3*/], Global_1683970.f_516[iVar0 /*3*/].f_1, 0f);
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

void func_416()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405077.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_417(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2412272[iVar0 /*7*/].f_2 + Global_2412272[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_357(Var1, &(Global_2412272[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_368(&Var1, Global_2412272[iVar0 /*7*/], Global_2412272[iVar0 /*7*/].f_3, Global_2412272[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_418(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405077.f_514 && !Global_2405077.f_515)
	{
		if (!Global_2405077.f_45.f_316)
		{
			if (!func_422(unk_0x1146A9AE09CE2B14(), 1))
			{
				return 1;
			}
			if (!func_421(Param0, 1008981770))
			{
				if (!func_374(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_374(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_420(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_419(&(Global_2405077.f_45[iVar0 /*12*/])) };
					if (!func_374(&Var1, 0, 0, 0, 1))
					{
						if (!func_374(&Param0, 0, 0, 0, 1))
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

Vector3 func_419(var uParam0)
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

int func_420(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_361(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_421(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_361(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_422(int iParam0, bool bParam1)
{
	if (func_229() != 0)
	{
		return func_423(iParam0) != 0;
	}
	return func_339(iParam0, bParam1, 0);
}

int func_423(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_424(bool bParam0)
{
	if (unk_0x8B6A925F148E0E94())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_425()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405077.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_1753 = 0;
}

void func_426()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x4BE697D014536271(Global_2405077.f_690[iVar0]))
		{
			if (unk_0x62D18D65FE22FF39() == Global_2405077.f_690[iVar0])
			{
				if (!Global_2405077.f_686[iVar0] == -1)
				{
					if (unk_0xB02FAE47395D3028(Global_2405077.f_686[iVar0]))
					{
						unk_0x120FD3F0779D3C4C(Global_2405077.f_686[iVar0]);
						Global_2405077.f_686[iVar0] = -1;
					}
					else
					{
						Global_2405077.f_686[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405077.f_686[iVar0] == -1)
		{
			Global_2405077.f_686[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_427()
{
	if (!Global_2405077.f_605 == 0 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_610) < func_424(0))
	{
		return 1;
	}
	return 0;
}

int func_428()
{
	if (unk_0xF471787D45ADC2C1())
	{
		if (!unk_0xE544790FBAA57D4F() > 7 && !unk_0xE544790FBAA57D4F() == 5)
		{
			return 0;
		}
	}
	if (Global_2405077.f_516 == unk_0x2053F6ACFD4ED4BC())
	{
		return 0;
	}
	if (!func_430(unk_0x1146A9AE09CE2B14()) && !func_429())
	{
		return 0;
	}
	return 1;
}

bool func_429()
{
	return Global_1312878;
}

int func_430(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_2441237.f_1, iParam0);
	}
	return 1;
}

int func_431(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	
	if (func_437(iParam0, &Var1, &Var4, &uVar10, &iVar0))
	{
		if (unk_0xDB6FBA5468510E93(Var4, Var1, uVar10, &Var7))
		{
			if (func_433(iParam0, Var7, Var4, iVar0))
			{
				Local_4900.f_1068 = { Var7 };
				Local_4900.f_1077 = func_432(Var7, Var4);
				return 1;
			}
		}
	}
	return 0;
}

float func_432(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x832AD84AA258AE80((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_433(int iParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_434(iParam0, Param1, Param4, iParam7))
	{
		return 0;
	}
	if (Local_2036.f_294.f_37 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_2036.f_294.f_37);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!func_81(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_434(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::VDIST(Param1, Param4);
	if (fVar0 > func_436())
	{
		return 0;
	}
	fVar1 = SYSTEM::VDIST(Param1, func_193());
	if (fVar1 < func_162())
	{
		return 0;
	}
	if (unk_0x419E13582192CFEA(iParam7))
	{
		Var2 = { unk_0x8EB57098C563AB39(iParam7, Param1) };
		if (unk_0x0BCA9ADE67DF9DD8(Var2.x) > func_435())
		{
			return 0;
		}
	}
	return 1;
}

float func_435()
{
	if (Local_2036.f_466.f_6 != 0)
	{
		Call_Loc(Local_2036.f_466.f_6);
		return StackVal;
	}
	return 100f;
}

float func_436()
{
	if (Local_2036.f_466.f_5 != 0)
	{
		Call_Loc(Local_2036.f_466.f_5);
		return StackVal;
	}
	return Local_227.f_1282.f_6;
}

int func_437(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_147(iParam0, 15))
	{
		*uParam4 = func_204(iParam0);
		if (unk_0x419E13582192CFEA(*uParam4) && !unk_0xE50EB54E0F21BED0(*uParam4, 0))
		{
			*uParam1 = { unk_0x557C9CA8FCC667DF(*uParam4) };
			*uParam2 = { unk_0xD6E677FAD7521410(*uParam4, 0) };
		}
		else
		{
			return 0;
		}
	}
	else if (Local_2036.f_294.f_35 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_294.f_35);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_294.f_35);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_227.f_780.f_1[iParam0 /*14*/].f_4 };
		*uParam2 = { Local_227.f_780.f_1[iParam0 /*14*/].f_4 };
	}
	if (iLocal_4847 > 0)
	{
		func_438(uParam1);
	}
	if (Local_2036.f_294.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_294.f_36);
		*uParam3 = StackVal;
	}
	else if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 160f;
	}
	else
	{
		*uParam3 = 80f;
	}
	return 1;
}

void func_438(var uParam0)
{
	if (iLocal_4847 < 5)
	{
		switch (iLocal_4847)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_4847 = 0;
	}
	iLocal_4847++;
}

int func_439(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (func_441(iParam0, &Var4, &Var1, &iVar0))
	{
		if (func_440(iParam0, Var4, Var1, iVar0))
		{
			Local_4900.f_1068 = { Var4 };
			Local_4900.f_1077 = func_432(Var4, Var1);
			return 1;
		}
	}
	return 0;
}

int func_440(int iParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	float fVar0;
	
	if (!func_434(iParam0, Param1, Param4, iParam7))
	{
		return 0;
	}
	if (!func_81(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (unk_0x7956E831D8C0C17C(Param1, &fVar0, 1, 0))
	{
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = unk_0x343A67D02BA7963E(Param1.x, Param1.f_1);
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_441(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_147(iParam0, 15))
	{
		*uParam3 = func_204(iParam0);
		if (!unk_0x419E13582192CFEA(*uParam3))
		{
			return 0;
		}
		*uParam2 = { unk_0xD6E677FAD7521410(*uParam3, 0) };
		fVar0 = (func_436() / 2f);
	}
	else
	{
		*uParam2 = { Local_227.f_780.f_1[iParam0 /*14*/].f_4 };
	}
	*uParam1 = { func_443(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_4847) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_4847) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_442());
	iLocal_4847++;
	if (iLocal_4847 >= 12)
	{
		iLocal_4847 = 0;
	}
	return 1;
}

float func_442()
{
	return 60f;
}

Vector3 func_443(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_444(var uParam0, int iParam1)
{
	int iVar0;
	
	if (!func_147(iParam1, 15))
	{
		return;
	}
	if (Local_2036.f_466.f_9 == 0)
	{
		return;
	}
	Call_Loc(Local_2036.f_466.f_9);
	iVar0 = StackVal;
	if (iVar0 == 0 || !unk_0x3F1DFD4C1BC6827A(iVar0))
	{
		return;
	}
	*uParam0 = iVar0;
}

int func_445(int iParam0)
{
	int iVar0;
	
	if (!func_134(1, iParam0))
	{
		return 0;
	}
	iVar0 = Local_227.f_780.f_1[iParam0 /*14*/].f_9;
	if (iVar0 != -1)
	{
		if (!func_125(Local_227.f_1401.f_1[iVar0]) || !func_15(&(Local_4900.f_1060), 2000, 0))
		{
			return 0;
		}
	}
	if (unk_0xB0339D553BD19B75(iLocal_4825))
	{
		return 0;
	}
	return 1;
}

int func_446(int iParam0)
{
	if (func_147(iParam0, 15))
	{
		if (!func_15(&(Local_4900.f_984.f_11), func_138(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_447(int iParam0)
{
	if (func_147(iParam0, 15))
	{
		return func_140();
	}
	if (Local_2036.f_294.f_21 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_294.f_21);
		return StackVal;
	}
	return 1;
}

void func_448(int iParam0, int iParam1)
{
	if (Local_227.f_780.f_1[iParam0 /*14*/].f_9 == -1)
	{
		return;
	}
	if (func_454(iParam0) > 2 && func_454(iParam0) < 5)
	{
		if (func_449(iParam0, iParam1))
		{
			func_189(iParam0, 2);
		}
		else
		{
			func_188(iParam0, 2);
		}
	}
}

bool func_449(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam1))
	{
		iVar0 = func_450(iParam1);
		if (iVar0 != func_64() && unk_0xFCC26BA7572E9F1F(iVar0))
		{
			iVar1 = unk_0x4645C707A0067CB6(iVar0);
			return func_148(iVar1, 2);
		}
	}
	return func_147(iParam0, 2);
}

int func_450(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0) && !unk_0x9B73EB6255D4AE81(iParam0, -1, 0))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (!unk_0xECEC7528A52B4EE8(iVar0))
		{
			iVar1 = unk_0xCB567ED25393C1DF(iVar0);
			if (iVar1 != func_64() && func_11(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return func_64();
}

void func_451(int iParam0, int iParam1)
{
	if (func_147(iParam0, 15))
	{
		*iParam1 = 0;
	}
}

int func_452(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_147(iParam0, 15))
	{
		if (func_45(iParam0))
		{
			uVar0 = func_46(1, iParam0);
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_453(int iParam0, int iParam1)
{
	Local_4900.f_771[iParam0 /*6*/].f_1 = iParam1;
}

int func_454(int iParam0)
{
	return Local_4900.f_771[iParam0 /*6*/].f_1;
}

int func_455(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_457())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		if (iParam0 == func_456(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_456(int iParam0)
{
	return Local_4900.f_2.f_60[iParam0];
}

int func_457()
{
	return Local_227.f_19.f_5[0 /*13*/].f_11;
}

int func_458(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x3CF5ADE443D18312(iParam0) + 1;
	if (iParam4 || !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_459(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x419E13582192CFEA(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x7D2B9E6A64637269())
				{
				}
				else if (bParam2)
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						iVar3 = unk_0xCB567ED25393C1DF(iVar2);
						if (((!unk_0xECEC7528A52B4EE8(iVar2) && iVar3 != func_64()) && func_11(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x6C9038EC46DA62DE(unk_0xCB567ED25393C1DF(iVar2)) == 0)
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
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_459(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x9B73EB6255D4AE81(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
		{
			iVar0 = unk_0xC6F40BA22FFB861E(iParam0, iParam1);
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x4E8DA737B686529A(iVar0, 451360105) == 1 || unk_0x4E8DA737B686529A(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(iParam0, 0), unk_0xD6E677FAD7521410(iVar0, 0)) < 10f)
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

void func_460()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		func_472(iVar0);
		func_467(iVar0);
		iVar0++;
	}
	func_462();
	func_461();
}

void func_461()
{
}

void func_462()
{
	if (Local_227.f_19 <= 0)
	{
		return;
	}
	if (!func_466())
	{
		return;
	}
	Stack.Push(Local_2036.f_100.f_34 != 0);
	Call_Loc(Local_2036.f_100.f_34);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_465())
	{
		if (func_464())
		{
			func_10(5);
		}
	}
	else if (func_463())
	{
		func_10(5);
	}
}

int func_463()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_464()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_465()
{
	return func_33(0);
}

int func_466()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_467(int iParam0)
{
	if (func_6(iParam0, 29) && func_470(iParam0))
	{
		if (func_469(iParam0))
		{
			func_468(iParam0, 29);
		}
	}
}

void func_468(int iParam0, int iParam1)
{
	if (func_174(&(Local_4900.f_2.f_26[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_469(int iParam0)
{
	int iVar0;
	
	if (func_470(iParam0))
	{
		iVar0 = func_456(iParam0);
		return (Local_4900.f_771[iVar0 /*6*/].f_1 == 5 || func_6(iParam0, 0));
	}
	return 1;
}

bool func_470(int iParam0)
{
	return (func_471(iParam0) && func_457() == 2);
}

bool func_471(int iParam0)
{
	return Local_4900.f_2.f_60[iParam0] != -1;
}

void func_472(int iParam0)
{
	if (Local_227.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_100.f_21);
		if (StackVal)
		{
			if (!func_6(iParam0, 6))
			{
				if (func_122(Local_227.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (unk_0x52E3A18EDFF7ADA2(1))
					{
						if (func_474(iParam0))
						{
							func_473(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_473(int iParam0, int iParam1)
{
	if (func_19(&(Local_4900.f_2.f_26[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_474(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	if (!unk_0xB7D6400C89373777(Local_4900.f_2[iParam0]))
	{
		Var0 = { func_509(iParam0) };
		fVar3 = Local_227.f_19.f_5[iParam0 /*13*/].f_6;
		Var4 = { Local_227.f_19.f_5[iParam0 /*13*/].f_7 };
		if (func_97(Var0))
		{
			return 0;
		}
		Local_4900.f_2[iParam0] = unk_0x99A6768052B30AE8(unk_0x61A4FE6962D74E54(func_508(iParam0), Var0, !func_507(iParam0, 0), Local_227.f_19.f_5[iParam0 /*13*/].f_2));
		unk_0xCD37A28258D70638(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), fVar3);
		if (!func_97(Var4))
		{
			unk_0xBDDCDEC7B6205897(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam0]), Var4, 2, 1);
		}
		func_501(iParam0, Var0);
		if (Local_2036.f_100.f_28 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_2036.f_100.f_28);
		}
	}
	if (Local_4900.f_2.f_104 != func_499())
	{
		Local_4900.f_2.f_104 = func_499();
	}
	if (unk_0xB7D6400C89373777(Local_4900.f_2[iParam0]))
	{
		if (func_476(&(Local_4900.f_2.f_78[iParam0 /*2*/]), func_498(iParam0), iParam0, Local_4900.f_2.f_104, Local_4900.f_1090, func_497(iParam0), func_496(iParam0)))
		{
			func_475(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam0]), Local_4900.f_2.f_78[iParam0 /*2*/].f_1);
			Local_4900.f_2.f_69[iParam0] = unk_0x666C16A4ED8F3098();
			return 1;
		}
	}
	return 0;
}

void func_475(int iParam0, int iParam1)
{
	if (unk_0x8BA4AD00568AB5FC("FMDeliverableID", 3))
	{
		unk_0x6C9577C090944B92(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_476(var uParam0, int iParam1, int iParam2, int iParam3, struct<3> Param4, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar7;
	
	if (iParam1 == func_64())
	{
		return 0;
	}
	if (!func_495(Param4, Global_1689734.f_4955))
	{
		if ((unk_0x2053F6ACFD4ED4BC() - Global_1689734.f_4955.f_4) <= 90 || (func_17(&(Global_1689734.f_4780)) && !func_15(&(Global_1689734.f_4780), 1500, 0)))
		{
			return 0;
		}
		else
		{
			func_493();
			func_492(Param4);
		}
	}
	if (unk_0x234B68AC2E35ED5A(Global_1689734.f_4955.f_3, 31))
	{
		iVar1 = (Global_1689734.f_4955.f_4 - 1);
		if (unk_0x2053F6ACFD4ED4BC() == iVar1)
		{
			return 0;
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_1689734.f_4955.f_3), 31);
		}
	}
	if (Global_1689734.f_4955.f_4 == 0)
	{
		Global_1689734.f_4955.f_4 = unk_0x2053F6ACFD4ED4BC();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1689734.f_4960[iVar0] = -1;
			iVar2 = func_490(unk_0x1146A9AE09CE2B14(), iVar0);
			if (func_489(iVar2))
			{
				unk_0x191DDA30577F440A(&(Global_1689734.f_4955.f_3), iVar0);
			}
			iVar0++;
		}
	}
	uVar3 = func_488(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar3;
	if (func_487(*uParam0))
	{
		Var4 = { func_485(*uParam0) };
		if ((Global_1689734.f_4955.f_4 == unk_0x2053F6ACFD4ED4BC() || func_484(*uParam0) != iParam3) || !func_495(Param4, Var4))
		{
			if (Global_1689734.f_4955.f_4 != unk_0x2053F6ACFD4ED4BC())
			{
				Global_1689734.f_4955.f_4 = unk_0x2053F6ACFD4ED4BC();
				if (Global_1689734.f_4960[iVar0] == uParam0->f_1)
				{
					Global_1689734.f_4960[iVar0] = -1;
				}
			}
			unk_0x191DDA30577F440A(&(Global_1689734.f_4955.f_3), iParam2);
			unk_0x191DDA30577F440A(&(Global_1689734.f_4955.f_3), 31);
			uParam0->f_1 = -1;
			Global_1689734.f_4955.f_4++;
			return 0;
		}
		else
		{
			func_479(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1689734.f_4960[iParam2] == -1)
	{
		Global_1689734.f_4960[iParam2] = uVar3;
	}
	if (!func_17(&(Global_1689734.f_4780)) || func_15(&(Global_1689734.f_4780), 1500, 0))
	{
		bVar7 = true;
		func_20(&(Global_1689734.f_4780), 0, 0);
	}
	if (!bVar7)
	{
		if (unk_0x2053F6ACFD4ED4BC() == Global_1689734.f_4782)
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		func_477(*uParam0, iParam3, uParam7, Param4, uParam8);
		Global_1689734.f_4782 = unk_0x2053F6ACFD4ED4BC();
	}
	return 0;
}

void func_477(struct<2> Param0, int iParam2, var uParam3, struct<3> Param4, var uParam7)
{
	struct<10> Var0;
	int iVar10;
	
	if (!func_478(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	Var0 = 1490942189;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam2;
	Var0.f_9 = uParam3;
	Var0.f_5 = uParam7;
	Var0.f_6 = { Param4 };
	iVar10 = func_222(1, 1);
	if (!iVar10 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 10, iVar10);
	}
}

int func_478(struct<3> Param0)
{
	if (Param0.x == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

void func_479(struct<2> Param0, char* sParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	char cVar6[16];
	
	bVar0 = false;
	if (bVar0)
	{
		if (unk_0xAB6A270F84A8781E(sParam2))
		{
			sParam2 = "FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
		}
		bVar1 = func_483(Param0);
		bVar2 = func_487(Param0);
		uVar3 = func_484(Param0);
		iVar4 = func_482(Param0);
		uVar5 = func_480(Param0);
		if (iVar4 == 0)
		{
			StringCopy(&cVar6, "Initial", 16);
		}
		else if (iVar4 == 2)
		{
			StringCopy(&cVar6, "Delivered", 16);
		}
		else if (iVar4 == -1)
		{
			StringCopy(&cVar6, "Invalid", 16);
		}
		else
		{
			IntToString(&cVar6, iVar4, 16);
		}
	}
}

int func_480(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_481(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

int func_481(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_482(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_481(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_483(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_64());
}

int func_484(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_481(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_485(struct<2> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_486(Param0);
	if (iVar0 < 0 || iVar0 >= 64)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_2 = -1000;
		return Var1;
	}
	return Global_2419497.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_486(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (func_481(Param0, Global_2419497.f_199.f_1[iVar0 /*15*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_487(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_481(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_488(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1689734.f_4960[iParam1] != -1)
	{
		return Global_1689734.f_4960[iParam1];
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1689734.f_4955.f_3, iVar0))
		{
			unk_0x191DDA30577F440A(&(Global_1689734.f_4955.f_3), iVar0);
			return func_490(iParam0, iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_489(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_490(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_491(iParam0);
	return (iVar0 + iParam1);
}

int func_491(int iParam0)
{
	return unk_0x15173FB88ABC94F9(unk_0xF04DBC0AC5A2AB23(iParam0));
}

void func_492(struct<3> Param0)
{
	Global_1689734.f_4955 = { Param0 };
}

void func_493()
{
	Global_1689734.f_4955.f_3 = 0;
	Global_1689734.f_4955.f_4 = 0;
	Global_1689734.f_4955 = { func_494() };
}

Vector3 func_494()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

int func_495(struct<3> Param0, struct<3> Param3)
{
	if (!func_478(Param0))
	{
		return 0;
	}
	if (Param0.x == Param3.x && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_496(int iParam0)
{
	return 0;
}

int func_497(int iParam0)
{
	return 1;
}

int func_498(int iParam0)
{
	return iLocal_4825;
}

int func_499()
{
	switch (func_500())
	{
		case 0:
			return 15;
		
		case 2:
			return 16;
		
		case 3:
			return 17;
		
		case 4:
			return 18;
		
		case 5:
			return 19;
		
		case 6:
			return 24;
		
		default:
	}
	return 15;
}

int func_500()
{
	return Local_4900.f_1078.f_2;
}

void func_501(int iParam0, struct<3> Param1)
{
	if (func_471(iParam0))
	{
		func_473(iParam0, 29);
		if (iParam0 != func_506(func_456(iParam0)))
		{
			func_473(iParam0, 40);
		}
	}
	else if (!func_507(iParam0, 7))
	{
		func_473(iParam0, 39);
	}
	unk_0xFEDD7E9148CF3B3E(Local_4900.f_2[iParam0], 1);
	unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), 1200);
	unk_0xC595907BB71C921D(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), 50, 0);
	unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), true);
	unk_0x3A653D4F5FA4B665(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
	unk_0x46EDFC827DC67D89(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam0]), 1, 1);
	unk_0x8B58E7AC53EED9F1(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam0]), true);
	unk_0xDF9412D4FA5AA434(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), 1);
	unk_0x0E0A6D38926C4DD2(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), 1);
	if (func_505())
	{
		unk_0x3FB57058E287267D(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), 1);
	}
	if (func_504(iParam0))
	{
		unk_0xA2C015B68CE01357(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), true);
	}
	else
	{
		func_473(iParam0, 28);
	}
	if (!func_507(iParam0, 1))
	{
		unk_0xAFD4554ABD55837D(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]));
	}
	if (func_507(iParam0, 2))
	{
		unk_0x78CDDD1E6367978D(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), Param1, 1, 0, 0, 1);
	}
	if (func_507(iParam0, 3))
	{
		unk_0xC5DE9743D6DA2C15(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]));
		unk_0x3B3F13C4C5844979(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), 1);
	}
	if (func_507(iParam0, 4))
	{
		unk_0x0B87A8220B73252D(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam0]), 1);
	}
	if ((func_507(iParam0, 6) || func_507(iParam0, 7)) || func_471(iParam0))
	{
		unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), false, 0);
	}
	if (Local_227.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_473(iParam0, 23);
	}
	if (func_503(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iParam0]), 1);
	}
	if (func_507(iParam0, 9) || Local_2036.f_100.f_36 != 0)
	{
		func_502(iParam0, 1, 0);
	}
}

void func_502(int iParam0, int iParam1, int iParam2)
{
	unk_0x61918AA39871DD2B(unk_0xBD11ACD80727BD31(Local_4900.f_2[iParam0]), iParam1, iParam2);
}

int func_503(int iParam0)
{
	if (Local_227.f_19.f_5[iParam0 /*13*/].f_12 != -1 && func_118(Local_227.f_1401.f_1[Local_227.f_19.f_5[iParam0 /*13*/].f_12]))
	{
		return 1;
	}
	if (func_507(iParam0, 8))
	{
		return 1;
	}
	if (func_33(22))
	{
		return 1;
	}
	return 0;
}

bool func_504(int iParam0)
{
	if (func_6(iParam0, 29))
	{
		return 0;
	}
	return !func_507(iParam0, 5);
}

int func_505()
{
	return 0;
}

int func_506(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		if (Local_4900.f_2.f_60[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_507(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_508(int iParam0)
{
	if (Local_2036.f_100.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_100.f_26);
		return StackVal;
	}
	return 68603185;
}

Vector3 func_509(int iParam0)
{
	if (func_511(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_2036.f_100.f_25);
		return StackVal, StackVal, StackVal;
	}
	else if (func_470(iParam0))
	{
		return Local_227.f_780.f_1[func_456(iParam0) /*14*/].f_4 + func_510(iParam0, Local_227.f_780.f_1[func_456(iParam0) /*14*/].f_3);
	}
	return Local_227.f_19.f_5[iParam0 /*13*/].f_3;
}

Vector3 func_510(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0.1f;
				
				case 1:
					return -1f, -2f, -0.1f;
				
				case 2:
					return 1f, -2f, -0.1f;
				
				case 3:
					return -1f, -2f, -0.1f;
				
				default:
			}
			break;
		
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (iParam0)
			{
				case 0:
					return 0.5f, 0f, -0.1f;
				
				case 1:
					return -0.5f, 0f, -0.1f;
				
				case 2:
					return 0.5f, 0f, -0.1f;
				
				case 3:
					return -0.5f, 0f, -0.1f;
				
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0.1f;
		
		case 1:
			return -1f, 0f, -0.1f;
		
		case 2:
			return 1f, 0f, -0.1f;
		
		case 3:
			return -1f, 0f, -0.1f;
		
		default:
	}
	return 0f, -1f, -0.1f;
}

bool func_511(var uParam0)
{
	struct<3> Var0;
	
	if (Local_2036.f_100.f_25 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_2036.f_100.f_25);
	Var0 = { StackVal, StackVal, StackVal };
	return !func_97(Var0);
}

void func_512()
{
}

int func_513()
{
	return Local_4900.f_1032;
}

void func_514(int iParam0)
{
	Local_4900.f_1031 = iParam0;
}

int func_515()
{
	int iVar0;
	int iVar1;
	
	if (!func_1101(func_1109(), func_1108()))
	{
		return 0;
	}
	if (!func_533())
	{
		return 0;
	}
	func_532();
	func_531();
	Local_4900.f_1043 = unk_0x5478C744B6AAC199(func_530(), -1, 0);
	func_529();
	func_527();
	func_525();
	func_524();
	func_522();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_4900.f_1054[iVar0] = -1;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Local_4900.f_979[iVar1] = -1;
		iVar1++;
	}
	Local_4900.f_1047 = unk_0xB36B8558948EA7A8(0, 99999999);
	Local_4900.f_1030 = func_521();
	unk_0x9FCD56F864077E14(&(Local_4900.f_1040), &(Local_4900.f_1041));
	Global_1630816[iLocal_4825 /*597*/].f_524 = Local_4900.f_1040;
	Global_1630816[iLocal_4825 /*597*/].f_525 = Local_4900.f_1041;
	func_520();
	if (!func_516())
	{
		return 0;
	}
	Call_Loc(Local_2036.f_1);
	return StackVal;
}

int func_516()
{
	switch (func_519())
	{
		case 2:
			return 1;
		
		default:
	}
	Call_Loc(Local_2036.f_70);
	Local_4900.f_1 = func_517(StackVal, StackVal, StackVal);
	return 1;
}

var func_517(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	float fVar2[3];
	int iVar6[3];
	struct<3> Var10;
	float fVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	
	iVar0 = 694;
	while (iVar0 <= 703)
	{
		Var10 = { func_518(iVar0) };
		fVar13 = SYSTEM::VDIST2(Var10, Param0);
		iVar14 = iVar0;
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (fVar13 > fVar2[iVar1])
			{
				fVar15 = fVar2[iVar1];
				iVar16 = iVar6[iVar1];
				fVar2[iVar1] = fVar13;
				iVar6[iVar1] = iVar14;
				fVar13 = fVar15;
				iVar14 = iVar16;
			}
			iVar1++;
		}
		fVar13 = 0f;
		iVar0++;
	}
	iVar0 = unk_0xB36B8558948EA7A8(0, 3);
	if (iVar6[iVar0] == 701)
	{
		if (unk_0xB36B8558948EA7A8(0, 100) <= 90)
		{
			if (iVar0 + 1 == 3)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iVar6[iVar0];
}

Vector3 func_518(int iParam0)
{
	switch (iParam0)
	{
		case 684:
			return 729.8204f, -1291.16f, 25.2842f;
		
		case 685:
			return 333.4431f, -997.5615f, 28.1407f;
		
		case 686:
			return -164.0211f, -1296.221f, 30.0465f;
		
		case 687:
			return -22.2784f, 216.376f, 105.5677f;
		
		case 688:
			return 909.1575f, -2093.444f, 29.494f;
		
		case 689:
			return -673.6822f, -2391.013f, 12.8934f;
		
		case 690:
			return 227.6459f, -3133.413f, 4.7903f;
		
		case 691:
			return 381.5496f, 227.2289f, 102.0405f;
		
		case 692:
			return -1232.486f, -691.7514f, 22.6646f;
		
		case 693:
			return -1172.481f, -1177.258f, 4.6235f;
		
		case 694:
			return 873.6871f, -2194.648f, 29.5193f;
		
		case 695:
			return -1276.696f, -1356.844f, 3.3046f;
		
		case 696:
			return 21.1183f, 82.7228f, 73.6689f;
		
		case 697:
			return -322.2558f, -1400.917f, 30.7681f;
		
		case 698:
			return -1421.89f, -240.855f, 45.3791f;
		
		case 699:
			return 917.248f, 3567.433f, 32.7733f;
		
		case 700:
			return -107.0892f, 2795.575f, 52.2975f;
		
		case 701:
			return -230.9694f, 6350.816f, 31.426f;
		
		case 702:
			return 1374.142f, -2217.435f, 59.6957f;
		
		case 703:
			return 2508.885f, 4215.857f, 38.9267f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_519()
{
	return Local_4900.f_1078;
}

void func_520()
{
	if (Local_4900.f_1048 == -1)
	{
		Local_4900.f_1048 = unk_0x666C16A4ED8F3098();
	}
}

int func_521()
{
	return -1;
}

void func_522()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_129)
	{
		Local_4900.f_110[iVar0 /*22*/].f_15 = func_523(iVar0);
		iVar0++;
	}
}

int func_523(int iParam0)
{
	if (Local_227.f_129.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_227.f_129));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_227.f_129));
		}
	}
	return unk_0xB36B8558948EA7A8(0, Local_227.f_129.f_1[iParam0 /*21*/].f_16);
}

void func_524()
{
	Local_4900.f_1033 = 2;
}

void func_525()
{
	Local_4900.f_984.f_14 = func_526();
}

var func_526()
{
	return Local_227.f_1282.f_3;
}

void func_527()
{
	int iVar0;
	
	if (func_528())
	{
		if (func_35(&(Local_4900.f_2.f_60), &(Local_4900.f_979.f_3)))
		{
			func_18(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_227.f_19)
		{
			Local_4900.f_2.f_60[iVar0] = Local_227.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

int func_528()
{
	return 0;
}

void func_529()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		iVar3 = Local_227.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_227.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_189(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		iVar2 = Local_227.f_1282[iVar5];
		if (iVar2 != -1)
		{
			func_189(iVar2, 15);
		}
		iVar5++;
	}
	iVar1 = 0;
	while (iVar1 < Local_227.f_129)
	{
		iVar2 = Local_227.f_129.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_147(iVar2, 15))
		{
			if (Local_227.f_129.f_1[iVar1 /*21*/].f_9 == -1)
			{
				iVar5 = 0;
				while (iVar5 < 2)
				{
					if (iVar2 == Local_227.f_1282[iVar5])
					{
						Local_4900.f_984[iVar5 /*5*/].f_2 = iVar1;
					}
					iVar5++;
				}
			}
			func_51(iVar1, 19);
		}
		iVar6 = 0;
		while (iVar6 < Local_227.f_1460)
		{
			if (Local_227.f_1460.f_1[iVar6 /*10*/] == iVar1)
			{
				func_51(iVar1, 21);
			}
			iVar6++;
		}
		iVar1++;
	}
}

char* func_530()
{
	switch (Global_2465851)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_531()
{
}

void func_532()
{
}

int func_533()
{
	func_1100();
	func_568();
	if (!func_534())
	{
		return 0;
	}
	Stack.Push(Local_2036 != 0);
	Call_Loc(Local_2036);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_534()
{
	if (func_1110(12))
	{
		return 1;
	}
	if (!func_544())
	{
		return 0;
	}
	func_541();
	func_536();
	func_535();
	if (Local_2036.f_11 != 0)
	{
		Call_Loc(Local_2036.f_11);
	}
	func_141(12);
	return 1;
}

void func_535()
{
}

void func_536()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_1290)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (-1 != Local_227.f_19.f_5[iVar0 /*13*/].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_129)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (Local_227.f_129.f_1[iVar0 /*21*/].f_10 != -1)
		{
			if (!unk_0xAB6A270F84A8781E(&(Local_227.f_1599[Local_227.f_129.f_1[iVar0 /*21*/].f_10 /*16*/])))
			{
			}
		}
		if (-1 != Local_227.f_129.f_1[iVar0 /*21*/].f_8)
		{
		}
		if (-1 != Local_227.f_129.f_1[iVar0 /*21*/].f_8)
		{
		}
		func_540(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_780)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_539(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_993)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_538(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_1303)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_1460)
	{
		iVar3 = 0;
		while (iVar3 < 1)
		{
			iVar3++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_97(Local_227.f_1792[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (!func_97(Local_227.f_1553[iVar4 /*15*/].f_3))
		{
		}
		iVar4++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_1404)
	{
		func_537(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_1472)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_1401)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (Local_227.f_1385.f_1[iVar0 /*7*/])
		{
			case -1:
				break;
			
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
	}
}

void func_537(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_107(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_538(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 33)
	{
		if (func_160(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_539(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		if (func_159(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_540(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (func_42(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_541()
{
	var uVar0;
	var uVar1;
	
	uVar0 = uVar0;
	uVar1 = uVar1;
	func_543(Local_227.f_19, 8, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	func_543(Local_227.f_129, 30, "data.Ped.iCount", "MAX_NUM_PEDS");
	func_543(Local_227.f_780, 15, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
	func_543(Local_227.f_993, 23, "data.Prop.iCount", "MAX_NUM_PROPS");
	func_543(Local_227.f_1401, 1, "data.Interior.iCount", "MAX_NUM_MISSION_INTERIORS");
	func_543(Local_227.f_1303, 20, "data.CustomSpawns.iCount", "MAX_NUM_CUSTOM_SPAWNS");
	func_543(Local_227.f_1460, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	func_543(Local_227.f_1404, 6, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	func_543(Local_227.f_1290, 1, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
	func_543(Local_227.f_1472, 3, "data.Interact.iNumLocations", "MAX_NUM_INTERACT_LOCATIONS");
	func_543(Local_227.f_1385, 2, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
	func_543(Local_227.f_1282.f_7, 2, "data.Ambush.iCount", "MAX_NUM_AMBUSH_VEHICLES");
	func_543(func_542(), 2, "GET_NUM_PED_GROUPS", "MAX_NUM_PED_GROUPS");
	func_543(Local_227.f_1303, 20, "data.CustomSpawns.iCount", "MAX_NUM_CUSTOM_SPAWNS");
}

int func_542()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_129)
	{
		if (Local_227.f_129.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_227.f_129.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

void func_543(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (iParam0 <= iParam1)
	{
	}
}

bool func_544()
{
	return func_545(func_565(), &Local_227, &Local_2579);
}

int func_545(char* sParam0, var uParam1, var uParam2)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	func_564();
	if (!unk_0x6AD689C6799F1EAA(sParam0, 0))
	{
		return 0;
	}
	func_547(uParam1);
	func_546(uParam2);
	return 1;
}

void func_546(var uParam0)
{
	unk_0x9C02B660CDCF1292(0);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_547(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0x4D9115464D37FCEB(0);
	uVar1 = unk_0x41140BC7F2CD52D1(iVar0, "mission");
	Global_4456448.f_85965 = unk_0x4CCB328F9DA8E0D0(iVar0, "debugOnlyVersion");
	func_548(&uVar1, uParam0, 0, &uVar2);
}

bool func_548(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_549(uParam0, uParam1);
	}
	if (!bParam2 || *uParam3 == 1)
	{
	}
	if (!bParam2 || *uParam3 == 2)
	{
		*uParam3 = 0;
		return 1;
	}
	*uParam3++;
	return !bParam2;
}

void func_549(var uParam0, var uParam1)
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	var uVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[1];
	int iVar13[1];
	var uVar15;
	bool bVar16;
	var uVar17;
	bool bVar18;
	var uVar19;
	bool bVar20;
	var uVar21;
	bool bVar22;
	var uVar23;
	bool bVar24;
	var uVar25;
	bool bVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	int iVar30;
	var uVar31[1];
	int iVar33[1];
	var uVar35;
	bool bVar36;
	var uVar37;
	bool bVar38;
	var uVar39;
	bool bVar40;
	var uVar41;
	bool bVar42;
	var uVar43;
	bool bVar44;
	var uVar45;
	bool bVar46;
	var uVar47;
	bool bVar48;
	var uVar49;
	bool bVar50;
	var uVar51;
	bool bVar52;
	var uVar53;
	bool bVar54;
	var uVar55;
	bool bVar56;
	var uVar57;
	bool bVar58;
	var uVar59;
	bool bVar60;
	var uVar61;
	bool bVar62;
	var uVar63;
	bool bVar64;
	var uVar65;
	bool bVar66;
	var uVar67;
	bool bVar68;
	int iVar69;
	var uVar70;
	int iVar71;
	var uVar72[5];
	int iVar78[5];
	var uVar84;
	bool bVar85;
	var uVar86;
	bool bVar87;
	int iVar88;
	int iVar89;
	var uVar90[2];
	int iVar93[2];
	var uVar96;
	bool bVar97;
	var uVar98;
	bool bVar99;
	var uVar100;
	bool bVar101;
	var uVar102;
	bool bVar103;
	var uVar104;
	bool bVar105;
	int iVar106;
	var uVar107;
	bool bVar108;
	var uVar109;
	bool bVar110;
	var uVar111;
	bool bVar112;
	var uVar113;
	bool bVar114;
	int iVar115;
	int iVar116;
	var uVar117[2];
	int iVar120[2];
	var uVar123;
	bool bVar124;
	var uVar125;
	bool bVar126;
	var uVar127;
	bool bVar128;
	var uVar129;
	bool bVar130;
	var uVar131;
	bool bVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	var uVar137;
	bool bVar138;
	int iVar139;
	int iVar140;
	var uVar141;
	bool bVar142;
	var uVar143;
	bool bVar144;
	var uVar145[1];
	int iVar147[1];
	var uVar149;
	bool bVar150;
	int iVar151;
	var uVar152;
	bool bVar153;
	var uVar154;
	bool bVar155;
	var uVar156;
	bool bVar157;
	var uVar158;
	bool bVar159;
	int iVar160;
	int iVar161;
	var uVar162;
	bool bVar163;
	var uVar164;
	bool bVar165;
	int iVar166;
	int iVar167;
	var uVar168;
	bool bVar169;
	var uVar170;
	bool bVar171;
	var uVar172;
	bool bVar173;
	int iVar174;
	int iVar175;
	var uVar176;
	bool bVar177;
	int iVar178;
	int iVar179;
	var uVar180[1];
	int iVar182[1];
	var uVar184;
	bool bVar185;
	var uVar186;
	bool bVar187;
	var uVar188;
	bool bVar189;
	int iVar190;
	int iVar191;
	var uVar192;
	bool bVar193;
	int iVar194;
	var uVar195[1];
	int iVar197[1];
	var uVar199[1];
	int iVar201[1];
	var uVar203[1];
	int iVar205[1];
	var uVar207[1];
	int iVar209[1];
	int iVar211;
	int iVar212;
	var uVar213[1];
	int iVar215[1];
	var uVar217;
	bool bVar218;
	var uVar219;
	bool bVar220;
	var uVar221;
	bool bVar222;
	var uVar223;
	bool bVar224;
	var uVar225;
	bool bVar226;
	int iVar227;
	var uVar228;
	bool bVar229;
	int iVar230;
	var uVar231;
	bool bVar232;
	var uVar233;
	bool bVar234;
	var uVar235;
	bool bVar236;
	var uVar237[1];
	int iVar239[1];
	
	func_563(&iVar8, *uParam0, "me");
	func_563(&iVar9, iVar8, "blp");
	func_563(&iVar10, iVar8, "ents");
	func_563(&iVar29, *uParam0, "pd");
	func_563(&iVar30, iVar29, "pds");
	func_563(&iVar69, iVar29, "grp");
	func_563(&uVar70, iVar69, "rel");
	func_563(&iVar71, iVar69, "trg");
	func_563(&iVar88, *uParam0, "vh");
	func_563(&iVar89, iVar88, "veh");
	func_563(&iVar106, iVar89, "blp");
	func_563(&iVar115, *uParam0, "pp");
	func_563(&iVar116, iVar115, "prps");
	func_563(&iVar133, *uParam0, "want");
	func_563(&iVar134, *uParam0, "modt");
	func_563(&iVar135, *uParam0, "amb");
	func_563(&iVar136, iVar135, "veh");
	func_563(&iVar139, *uParam0, "gt");
	func_563(&iVar140, iVar139, "loc");
	func_563(&iVar151, iVar140, "blp");
	func_563(&iVar160, *uParam0, "cst");
	func_563(&iVar161, iVar160, "csts");
	func_563(&iVar166, *uParam0, "pop");
	func_563(&iVar167, iVar166, "blkr");
	func_563(&iVar174, *uParam0, "inte");
	func_563(&iVar175, iVar174, "int");
	func_563(&iVar178, *uParam0, "ta");
	func_563(&iVar179, iVar178, "ars");
	func_563(&iVar190, *uParam0, "ptrl");
	func_563(&iVar191, iVar190, "pat");
	func_563(&iVar194, iVar191, "nd");
	func_563(&iVar211, *uParam0, "mvdr");
	func_563(&iVar212, iVar211, "mvdrs");
	func_563(&iVar227, *uParam0, "sro");
	func_563(&iVar230, *uParam0, "port");
	if (func_562(*uParam0, "fmbs") == 7)
	{
		bVar7 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar10, &Var0) == 7)
		{
			iVar13[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar10, "mn") == 7)
	{
		bVar16 = true;
	}
	if (func_562(iVar10, "pos") == 7)
	{
		bVar18 = true;
	}
	if (func_562(iVar10, "head") == 7)
	{
		bVar20 = true;
	}
	if (func_562(iVar10, "rot") == 7)
	{
		bVar22 = true;
	}
	if (func_562(iVar10, "cv") == 7)
	{
		bVar24 = true;
	}
	if (func_562(iVar10, "crt") == 7)
	{
		bVar26 = true;
	}
	if (func_562(iVar10, "int") == 7)
	{
		bVar28 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar30, &Var0) == 7)
		{
			iVar33[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar30, "mn") == 7)
	{
		bVar36 = true;
	}
	if (func_562(iVar30, "pos") == 7)
	{
		bVar38 = true;
	}
	if (func_562(iVar30, "head") == 7)
	{
		bVar40 = true;
	}
	if (func_562(iVar30, "wpn") == 7)
	{
		bVar42 = true;
	}
	if (func_562(iVar30, "veh") == 7)
	{
		bVar44 = true;
	}
	if (func_562(iVar30, "st") == 7)
	{
		bVar46 = true;
	}
	if (func_562(iVar30, "scen") == 7)
	{
		bVar48 = true;
	}
	if (func_562(iVar30, "anim") == 7)
	{
		bVar50 = true;
	}
	if (func_562(iVar30, "int") == 7)
	{
		bVar52 = true;
	}
	if (func_562(iVar30, "asi") == 7)
	{
		bVar54 = true;
	}
	if (func_562(iVar30, "grp") == 7)
	{
		bVar56 = true;
	}
	if (func_562(iVar30, "mvmt") == 7)
	{
		bVar58 = true;
	}
	if (func_562(iVar30, "mrd") == 7)
	{
		bVar60 = true;
	}
	if (func_562(iVar30, "sr") == 7)
	{
		bVar62 = true;
	}
	if (func_562(iVar30, "sa") == 7)
	{
		bVar64 = true;
	}
	if (func_562(iVar30, "hr") == 7)
	{
		bVar66 = true;
	}
	if (func_562(iVar30, "dr") == 7)
	{
		bVar68 = true;
	}
	iVar5 = 0;
	while (iVar5 < 5)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar71, &Var0) == 7)
		{
			iVar78[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar69, "ed") == 7)
	{
		bVar85 = true;
	}
	if (func_562(iVar69, "gt") == 7)
	{
		bVar87 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar89, &Var0) == 7)
		{
			iVar93[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar89, "mn") == 7)
	{
		bVar97 = true;
	}
	if (func_562(iVar89, "pos") == 7)
	{
		bVar99 = true;
	}
	if (func_562(iVar89, "head") == 7)
	{
		bVar101 = true;
	}
	if (func_562(iVar89, "col") == 7)
	{
		bVar103 = true;
	}
	if (func_562(iVar89, "int") == 7)
	{
		bVar105 = true;
	}
	if (func_562(iVar106, "sprt") == 7)
	{
		bVar108 = true;
	}
	if (func_562(iVar106, "hclr") == 7)
	{
		bVar110 = true;
	}
	if (func_562(iVar106, "scl") == 7)
	{
		bVar112 = true;
	}
	if (func_562(iVar106, "sh") == 7)
	{
		bVar114 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar116, &Var0) == 7)
		{
			iVar120[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar116, "mn") == 7)
	{
		bVar124 = true;
	}
	if (func_562(iVar116, "pos") == 7)
	{
		bVar126 = true;
	}
	if (func_562(iVar116, "head") == 7)
	{
		bVar128 = true;
	}
	if (func_562(iVar116, "rot") == 7)
	{
		bVar130 = true;
	}
	if (func_562(iVar116, "int") == 7)
	{
		bVar132 = true;
	}
	if (func_562(iVar136, "idx") == 7)
	{
		bVar138 = true;
	}
	if (func_562(iVar140, "pos") == 7)
	{
		bVar142 = true;
	}
	if (func_562(iVar140, "rad") == 7)
	{
		bVar144 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar140, &Var0) == 7)
		{
			iVar147[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar140, "brd") == 7)
	{
		bVar150 = true;
	}
	if (func_562(iVar151, "sprt") == 7)
	{
		bVar153 = true;
	}
	if (func_562(iVar151, "hclr") == 7)
	{
		bVar155 = true;
	}
	if (func_562(iVar151, "scl") == 7)
	{
		bVar157 = true;
	}
	if (func_562(iVar151, "sh") == 7)
	{
		bVar159 = true;
	}
	if (func_562(iVar161, "vcst") == 7)
	{
		bVar163 = true;
	}
	if (func_562(iVar161, "hcst") == 7)
	{
		bVar165 = true;
	}
	if (func_562(iVar167, "typ") == 7)
	{
		bVar169 = true;
	}
	if (func_562(iVar167, "min") == 7)
	{
		bVar171 = true;
	}
	if (func_562(iVar167, "max") == 7)
	{
		bVar173 = true;
	}
	if (func_562(iVar175, "typ") == 7)
	{
		bVar177 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar179, &Var0) == 7)
		{
			iVar182[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar179, "vmn") == 7)
	{
		bVar185 = true;
	}
	if (func_562(iVar179, "vmx") == 7)
	{
		bVar187 = true;
	}
	if (func_562(iVar179, "fwd") == 7)
	{
		bVar189 = true;
	}
	if (func_562(iVar191, "pedi") == 7)
	{
		bVar193 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar194, &Var0) == 7)
		{
			iVar197[iVar5] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar194, &Var0) == 7)
		{
			iVar201[iVar5] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar194, &Var0) == 7)
		{
			iVar205[iVar5] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar194, &Var0) == 7)
		{
			iVar209[iVar5] = 1;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar212, &Var0) == 7)
		{
			iVar215[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_562(iVar212, "mn") == 7)
	{
		bVar218 = true;
	}
	if (func_562(iVar212, "pos") == 7)
	{
		bVar220 = true;
	}
	if (func_562(iVar212, "epos") == 7)
	{
		bVar222 = true;
	}
	if (func_562(iVar212, "rot") == 7)
	{
		bVar224 = true;
	}
	if (func_562(iVar212, "erot") == 7)
	{
		bVar226 = true;
	}
	if (func_562(iVar227, "name") == 7)
	{
		bVar229 = true;
	}
	if (func_562(iVar230, "pos") == 7)
	{
		bVar232 = true;
	}
	if (func_562(iVar230, "head") == 7)
	{
		bVar234 = true;
	}
	if (func_562(iVar230, "plnkp") == 7)
	{
		bVar236 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_562(iVar230, &Var0) == 7)
		{
			iVar239[iVar5] = 1;
		}
		iVar5++;
	}
	if (bVar7)
	{
		uVar6 = unk_0xA3F889616F181A2F(*uParam0, "fmbs");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar13[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar11[iVar5] = unk_0xA3F889616F181A2F(iVar10, &Var0);
		}
		iVar5++;
	}
	if (bVar16)
	{
		uVar15 = unk_0xA3F889616F181A2F(iVar10, "mn");
	}
	if (bVar18)
	{
		uVar17 = unk_0xA3F889616F181A2F(iVar10, "pos");
	}
	if (bVar20)
	{
		uVar19 = unk_0xA3F889616F181A2F(iVar10, "head");
	}
	if (bVar22)
	{
		uVar21 = unk_0xA3F889616F181A2F(iVar10, "rot");
	}
	if (bVar24)
	{
		uVar23 = unk_0xA3F889616F181A2F(iVar10, "cv");
	}
	if (bVar26)
	{
		uVar25 = unk_0xA3F889616F181A2F(iVar10, "crt");
	}
	if (bVar28)
	{
		uVar27 = unk_0xA3F889616F181A2F(iVar10, "int");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar33[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar31[iVar5] = unk_0xA3F889616F181A2F(iVar30, &Var0);
		}
		iVar5++;
	}
	if (bVar36)
	{
		uVar35 = unk_0xA3F889616F181A2F(iVar30, "mn");
	}
	if (bVar38)
	{
		uVar37 = unk_0xA3F889616F181A2F(iVar30, "pos");
	}
	if (bVar40)
	{
		uVar39 = unk_0xA3F889616F181A2F(iVar30, "head");
	}
	if (bVar42)
	{
		uVar41 = unk_0xA3F889616F181A2F(iVar30, "wpn");
	}
	if (bVar44)
	{
		uVar43 = unk_0xA3F889616F181A2F(iVar30, "veh");
	}
	if (bVar46)
	{
		uVar45 = unk_0xA3F889616F181A2F(iVar30, "st");
	}
	if (bVar48)
	{
		uVar47 = unk_0xA3F889616F181A2F(iVar30, "scen");
	}
	if (bVar50)
	{
		uVar49 = unk_0xA3F889616F181A2F(iVar30, "anim");
	}
	if (bVar52)
	{
		uVar51 = unk_0xA3F889616F181A2F(iVar30, "int");
	}
	if (bVar54)
	{
		uVar53 = unk_0xA3F889616F181A2F(iVar30, "asi");
	}
	if (bVar56)
	{
		uVar55 = unk_0xA3F889616F181A2F(iVar30, "grp");
	}
	if (bVar58)
	{
		uVar57 = unk_0xA3F889616F181A2F(iVar30, "mvmt");
	}
	if (bVar60)
	{
		uVar59 = unk_0xA3F889616F181A2F(iVar30, "mrd");
	}
	if (bVar62)
	{
		uVar61 = unk_0xA3F889616F181A2F(iVar30, "sr");
	}
	if (bVar64)
	{
		uVar63 = unk_0xA3F889616F181A2F(iVar30, "sa");
	}
	if (bVar66)
	{
		uVar65 = unk_0xA3F889616F181A2F(iVar30, "hr");
	}
	if (bVar68)
	{
		uVar67 = unk_0xA3F889616F181A2F(iVar30, "dr");
	}
	iVar5 = 0;
	while (iVar5 < 5)
	{
		if (iVar78[iVar5])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar72[iVar5] = unk_0xA3F889616F181A2F(iVar71, &Var0);
		}
		iVar5++;
	}
	if (bVar85)
	{
		uVar84 = unk_0xA3F889616F181A2F(iVar69, "ed");
	}
	if (bVar87)
	{
		uVar86 = unk_0xA3F889616F181A2F(iVar69, "gt");
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar93[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar90[iVar5] = unk_0xA3F889616F181A2F(iVar89, &Var0);
		}
		iVar5++;
	}
	if (bVar97)
	{
		uVar96 = unk_0xA3F889616F181A2F(iVar89, "mn");
	}
	if (bVar99)
	{
		uVar98 = unk_0xA3F889616F181A2F(iVar89, "pos");
	}
	if (bVar101)
	{
		uVar100 = unk_0xA3F889616F181A2F(iVar89, "head");
	}
	if (bVar103)
	{
		uVar102 = unk_0xA3F889616F181A2F(iVar89, "col");
	}
	if (bVar105)
	{
		uVar104 = unk_0xA3F889616F181A2F(iVar89, "int");
	}
	if (bVar108)
	{
		uVar107 = unk_0xA3F889616F181A2F(iVar106, "sprt");
	}
	if (bVar110)
	{
		uVar109 = unk_0xA3F889616F181A2F(iVar106, "hclr");
	}
	if (bVar112)
	{
		uVar111 = unk_0xA3F889616F181A2F(iVar106, "scl");
	}
	if (bVar114)
	{
		uVar113 = unk_0xA3F889616F181A2F(iVar106, "sh");
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar120[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar117[iVar5] = unk_0xA3F889616F181A2F(iVar116, &Var0);
		}
		iVar5++;
	}
	if (bVar124)
	{
		uVar123 = unk_0xA3F889616F181A2F(iVar116, "mn");
	}
	if (bVar126)
	{
		uVar125 = unk_0xA3F889616F181A2F(iVar116, "pos");
	}
	if (bVar128)
	{
		uVar127 = unk_0xA3F889616F181A2F(iVar116, "head");
	}
	if (bVar130)
	{
		uVar129 = unk_0xA3F889616F181A2F(iVar116, "rot");
	}
	if (bVar132)
	{
		uVar131 = unk_0xA3F889616F181A2F(iVar116, "int");
	}
	if (bVar138)
	{
		uVar137 = unk_0xA3F889616F181A2F(iVar136, "idx");
	}
	if (bVar142)
	{
		uVar141 = unk_0xA3F889616F181A2F(iVar140, "pos");
	}
	if (bVar144)
	{
		uVar143 = unk_0xA3F889616F181A2F(iVar140, "rad");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar147[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar145[iVar5] = unk_0xA3F889616F181A2F(iVar140, &Var0);
		}
		iVar5++;
	}
	if (bVar150)
	{
		uVar149 = unk_0xA3F889616F181A2F(iVar140, "brd");
	}
	if (bVar153)
	{
		uVar152 = unk_0xA3F889616F181A2F(iVar151, "sprt");
	}
	if (bVar155)
	{
		uVar154 = unk_0xA3F889616F181A2F(iVar151, "hclr");
	}
	if (bVar157)
	{
		uVar156 = unk_0xA3F889616F181A2F(iVar151, "scl");
	}
	if (bVar159)
	{
		uVar158 = unk_0xA3F889616F181A2F(iVar151, "sh");
	}
	if (bVar163)
	{
		uVar162 = unk_0xA3F889616F181A2F(iVar161, "vcst");
	}
	if (bVar165)
	{
		uVar164 = unk_0xA3F889616F181A2F(iVar161, "hcst");
	}
	if (bVar169)
	{
		uVar168 = unk_0xA3F889616F181A2F(iVar167, "typ");
	}
	if (bVar171)
	{
		uVar170 = unk_0xA3F889616F181A2F(iVar167, "min");
	}
	if (bVar173)
	{
		uVar172 = unk_0xA3F889616F181A2F(iVar167, "max");
	}
	if (bVar177)
	{
		uVar176 = unk_0xA3F889616F181A2F(iVar175, "typ");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar182[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar180[iVar5] = unk_0xA3F889616F181A2F(iVar179, &Var0);
		}
		iVar5++;
	}
	if (bVar185)
	{
		uVar184 = unk_0xA3F889616F181A2F(iVar179, "vmn");
	}
	if (bVar187)
	{
		uVar186 = unk_0xA3F889616F181A2F(iVar179, "vmx");
	}
	if (bVar189)
	{
		uVar188 = unk_0xA3F889616F181A2F(iVar179, "fwd");
	}
	if (bVar193)
	{
		uVar192 = unk_0xA3F889616F181A2F(iVar191, "pedi");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar197[iVar5])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar195[iVar5] = unk_0xA3F889616F181A2F(iVar194, &Var0);
		}
		if (iVar201[iVar5])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar199[iVar5] = unk_0xA3F889616F181A2F(iVar194, &Var0);
		}
		if (iVar205[iVar5])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar203[iVar5] = unk_0xA3F889616F181A2F(iVar194, &Var0);
		}
		if (iVar209[iVar5])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar207[iVar5] = unk_0xA3F889616F181A2F(iVar194, &Var0);
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar215[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar213[iVar5] = unk_0xA3F889616F181A2F(iVar212, &Var0);
		}
		iVar5++;
	}
	if (bVar218)
	{
		uVar217 = unk_0xA3F889616F181A2F(iVar212, "mn");
	}
	if (bVar220)
	{
		uVar219 = unk_0xA3F889616F181A2F(iVar212, "pos");
	}
	if (bVar222)
	{
		uVar221 = unk_0xA3F889616F181A2F(iVar212, "epos");
	}
	if (bVar224)
	{
		uVar223 = unk_0xA3F889616F181A2F(iVar212, "rot");
	}
	if (bVar226)
	{
		uVar225 = unk_0xA3F889616F181A2F(iVar212, "erot");
	}
	if (bVar229)
	{
		uVar228 = unk_0xA3F889616F181A2F(iVar227, "name");
	}
	if (bVar232)
	{
		uVar231 = unk_0xA3F889616F181A2F(iVar230, "pos");
	}
	if (bVar234)
	{
		uVar233 = unk_0xA3F889616F181A2F(iVar230, "head");
	}
	if (bVar236)
	{
		uVar235 = unk_0xA3F889616F181A2F(iVar230, "plnkp");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar239[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar237[iVar5] = unk_0xA3F889616F181A2F(iVar230, &Var0);
		}
		iVar5++;
	}
	*uParam1 = { func_561(*uParam0, "fmnm", "") };
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_16[iVar4] = func_560(uVar6, iVar4, 0, bVar7);
		iVar4++;
	}
	uParam1->f_19 = func_559(iVar8, "num", 0);
	uParam1->f_19.f_1 = func_558(iVar9, "sprt", -1);
	uParam1->f_19.f_1.f_1 = func_558(iVar9, "hclr", 12);
	uParam1->f_19.f_1.f_2 = func_557(iVar9, "scl", 1f);
	uParam1->f_19.f_1.f_3 = func_555(iVar9, "sh", 0);
	iVar4 = 0;
	while (iVar4 < 8)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_19.f_5[iVar4 /*13*/][iVar5] = func_560(uVar11[iVar5], iVar4, 0, iVar13[iVar5]);
			iVar5++;
		}
		uParam1->f_19.f_5[iVar4 /*13*/].f_2 = func_554(uVar15, iVar4, 0, bVar16);
		uParam1->f_19.f_5[iVar4 /*13*/].f_3 = { func_553(uVar17, iVar4, 0f, 0f, 0f, bVar18) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_6 = func_552(uVar19, iVar4, 0f, bVar20);
		uParam1->f_19.f_5[iVar4 /*13*/].f_7 = { func_553(uVar21, iVar4, 0f, 0f, 0f, bVar22) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_10 = func_560(uVar23, iVar4, -1, bVar24);
		uParam1->f_19.f_5[iVar4 /*13*/].f_11 = func_554(uVar25, iVar4, 2, bVar26);
		uParam1->f_19.f_5[iVar4 /*13*/].f_12 = func_560(uVar27, iVar4, -1, bVar28);
		iVar4++;
	}
	uParam1->f_129 = func_559(iVar29, "num", 0);
	iVar4 = 0;
	while (iVar4 < 30)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_129.f_1[iVar4 /*21*/][iVar5] = func_560(uVar31[iVar5], iVar4, 0, iVar33[iVar5]);
			iVar5++;
		}
		uParam1->f_129.f_1[iVar4 /*21*/].f_2 = func_554(uVar35, iVar4, 0, bVar36);
		uParam1->f_129.f_1[iVar4 /*21*/].f_3 = { func_553(uVar37, iVar4, 0f, 0f, 0f, bVar38) };
		uParam1->f_129.f_1[iVar4 /*21*/].f_6 = func_552(uVar39, iVar4, 0f, bVar40);
		uParam1->f_129.f_1[iVar4 /*21*/].f_7 = func_554(uVar41, iVar4, 0, bVar42);
		uParam1->f_129.f_1[iVar4 /*21*/].f_8 = func_560(uVar43, iVar4, -1, bVar44);
		uParam1->f_129.f_1[iVar4 /*21*/].f_9 = func_554(uVar45, iVar4, 0, bVar46);
		uParam1->f_129.f_1[iVar4 /*21*/].f_10 = func_560(uVar47, iVar4, -1, bVar48);
		uParam1->f_129.f_1[iVar4 /*21*/].f_11 = func_560(uVar49, iVar4, -1, bVar50);
		uParam1->f_129.f_1[iVar4 /*21*/].f_12 = func_560(uVar51, iVar4, -1, bVar52);
		uParam1->f_129.f_1[iVar4 /*21*/].f_13 = func_560(uVar53, iVar4, -1, bVar54);
		uParam1->f_129.f_1[iVar4 /*21*/].f_14 = func_560(uVar55, iVar4, 0, bVar56);
		uParam1->f_129.f_1[iVar4 /*21*/].f_15 = func_554(uVar57, iVar4, 2, bVar58);
		uParam1->f_129.f_1[iVar4 /*21*/].f_16 = func_560(uVar59, iVar4, -1, bVar60);
		uParam1->f_129.f_1[iVar4 /*21*/].f_17 = func_552(uVar61, iVar4, 60f, bVar62);
		uParam1->f_129.f_1[iVar4 /*21*/].f_18 = func_552(uVar63, iVar4, 60f, bVar64);
		uParam1->f_129.f_1[iVar4 /*21*/].f_19 = func_552(uVar65, iVar4, 60f, bVar66);
		uParam1->f_129.f_1[iVar4 /*21*/].f_20 = func_552(uVar67, iVar4, -1f, bVar68);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		iVar5 = 0;
		while (iVar5 < 5)
		{
			uParam1->f_129.f_632[iVar4 /*9*/].f_1[iVar5] = func_560(uVar72[iVar5], iVar4, -1, iVar78[iVar5]);
			iVar5++;
		}
		uParam1->f_129.f_632[iVar4 /*9*/].f_7 = func_560(uVar84, iVar4, 0, bVar85);
		uParam1->f_129.f_632[iVar4 /*9*/].f_8 = func_560(uVar86, iVar4, -1, bVar87);
		iVar4++;
	}
	uParam1->f_780 = func_559(iVar88, "num", 0);
	iVar4 = 0;
	while (iVar4 < 15)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_780.f_1[iVar4 /*14*/][iVar5] = func_560(uVar90[iVar5], iVar4, 0, iVar93[iVar5]);
			iVar5++;
		}
		uParam1->f_780.f_1[iVar4 /*14*/].f_3 = func_554(uVar96, iVar4, 0, bVar97);
		uParam1->f_780.f_1[iVar4 /*14*/].f_4 = { func_553(uVar98, iVar4, 0f, 0f, 0f, bVar99) };
		uParam1->f_780.f_1[iVar4 /*14*/].f_7 = func_552(uVar100, iVar4, 0f, bVar101);
		uParam1->f_780.f_1[iVar4 /*14*/].f_8 = func_560(uVar102, iVar4, -1, bVar103);
		uParam1->f_780.f_1[iVar4 /*14*/].f_9 = func_560(uVar104, iVar4, -1, bVar105);
		uParam1->f_780.f_1[iVar4 /*14*/].f_10 = func_554(uVar107, iVar4, -1, bVar108);
		uParam1->f_780.f_1[iVar4 /*14*/].f_10.f_1 = func_554(uVar109, iVar4, 12, bVar110);
		uParam1->f_780.f_1[iVar4 /*14*/].f_10.f_2 = func_552(uVar111, iVar4, 1f, bVar112);
		uParam1->f_780.f_1[iVar4 /*14*/].f_10.f_3 = func_551(uVar113, iVar4, 0, bVar114);
		iVar4++;
	}
	uParam1->f_780.f_212 = func_559(iVar88, "trv", -1);
	uParam1->f_993 = func_559(iVar115, "num", 0);
	iVar4 = 0;
	while (iVar4 < 23)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_993.f_1[iVar4 /*12*/][iVar5] = func_560(uVar117[iVar5], iVar4, 0, iVar120[iVar5]);
			iVar5++;
		}
		uParam1->f_993.f_1[iVar4 /*12*/].f_3 = func_554(uVar123, iVar4, 0, bVar124);
		uParam1->f_993.f_1[iVar4 /*12*/].f_4 = { func_553(uVar125, iVar4, 0f, 0f, 0f, bVar126) };
		uParam1->f_993.f_1[iVar4 /*12*/].f_7 = func_552(uVar127, iVar4, 0f, bVar128);
		uParam1->f_993.f_1[iVar4 /*12*/].f_8 = { func_553(uVar129, iVar4, 0f, 0f, 0f, bVar130) };
		uParam1->f_993.f_1[iVar4 /*12*/].f_11 = func_560(uVar131, iVar4, -1, bVar132);
		iVar4++;
	}
	uParam1->f_1271 = func_559(iVar133, "wnum", 0);
	uParam1->f_1271.f_1 = func_559(iVar133, "wfak", -1);
	uParam1->f_1271.f_2 = func_557(iVar133, "wblk", 250f);
	uParam1->f_1274 = func_559(iVar134, "time", -1);
	uParam1->f_1274.f_1 = func_558(iVar134, "disp", 0);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_1282[iVar4] = func_560(uVar137, iVar4, -1, bVar138);
		iVar4++;
	}
	uParam1->f_1282.f_3 = func_559(iVar135, "wvs", 3);
	uParam1->f_1282.f_4 = func_559(iVar135, "spd", 15000);
	uParam1->f_1282.f_5 = func_559(iVar135, "rspd", 5000);
	uParam1->f_1282.f_6 = func_557(iVar135, "sdst", 200f);
	uParam1->f_1282.f_7 = func_559(iVar135, "num", 0);
	uParam1->f_1290 = func_559(iVar139, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_1290.f_1[iVar4 /*11*/] = { func_553(uVar141, iVar4, 0f, 0f, 0f, bVar142) };
		uParam1->f_1290.f_1[iVar4 /*11*/].f_3 = func_552(uVar143, iVar4, -1f, bVar144);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1290.f_1[iVar4 /*11*/].f_4[iVar5] = func_560(uVar145[iVar5], iVar4, 0, iVar147[iVar5]);
			iVar5++;
		}
		uParam1->f_1290.f_1[iVar4 /*11*/].f_6 = func_552(uVar149, iVar4, 0f, bVar150);
		uParam1->f_1290.f_1[iVar4 /*11*/].f_7 = func_554(uVar152, iVar4, -1, bVar153);
		uParam1->f_1290.f_1[iVar4 /*11*/].f_7.f_1 = func_554(uVar154, iVar4, 12, bVar155);
		uParam1->f_1290.f_1[iVar4 /*11*/].f_7.f_2 = func_552(uVar156, iVar4, 1f, bVar157);
		uParam1->f_1290.f_1[iVar4 /*11*/].f_7.f_3 = func_551(uVar158, iVar4, 0, bVar159);
		iVar4++;
	}
	uParam1->f_1303 = func_559(iVar160, "num", 0);
	iVar4 = 0;
	while (iVar4 < 20)
	{
		uParam1->f_1303.f_1[iVar4 /*4*/] = { func_553(uVar162, iVar4, 0f, 0f, 0f, bVar163) };
		uParam1->f_1303.f_1[iVar4 /*4*/].f_3 = func_552(uVar164, iVar4, 0f, bVar165);
		iVar4++;
	}
	uParam1->f_1385 = func_559(iVar166, "num", 0);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_1385.f_1[iVar4 /*7*/] = func_554(uVar168, iVar4, -1, bVar169);
		uParam1->f_1385.f_1[iVar4 /*7*/].f_1 = { func_553(uVar170, iVar4, 0f, 0f, 0f, bVar171) };
		uParam1->f_1385.f_1[iVar4 /*7*/].f_4 = { func_553(uVar172, iVar4, 0f, 0f, 0f, bVar173) };
		iVar4++;
	}
	uParam1->f_1401 = func_559(iVar174, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_1401.f_1[iVar4] = func_554(uVar176, iVar4, -1, bVar177);
		iVar4++;
	}
	uParam1->f_1404 = func_559(iVar178, "num", 0);
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1404.f_1[iVar4 /*9*/][iVar5] = func_560(uVar180[iVar5], iVar4, 0, iVar182[iVar5]);
			iVar5++;
		}
		uParam1->f_1404.f_1[iVar4 /*9*/].f_2 = { func_553(uVar184, iVar4, 0f, 0f, 0f, bVar185) };
		uParam1->f_1404.f_1[iVar4 /*9*/].f_5 = { func_553(uVar186, iVar4, 0f, 0f, 0f, bVar187) };
		uParam1->f_1404.f_1[iVar4 /*9*/].f_8 = func_552(uVar188, iVar4, 0f, bVar189);
		iVar4++;
	}
	uParam1->f_1460 = func_559(iVar190, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_1460.f_1[iVar4 /*10*/] = func_560(uVar192, iVar4, -1, bVar193);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1460.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/] = func_560(uVar195[iVar5], iVar4, -1, iVar197[iVar5]);
			uParam1->f_1460.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_1 = { func_553(uVar199[iVar5], iVar4, 0f, 0f, 0f, iVar201[iVar5]) };
			uParam1->f_1460.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_4 = { func_553(uVar203[iVar5], iVar4, 0f, 0f, 0f, iVar205[iVar5]) };
			uParam1->f_1460.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_7 = func_560(uVar207[iVar5], iVar4, 2000, iVar209[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1553[iVar4 /*15*/][iVar5] = func_560(uVar213[iVar5], iVar4, 0, iVar215[iVar5]);
			iVar5++;
		}
		uParam1->f_1553[iVar4 /*15*/].f_2 = func_554(uVar217, iVar4, 0, bVar218);
		uParam1->f_1553[iVar4 /*15*/].f_3 = { func_553(uVar219, iVar4, 0f, 0f, 0f, bVar220) };
		uParam1->f_1553[iVar4 /*15*/].f_6 = { func_553(uVar221, iVar4, 0f, 0f, 0f, bVar222) };
		uParam1->f_1553[iVar4 /*15*/].f_9 = { func_553(uVar223, iVar4, 0f, 0f, 0f, bVar224) };
		uParam1->f_1553[iVar4 /*15*/].f_12 = { func_553(uVar225, iVar4, 0f, 0f, 0f, bVar226) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 12)
	{
		uParam1->f_1599[iVar4 /*16*/] = { func_550(uVar228, iVar4, "", bVar229) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_1792[iVar4 /*8*/] = { func_553(uVar231, iVar4, 0f, 0f, 0f, bVar232) };
		uParam1->f_1792[iVar4 /*8*/].f_3 = func_552(uVar233, iVar4, 0f, bVar234);
		uParam1->f_1792[iVar4 /*8*/].f_4 = func_560(uVar235, iVar4, -1, bVar236);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_1792[iVar4 /*8*/].f_6[iVar5] = func_560(uVar237[iVar5], iVar4, 0, iVar239[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
}

struct<16> func_550(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<16> Var0;
	
	if (bParam3 && iParam1 < unk_0xAB995AEF6AF44C1D(uParam0))
	{
		StringCopy(&Var0, unk_0x0F0BCF26721C4DE1(uParam0, iParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_551(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0xAB995AEF6AF44C1D(uParam0))
	{
		return unk_0x276A552F293D03F4(uParam0, iParam1);
	}
	return iParam2;
}

float func_552(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0xAB995AEF6AF44C1D(uParam0))
	{
		return unk_0x3E61B2932398250B(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_553(var uParam0, int iParam1, struct<3> Param2, bool bParam5)
{
	if (bParam5 && iParam1 < unk_0xAB995AEF6AF44C1D(uParam0))
	{
		return unk_0xD455094EC5178A83(uParam0, iParam1);
	}
	return Param2;
}

int func_554(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0xAB995AEF6AF44C1D(uParam0))
	{
		return unk_0x8681C47D516FF796(uParam0, iParam1);
	}
	return iParam2;
}

int func_555(int iParam0, char* sParam1, int iParam2)
{
	if (func_556(iParam0) && unk_0xBFD34AAE952D8C39(iParam0, sParam1) == 1)
	{
		return unk_0x094E93246CCC9103(iParam0, sParam1);
	}
	return iParam2;
}

bool func_556(int iParam0)
{
	return iParam0 != 0;
}

float func_557(int iParam0, char* sParam1, float fParam2)
{
	if (func_556(iParam0) && unk_0xBFD34AAE952D8C39(iParam0, sParam1) == 3)
	{
		return unk_0x4DB1F9BB44AB31C4(iParam0, sParam1);
	}
	return fParam2;
}

int func_558(int iParam0, char* sParam1, int iParam2)
{
	if (func_556(iParam0) && unk_0xBFD34AAE952D8C39(iParam0, sParam1) == 2)
	{
		return unk_0x4CCB328F9DA8E0D0(iParam0, sParam1);
	}
	return iParam2;
}

int func_559(int iParam0, char* sParam1, int iParam2)
{
	if (func_556(iParam0) && unk_0xBFD34AAE952D8C39(iParam0, sParam1) == 2)
	{
		return unk_0x4CCB328F9DA8E0D0(iParam0, sParam1);
	}
	return iParam2;
}

int func_560(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0xAB995AEF6AF44C1D(uParam0))
	{
		return unk_0x8681C47D516FF796(uParam0, iParam1);
	}
	return iParam2;
}

struct<16> func_561(int iParam0, char* sParam1, char* sParam2)
{
	struct<16> Var0;
	
	if (func_556(iParam0) && unk_0xBFD34AAE952D8C39(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, unk_0x9AF0046294647722(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_562(int iParam0, char* sParam1)
{
	if (!func_556(iParam0))
	{
		return 0;
	}
	return unk_0xBFD34AAE952D8C39(iParam0, sParam1);
}

void func_563(var uParam0, int iParam1, char* sParam2)
{
	if (!func_556(iParam1))
	{
		return;
	}
	if (!func_556(*uParam0) && unk_0xBFD34AAE952D8C39(iParam1, sParam2) == 6)
	{
		*uParam0 = unk_0x41140BC7F2CD52D1(iParam1, sParam2);
		if (!func_556(*uParam0))
		{
		}
	}
	if (!func_556(*uParam0))
	{
	}
}

void func_564()
{
	if (unk_0x4D9115464D37FCEB(0) != 0)
	{
		unk_0x9C02B660CDCF1292(0);
	}
}

char* func_565()
{
	return func_566(func_519(), func_567());
}

char* func_566(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return "BB_FactoryRaid_1";
			break;
		
		case 2:
			return "BB_FactoryRaid_2";
			break;
		
		case 3:
			return "BB_FactoryRaid_3";
			break;
		
		case 0:
			return "BB_AircraftCarrier";
			break;
		
		case 4:
			return "BB_CapturedUFO";
			break;
	}
	return "";
}

int func_567()
{
	return Local_4900.f_1078.f_1;
}

void func_568()
{
	if (func_1110(21))
	{
		return;
	}
	func_569();
	func_141(21);
}

void func_569()
{
	switch (func_519())
	{
		case 1:
			func_1009();
			break;
		
		case 0:
			func_734();
			break;
		
		case 2:
			func_570();
			break;
	}
}

void func_570()
{
	Local_2036.f_11 = 161509;
	Local_2036.f_3 = 155312;
	Local_2036.f_3.f_1 = 153713;
	Local_2036.f_8 = 153669;
	Local_2036.f_46.f_6 = 153645;
	Local_2036.f_46.f_7 = 153621;
	Local_2036.f_46.f_2 = 153606;
	Local_2036.f_46.f_3 = 153591;
	Local_2036.f_46.f_4 = 153576;
	Local_2036.f_9 = 153440;
	Local_2036.f_9.f_1 = 151036;
	Local_2036.f_139 = 150753;
	Local_2036.f_488.f_4 = 150707;
	Local_2036.f_100.f_30 = 150685;
	Local_2036.f_100.f_13 = 150673;
	Local_2036.f_294.f_39 = 149733;
	Local_2036.f_463 = 149685;
	Local_2036.f_478 = 149601;
	Local_2036.f_83 = 149575;
	Local_2036.f_83.f_1 = 149470;
	Local_2036.f_83.f_3.f_1 = 149399;
	Local_2036.f_83.f_3.f_2 = 149387;
	Local_2036.f_83.f_3.f_3 = 149375;
	Local_2036.f_83.f_3 = 149185;
	Local_2036.f_481 = 149140;
	Local_2036.f_481.f_1 = 149077;
	Local_2036.f_13 = 149056;
	Local_2036.f_13.f_4 = 148987;
	Local_2036.f_13.f_5 = 148962;
	Local_2036.f_466.f_1 = 148848;
	Local_2036.f_70 = 148596;
}

Vector3 func_571()
{
	if (func_574())
	{
		return func_572();
	}
	return Local_227.f_1290.f_1[0 /*11*/];
}

Vector3 func_572()
{
	int iVar0;
	
	iVar0 = func_573();
	if (iVar0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (!unk_0x159BC3DDA80D71AC(Local_4900.f_2[iVar0]))
	{
		return 0f, 0f, 0f;
	}
	return unk_0xD6E677FAD7521410(unk_0xD93F965CFAC1D06A(Local_4900.f_2[iVar0]), 0);
}

int func_573()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 99999f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < func_7())
	{
		if ((func_6(iVar2, 6) && !func_6(iVar2, 4)) && !func_6(iVar2, 3))
		{
			if (Local_3633[iVar2 /*7*/].f_1 < fVar0)
			{
				fVar0 = Local_3633[iVar2 /*7*/].f_1;
				iVar1 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_574()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_575(int iParam0, int iParam1)
{
	if (Local_3633[iParam0 /*7*/].f_2 > 200f)
	{
		if (Local_3633[iParam0 /*7*/].f_4 != func_64())
		{
			if (func_149(Local_3633[iParam0 /*7*/].f_4))
			{
				return 0;
			}
		}
	}
	if (unk_0x8954E9D0A9F6F8CF(iParam1, -1849.985f, 2987.693f, 30.81024f, -1789.067f, 2951.236f, 39.80975f, 80f, 0, 1, 0))
	{
		return 0;
	}
	return 1;
}

Vector3 func_576()
{
	struct<3> Var0;
	
	Var0 = { unk_0x9F2928DF31D785C7(iLocal_4826) };
	return 0f, 0f, Var0.f_2;
}

int func_577()
{
	if (unk_0x6B9E71121F5B8154(iLocal_4826) && unk_0x8954E9D0A9F6F8CF(iLocal_4826, 2330.829f, 2568.204f, 46.31508f, 2326.389f, 2570.28f, 49.00026f, 2f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

bool func_578()
{
	return Global_99422.f_362 == 491753907;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			if (func_580() > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_580()
{
	return Local_6015[iLocal_4827 /*206*/];
}

char* func_581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CUFO_HT_START";
		
		case 1:
			return "CUFO_HT_STEAL";
		
		default:
	}
	return "";
}

int func_582(int iParam0)
{
	if (!func_583(iLocal_4825))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1:
			if (func_580() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_404(iLocal_4826))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_580() >= 1)
			{
				return 2;
			}
			break;
		
		case 2:
			if (func_580() >= 2 && !func_404(iLocal_4826))
			{
				return 3;
			}
			break;
		
		case 3:
			if (func_580() < 2)
			{
				return 0;
			}
			break;
	}
	return -1;
}

int func_583(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

char* func_584()
{
	return "SUM20_BB_FAIL";
}

char* func_585()
{
	return "SUM20_BB_CAPTURED_STOP";
}

char* func_586(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SUM20_BB_CAPTURED_START";
		
		case 1:
			return "SUM20_BB_CAPTURED_APPROACH";
		
		case 2:
			return "SUM20_BB_CAPTURED_HANGAR";
		
		case 3:
			return "SUM20_BB_CAPTURED_DELIVERING";
		
		default:
	}
	return "";
}

int func_587(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_588(uParam0, "ship", Local_227.f_993.f_1[15 /*12*/].f_4, "DLC_sum20_BB_Captured_Sounds", 0, 0, 0);
		
		default:
	}
	return 0;
}

int func_588(var uParam0, char* sParam1, struct<3> Param2, char* sParam5, int iParam6, int iParam7, int iParam8)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0x5AD02BBC63E31E46();
		unk_0x4569EA65F1B056ED(*uParam0, sParam1, Param2, sParam5, iParam6, iParam7, iParam8);
		return 1;
	}
	return 0;
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_590(int iParam0)
{
	if (iParam0 == 0)
	{
		switch (func_591())
		{
			case 22:
			case 24:
			case 25:
			case 23:
				return 1;
				break;
			}
	}
	return 0;
}

int func_591()
{
	if (func_580() != -1)
	{
		return Local_2700[func_580() /*21*/];
	}
	return -1;
}

bool func_592()
{
	return SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Local_227.f_993.f_1[15 /*12*/].f_4) <= (100f * 100f);
}

int func_593(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			uParam1->f_66 = joaat("mesa3");
			StringCopy(&(uParam1->f_1), "44OGG425", 16);
			uParam1->f_5 = 154;
			uParam1->f_6 = 153;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x191DDA30577F440A(&(uParam1->f_77), 0);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 1);
			break;
		
		case 1:
			uParam1->f_66 = joaat("mesa3");
			StringCopy(&(uParam1->f_1), "09ALB692", 16);
			uParam1->f_5 = 154;
			uParam1->f_6 = 153;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x191DDA30577F440A(&(uParam1->f_77), 0);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 1);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 26);
			break;
		
		case 2:
			uParam1->f_66 = joaat("barracks3");
			StringCopy(&(uParam1->f_1), "43PCT649", 16);
			*uParam1 = 4;
			uParam1->f_5 = 132;
			uParam1->f_7 = 132;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		case 3:
			uParam1->f_66 = joaat("barracks3");
			StringCopy(&(uParam1->f_1), "66RAI976", 16);
			*uParam1 = 4;
			uParam1->f_5 = 132;
			uParam1->f_7 = 132;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		case 4:
			uParam1->f_66 = joaat("mesa3");
			StringCopy(&(uParam1->f_1), "53RYN511", 16);
			uParam1->f_5 = 154;
			uParam1->f_6 = 153;
			uParam1->f_8 = 154;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x191DDA30577F440A(&(uParam1->f_77), 0);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 1);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 25);
			break;
		
		case 5:
			uParam1->f_66 = joaat("mesa3");
			StringCopy(&(uParam1->f_1), "89STV802", 16);
			*uParam1 = 3;
			uParam1->f_5 = 152;
			uParam1->f_6 = 153;
			uParam1->f_8 = 153;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x191DDA30577F440A(&(uParam1->f_77), 1);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 25);
			break;
		
		case 6:
			uParam1->f_66 = joaat("mesa3");
			StringCopy(&(uParam1->f_1), "20SKL158", 16);
			*uParam1 = 3;
			uParam1->f_5 = 152;
			uParam1->f_6 = 153;
			uParam1->f_8 = 153;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x191DDA30577F440A(&(uParam1->f_77), 1);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 25);
			break;
		
		case 7:
			uParam1->f_66 = joaat("mesa3");
			StringCopy(&(uParam1->f_1), "44TOR049", 16);
			*uParam1 = 3;
			uParam1->f_5 = 152;
			uParam1->f_6 = 153;
			uParam1->f_8 = 153;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 4;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0x191DDA30577F440A(&(uParam1->f_77), 1);
			unk_0x191DDA30577F440A(&(uParam1->f_77), 25);
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

char* func_594(var uParam0)
{
	return "BLIP_752";
}

void func_595(var uParam0)
{
	unk_0x9B0169E27978C1A2(-1, "collect_part", "DLC_sum20_BB_Captured_Sounds", 1);
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_567())
			{
				case 4:
					return 747;
				
				default:
			}
			break;
	}
	return 0;
}

void func_597(int iParam0)
{
	func_601(iParam0, 0, 8);
	func_599(iParam0, 0, 1, 150959);
	func_599(iParam0, 0, 2, 150811);
	func_601(iParam0, 1, 7);
	func_601(iParam0, 2, 11);
}

int func_598(int iParam0, var uParam1)
{
	if (func_42(iParam0, 3))
	{
		return func_75(iParam0);
	}
	return 0;
}

void func_599(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2848.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18;
	uVar1 = iParam2;
	Local_2848.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/] = uVar1;
	Local_2848.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_2848.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/].f_18++;
}

int func_600(int iParam0, var uParam1)
{
	if (!func_42(iParam0, 3))
	{
		return func_75(iParam0);
	}
	return 0;
}

void func_601(int iParam0, int iParam1, int iParam2)
{
	Local_2848.f_574[iParam0 /*97*/].f_1[iParam1 /*19*/] = iParam2;
	Local_2848.f_574[iParam0 /*97*/]++;
}

void func_602()
{
	func_630(0, 4, 153088);
	func_628(0, 1, 153016);
	func_626(0, 152916);
	func_604(1, 2, 3, 4, 5, 152880, 152840, 152823, 151593, 0);
	func_630(5, 46, 151110);
}

void func_603()
{
}

void func_604(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_630(iVar0, 22, iParam5);
	func_628(iVar0, iParam4, 151424);
	func_605(iVar0, iVar1);
	func_605(iVar0, iVar4);
	func_605(iVar0, iVar5);
	func_605(iVar0, iVar2);
	func_630(iVar1, 24, iParam6);
	func_628(iVar1, iParam4, 151424);
	func_605(iVar1, iVar4);
	func_605(iVar1, iVar5);
	func_605(iVar1, iVar2);
	func_630(iVar2, 25, iParam7);
	func_628(iVar2, iParam4, 151424);
	func_605(iVar2, iVar1);
	func_605(iVar2, iVar4);
	func_605(iVar2, iVar5);
	func_630(iVar3, 23, iParam8);
	func_628(iVar3, iParam4, 151424);
	func_605(iVar3, iVar1);
	func_605(iVar3, iVar4);
	func_605(iVar3, iVar5);
	func_605(iVar3, iVar2);
}

void func_605(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2700[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_2700[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_2700[iParam0 /*21*/].f_19++;
}

int func_606()
{
	if (func_607(0))
	{
		return 1;
	}
	return 0;
}

int func_607(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_608(iVar0, bParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_608(int iParam0, bool bParam1)
{
	if (func_6(iParam0, 4) || func_6(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_609(iParam0, iLocal_4828, 6) || func_609(iParam0, iLocal_4828, 9))
		{
			return 1;
		}
	}
	return 0;
}

bool func_609(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_6015[iParam1 /*206*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_610()
{
	func_611("CUFO_OT_RECOVER", 0);
}

void func_611(char* sParam0, bool bParam1)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return;
	}
	if (func_621(sParam0))
	{
		return;
	}
	func_615();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_614();
	func_613(bParam1);
	func_612();
}

void func_612()
{
	unk_0x191DDA30577F440A(&(Global_1312603.f_59), 1);
}

void func_613(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_1312603.f_59), 0);
}

void func_614()
{
	Global_1312603.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 86400000);
	Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
}

void func_615()
{
	func_617();
	func_616(0);
}

void func_616(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x02BFF15CAA701972();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x551F46B3C7DFB654();
		Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
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

void func_617()
{
	if (!func_620())
	{
	}
	if (func_619())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_618();
		unk_0xEDA1E269A9237146();
	}
}

void func_618()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x38CD3C04C877C35F(Global_1312603.f_52);
			unk_0x38CD3C04C877C35F(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x5F14E9A3543AFD0E(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_57);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_16));
			unk_0xB2A9BDF905DC5A51(Global_1312603.f_56);
			unk_0x1896EC0B030A48A2(&(Global_1312603.f_48));
			unk_0xA91D83F2CC1345A6(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_619()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_620()
{
	if (!func_619())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_618();
	return unk_0xB4BAEA083E2652CB();
}

bool func_621(char* sParam0)
{
	if (!func_619())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_622(sParam0);
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
}

bool func_622(char* sParam0)
{
	if (!func_619())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

void func_623()
{
	func_611("CUFO_OT_HELPDEL", 0);
}

void func_624()
{
	if (unk_0x6C9038EC46DA62DE(iLocal_4825) > 0)
	{
		func_611("BBOT_LOSECOPS", 0);
		return;
	}
	func_611("CUFO_OT_DELIV", 0);
}

void func_625()
{
	func_611("CUFO_OT_STEAL", 0);
}

void func_626(int iParam0, int iParam1)
{
	Local_2700[iParam0 /*21*/].f_18 = iParam1;
}

void func_627()
{
	if (unk_0x575B7C28D81C0B4D(uLocal_4883))
	{
		unk_0x1AD5BCFEC31BB8D9(&uLocal_4883);
	}
}

void func_628(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2700[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_2700[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_2700[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_2700[iParam0 /*21*/].f_19++;
}

int func_629()
{
	if (func_574())
	{
		return 1;
	}
	if (func_148(unk_0x63700C801F742019(), 1))
	{
		return 1;
	}
	return 0;
}

void func_630(int iParam0, int iParam1, int iParam2)
{
	Local_2700[iParam0 /*21*/] = iParam1;
	Local_2700[iParam0 /*21*/].f_20 = iParam2;
	iLocal_4839++;
}

void func_631()
{
	func_632("FMCOT_GOTO", func_635(), 12, 0);
}

void func_632(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_633(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 19;
		Global_1312603.f_56 = iParam2;
	}
}

int func_633(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam1))
	{
		return 0;
	}
	if (func_634(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_615();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = uParam3;
	Global_1312603.f_56 = uParam3;
	func_614();
	func_613(bParam2);
	func_612();
	return 1;
}

bool func_634(char* sParam0, char* sParam1)
{
	if (!func_619())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam1))
	{
		return 0;
	}
	if (!unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam1) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

char* func_635()
{
	switch (func_567())
	{
		case 4:
			return "FMC_LOC_FORTZAN";
		
		default:
	}
	return "FMC_LOC_FORTZAN";
}

void func_636()
{
	func_638(0, 4);
	func_637(0, 1);
	func_638(1, 22);
	func_637(1, 2);
	func_638(2, 24);
	func_637(2, 3);
	func_638(3, 46);
}

void func_637(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2599[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_2599[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_2599[iParam0 /*20*/].f_19++;
}

void func_638(int iParam0, int iParam1)
{
	Local_2599[iParam0 /*20*/] = iParam1;
	iLocal_4838++;
}

var func_639()
{
	return Global_262145.f_24206;
}

var func_640()
{
	return Global_262145.f_24208;
}

var func_641()
{
	return Global_262145.f_24207;
}

int func_642(bool bParam0)
{
	if (bParam0)
	{
		return Global_262145.f_29166;
	}
	return 0;
}

int func_643(bool bParam0)
{
	if (bParam0)
	{
		return Global_262145.f_29165;
	}
	return 0;
}

void func_644()
{
	if (fLocal_12609 != 1f)
	{
		unk_0x551EB0FE7AB0B6CE(1f);
	}
	func_645();
}

void func_645()
{
	Global_2544210.f_5191.f_758 = 1;
}

void func_646()
{
	bool bVar0;
	int iVar1;
	struct<6> Var2;
	
	if (!func_655(iLocal_4825))
	{
		if (func_404(iLocal_4826))
		{
			func_141(25);
		}
	}
	if (unk_0x8954E9D0A9F6F8CF(iLocal_4826, -1787.215f, 2951.21f, 32.80973f, -1857.46f, 2991.99f, 56.81028f, 80f, 0, 1, 0))
	{
		if (unk_0xC49311A2A500FF09(iLocal_4826, 1))
		{
			bVar0 = true;
			iVar1 = unk_0x75B58B38E45C6F9A(iLocal_4826, 1);
			if (unk_0xDBB5D5416B2AB402(iVar1) && !unk_0x2F040F7AF0534E16(unk_0x6471F4759775FCA4(iVar1)))
			{
				Var2 = { func_652(func_653(4), func_653(5), func_653(0), func_653(1)) };
				unk_0x9B0169E27978C1A2(-1, "06", &Var2, 1);
			}
			if (unk_0xA6BE8F025C6B653F(iVar1))
			{
				if (unk_0x45A445014B256CB5(iVar1))
				{
					VEHICLE::_SET_VEHICLE_ROCKET_BOOST_PERCENTAGE(iVar1, 0f);
					unk_0x4AE9893CBA452EC0(iVar1, 0);
				}
				unk_0x89E171705EA920DA(iVar1, 0, 1, 0);
				func_650(iVar1, 5f, 30, 1056964608, 1, 0, 1);
			}
		}
	}
	else if (func_649(Local_4829, -1814.579f, 2968.072f, 31.80994f) <= 150f)
	{
		if (unk_0xC49311A2A500FF09(iLocal_4826, 1))
		{
			bVar0 = true;
		}
	}
	func_647(bVar0);
}

void func_647(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_12608 == -1)
		{
			iLocal_12608 = unk_0xB36B8558948EA7A8(2000, 2500);
		}
		if (func_15(&uLocal_12610, 7000, 0))
		{
			fLocal_12609 = 0f;
			unk_0x551EB0FE7AB0B6CE(fLocal_12609);
			if (!unk_0x1275587246A96F24())
			{
				if (func_15(&uLocal_12612, iLocal_12608, 0))
				{
					unk_0x01965518E9188F97();
					iLocal_12608 = -1;
					func_28(&uLocal_12612);
				}
			}
		}
		else
		{
			fLocal_12609 = ((5000f - SYSTEM::TO_FLOAT(func_648(&uLocal_12610, 0, 0))) / 5000f);
			if (fLocal_12609 < 0f)
			{
				fLocal_12609 = 0f;
			}
			unk_0x551EB0FE7AB0B6CE(fLocal_12609);
		}
	}
	else if (fLocal_12609 != 1f)
	{
		func_28(&uLocal_12610);
		fLocal_12609 = 1f;
		unk_0x551EB0FE7AB0B6CE(fLocal_12609);
	}
}

int func_648(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x02BFF15CAA701972() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), *uParam0);
		}
		else
		{
			return unk_0x2D57EADCBEDDB2AA(unk_0xCB3024ED32EBF9EC(), *uParam0);
		}
	}
	return unk_0x2D57EADCBEDDB2AA(unk_0xDFB7BFA6482FEE1E(), *uParam0);
}

float func_649(struct<3> Param0, struct<3> Param3)
{
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	return SYSTEM::VDIST(Param0, Param3);
}

int func_650(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x366E7F593105797F(0, 71, 1);
	unk_0x366E7F593105797F(0, 72, 1);
	unk_0x366E7F593105797F(0, 76, 1);
	unk_0x366E7F593105797F(0, 73, 1);
	unk_0x366E7F593105797F(0, 59, 1);
	unk_0x366E7F593105797F(0, 60, 1);
	if (bParam5)
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
	unk_0x366E7F593105797F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x366E7F593105797F(0, 69, 1);
		unk_0x366E7F593105797F(0, 70, 1);
		unk_0x366E7F593105797F(0, 68, 1);
	}
	unk_0x366E7F593105797F(0, 74, 1);
	unk_0x366E7F593105797F(0, 86, 1);
	unk_0x366E7F593105797F(0, 81, 1);
	unk_0x366E7F593105797F(0, 82, 1);
	unk_0x366E7F593105797F(0, 138, 1);
	unk_0x366E7F593105797F(0, 136, 1);
	unk_0x366E7F593105797F(0, 114, 1);
	unk_0x366E7F593105797F(0, 107, 1);
	unk_0x366E7F593105797F(0, 110, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 89, 1);
	unk_0x366E7F593105797F(0, 87, 1);
	unk_0x366E7F593105797F(0, 88, 1);
	unk_0x366E7F593105797F(0, 113, 1);
	unk_0x366E7F593105797F(0, 115, 1);
	unk_0x366E7F593105797F(0, 116, 1);
	unk_0x366E7F593105797F(0, 117, 1);
	unk_0x366E7F593105797F(0, 118, 1);
	unk_0x366E7F593105797F(0, 119, 1);
	unk_0x366E7F593105797F(0, 352, 1);
	unk_0x366E7F593105797F(0, 131, 1);
	unk_0x366E7F593105797F(0, 132, 1);
	unk_0x366E7F593105797F(0, 123, 1);
	unk_0x366E7F593105797F(0, 126, 1);
	unk_0x366E7F593105797F(0, 129, 1);
	unk_0x366E7F593105797F(0, 130, 1);
	unk_0x366E7F593105797F(0, 133, 1);
	unk_0x366E7F593105797F(0, 134, 1);
	unk_0x042D3F56FFA48394();
	func_651(iParam0);
	if ((unk_0xDFB7BFA6482FEE1E() - Global_29) > 500)
	{
		unk_0x101C61FF49B27BB8(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xDFB7BFA6482FEE1E();
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x0BCA9ADE67DF9DD8(unk_0x4DDAC4C80BACF92C(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_651(int iParam0)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0x45A445014B256CB5(iParam0))
		{
			if (unk_0x7FFAB542797E5F31(iParam0))
			{
				unk_0x4AE9893CBA452EC0(iParam0, 0);
			}
		}
	}
}

struct<6> func_652(char* sParam0, char* sParam1, char* sParam2, char* sParam3)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	StringConCat(&Var0, sParam0, 24);
	StringConCat(&Var0, sParam3, 24);
	StringConCat(&Var0, sParam2, 24);
	return Var0;
}

char* func_653(int iParam0)
{
	func_654(&iParam0);
	switch (iParam0)
	{
		case 0:
			return "port";
		
		case 1:
			return "al";
		
		case 2:
			return "ry";
		
		case 3:
			return "n";
		
		case 4:
			return "WAR";
		
		case 5:
			return "bar";
		
		case 6:
			return "m";
		
		case 7:
			return "dset";
		
		case 8:
			return "lie";
		
		case 9:
			return "s";
		
		case 10:
			return "01";
		
		case 11:
			return "n_DEA";
		
		case 12:
			return "w";
		
		case 13:
			return "_1_tele";
		
		case 14:
			return "_aln";
		
		case 15:
			return "_R";
		
		case 16:
			return "_01_soun";
		
		case 17:
			return "IE";
		
		case 18:
			return "pa";
		
		case 19:
			return "t";
		
		case 20:
			return "scr";
		
		case 21:
			return "rc";
		
		case 22:
			return "th";
		
		case 23:
			return "a";
		
		case 24:
			return "p_in";
		
		case 25:
			return "_scene";
		
		case 26:
			return "_GR_";
		
		case 27:
			return "dlc_gr";
		
		case 28:
			return "_CS2_";
		
		case 29:
			return "oneshot";
		
		case 30:
			return "General";
		
		case 31:
			return "sounds";
		
		case 32:
			return "";
		
		default:
	}
	return "";
}

void func_654(var uParam0)
{
	*uParam0 = (32 - *uParam0);
}

int func_655(int iParam0)
{
	if (func_583(iParam0))
	{
		return 1;
	}
	if (func_656(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_656(int iParam0)
{
	return func_657(iParam0, 20);
}

bool func_657(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

void func_658()
{
	if (func_513() == 0 && func_659(2, 0, 0, 0, 0))
	{
		func_10(12);
	}
}

int func_659(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_246(unk_0x1146A9AE09CE2B14(), 0) || func_716(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_715(unk_0x1146A9AE09CE2B14()) || func_656(unk_0x1146A9AE09CE2B14()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xC1C987F7EC21C39A() < iParam0)
	{
		if (bParam2)
		{
			func_664(sParam3, sParam4, 1);
		}
		if (func_663(26, -1))
		{
			func_661(26, -1);
		}
		return 1;
	}
	if (func_17(&(Global_1574671.f_18)))
	{
		if (!func_15(&(Global_1574671.f_18), 7500, 0))
		{
			return 0;
		}
		func_28(&(Global_1574671.f_18));
	}
	if (func_660())
	{
		if (bParam2)
		{
			func_664(sParam3, sParam4, 0);
		}
		if (func_663(26, -1))
		{
			func_661(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xAB0F784335D14AC3() < iParam0)
	{
		if (bParam2)
		{
			func_664(sParam3, sParam4, 1);
		}
		if (func_663(26, -1))
		{
			func_661(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_660()
{
	return unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 0);
}

void func_661(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xC2D5316F6C82B7CC(0, iParam1);
			break;
		
		default:
			iVar1 = func_662(iParam1);
			iVar0 = unk_0xC82CD1DB42480082(iVar1);
			if (unk_0x234B68AC2E35ED5A(iVar0, iParam0))
			{
				unk_0xC664C0067EEAB8D1(&iVar0, iParam0);
				unk_0xC2D5316F6C82B7CC(iVar0, iParam1);
			}
			break;
	}
}

int func_662(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_86();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_663(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_86();
	}
	iVar0 = func_662(iParam1);
	iVar1 = unk_0xC82CD1DB42480082(iVar0);
	return unk_0x234B68AC2E35ED5A(iVar1, iParam0);
}

void func_664(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0x234B68AC2E35ED5A(Global_1574671.f_1, 2) && !func_714(unk_0x1146A9AE09CE2B14())) && !func_713(unk_0x1146A9AE09CE2B14()))
	{
		if (unk_0xAB6A270F84A8781E(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xAB6A270F84A8781E(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_665(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0x191DDA30577F440A(&(Global_1574671.f_1), 2);
	}
}

int func_665(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_712(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_710(&(Var0.f_69), iParam7);
	}
	return func_666(&Var0);
}

int func_666(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_680(uParam0, uParam0->f_17);
	func_677(uParam0);
	if (func_89())
	{
		func_677(uParam0);
	}
	if (func_676(uParam0->f_1))
	{
		func_669();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_668(uParam0->f_69, 8192))
			{
				Global_1669340 = 1;
			}
			return 1;
		}
		if (((Global_2441237.f_2841[0 /*80*/].f_1 == 13 || Global_2441237.f_2841[0 /*80*/].f_1 == 53) || Global_2441237.f_2841[0 /*80*/].f_1 == 54) || Global_2441237.f_2841[0 /*80*/].f_1 == 58)
		{
			Global_2441237.f_2841[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2441237.f_2841[iVar0 + 1 /*80*/] = { Global_2441237.f_2841[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2441237.f_2841[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_669();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_710(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_668(uParam0->f_69, 128))
			{
				if (func_667(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_710(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_667(int iParam0)
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

bool func_668(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_669()
{
	bool bVar0;
	
	if (Global_2441237.f_3164)
	{
		return;
	}
	if (!Global_77516)
	{
		Global_77516 = 1;
		bVar0 = true;
	}
	func_670();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_670()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_674(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_671(&(Global_2441237.f_3165.f_1), 1);
}

void func_671(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x3D9BC07C93913E04(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0x3640D836D145B814())
		{
			unk_0x704F8697BB515627(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0x9D7453DF8B7E9E0B(0);
			unk_0x392841D58D2EED1D();
		}
		unk_0x3D9BC07C93913E04(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xA82C5CF50055A1B4(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77516)
	{
		if (!unk_0x06883FE08D5D5F4A(unk_0x638BDC79E655C1C2()))
		{
			if (!Global_77517)
			{
				if (unk_0x8B6A925F148E0E94() && !func_673(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_672(0);
}

void func_672(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_673(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_674(var uParam0)
{
	func_675(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_675(var uParam0)
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

int func_676(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_677(var uParam0)
{
	if (func_679(uParam0->f_1))
	{
		uParam0->f_72 = func_678();
	}
}

int func_678()
{
	return 21;
}

int func_679(int iParam0)
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
		case joaat("mpsv_lp0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_680(var uParam0, int iParam1)
{
	if (func_679(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_64() || !func_11(iParam1, 0, 1))
	{
		return;
	}
	if (func_667(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_681(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_681(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_342(iParam0) && !bParam4)
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
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_80260[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_342(unk_0x1146A9AE09CE2B14()) || (func_709() && func_708())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		iVar1 = func_707();
		if (unk_0x419E13582192CFEA(iVar1))
		{
			if (unk_0x72D30262CF8C8603(iVar1))
			{
				if (unk_0xCB567ED25393C1DF(iVar1) != -1)
				{
					if (func_11(unk_0xCB567ED25393C1DF(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
						{
							if (Global_4456448.f_80260[iParam1] != -1)
							{
								return func_705(iParam1, iParam0, 0);
							}
							else
							{
								return func_693(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_693(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_705(iParam1, iParam0, 0);
				}
				else
				{
					return func_682(0, -1, 0);
				}
			}
			else
			{
				return func_682(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_705(iParam1, iParam0, 0);
		}
		else
		{
			return func_693(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_693(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_682(bool bParam0, int iParam1, bool bParam2)
{
	return func_683(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_683(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_692() || (func_691() && func_689())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_688(iParam2, iVar0);
		}
		else
		{
			return func_688(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_338(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_687(1);
				}
				else
				{
					return func_687(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_684(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_684(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_687(1);
	}
	return func_687(0);
}

int func_684(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_686(iParam0, iParam1, iParam3);
	if (func_685(Global_4456448.f_85535, 1))
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

int func_685(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_133963 == 65)
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
		if (iParam0 == Global_262145.f_9191[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_686(int iParam0, int iParam1, int iParam2)
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
			if (!func_338(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_687(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_688(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_686(iParam1, iParam0, 4);
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

bool func_689()
{
	if (func_690())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_690()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_691()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_692()
{
	if (func_690() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_693(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590908[iVar2 /*874*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_699())
			{
				iVar3 = func_698(iParam0);
				if (!iVar3 == -1)
				{
					return func_696(iVar3);
				}
			}
			if ((func_695(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_338(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_687(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_694(1);
			}
			else
			{
				return func_683(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_687(1);
			}
			else
			{
				return func_683(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_698(iParam0);
	if (!iVar4 == -1)
	{
		return func_696(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_694(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_695(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && unk_0x7C3E030BC3ED6671(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x7C3E030BC3ED6671(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
	}
	return unk_0x7C3E030BC3ED6671(iParam0) == iParam2;
}

int func_696(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_697(iParam0);
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

var func_697(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_698(int iParam0)
{
	if (!iParam0 == func_64())
	{
		if (func_71(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_93(iParam0)];
		}
	}
	return -1;
}

int func_699()
{
	if (((((func_411() || func_704()) || func_89()) || func_703()) || func_702()) || func_700())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_700()
{
	return func_701(Global_4456448.f_85535);
}

int func_701(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30524[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_702()
{
	return Global_2453009.f_24;
}

bool func_703()
{
	return Global_2453009.f_21;
}

var func_704()
{
	return Global_2453009.f_18;
}

int func_705(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_699())
	{
		iVar2 = func_698(iParam1);
		if (!iVar2 == -1)
		{
			return func_696(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_64())
	{
		if (Global_4456448.f_80260[iParam0] != -1 && Global_4456448.f_80260[iParam0] <= 4)
		{
			if (Global_4456448.f_80260[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_80260[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_80260[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_80260[iParam0] == 4)
			{
				if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_80260[iParam0];
			}
		}
		else
		{
			iVar0 = func_683(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_706(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_338(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_694(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_706(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_134108;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_134109;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_134110;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_134111;
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

var func_707()
{
	return Global_2359302.f_2;
}

bool func_708()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_709()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

void func_710(var uParam0, int iParam1)
{
	func_711(uParam0, iParam1);
}

void func_711(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_712(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_64();
	uParam1->f_18 = func_64();
	uParam1->f_19 = func_64();
	uParam1->f_20 = func_64();
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

bool func_713(int iParam0)
{
	if (func_714(iParam0))
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8);
}

bool func_714(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_715(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_657(iParam0, 9);
	}
	return 0;
}

int func_716(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 && func_717(Global_1630816[iParam0 /*597*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1)
	{
		if (func_717(Global_1630816[iParam0 /*597*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_717(int iParam0)
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
	return func_718(iParam0, 0);
	return 0;
}

int func_718(int iParam0, int iParam1)
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

void func_719()
{
	int iVar0;
	
	func_733();
	func_731();
	func_729();
	func_728();
	func_727();
	func_726(5);
	func_726(4);
	func_726(18);
	func_726(0);
	func_726(20);
	func_726(15);
	Local_227.f_1401.f_1[0] = 4;
	Local_227.f_1401 = 1;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_227.f_1303.f_1[iVar0 /*4*/] = { func_725(iVar0) };
		Local_227.f_1303.f_1[iVar0 /*4*/].f_3 = 244.1986f;
		iVar0++;
	}
	Local_227.f_1303 = 20;
	func_724();
	iVar0 = 0;
	while (iVar0 < Local_227.f_129)
	{
		if (func_723(iVar0))
		{
			Local_227.f_129.f_1[iVar0 /*21*/].f_14 = 1;
			func_722(iVar0, 3);
		}
		else
		{
			Local_227.f_129.f_1[iVar0 /*21*/].f_14 = 0;
			Local_227.f_129.f_1[iVar0 /*21*/].f_20 = 3f;
		}
		iVar0++;
	}
	Local_227.f_129.f_632[0 /*9*/].f_1[0] = 0;
	Local_227.f_129.f_632[0 /*9*/].f_1[1] = 1;
	Local_227.f_129.f_632[0 /*9*/] = Global_1575027;
	Local_227.f_129.f_632[1 /*9*/].f_1[0] = 0;
	Local_227.f_129.f_632[1 /*9*/].f_1[1] = 1;
	Local_227.f_129.f_632[1 /*9*/] = Global_1575021;
	iVar0 = 0;
	while (iVar0 < Local_227.f_993)
	{
		func_721(iVar0, 8);
		func_721(iVar0, 10);
		func_721(iVar0, 15);
		iVar0++;
	}
	func_721(15, 26);
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		func_720(iVar0, 1);
		func_720(iVar0, 2);
		iVar0++;
	}
}

void func_720(int iParam0, int iParam1)
{
	if (func_19(&(Local_227.f_19.f_5[iParam0 /*13*/]), iParam1))
	{
	}
}

void func_721(int iParam0, int iParam1)
{
	if (func_19(&(Local_227.f_993.f_1[iParam0 /*12*/]), iParam1))
	{
	}
}

void func_722(int iParam0, int iParam1)
{
	if (func_19(&(Local_227.f_129.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

bool func_723(int iParam0)
{
	return Local_227.f_129.f_1[iParam0 /*21*/].f_2 == joaat("s_m_m_scientist_01");
}

void func_724()
{
	Local_227.f_1271 = 2;
}

Vector3 func_725(int iParam0)
{
	switch (func_567())
	{
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1906.231f, 3019.514f, 31.8105f;
				
				case 1:
					return -1905.018f, 3021.437f, 31.8105f;
				
				case 2:
					return -1907.301f, 3017.431f, 31.8105f;
				
				case 3:
					return -1903.545f, 3023.694f, 31.8105f;
				
				case 4:
					return -1908.523f, 3014.959f, 31.8103f;
				
				case 5:
					return -1902.112f, 3026.209f, 31.8105f;
				
				case 6:
					return -1910.139f, 3012.123f, 31.8103f;
				
				case 7:
					return -1912.158f, 3009.239f, 31.8103f;
				
				case 8:
					return -1900.851f, 3029.08f, 31.8105f;
				
				case 9:
					return -1909.241f, 3022.646f, 31.8103f;
				
				case 10:
					return -1910.433f, 3020.554f, 31.8103f;
				
				case 11:
					return -1907.93f, 3024.946f, 31.8103f;
				
				case 12:
					return -1911.645f, 3018.427f, 31.8103f;
				
				case 13:
					return -1906.437f, 3027.176f, 31.8103f;
				
				case 14:
					return -1913.17f, 3015.363f, 31.8103f;
				
				case 15:
					return -1904.967f, 3029.752f, 31.8105f;
				
				case 16:
					return -1914.817f, 3012.47f, 31.8103f;
				
				case 17:
					return -1912.597f, 3023.293f, 31.8104f;
				
				case 18:
					return -1913.893f, 3021.08f, 31.8104f;
				
				case 19:
					return -1911.35f, 3025.422f, 31.8104f;
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_726(int iParam0)
{
	if (func_19(&(Local_227.f_16), iParam0))
	{
	}
}

void func_727()
{
	switch (func_567())
	{
		case 4:
			Local_227.f_129.f_1[25 /*21*/].f_9 = -1;
			Local_227.f_129.f_1[25 /*21*/].f_8 = 6;
			Local_227.f_129.f_1[26 /*21*/].f_9 = 2;
			Local_227.f_129.f_1[26 /*21*/].f_8 = 6;
			Local_227.f_129.f_1[27 /*21*/].f_9 = -1;
			Local_227.f_129.f_1[27 /*21*/].f_8 = 7;
			Local_227.f_129.f_1[28 /*21*/].f_9 = 2;
			Local_227.f_129.f_1[28 /*21*/].f_8 = 7;
			Local_227.f_1282.f_3 = 3;
			Local_227.f_1282[0] = 6;
			Local_227.f_1282[1] = 7;
			Local_227.f_1282.f_6 = 100f;
			Local_227.f_1282.f_4 = 10000;
			Local_227.f_1282.f_5 = 5000;
			break;
	}
}

void func_728()
{
	switch (func_567())
	{
		case 4:
			Local_227.f_1290.f_1[0 /*11*/] = { -1858.498f, 2992.826f, 31.8103f };
			Local_227.f_1290.f_1[0 /*11*/].f_3 = 2f;
			Local_227.f_1290 = 1;
			break;
	}
}

void func_729()
{
	switch (func_567())
	{
		case 4:
			Local_227.f_1404.f_1[0 /*9*/].f_2 = { -1849.985f, 2987.693f, 30.81024f };
			Local_227.f_1404.f_1[0 /*9*/].f_5 = { -1789.067f, 2951.236f, 39.80975f };
			Local_227.f_1404.f_1[0 /*9*/].f_8 = 80f;
			func_730(0, 0);
			Local_227.f_1404.f_1[1 /*9*/].f_2 = { -1896.166f, 3014.379f, 30.8105f };
			Local_227.f_1404.f_1[1 /*9*/].f_5 = { -1782.321f, 2947.052f, 131.8514f };
			Local_227.f_1404.f_1[1 /*9*/].f_8 = 200f;
			func_730(1, 2);
			Local_227.f_1404 = 2;
			break;
	}
}

void func_730(int iParam0, int iParam1)
{
	if (func_19(&(Local_227.f_1404.f_1[iParam0 /*9*/]), iParam1))
	{
	}
}

void func_731()
{
	Local_227.f_1546[0 /*6*/] = 3;
	Local_227.f_1546[0 /*6*/].f_1 = func_732();
}

char* func_732()
{
	switch (func_500())
	{
		case 0:
			return "FMC_HUD_CARGO";
		
		case 4:
			return "FMC_HUD_SCARGO";
		
		case 2:
			return "FMC_HUD_BIKER";
		
		case 3:
			return "FMC_HUD_GUNRUN";
		
		case 5:
			return "FMC_HUD_EVENT";
		
		case 6:
			return "FMC_HUD_UFO";
		
		default:
	}
	return "FMC_HUD_CARGO";
}

void func_733()
{
	int iVar0;
	
	switch (func_519())
	{
		case 2:
			iVar0 = Global_262145.f_29167;
			break;
		
		case 1:
			iVar0 = Global_262145.f_29163;
			break;
		
		case 0:
			iVar0 = Global_262145.f_29159;
			break;
	}
	Local_227.f_1274 = ((iVar0 / 60) / 1000);
}

void func_734()
{
	Local_2036.f_11 = 316995;
	Local_2036.f_3 = 155312;
	Local_2036.f_3.f_1 = 314508;
	Local_2036.f_46.f_6 = 314484;
	Local_2036.f_46.f_7 = 314460;
	Local_2036.f_46.f_2 = 153606;
	Local_2036.f_46.f_3 = 153591;
	Local_2036.f_46.f_4 = 153576;
	Local_2036.f_488.f_4.f_1 = 313372;
	Local_2036.f_139 = 313321;
	Local_2036.f_139.f_138 = 313309;
	Local_2036.f_139.f_143 = 313244;
	Local_2036.f_139.f_134 = 313219;
	Local_2036.f_139.f_134.f_1 = 312941;
	Local_2036.f_139.f_134.f_2 = 312932;
	Local_2036.f_9 = 312879;
	Local_2036.f_9.f_1 = 311796;
	Local_2036.f_100.f_21 = 313309;
	Local_2036.f_294.f_21 = 311708;
	Local_2036.f_294.f_39 = 310614;
	Local_2036.f_294.f_38 = 310557;
	Local_2036.f_294 = 310515;
	Local_2036.f_294.f_5 = 310493;
	Local_2036.f_294.f_13 = 310465;
	Local_2036.f_294.f_4 = 310440;
	Local_2036.f_294.f_16 = 310391;
	Local_2036.f_294.f_30 = 310309;
	Local_2036.f_343.f_21 = 313309;
	Local_2036.f_392 = 310296;
	Local_2036.f_392.f_26 = 310049;
	Local_2036.f_392.f_26.f_13 = 310037;
	Local_2036.f_392.f_26.f_14 = 310028;
	Local_2036.f_392.f_47 = 310016;
	Local_2036.f_392.f_5 = 309976;
	Local_2036.f_392.f_20 = 302106;
	Local_2036.f_392.f_22 = 302084;
	Local_2036.f_392.f_49 = 302057;
	Local_2036.f_392.f_49.f_2 = 302045;
	Local_2036.f_392.f_49.f_3 = 301984;
	Local_2036.f_392.f_49.f_1 = 301921;
	Local_2036.f_476.f_1 = 301890;
	Local_2036.f_476 = 301843;
	Local_2036.f_478 = 149601;
	Local_2036.f_463.f_2 = 301830;
	Local_2036.f_463 = 301803;
	Local_2036.f_481 = 301587;
	Local_2036.f_481.f_1 = 165167;
	Local_2036.f_481.f_3 = 164995;
	Local_2036.f_481.f_5 = 164976;
	Local_2036.f_83.f_1 = 164779;
	Local_2036.f_83 = 164569;
	Local_2036.f_83.f_2 = 164543;
	Local_2036.f_83.f_3.f_1 = 164472;
	Local_2036.f_83.f_3.f_2 = 164460;
	Local_2036.f_83.f_3.f_3 = 164448;
	Local_2036.f_83.f_3 = 164267;
	Local_2036.f_13 = 164246;
	Local_2036.f_13.f_3 = 164215;
	Local_2036.f_13.f_4 = 164142;
	Local_2036.f_13.f_5 = 164117;
	Local_2036.f_70 = 148596;
	Local_2036.f_8 = 163986;
}

void func_735()
{
	func_737(0);
	func_737(1);
	func_737(2);
	func_736(87);
	func_736(88);
	func_645();
}

void func_736(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_205[iVar0]), iVar1);
}

void func_737(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xC664C0067EEAB8D1(&(Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_48[iVar0]), iVar1);
}

Vector3 func_738()
{
	struct<3> Var0;
	
	Var0 = { unk_0x9F2928DF31D785C7(iLocal_4826) };
	return 0f, 0f, Var0.f_2;
}

int func_739()
{
	if (unk_0x6B9E71121F5B8154(iLocal_4826) && unk_0x8954E9D0A9F6F8CF(iLocal_4826, 3094.456f, -4724.843f, 29.16761f, 3089.353f, -4726.173f, 26.95424f, 1.3f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

float func_740()
{
	if (Local_4829.f_2 > 27.9f)
	{
		return 0.65f;
	}
	return -1f;
}

bool func_741()
{
	return Global_99422.f_362 == -296894594;
}

int func_742(int iParam0)
{
	if (!func_583(iLocal_4825))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1:
			if (func_580() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_580() >= 1)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_743())
			{
				return 2;
			}
			break;
		
		case 2:
			if (func_580() >= 2)
			{
				return 3;
			}
			break;
		
		case 3:
			if (func_580() < 2)
			{
				return 0;
			}
			break;
	}
	return -1;
}

int func_743()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_129.f_632)
	{
		if (func_76(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_744()
{
	return "SUM20_BB_FAIL";
}

char* func_745()
{
	return "SUM20_BB_AIRCRAFT_STOP";
}

char* func_746(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SUM20_BB_AIRCRAFT_START";
		
		case 1:
			return "SUM20_BB_AIRCRAFT_COLLECT";
		
		case 2:
			return "SUM20_BB_AIRCRAFT_COMBAT";
		
		case 3:
			return "SUM20_BB_AIRCRAFT_DELIVERING";
		
		default:
	}
	return "";
}

int func_747(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_76(0) && !func_750())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_749(iLocal_4828, 4))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_750())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_749(int iParam0, int iParam1)
{
	if (iParam0 == iLocal_4828)
	{
		return func_130(&(Local_6015[iLocal_4827 /*206*/].f_172.f_2), iParam1);
	}
	return func_130(&(Local_6015[iParam0 /*206*/].f_172.f_2), iParam1);
}

int func_750()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_1472)
	{
		if (!func_751(iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_751(int iParam0)
{
	return func_130(&(Local_4900.f_1058), iParam0);
}

int func_752(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (unk_0x952AB441FA24BF16("ALARM_KLAXON_07", 0, -1))
			{
				if (!func_754(1))
				{
					unk_0x4569EA65F1B056ED(-1, "Air_Defences_Activated", func_753(), "DLC_sum20_Business_Battle_AC_Sounds", 0, 0, 0);
				}
				return func_588(uParam0, "Klaxon_07_Louder", func_753(), "Alarms_Soundset", 0, 0, 0);
			}
			break;
		
		case 1:
			unk_0x4569EA65F1B056ED(-1, "Air_Defences_Activated", func_753(), "DLC_sum20_Business_Battle_AC_Sounds", 0, 0, 0);
			return 1;
			break;
		
		case 2:
			unk_0x4569EA65F1B056ED(-1, "Air_Defenses_Disabled", func_753(), "DLC_sum20_Business_Battle_AC_Sounds", 0, 0, 0);
			return 1;
			break;
	}
	return 0;
}

Vector3 func_753()
{
	return 3090.325f, -4704.375f, 28.0355f;
}

bool func_754(int iParam0)
{
	return func_130(&Local_4800, iParam0);
}

int func_755(int iParam0)
{
	if (iParam0 == 2)
	{
		return 0;
	}
	return 1;
}

void func_756(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			if (unk_0x575B7C28D81C0B4D(uLocal_3617[8]))
			{
				func_757(&(uLocal_3617[8]), 0);
			}
			if (unk_0x575B7C28D81C0B4D(uLocal_3617[9]))
			{
				func_757(&(uLocal_3617[9]), 0);
			}
			if (unk_0x575B7C28D81C0B4D(uLocal_3617[10]))
			{
				func_757(&(uLocal_3617[10]), 0);
			}
			if (unk_0x575B7C28D81C0B4D(uLocal_3617[11]))
			{
				func_757(&(uLocal_3617[11]), 0);
			}
			break;
	}
}

void func_757(var uParam0, bool bParam1)
{
	unk_0x89936830A493350F(*uParam0, 1);
	unk_0x8E2E721D21D4A751(*uParam0, 250);
	unk_0xFABF45630A359B11(*uParam0, 7000);
	if (bParam1)
	{
		unk_0xC5CEFC62F3637652();
	}
}

int func_758(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 6:
			if (func_860(0) && func_15(&uLocal_224, 15000, 0))
			{
				if (!func_858())
				{
					return 1;
				}
				else
				{
					func_856(6);
				}
			}
			break;
		
		case 1:
			if (func_580() == 1)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_855())
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_580() >= 1)
			{
				iVar0 = 0;
				while (iVar0 < Local_227.f_1472)
				{
					if (unk_0x575B7C28D81C0B4D(Local_3762.f_6[iVar0]) && unk_0xDAA1E5A2BEE06B50(Local_3762.f_6[iVar0]))
					{
						return 1;
					}
					iVar0++;
				}
			}
			break;
		
		case 2:
			if (func_749(iLocal_4828, 4))
			{
				return 1;
			}
			if ((unk_0x2053F6ACFD4ED4BC() % 30) == 0 && func_854(unk_0x7D2B9E6A64637269(), Local_227.f_780.f_1[7 /*14*/].f_4, 170f))
			{
				if (func_851((unk_0x6A86865E010A134F(unk_0x7D2B9E6A64637269()) || func_853(unk_0x7D2B9E6A64637269()))))
				{
					return 1;
				}
			}
			break;
		
		case 5:
			if (func_750())
			{
				return 1;
			}
			break;
		
		case 7:
			if ((((func_500() != 5 && !func_71(iLocal_4825, 0)) && func_850(iLocal_4825)) && func_849(iLocal_4825, 0)) && func_759(iLocal_4825))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_759(int iParam0)
{
	switch (func_500())
	{
		case 2:
			return func_848(iParam0);
		
		case 5:
			return func_773();
		
		case 6:
			return 0;
		
		default:
	}
	if (iLocal_223 == -1)
	{
		return 0;
	}
	return func_760(iParam0, iLocal_223);
}

bool func_760(int iParam0, int iParam1)
{
	return func_763(iParam0, iParam1) == func_761(iParam0, iParam1);
}

int func_761(int iParam0, int iParam1)
{
	if (unk_0xE45310E861787FC2())
	{
		switch (iParam1)
		{
			case 2:
				return Global_4456448.f_127840.f_13;
				break;
			
			case 4:
				return Global_4456448.f_127840.f_12;
				break;
			
			case 3:
				return Global_4456448.f_127840.f_11;
				break;
			
			case 5:
				return Global_4456448.f_127840.f_10;
				break;
			
			case 6:
				return Global_4456448.f_127840.f_9;
				break;
		}
		return 0;
	}
	if (iParam0 == func_64() || !func_762(iParam1))
	{
		return 0;
	}
	return Global_1590908[iParam0 /*874*/].f_267.f_283.f_8[iParam1];
}

bool func_762(int iParam0)
{
	return (iParam0 != -1 && iParam0 != 7);
}

int func_763(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == func_64() || !func_762(iParam1))
	{
		return 0;
	}
	iVar0 = func_771(iParam1);
	iVar1 = func_764(iParam0);
	return (iVar0 * iVar1);
}

int func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar2 = (5 + iVar0);
		iVar3 = iVar2;
		if (func_765(iParam0, iVar3))
		{
			iVar1++;
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

int func_765(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 5:
			return func_770(iParam0);
		
		case 6:
			return func_769(iParam0);
		
		case 7:
			return func_768(iParam0);
		
		case 8:
			return func_767(iParam0);
		
		case 9:
			return func_766(iParam0);
		
		default:
	}
	return 0;
}

bool func_766(int iParam0)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 4);
}

bool func_767(int iParam0)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 3);
}

bool func_768(int iParam0)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 2);
}

bool func_769(int iParam0)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 1);
}

bool func_770(int iParam0)
{
	if (iParam0 == func_64())
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_283.f_4, 0);
}

int func_771(int iParam0)
{
	return (func_772(iParam0) / 5);
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24061;
		
		case 2:
			return Global_262145.f_24062;
		
		case 3:
			return Global_262145.f_24063;
		
		case 4:
			return Global_262145.f_24064;
		
		case 5:
			return Global_262145.f_24065;
		
		case 6:
			return Global_262145.f_24066;
		
		case 0:
			return Global_262145.f_24067;
		
		default:
	}
	return 0;
}

int func_773()
{
	if (!func_774(Local_4900.f_1078.f_3))
	{
		return 0;
	}
	return 1;
}

int func_774(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam0 >= 10)
	{
		iVar0 = Global_262145.f_25289;
		if (iVar0 == -1)
		{
			return 1;
		}
		if (func_836(func_847(iVar0), -1, 0) || func_832(func_835(iVar0), -1, -1))
		{
			return 1;
		}
	}
	else
	{
		iVar1 = -99;
		iVar2 = -1;
		if (func_830())
		{
			iVar0 = Global_262145.f_24974[iParam0];
			if (iVar0 == -1)
			{
				return 1;
			}
			iVar3 = func_829(iVar0);
			if (iVar3 != -1)
			{
				iVar1 = func_826(joaat("mp_f_freemode_01"), iVar0, func_829(iVar0), 4);
			}
			iVar2 = func_825(iVar0, 4);
			if ((func_832(func_835(iVar0), -1, -1) || (iVar2 != -1 && func_821(iVar2, -1))) || (iVar1 != -99 && func_775(joaat("mp_f_freemode_01"), func_829(iVar0), iVar1)))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = Global_262145.f_24963[iParam0];
			if (iVar0 == -1)
			{
				return 1;
			}
			iVar4 = func_829(iVar0);
			if (iVar4 != -1)
			{
				iVar1 = func_826(joaat("mp_m_freemode_01"), iVar0, func_829(iVar0), 3);
			}
			iVar2 = func_825(iVar0, 3);
			if ((func_832(func_835(iVar0), -1, -1) || (iVar2 != -1 && func_821(iVar2, -1))) || (iVar1 != -99 && func_775(joaat("mp_m_freemode_01"), func_829(iVar0), iVar1)))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_775(int iParam0, int iParam1, int iParam2)
{
	Global_77059[1 /*14*/] = { func_776(iParam0, iParam1, iParam2, -1) };
	return unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 2);
}

struct<14> func_776(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_820();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_804(iParam1, iParam2, iParam3);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_777(iParam1, iParam2, iParam3);
	}
	return Global_77059[0 /*14*/];
}

void func_777(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_803(iParam1, iParam2);
			break;
		
		case 11:
			func_802(iParam1, iParam2);
			break;
		
		case 8:
			func_801(iParam1, iParam2);
			break;
		
		case 9:
			func_800(iParam1, iParam2);
			break;
		
		case 3:
			func_799(iParam1, iParam2);
			break;
		
		case 4:
			func_798(iParam1, iParam2);
			break;
		
		case 6:
			func_797(iParam1, iParam2);
			break;
		
		case 1:
			func_796(iParam1, iParam2);
			break;
		
		case 7:
			func_795(iParam1, iParam2);
			break;
		
		case 10:
			func_794(iParam1, iParam2);
			break;
		
		case 14:
			func_793(iParam1, iParam2);
			break;
		
		case 12:
			func_792(iParam1, iParam2);
			break;
		
		case 5:
			func_791(iParam1, iParam2);
			break;
		
		case 0:
			func_788(iParam1, iParam2);
			break;
		
		case 13:
			func_778(iParam1);
			break;
	}
}

void func_778(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_779(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_787(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x15173FB88ABC94F9(sParam3) != unk_0x15173FB88ABC94F9("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		}
		unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 6);
		if (func_786(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_784(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_784(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_784(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_784(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_784(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC664C0067EEAB8D1(&(uParam0->f_6), 2);
			}
			if (!func_784(Global_2621444, 2, 1, 1, -1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		unk_0x191DDA30577F440A(&(uParam0->f_6), 5);
		if (func_783(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
		}
		if (func_783(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
		if (!func_783(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0x191DDA30577F440A(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_786(14))
			{
				return;
			}
			iVar0 = func_226(func_782(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			}
			iVar0 = func_226(func_781(iParam1, uParam0->f_2), Global_77056, 0);
			if (unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
			{
				unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
			}
			if (func_780(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_226(iVar1, Global_77056, 0);
				if (!unk_0x234B68AC2E35ED5A(iVar0, uParam0->f_1))
				{
					unk_0x191DDA30577F440A(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0x191DDA30577F440A(&(uParam0->f_6), 1);
			unk_0x191DDA30577F440A(&(uParam0->f_6), 2);
		}
	}
}

bool func_780(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 979;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 3:
					*uParam2 = 1430;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 10:
					*uParam2 = 1441;
					break;
				
				case 1:
					*uParam2 = 1012;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
				
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 9:
					*uParam2 = 1440;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
				
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1444;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
				
				case 6:
					*uParam2 = 1011;
					break;
				
				case 8:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 995;
					break;
				
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}
	return *uParam2 != 979;
}

int func_781(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 3:
					return 1415;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 10:
					return 1426;
					break;
				
				case 1:
					return 960;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
				
				case 12:
					return 979;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 9:
					return 1425;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
					break;
				
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 7:
					return 1429;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
					break;
				
				case 6:
					return 959;
					break;
				
				case 8:
					return 1423;
					break;
				
				case 11:
					return 943;
					break;
				
				case 14:
					return 975;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
					break;
			}
			break;
	}
	return 936;
}

int func_782(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 3:
					return 1400;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 10:
					return 1411;
					break;
				
				case 1:
					return 908;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
				
				case 12:
					return 927;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 9:
					return 1410;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
					break;
				
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 7:
					return 1414;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
					break;
				
				case 6:
					return 907;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 891;
					break;
				
				case 14:
					return 923;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
					break;
			}
			break;
	}
	return 884;
}

int func_783(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0x191DDA30577F440A(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC664C0067EEAB8D1(&(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x234B68AC2E35ED5A(Global_112293.f_2361[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_784(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_77056;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_785(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_226(iVar2, iVar0, 0);
		return unk_0x234B68AC2E35ED5A(iVar3, iVar1);
	}
	return 0;
}

bool func_785(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 12074;
	if ((bParam4 && Global_4269693) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 936;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 936;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 936;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 936;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 936;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 936;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 936;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 936;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 936;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 972;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 972;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 972;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 972;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 972;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 972;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 972;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 972;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 1024;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1024;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1024;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1024;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1024;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1024;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1024;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 1024;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4269693)
		{
			iVar0 = unk_0x374867C10614D333(iParam0);
		}
		else
		{
			iVar0 = unk_0x281588E106E4EDA3(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x374867C10614D333(iParam0);
	}
	else
	{
		iVar0 = unk_0x281588E106E4EDA3(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1761;
					break;
				
				case 1:
					*uParam2 = 1762;
					break;
				
				case 2:
					*uParam2 = 1763;
					break;
				
				case 3:
					*uParam2 = 1764;
					break;
				
				case 4:
					*uParam2 = 1765;
					break;
				
				case 5:
					*uParam2 = 1766;
					break;
				
				case 6:
					*uParam2 = 1773;
					break;
				
				case 7:
					*uParam2 = 1774;
					break;
				
				case 8:
					*uParam2 = 1775;
					break;
				
				case 9:
					*uParam2 = 1776;
					break;
				
				case 10:
					*uParam2 = 1777;
					break;
				
				case 11:
					*uParam2 = 1778;
					break;
				
				case 12:
					*uParam2 = 1779;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2070;
					break;
				
				case 26:
					*uParam2 = 2071;
					break;
				
				case 27:
					*uParam2 = 2072;
					break;
				
				case 28:
					*uParam2 = 2073;
					break;
				
				case 29:
					*uParam2 = 2074;
					break;
				
				case 30:
					*uParam2 = 2075;
					break;
				
				case 31:
					*uParam2 = 2076;
					break;
				
				case 32:
					*uParam2 = 2077;
					break;
				
				case 33:
					*uParam2 = 2078;
					break;
				
				case 34:
					*uParam2 = 2079;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2391;
					break;
				
				case 38:
					*uParam2 = 2392;
					break;
				
				case 39:
					*uParam2 = 2393;
					break;
				
				case 40:
					*uParam2 = 2394;
					break;
				
				case 41:
					*uParam2 = 2453;
					break;
				
				case 42:
					*uParam2 = 2454;
					break;
				
				case 43:
					*uParam2 = 2455;
					break;
				
				case 44:
					*uParam2 = 2456;
					break;
				
				case 45:
					*uParam2 = 2457;
					break;
				
				case 46:
					*uParam2 = 2458;
					break;
				
				case 47:
					*uParam2 = 2459;
					break;
				
				case 48:
					*uParam2 = 2460;
					break;
				
				case 49:
					*uParam2 = 2461;
					break;
				
				case 50:
					*uParam2 = 2462;
					break;
				
				case 51:
					*uParam2 = 2591;
					break;
				
				case 52:
					*uParam2 = 2592;
					break;
				
				case 53:
					*uParam2 = 2593;
					break;
				
				case 54:
					*uParam2 = 2594;
					break;
				
				case 55:
					*uParam2 = 2595;
					break;
				
				case 56:
					*uParam2 = 2596;
					break;
				
				case 57:
					*uParam2 = 2597;
					break;
				
				case 58:
					*uParam2 = 2598;
					break;
				
				case 59:
					*uParam2 = 2599;
					break;
				
				case 60:
					*uParam2 = 2600;
					break;
				
				case 61:
					*uParam2 = 2601;
					break;
				
				case 62:
					*uParam2 = 3198;
					break;
				
				case 63:
					*uParam2 = 3199;
					break;
				
				case 64:
					*uParam2 = 3200;
					break;
				
				case 65:
					*uParam2 = 3201;
					break;
				
				case 66:
					*uParam2 = 3202;
					break;
				
				case 67:
					*uParam2 = 3203;
					break;
				
				case 68:
					*uParam2 = 3671;
					break;
				
				case 69:
					*uParam2 = 3672;
					break;
				
				case 70:
					*uParam2 = 3673;
					break;
				
				case 71:
					*uParam2 = 3674;
					break;
				
				case 72:
					*uParam2 = 3675;
					break;
				
				case 73:
					*uParam2 = 3676;
					break;
				
				case 74:
					*uParam2 = 3677;
					break;
				
				case 75:
					*uParam2 = 3678;
					break;
				
				case 76:
					*uParam2 = 3679;
					break;
				
				case 77:
					*uParam2 = 3680;
					break;
				
				case 78:
					*uParam2 = 3794;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3795;
					break;
				
				case 80:
					*uParam2 = 3796;
					break;
				
				case 81:
					*uParam2 = 3797;
					break;
				
				case 82:
					*uParam2 = 3798;
					break;
				
				case 83:
					*uParam2 = 3799;
					break;
				
				case 84:
					*uParam2 = 3800;
					break;
				
				case 85:
					*uParam2 = 3801;
					break;
				
				case 86:
					*uParam2 = 3904;
					break;
				
				case 87:
					*uParam2 = 3905;
					break;
				
				case 88:
					*uParam2 = 3906;
					break;
				
				case 89:
					*uParam2 = 5339;
					break;
				
				case 90:
					*uParam2 = 5340;
					break;
				
				case 91:
					*uParam2 = 5341;
					break;
				
				case 92:
					*uParam2 = 5342;
					break;
				
				case 93:
					*uParam2 = 5343;
					break;
				
				case 94:
					*uParam2 = 5344;
					break;
				
				case 95:
					*uParam2 = 5345;
					break;
				
				case 96:
					*uParam2 = 5346;
					break;
				
				case 97:
					*uParam2 = 5347;
					break;
				
				case 98:
					*uParam2 = 5348;
					break;
				
				case 99:
					*uParam2 = 5349;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5350;
					break;
				
				case 101:
					*uParam2 = 5396;
					break;
				
				case 102:
					*uParam2 = 5397;
					break;
				
				case 103:
					*uParam2 = 5398;
					break;
				
				case 104:
					*uParam2 = 5399;
					break;
				
				case 105:
					*uParam2 = 5400;
					break;
				
				case 106:
					*uParam2 = 5401;
					break;
				
				case 107:
					*uParam2 = 5402;
					break;
				
				case 108:
					*uParam2 = 5403;
					break;
				
				case 109:
					*uParam2 = 5404;
					break;
				
				case 110:
					*uParam2 = 5405;
					break;
				
				case 111:
					*uParam2 = 5406;
					break;
				
				case 112:
					*uParam2 = 5407;
					break;
				
				case 113:
					*uParam2 = 5408;
					break;
				
				case 114:
					*uParam2 = 5409;
					break;
				
				case 115:
					*uParam2 = 5410;
					break;
				
				case 116:
					*uParam2 = 5411;
					break;
				
				case 117:
					*uParam2 = 5412;
					break;
				
				case 118:
					*uParam2 = 5413;
					break;
				
				case 119:
					*uParam2 = 5414;
					break;
				
				case 120:
					*uParam2 = 5415;
					break;
				
				case 121:
					*uParam2 = 5416;
					break;
				
				case 122:
					*uParam2 = 5417;
					break;
				
				case 123:
					*uParam2 = 5418;
					break;
				
				case 124:
					*uParam2 = 6124;
					break;
				
				case 125:
					*uParam2 = 6125;
					break;
				
				case 126:
					*uParam2 = 6126;
					break;
				
				case 127:
					*uParam2 = 6127;
					break;
				
				case 128:
					*uParam2 = 6128;
					break;
				
				case 129:
					*uParam2 = 6129;
					break;
				
				case 130:
					*uParam2 = 6130;
					break;
				
				case 131:
					*uParam2 = 6131;
					break;
				
				case 132:
					*uParam2 = 6132;
					break;
				
				case 133:
					*uParam2 = 6133;
					break;
				
				case 134:
					*uParam2 = 6134;
					break;
				
				case 135:
					*uParam2 = 6135;
					break;
				
				case 136:
					*uParam2 = 6136;
					break;
				
				case 137:
					*uParam2 = 6137;
					break;
				
				case 138:
					*uParam2 = 6138;
					break;
				
				case 139:
					*uParam2 = 6437;
					break;
				
				case 140:
					*uParam2 = 6438;
					break;
				
				case 141:
					*uParam2 = 6439;
					break;
				
				case 142:
					*uParam2 = 6440;
					break;
				
				case 143:
					*uParam2 = 6441;
					break;
				
				case 144:
					*uParam2 = 6442;
					break;
				
				case 145:
					*uParam2 = 6443;
					break;
				
				case 146:
					*uParam2 = 6444;
					break;
				
				case 147:
					*uParam2 = 6445;
					break;
				
				case 148:
					*uParam2 = 6446;
					break;
				
				case 149:
					*uParam2 = 6447;
					break;
				
				case 150:
					*uParam2 = 6448;
					break;
				
				case 151:
					*uParam2 = 6449;
					break;
				
				case 152:
					*uParam2 = 6450;
					break;
				
				case 153:
					*uParam2 = 6451;
					break;
				
				case 154:
					*uParam2 = 7268;
					break;
				
				case 155:
					*uParam2 = 7269;
					break;
				
				case 156:
					*uParam2 = 7270;
					break;
				
				case 157:
					*uParam2 = 7271;
					break;
				
				case 158:
					*uParam2 = 7272;
					break;
				
				case 159:
					*uParam2 = 7273;
					break;
				
				case 160:
					*uParam2 = 7274;
					break;
				
				case 161:
					*uParam2 = 7881;
					break;
				
				case 162:
					*uParam2 = 7882;
					break;
				
				case 163:
					*uParam2 = 7883;
					break;
				
				case 164:
					*uParam2 = 7884;
					break;
				
				case 165:
					*uParam2 = 7885;
					break;
				
				case 166:
					*uParam2 = 7886;
					break;
				
				case 167:
					*uParam2 = 7887;
					break;
				
				case 168:
					*uParam2 = 7888;
					break;
				
				case 169:
					*uParam2 = 7889;
					break;
				
				case 170:
					*uParam2 = 7890;
					break;
				
				case 171:
					*uParam2 = 7891;
					break;
				
				case 172:
					*uParam2 = 7892;
					break;
				
				case 173:
					*uParam2 = 7893;
					break;
				
				case 174:
					*uParam2 = 7894;
					break;
				
				case 175:
					*uParam2 = 7895;
					break;
				
				case 176:
					*uParam2 = 8301;
					break;
				
				case 177:
					*uParam2 = 8302;
					break;
				
				case 178:
					*uParam2 = 8303;
					break;
				
				case 179:
					*uParam2 = 8304;
					break;
				
				case 180:
					*uParam2 = 8305;
					break;
				
				case 181:
					*uParam2 = 8306;
					break;
				
				case 182:
					*uParam2 = 8307;
					break;
				
				case 183:
					*uParam2 = 8308;
					break;
				
				case 184:
					*uParam2 = 8309;
					break;
				
				case 185:
					*uParam2 = 8310;
					break;
				
				case 186:
					*uParam2 = 8311;
					break;
				
				case 187:
					*uParam2 = 8312;
					break;
				
				case 188:
					*uParam2 = 8313;
					break;
				
				case 189:
					*uParam2 = 8314;
					break;
				
				case 190:
					*uParam2 = 8315;
					break;
				
				case 191:
					*uParam2 = 8316;
					break;
				
				case 192:
					*uParam2 = 8317;
					break;
				
				case 193:
					*uParam2 = 8318;
					break;
				
				case 194:
					*uParam2 = 8319;
					break;
				
				case 195:
					*uParam2 = 8320;
					break;
				
				case 196:
					*uParam2 = 8321;
					break;
				
				case 197:
					*uParam2 = 8322;
					break;
				
				case 198:
					*uParam2 = 8323;
					break;
				
				case 199:
					*uParam2 = 8324;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8325;
					break;
				
				case 201:
					*uParam2 = 8940;
					break;
				
				case 202:
					*uParam2 = 8941;
					break;
				
				case 203:
					*uParam2 = 8942;
					break;
				
				case 204:
					*uParam2 = 8943;
					break;
				
				case 205:
					*uParam2 = 8944;
					break;
				
				case 206:
					*uParam2 = 9423;
					break;
				
				case 207:
					*uParam2 = 9424;
					break;
				
				case 208:
					*uParam2 = 9425;
					break;
				
				case 209:
					*uParam2 = 9426;
					break;
				
				case 210:
					*uParam2 = 9427;
					break;
				
				case 211:
					*uParam2 = 9428;
					break;
				
				case 212:
					*uParam2 = 9429;
					break;
				
				case 213:
					*uParam2 = 9430;
					break;
				
				case 214:
					*uParam2 = 9431;
					break;
				
				case 215:
					*uParam2 = 9432;
					break;
				
				case 216:
					*uParam2 = 9433;
					break;
				
				case 217:
					*uParam2 = 9434;
					break;
				
				case 218:
					*uParam2 = 9435;
					break;
				
				case 219:
					*uParam2 = 9436;
					break;
				
				case 220:
					*uParam2 = 9437;
					break;
				
				case 221:
					*uParam2 = 9438;
					break;
				
				case 222:
					*uParam2 = 9439;
					break;
				
				case 223:
					*uParam2 = 9440;
					break;
				
				case 224:
					*uParam2 = 9441;
					break;
				
				case 225:
					*uParam2 = 9442;
					break;
				
				case 226:
					*uParam2 = 9443;
					break;
				
				case 227:
					*uParam2 = 9444;
					break;
				
				case 228:
					*uParam2 = 9445;
					break;
				
				case 229:
					*uParam2 = 9446;
					break;
				
				case 230:
					*uParam2 = 9447;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1767;
					break;
				
				case 1:
					*uParam2 = 1768;
					break;
				
				case 2:
					*uParam2 = 1769;
					break;
				
				case 3:
					*uParam2 = 1770;
					break;
				
				case 4:
					*uParam2 = 1771;
					break;
				
				case 5:
					*uParam2 = 1772;
					break;
				
				case 6:
					*uParam2 = 1780;
					break;
				
				case 7:
					*uParam2 = 1781;
					break;
				
				case 8:
					*uParam2 = 1782;
					break;
				
				case 9:
					*uParam2 = 1783;
					break;
				
				case 10:
					*uParam2 = 1784;
					break;
				
				case 11:
					*uParam2 = 1785;
					break;
				
				case 12:
					*uParam2 = 1786;
					break;
				
				case 13:
					*uParam2 = 1789;
					break;
				
				case 14:
					*uParam2 = 1790;
					break;
				
				case 15:
					*uParam2 = 1891;
					break;
				
				case 16:
					*uParam2 = 1892;
					break;
				
				case 17:
					*uParam2 = 1922;
					break;
				
				case 18:
					*uParam2 = 1940;
					break;
				
				case 19:
					*uParam2 = 1941;
					break;
				
				case 20:
					*uParam2 = 1942;
					break;
				
				case 21:
					*uParam2 = 1943;
					break;
				
				case 22:
					*uParam2 = 1944;
					break;
				
				case 23:
					*uParam2 = 2045;
					break;
				
				case 24:
					*uParam2 = 2046;
					break;
				
				case 25:
					*uParam2 = 2080;
					break;
				
				case 26:
					*uParam2 = 2081;
					break;
				
				case 27:
					*uParam2 = 2082;
					break;
				
				case 28:
					*uParam2 = 2083;
					break;
				
				case 29:
					*uParam2 = 2084;
					break;
				
				case 30:
					*uParam2 = 2085;
					break;
				
				case 31:
					*uParam2 = 2086;
					break;
				
				case 32:
					*uParam2 = 2087;
					break;
				
				case 33:
					*uParam2 = 2088;
					break;
				
				case 34:
					*uParam2 = 2089;
					break;
				
				case 35:
					*uParam2 = 2328;
					break;
				
				case 36:
					*uParam2 = 2329;
					break;
				
				case 37:
					*uParam2 = 2395;
					break;
				
				case 38:
					*uParam2 = 2396;
					break;
				
				case 39:
					*uParam2 = 2397;
					break;
				
				case 40:
					*uParam2 = 2398;
					break;
				
				case 41:
					*uParam2 = 2463;
					break;
				
				case 42:
					*uParam2 = 2464;
					break;
				
				case 43:
					*uParam2 = 2465;
					break;
				
				case 44:
					*uParam2 = 2466;
					break;
				
				case 45:
					*uParam2 = 2467;
					break;
				
				case 46:
					*uParam2 = 2468;
					break;
				
				case 47:
					*uParam2 = 2469;
					break;
				
				case 48:
					*uParam2 = 2470;
					break;
				
				case 49:
					*uParam2 = 2471;
					break;
				
				case 50:
					*uParam2 = 2472;
					break;
				
				case 51:
					*uParam2 = 2602;
					break;
				
				case 52:
					*uParam2 = 2603;
					break;
				
				case 53:
					*uParam2 = 2604;
					break;
				
				case 54:
					*uParam2 = 2605;
					break;
				
				case 55:
					*uParam2 = 2606;
					break;
				
				case 56:
					*uParam2 = 2607;
					break;
				
				case 57:
					*uParam2 = 2608;
					break;
				
				case 58:
					*uParam2 = 2609;
					break;
				
				case 59:
					*uParam2 = 2610;
					break;
				
				case 60:
					*uParam2 = 2611;
					break;
				
				case 61:
					*uParam2 = 2612;
					break;
				
				case 62:
					*uParam2 = 3204;
					break;
				
				case 63:
					*uParam2 = 3205;
					break;
				
				case 64:
					*uParam2 = 3206;
					break;
				
				case 65:
					*uParam2 = 3207;
					break;
				
				case 66:
					*uParam2 = 3208;
					break;
				
				case 67:
					*uParam2 = 3209;
					break;
				
				case 68:
					*uParam2 = 3681;
					break;
				
				case 69:
					*uParam2 = 3682;
					break;
				
				case 70:
					*uParam2 = 3683;
					break;
				
				case 71:
					*uParam2 = 3684;
					break;
				
				case 72:
					*uParam2 = 3685;
					break;
				
				case 73:
					*uParam2 = 3686;
					break;
				
				case 74:
					*uParam2 = 3687;
					break;
				
				case 75:
					*uParam2 = 3688;
					break;
				
				case 76:
					*uParam2 = 3689;
					break;
				
				case 77:
					*uParam2 = 3690;
					break;
				
				case 78:
					*uParam2 = 3802;
					break;
				
				case joaat("mpsv_lp0_31"):
					*uParam2 = 3803;
					break;
				
				case 80:
					*uParam2 = 3804;
					break;
				
				case 81:
					*uParam2 = 3805;
					break;
				
				case 82:
					*uParam2 = 3806;
					break;
				
				case 83:
					*uParam2 = 3807;
					break;
				
				case 84:
					*uParam2 = 3808;
					break;
				
				case 85:
					*uParam2 = 3809;
					break;
				
				case 86:
					*uParam2 = 3907;
					break;
				
				case 87:
					*uParam2 = 3908;
					break;
				
				case 88:
					*uParam2 = 3909;
					break;
				
				case 89:
					*uParam2 = 5351;
					break;
				
				case 90:
					*uParam2 = 5352;
					break;
				
				case 91:
					*uParam2 = 5353;
					break;
				
				case 92:
					*uParam2 = 5354;
					break;
				
				case 93:
					*uParam2 = 5355;
					break;
				
				case 94:
					*uParam2 = 5356;
					break;
				
				case 95:
					*uParam2 = 5357;
					break;
				
				case 96:
					*uParam2 = 5358;
					break;
				
				case 97:
					*uParam2 = 5359;
					break;
				
				case 98:
					*uParam2 = 5360;
					break;
				
				case 99:
					*uParam2 = 5361;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5362;
					break;
				
				case 101:
					*uParam2 = 5419;
					break;
				
				case 102:
					*uParam2 = 5420;
					break;
				
				case 103:
					*uParam2 = 5421;
					break;
				
				case 104:
					*uParam2 = 5422;
					break;
				
				case 105:
					*uParam2 = 5423;
					break;
				
				case 106:
					*uParam2 = 5424;
					break;
				
				case 107:
					*uParam2 = 5425;
					break;
				
				case 108:
					*uParam2 = 5426;
					break;
				
				case 109:
					*uParam2 = 5427;
					break;
				
				case 110:
					*uParam2 = 5428;
					break;
				
				case 111:
					*uParam2 = 5429;
					break;
				
				case 112:
					*uParam2 = 5430;
					break;
				
				case 113:
					*uParam2 = 5431;
					break;
				
				case 114:
					*uParam2 = 5432;
					break;
				
				case 115:
					*uParam2 = 5433;
					break;
				
				case 116:
					*uParam2 = 5434;
					break;
				
				case 117:
					*uParam2 = 5435;
					break;
				
				case 118:
					*uParam2 = 5436;
					break;
				
				case 119:
					*uParam2 = 5437;
					break;
				
				case 120:
					*uParam2 = 5438;
					break;
				
				case 121:
					*uParam2 = 5439;
					break;
				
				case 122:
					*uParam2 = 5440;
					break;
				
				case 123:
					*uParam2 = 5441;
					break;
				
				case 124:
					*uParam2 = 6139;
					break;
				
				case 125:
					*uParam2 = 6140;
					break;
				
				case 126:
					*uParam2 = 6141;
					break;
				
				case 127:
					*uParam2 = 6142;
					break;
				
				case 128:
					*uParam2 = 6143;
					break;
				
				case 129:
					*uParam2 = 6144;
					break;
				
				case 130:
					*uParam2 = 6145;
					break;
				
				case 131:
					*uParam2 = 6146;
					break;
				
				case 132:
					*uParam2 = 6147;
					break;
				
				case 133:
					*uParam2 = 6148;
					break;
				
				case 134:
					*uParam2 = 6149;
					break;
				
				case 135:
					*uParam2 = 6150;
					break;
				
				case 136:
					*uParam2 = 6151;
					break;
				
				case 137:
					*uParam2 = 6152;
					break;
				
				case 138:
					*uParam2 = 6153;
					break;
				
				case 139:
					*uParam2 = 6452;
					break;
				
				case 140:
					*uParam2 = 6453;
					break;
				
				case 141:
					*uParam2 = 6454;
					break;
				
				case 142:
					*uParam2 = 6455;
					break;
				
				case 143:
					*uParam2 = 6456;
					break;
				
				case 144:
					*uParam2 = 6457;
					break;
				
				case 145:
					*uParam2 = 6458;
					break;
				
				case 146:
					*uParam2 = 6459;
					break;
				
				case 147:
					*uParam2 = 6460;
					break;
				
				case 148:
					*uParam2 = 6461;
					break;
				
				case 149:
					*uParam2 = 6462;
					break;
				
				case 150:
					*uParam2 = 6463;
					break;
				
				case 151:
					*uParam2 = 6464;
					break;
				
				case 152:
					*uParam2 = 6465;
					break;
				
				case 153:
					*uParam2 = 6466;
					break;
				
				case 154:
					*uParam2 = 7275;
					break;
				
				case 155:
					*uParam2 = 7276;
					break;
				
				case 156:
					*uParam2 = 7277;
					break;
				
				case 157:
					*uParam2 = 7278;
					break;
				
				case 158:
					*uParam2 = 7279;
					break;
				
				case 159:
					*uParam2 = 7280;
					break;
				
				case 160:
					*uParam2 = 7281;
					break;
				
				case 161:
					*uParam2 = 7896;
					break;
				
				case 162:
					*uParam2 = 7897;
					break;
				
				case 163:
					*uParam2 = 7898;
					break;
				
				case 164:
					*uParam2 = 7899;
					break;
				
				case 165:
					*uParam2 = 7900;
					break;
				
				case 166:
					*uParam2 = 7901;
					break;
				
				case 167:
					*uParam2 = 7902;
					break;
				
				case 168:
					*uParam2 = 7903;
					break;
				
				case 169:
					*uParam2 = 7904;
					break;
				
				case 170:
					*uParam2 = 7905;
					break;
				
				case 171:
					*uParam2 = 7906;
					break;
				
				case 172:
					*uParam2 = 7907;
					break;
				
				case 173:
					*uParam2 = 7908;
					break;
				
				case 174:
					*uParam2 = 7909;
					break;
				
				case 175:
					*uParam2 = 7910;
					break;
				
				case 176:
					*uParam2 = 8326;
					break;
				
				case 177:
					*uParam2 = 8327;
					break;
				
				case 178:
					*uParam2 = 8328;
					break;
				
				case 179:
					*uParam2 = 8329;
					break;
				
				case 180:
					*uParam2 = 8330;
					break;
				
				case 181:
					*uParam2 = 8331;
					break;
				
				case 182:
					*uParam2 = 8332;
					break;
				
				case 183:
					*uParam2 = 8333;
					break;
				
				case 184:
					*uParam2 = 8334;
					break;
				
				case 185:
					*uParam2 = 8335;
					break;
				
				case 186:
					*uParam2 = 8336;
					break;
				
				case 187:
					*uParam2 = 8337;
					break;
				
				case 188:
					*uParam2 = 8338;
					break;
				
				case 189:
					*uParam2 = 8339;
					break;
				
				case 190:
					*uParam2 = 8340;
					break;
				
				case 191:
					*uParam2 = 8341;
					break;
				
				case 192:
					*uParam2 = 8342;
					break;
				
				case 193:
					*uParam2 = 8343;
					break;
				
				case 194:
					*uParam2 = 8344;
					break;
				
				case 195:
					*uParam2 = 8345;
					break;
				
				case 196:
					*uParam2 = 8346;
					break;
				
				case 197:
					*uParam2 = 8347;
					break;
				
				case 198:
					*uParam2 = 8348;
					break;
				
				case 199:
					*uParam2 = 8349;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8350;
					break;
				
				case 201:
					*uParam2 = 8945;
					break;
				
				case 202:
					*uParam2 = 8946;
					break;
				
				case 203:
					*uParam2 = 8947;
					break;
				
				case 204:
					*uParam2 = 8948;
					break;
				
				case 205:
					*uParam2 = 8949;
					break;
				
				case 206:
					*uParam2 = 9448;
					break;
				
				case 207:
					*uParam2 = 9449;
					break;
				
				case 208:
					*uParam2 = 9450;
					break;
				
				case 209:
					*uParam2 = 9451;
					break;
				
				case 210:
					*uParam2 = 9452;
					break;
				
				case 211:
					*uParam2 = 9453;
					break;
				
				case 212:
					*uParam2 = 9454;
					break;
				
				case 213:
					*uParam2 = 9455;
					break;
				
				case 214:
					*uParam2 = 9456;
					break;
				
				case 215:
					*uParam2 = 9457;
					break;
				
				case 216:
					*uParam2 = 9458;
					break;
				
				case 217:
					*uParam2 = 9459;
					break;
				
				case 218:
					*uParam2 = 9460;
					break;
				
				case 219:
					*uParam2 = 9461;
					break;
				
				case 220:
					*uParam2 = 9462;
					break;
				
				case 221:
					*uParam2 = 9463;
					break;
				
				case 222:
					*uParam2 = 9464;
					break;
				
				case 223:
					*uParam2 = 9465;
					break;
				
				case 224:
					*uParam2 = 9466;
					break;
				
				case 225:
					*uParam2 = 9467;
					break;
				
				case 226:
					*uParam2 = 9468;
					break;
				
				case 227:
					*uParam2 = 9469;
					break;
				
				case 228:
					*uParam2 = 9470;
					break;
				
				case 229:
					*uParam2 = 9471;
					break;
				
				case 230:
					*uParam2 = 9472;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 12074;
}

bool func_786(int iParam0)
{
	return Global_42009 == iParam0;
}

int func_787(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_788(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77059[0 /*14*/].f_5 = 4;
	func_789(iVar0, iParam0, 0, iParam1);
}

void func_789(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	struct<10> Var19;
	int iVar36;
	int iVar37;
	int iVar38;
	struct<10> Var39;
	int iVar56;
	int iVar57;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_77059[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = unk_0xE619DE4F72F76E79(uVar1, 0);
			if (iVar18 > iVar17)
			{
				unk_0x4ECDF1AC3EC9ADF1(iVar17, &Var2);
				Global_2621444 = Var2.f_1;
				Global_2621445 = Var2;
				func_779(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_779(&(Global_77059[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x71794FDA9361403E(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 1, -1, -1);
			if (iVar38 > iVar37)
			{
				unk_0x9404A07A08FA1D0F(iVar37, &Var19);
				if (Var19.f_6 == 0)
				{
					iVar36 = 9;
				}
				else if (Var19.f_6 == 1)
				{
					iVar36 = 10;
				}
				else if (Var19.f_6 == 2)
				{
					iVar36 = 2;
				}
				else if (Var19.f_6 == 3)
				{
					iVar36 = 3;
				}
				else if (Var19.f_6 == 4)
				{
					iVar36 = 4;
				}
				else if (Var19.f_6 == 5)
				{
					iVar36 = 5;
				}
				else if (Var19.f_6 == 6)
				{
					iVar36 = 6;
				}
				else if (Var19.f_6 == 7)
				{
					iVar36 = 7;
				}
				else if (Var19.f_6 == 8)
				{
					iVar36 = 8;
				}
				else
				{
					iVar36 = -1;
				}
				Global_2621444 = Var19.f_1;
				Global_2621445 = Var19;
				func_779(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, unk_0x01758128AAB0BA8F(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0xFE9B2B065B8931FE(&Var39);
		if (iParam3 != -1 && Global_77229)
		{
			unk_0x3BA50B117757EA3E(iParam3, &Var39);
			Global_2621444 = Var39.f_1;
			Global_2621445 = Var39;
			func_779(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x01758128AAB0BA8F(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = unk_0x44C4C2E7417F5E29(iVar1, 8, -1, 0, -1, func_790(iParam0));
			if (iVar57 > iVar56)
			{
				unk_0xDF9AB3C346705246(iVar56, &Var39);
				Global_2621444 = Var39.f_1;
				Global_2621445 = Var39;
				func_779(&(Global_77059[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x01758128AAB0BA8F(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_791(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_789(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_792(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_789(iVar10, iParam0, 28, iParam1);
			return;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_793(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
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
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "CLO_EXF_G_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "CLO_EXF_G_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "CLO_EXF_G_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "CLO_EXF_G_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 970;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "CLO_EXF_G_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "CLO_EXF_G_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "CLO_EXF_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1125;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "CLO_EXF_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 740;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "CLO_EXF_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 805;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "CLO_EXF_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "CLO_EXF_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "CLO_EXF_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "CLO_EXF_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "CLO_EXF_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "CLO_EXF_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "CLO_EXF_G_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "CLO_EXF_G_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "CLO_EXF_G_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "CLO_EXF_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 2390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "CLO_EXF_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 2005;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "CLO_EXF_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "CLO_EXF_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "CLO_EXF_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "CLO_EXF_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "CLO_EXF_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "CLO_EXF_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "CLO_EXF_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "CLO_EXF_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "CLO_EXF_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "CLO_EXF_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "CLO_EXF_G_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 1490;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "CLO_EXF_G_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 1105;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "CLO_EXF_G_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2044[iVar12]) * Global_293291.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2165[iVar13]) * Global_293291.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2190[iVar14]) * Global_293291.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2319[iVar15]) * Global_293291.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_789(iVar10, iParam0, 327, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("HAT"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_26));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_56));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("WATCH"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_28));
			}
		}
	}
	else
	{
		func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_794(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_789(iVar10, iParam0, 6, iParam1);
			return;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_795(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_789(iVar10, iParam0, 55, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_58));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_293291.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_796(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_789(iVar10, iParam0, 26, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2017[iVar11]) * Global_293291.f_29));
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_797(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1760[iVar11]) * Global_293291.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_789(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_25));
		}
	}
	else
	{
		func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_798(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1246[iVar11]) * Global_293291.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_789(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_23));
		}
	}
	else
	{
		func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_799(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_789(iVar10, iParam0, 16, iParam1);
		return;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_800(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_789(iVar10, iParam0, 36, iParam1);
		return;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_801(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_789(iVar10, iParam0, 136, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_821(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979));
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_821(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar12]));
		}
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_293291.f_24));
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_802(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_821(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980) * Global_293291.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[4]) * Global_293291.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		StringCopy(&Var2, "REW_LSB", 16);
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(450) * Global_262145.f_2979) * Global_293291.f_24));
	}
	else if (iParam0 == 9)
	{
		if (func_821(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(500) * Global_262145.f_2978) * Global_293291.f_24));
		}
		else
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(40) * Global_262145.f_1503[9]) * Global_293291.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1503[iVar11]) * Global_293291.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 4;
		func_789(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_24));
		}
	}
	else
	{
		func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_803(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_2456[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 4;
			func_789(iVar10, iParam0, 92, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_804(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 2:
			func_819(iParam1, iParam2);
			break;
		
		case 11:
			func_818(iParam1, iParam2);
			break;
		
		case 8:
			func_817(iParam1, iParam2);
			break;
		
		case 9:
			func_816(iParam1, iParam2);
			break;
		
		case 3:
			func_815(iParam1, iParam2);
			break;
		
		case 4:
			func_814(iParam1, iParam2);
			break;
		
		case 6:
			func_813(iParam1, iParam2);
			break;
		
		case 1:
			func_812(iParam1, iParam2);
			break;
		
		case 7:
			func_811(iParam1, iParam2);
			break;
		
		case 10:
			func_810(iParam1, iParam2);
			break;
		
		case 14:
			func_809(iParam1, iParam2);
			break;
		
		case 12:
			func_808(iParam1, iParam2);
			break;
		
		case 5:
			func_807(iParam1, iParam2);
			break;
		
		case 0:
			func_806(iParam1, iParam2);
			break;
		
		case 13:
			func_805(iParam1);
			break;
	}
}

void func_805(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_806(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	Global_77059[0 /*14*/].f_5 = 3;
	func_789(iVar0, iParam0, 0, iParam1);
}

void func_807(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_789(iVar10, iParam0, 9, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_808(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_789(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_809(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
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
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "CLO_EXM_G_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 950;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "CLO_EXM_G_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "CLO_EXM_G_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 630;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "CLO_EXM_G_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "CLO_EXM_G_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 265;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "CLO_EXM_G_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "CLO_EXM_G_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "CLO_EXM_G_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "CLO_EXM_G_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 675;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "CLO_EXM_G_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 1760;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "CLO_EXM_G_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 1375;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "CLO_EXM_G_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 1440;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "CLO_EXM_G_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "CLO_EXM_G_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 785;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "CLO_EXM_G_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 850;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "CLO_EXM_G_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1885;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "CLO_EXM_G_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 1500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "CLO_EXM_G_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 1565;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "CLO_EXM_G_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 2315;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "CLO_EXM_G_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1930;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "CLO_EXM_G_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1995;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "CLO_EXM_G_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 2835;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "CLO_EXM_G_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 2450;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "CLO_EXM_G_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 2515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "CLO_EXM_G_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 2820;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "CLO_EXM_G_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 2435;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "CLO_EXM_G_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 2500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "CLO_EXM_G_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 2715;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "CLO_EXM_G_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2330;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "CLO_EXM_G_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 2395;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "CLO_EXM_G_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "CLO_EXM_G_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "CLO_EXM_G_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_955[iVar12]) * Global_293291.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1076[iVar13]) * Global_293291.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1101[iVar14]) * Global_293291.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1230[iVar15]) * Global_293291.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_789(iVar10, iParam0, 327, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("HAT"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_18));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_20));
			}
			else if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("WATCH"), 1))
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_21));
			}
		}
	}
	else
	{
		func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_810(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_789(iVar10, iParam0, 7, iParam1);
			return;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_811(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_789(iVar10, iParam0, 92, iParam1);
			if (Global_77059[0 /*14*/].f_7 > 0)
			{
				Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_57));
			}
			return;
			break;
	}
	iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_293291.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_812(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_789(iVar10, iParam0, 26, iParam1);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_928[iVar11]) * Global_293291.f_22));
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_813(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_671[iVar11]) * Global_293291.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_789(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_17));
		}
	}
	else
	{
		func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_814(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_176[iVar11]) * Global_293291.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_77059[0 /*14*/].f_5 = 3;
		func_789(iVar10, iParam0, 256, iParam1);
		if (Global_77059[0 /*14*/].f_7 > 0)
		{
			Global_77059[0 /*14*/].f_7 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_77059[0 /*14*/].f_7) * Global_293291.f_15));
		}
	}
	else
	{
		func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_815(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_789(iVar10, iParam0, 16, iParam1);
			return;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_816(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_77059[0 /*14*/].f_5 = 3;
			func_789(iVar10, iParam0, 46, iParam1);
			return;
			break;
	}
	func_779(&(Global_77059[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_817(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4197 != -1)
			{
				iVar1 = Global_262145.f_4197;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4202 != -1)
			{
				iVar1 = Global_262145.f_4202;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4200 != -1)
			{
				iVar1 = Global_262145.f_4200;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4194 != -1)
			{
				iVar1 = Global_262145.f_4194;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4196 != -1)
			{
				iVar1 = Global_262145.f_4196;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4199 != -1)
			{
				iVar1 = Global_262145.f_4199;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4195 != -1)
			{
				iVar1 = Global_262145.f_4195;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4193 != -1)
			{
				iVar1 = Global_262145.f_4193;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4198 != -1)
			{
				iVar1 = Global_262145.f_4198;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4201 != -1)
			{
				iVar1 = Global_262145.f_4201;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_433[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_821(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(1250) * Global_262145.f_2980));
		}
		else
		{
			iVar1 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(45) * Global_262145.f_433[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
	}
	{
		if (func_821(87, -1))