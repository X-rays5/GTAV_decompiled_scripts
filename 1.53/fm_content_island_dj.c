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
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90[5] = { 0, 0, 0, 0, 0 };
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	float fLocal_98 = 0f;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 8;
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
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 8;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	var uLocal_165 = 0;
	int iLocal_166[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = -1;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
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
	struct<965> Local_221 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 12, 1065353216, 0, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 12, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 2, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1, 1, 0, 0, 0, 5, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, -1, 0, 7, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 1, -1, 3, 15000, 5000, 1128792064, 0, 4, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 1, 0, 1, 0, 0, 5, 1, -1, 12, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, 12, 66, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, 12, 66, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = -1;
	var uLocal_1191 = -1;
	var uLocal_1192 = 1;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = -1;
	var uLocal_1199 = -1;
	var uLocal_1200 = 1;
	var uLocal_1201 = 0;
	struct<447> Local_1202 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	struct<20> Local_1651 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_1671[8];
	struct<21> Local_1832[10];
	struct<99> Local_2043 = { 12, 0, 6, -1, 3, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 3, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 3, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 3, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 3, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, -1, 3, -1, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 6;
	var uLocal_2145 = -1;
	var uLocal_2146 = 3;
	var uLocal_2147 = -1;
	var uLocal_2148 = 0;
	var uLocal_2149 = -1;
	var uLocal_2150 = 0;
	var uLocal_2151 = -1;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = -1;
	var uLocal_2159 = 3;
	var uLocal_2160 = -1;
	var uLocal_2161 = 0;
	var uLocal_2162 = -1;
	var uLocal_2163 = 0;
	var uLocal_2164 = -1;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = -1;
	var uLocal_2172 = 3;
	var uLocal_2173 = -1;
	var uLocal_2174 = 0;
	var uLocal_2175 = -1;
	var uLocal_2176 = 0;
	var uLocal_2177 = -1;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = -1;
	var uLocal_2185 = 3;
	var uLocal_2186 = -1;
	var uLocal_2187 = 0;
	var uLocal_2188 = -1;
	var uLocal_2189 = 0;
	var uLocal_2190 = -1;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = -1;
	var uLocal_2198 = 3;
	var uLocal_2199 = -1;
	var uLocal_2200 = 0;
	var uLocal_2201 = -1;
	var uLocal_2202 = 0;
	var uLocal_2203 = -1;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = -1;
	var uLocal_2211 = 3;
	var uLocal_2212 = -1;
	var uLocal_2213 = 0;
	var uLocal_2214 = -1;
	var uLocal_2215 = 0;
	var uLocal_2216 = -1;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 1;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 5;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 6;
	var uLocal_2244 = -1;
	var uLocal_2245 = 3;
	var uLocal_2246 = -1;
	var uLocal_2247 = 0;
	var uLocal_2248 = -1;
	var uLocal_2249 = 0;
	var uLocal_2250 = -1;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = -1;
	var uLocal_2258 = 3;
	var uLocal_2259 = -1;
	var uLocal_2260 = 0;
	var uLocal_2261 = -1;
	var uLocal_2262 = 0;
	var uLocal_2263 = -1;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = -1;
	var uLocal_2271 = 3;
	var uLocal_2272 = -1;
	var uLocal_2273 = 0;
	var uLocal_2274 = -1;
	var uLocal_2275 = 0;
	var uLocal_2276 = -1;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = -1;
	var uLocal_2284 = 3;
	var uLocal_2285 = -1;
	var uLocal_2286 = 0;
	var uLocal_2287 = -1;
	var uLocal_2288 = 0;
	var uLocal_2289 = -1;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = -1;
	var uLocal_2297 = 3;
	var uLocal_2298 = -1;
	var uLocal_2299 = 0;
	var uLocal_2300 = -1;
	var uLocal_2301 = 0;
	var uLocal_2302 = -1;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = -1;
	var uLocal_2310 = 3;
	var uLocal_2311 = -1;
	var uLocal_2312 = 0;
	var uLocal_2313 = -1;
	var uLocal_2314 = 0;
	var uLocal_2315 = -1;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 1;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 5;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 6;
	var uLocal_2343 = -1;
	var uLocal_2344 = 3;
	var uLocal_2345 = -1;
	var uLocal_2346 = 0;
	var uLocal_2347 = -1;
	var uLocal_2348 = 0;
	var uLocal_2349 = -1;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = -1;
	var uLocal_2357 = 3;
	var uLocal_2358 = -1;
	var uLocal_2359 = 0;
	var uLocal_2360 = -1;
	var uLocal_2361 = 0;
	var uLocal_2362 = -1;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = -1;
	var uLocal_2370 = 3;
	var uLocal_2371 = -1;
	var uLocal_2372 = 0;
	var uLocal_2373 = -1;
	var uLocal_2374 = 0;
	var uLocal_2375 = -1;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = -1;
	var uLocal_2383 = 3;
	var uLocal_2384 = -1;
	var uLocal_2385 = 0;
	var uLocal_2386 = -1;
	var uLocal_2387 = 0;
	var uLocal_2388 = -1;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = -1;
	var uLocal_2396 = 3;
	var uLocal_2397 = -1;
	var uLocal_2398 = 0;
	var uLocal_2399 = -1;
	var uLocal_2400 = 0;
	var uLocal_2401 = -1;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = -1;
	var uLocal_2409 = 3;
	var uLocal_2410 = -1;
	var uLocal_2411 = 0;
	var uLocal_2412 = -1;
	var uLocal_2413 = 0;
	var uLocal_2414 = -1;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 1;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 5;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 6;
	var uLocal_2442 = -1;
	var uLocal_2443 = 3;
	var uLocal_2444 = -1;
	var uLocal_2445 = 0;
	var uLocal_2446 = -1;
	var uLocal_2447 = 0;
	var uLocal_2448 = -1;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = -1;
	var uLocal_2456 = 3;
	var uLocal_2457 = -1;
	var uLocal_2458 = 0;
	var uLocal_2459 = -1;
	var uLocal_2460 = 0;
	var uLocal_2461 = -1;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = -1;
	var uLocal_2469 = 3;
	var uLocal_2470 = -1;
	var uLocal_2471 = 0;
	var uLocal_2472 = -1;
	var uLocal_2473 = 0;
	var uLocal_2474 = -1;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = -1;
	var uLocal_2482 = 3;
	var uLocal_2483 = -1;
	var uLocal_2484 = 0;
	var uLocal_2485 = -1;
	var uLocal_2486 = 0;
	var uLocal_2487 = -1;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = -1;
	var uLocal_2495 = 3;
	var uLocal_2496 = -1;
	var uLocal_2497 = 0;
	var uLocal_2498 = -1;
	var uLocal_2499 = 0;
	var uLocal_2500 = -1;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = -1;
	var uLocal_2508 = 3;
	var uLocal_2509 = -1;
	var uLocal_2510 = 0;
	var uLocal_2511 = -1;
	var uLocal_2512 = 0;
	var uLocal_2513 = -1;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 1;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 5;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 6;
	var uLocal_2541 = -1;
	var uLocal_2542 = 3;
	var uLocal_2543 = -1;
	var uLocal_2544 = 0;
	var uLocal_2545 = -1;
	var uLocal_2546 = 0;
	var uLocal_2547 = -1;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = -1;
	var uLocal_2555 = 3;
	var uLocal_2556 = -1;
	var uLocal_2557 = 0;
	var uLocal_2558 = -1;
	var uLocal_2559 = 0;
	var uLocal_2560 = -1;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = -1;
	var uLocal_2568 = 3;
	var uLocal_2569 = -1;
	var uLocal_2570 = 0;
	var uLocal_2571 = -1;
	var uLocal_2572 = 0;
	var uLocal_2573 = -1;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = -1;
	var uLocal_2581 = 3;
	var uLocal_2582 = -1;
	var uLocal_2583 = 0;
	var uLocal_2584 = -1;
	var uLocal_2585 = 0;
	var uLocal_2586 = -1;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = -1;
	var uLocal_2594 = 3;
	var uLocal_2595 = -1;
	var uLocal_2596 = 0;
	var uLocal_2597 = -1;
	var uLocal_2598 = 0;
	var uLocal_2599 = -1;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = -1;
	var uLocal_2607 = 3;
	var uLocal_2608 = -1;
	var uLocal_2609 = 0;
	var uLocal_2610 = -1;
	var uLocal_2611 = 0;
	var uLocal_2612 = -1;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 1;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 5;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 6;
	var uLocal_2640 = -1;
	var uLocal_2641 = 3;
	var uLocal_2642 = -1;
	var uLocal_2643 = 0;
	var uLocal_2644 = -1;
	var uLocal_2645 = 0;
	var uLocal_2646 = -1;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = -1;
	var uLocal_2654 = 3;
	var uLocal_2655 = -1;
	var uLocal_2656 = 0;
	var uLocal_2657 = -1;
	var uLocal_2658 = 0;
	var uLocal_2659 = -1;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = -1;
	var uLocal_2667 = 3;
	var uLocal_2668 = -1;
	var uLocal_2669 = 0;
	var uLocal_2670 = -1;
	var uLocal_2671 = 0;
	var uLocal_2672 = -1;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = -1;
	var uLocal_2680 = 3;
	var uLocal_2681 = -1;
	var uLocal_2682 = 0;
	var uLocal_2683 = -1;
	var uLocal_2684 = 0;
	var uLocal_2685 = -1;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = -1;
	var uLocal_2693 = 3;
	var uLocal_2694 = -1;
	var uLocal_2695 = 0;
	var uLocal_2696 = -1;
	var uLocal_2697 = 0;
	var uLocal_2698 = -1;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = -1;
	var uLocal_2706 = 3;
	var uLocal_2707 = -1;
	var uLocal_2708 = 0;
	var uLocal_2709 = -1;
	var uLocal_2710 = 0;
	var uLocal_2711 = -1;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 1;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 5;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 6;
	var uLocal_2739 = -1;
	var uLocal_2740 = 3;
	var uLocal_2741 = -1;
	var uLocal_2742 = 0;
	var uLocal_2743 = -1;
	var uLocal_2744 = 0;
	var uLocal_2745 = -1;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = -1;
	var uLocal_2753 = 3;
	var uLocal_2754 = -1;
	var uLocal_2755 = 0;
	var uLocal_2756 = -1;
	var uLocal_2757 = 0;
	var uLocal_2758 = -1;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = -1;
	var uLocal_2766 = 3;
	var uLocal_2767 = -1;
	var uLocal_2768 = 0;
	var uLocal_2769 = -1;
	var uLocal_2770 = 0;
	var uLocal_2771 = -1;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = -1;
	var uLocal_2779 = 3;
	var uLocal_2780 = -1;
	var uLocal_2781 = 0;
	var uLocal_2782 = -1;
	var uLocal_2783 = 0;
	var uLocal_2784 = -1;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = -1;
	var uLocal_2792 = 3;
	var uLocal_2793 = -1;
	var uLocal_2794 = 0;
	var uLocal_2795 = -1;
	var uLocal_2796 = 0;
	var uLocal_2797 = -1;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = -1;
	var uLocal_2805 = 3;
	var uLocal_2806 = -1;
	var uLocal_2807 = 0;
	var uLocal_2808 = -1;
	var uLocal_2809 = 0;
	var uLocal_2810 = -1;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 1;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 5;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 6;
	var uLocal_2838 = -1;
	var uLocal_2839 = 3;
	var uLocal_2840 = -1;
	var uLocal_2841 = 0;
	var uLocal_2842 = -1;
	var uLocal_2843 = 0;
	var uLocal_2844 = -1;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = -1;
	var uLocal_2852 = 3;
	var uLocal_2853 = -1;
	var uLocal_2854 = 0;
	var uLocal_2855 = -1;
	var uLocal_2856 = 0;
	var uLocal_2857 = -1;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = -1;
	var uLocal_2865 = 3;
	var uLocal_2866 = -1;
	var uLocal_2867 = 0;
	var uLocal_2868 = -1;
	var uLocal_2869 = 0;
	var uLocal_2870 = -1;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = -1;
	var uLocal_2878 = 3;
	var uLocal_2879 = -1;
	var uLocal_2880 = 0;
	var uLocal_2881 = -1;
	var uLocal_2882 = 0;
	var uLocal_2883 = -1;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = -1;
	var uLocal_2891 = 3;
	var uLocal_2892 = -1;
	var uLocal_2893 = 0;
	var uLocal_2894 = -1;
	var uLocal_2895 = 0;
	var uLocal_2896 = -1;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = -1;
	var uLocal_2904 = 3;
	var uLocal_2905 = -1;
	var uLocal_2906 = 0;
	var uLocal_2907 = -1;
	var uLocal_2908 = 0;
	var uLocal_2909 = -1;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 1;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 5;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 6;
	var uLocal_2937 = -1;
	var uLocal_2938 = 3;
	var uLocal_2939 = -1;
	var uLocal_2940 = 0;
	var uLocal_2941 = -1;
	var uLocal_2942 = 0;
	var uLocal_2943 = -1;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = -1;
	var uLocal_2951 = 3;
	var uLocal_2952 = -1;
	var uLocal_2953 = 0;
	var uLocal_2954 = -1;
	var uLocal_2955 = 0;
	var uLocal_2956 = -1;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = -1;
	var uLocal_2964 = 3;
	var uLocal_2965 = -1;
	var uLocal_2966 = 0;
	var uLocal_2967 = -1;
	var uLocal_2968 = 0;
	var uLocal_2969 = -1;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = -1;
	var uLocal_2977 = 3;
	var uLocal_2978 = -1;
	var uLocal_2979 = 0;
	var uLocal_2980 = -1;
	var uLocal_2981 = 0;
	var uLocal_2982 = -1;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = -1;
	var uLocal_2990 = 3;
	var uLocal_2991 = -1;
	var uLocal_2992 = 0;
	var uLocal_2993 = -1;
	var uLocal_2994 = 0;
	var uLocal_2995 = -1;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = -1;
	var uLocal_3003 = 3;
	var uLocal_3004 = -1;
	var uLocal_3005 = 0;
	var uLocal_3006 = -1;
	var uLocal_3007 = 0;
	var uLocal_3008 = -1;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 1;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 5;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 6;
	var uLocal_3036 = -1;
	var uLocal_3037 = 3;
	var uLocal_3038 = -1;
	var uLocal_3039 = 0;
	var uLocal_3040 = -1;
	var uLocal_3041 = 0;
	var uLocal_3042 = -1;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = -1;
	var uLocal_3050 = 3;
	var uLocal_3051 = -1;
	var uLocal_3052 = 0;
	var uLocal_3053 = -1;
	var uLocal_3054 = 0;
	var uLocal_3055 = -1;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = -1;
	var uLocal_3063 = 3;
	var uLocal_3064 = -1;
	var uLocal_3065 = 0;
	var uLocal_3066 = -1;
	var uLocal_3067 = 0;
	var uLocal_3068 = -1;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = -1;
	var uLocal_3076 = 3;
	var uLocal_3077 = -1;
	var uLocal_3078 = 0;
	var uLocal_3079 = -1;
	var uLocal_3080 = 0;
	var uLocal_3081 = -1;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = -1;
	var uLocal_3089 = 3;
	var uLocal_3090 = -1;
	var uLocal_3091 = 0;
	var uLocal_3092 = -1;
	var uLocal_3093 = 0;
	var uLocal_3094 = -1;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = -1;
	var uLocal_3102 = 3;
	var uLocal_3103 = -1;
	var uLocal_3104 = 0;
	var uLocal_3105 = -1;
	var uLocal_3106 = 0;
	var uLocal_3107 = -1;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 1;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 5;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 6;
	var uLocal_3135 = -1;
	var uLocal_3136 = 3;
	var uLocal_3137 = -1;
	var uLocal_3138 = 0;
	var uLocal_3139 = -1;
	var uLocal_3140 = 0;
	var uLocal_3141 = -1;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = -1;
	var uLocal_3149 = 3;
	var uLocal_3150 = -1;
	var uLocal_3151 = 0;
	var uLocal_3152 = -1;
	var uLocal_3153 = 0;
	var uLocal_3154 = -1;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = -1;
	var uLocal_3162 = 3;
	var uLocal_3163 = -1;
	var uLocal_3164 = 0;
	var uLocal_3165 = -1;
	var uLocal_3166 = 0;
	var uLocal_3167 = -1;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = -1;
	var uLocal_3175 = 3;
	var uLocal_3176 = -1;
	var uLocal_3177 = 0;
	var uLocal_3178 = -1;
	var uLocal_3179 = 0;
	var uLocal_3180 = -1;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = -1;
	var uLocal_3188 = 3;
	var uLocal_3189 = -1;
	var uLocal_3190 = 0;
	var uLocal_3191 = -1;
	var uLocal_3192 = 0;
	var uLocal_3193 = -1;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = -1;
	var uLocal_3201 = 3;
	var uLocal_3202 = -1;
	var uLocal_3203 = 0;
	var uLocal_3204 = -1;
	var uLocal_3205 = 0;
	var uLocal_3206 = -1;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 1;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 5;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235[5] = { 0, 0, 0, 0, 0 };
	struct<7> Local_3241 = { 4, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 1203982208;
	var uLocal_3251 = 1203982208;
	var uLocal_3252 = 1203982208;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 1203982208;
	var uLocal_3258 = 1203982208;
	var uLocal_3259 = 1203982208;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 1203982208;
	var uLocal_3265 = 1203982208;
	var uLocal_3266 = 1203982208;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = -1;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_3285[2];
	struct<4> Local_3290 = { 0, 0, 0, 0 } ;
	var uLocal_3294 = 0;
	struct<4> Local_3295 = { 0, 0, 0, 0 } ;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	struct<7> Local_3301 = { 0, -1, -1, 0, 0, 0, 0 } ;
	int iLocal_3308 = 0;
	struct<2> Local_3309 = { -1, -1 } ;
	var uLocal_3311[5] = { 0, 0, 0, 0, 0 };
	struct<11> Local_3317 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432 } ;
	struct<3> Local_3328 = { -1, -1082130432, 2 } ;
	var uLocal_3331 = -1082130432;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = -1082130432;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 1;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	struct<6> Local_3341 = { 1, 0, -1, 0, 0, 16 } ;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
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
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 1;
	var uLocal_3512 = 0;
	var uLocal_3513[6] = { -1, -1, -1, -1, -1, -1 };
	struct<2> Local_3520[12];
	struct<4> Local_3545[1];
	struct<3> Local_3550 = { 1, 0, 1 } ;
	var uLocal_3553 = 0;
	struct<3> Local_3554 = { 1, 0, 0 } ;
	struct<8> Local_3557 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_3565 = 0;
	bool bLocal_3566 = 0;
	bool bLocal_3567 = 0;
	bool bLocal_3568 = 0;
	var uLocal_3569 = 0;
	int iLocal_3570 = 0;
	int iLocal_3571 = 0;
	int iLocal_3572 = 0;
	int iLocal_3573 = 0;
	struct<3> Local_3574 = { 0, 0, 0 } ;
	int iLocal_3577 = 0;
	int iLocal_3578 = 0;
	bool bLocal_3579 = 0;
	bool bLocal_3580 = 0;
	int iLocal_3581 = 0;
	int iLocal_3582 = 0;
	int iLocal_3583 = 0;
	int iLocal_3584 = 0;
	var uLocal_3585 = 2;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	int iLocal_3588 = 0;
	int iLocal_3589 = 0;
	int iLocal_3590 = 0;
	var uLocal_3591 = 0;
	int iLocal_3592 = 0;
	int iLocal_3593 = 0;
	var uLocal_3594 = 1;
	var uLocal_3595 = 0;
	int iLocal_3596[2] = { 0, 0 };
	int iLocal_3599 = 0;
	float fLocal_3600 = 0f;
	float fLocal_3601 = 0f;
	float fLocal_3602 = 0f;
	float fLocal_3603 = 0f;
	int iLocal_3604 = 0;
	struct<3> Local_3605 = { 0, 0, 0 } ;
	int iLocal_3608[4] = { 0, 0, 0, 0 };
	var uLocal_3613[4] = { 0, 0, 0, 0 };
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	struct<16> Local_3621 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = -1;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 1000;
	var uLocal_3647 = 1000;
	var uLocal_3648 = 0;
	struct<518> Local_3649 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, -1, 0, -1, 0, -1, 0, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 7, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 1, 0, -1, 1232348144, 1232348144, 0, 0, 0, 0, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 7, -1, -1, -1082130432, 0, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1000, 18 } ;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 1;
	var uLocal_4187 = 0;
	struct<114> Local_4188[8];
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
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
	fLocal_89 = 0f;
	fLocal_96 = 0f;
	fLocal_97 = 0f;
	fLocal_98 = 0f;
	fLocal_161 = 0.62f;
	fLocal_162 = 0.51f;
	fLocal_163 = 0.55f;
	fLocal_164 = 25f;
	iLocal_3581 = -1;
	iLocal_3582 = -1;
	iLocal_3588 = -1;
	iLocal_3589 = -1;
	iLocal_3590 = -1;
	iLocal_3593 = -1;
	fLocal_3600 = -1f;
	fLocal_3601 = 99999f;
	fLocal_3602 = 99999f;
	fLocal_3603 = 99999f;
	Local_3605 = { 5000f, 8500f, 0f };
	StringCopy(&Local_3621, unk_0x6C5C6B207AA78253(), 64);
	Local_3621 = { Local_3621 };
	Local_1651 = { Local_1651 };
	func_3668(0);
	if (unk_0x25DDB354A40FFCDB())
	{
		if (bLocal_3566)
		{
			if (!func_3618(ScriptParam_0))
			{
				func_3560(0, 1);
				func_3456();
			}
		}
		else
		{
			func_3456();
		}
	}
	else
	{
		func_3560(0, 1);
		func_3456();
	}
	func_3454(&(Local_3649.f_515));
	func_3376();
	while (true)
	{
		func_3375();
		if (func_3368())
		{
			func_3560(0, 1);
			func_3456();
		}
		if (func_3363())
		{
			func_3560(0, 1);
			func_3456();
		}
		if (Local_1202.f_70.f_4 != 0)
		{
			Call_Loc(Local_1202.f_70.f_4);
			if (StackVal)
			{
				func_3560(0, 1);
				func_3456();
			}
		}
		func_3668(1);
		switch (func_3362())
		{
			case 0:
				if (func_3361() == 1)
				{
					if (func_3144())
					{
						func_3143(1);
					}
				}
				else if (func_3361() == 3)
				{
					func_3143(3);
				}
				break;
			
			case 1:
				func_3096();
				func_1465();
				func_1464();
				if (func_3361() != 1)
				{
					func_1461();
					func_3143(func_3361());
				}
				break;
			
			case 2:
				func_3096();
				func_1464();
				func_1190();
				if (func_3361() > 2)
				{
					func_3560(func_1189(11), 0);
					func_3143(3);
				}
				break;
			
			case 3:
				func_3456();
				break;
		}
		if (bLocal_3568)
		{
			switch (func_3361())
			{
				case 0:
					if (func_498())
					{
						func_497(1);
					}
					break;
				
				case 1:
					if (func_496() == 0)
					{
						func_8();
					}
					else
					{
						func_497(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_497(3);
					}
					break;
				
				case 3:
					func_3456();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_2043.f_1191++;
	if (Local_2043.f_1191 >= Local_221.f_72)
	{
		Local_2043.f_1191 = 0;
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
	return func_4(&(Local_3649.f_469), iParam0);
}

bool func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return unk_0xCE990E643CD9D0E5((*uParam0)[iVar1], iVar2);
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
	return func_4(&(Local_3649.f_2.f_14[iParam0 /*3*/]), iParam1);
}

int func_7()
{
	return Local_221.f_18;
}

void func_8()
{
	func_495();
	if (Local_1202.f_3 != 0)
	{
		Call_Loc(Local_1202.f_3);
	}
	func_451();
	func_190();
	func_171();
	func_47();
	func_36();
	func_30();
	func_22();
	func_21();
	func_18();
	func_9();
}

void func_9()
{
	if (func_17() == -1)
	{
		return;
	}
	if (Local_1202.f_52 == 0)
	{
		return;
	}
	Call_Loc(Local_1202.f_52);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_1202.f_52.f_1 != 0)
	{
		Call_Loc(Local_1202.f_52.f_1);
		if (StackVal)
		{
			func_16(&(Local_3649.f_487), 0, 0);
			func_14(5);
		}
	}
	if (!func_13(&(Local_3649.f_487)))
	{
		func_12(&(Local_3649.f_487), 0, 0);
	}
	else if (func_13(&(Local_3649.f_487)))
	{
		if (func_11(&(Local_3649.f_487), func_17(), 0))
		{
			func_10(1);
		}
	}
}

void func_10(int iParam0)
{
	if (!bLocal_3568)
	{
		return;
	}
	Local_3649.f_464 = iParam0;
}

int func_11(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_12(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

bool func_13(var uParam0)
{
	return uParam0->f_1;
}

void func_14(int iParam0)
{
	if (func_15(&(Local_3649.f_469), iParam0))
	{
	}
}

int func_15(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar1], iVar2))
	{
		unk_0xBE20AB8238688965(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

void func_16(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			*uParam0 = unk_0x29B9AF1CB5B8175D();
		}
	}
	else
	{
		*uParam0 = unk_0x578C4EF320340AF7();
	}
	uParam0->f_1 = 1;
}

int func_17()
{
	if (Local_221.f_575 != -1)
	{
		return Local_221.f_575 * 60 * 1000;
	}
	return Local_221.f_575;
}

void func_18()
{
	int iVar0;
	
	if (func_20() != -1)
	{
		while ((func_20() < iLocal_3583 && iVar0 < Local_1671[func_20() /*20*/].f_19) && Local_1671[func_20() /*20*/].f_1[iVar0 /*3*/] != -1)
		{
			Call_Loc(Local_1671[func_20() /*20*/].f_1[iVar0 /*3*/].f_1);
			if (StackVal)
			{
				Call_Loc(Local_1671[func_20() /*20*/].f_18);
				Local_3649.f_468 = func_20();
				func_19(Local_1671[func_20() /*20*/].f_1[iVar0 /*3*/]);
				Call_Loc(Local_1671[func_20() /*20*/].f_17);
				return;
			}
			iVar0++;
		}
	}
}

void func_19(var uParam0)
{
	if (!bLocal_3568)
	{
		return;
	}
	Local_3649.f_467 = uParam0;
}

int func_20()
{
	return Local_3649.f_467;
}

void func_21()
{
}

void func_22()
{
	if (func_28())
	{
		if (func_25())
		{
			if (func_13(&(Local_3649.f_399.f_5)))
			{
				func_24(&(Local_3649.f_399.f_5));
				func_23();
				Local_3649.f_399.f_7++;
			}
		}
	}
}

void func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_3649.f_399[iVar0 /*4*/].f_2 = 999999f;
		Local_3649.f_399[iVar0 /*4*/].f_3 = 999999f;
		Local_3649.f_399[iVar0 /*4*/].f_1 = -1;
		iVar0++;
	}
}

void func_24(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_25()
{
	return (func_27() && func_26());
}

int func_26()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_3649.f_399.f_8, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_27()
{
	return Local_3649.f_399.f_9;
}

int func_28()
{
	if (func_29(13))
	{
		return 0;
	}
	return 1;
}

bool func_29(int iParam0)
{
	return func_4(&(Local_221.f_16), iParam0);
}

void func_30()
{
	if (!func_35())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_31(&(Local_3649.f_395), &(Local_3649.f_395.f_3)))
		{
			func_14(2);
		}
	}
}

int func_31(var uParam0, var uParam1)
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = 0;
	while (iVar6 < 4)
	{
		if (func_34(iVar6))
		{
			iVar0[iVar5] = iVar6;
			iVar5++;
		}
		iVar6++;
	}
	if (iVar5 < func_7())
	{
		return 0;
	}
	iVar6 = 0;
	while (iVar6 < func_7())
	{
		if (func_33())
		{
			if (iVar6 > 0)
			{
				(*uParam0)[iVar6] = (*uParam0)[(iVar6 - 1)];
			}
			else
			{
				iVar7 = unk_0x344C570D6F8700DF(0, iVar5);
				(*uParam0)[iVar6] = iVar0[iVar7];
				if (iVar0[iVar7] < 32)
				{
					unk_0xBE20AB8238688965(uParam1, iVar0[iVar7]);
				}
				if (iVar6 < (func_7() - 1))
				{
					func_32(&(iVar0[iVar7]), &(iVar0[(iVar5 - 1)]));
					iVar5 = (iVar5 - 1);
				}
			}
			iVar6++;
			return 1;
		}

void func_32(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_33()
{
	return 0;
}

int func_34(int iParam0)
{
	return 0;
}

int func_35()
{
	return 0;
}

void func_36()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	Stack.Push(Local_1202.f_417.f_17 != 0);
	Call_Loc(Local_1202.f_417.f_17);
	if (StackVal && !StackVal)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_510)
	{
		if (!func_46(iVar0, 0))
		{
			Stack.Push(iVar0);
			Call_Loc(Local_1202.f_417.f_18);
			if (StackVal)
			{
				if (func_41(iVar0))
				{
					fVar1 = func_40(iVar0);
					unk_0xE922BAA80E8F9324(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_447[iVar0 /*3*/]), fVar1);
					Var2 = { func_39(iVar0) };
					if (!func_38(Var2))
					{
						unk_0xC82085403E46A869(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_447[iVar0 /*3*/]), Var2, 0, 1);
					}
					func_37(iVar0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_37(int iParam0, int iParam1)
{
	if (!func_46(iParam0, iParam1))
	{
		unk_0xBE20AB8238688965(&(Local_3649.f_447[iParam0 /*3*/].f_1), iParam1);
	}
}

int func_38(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_39(int iParam0)
{
	if (Local_1202.f_417.f_21 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_417.f_21);
		return StackVal, StackVal, StackVal;
	}
	return Local_221.f_510.f_1[iParam0 /*12*/].f_5;
}

var func_40(int iParam0)
{
	if (Local_1202.f_417.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_417.f_20);
		return StackVal;
	}
	return Local_221.f_510.f_1[iParam0 /*12*/].f_4;
}

bool func_41(int iParam0)
{
	if (func_45(Local_221.f_510.f_1[iParam0 /*12*/]))
	{
		if (!unk_0xF7DE07F319727299(Local_3649.f_447[iParam0 /*3*/]))
		{
			func_42(iParam0);
			return 0;
		}
	}
	return unk_0xF7DE07F319727299(Local_3649.f_447[iParam0 /*3*/]);
}

int func_42(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_44(iParam0) };
	if (!unk_0xF7DE07F319727299(Local_3649.f_447[iParam0 /*3*/]))
	{
		unk_0x78FCB2E22C41B9D5(Local_221.f_510.f_1[iParam0 /*12*/]);
		if (unk_0x7D167B9A0CCDA347(Local_221.f_510.f_1[iParam0 /*12*/]))
		{
			if (unk_0x2CD491285F9C0C53(1))
			{
				Local_3649.f_447[iParam0 /*3*/] = unk_0x22CA0B37B74BB381(unk_0xDFCBAFA6018378B2(joaat("PICKUP_PORTABLE_CRATE_FIXED_INCAR"), Var0, false, Local_221.f_510.f_1[iParam0 /*12*/]));
				unk_0x342AB3CE1C296A56(Local_3649.f_447[iParam0 /*3*/], 1);
				unk_0xFA6E875B9DF13F14(unk_0x62D2FF718BC7717D(Local_3649.f_447[iParam0 /*3*/]), 1);
				unk_0x0312E5501F93E5AB(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_447[iParam0 /*3*/]), true);
				if (func_43(iParam0))
				{
					unk_0x6A8F948698B360B4(unk_0x62D2FF718BC7717D(Local_3649.f_447[iParam0 /*3*/]), false);
				}
				if (Local_221.f_510.f_1[iParam0 /*12*/].f_11)
				{
					unk_0xEF6C40CE5DEBAAE3(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_447[iParam0 /*3*/]), 1);
					unk_0x7C47E49129337557(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_447[iParam0 /*3*/]), 0);
					unk_0xAFB24BC90ACA6210(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_447[iParam0 /*3*/]));
					unk_0xA5EAD2ACE2C8BBB2(unk_0x62D2FF718BC7717D(Local_3649.f_447[iParam0 /*3*/]), 1, 1);
					unk_0x9729E0DCF1C3C9A9(unk_0x62D2FF718BC7717D(Local_3649.f_447[iParam0 /*3*/]), 1);
				}
				if (Local_221.f_510.f_1[iParam0 /*12*/].f_10)
				{
					unk_0xC18BA33CBF71A593(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_447[iParam0 /*3*/]));
				}
				if (Local_1202.f_417.f_22 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(unk_0x62D2FF718BC7717D(Local_3649.f_447[iParam0 /*3*/]));
					Call_Loc(Local_1202.f_417.f_22);
				}
			}
		}
	}
	if (unk_0xF7DE07F319727299(Local_3649.f_447[iParam0 /*3*/]))
	{
		return 1;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_221.f_510.f_1[iParam0 /*12*/];
	if (iVar0 == 543880131)
	{
		return 0;
	}
	return 1;
}

Vector3 func_44(int iParam0)
{
	int iVar0;
	
	if (Local_1202.f_417.f_19 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_417.f_19);
		return StackVal, StackVal, StackVal;
	}
	iVar0 = Local_221.f_510.f_1[iParam0 /*12*/].f_8;
	if (iVar0 != -1)
	{
		switch (Local_221.f_510.f_1[iParam0 /*12*/].f_9)
		{
			case 1:
				return unk_0x3E4D3CCC220BDFB1(unk_0x62D2FF718BC7717D(Local_3649.f_62[iVar0 /*22*/]), 1);
			
			case 2:
				return unk_0x3E4D3CCC220BDFB1(unk_0x62D2FF718BC7717D(Local_3649.f_327[iVar0 /*6*/]), 1);
			
			case 3:
				return unk_0x3E4D3CCC220BDFB1(unk_0x62D2FF718BC7717D(Local_3649.f_358[iVar0 /*5*/]), 1);
			}
		
		default:
	}
	return Local_221.f_510.f_1[iParam0 /*12*/].f_1;
}

bool func_45(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

bool func_46(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Local_3649.f_447[iParam0 /*3*/].f_1, iParam1);
}

void func_47()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	
	func_170(&uVar5);
	iVar6 = 0;
	while (iVar6 < Local_221.f_72)
	{
		func_168(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_1202.f_108.f_126 != 0)
			{
				Stack.Push(iVar6);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_1202.f_108.f_126);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6)
			{
				if (!bVar2)
				{
					func_167(iVar6, 6);
				}
				else if (bVar3)
				{
					func_167(iVar6, 6);
				}
				else if (func_147(iVar6, iVar0))
				{
					func_167(iVar6, 6);
				}
				else
				{
					func_146(&uVar5, iVar6);
				}
			}
		}
		else
		{
			func_146(&uVar5, iVar6);
		}
		switch (iVar4)
		{
			case 0:
				if (func_141(iVar6))
				{
					func_167(iVar6, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_138(iVar6))
					{
						func_167(iVar6, 2);
					}
				}
				else
				{
					func_137(&(Local_3649.f_62[iVar6 /*22*/]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_133(iVar6))
					{
						if (func_87(iVar6))
						{
							func_167(iVar6, 3);
							func_86(iVar6);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (!bVar3)
					{
						func_83(iVar6);
						func_79(iVar6, iVar0, 1);
						func_64(iVar6);
						if (func_63(iVar6))
						{
							func_167(iVar6, 4);
						}
					}
				}
				break;
			
			case 6:
				func_62(iVar6, 8);
				if (!func_29(7))
				{
					func_57(iVar6, 1);
				}
				if (func_56())
				{
					func_137(&(Local_3649.f_62[iVar6 /*22*/]));
				}
				if (func_50(iVar6))
				{
					func_137(&(Local_3649.f_62[iVar6 /*22*/]));
					func_167(iVar6, 1);
				}
				if (func_496() == 0)
				{
					if (func_49(iVar6, 0))
					{
						func_10(9);
					}
				}
				break;
			
			case 4:
				if (!func_49(iVar6, 14) && !unk_0xEB7D4DA50142DE0A(iVar0))
				{
					func_167(iVar6, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar6++;
	}
	func_48(&uVar5);
	iVar6 = Local_2043.f_1191;
	func_168(iVar6, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_79(iVar6, iVar0, 0);
				}
			}
			break;
	}
}

void func_48(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0xCE990E643CD9D0E5(*uParam0, iVar0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_3649.f_399.f_8, iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_3649.f_399.f_8), iVar0);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Local_3649.f_399.f_8, iVar0))
		{
			unk_0xD2459066EA58CE43(&(Local_3649.f_399.f_8), iVar0);
		}
		iVar0++;
	}
}

bool func_49(int iParam0, int iParam1)
{
	return func_4(&(Local_221.f_72.f_1[iParam0 /*21*/]), iParam1);
}

int func_50(int iParam0)
{
	if (func_496() != 0)
	{
		return 0;
	}
	if (func_55(iParam0, 18))
	{
		return func_51(Local_221.f_72.f_1[iParam0 /*21*/].f_8);
	}
	if (func_49(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_115);
		return StackVal;
	}
	return 0;
}

int func_51(int iParam0)
{
	if (func_56())
	{
		return 0;
	}
	if (func_54())
	{
		return 0;
	}
	if (!func_52(iParam0))
	{
		return 0;
	}
	if (func_28() && !func_25())
	{
		return 0;
	}
	return 1;
}

int func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = func_53(1, iParam0);
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Local_3649.f_399.f_8, iVar0);
	}
	return 0;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (Local_221.f_583[iVar0] == iParam1)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
		
		case 0:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (Local_221.f_583[iVar0] == Local_221.f_72.f_1[iParam1 /*21*/].f_8)
				{
					return iVar0;
				}
				iVar0++;
			}
			break;
	}
	return -1;
}

bool func_54()
{
	return Local_3649.f_399.f_7 >= Local_221.f_583.f_2;
}

bool func_55(int iParam0, int iParam1)
{
	return func_4(&(Local_3649.f_62[iParam0 /*22*/].f_3), iParam1);
}

int func_56()
{
	if (func_1189(58))
	{
		Stack.Push(Local_1202.f_341.f_8 != 0);
		Call_Loc(Local_1202.f_341.f_8);
		if (StackVal && StackVal)
		{
			return 1;
		}
	}
	return 0;
}

void func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_61())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_18)
	{
		if (func_60(iVar0))
		{
			if (iParam0 == func_59(iVar0) && !func_6(iVar0, 4))
			{
				func_58(iVar0, 3);
				func_58(iVar0, 19);
			}
		}
		iVar0++;
	}
}

void func_58(int iParam0, int iParam1)
{
	if (func_15(&(Local_3649.f_2.f_14[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_59(int iParam0)
{
	return Local_3649.f_2.f_32[iParam0];
}

bool func_60(int iParam0)
{
	return Local_3649.f_2.f_32[iParam0] != -1;
}

int func_61()
{
	return Local_221.f_18.f_5[0 /*12*/].f_11;
}

void func_62(int iParam0, int iParam1)
{
	if (func_15(&(Local_3649.f_62[iParam0 /*22*/].f_3), iParam1))
	{
	}
}

int func_63(int iParam0)
{
	if (Local_1202.f_108.f_114 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_114);
		return StackVal;
	}
	return 0;
}

void func_64(int iParam0)
{
	int iVar0;
	
	if (!func_78(iParam0))
	{
		return;
	}
	iVar0 = func_77(iParam0);
	switch (func_76(iParam0))
	{
		case 0:
			if (iVar0 != 6)
			{
				func_75(iParam0, 1);
			}
			break;
		
		case 1:
			if (func_74(iParam0, iVar0))
			{
				func_72(&(Local_3649.f_62[iParam0 /*22*/].f_18), unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), func_73(iVar0)));
				func_75(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_71(&(Local_3649.f_62[iParam0 /*22*/].f_18), 0, 0) > 0)
			{
				func_24(&(Local_3649.f_62[iParam0 /*22*/].f_18));
				if (func_70(iVar0))
				{
					func_66(iParam0, iVar0);
				}
				func_65(iParam0, 6);
				func_75(iParam0, 0);
			}
			break;
	}
}

void func_65(int iParam0, int iParam1)
{
	if (!bLocal_3568)
	{
		return;
	}
	Local_3649.f_62[iParam0 /*22*/].f_17 = iParam1;
}

void func_66(int iParam0, int iParam1)
{
	func_67(2, iParam0, iParam1);
}

void func_67(int iParam0, int iParam1, int iParam2)
{
	struct<6> Var0;
	int iVar6;
	
	Var0 = -154480245;
	Var0.f_1 = iLocal_3570;
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = unk_0xD3137A576BE9EC5C();
	iVar6 = func_68(1);
	if (iVar6 != 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 6, iVar6);
	}
}

var func_68(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (func_69(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_69(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (Local_1202.f_108.f_109.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_109.f_3);
		return StackVal;
	}
	return 0;
}

int func_71(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

void func_72(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
	uParam0->f_1 = 1;
}

int func_73(int iParam0)
{
	if (Local_1202.f_108.f_109.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_109.f_1);
		return StackVal;
	}
	return 0;
}

bool func_74(int iParam0, int iParam1)
{
	return func_4(&(Local_3520[iParam0 /*2*/]), iParam1);
}

void func_75(int iParam0, int iParam1)
{
	if (!bLocal_3568)
	{
		return;
	}
	Local_3649.f_62[iParam0 /*22*/].f_16 = iParam1;
}

int func_76(int iParam0)
{
	return Local_3649.f_62[iParam0 /*22*/].f_16;
}

int func_77(int iParam0)
{
	return Local_3649.f_62[iParam0 /*22*/].f_17;
}

bool func_78(int iParam0)
{
	return Local_221.f_72.f_1[iParam0 /*21*/].f_13 != -1;
}

void func_79(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_82(iParam0) == -1)
	{
		return;
	}
	if (func_81(Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_11);
	}
	while ((func_82(iParam0) < Local_2043[iParam0 /*99*/] && iVar0 < Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_12) && Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_1[iVar0 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_1[iVar0 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_9);
			}
			func_80(iParam0, Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_1[iVar0 /*2*/]);
			if (Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_2043[iParam0 /*99*/].f_1[func_82(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar0++;
	}
}

void func_80(int iParam0, var uParam1)
{
	if (!bLocal_3568)
	{
		return;
	}
	Local_3649.f_62[iParam0 /*22*/].f_2 = uParam1;
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 1;
		
		default:
	}
	return 0;
}

int func_82(int iParam0)
{
	return Local_3649.f_62[iParam0 /*22*/].f_2;
}

void func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_84(iParam0))
	{
		return;
	}
	iVar0 = Local_221.f_72.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < Local_2043[iParam0 /*99*/].f_96)
	{
		if (Local_2043[iParam0 /*99*/].f_90[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_2043[iParam0 /*99*/].f_90[iVar1]);
			if (StackVal)
			{
				unk_0xBE20AB8238688965(&(Local_3649.f_394), iVar0);
			}
		}
		iVar1++;
	}
}

bool func_84(int iParam0)
{
	return func_85(Local_221.f_72.f_1[iParam0 /*21*/].f_14);
}

bool func_85(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Local_3649.f_394, iParam0);
}

void func_86(int iParam0)
{
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	func_132(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_108.f_119);
	iVar0 = StackVal;
	if (func_45(iVar0))
	{
		iVar1 = Local_221.f_72.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (func_131(Local_3649.f_327[iVar1 /*6*/]))
			{
				if (func_130(&(Local_3649.f_62[iParam0 /*22*/]), Local_3649.f_327[iVar1 /*6*/], 26, iVar0, Local_221.f_72.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_107(iParam0);
					unk_0x74528AC0906CBABE(iVar0);
					func_106();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1202.f_108.f_120);
			Var2 = { StackVal, StackVal, StackVal };
			if (!func_38(Var2))
			{
				if (!func_105(iParam0) || func_89(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_3649.f_62[iParam0 /*22*/]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(Var2);
					Stack.Push(iParam0);
					Call_Loc(Local_1202.f_108.f_121);
					if (func_88(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_107(iParam0);
						func_106();
						unk_0x74528AC0906CBABE(iVar0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_88(var uParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	iVar0 = unk_0xB3116B49FE00E2F1(uParam1, uParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x28207B405DA4E61E(iVar0);
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(iVar0, iParam9);
		if (unk_0x4349BF35C5B9A49B(iVar0))
		{
			if (bParam7)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_89(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405074.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x160FF3CA76647557(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x11C93463B5150761(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xF666C0F9CA439368(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam13)
	{
		if (unk_0x7B4B68137DA4DF12(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam14 > 0f)
	{
		if (func_98(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_90(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_90(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_69(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x272784C60C397DB6(func_95(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x9A70B1BD2A5BA09C(Param0, fParam3))
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
		if (func_69(iVar1, 1, 1))
		{
			if (!func_92(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_91(iVar1) || !bParam10) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x272784C60C397DB6(func_95(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam8 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x272784C60C397DB6(func_95(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam3))
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
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_92(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_93(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_93(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_94();
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

int func_94()
{
	return Global_1312763;
}

Vector3 func_95(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_97() && Global_1590682[iVar0 /*883*/].f_854) && !func_38(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_96(iParam0);
}

Vector3 func_96(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

bool func_97()
{
	return Global_2451787.f_18;
}

int func_98(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam8 == 0)
		{
			if (func_69(iVar1, bParam4, bParam5))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam7 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_91(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && iParam9) && bParam6) && func_99(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_96(iVar1), Param0, 1) < fParam3)
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

int func_99(int iParam0)
{
	if (func_104(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_103(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_100(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_102(iParam0);
	if (!iVar0 == func_101())
	{
		if (iVar0 == func_102(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	return -1;
}

int func_102(int iParam0)
{
	if (iParam0 != func_101())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_101();
}

struct<13> func_103(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_104(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_103(iParam0) };
		Global_2515186 = { func_103(iParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	if (func_49(iParam0, 10) && func_55(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

void func_106()
{
	if (Local_3649.f_480 != -1)
	{
		Local_3649.f_493 = { 0f, 0f, 0f };
		Local_3649.f_499 = 0f;
		iLocal_3592 = 0;
		Local_3649.f_466 = -1;
		Local_3649.f_480 = -1;
	}
}

void func_107(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x3C6C6327BA564AEE(Local_3649.f_62[iParam0 /*22*/]);
	bVar1 = func_55(iParam0, 18);
	func_122(iParam0, iVar0);
	if (bVar1)
	{
		func_120(iParam0, iVar0);
	}
	else
	{
		func_113(iParam0, iVar0);
	}
	if (Local_1202.f_108.f_124 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_1202.f_108.f_124);
	}
	if (func_49(iParam0, 5))
	{
		if (!unk_0x47DBF174A0CB9D55(iVar0, 0))
		{
			unk_0x6A8F948698B360B4(iVar0, true);
		}
		unk_0x697DA7132EE43ABC(iVar0, 101, 0);
		func_108(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_108(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (Local_221.f_72.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, -5f, 0f) };
				Var3 = { unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, 0f, 0f) };
				unk_0x79F8EF9CAC6E94EF(Var0, Var3, 25, 1, joaat("weapon_heavysniper"), 0, 1, 1, -1082130432);
				unk_0x79F8EF9CAC6E94EF(Var3, Var0, 25, 1, joaat("weapon_assaultshotgun"), 0, 1, 1, -1082130432);
			}
			if (bParam3)
			{
				unk_0x694113444F21E39F(iParam0, 227, bParam2);
			}
			unk_0x694113444F21E39F(iParam0, 115, bParam3);
		}
		else
		{
			Var6 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
			func_111(Var6, &Var9, &Var12, 0);
			unk_0x79F8EF9CAC6E94EF(Var9, Var12, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
			if (bParam3)
			{
				unk_0x694113444F21E39F(iParam0, 227, bParam2);
			}
			unk_0x694113444F21E39F(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_109(iParam0, -1, 0);
		}
	}
}

void func_109(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_110(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_110(iVar0, iParam0);
	}
}

void func_110(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x1535F41404228601(uParam1, 0, 0.727f, 0.625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			unk_0x1535F41404228601(uParam1, 0, 0.727f, 0.518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			unk_0x1535F41404228601(uParam1, 0, 0.727f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			unk_0x1535F41404228601(uParam1, 0, 0.806f, 0.399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			unk_0x1535F41404228601(uParam1, 1, 0.379f, 0.324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			unk_0x1535F41404228601(uParam1, 1, 0.379f, 0.534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			unk_0x1535F41404228601(uParam1, 2, 0.628f, 0.277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			unk_0x1535F41404228601(uParam1, 2, 0.609f, 0.344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			unk_0x1535F41404228601(uParam1, 4, 0.719f, 0.802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			unk_0x1535F41404228601(uParam1, 4, 0.775f, 0.68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			unk_0x1535F41404228601(uParam1, 4, 0.775f, 0.561f, "ShotgunLargeMonolithic");
			break;
	}
}

void func_111(struct<3> Param0, var uParam3, var uParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar0 = 0.1f;
	iVar1 = unk_0x344C570D6F8700DF(0, 6);
	fVar2 = 0.5f;
	fVar3 = 0.1f;
	fVar4 = 0.4f;
	if (bParam5)
	{
		iVar5 = unk_0x344C570D6F8700DF(0, 5);
		fVar2 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_112())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = unk_0x344C570D6F8700DF(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (func_112())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = unk_0x344C570D6F8700DF(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_112())
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

int func_112()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_113(int iParam0, int iParam1)
{
	unk_0x4E65320BC9AD521C(iParam1, 1);
	unk_0xCBA6B2B569DCAFD8(iParam1, 1);
	unk_0xC3817373506BDB8A(iParam1, 0);
	if (func_49(iParam0, 6))
	{
		unk_0x694113444F21E39F(iParam1, 146, false);
		unk_0x88F7C275DBFB6FF4(iParam1, 1);
	}
	else
	{
		unk_0x694113444F21E39F(iParam1, 146, true);
		unk_0x88F7C275DBFB6FF4(iParam1, 0);
	}
	unk_0x6673CC701BC8E9C1(iParam1, 43, 1);
	unk_0x73745F8F1D07995D(iParam1, Local_221.f_72.f_1[iParam0 /*21*/].f_15);
	unk_0x3EA9EB775DF15E76(iParam1, func_119());
	unk_0xF94DFEAE3DD1EE7E(iParam1, func_118(iParam0));
	unk_0xB51236BFABA70F7E(iParam1, func_117());
	unk_0x6673CC701BC8E9C1(iParam1, 24, 0);
	unk_0x16E50383DEE2A560(iParam1, func_116());
	unk_0x697DA7132EE43ABC(iParam1, func_116(), 0);
	unk_0x44EEDB6E2FB6904F(iParam1, 1);
	func_114(iParam0, iParam1);
}

void func_114(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = Local_221.f_72.f_1[iParam0 /*21*/].f_14;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar3 = Local_221.f_72.f_254[iVar1 /*10*/].f_1[iVar2];
		if (iVar3 != -1)
		{
			if (func_115(iVar3, 4))
			{
				unk_0x983E7D70A33B02D4(iParam1, Local_221.f_684.f_1[iVar3 /*9*/].f_2, Local_221.f_684.f_1[iVar3 /*9*/].f_5, Local_221.f_684.f_1[iVar3 /*9*/].f_8, 0, 0);
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0 && Local_221.f_72.f_1[iParam0 /*21*/].f_20 != -1f)
	{
		unk_0x3D7F49DF8C5586D8(iParam1, unk_0x3E4D3CCC220BDFB1(iParam1, 0), Local_221.f_72.f_1[iParam0 /*21*/].f_20, 0, 0);
	}
}

bool func_115(int iParam0, int iParam1)
{
	return func_4(&(Local_221.f_684.f_1[iParam0 /*9*/]), iParam1);
}

int func_116()
{
	switch (Local_3649.f_465)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		default:
	}
	return 200;
}

int func_117()
{
	switch (Local_3649.f_465)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		default:
	}
	return 60;
}

int func_118(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_108.f_122);
	Stack.Push(StackVal == joaat("weapon_rpg"));
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_108.f_122);
	if (StackVal || StackVal == joaat("weapon_railgun"))
	{
		return 2;
	}
	switch (Local_3649.f_465)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		default:
	}
	return 10;
}

int func_119()
{
	switch (Local_3649.f_465)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		default:
	}
	return 1;
}

void func_120(int iParam0, int iParam1)
{
	unk_0x75E6FF0E97AA6956(iParam1, 1f);
	unk_0x3A8635CDD5709E7C(iParam1, 1f);
	unk_0xC1080142F19925ED(iParam1, 17, 5f);
	unk_0xCBA6B2B569DCAFD8(iParam1, 1);
	unk_0x6673CC701BC8E9C1(iParam1, 2, 1);
	unk_0x694113444F21E39F(iParam1, 272, true);
	unk_0xEB3B17B6D0100376(iParam1, 1);
	unk_0x694113444F21E39F(iParam1, 42, true);
	unk_0xC1080142F19925ED(iParam1, 27, 0f);
	unk_0xF94DFEAE3DD1EE7E(iParam1, func_118(iParam0));
	unk_0xB51236BFABA70F7E(iParam1, func_117());
	unk_0x16E50383DEE2A560(iParam1, func_116());
	unk_0x697DA7132EE43ABC(iParam1, func_116(), 0);
	unk_0x3EA9EB775DF15E76(iParam1, func_119());
	if (func_121(iParam0))
	{
		unk_0x6673CC701BC8E9C1(iParam1, 52, 1);
		unk_0x6673CC701BC8E9C1(iParam1, 53, 1);
	}
}

int func_121(int iParam0)
{
	if (func_49(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_122(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_129(iParam0))
	{
		unk_0xFA6E875B9DF13F14(unk_0x62D2FF718BC7717D(Local_3649.f_62[iParam0 /*22*/]), 1);
	}
	if (!func_128(iParam1))
	{
		unk_0x694113444F21E39F(iParam1, 324, true);
	}
	if (func_78(iParam0))
	{
		iVar0 = func_127(iParam0);
		if (iVar0 != 0)
		{
			unk_0xC3EA5D3FE3BE4ECE(iParam1, iVar0);
		}
		if (!func_126(Local_221.f_72.f_1[iParam0 /*21*/].f_13, 0))
		{
			unk_0x8C27DEB2EBD61AB3(iParam1, 1);
		}
	}
	if (Local_221.f_72.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_62(iParam0, 2);
		unk_0xAFB24BC90ACA6210(iParam1);
		unk_0x7C47E49129337557(iParam1, 1);
		unk_0xA5EAD2ACE2C8BBB2(iParam1, 1, 1);
	}
	if (func_49(iParam0, 11))
	{
		unk_0xE8E8B0AB0DDA30F4(iParam1, 1, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_108.f_122);
	iVar1 = StackVal;
	if (iVar1 != 0)
	{
		if (iVar1 == joaat("weapon_unarmed"))
		{
			unk_0xD5D11F714F236D78(iParam1, 1);
		}
		else
		{
			unk_0x92BD213E6A0E666B(iParam1, iVar1, 9999999, func_124(iParam0), 1);
		}
	}
	unk_0x17253AF44F6ED2DA(iParam1, 1);
	unk_0x38CCFC7E1952A745(iParam1, 1);
	unk_0x6C08F93084C348FC(iParam1, Local_221.f_72.f_1[iParam0 /*21*/].f_17);
	unk_0x0D6B1ECCACFEEDCB(iParam1, Local_221.f_72.f_1[iParam0 /*21*/].f_18);
	unk_0x567AB34DE5FDB30D(iParam1, Local_221.f_72.f_1[iParam0 /*21*/].f_19);
	iVar2 = func_123(iParam0);
	if (iVar2 != joaat("COP"))
	{
		unk_0xD3D9D7C84656DAE5(iParam1, iVar2);
	}
}

var func_123(int iParam0)
{
	return Local_221.f_72.f_254[Local_221.f_72.f_1[iParam0 /*21*/].f_14 /*10*/];
}

int func_124(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_108.f_1);
	Stack.Push(!unk_0x7BCC91F3C1CF24E8(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_108.f_1);
	if (StackVal && unk_0xF005CCA4263DF67F(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_125(iParam0) == 22)
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0)
{
	return Local_2043[iParam0 /*99*/].f_1[Local_3649.f_62[iParam0 /*22*/].f_2 /*13*/];
}

bool func_126(int iParam0, int iParam1)
{
	return func_4(&(Local_221.f_72.f_275[iParam0 /*3*/]), iParam1);
}

var func_127(int iParam0)
{
	if (Local_1202.f_108.f_109.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_109.f_4);
		return StackVal;
	}
	return Local_221.f_72.f_275[Local_221.f_72.f_1[iParam0 /*21*/].f_13 /*3*/].f_2;
}

int func_128(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if ((unk_0x91777261CD42D188(iParam0) == 6 || unk_0x91777261CD42D188(iParam0) == 29) || unk_0x91777261CD42D188(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	if (func_29(22))
	{
		return 1;
	}
	return 0;
}

int func_130(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	if (!unk_0xF7DE07F319727299(uParam1))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x28207B405DA4E61E(unk_0x6A7A2C83BD302BA4(unk_0x770D3B2B4702434A(uParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(unk_0x3C6C6327BA564AEE(*uParam0), iParam7);
		if (unk_0x4349BF35C5B9A49B(unk_0x3C6C6327BA564AEE(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_131(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		unk_0x5F00FA3094B612F5(uParam0);
		return unk_0xF05B7723022657B3(uParam0);
	}
	return 0;
}

void func_132(int iParam0, var uParam1)
{
	if (Local_3649.f_480 == -1)
	{
		Local_3649.f_466 = iParam0;
		Local_3649.f_480 = uParam1;
	}
}

int func_133(int iParam0)
{
	if (!func_136(0, iParam0))
	{
		return 0;
	}
	if (Local_221.f_72.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (!func_134(Local_3649.f_327[Local_221.f_72.f_1[iParam0 /*21*/].f_8 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

int func_134(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		return !func_135(unk_0x770D3B2B4702434A(uParam0));
	}
	return 0;
}

int func_135(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
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

int func_136(int iParam0, int iParam1)
{
	if (Local_3649.f_466 == -1)
	{
		return 1;
	}
	if (Local_3649.f_466 == iParam0)
	{
		if (Local_3649.f_480 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_137(var uParam0)
{
	var uVar0;
	
	if (unk_0x3D70CCF2C9B362CD(*uParam0))
	{
		uVar0 = unk_0x62D2FF718BC7717D(*uParam0);
		unk_0x95047B5978C3543C(&uVar0);
	}
}

int func_138(int iParam0)
{
	if (func_55(iParam0, 18))
	{
		if (!func_139(Local_3649.f_399.f_5, func_140(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_139(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_13(&uParam0))
	{
		return 0;
	}
	if (iParam2 == -1)
	{
		return 1;
	}
	if (unk_0x25DDB354A40FFCDB() && !bParam3)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), uParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), uParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

int func_140()
{
	return Local_221.f_583.f_4;
}

int func_141(int iParam0)
{
	if (func_55(iParam0, 18))
	{
		return func_142();
	}
	if (Local_1202.f_108.f_118 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_118);
		return StackVal;
	}
	return 1;
}

int func_142()
{
	if (Local_1202.f_341 != 0)
	{
		Call_Loc(Local_1202.f_341);
		if (StackVal)
		{
			func_145(58);
			return 1;
		}
		return 0;
	}
	if (func_144())
	{
		if (func_11(&(Local_3649.f_399.f_5), func_143(), 0))
		{
			func_145(58);
			return 1;
		}
	}
	return 0;
}

int func_143()
{
	return Local_221.f_583.f_3;
}

int func_144()
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

void func_145(int iParam0)
{
	if (func_15(&uLocal_3585, iParam0))
	{
	}
}

void func_146(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_55(iParam1, 18))
	{
		iVar0 = func_53(0, iParam1);
		if (iVar0 != -1)
		{
			unk_0xD2459066EA58CE43(uParam0, iVar0);
		}
	}
}

int func_147(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_55(iParam0, 18))
	{
		iVar0 = func_53(0, iParam0);
		if (iVar0 != -1)
		{
			if (Local_3649.f_399[iVar0 /*4*/].f_2 != 999999f && Local_3649.f_399[iVar0 /*4*/].f_2 > func_166())
			{
				return 1;
			}
			if (Local_3649.f_399[iVar0 /*4*/].f_3 != 999999f && Local_3649.f_399[iVar0 /*4*/].f_3 < func_165())
			{
				return 1;
			}
			if (func_148(iVar0))
			{
				return 1;
			}
			if (func_56())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148(int iParam0)
{
	if (!func_149(func_158(iParam0, 1), func_155(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_1202.f_341.f_1 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1202.f_341.f_1);
		return StackVal;
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	switch (func_154())
	{
		case 3:
			if (func_6(iParam0, 23))
			{
				return 0;
			}
			if (func_165() == -1f || Local_3241[iParam0 /*7*/].f_2 > func_165())
			{
				if (Local_3241[iParam0 /*7*/].f_4 != func_101())
				{
					if (func_152(Local_3241[iParam0 /*7*/].f_4))
					{
						return 0;
					}
				}
			}
			break;
		
		case 4:
			iVar0 = iParam0;
			if (func_69(iVar0, 0, 1) && unk_0xFA298F06F67BBD4A(iVar0))
			{
				iVar1 = unk_0x653D75F1BBF766B3(iVar0);
				if (func_151(iVar1, 2) || func_151(iVar1, 8))
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
			if (func_55(iParam0, 2))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_150(iParam0, 2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

bool func_150(int iParam0, int iParam1)
{
	return func_4(&(Local_3649.f_327[iParam0 /*6*/].f_2), iParam1);
}

bool func_151(int iParam0, int iParam1)
{
	return func_4(&(Local_4188[iParam0 /*114*/].f_1), iParam1);
}

int func_152(int iParam0)
{
	if (iParam0 > -1)
	{
		if (Global_2425869[iParam0 /*443*/].f_240 > -1)
		{
			if (func_153(Global_2425869[iParam0 /*443*/].f_240) == 4)
			{
				return 1;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_153(int iParam0)
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
	}
	return 6;
}

int func_154()
{
	if (Local_1202.f_341.f_3 != 0)
	{
		Call_Loc(Local_1202.f_341.f_3);
		return StackVal;
	}
	return 3;
}

int func_155(int iParam0)
{
	return func_156(func_158(iParam0, 0));
}

int func_156(int iParam0)
{
	return func_157(func_154(), iParam0);
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		return iVar0;
	}
	switch (iParam0)
	{
		case 3:
			if (unk_0x3D70CCF2C9B362CD(Local_3649.f_2[iParam1]))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam1]), 0))
				{
					iVar0 = unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam1]);
				}
			}
			break;
		
		case 0:
			if (unk_0x3D70CCF2C9B362CD(Local_3649.f_62[iParam1 /*22*/]))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x62D2FF718BC7717D(Local_3649.f_62[iParam1 /*22*/]), 0))
				{
					iVar0 = unk_0x62D2FF718BC7717D(Local_3649.f_62[iParam1 /*22*/]);
				}
			}
			break;
		
		case 1:
			if (unk_0x3D70CCF2C9B362CD(Local_3649.f_327[iParam1 /*6*/]))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x62D2FF718BC7717D(Local_3649.f_327[iParam1 /*6*/]), 0))
				{
					iVar0 = unk_0x62D2FF718BC7717D(Local_3649.f_327[iParam1 /*6*/]);
				}
			}
			break;
		
		case 2:
			if (unk_0x3D70CCF2C9B362CD(Local_3649.f_358[iParam1 /*5*/]))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x62D2FF718BC7717D(Local_3649.f_358[iParam1 /*5*/]), 0))
				{
					iVar0 = unk_0x62D2FF718BC7717D(Local_3649.f_358[iParam1 /*5*/]);
				}
			}
			break;
		
		case 4:
			if (func_69(iParam1, 0, 1))
			{
				iVar0 = unk_0x1FA7B77001D60F9D(iParam1);
			}
			break;
	}
	return iVar0;
}

int func_158(int iParam0, bool bParam1)
{
	if (iParam0 != -1)
	{
		if (!bParam1)
		{
			if (!unk_0xAE06B9E39EBDE049(func_156(Local_3649.f_399[iParam0 /*4*/].f_1)))
			{
				Local_3649.f_399[iParam0 /*4*/].f_1 = func_159(iParam0);
			}
		}
		return Local_3649.f_399[iParam0 /*4*/].f_1;
	}
	return -1;
}

int func_159(int iParam0)
{
	int iVar0[4];
	int iVar5[4];
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar14 = -1;
	iVar10 = 0;
	while (iVar10 < func_164())
	{
		if (func_161(iVar10))
		{
			iVar15 = func_156(iVar10);
			if (unk_0xAE06B9E39EBDE049(iVar15))
			{
				if (func_149(iVar10, iVar15))
				{
					if (func_160(iVar10, iVar15))
					{
						iVar5[iVar12] = iVar10;
						iVar12++;
					}
					iVar0[iVar11] = iVar10;
					iVar11++;
				}
				iVar13 = iVar10;
			}
		}
		iVar10++;
	}
	if (iVar12 > 0)
	{
		iVar14 = iVar5[unk_0x344C570D6F8700DF(0, iVar12)];
	}
	else if (iVar11 > 0)
	{
		iVar14 = iVar0[unk_0x344C570D6F8700DF(0, iVar11)];
	}
	else
	{
		iVar14 = iVar13;
	}
	return iVar14;
}

int func_160(int iParam0, int iParam1)
{
	if (Local_1202.f_341.f_2 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1202.f_341.f_2);
		return StackVal;
	}
	switch (func_154())
	{
		case 3:
			if (Local_3241[iParam0 /*7*/].f_4 != func_101())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_161(int iParam0)
{
	switch (func_154())
	{
		case 3:
			return 1;
		
		case 0:
			return func_49(iParam0, 2);
		
		case 2:
			return func_163(iParam0, 24);
		
		case 1:
			return func_162(iParam0, 2);
		
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

bool func_162(int iParam0, int iParam1)
{
	return func_4(&(Local_221.f_351.f_1[iParam0 /*13*/]), iParam1);
}

bool func_163(int iParam0, int iParam1)
{
	return func_4(&(Local_221.f_419.f_1[iParam0 /*10*/]), iParam1);
}

int func_164()
{
	switch (func_154())
	{
		case 3:
			return Local_221.f_18;
		
		case 0:
			return Local_221.f_72;
		
		case 2:
			return Local_221.f_419;
		
		case 1:
			return Local_221.f_351;
		
		case 4:
			return 32;
		
		default:
	}
	return 0;
}

float func_165()
{
	if (Local_1202.f_341.f_4 != 0)
	{
		Call_Loc(Local_1202.f_341.f_4);
		return StackVal;
	}
	return 200f;
}

float func_166()
{
	if (Local_1202.f_341.f_7 != 0)
	{
		Call_Loc(Local_1202.f_341.f_7);
		return StackVal;
	}
	return 400f;
}

void func_167(int iParam0, int iParam1)
{
	if (!bLocal_3568)
	{
		return;
	}
	Local_3649.f_62[iParam0 /*22*/].f_1 = iParam1;
}

void func_168(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_169(iParam0);
	*bParam1 = unk_0x3D70CCF2C9B362CD(Local_3649.f_62[iParam0 /*22*/]);
	if (*bParam1)
	{
		*iParam3 = unk_0x3C6C6327BA564AEE(Local_3649.f_62[iParam0 /*22*/]);
		*bParam2 = unk_0x5AEB5DDFFAD43CA5(*iParam3);
	}
}

int func_169(int iParam0)
{
	return Local_3649.f_62[iParam0 /*22*/].f_1;
}

void func_170(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		unk_0xBE20AB8238688965(uParam0, iVar0);
		iVar0++;
	}
}

void func_171()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < Local_221.f_419)
	{
		bVar3 = unk_0x3D70CCF2C9B362CD(Local_3649.f_358[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = unk_0x62D2FF718BC7717D(Local_3649.f_358[iVar4 /*5*/]);
			bVar2 = unk_0xA59F96B50B97E63C(iVar0, 0);
		}
		if (func_189(iVar4) > 1 && func_189(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_188(iVar4, 3);
				}
				else if (func_187(iVar4))
				{
					func_188(iVar4, 3);
				}
			}
			else
			{
				func_188(iVar4, 3);
			}
		}
		switch (func_189(iVar4))
		{
			case 0:
				if (func_186(iVar4))
				{
					func_188(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_185(iVar4)) && func_172(iVar4))
				{
					func_188(iVar4, 2);
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

int func_172(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_358[iParam0 /*5*/]))
	{
		Var1 = { func_184(iParam0) };
		Var4 = { func_183(iParam0) };
		if (func_38(Var1))
		{
			return 0;
		}
		iVar7 = Local_221.f_419.f_1[iParam0 /*10*/].f_2;
		if (!func_45(iVar7))
		{
			return 0;
		}
		if (func_182(&(Local_3649.f_358[iParam0 /*5*/]), iVar7, Var1, 1, 1, 1, func_163(iParam0, 22), 1, 0, 0))
		{
			iVar0 = unk_0x0EE5FAC7EF37F8A0(Local_3649.f_358[iParam0 /*5*/]);
			unk_0xC82085403E46A869(iVar0, Var4, 2, 1);
			func_178(iParam0, iVar0);
			unk_0x74528AC0906CBABE(iVar7);
		}
	}
	if (unk_0x3D70CCF2C9B362CD(Local_3649.f_358[iParam0 /*5*/]))
	{
		if (func_177(iParam0))
		{
			iVar0 = unk_0x0EE5FAC7EF37F8A0(Local_3649.f_358[iParam0 /*5*/]);
			return func_173(iParam0, iVar0);
		}
		return 1;
	}
	return 0;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = func_176(iParam0);
	if (iVar0 != -1 && Local_221.f_419.f_72[iVar0 /*6*/].f_2 != -1)
	{
		uVar1 = func_175(iVar0);
		if (unk_0xAE06B9E39EBDE049(iParam1) && unk_0x3D70CCF2C9B362CD(uVar1))
		{
			if (func_174(uVar1))
			{
				iVar2 = unk_0x62D2FF718BC7717D(uVar1);
				if (!unk_0x0A43129B43E05B32(iParam1, iVar2))
				{
					Stack.Push(iParam1);
					Stack.Push(iVar2);
					Stack.Push(unk_0x0724529FC474C803(iVar2, "chassis_dummy"));
					Stack.Push(Local_221.f_419.f_72[iVar0 /*6*/].f_3);
					Stack.Push(func_183(iParam0));
					Stack.Push(iVar0);
					Call_Loc(Local_1202.f_279.f_19);
					unk_0xF8A652CE310FFC53(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 0, 0, 0, 2, 1);
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			if (!unk_0xAE06B9E39EBDE049(iParam1))
			{
			}
			if (!unk_0x3D70CCF2C9B362CD(uVar1))
			{
			}
		}
		return 0;
	}
	return 1;
}

int func_174(var uParam0)
{
	if (unk_0xF05B7723022657B3(uParam0) || (!unk_0x663F84E7375B82E6(uParam0) && unk_0xAFF96FDC3971E7EA()))
	{
		if (func_131(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_175(int iParam0)
{
	switch (Local_221.f_419.f_72[iParam0 /*6*/].f_1)
	{
		case 2:
			return Local_3649.f_327[Local_221.f_419.f_72[iParam0 /*6*/].f_2 /*6*/];
		
		case 3:
			return Local_3649.f_358[Local_221.f_419.f_72[iParam0 /*6*/].f_2 /*5*/];
		
		case 1:
			return Local_3649.f_62[Local_221.f_419.f_72[iParam0 /*6*/].f_2 /*22*/];
		
		default:
	}
	return -1;
}

int func_176(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_221.f_419.f_72[iVar0 /*6*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_177(int iParam0)
{
	return func_163(iParam0, 25);
}

void func_178(int iParam0, int iParam1)
{
	var uVar0;
	var uVar6;
	
	unk_0xB5734A184D9C597F(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_358[iParam0 /*5*/]), 300);
	unk_0x52090984B5C8A3E4(iParam1, func_163(iParam0, 17), func_163(iParam0, 18), func_163(iParam0, 19), func_163(iParam0, 20), func_163(iParam0, 21), 0, 0, 0);
	func_180(iParam0, 0);
	if (!func_163(iParam0, 1))
	{
		unk_0xC18BA33CBF71A593(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_358[iParam0 /*5*/]));
	}
	if (func_163(iParam0, 2))
	{
		unk_0xD4BDC3D62C5E0A56(Local_3649.f_358[iParam0 /*5*/], 1, 1);
		unk_0x76B3F29D3F967692(Local_3649.f_358[iParam0 /*5*/], 1);
		unk_0xC18D7493E92B5029(iParam1, 1, 1);
	}
	if (func_163(iParam0, 3))
	{
		unk_0x58ADF88C51AAFDC5(iParam1, false, 0);
	}
	if (func_163(iParam0, 4))
	{
		unk_0x38149C8F41D9DABE(iParam1, 1);
	}
	if (func_163(iParam0, 5))
	{
		unk_0xD901D6C8CF04EB87(iParam1, 0);
	}
	if (func_163(iParam0, 6))
	{
		unk_0x9729E0DCF1C3C9A9(iParam1, 1);
	}
	if (func_163(iParam0, 7))
	{
		unk_0x8B77B020136E915A(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
	}
	if (func_163(iParam0, 15))
	{
		unk_0x1CCBC799127EA27B(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_358[iParam0 /*5*/]), 1200);
	}
	if (func_163(iParam0, 8))
	{
		unk_0x6A8F948698B360B4(iParam1, true);
	}
	if (func_163(iParam0, 9))
	{
		unk_0x7F1F4156EF7FAD8F(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_358[iParam0 /*5*/]), 1);
	}
	if (func_163(iParam0, 16))
	{
		unk_0x03D382CB0B44E2FC(iParam1, func_184(iParam0), 1, 0, 0, 1);
	}
	if (func_163(iParam0, 10))
	{
		unk_0x0312E5501F93E5AB(iParam1, true);
	}
	if (func_163(iParam0, 11))
	{
		unk_0x70736E63608BE77D(iParam1, 1);
	}
	if (func_179(iParam0))
	{
		unk_0xFA6E875B9DF13F14(iParam1, 1);
	}
	if (func_163(iParam0, 13))
	{
		unk_0x80250B8368A4E611(iParam1, false, 0);
	}
	if (func_163(iParam0, 14))
	{
		Stack.Push(Local_1202.f_279.f_18 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar6);
		Call_Loc(Local_1202.f_279.f_18);
		if (StackVal && StackVal)
		{
			unk_0xDB4E375D0A32A140(&uVar0, iParam1);
			unk_0x309C0E6FCCD30F19(&uVar0, 1);
			unk_0xE00EB2EF00318633(&uVar0, &uVar6);
		}
	}
	if (Local_1202.f_279.f_25 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1202.f_279.f_25);
	}
}

int func_179(int iParam0)
{
	if (func_163(iParam0, 12))
	{
		return 1;
	}
	if (func_29(22))
	{
		return 1;
	}
	return 0;
}

void func_180(int iParam0, int iParam1)
{
	if (func_181(&(Local_3649.f_358[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_181(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar1], iVar2))
	{
		unk_0xD2459066EA58CE43(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

int func_182(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!unk_0xF8E99C596E84AFF3(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = unk_0x22CA0B37B74BB381(unk_0x6E52E47D436A2C77(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	else
	{
		*uParam0 = unk_0x22CA0B37B74BB381(unk_0x79CC07752E7432A1(iParam1, Param2, iParam6, bParam5, iParam7));
	}
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(unk_0x0EE5FAC7EF37F8A0(*uParam0), bParam8);
		if (bParam10)
		{
			unk_0xFA6E875B9DF13F14(unk_0x0EE5FAC7EF37F8A0(*uParam0), 1);
		}
		if (bParam11)
		{
			unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(*uParam0), false, 0);
		}
		if (unk_0x4349BF35C5B9A49B(unk_0x0EE5FAC7EF37F8A0(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

Vector3 func_183(int iParam0)
{
	struct<3> Var0;
	
	if (Local_1202.f_279.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_279.f_28);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_38(Var0))
	{
		Var0 = { Local_221.f_419.f_1[iParam0 /*10*/].f_7 };
	}
	return Var0;
}

Vector3 func_184(int iParam0)
{
	struct<3> Var0;
	
	if (Local_1202.f_279.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_279.f_27);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_38(Var0))
	{
		Var0 = { Local_221.f_419.f_1[iParam0 /*10*/].f_3 };
	}
	return Var0;
}

int func_185(int iParam0)
{
	return 1;
}

int func_186(int iParam0)
{
	if (Local_1202.f_279.f_17 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_279.f_17);
		return StackVal;
	}
	return 1;
}

int func_187(int iParam0)
{
	if (Local_1202.f_279.f_20 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_279.f_20);
		return StackVal;
	}
	return 0;
}

void func_188(int iParam0, int iParam1)
{
	Local_3649.f_358[iParam0 /*5*/].f_1 = iParam1;
}

int func_189(int iParam0)
{
	return Local_3649.f_358[iParam0 /*5*/].f_1;
}

void func_190()
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
	while (iVar0 < Local_221.f_351)
	{
		bVar6 = unk_0x3D70CCF2C9B362CD(Local_3649.f_327[iVar0 /*6*/]);
		if (bVar6)
		{
			iVar3 = unk_0x770D3B2B4702434A(Local_3649.f_327[iVar0 /*6*/]);
			bVar5 = func_134(Local_3649.f_327[iVar0 /*6*/]);
			bVar7 = func_449(iVar3, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar5)
			{
				iVar1 = func_448(iVar0, 2);
			}
		}
		if (func_447(iVar0) > 2)
		{
			if (func_447(iVar0) != 5 && func_447(iVar0) != 3)
			{
				if (!bVar6)
				{
					func_446(iVar0, 5);
				}
				else if (!bVar5)
				{
					func_446(iVar0, 5);
				}
				else if (func_445(iVar0, iVar3))
				{
					func_446(iVar0, 5);
				}
				else
				{
					func_444(iVar0, &iVar2);
				}
			}
		}
		else
		{
			func_444(iVar0, &iVar2);
		}
		if (Local_1202.f_243.f_31 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar3);
			Stack.Push(bVar5);
			Stack.Push(iVar1);
			Call_Loc(Local_1202.f_243.f_31);
		}
		func_441(iVar0);
		switch (func_447(iVar0))
		{
			case 0:
				if (func_440(iVar0))
				{
					func_446(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar6)
				{
					if (func_439(iVar0))
					{
						func_446(iVar0, 2);
					}
				}
				else
				{
					func_137(&(Local_3649.f_327[iVar0 /*6*/]));
				}
				break;
			
			case 2:
				if (!bVar4)
				{
					if (func_438(iVar0))
					{
						if (func_202(iVar0))
						{
							func_446(iVar0, 4);
							bVar4 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar5)
				{
					func_196(iVar0, iVar3);
				}
				break;
			
			case 5:
				if (!func_29(7))
				{
					func_57(iVar0, 2);
				}
				if (func_162(iVar0, 0))
				{
					func_10(10);
				}
				if (func_162(iVar0, 23))
				{
					if (bVar6)
					{
						func_137(&(Local_3649.f_327[iVar0 /*6*/]));
					}
				}
				if (func_195(iVar0))
				{
					func_137(&(Local_3649.f_327[iVar0 /*6*/]));
					func_446(iVar0, 1);
				}
				break;
			
			case 3:
				break;
			
			case 6:
				if (bVar6 && func_194(iVar0, iVar3))
				{
					func_137(&(Local_3649.f_327[iVar0 /*6*/]));
				}
				break;
			
			case 7:
				break;
		}
		if (bVar7)
		{
			func_193(iVar0, 13);
		}
		else
		{
			func_192(iVar0, 13);
		}
		iVar0++;
	}
	func_191(&iVar2);
}

void func_191(int iParam0)
{
	if (Local_3649.f_399.f_9 != *iParam0)
	{
		Local_3649.f_399.f_9 = *iParam0;
	}
}

void func_192(int iParam0, int iParam1)
{
	if (func_181(&(Local_3649.f_327[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

void func_193(int iParam0, int iParam1)
{
	if (func_15(&(Local_3649.f_327[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

int func_194(int iParam0, int iParam1)
{
	if (func_162(iParam0, 23) || func_150(iParam0, 15))
	{
		return 1;
	}
	return 0;
}

int func_195(int iParam0)
{
	if (func_496() != 0)
	{
		return 0;
	}
	if (func_150(iParam0, 15))
	{
		return func_51(iParam0);
	}
	if (func_162(iParam0, 13))
	{
		if (Local_1202.f_243.f_24 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1202.f_243.f_24);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	
	if (!func_150(iParam0, 15))
	{
		return;
	}
	iVar0 = func_53(1, iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, 0) };
	fVar4 = SYSTEM::VDIST(Var1, func_197());
	if (unk_0x0D77CDCF403AEBD2((fVar4 - Local_3649.f_399[iVar0 /*4*/].f_3)) > 10f)
	{
		Local_3649.f_399[iVar0 /*4*/].f_3 = fVar4;
	}
	iVar5 = func_155(iVar0);
	if (unk_0xAE06B9E39EBDE049(iVar5))
	{
		fVar4 = SYSTEM::VDIST(Var1, unk_0x3E4D3CCC220BDFB1(iVar5, 0));
		if (unk_0x0D77CDCF403AEBD2((fVar4 - Local_3649.f_399[iVar0 /*4*/].f_2)) > 10f)
		{
			Local_3649.f_399[iVar0 /*4*/].f_2 = fVar4;
		}
	}
}

Vector3 func_197()
{
	if (Local_1202.f_382.f_3.f_2 != 0)
	{
		Call_Loc(Local_1202.f_382.f_3.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_198(func_201());
}

Vector3 func_198(int iParam0)
{
	if (bLocal_3567 && unk_0x47DBF174A0CB9D55(iLocal_3571, 0))
	{
		return func_200(iParam0);
	}
	return func_199(iParam0);
}

Vector3 func_199(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1683921.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_200(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1683921.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

int func_201()
{
	if (Local_1202.f_382.f_3.f_1 != 0)
	{
		Call_Loc(Local_1202.f_382.f_3.f_1);
		return StackVal;
	}
	if (iLocal_3572 != -1)
	{
		return Local_3317.f_1[Local_4188[iLocal_3572 /*114*/].f_57 /*4*/];
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_132(1, iParam0);
	iVar0 = Local_221.f_351.f_1[iParam0 /*13*/].f_2;
	if (!func_45(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_38(Local_3649.f_493))
	{
		if (func_150(iParam0, 15))
		{
			if (unk_0x442D6659150AF4B3(iVar0) || unk_0xF9C3E2B9AA9E2294(iVar0))
			{
				if (!func_433(iParam0))
				{
					bVar1 = false;
				}
			}
			else if (!func_425(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_162(iParam0, 17))
		{
			if (!func_301(iParam0, &(Local_3649.f_493), &(Local_3649.f_499)))
			{
				bVar1 = false;
			}
		}
		else if (func_162(iParam0, 25))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_3649.f_493));
			Stack.Push(&(Local_3649.f_499));
			Call_Loc(Local_1202.f_243.f_26);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_162(iParam0, 18))
		{
			if (!func_425(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_162(iParam0, 19))
		{
			if (!func_433(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_3649.f_493 = { Local_221.f_351.f_1[iParam0 /*13*/].f_3 };
			Local_3649.f_499 = Local_221.f_351.f_1[iParam0 /*13*/].f_6;
		}
	}
	if (bVar1)
	{
		func_280(Local_3649.f_493, 30f, 0);
		unk_0x555EE41D7C7078E6(Local_3649.f_493, 30f, 0, 0, 0, 1);
		if (func_277(&(Local_3649.f_327[iParam0 /*6*/]), iVar0, Local_3649.f_493, Local_3649.f_499, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar2 = unk_0x770D3B2B4702434A(Local_3649.f_327[iParam0 /*6*/]);
			func_203(iParam0, iVar2);
			func_106();
			return 1;
		}
	}
	return 0;
}

void func_203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam1);
	if (!func_215(iParam0, iParam1))
	{
		func_214(iParam0, iParam1);
	}
	if (func_213(iParam0))
	{
		unk_0xFA6E875B9DF13F14(iParam1, 1);
	}
	unk_0x0312E5501F93E5AB(iParam1, func_162(iParam0, 10));
	unk_0x69B8739B0B73352F(iParam1, func_162(iParam0, 3));
	unk_0x1AB8D7ECA49F6A6C(iParam1, func_162(iParam0, 3));
	unk_0x3CA278EE738AAD63(iParam1, func_162(iParam0, 5));
	if (func_162(iParam0, 4))
	{
		unk_0x5DC21979EC6C531F(iParam1, 7);
	}
	if (func_162(iParam0, 25))
	{
		unk_0xCBF81D3222C77066(iParam1, Local_3649.f_493, 0, 0, 1);
	}
	if (func_162(iParam0, 8))
	{
		unk_0x57D9F15463503E01(iParam1, 2, 2);
		unk_0x57D9F15463503E01(iParam1, 3, 2);
		unk_0x27BA1DB6A78254F0(iParam1, 0);
	}
	if (func_162(iParam0, 28))
	{
		unk_0xD4BDC3D62C5E0A56(Local_3649.f_327[iParam0 /*6*/], 1, 1);
		unk_0xC18D7493E92B5029(iParam1, 1, 1);
	}
	if (func_150(iParam0, 14))
	{
		unk_0x697DA7132EE43ABC(iParam1, 1000, 0);
		unk_0x0E765FE8467F7839(iParam1, false);
		unk_0xAEBB7D261688301C(iParam1, 1);
		unk_0x26260C288A1AB2E5(iParam1, 0);
		if (func_212(iVar0))
		{
			unk_0xF7F003F7673B7CDD(iParam1, 0);
			unk_0x378703813255A22C(iParam1, func_211(iVar0));
		}
		if (unk_0xF9C3E2B9AA9E2294(iVar0))
		{
			unk_0xD05ED2138B378AF6(iParam1, 0);
			unk_0x201A9AA6F5343858(iParam1, 0f);
		}
		func_209(iParam1, iVar0);
		func_208(iParam1, 1);
		unk_0xFDA21C60326FD7E5(iParam1, 0);
		unk_0x40AC0CCFE1307C5A(iParam1, func_162(iParam0, 7), 0);
		func_207(iParam0, iParam1);
	}
	if (func_162(iParam0, 11))
	{
		unk_0x6A8F948698B360B4(iParam1, true);
	}
	if (func_150(iParam0, 15))
	{
		iVar1 = func_206(iParam0);
		unk_0x316E0389ADF56E20(iParam1, unk_0xF3A639BEE7AADF55(iVar1));
		if (unk_0xF9C3E2B9AA9E2294(iVar0))
		{
			unk_0xEE6FDB1E2B95E783(iParam1, 3);
			unk_0xD8CF3B58B8429B96(iParam1, 1);
		}
		unk_0x0E765FE8467F7839(iParam1, true);
		unk_0x494ACC4552B7881B(iParam1, 0);
		unk_0xF7F003F7673B7CDD(iParam1, 1);
		unk_0xC160551F55D6365A(iParam1, 1, 1, 0);
		if (unk_0xC71761E30ACCF098(iParam1) > 0)
		{
			unk_0x249EEEE65626B20C(iParam1, 0);
			if (!unk_0xC59714C8D4D5117D(iParam1, 18))
			{
				unk_0x136FC3422AADC5DD(iParam1, 18, true);
			}
		}
	}
	else
	{
		if (unk_0xF9C3E2B9AA9E2294(iVar0))
		{
			unk_0xEE6FDB1E2B95E783(iParam1, 2);
		}
		if (unk_0x5874D60325749F00(iVar0))
		{
			unk_0xF9A692CE2F45AC6F(iParam1, 1);
		}
	}
	if (func_150(iParam0, 15) || func_162(iParam0, 19))
	{
		if (unk_0x442D6659150AF4B3(iVar0))
		{
			unk_0xDF383F338BF25208(iParam1);
			unk_0xC160551F55D6365A(iParam1, 1, 1, 0);
			unk_0xAFB24BC90ACA6210(iParam1);
			unk_0x9729E0DCF1C3C9A9(iParam1, 1);
		}
	}
	unk_0x54907AF8D51E6B48(iParam1, 1);
	unk_0x1491D110B8361BFE(iParam1, 1);
	unk_0x71E303DB05A7869C(iParam1, 1);
	unk_0x1CCBC799127EA27B(iParam1, 1200);
	unk_0x74528AC0906CBABE(iVar0);
	unk_0x8EB5BB897218C251(iParam1, 1);
	func_204(iParam1);
	unk_0x338B931E8668A259(Local_3649.f_327[iParam0 /*6*/], 1);
	if (Local_1202.f_243.f_28 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1202.f_243.f_28);
	}
}

void func_204(int iParam0)
{
	int iVar0;
	
	func_205(iParam0);
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
		}
		unk_0xBE20AB8238688965(&iVar0, 10);
		unk_0xBE20AB8238688965(&iVar0, 11);
		unk_0x00AF6A2AAFB41525(iParam0, "MPBitset", iVar0);
	}
}

void func_205(int iParam0)
{
	if (unk_0x6844807B17DC2DFC("Not_Allow_As_Saved_Veh", 3))
	{
		if (!unk_0x871819940BD2E434(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			unk_0x00AF6A2AAFB41525(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

int func_206(int iParam0)
{
	return func_156(func_158(func_53(1, iParam0), 0));
}

void func_207(int iParam0, int iParam1)
{
	if (unk_0x6844807B17DC2DFC("FMCVehicle", 2))
	{
		unk_0x6AAFCA9C4D72022D(iParam1, "FMCVehicle", 1);
	}
}

void func_208(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xBE20AB8238688965(&iVar0, 13);
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, 13);
		}
		unk_0x00AF6A2AAFB41525(iParam0, "MPBitset", iVar0);
	}
}

void func_209(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			unk_0xB6B7CBF9D7306145(iParam0, 0);
			break;
	}
	func_210(iParam0);
}

void func_210(int iParam0)
{
	if (!Global_262145.f_4684)
	{
		unk_0x131A211B8EEF6BF0(iParam0, 0);
	}
}

float func_211(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent3"):
			return 1f;
		
		default:
	}
	return 0.2f;
}

bool func_212(int iParam0)
{
	return func_211(iParam0) != 1f;
}

int func_213(int iParam0)
{
	if (func_29(22))
	{
		return 1;
	}
	return 0;
}

void func_214(int iParam0, int iParam1)
{
	if (Local_221.f_351.f_1[iParam0 /*13*/].f_7 != -1)
	{
		unk_0x38633C69DE516059(iParam1, Local_221.f_351.f_1[iParam0 /*13*/].f_7, Local_221.f_351.f_1[iParam0 /*13*/].f_7);
		unk_0x88FCE2696F59472E(iParam1, Local_221.f_351.f_1[iParam0 /*13*/].f_7, Local_221.f_351.f_1[iParam0 /*13*/].f_7);
	}
}

int func_215(int iParam0, int iParam1)
{
	struct<101> Var0;
	
	if (Local_1202.f_243.f_29 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(iParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_1202.f_243.f_29);
		if (StackVal)
		{
			func_216(iParam1, &Var0, 0, 1, func_150(iParam0, 15));
			return 1;
		}
	}
	return 0;
}

void func_216(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if ((unk_0x25DDB354A40FFCDB() && unk_0xAA5B806352173DEA(iParam0)) || !unk_0x25DDB354A40FFCDB())
		{
			if (unk_0x460153A63B9477BC() != func_101())
			{
				uParam1->f_100 = unk_0x460153A63B9477BC();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_264(iParam0, uParam1, bParam2, bParam3);
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				unk_0x6CDF39B92E5DBB31(iParam0, 1, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				unk_0x49AA5F5E8138E6D0(iParam0, uParam1->f_79);
			}
			if (func_263(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0x80E6F5AEA0C688D0(iParam0, uParam1->f_80);
			unk_0x6F4F080592370CD6(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0xA2E507034EC819AB(iParam0, uParam1->f_99);
			}
			if (func_262(iParam0))
			{
				func_256(iParam0, func_259(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0x514F6B2DEC79A836(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x083E5C89C0E9FBED(iParam0, uParam1->f_98);
			}
			if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 0))
			{
				func_230(iParam0, &(uParam1->f_81));
			}
			if ((!func_222(4) && !bParam4) && !unk_0xFC559366953F62B3())
			{
				func_219(iParam0);
			}
			if (func_218(unk_0x36FE6D3220816ADA(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						break;
					
					case 1:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 0, false);
						}
						else
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 1, false);
						}
						else
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						unk_0x4C1DD6A89EF34554(iParam0, 16);
						if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 2, false);
						}
						else
						{
							unk_0x8DFB45E7317A7ED7(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							unk_0x4C1DD6A89EF34554(iParam0, 16);
							if ((unk_0x68AEFA37A65085FD(iParam0, joaat("scarab")) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab2"))) || unk_0x68AEFA37A65085FD(iParam0, joaat("scarab3")))
							{
								unk_0x8DFB45E7317A7ED7(iParam0, 16, 2, false);
							}
							else
							{
								unk_0x8DFB45E7317A7ED7(iParam0, 16, 4, false);
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
					if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 1) && unk_0xCE990E643CD9D0E5(uParam1->f_95, 2))
					{
						if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 3))
						{
						}
					}
					else if (unk_0x6844807B17DC2DFC("Player_Vehicle", 3))
					{
						unk_0x00AF6A2AAFB41525(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (unk_0xCE990E643CD9D0E5(uParam1->f_95, 1) && unk_0xCE990E643CD9D0E5(uParam1->f_95, 2))
					{
						if (unk_0x6844807B17DC2DFC("Veh_Modded_By_Player", 3))
						{
							unk_0x00AF6A2AAFB41525(iParam0, "Veh_Modded_By_Player", unk_0x69FCAB6112C0ABA7(unk_0x460153A63B9477BC()));
						}
					}
					else if (unk_0x6844807B17DC2DFC("Veh_Modded_By_Player", 3))
					{
						if (func_217(uParam1->f_81) && unk_0x29EC5130E3AD4D5A(&(uParam1->f_81)))
						{
							unk_0x00AF6A2AAFB41525(iParam0, "Veh_Modded_By_Player", unk_0x69FCAB6112C0ABA7(unk_0xAAA938655BBB5286(&(uParam1->f_81))));
						}
						else
						{
							unk_0x00AF6A2AAFB41525(iParam0, "Veh_Modded_By_Player", -1);
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

bool func_217(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

int func_218(int iParam0)
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

void func_219(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19692)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0))
		{
			if (unk_0x4349BF35C5B9A49B(iParam0))
			{
				Var0.x = unk_0x36FE6D3220816ADA(iParam0);
				Var0.f_1 = unk_0x856D5567211886A2(unk_0x6984AA4EC2FF9734(iParam0));
				if (unk_0x6844807B17DC2DFC("RandomID", 3))
				{
					if (!unk_0x871819940BD2E434(iParam0, "RandomID"))
					{
						Var0.f_2 = unk_0x344C570D6F8700DF(0, 65535);
						unk_0x00AF6A2AAFB41525(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = unk_0x8C0800114C2864BE(iParam0, "RandomID");
					}
				}
				func_220(Var0);
			}
		}
	}
}

void func_220(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.x = -365271546;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = Param0.x;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	unk_0xB802750B43D4047C(1, &Var0, 5, func_221(1, 1));
}

int func_221(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_69(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_92(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (func_229())
	{
		iVar0 = 0;
		while (iVar0 < 54)
		{
			if (func_153(iVar0) == iParam0)
			{
				if (func_223(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_223(int iParam0)
{
	return func_224(iParam0, 6, 1);
}

int func_224(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xCE990E643CD9D0E5(Global_99007.f_1364[iParam0], iParam1);
	}
	else if (unk_0x25DDB354A40FFCDB())
	{
		if (func_228() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_225(func_227(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_225(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_226(iParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_94();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 10099;
			break;
		
		case 45:
			return 3809;
			break;
		
		case 46:
			return 5384;
			break;
		
		case 47:
			return 6156;
			break;
		
		case 48:
			return 7233;
			break;
		
		case 49:
			return 7879;
			break;
		
		case 52:
			return 8913;
			break;
		
		case 50:
			return 8266;
			break;
		
		case 51:
			return 8268;
			break;
		
		case 53:
			return 9553;
			break;
		
		default:
			break;
	}
	return 11771;
}

int func_228()
{
	return Global_30968;
}

bool func_229()
{
	return Global_99007.f_352 > 0;
}

int func_230(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_240(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = unk_0xE611DE8C975C240C(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_238(iParam0))
		{
			iVar1 = unk_0xAAA938655BBB5286(uParam1);
			if (func_233(&iParam0, iVar1))
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
	else if (func_231(iParam0))
	{
	}
	return 0;
}

int func_231(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = unk_0xE611DE8C975C240C(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				iVar1 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				iVar1 = unk_0x578C4EF320340AF7();
			}
			iVar2 = unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(iVar1, Global_1315750));
			iVar3 = 20000;
			if (Global_1574416)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				unk_0x9CD0A7C6B7459240(iParam0);
				func_232(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_232(int iParam0)
{
	int iVar0;
	
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(iVar0, 16))
	{
		unk_0xBE20AB8238688965(&iVar0, 16);
		unk_0x00AF6A2AAFB41525(iParam0, "MPBitset", iVar0);
	}
}

int func_233(int iParam0, int iParam1)
{
	func_237();
	if (Global_1312485.f_18 != 0 || unk_0xCEA0613B0A879C8E(*iParam0))
	{
		Global_1678175.f_11 = unk_0xE519C159A2C4FF27(*iParam0);
		if (Global_1678175.f_11 < 0f)
		{
			Global_1678175.f_11 = 0f;
		}
	}
	func_235(*iParam0, &Global_1678175, &(Global_1678175.f_1), &(Global_1678175.f_4), &(Global_1678175.f_7), &(Global_1678175.f_10));
	Global_1678175.f_1.f_2 = (Global_1678175.f_1.f_2 - Global_1678175.f_11);
	if (Global_1678175.f_4.f_2 < 0f)
	{
		Global_1678175.f_12 = 1;
	}
	Global_1678175.f_13 = 200;
	if (unk_0x36FE6D3220816ADA(*iParam0) == joaat("windsor") || unk_0x36FE6D3220816ADA(*iParam0) == joaat("comet4"))
	{
		Global_1678175.f_13 = 255;
	}
	if (Global_1678175.f_12)
	{
		if (func_234(iParam0, iParam1, Global_1678175, Global_1678175.f_1, Global_1678175.f_4, Global_1678175.f_7, Global_1678175.f_10, 0, Global_1678175.f_13))
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				Global_1315750 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				Global_1315750 = unk_0x578C4EF320340AF7();
			}
			return 1;
		}
	}
	else
	{
		Global_1678175.f_14 = { Global_1678175.f_1 };
		Global_1678175.f_14 = (Global_1678175.f_14 * -1f);
		Global_1678175.f_17 = { Global_1678175.f_4 };
		Global_1678175.f_17 = (Global_1678175.f_17 * -1f);
		Global_1678175.f_20 = { Global_1678175.f_7 };
		Global_1678175.f_20.f_1 = (Global_1678175.f_20.f_1 * -1f);
		Global_1678175.f_20.f_2 = (Global_1678175.f_20.f_2 * -1f);
		if (!unk_0x62B133F8490E0B2E(*iParam0, 0))
		{
			Global_1678175.f_23 = unk_0xE611DE8C975C240C(*iParam0, 0);
		}
		else
		{
			Global_1678175.f_23 = 3;
		}
		Global_1678175.f_24 = unk_0xE611DE8C975C240C(*iParam0, 1);
		if (!unk_0x62B133F8490E0B2E(*iParam0, 1))
		{
			Global_1678175.f_24 = unk_0xE611DE8C975C240C(*iParam0, 1);
		}
		else
		{
			Global_1678175.f_24 = 3;
		}
		if (((Global_1678175.f_23 == 0 && func_234(iParam0, iParam1, Global_1678175, Global_1678175.f_1, Global_1678175.f_4, Global_1678175.f_7, Global_1678175.f_10, 0, Global_1678175.f_13)) || Global_1678175.f_23 != 0) && ((Global_1678175.f_24 == 0 && func_234(iParam0, iParam1, Global_1678175, Global_1678175.f_14, Global_1678175.f_17, Global_1678175.f_20, Global_1678175.f_10, 1, Global_1678175.f_13)) || Global_1678175.f_24 != 0))
		{
			if (unk_0x25DDB354A40FFCDB())
			{
				Global_1315750 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				Global_1315750 = unk_0x578C4EF320340AF7();
			}
			return 1;
		}
	}
	return 0;
}

bool func_234(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, var uParam12, int iParam13, var uParam14)
{
	return unk_0x81705B6185E70EB7(*uParam0, unk_0x1FA7B77001D60F9D(iParam1), uParam2, Param3, Param6, Param9, uParam12, iParam13, uParam14);
}

int func_235(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
	if (((!func_236(Global_1678201, 0f, 0f, 0f, 0) && !func_236(Global_1678204, 0f, 0f, 0f, 0)) && !func_236(Global_1678207, 0f, 0f, 0f, 0)) && !Global_1678210 == 0f)
	{
		*uParam2 = { Global_1678201 };
		*uParam3 = { Global_1678204 };
		*uParam4 = { Global_1678207 };
		*uParam5 = Global_1678210;
		return 1;
	}
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0.5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
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
	switch (unk_0x36FE6D3220816ADA(iParam0))
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
			*uParam1 = unk_0x0724529FC474C803(iParam0, "chassis_dummy");
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
	switch (unk_0x36FE6D3220816ADA(iParam0))
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
	}
	return 1;
}

bool func_236(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_237()
{
	Global_1678175 = 0;
	Global_1678175.f_1 = { 0f, 0f, 0f };
	Global_1678175.f_4 = { 0f, 0f, 0f };
	Global_1678175.f_7 = { 0f, 0f, 0f };
	Global_1678175.f_10 = 0f;
	Global_1678175.f_11 = 0f;
	Global_1678175.f_12 = 0;
	Global_1678175.f_13 = 0;
	Global_1678175.f_14 = { 0f, 0f, 0f };
	Global_1678175.f_17 = { 0f, 0f, 0f };
	Global_1678175.f_20 = { 0f, 0f, 0f };
	Global_1678175.f_23 = 0;
	Global_1678175.f_24 = 0;
}

int func_238(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0x62B133F8490E0B2E(iParam0, 0) || func_239(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
			{
				iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
				return unk_0xCE990E643CD9D0E5(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_240(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xF6B8932480699645(uParam1, 13) && unk_0x29EC5130E3AD4D5A(uParam1))
	{
		iVar0 = unk_0xAAA938655BBB5286(uParam1);
	}
	else
	{
		iVar0 = func_101();
	}
	bVar1 = false;
	if (iVar0 == unk_0x460153A63B9477BC())
	{
		if (func_251(15, 0))
		{
			bVar1 = true;
		}
		else if (func_247(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0xAE06B9E39EBDE049(iParam0) && !unk_0xA59F96B50B97E63C(iParam0, 0)) || !unk_0xAA5B806352173DEA(iParam0)) || !unk_0xB454B9D1010ED3BA(0, -1, 1)) || !((unk_0xF6B8932480699645(uParam1, 13) && unk_0xE2FBD13450B2DA21()) && unk_0xBF9EC1ED7E386622(uParam1))) || iVar0 == func_101()) || !func_69(iVar0, 0, 0)) || !bVar1) || func_241(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_241(int iParam0)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 1;
	}
	if (func_243(unk_0x460153A63B9477BC()) == 3)
	{
		if (func_242(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1678200)
	{
		return 1;
	}
	switch (unk_0x36FE6D3220816ADA(iParam0))
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
			if (unk_0x7F8B14CBFB9813E5(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (unk_0x7F8B14CBFB9813E5(iParam0, 5) == 1)
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
			if ((unk_0x7F8B14CBFB9813E5(iParam0, 7) == 0 || unk_0x7F8B14CBFB9813E5(iParam0, 7) == 1) || unk_0x7F8B14CBFB9813E5(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((unk_0x7F8B14CBFB9813E5(iParam0, 45) == 4 || unk_0x7F8B14CBFB9813E5(iParam0, 45) == 5) || unk_0x7F8B14CBFB9813E5(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_242(int iParam0)
{
	if (unk_0x6844807B17DC2DFC("FMDeliverableID", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "FMDeliverableID"))
		{
			return unk_0x8C0800114C2864BE(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_243(int iParam0)
{
	if (func_246(iParam0) == 233)
	{
		return func_244(iParam0);
	}
	return -1;
}

int func_244(int iParam0)
{
	if (func_245(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_245(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_246(int iParam0)
{
	if (func_245(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

bool func_247(bool bParam0)
{
	return func_248(unk_0x460153A63B9477BC(), bParam0);
}

int func_248(int iParam0, bool bParam1)
{
	return func_249(iParam0, bParam1, 1);
}

int func_249(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_101())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_250(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_101() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_250(int iParam0, int iParam1)
{
	if (iParam0 != func_101())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_101())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_251(int iParam0, bool bParam1)
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
	iVar0 = func_253(iParam0);
	iVar1 = iParam0;
	return unk_0xCE990E643CD9D0E5(iVar0, func_252(iVar1));
}

int func_252(int iParam0)
{
	return (iParam0 % 32);
}

int func_253(int iParam0)
{
	int iVar0;
	
	iVar0 = func_225(func_254(iParam0), -1, 0);
	return iVar0;
}

int func_254(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_255(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1290;
			break;
	}
	return 1290;
}

int func_255(int iParam0)
{
	return (iParam0 / 32);
}

void func_256(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_258(iParam1);
	func_257(iVar1, &uVar0);
	unk_0xA2E507034EC819AB(iParam0, uVar0);
}

bool func_257(int iParam0, var uParam1)
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

int func_258(int iParam0)
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

int func_259(int iParam0, int iParam1, int iParam2)
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
	if ((unk_0x25DDB354A40FFCDB() && func_260()) && Global_1314052)
	{
		if ((iParam0 == Global_1314053 && iParam1 == Global_1314054) && iParam2 == Global_1314055)
		{
			return 13;
		}
	}
	return 0;
}

int func_260()
{
	struct<13> Var0;
	
	if (unk_0xDCA94C1EA9942FBD())
	{
		if ((unk_0x0EB6C63A09FD9DF1() && unk_0x011A67D2B195B6EB()) && unk_0x2A4512DFA7EDB2F9())
		{
			Var0 = { func_261() };
			if (unk_0xE2FBD13450B2DA21() && unk_0xBF9EC1ED7E386622(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_261()
{
	struct<13> Var0;
	
	unk_0xA5CA392E24C51EB1(&Var0, 13);
	return Var0;
}

int func_262(int iParam0)
{
	switch (unk_0x36FE6D3220816ADA(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_263(int iParam0, var uParam1)
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

void func_264(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (!func_275(iParam0))
		{
			if (unk_0x856D5567211886A2(&(uParam1->f_1)) != 0)
			{
				unk_0xC29A9E1088D83B1B(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x2C8D182979CFA409())
			{
				unk_0xE704D9F37B4C2203(iParam0, *uParam1);
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
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_274(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_274(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_274(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_274(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_274(iVar2)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_274(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_274(iVar3)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_274(iVar3));
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
					if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_274(iVar4)))
					{
					}
					else
					{
						unk_0xBE20AB8238688965(&(uParam1->f_77), func_274(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_274(4)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_274(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 10) != 0)
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE3FF4A5CC7C44EF4(iParam0, 0);
			if (unk_0x7F8B14CBFB9813E5(iParam0, 5) != -1)
			{
				unk_0xE3FF4A5CC7C44EF4(iParam0, 1);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 13))
		{
			unk_0xE77150AD7B3A75D0(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x91BD4FF2323B189E(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 12))
		{
			unk_0xE492EED87CB95A5E(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xDA7C54DAC349948E(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0x38633C69DE516059(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x88FCE2696F59472E(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xCE990E643CD9D0E5(uParam1->f_77, 15) || func_273(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_272())
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
		unk_0x80AB5AFB575FF63B(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_271(uParam1->f_66))
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
		}
		else
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
			unk_0x7E69FCE3F08F853A(iParam0, uParam1->f_65);
		}
		unk_0x0E765FE8467F7839(iParam0, !unk_0xCE990E643CD9D0E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x5DC21979EC6C531F(iParam0, uParam1->f_70);
		}
		unk_0x1EC0ADF14D3A546D(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xC87500F291715C64(iParam0, 2, unk_0xCE990E643CD9D0E5(uParam1->f_77, 28));
		unk_0xC87500F291715C64(iParam0, 3, unk_0xCE990E643CD9D0E5(uParam1->f_77, 29));
		unk_0xC87500F291715C64(iParam0, 0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 30));
		unk_0xC87500F291715C64(iParam0, 1, unk_0xCE990E643CD9D0E5(uParam1->f_77, 31));
		unk_0xDBDEDE7005EE04EF(iParam0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 10));
		if (unk_0x1D3BB414B1AF67E6(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA6595E9B6170C788(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iParam0)))
			{
				if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_270(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_270(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x8E02133B2800E7EB(iParam0, 1);
			}
			else
			{
				unk_0xD7ABCA2B7FE975F3(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_265(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x442D6659150AF4B3(uParam1->f_66) && !unk_0x5874D60325749F00(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_274(iVar5 + 1)))
				{
					if (!unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
					{
						unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, 0);
					}
				}
				else if (unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
				{
					unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, 1);
				}
				iVar5++;
			}
		}
		if ((unk_0x36FE6D3220816ADA(iParam0) == joaat("sheava") || unk_0x36FE6D3220816ADA(iParam0) == joaat("omnis")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("le7b"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 0) == -1)
			{
				unk_0xF242CEB863060ABC(iParam0, 1, 0);
			}
		}
		if (((unk_0xF9C3E2B9AA9E2294(uParam1->f_66) && unk_0x3E082C70B59E7522(iParam0)) && !unk_0x68AEFA37A65085FD(iParam0, joaat("avenger"))) && !((((Global_4456448.f_74284 == 6 || Global_4456448.f_74284 == 7) || Global_4456448.f_74284 == 18) || Global_4456448.f_74284 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_77, 23))
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 22))
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 2);
				}
				else
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 3);
				}
			}
			else
			{
				unk_0xEE6FDB1E2B95E783(iParam0, 4);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 27))
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_265(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x249EEEE65626B20C(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x136FC3422AADC5DD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xEA1AFD77A8446630(*iParam0, 255);
				}
				else
				{
					unk_0xEA1AFD77A8446630(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x7F8B14CBFB9813E5(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x4C1DD6A89EF34554(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_269(unk_0x36FE6D3220816ADA(*iParam0), 1) && unk_0x7F8B14CBFB9813E5(*iParam0, 24) != func_268(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8DFB45E7317A7ED7(*iParam0, 24, func_268(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_267(iParam0);
	if (func_266(*iParam0))
	{
		unk_0xAEBB7D261688301C(*iParam0, 1);
		unk_0x494ACC4552B7881B(*iParam0, 1);
	}
	return 1;
}

int func_266(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x7F8B14CBFB9813E5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x214B1F24249CD428(iParam0, iVar1, unk_0x7F8B14CBFB9813E5(iParam0, iVar1)), 32);
				iVar2 = unk_0x856D5567211886A2(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x856D5567211886A2("MNU_CAGE") || iVar2 == unk_0x856D5567211886A2("SABRE_CAG"))
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

void func_267(var uParam0)
{
	switch (unk_0x36FE6D3220816ADA(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x7F8B14CBFB9813E5(*uParam0, 4) == 0)
			{
				unk_0x8DFB45E7317A7ED7(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x4C1DD6A89EF34554(*uParam0, 13);
			}
			break;
	}
}

int func_268(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		switch (unk_0x36FE6D3220816ADA(iParam0))
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
		iVar0 = unk_0xAB92DA7B6007DAAA(iParam0, 38);
		iVar1 = unk_0xAB92DA7B6007DAAA(iParam0, 24);
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

int func_269(int iParam0, int iParam1)
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
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
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
			if (Global_262145.f_18677)
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
			if (Global_262145.f_18679)
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
			if (Global_262145.f_18683)
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
			if (Global_262145.f_18680)
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
			if (Global_262145.f_18687)
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
			if (Global_262145.f_18685)
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
			if (Global_262145.f_18690)
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
			if (Global_262145.f_20635)
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
			if (Global_262145.f_20636)
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

void func_270(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = unk_0x7F8B14CBFB9813E5(iParam0, 24);
		iVar1 = unk_0x9CE7070F0EBF111F(iParam0, 24);
		unk_0x499726ABB88D627B(iParam0, uParam1);
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("tornado6") || unk_0x36FE6D3220816ADA(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x4C1DD6A89EF34554(iParam0, 24);
		}
		else
		{
			unk_0x8DFB45E7317A7ED7(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

int func_271(int iParam0)
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

bool func_272()
{
	return unk_0x95C5B896CB42B20E(-1691188696);
}

int func_273(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x6844807B17DC2DFC("MPBitset", 3))
			{
				if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
				}
				return unk_0xCE990E643CD9D0E5(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_274(int iParam0)
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

int func_275(int iParam0)
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!func_276(unk_0x460153A63B9477BC(), -1))
		{
			iParam0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	if (func_243(unk_0x460153A63B9477BC()) == 3)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (func_242(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_276(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_69(iParam0, 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iParam0), 0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iParam0), 0);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (unk_0x9B0761B4C3EB8BC7() == unk_0x10D3F7E169A49C44(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_277(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x003F998A2839DD5E(iParam1))
	{
		return 0;
	}
	if (!unk_0xCAF3836E98C401B1(1))
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
		unk_0xF27E737981AFB47D(Param2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = unk_0xCE4780E24AFDFBF9(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
	if (unk_0xAE06B9E39EBDE049(iVar1))
	{
		*uParam0 = unk_0x50ACD47FCBAD9F89(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (unk_0xF7DE07F319727299(*uParam0))
		{
			if (bParam15)
			{
				unk_0xFA6E875B9DF13F14(iVar1, 1);
			}
			unk_0x7C47E49129337557(iVar1, iParam10);
			if (unk_0x4349BF35C5B9A49B(iVar1))
			{
				if (bParam8)
				{
					unk_0x342AB3CE1C296A56(*uParam0, 1);
				}
				else
				{
					unk_0x342AB3CE1C296A56(*uParam0, 0);
				}
				if (bParam13)
				{
					unk_0xDB600F30FAA757F3(*uParam0, unk_0x460153A63B9477BC(), 1);
				}
			}
			unk_0xDBDEDE7005EE04EF(iVar1, iParam9);
			unk_0x6B75B3B5FAC90C06(iVar1, 1);
			if (bParam12)
			{
				unk_0x9DFE5167DB83E411(iVar1);
				unk_0x7C3ECA5C7ACE0DDB(iVar1, 5, 5, 1f);
			}
			func_278(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_278(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_279(unk_0x460153A63B9477BC(), Param0, iParam4) > -1)
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
		Global_2405074.f_2914[1 /*6*/].f_3 = uParam3;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam4;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam5;
	}
}

int func_279(int iParam0, struct<3> Param1, int iParam4)
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
				if (unk_0x0D77CDCF403AEBD2((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
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

void func_280(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_297(&(Global_75654.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x272784C60C397DB6(Param0, Global_75654.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_281(iVar0);
			}
		}
		iVar0++;
	}
}

void func_281(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_297(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x80FF6C016CDB0FAF(Global_75654.f_139[iParam0], 0))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x4F3C4F457D44BB0F(Global_75654.f_139[iParam0], 1, 1);
				unk_0x03A2522C845CFAC6(&(Global_75654.f_139[iParam0]));
			}
		}
		Global_75654[iParam0] = 1;
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_296(iParam0, 0)) && Global_76563.f_66 == 0) && Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] != 0) && Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] > 3) && (!func_285(0, Global_75654.f_555[0 /*21*/].f_12) || !func_285(1, Global_75654.f_555[0 /*21*/].f_12)))
			{
				func_284(&(Global_111858.f_32745.f_69[Global_75654.f_555[0 /*21*/].f_14 /*78*/]), &Global_76563);
				Global_76641 = Global_111858.f_32745.f_5591;
			}
			func_282(iParam0, 0);
		}
	}
}

void func_282(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_296(iParam0, 0))
		{
			func_283(iParam0, 1, 0);
			func_283(iParam0, 2, 0);
			func_283(iParam0, 3, 0);
			func_283(iParam0, 4, 0);
			func_283(iParam0, 0, 1);
			Global_75654[iParam0] = 1;
		}
	}
	else
	{
		func_283(iParam0, 0, 0);
	}
}

void func_283(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_32745[iParam0]), iParam1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_32745[iParam0]), iParam1);
	}
}

void func_284(var uParam0, var uParam1)
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

int func_285(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_295(&(Global_111858.f_32745.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_286(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_286(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x653AAFF7E08B7D39(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x25DDB354A40FFCDB()) || (iParam0 == joaat("buffalo3") && !unk_0x25DDB354A40FFCDB())) || (iParam0 == joaat("gauntlet2") && !unk_0x25DDB354A40FFCDB())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x25DDB354A40FFCDB()))
	{
		if (!func_294())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81BDFC133086F533())
		{
			if (unk_0xA2F4B5E51CE10D19(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x14AC70FD8926649E(Var1))
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
		if ((((!func_293() && !func_292()) && !func_291()) && !func_290()) && !func_294())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xC6C08C02733D02C8() || unk_0xF8EDFF98A9C94C74()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_291())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_289(iParam0))
		{
			return 0;
		}
	}
	if (!func_287(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_287(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_288())
	{
		return 1;
	}
	unk_0x69DA2BD216554CB9(&iVar0, &uVar1);
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
	if (!unk_0x18A09013B66E9BB4(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_288()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

int func_289(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5A002C4821A13338();
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
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_290()
{
	return 0;
}

int func_291()
{
	return 1;
}

int func_292()
{
	return 1;
}

int func_293()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_294()
{
	var uVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &uVar0, -1);
				unk_0xBE20AB8238688965(&uVar0, 2);
				unk_0xBE20AB8238688965(&uVar0, 4);
				unk_0xBE20AB8238688965(&uVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), uVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					uVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&uVar0, 0);
					unk_0xB2B72C9FCE371E70(uVar0);
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
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_295(var uParam0)
{
	return *uParam0;
}

bool func_296(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_111858.f_32745[iParam0], iParam1);
}

int func_297(var uParam0, int iParam1)
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
			uParam0->f_4 = func_298(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_298(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_298(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_298(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_298(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_298(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_298(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_298(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_298(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
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
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
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
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
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
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
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
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
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
			if (func_294())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_294())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111858.f_32745.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_236(Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111858.f_32745.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111858.f_32745.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 19))
	{
		if (!func_236(Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 20))
	{
		if (!func_236(Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_298(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_300(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_299(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_299(int iParam0, var uParam1, int iParam2)
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
			if (Global_111858.f_9081.f_99.f_58[128] && !Global_111858.f_9081.f_99.f_58[131])
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
					if (Global_111858.f_9081.f_99.f_58[119])
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
			else if (Global_111858.f_9081.f_99.f_58[118])
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

bool func_300(int iParam0)
{
	return iParam0 < 3;
}

bool func_301(int iParam0, var uParam1, var uParam2)
{
	struct<34> Var0;
	
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_243.f_27);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_302(Local_221.f_351.f_1[iParam0 /*13*/].f_3, Local_221.f_351.f_1[iParam0 /*13*/].f_3, Local_221.f_351.f_1[iParam0 /*13*/].f_2, 0, uParam1, uParam2, &Var0);
}

int func_302(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
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
	if (unk_0x9CC4D06F5338CA6B())
	{
		if (!unk_0x69222D599BA78994() > 7 && !unk_0x69222D599BA78994() == 5)
		{
			return 0;
		}
	}
	if (Global_2405074.f_514)
	{
		Global_2405074.f_514 = 0;
		return 0;
	}
	if (!func_424(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!Global_2405074.f_601 == 0 && unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_606) < func_423(0))
	{
		if (!Global_2405074.f_671 == 0)
		{
			Global_2405074.f_671 = 0;
			func_422();
			func_421();
		}
		return 0;
	}
	if (!unk_0x354AD085195C5FA6() == Global_2405074.f_670)
	{
		if (!Global_2405074.f_671 == 0)
		{
			if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_674) < func_423(0))
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
		if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_672) > 30000)
		{
			Global_2405074.f_671 = 0;
		}
		if (!Global_2405074.f_671 == 0)
		{
			if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_674) > func_423(1))
			{
				Global_2405074.f_671 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_415(Param0))
		{
			if (func_414(&Param0, 1))
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
	unk_0xB65F86FFF1334E95((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f));
	if (Global_2405074.f_671 == 0)
	{
		Global_2405074.f_676 = 0;
		Global_2405074.f_672 = unk_0x29B9AF1CB5B8175D();
		Global_2405074.f_670 = unk_0x354AD085195C5FA6();
		Global_2405074.f_674 = unk_0x29B9AF1CB5B8175D();
		Global_2405074.f_689 = { Param0 };
		Global_2405074.f_692 = iParam6;
		Global_2405074.f_675 = unk_0x29B9AF1CB5B8175D();
		func_413();
		func_422();
		if (!uParam10->f_27 || (((((((func_412(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2540384.f_921) && !Global_2540384.f_910) && !Global_2540384.f_918) && !Global_2540384.f_922) && !Global_2540384.f_930) && !Global_2540384.f_942))
		{
			func_393(Param0, iParam6);
		}
		if (func_378(Param0))
		{
			func_393(Param0, iParam6);
		}
		Global_2405074.f_671 = 2;
	}
	switch (Global_2405074.f_671)
	{
		case 2:
			if (unk_0x71B5E9AB554C28B8((Param0.x - 100f), (Param0.f_1 - 100f), (Param0.x + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405074.f_677 = { Param0 };
				Global_2405074.f_680 = 0f;
				if (Global_2540384.f_921)
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
				if (((uParam10->f_3 && func_89(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_376(Param0, *uParam9, iParam6, unk_0x460153A63B9477BC(), 0))
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
					func_322(&(Global_2405074.f_677), &(Global_2405074.f_680), &Var5);
				}
				func_320(Global_2405074.f_677, Global_2405074.f_680, iParam6, &(Global_2405074.f_668));
				Global_2405074.f_666 = 0;
				Global_2405074.f_667 = 0;
				Global_2405074.f_676++;
				Global_2405074.f_673 = unk_0x29B9AF1CB5B8175D();
				Global_2405074.f_672 = unk_0x29B9AF1CB5B8175D();
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
							if (func_319(Global_2405074.f_677, Global_2405074.f_680, iParam6, 1, 1036831949))
							{
								Global_2405074.f_671 = 4;
								Global_2405074.f_694 = unk_0x29B9AF1CB5B8175D();
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
						func_317(Global_2405074.f_677, 0);
						func_316(-1);
					}
				}
				else
				{
					Global_2405074.f_666 = 0;
					Global_2405074.f_667 = 0;
				}
			}
			else if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_673) > 3000)
			{
				func_316(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_694) < 10000)
				{
					if (unk_0xFE7504CE3CC54D0B(Global_2405074.f_693))
					{
						if (unk_0xA1D9AC941D5284D3(Global_2405074.f_693))
						{
							if (!unk_0xA798AC9046F8467B(Global_2405074.f_693))
							{
								if (func_315(Global_2405074.f_677, Global_2405074.f_680, iParam6, unk_0x460153A63B9477BC(), 0) || func_304(Global_2405074.f_677, Global_2405074.f_680, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_317(Global_2405074.f_677, 0);
									func_316(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_317(Global_2405074.f_677, 0);
								func_316(-1);
							}
						}
					}
					else
					{
						func_316(-1);
					}
				}
				else
				{
					func_316(1);
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
			func_322(&(Global_2405074.f_677), &(Global_2405074.f_680), &Var65);
			Global_2405074.f_671 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405074.f_689 = { Param0 };
	Global_2405074.f_692 = iParam6;
	Global_2405074.f_674 = unk_0x29B9AF1CB5B8175D();
	if (bVar0)
	{
		Global_2405074.f_513 = 0;
		*uParam8 = { Global_2405074.f_677 };
		*uParam9 = Global_2405074.f_680;
		func_303(1);
		return 1;
	}
	return 0;
}

void func_303(bool bParam0)
{
	Global_2405074.f_671 = 0;
	func_413();
	func_422();
	if (bParam0)
	{
		func_421();
	}
}

int func_304(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
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
		if ((iParam9 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam9 == 0)
		{
			if (func_69(iVar1, bParam5, bParam6))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam8 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_91(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && iParam10) && bParam7) && func_99(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iVar1), 0))
								{
									iVar3 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iVar1), 0);
									if (unk_0xAE06B9E39EBDE049(iVar3) && !unk_0xA59F96B50B97E63C(iVar3, 0))
									{
										iVar4 = unk_0x36FE6D3220816ADA(iVar3);
										Var5 = { unk_0x3E4D3CCC220BDFB1(iVar3, 0) };
										fVar8 = unk_0xEF7858F25585F853(iVar3);
										if (func_314(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_305(func_96(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_305(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_313(iParam7, 1008981770))
	{
		func_306(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_306(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_312(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_307(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x0D77CDCF403AEBD2((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x0D77CDCF403AEBD2((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x0D77CDCF403AEBD2((Var6.x - Var3.x));
}

void func_307(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x003F998A2839DD5E(iParam0))
	{
		unk_0x140662B520844E45(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_310(iParam0);
		if (iVar0 != 0)
		{
			func_308(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_308(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_309(iParam0, &Global_1315831);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x003F998A2839DD5E(Global_1315831[iVar0]))
		{
			unk_0x140662B520844E45(Global_1315831[iVar0], &(Global_1315835[iVar0 /*3*/]), &(Global_1315842[iVar0 /*3*/]));
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

void func_309(int iParam0, var uParam1)
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

int func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_311(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_312(var uParam0, struct<3> Param1)
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

float func_313(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_307(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_314(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_305(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	if (Global_1312332 && (iParam4 == joaat("kosatka") || iParam9 == joaat("kosatka")))
	{
		func_306(Param0, fParam3, iParam4, &Global_1707737, &(Global_1707737.f_3), &(Global_1707737.f_6), 1036831949);
		func_306(Param5, fParam8, iParam9, &(Global_1707737.f_7), &(Global_1707737.f_10), &(Global_1707737.f_13), 1036831949);
		if (unk_0xA0AD167E4B39D9A2(Global_1707737, Global_1707737.f_3, Global_1707737.f_6, Global_1707737.f_7, Global_1707737.f_10, Global_1707737.f_13))
		{
			return 1;
		}
	}
	else
	{
		func_307(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
		Var20 = { 0f, Var17.f_1, 0f };
		func_312(&Var20, 0f, 0f, fParam3);
		Var23 = { 0f, Var14.f_1, 0f };
		func_312(&Var23, 0f, 0f, fParam3);
		Var26 = { (unk_0x0D77CDCF403AEBD2((Var17.x - Var14.x)) * 0.5f), 0f, 0f };
		func_312(&Var26, 0f, 0f, fParam3);
		Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
		Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
		Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
		Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
		Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x0D77CDCF403AEBD2((Var17.f_2 - Var14.f_2))));
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_305(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
			{
				return 1;
			}
			iVar0++;
		}
		if (!bParam10)
		{
			if (func_314(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_69(iVar1, 0, 1) && func_69(iParam5, 0, 1))
			{
				if (Global_2417956.f_261[iVar0])
				{
					if (func_305(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_305(func_96(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2417956.f_261[iVar0])
			{
				if (func_305(Global_2417956.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_69(iVar1, 0, 0))
			{
				if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
				{
					if (func_305(func_96(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_316(int iParam0)
{
	if (Global_2405074.f_676 < 20 && unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Global_2405074.f_675) < 30000)
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

void func_317(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_318(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2405074.f_2730[iParam3 /*3*/] };
		Global_2405074.f_2730[iParam3 /*3*/] = { Param0 };
		func_317(Var0, iParam3 + 1);
	}
}

int func_318(struct<3> Param0, float fParam3)
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

int func_319(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return 0;
	}
	else
	{
		func_422();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405074.f_681[iVar7] == -1 && unk_0xAFF96FDC3971E7EA())
			{
				func_306(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = unk_0x0D77CDCF403AEBD2((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0.5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
				}
				Global_2405074.f_681[iVar7] = unk_0xBAEBD0599D45397C(Var0, Var3, fParam6);
				Global_2405074.f_685[iVar7] = unk_0x354AD085195C5FA6();
				Global_2405074.f_693 = Global_2405074.f_681[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_320(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	struct<8> Var0;
	
	*uParam5 = func_321(&Param0, &uParam3, &iParam4);
	Var0 = -1730227041;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	unk_0xB802750B43D4047C(1, &Var0, 8, func_221(1, 1));
}

int func_321(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = unk_0x856D5567211886A2(&cVar0);
	return iVar16;
}

void func_322(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405074.f_1748 > 0)
	{
		iVar0 = 0;
		while (func_371(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_323(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_323(var uParam0, var uParam1, var uParam2)
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
		if (func_367(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_362(uParam0, 1))
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
	if (func_310(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x2B952A1C251A8004(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xB4D59BAA683CC8ED(iVar8))
		{
			unk_0x1EFE169AA25C75A7(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412480.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412480.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xEF445D270DD603D8(iVar8)) || unk_0x061CA1649D051C95(iVar8))
			{
				unk_0x4645311C71338838(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_355(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_352(Var1))
									{
										Var1 = { func_347(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_346(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_342(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_362(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_341(Var1, fVar4, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_367(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_340(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_89(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_89(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_304(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_332(Var1, uParam2->f_54, &fVar25);
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
																													func_331(Var1, fVar4, iVar16);
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
																									if (func_342(Var1, uParam2))
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
							func_329(0, uParam2);
						}
						iVar26 = unk_0x344C570D6F8700DF(0, Global_2412480.f_162);
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
						func_328(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_367(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_362(&Var31, bVar35))
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
				func_324(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_324(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_325(*(uParam0[iVar2 /*4*/]), 5f, unk_0x460153A63B9477BC(), 0, 0))
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

int func_325(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_327(Param0, fParam3, iParam4, iParam5, 0) || func_326(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_326(struct<3> Param0, int iParam3, int iParam4)
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
					if (func_305(Param0, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_69(iVar2, 0, 1) && func_69(iParam3, 0, 1))
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

int func_327(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_69(iVar1, 0, 1) && func_69(iParam4, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_69(iVar1, 0, 1) && func_69(iParam4, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_96(iVar1), Param0) < 1f)
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
				else if (func_69(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_96(iVar1), Param0) < 1f)
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

void func_328(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0x344C570D6F8700DF((1 + iParam0), (40 + iParam0));
		unk_0x1485BFBB1EC6FE22(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_347(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51) };
		if (!func_352(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_329(int iParam0, var uParam1)
{
	if (!func_342(Global_2412480[iParam0 /*3*/], uParam1))
	{
		Global_2412480.f_162 = (Global_2412480.f_162 - 1);
		func_330(iParam0);
		if (Global_2412480.f_162 > Global_2412480.f_163)
		{
			func_329(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_329(iParam0 + 1, uParam1);
	}
}

void func_330(int iParam0)
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

void func_331(struct<3> Param0, float fParam3, int iParam4)
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
			func_331(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_332(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_333(iVar5))
		{
			Var1 = { func_96(iVar5) };
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

int func_333(int iParam0)
{
	if (func_69(iParam0, 0, 1))
	{
		if (!func_338(iParam0))
		{
			if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam0))
			{
				if (!unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
				{
					if (func_335(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_334(unk_0x6CC163E30ECE0790(iParam0), unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
				{
					if (!func_335(unk_0x460153A63B9477BC(), 1, 0))
					{
						if (!func_99(iParam0))
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

int func_334(int iParam0, int iParam1, int iParam2)
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
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_335(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_336(iParam0))
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

bool func_336(int iParam0)
{
	return func_337(iParam0);
}

bool func_337(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

int func_338(int iParam0)
{
	if (func_92(iParam0, 0))
	{
		return 1;
	}
	if (func_339())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_339()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_340(struct<3> Param0, float fParam3, int iParam4)
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
	iVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (unk_0xAE06B9E39EBDE049(iVar1) && !unk_0xA59F96B50B97E63C(iVar1, 0))
	{
		iVar2 = unk_0x36FE6D3220816ADA(iVar1);
		Var3 = { unk_0x3E4D3CCC220BDFB1(iVar1, 0) };
		fVar6 = unk_0xEF7858F25585F853(iVar1);
		if (func_314(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0xC2E2CC6CF95AF8A3(Param0, 30f, 0, iVar0);
	if (unk_0xAE06B9E39EBDE049(iVar1) && !unk_0xA59F96B50B97E63C(iVar1, 0))
	{
		iVar2 = unk_0x36FE6D3220816ADA(iVar1);
		Var3 = { unk_0x3E4D3CCC220BDFB1(iVar1, 0) };
		fVar6 = unk_0xEF7858F25585F853(iVar1);
		if (func_314(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_341(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_315(Param0, fParam3, iParam4, iParam5, iParam6) || func_376(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_342(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_345(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_343(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x3BC3A4E4A1827EEE(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_343(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_344(&Param3, &Param6);
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

void func_344(var uParam0, var uParam1)
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

bool func_345(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_346(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_335(unk_0x460153A63B9477BC(), 1, 0))
	{
		if (Global_4718592.f_25199 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_25199)
			{
				if (Global_4718592.f_25200[iVar0 /*110*/].f_7 != 0)
				{
					if (func_305(Param0, Global_4718592.f_25200[iVar0 /*110*/], Global_4718592.f_25200[iVar0 /*110*/].f_6, Global_4718592.f_25200[iVar0 /*110*/].f_7, fParam3))
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
					if (func_305(Param0, Global_4718592.f_4797[iVar0 /*280*/], Global_4718592.f_4797[iVar0 /*280*/].f_3, Global_4718592.f_4797[iVar0 /*280*/].f_15, 0.5f))
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
					if (func_305(Param0, Global_4718592.f_58908[iVar0 /*339*/], Global_4718592.f_58908[iVar0 /*339*/].f_3, Global_4718592.f_58908[iVar0 /*339*/].f_12, 0.5f))
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
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_233[iVar0]) && !unk_0xA59F96B50B97E63C(Global_969055.f_233[iVar0], 0))
				{
					if (func_305(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_233[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_233[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_233[iVar0]), 0.5f))
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
				if (unk_0xAE06B9E39EBDE049(Global_969055.f_119[iVar0]) && !unk_0xA59F96B50B97E63C(Global_969055.f_119[iVar0], 0))
				{
					if (func_305(Param0, unk_0x3E4D3CCC220BDFB1(Global_969055.f_119[iVar0], 1), unk_0xEF7858F25585F853(Global_969055.f_119[iVar0]), unk_0x36FE6D3220816ADA(Global_969055.f_119[iVar0]), 0.5f))
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

Vector3 func_347(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_350(Param0, *uParam3, Param6))
			{
				*uParam3 = (*uParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x4645311C71338838(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x7F270824E67C2031(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
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
			if (unk_0x442D6659150AF4B3(iParam11) && func_349(Param0))
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
					fVar14 = func_348(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_348(iParam11, 1.5f);
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
		if (!func_350(Param0, *uParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
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
	Var0 = { unk_0x1BAE5C94E38E44FE(Param0, *uParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xE7E6F3B6B48E7F23(Param0, *uParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_348(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_348(iParam11, 1.5f);
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

float func_348(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_307(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_349(struct<3> Param0)
{
	float fVar0;
	
	if (unk_0xE5CC8E2D904E42CE(Param0.x, Param0.f_1, (Param0.f_2 + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_350(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_312(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_351(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_351(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_352(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_354(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412187[iVar1])
	{
		if (func_353(Param0, &(Global_2411484[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412187[8])
	{
		if (func_353(Param0, &(Global_2411484[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_353(struct<3> Param0, var uParam3)
{
	return unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_354(struct<2> Param0, var uParam2)
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

int func_355(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_361(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x658086F2B3C5E4E4(0.01f, 360f);
			func_360(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 0, fVar4);
			if (func_356(Var1, &uVar0) || func_361(Var1))
			{
				Var1 = { *uParam0 };
				func_360(&Var1, Global_2405074.f_588, Global_2405074.f_591, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_356(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_359())
	{
		return 0;
	}
	iVar1 = func_358();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9 == 1)
		{
			if (func_357(Param0, &(Global_2405074.f_365[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_357(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_345(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405074.f_2728) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_343(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x3BC3A4E4A1827EEE(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_358()
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

bool func_359()
{
	return Global_1678288.f_482;
}

void func_360(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_312(&Var0, 0f, 0f, unk_0x658086F2B3C5E4E4(0f, 360f));
		}
		else
		{
			func_312(&Var0, 0f, 0f, fParam7);
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

int func_361(struct<3> Param0)
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

bool func_362(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405074.f_26.f_18)
	{
		switch (Global_2405074.f_26.f_17)
		{
			case 0:
				if (func_345(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_343(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x3BC3A4E4A1827EEE(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_363(*uParam0, Global_2405074.f_26.f_10, Global_2405074.f_26.f_13, Global_2405074.f_26.f_16, Global_2405074.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_363(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_360(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_366(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_364(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x204D69DA02AB1105(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_345(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_343(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x3BC3A4E4A1827EEE(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_364(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_365(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(unk_0xED4B54A984E6E361(Var0.x, Var0.f_1, Var3.x, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_351(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_351(Var6, Var3) >= 0f)
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
		Var6 = { func_365(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_365(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(unk_0xED4B54A984E6E361(Var26.x, Var26.f_1, Var29.x, Var29.f_1)));
		if (!bParam9)
		{
			if (func_351(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_351(Var6, Var29) >= 0f)
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

Vector3 func_365(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

void func_366(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_367(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_415(Param0))
	{
		if (func_370(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_368(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_318(*uParam3, 1056964608))
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
				func_360(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_368(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_356(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_369(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_356(Var2, &uVar1) || func_361(Var2))
			{
				Var2 = { *uParam0 };
				func_369(&Var2, &(Global_2405074.f_365[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_369(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_363(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_363(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_363(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_360(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405074.f_2728) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_366(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_364(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_370(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_357(*uParam0, &(Global_2409990[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_369(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_370(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_369(&Var1, &(Global_2409990[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_371(var uParam0, var uParam1, var uParam2)
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
			if (func_367(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_362(uParam0, 1))
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
			func_374(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_373();
		}
		else
		{
			func_372();
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
							if ((uParam2->f_12 && !func_341(Var3, fVar6, uParam2->f_34, unk_0x460153A63B9477BC(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_367(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_340(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_89(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_89(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_304(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar13 = func_332(Var3, uParam2->f_54, &fVar14);
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
																		func_331(Var3, fVar6, iVar7);
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
					func_329(0, uParam2);
				}
				iVar0 = unk_0x344C570D6F8700DF(0, Global_2412480.f_162);
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
				iVar0 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
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

void func_372()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405074.f_1748)
	{
		Global_2405074.f_2154[iVar0] = iVar0;
		iVar0++;
	}
}

void func_373()
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
		iVar1 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
		iVar2 = unk_0x344C570D6F8700DF(0, Global_2405074.f_1748);
		uVar3 = Global_2405074.f_2154[iVar1];
		Global_2405074.f_2154[iVar1] = Global_2405074.f_2154[iVar2];
		Global_2405074.f_2154[iVar2] = uVar3;
		iVar0++;
	}
}

void func_374(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405074.f_1748)
	{
		uVar1 = func_375(Param0, fVar0, &fVar0);
		Global_2405074.f_2154[iVar2] = uVar1;
		iVar2++;
	}
}

int func_375(struct<3> Param0, float fParam3, float fParam4)
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

int func_376(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_377(Param0, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_314(Param0, fParam3, iParam4, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_69(iVar2, 0, 1) && func_69(iParam5, 0, 1))
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

int func_377(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_313(iParam3, 1008981770);
	fVar1 = func_313(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_378(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2540384.f_921 && func_379(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_379(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam3 = -1;
	iVar2 = func_392(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_380(iVar1))
			{
				if (func_392(Global_1678288.f_496[iVar0 /*3*/], 0) == iVar2)
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

int func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_391(iParam0);
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_264 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
	if (iVar1 != func_101())
	{
		if (Global_1590682[iVar1 /*883*/].f_274.f_264 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_6 == iParam0)
	{
		return 1;
	}
	if (func_390(unk_0x460153A63B9477BC(), 0) || (func_387(unk_0x460153A63B9477BC()) && func_385(func_386(unk_0x460153A63B9477BC())) == 12))
	{
		return 1;
	}
	if (func_384(unk_0x460153A63B9477BC()) || (func_387(unk_0x460153A63B9477BC()) && func_385(func_386(unk_0x460153A63B9477BC())) == 8))
	{
		return 1;
	}
	if (func_383(unk_0x460153A63B9477BC()) || (func_387(unk_0x460153A63B9477BC()) && func_385(func_386(unk_0x460153A63B9477BC())) == 5))
	{
		return 1;
	}
	if (func_382(unk_0x460153A63B9477BC()) || (func_387(unk_0x460153A63B9477BC()) && func_385(func_386(unk_0x460153A63B9477BC())) == 10))
	{
		return 1;
	}
	if (func_381(unk_0x460153A63B9477BC()) || (func_387(unk_0x460153A63B9477BC()) && func_385(func_386(unk_0x460153A63B9477BC())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_383(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_101())
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_101())
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_385(int iParam0)
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

int func_386(int iParam0)
{
	if (iParam0 != func_101() && func_69(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_387(int iParam0)
{
	if (iParam0 != func_101() && func_69(iParam0, 1, 1))
	{
		if (func_389(iParam0) && !func_388(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_388(int iParam0)
{
	if (iParam0 != func_101() && func_69(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_389(int iParam0)
{
	if (iParam0 != func_101() && func_69(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

int func_390(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			uVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x36FE6D3220816ADA(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_101())
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_391(int iParam0)
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

int func_392(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2409990[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_357(Param0, &(Global_2409990[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_393(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2405074.f_45.f_316)
	{
		return;
	}
	if (!func_411())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_410(Param0);
		if (iVar1 > -1)
		{
			func_421();
			switch (iVar1)
			{
				case 0:
					func_409(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_409(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_409(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_409(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_409(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_409(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_409(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_409(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_409(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_409(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_409(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_409(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_409(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_409(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_409(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_409(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_409(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_409(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_409(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_409(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_409(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_409(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_409(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_409(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_409(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_409(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_409(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_409(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_409(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_409(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_409(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_409(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_409(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_409(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_409(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_409(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_409(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_409(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_409(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_409(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_409(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_409(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_409(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_409(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_409(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_409(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_409(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_409(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_409(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_409(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_409(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_409(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_409(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_407(78);
					break;
				
				case 11:
					func_407(79);
					break;
				
				case 12:
					func_407(82);
					break;
				
				case 13:
					func_407(81);
					break;
				
				case 14:
					func_407(73);
					break;
				
				case 15:
					func_409(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_409(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_409(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_409(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_407(75);
					break;
				
				case 17:
					func_407(76);
					break;
				
				case 18:
					func_407(77);
					break;
				
				case 19:
					func_409(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_409(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_409(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_409(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_407(80);
					break;
				
				case 21:
				case 25:
					func_407(87);
					break;
				
				case 22:
				case 26:
					func_407(88);
					break;
				
				case 23:
				case 27:
					func_407(89);
					break;
				
				case 24:
				case 28:
					func_407(90);
					break;
				
				case 29:
				case 30:
					if (func_406(iParam3))
					{
						func_407(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_28);
					}
					break;
				
				case 31:
					func_409(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_409(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_409(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_409(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_409(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_409(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_409(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_409(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_409(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_409(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_409(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_409(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_409(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_409(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_409(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_409(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_409(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_409(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_409(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_409(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_409(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_409(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_409(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_409(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_409(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_409(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_409(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_409(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_409(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_409(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_409(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_409(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_409(-194.254f, -2018.756f, 26.62f, 75f);
					func_409(-186.956f, -2031.369f, 26.62f, 338f);
					func_409(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_409(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_409(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_409(-233.372f, -2089.601f, 26.62f, 304f);
					func_409(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_409(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_409(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_409(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_409(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_409(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_409(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_409(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_409(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_409(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_409(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_409(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_409(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_409(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_409(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_409(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_403(Param0, &iVar2, &iVar6) || (func_379(Param0, &(iVar2[0])) && (unk_0xF9C3E2B9AA9E2294(iParam3) || unk_0x442D6659150AF4B3(iParam3))))
		{
			func_421();
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
				if (!iVar6[iVar0] && func_402(iVar2[iVar0], -1))
				{
					if (func_406(iParam3))
					{
						func_407(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_401(unk_0x9B0761B4C3EB8BC7()) || func_400(unk_0x9B0761B4C3EB8BC7())) && unk_0xF9C3E2B9AA9E2294(iParam3)) || unk_0x442D6659150AF4B3(iParam3))
					{
						if (func_399(iParam3))
						{
							func_398(iVar2[iVar0]);
						}
						else if (func_397(iParam3))
						{
							func_396(iVar2[iVar0]);
							func_398(iVar2[iVar0]);
						}
						else
						{
							func_396(iVar2[iVar0]);
							func_398(iVar2[iVar0]);
						}
					}
					else
					{
						func_394(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_407(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_394(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_409(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_409(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_409(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_409(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_409(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_409(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_409(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_409(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_409(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_409(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_409(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_409(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_409(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_409(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_409(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_409(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_409(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_409(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_409(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_409(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_409(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_409(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_409(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_409(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_409(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_409(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_409(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_409(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_409(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_409(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_409(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_409(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_409(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_409(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_409(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_409(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_409(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_409(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_409(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_409(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_409(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_409(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_409(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_409(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_409(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_409(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_409(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_409(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_409(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_409(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_409(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_409(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_409(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_409(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_409(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_409(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_409(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_409(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_409(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_409(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_409(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_409(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_409(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_409(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_409(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_409(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_409(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_409(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_409(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_409(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_409(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_409(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_409(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_409(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_409(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_409(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_409(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_409(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_409(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_409(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_409(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_409(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_409(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_409(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_409(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_409(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_409(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_409(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_409(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_409(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_409(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_409(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_409(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_409(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_409(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_409(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_409(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_409(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_409(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_409(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_409(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_409(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_409(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_409(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_409(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_409(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_409(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_409(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_409(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_409(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_409(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_409(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_409(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_409(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_409(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_409(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_409(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_409(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_409(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_409(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_409(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_409(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_409(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_409(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_409(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_409(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_409(142.7427f, -2536.147f, 5f, 205.0002f);
			func_409(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_409(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_409(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_409(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_409(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_409(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_409(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_409(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_409(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_409(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_409(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_409(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_409(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_409(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_409(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_409(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_409(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_409(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_409(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_409(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_409(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_409(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_409(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_409(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_409(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_409(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_409(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_409(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_409(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_409(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_409(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_409(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_409(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_409(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_409(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_409(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_409(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_409(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_409(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_409(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_409(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_409(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_409(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_409(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_409(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_409(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_409(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_409(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_409(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_409(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_409(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_409(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_409(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_409(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_409(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_409(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_409(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_409(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_409(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_409(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_409(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_409(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_409(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_409(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_409(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_409(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_409(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_409(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_409(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_409(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_409(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_409(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_409(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_409(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_409(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_409(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_409(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_409(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_409(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_409(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_409(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_409(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_409(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_409(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_409(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_409(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_409(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_409(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_409(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_409(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_409(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_409(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_409(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_409(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_409(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_409(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_409(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_409(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_409(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_409(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_409(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_409(-1823.414f, 3092.762f, 31.843f, 330f);
			func_409(-1819.045f, 3100.435f, 31.845f, 330f);
			func_409(-1833.313f, 3075.722f, 31.838f, 330f);
			func_409(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_409(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_409(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_409(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_409(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_409(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_409(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_409(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_409(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_409(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_409(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_409(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_409(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_409(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_409(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_409(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_409(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_409(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_409(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_409(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_409(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_409(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_409(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_409(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_409(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_409(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_409(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_409(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_409(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_409(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_409(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_409(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_409(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_409(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_409(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_409(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_409(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_409(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_409(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_409(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_409(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_409(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_409(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_409(1231.279f, 2910.881f, 43.3085f, 12f);
				func_409(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_409(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_409(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_409(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_409(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_409(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_409(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_409(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_409(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_409(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_409(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_409(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_409(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_409(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_409(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_409(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_409(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_409(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_409(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_409(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_409(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_409(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_409(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_409(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_409(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_409(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_409(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_409(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_409(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_409(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_409(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_409(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_409(3.855f, 2672.388f, 78.437f, 319.2f);
				func_409(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_409(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_409(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_409(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_409(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_409(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_409(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_409(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_409(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_409(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_409(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_409(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_409(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_409(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_409(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_409(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_409(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_409(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_409(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_409(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_409(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_409(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_409(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_409(102.851f, 2688.009f, 51.732f, 224f);
				func_409(109.815f, 2681.012f, 51.112f, 224f);
				func_409(116.355f, 2674.26f, 50.529f, 224f);
				func_409(125.138f, 2665.98f, 49.8f, 224f);
				func_409(132.228f, 2659.865f, 49.26f, 228.4f);
				func_409(139.354f, 2653.536f, 48.737f, 228.4f);
				func_409(88.512f, 2702.995f, 53.042f, 224.199f);
				func_409(81.565f, 2710.357f, 53.67f, 224.199f);
				func_409(75.156f, 2716.981f, 54.223f, 224.199f);
				func_409(68.442f, 2723.806f, 54.775f, 226.199f);
				func_409(61.449f, 2730.606f, 55.308f, 226.199f);
				func_409(53.702f, 2738.167f, 55.855f, 226.199f);
				func_409(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_409(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_409(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_409(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_409(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_409(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_409(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_409(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_409(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_409(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_409(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_409(2714.633f, 3918.283f, 42.938f, 16f);
				func_409(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_409(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_409(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_409(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_409(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_409(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_409(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_409(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_409(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_409(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_409(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_409(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_409(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_409(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_409(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_409(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_409(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_409(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_409(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_409(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_409(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_409(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_409(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_409(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_409(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_409(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_409(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_409(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_409(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_409(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_409(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_409(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_409(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_409(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_409(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_409(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_409(3374.923f, 5520.177f, 20.3207f, 86f);
				func_409(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_409(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_409(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_409(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_409(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_409(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_409(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_409(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_409(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_409(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_409(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_409(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_409(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_409(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_409(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_409(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_409(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_409(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_409(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_409(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_409(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_409(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_409(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_409(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_409(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_409(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(43.848f, 6845.657f, 13.379f, 247.2f);
				func_409(50.379f, 6861.146f, 15.105f, 247.2f);
				func_409(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_409(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_409(55.806f, 6875.081f, 14.824f, 247.2f);
				func_409(11.616f, 6877.079f, 11.466f, 247.2f);
				func_409(18.954f, 6891.633f, 11.37f, 247.2f);
				func_409(26.68f, 6907.587f, 11.869f, 247.2f);
				func_409(7.479f, 6907.895f, 12.024f, 247.2f);
				func_409(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_409(35.591f, 6836.608f, 13.288f, 274.4f);
				func_409(36.028f, 6830.135f, 13.801f, 270.8f);
				func_409(35.114f, 6823.884f, 14.527f, 260.8f);
				func_409(48.779f, 6838.693f, 14.337f, 273.6f);
				func_409(56.738f, 6821.8f, 15.244f, 244.8f);
				func_409(48.377f, 6825.895f, 14.656f, 249.8f);
				func_409(49.11f, 6831.439f, 13.991f, 274.8f);
				func_409(53.544f, 6818.275f, 16.342f, 243f);
				func_409(46.162f, 6821.945f, 15.483f, 249.8f);
				func_409(60.129f, 6836.8f, 15.605f, 269.6f);
				func_409(40.88f, 6802.952f, 20.113f, 242.6f);
				func_409(48.203f, 6799.134f, 20.897f, 244.4f);
				func_409(70.449f, 6809.271f, 16.846f, 243f);
				func_409(61.436f, 6814.266f, 16.71f, 244.2f);
				func_409(56.142f, 6793.458f, 19.806f, 242.6f);
				func_409(65.759f, 6791.12f, 18.433f, 276.4f);
				func_409(77.305f, 6805.391f, 18.558f, 245.6f);
				func_409(85.893f, 6800.243f, 18.535f, 249.8f);
				func_409(56.85f, 6780.582f, 18.822f, 297.999f);
				func_409(65.636f, 6784.669f, 18.789f, 293.799f);
				func_409(74.121f, 6788.498f, 18.739f, 293.799f);
				func_409(97.779f, 6796.32f, 19.02f, 276.799f);
				func_409(106.76f, 6796.983f, 18.914f, 272.599f);
				func_409(112.387f, 6802.858f, 18.994f, 210.599f);
				func_409(117.58f, 6802.644f, 18.663f, 209.399f);
				func_409(122.481f, 6802.693f, 18.468f, 209.399f);
				func_409(127.182f, 6802.686f, 18.218f, 209.399f);
				func_409(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_409(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_409(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_409(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_409(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_409(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_409(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_409(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_409(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_409(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_409(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_409(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_409(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_409(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_409(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_409(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_409(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_409(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_409(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_409(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_409(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_409(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_409(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_409(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_409(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_409(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_409(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_409(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_409(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_409(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_409(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_409(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_409(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_409(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_409(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_409(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_409(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_409(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_409(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_409(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_409(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_409(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_409(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_409(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_409(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_409(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_409(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_409(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_409(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_409(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_409(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_409(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_409(30.027f, 3292.351f, 38.604f, 140.199f);
				func_409(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_409(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_409(23.897f, 3283.152f, 39.381f, 145.399f);
				func_409(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_409(18.723f, 3274.025f, 40.054f, 155.799f);
				func_409(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_409(36.958f, 3298.847f, 38.001f, 127.799f);
				func_409(54.165f, 3311.582f, 36.517f, 303.799f);
				func_409(61.607f, 3317.105f, 35.916f, 306.999f);
				func_409(68.994f, 3323.129f, 35.364f, 308.199f);
				func_409(76.266f, 3329.467f, 34.805f, 311.399f);
				func_409(82.757f, 3335.915f, 34.344f, 316.598f);
				func_409(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_409(14.664f, 3263.688f, 40.931f, 160.398f);
				func_409(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_409(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_409(89.575f, 3343.311f, 33.932f, 318.398f);
				func_409(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_409(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_409(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_409(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_409(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_409(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_409(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_409(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_409(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_409(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_409(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_409(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_409(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_409(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_409(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_409(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_409(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_409(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_409(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_409(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_409(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_409(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_409(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_409(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_409(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_409(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_409(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_409(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_409(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_409(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_409(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_409(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_409(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_409(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_409(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_409(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_409(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_409(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_409(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_409(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_409(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_409(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_58 == 0)
			{
				func_409(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_409(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_409(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_409(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_409(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_409(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_409(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_409(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_409(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_409(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_409(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_409(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_409(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_409(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_409(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_409(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_409(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_409(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_409(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_409(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_409(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_409(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_409(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_409(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_409(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_409(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_409(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_409(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_409(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_409(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_409(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_409(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_409(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_409(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_409(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_409(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_409(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_409(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_395(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_395(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_395(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_395(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_395(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_395(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_395(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_395(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_395(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_395(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_395(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_395(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_395(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_395(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_395(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_395(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_395(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_395(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_395(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_395(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_395(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_395(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_395(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_395(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_395(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_395(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_395(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_395(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_395(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_395(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_395(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_395(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_395(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_307(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { unk_0x1BAE5C94E38E44FE(Param0, fParam3, Var7) };
		func_409(Var10, fParam3);
	}
	else
	{
		func_409(Param0, fParam3);
	}
}

void func_396(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_409(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_409(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_409(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_409(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_409(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_409(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_409(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_409(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_409(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_409(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_409(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_409(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_409(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_409(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_409(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_409(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_409(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_409(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_409(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_409(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_409(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_409(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_409(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_409(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_409(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_409(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_409(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_409(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_409(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_409(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_409(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_409(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_409(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_409(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_409(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_409(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_409(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_409(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_409(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_409(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_409(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_409(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_409(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_409(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_409(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_409(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_409(-1356.991f, -3242.228f, 12.945f, 330f);
			func_409(-1369.313f, -3234.758f, 12.945f, 330f);
			func_409(-1381.751f, -3227.408f, 12.945f, 330f);
			func_409(-1394.302f, -3220.021f, 12.945f, 330f);
			func_409(-1354.339f, -3223.129f, 12.945f, 330f);
			func_409(-1366.302f, -3215.809f, 12.945f, 330f);
			func_409(-1378.492f, -3208.645f, 12.945f, 330f);
			func_409(-1350.322f, -3203.405f, 12.945f, 330f);
			func_409(-1362.684f, -3196.451f, 12.945f, 330f);
			func_409(-1347.089f, -3182.69f, 12.945f, 330f);
			func_409(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_409(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_409(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_409(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_409(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_409(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_409(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_409(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_409(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_409(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_409(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_409(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_409(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_409(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_409(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_409(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_409(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_409(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_409(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_409(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_409(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_409(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_409(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_409(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_409(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_409(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_409(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_409(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_409(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_409(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_409(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_409(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_409(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_409(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_409(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_409(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_409(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_409(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_409(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_409(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_409(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_409(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_409(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_409(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_409(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_409(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_409(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_409(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_409(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_409(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_409(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_409(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_409(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_409(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_409(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_409(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_409(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_409(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_409(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_409(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_409(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_409(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_409(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_409(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_409(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_409(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_409(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_409(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_409(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_409(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_409(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_409(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_409(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_409(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_409(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_409(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_409(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_409(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_409(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_409(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_409(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_409(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_409(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_409(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_409(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_409(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_409(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_409(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_409(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_409(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_409(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_409(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_409(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_409(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_409(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_409(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_409(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_409(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_409(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_409(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_409(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_409(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_409(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_409(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_409(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_409(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_409(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_409(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_409(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_409(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_409(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_409(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_409(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_409(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_409(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_409(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_409(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_409(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_409(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_409(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_409(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_409(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_409(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_409(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_409(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_409(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_409(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_409(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_409(-2484.323f, 3249.294f, 31.828f, 151f);
			func_409(-2495.313f, 3255.746f, 31.828f, 151f);
			func_409(-2472.644f, 3242.684f, 31.828f, 151f);
			func_409(-2506.313f, 3262.27f, 31.823f, 151f);
			func_409(-2461.494f, 3235.93f, 31.828f, 151f);
			func_409(-2505.602f, 3238.049f, 31.828f, 151f);
			func_409(-2481.937f, 3224.8f, 31.828f, 151f);
			func_409(-2516.813f, 3244.266f, 31.823f, 151f);
			func_409(-2470.03f, 3217.899f, 31.828f, 151f);
			func_409(-2493.933f, 3231.308f, 31.828f, 151f);
			func_409(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_409(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_409(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_409(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_409(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_409(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_409(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_409(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_409(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_409(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_409(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_409(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_409(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_409(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_409(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_409(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_409(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_409(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_409(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_409(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_409(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_409(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_409(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_409(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_409(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_409(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_409(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_409(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_409(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_409(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_409(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_409(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_409(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_409(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_409(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_409(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_397(int iParam0)
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

void func_398(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_409(-947.712f, -3367.704f, 12.944f, 60f);
			func_409(-904.692f, -3293.072f, 12.944f, 60f);
			func_409(-863.71f, -3221.978f, 12.944f, 60f);
			func_409(-966.418f, -3162.773f, 12.944f, 60f);
			func_409(-1007.435f, -3233.93f, 12.944f, 60f);
			func_409(-1050.455f, -3308.559f, 12.944f, 60f);
			func_409(-1145.673f, -3253.456f, 12.944f, 60f);
			func_409(-1098.386f, -3181.428f, 12.944f, 60f);
			func_409(-1060.474f, -3108.903f, 12.944f, 60f);
			func_409(-1155.391f, -3053.632f, 12.944f, 60f);
			func_409(-1196.114f, -3125.146f, 12.948f, 60f);
			func_409(-1235.552f, -3201.86f, 12.944f, 60f);
			func_409(-1344.446f, -3139.177f, 12.944f, 60f);
			func_409(-1301.308f, -3064.341f, 12.944f, 60f);
			func_409(-1260.135f, -2992.912f, 12.944f, 60f);
			func_409(-1364.244f, -2932.9f, 12.98f, 60f);
			func_409(-1405.284f, -3004.108f, 12.96f, 60f);
			func_409(-1448.29f, -3078.72f, 12.95f, 60f);
			func_409(-1535.732f, -3028.318f, 12.945f, 60f);
			func_409(-1492.639f, -2953.558f, 12.945f, 60f);
			func_409(-1451.506f, -2882.2f, 12.944f, 60f);
			func_409(-1553.927f, -2823.12f, 13.002f, 60f);
			func_409(-1595.097f, -2894.571f, 12.944f, 60f);
			func_409(-1637.836f, -2968.714f, 12.945f, 60f);
			func_409(-1740.971f, -2911.484f, 12.944f, 330f);
			func_409(-1696.293f, -2833.978f, 12.944f, 330f);
			func_409(-1651.502f, -2756.273f, 12.945f, 330f);
			func_409(-1588.258f, -2647.575f, 12.944f, 330f);
			func_409(-1536.862f, -2681.378f, 12.945f, 330f);
			func_409(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_409(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_409(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_409(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_409(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_409(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_409(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_409(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_409(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_409(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_409(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_409(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_409(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_409(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_409(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_409(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_409(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_409(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_409(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_409(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_409(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_409(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_409(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_409(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_409(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_409(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_409(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_409(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_409(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_409(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_409(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_399(int iParam0)
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

int func_400(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_402(int iParam0, int iParam1)
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

int func_403(struct<2> Param0, var uParam2, var uParam3, var uParam4)
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
			if (func_380(iVar0))
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
			if (func_404(iVar0))
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
			fVar4 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1678288.f_496[iVar0 /*3*/], Global_1678288.f_496[iVar0 /*3*/].f_1, 0f);
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

int func_404(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_405(iParam0);
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_271 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
	if (iVar1 != func_101())
	{
		if (Global_1590682[iVar1 /*883*/].f_274.f_271 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_405(int iParam0)
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

int func_406(int iParam0)
{
	if ((unk_0x97AFEF6099069369(iParam0) || unk_0x0CE6C9C2E6F95026(iParam0)) || unk_0x72B9CC2155AEDF58(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_407(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_409(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_409(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_409(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_409(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("MPSV_LP0_31"):
			func_409(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_409(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_409(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_409(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_409(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_409(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_409(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_409(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_409(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_409(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_409(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_409(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_409(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_409(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_409(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_409(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_409(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_409(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_409(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_409(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_409(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_409(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_409(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_409(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_409(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_409(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_409(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_409(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_409(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_409(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_409(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_409(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_408())
			{
				func_409(-1608.297f, -556.875f, 33.406f, 310f);
				func_409(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_409(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_409(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_409(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_409(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_409(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_409(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_409(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_409(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_409(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_409(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_408())
			{
				func_409(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_409(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_409(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_409(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_409(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_409(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_409(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_409(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_409(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_409(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_409(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_409(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_408())
			{
				func_409(-102.737f, -597.379f, 35.053f, 160.999f);
				func_409(-97.793f, -589.568f, 35.082f, 134.799f);
				func_409(-110.357f, -619.402f, 35.055f, 160.599f);
				func_409(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_409(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_409(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_409(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_409(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_409(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_409(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_409(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_409(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_408())
			{
				func_409(-59.349f, -779.238f, 43.134f, 228.398f);
				func_409(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_409(-65.212f, -772.66f, 43.151f, 219.398f);
				func_409(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_409(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_409(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_409(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_409(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_409(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_409(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_409(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_409(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_409(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_409(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_409(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_409(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_409(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_409(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_409(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_409(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_409(-1464.5f, -927.9f, 9f, 296.7991f);
			func_409(-1466f, -926.1f, 9f, 296.7991f);
			func_409(-1467.9f, -924.7f, 9f, 296.7991f);
			func_409(-1469.7f, -923.7f, 9f, 296.7991f);
			func_409(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_409(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_409(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_409(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_409(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_409(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_409(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_409(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_409(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_409(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_409(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_409(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_409(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_409(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_409(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_409(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_409(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_409(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_409(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_409(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_409(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_409(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_409(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_409(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_409(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_409(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_409(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_409(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_409(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_409(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_409(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_409(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_409(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_409(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_409(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_409(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_409(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_409(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_409(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_409(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_409(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_409(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_409(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_409(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_409(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_409(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_409(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_409(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_409(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_409(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_409(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_409(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_409(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_409(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_409(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_409(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_409(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_409(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_409(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_409(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_409(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_409(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_409(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_409(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_409(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_409(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_409(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_409(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_409(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_409(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_409(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_409(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_409(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_409(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_409(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_409(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_409(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_409(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_409(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_409(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_409(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_409(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_409(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_409(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_408()
{
	return Global_2451787.f_16;
}

void func_409(struct<3> Param0, float fParam3)
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

int func_410(struct<3> Param0)
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
		if (func_353(Param0, &(Global_2412241[iVar0 /*7*/])))
		{
			Global_2405074.f_2900 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405074.f_2900 = -1;
	return -1;
}

int func_411()
{
	if (unk_0xCE990E643CD9D0E5(Global_4456448.f_13, 0) && !Global_2452679.f_6329)
	{
		return 0;
	}
	return 0;
}

int func_412(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
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
			if (func_380(iVar0))
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
		fVar2 = SYSTEM::VDIST(Param0, Param0.f_1, 0f, Global_1678288.f_496[iVar0 /*3*/], Global_1678288.f_496[iVar0 /*3*/].f_1, 0f);
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

void func_413()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405074.f_2730[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_414(var uParam0, bool bParam1)
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
		if (func_353(Var1, &(Global_2412197[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_364(&Var1, Global_2412197[iVar0 /*7*/], Global_2412197[iVar0 /*7*/].f_3, Global_2412197[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_415(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405074.f_512 && !Global_2405074.f_513)
	{
		if (!Global_2405074.f_45.f_314)
		{
			if (!func_419(unk_0x460153A63B9477BC(), 1))
			{
				return 1;
			}
			if (!func_418(Param0, 1008981770))
			{
				if (!func_370(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_370(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_417(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_416(&(Global_2405074.f_45[iVar0 /*12*/])) };
					if (!func_370(&Var1, 0, 0, 0, 1))
					{
						if (!func_370(&Param0, 0, 0, 0, 1))
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

Vector3 func_416(var uParam0)
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

int func_417(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_357(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_418(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405074.f_45[iVar0 /*12*/].f_9)
		{
			if (func_357(Param0, &(Global_2405074.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_419(int iParam0, bool bParam1)
{
	if (func_228() != 0)
	{
		return func_420(iParam0) != 0;
	}
	return func_335(iParam0, bParam1, 0);
}

int func_420(int iParam0)
{
	if (func_69(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

void func_421()
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

void func_422()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7FD2BDF03806FD9D(Global_2405074.f_685[iVar0]))
		{
			if (unk_0x354AD085195C5FA6() == Global_2405074.f_685[iVar0])
			{
				if (!Global_2405074.f_681[iVar0] == -1)
				{
					if (unk_0xFE7504CE3CC54D0B(Global_2405074.f_681[iVar0]))
					{
						unk_0xDF61EC05AF188A01(Global_2405074.f_681[iVar0]);
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

int func_423(bool bParam0)
{
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_424(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

int func_425(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	
	if (func_431(iParam0, &Var1, &Var4, &uVar10, &iVar0))
	{
		if (unk_0x4F0750476DF2706C(Var4, Var1, uVar10, &Var7))
		{
			if (func_427(iParam0, Var7, Var4, iVar0))
			{
				Local_3649.f_493 = { Var7 };
				Local_3649.f_499 = func_426(Var7, Var4);
				return 1;
			}
		}
	}
	return 0;
}

float func_426(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x9075769DD4F148B7((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_427(int iParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!func_428(iParam0, Param1, Param4, iParam7))
	{
		return 0;
	}
	if (!func_89(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_428(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::VDIST(Param1, Param4);
	if (fVar0 > func_430())
	{
		return 0;
	}
	fVar1 = SYSTEM::VDIST(Param1, func_197());
	if (fVar1 < func_165())
	{
		return 0;
	}
	if (unk_0xAE06B9E39EBDE049(iParam7))
	{
		Var2 = { unk_0x71C23069714A27B9(iParam7, Param1) };
		if (unk_0x0D77CDCF403AEBD2(Var2.x) > func_429())
		{
			return 0;
		}
	}
	return 1;
}

float func_429()
{
	if (Local_1202.f_341.f_6 != 0)
	{
		Call_Loc(Local_1202.f_341.f_6);
		return StackVal;
	}
	return 100f;
}

float func_430()
{
	if (Local_1202.f_341.f_5 != 0)
	{
		Call_Loc(Local_1202.f_341.f_5);
		return StackVal;
	}
	return Local_221.f_583.f_5;
}

int func_431(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_150(iParam0, 15))
	{
		*uParam4 = func_206(iParam0);
		if (unk_0xAE06B9E39EBDE049(*uParam4))
		{
			*uParam1 = { unk_0x2E6A35AC161797A7(*uParam4) };
			*uParam2 = { unk_0x3E4D3CCC220BDFB1(*uParam4, 0) };
		}
		else
		{
			return 0;
		}
	}
	else
	{
		*uParam1 = { Local_221.f_351.f_1[iParam0 /*13*/].f_3 };
		*uParam2 = { Local_221.f_351.f_1[iParam0 /*13*/].f_3 };
	}
	if (iLocal_3592 > 0)
	{
		func_432(uParam1);
	}
	if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 160f;
	}
	else
	{
		*uParam3 = 80f;
	}
	return 1;
}

void func_432(var uParam0)
{
	if (iLocal_3592 < 5)
	{
		switch (iLocal_3592)
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
		iLocal_3592 = 0;
	}
	iLocal_3592++;
}

int func_433(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (func_435(iParam0, &Var4, &Var1, &iVar0))
	{
		if (func_434(iParam0, Var4, Var1, iVar0))
		{
			Local_3649.f_493 = { Var4 };
			Local_3649.f_499 = func_426(Var4, Var1);
			return 1;
		}
	}
	return 0;
}

int func_434(int iParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	float fVar0;
	
	if (!func_428(iParam0, Param1, Param4, iParam7))
	{
		return 0;
	}
	if (!func_89(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (unk_0xE5CC8E2D904E42CE(Param1, &fVar0, 1, 0))
	{
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = unk_0xDCF41A542B928421(Param1.x, Param1.f_1);
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_435(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_150(iParam0, 15))
	{
		*uParam3 = func_206(iParam0);
		if (!unk_0xAE06B9E39EBDE049(*uParam3))
		{
			return 0;
		}
		*uParam2 = { unk_0x3E4D3CCC220BDFB1(*uParam3, 0) };
		fVar0 = (func_430() / 2f);
	}
	else
	{
		*uParam2 = { Local_221.f_351.f_1[iParam0 /*13*/].f_3 };
	}
	*uParam1 = { func_437(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_3592) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_3592) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_436());
	iLocal_3592++;
	if (iLocal_3592 >= 12)
	{
		iLocal_3592 = 0;
	}
	return 1;
}

float func_436()
{
	return 60f;
}

Vector3 func_437(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

int func_438(int iParam0)
{
	if (!func_136(1, iParam0))
	{
		return 0;
	}
	return 1;
}

int func_439(int iParam0)
{
	if (func_150(iParam0, 15))
	{
		if (!func_11(&(Local_3649.f_399.f_5), func_140(), 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_440(int iParam0)
{
	if (func_150(iParam0, 15))
	{
		return func_142();
	}
	if (Local_1202.f_243.f_17 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_243.f_17);
		return StackVal;
	}
	return 1;
}

void func_441(int iParam0)
{
	if (Local_221.f_351.f_1[iParam0 /*13*/].f_8 == -1)
	{
		return;
	}
	if (func_447(iParam0) > 2 && func_447(iParam0) < 5)
	{
		if (func_442(iParam0))
		{
			func_193(iParam0, 2);
		}
		else
		{
			func_192(iParam0, 2);
		}
	}
}

bool func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x3D70CCF2C9B362CD(Local_3649.f_327[iParam0 /*6*/]))
	{
		iVar0 = unk_0x770D3B2B4702434A(Local_3649.f_327[iParam0 /*6*/]);
		iVar1 = func_443(iVar0);
		if (iVar1 != func_101() && unk_0xFA298F06F67BBD4A(iVar1))
		{
			iVar2 = unk_0x653D75F1BBF766B3(iVar1);
			return func_151(iVar2, 2);
		}
	}
	return func_150(iParam0, 2);
}

int func_443(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0) && !unk_0xB064AF9925F5537B(iParam0, -1, 0))
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, -1, 0);
		if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
		{
			iVar1 = unk_0xE4400E48E081F17A(iVar0);
			if (iVar1 != func_101() && func_69(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return func_101();
}

void func_444(int iParam0, int iParam1)
{
	if (func_150(iParam0, 15))
	{
		*iParam1 = 0;
	}
}

int func_445(int iParam0, int iParam1)
{
	var uVar0;
	
	if (func_150(iParam0, 15))
	{
		if (func_52(iParam0))
		{
			uVar0 = func_53(1, iParam0);
			return 1;
		}
		return 0;
	}
	return 0;
}

void func_446(int iParam0, int iParam1)
{
	Local_3649.f_327[iParam0 /*6*/].f_1 = iParam1;
}

int func_447(int iParam0)
{
	return Local_3649.f_327[iParam0 /*6*/].f_1;
}

int func_448(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_61())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_18)
	{
		if (iParam0 == func_59(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_449(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x99E61B3887CC8E71(iParam0) + 1;
	if (iParam4 || !unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_450(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xAE06B9E39EBDE049(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x9B0761B4C3EB8BC7())
				{
				}
				else if (bParam2)
				{
					if (unk_0xD0390A93AF3907B8(iVar2))
					{
						iVar3 = unk_0xE4400E48E081F17A(iVar2);
						if (((!unk_0x5AEB5DDFFAD43CA5(iVar2) && iVar3 != func_101()) && func_69(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x1A3D0DF92BF7D8C4(unk_0xE4400E48E081F17A(iVar2)) == 0)
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
				else if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_450(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xB064AF9925F5537B(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xAE06B9E39EBDE049(iVar0) && !unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			iVar0 = unk_0x37022B7FE1589189(iParam0, iParam1);
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x16BC17A8EDC701A2(iVar0, 451360105) == 1 || unk_0x16BC17A8EDC701A2(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(unk_0x3E4D3CCC220BDFB1(iParam0, 0), unk_0x3E4D3CCC220BDFB1(iVar0, 0)) < 10f)
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

void func_451()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		func_471(iVar0);
		func_467(iVar0);
		iVar0++;
	}
	func_462();
	func_452();
}

void func_452()
{
	struct<20> Var0;
	
	if (!func_3(8))
	{
		if (func_7() > 0 && Local_3317 > 0)
		{
			if (func_1189(53))
			{
				Var0 = { func_459(func_461()) };
				if (func_453(func_461(), Local_3649.f_515, &Var0))
				{
					func_14(8);
				}
			}
		}
	}
}

int func_453(int iParam0, struct<2> Param1, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_458(Param1))
	{
		return 0;
	}
	if (iParam0 == func_101())
	{
		return 0;
	}
	if (*uParam3 > 18)
	{
		return 0;
	}
	iVar0 = func_457(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam3)
		{
			if ((*uParam3)[iVar1] != 0)
			{
				iVar2 = func_456(iVar0, (*uParam3)[iVar1]);
				if (iVar2 != -1)
				{
					if (!func_455(Param1, Global_2419386.f_199.f_674[iVar0 /*57*/].f_20[iVar2 /*2*/]))
					{
						if (!func_13(&(Global_1683921.f_4771)) || func_11(&(Global_1683921.f_4771), 10000, 0))
						{
							func_16(&(Global_1683921.f_4771), 0, 0);
							func_454(iParam0, Param1, uParam3);
						}
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_454(int iParam0, struct<2> Param1, var uParam3)
{
	struct<25> Var0;
	int iVar25;
	int iVar26;
	
	if (!func_458(Param1))
	{
		return;
	}
	if (*uParam3 > 18)
	{
		return;
	}
	if (*uParam3 <= 0)
	{
		return;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1000;
	Var0.f_5 = 18;
	Var0 = 474621183;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	Var0.f_3 = { Param1 };
	Var0.f_24 = *uParam3;
	iVar25 = 0;
	while (iVar25 < *uParam3)
	{
		Var0.f_5[iVar25] = (*uParam3)[iVar25];
		iVar25++;
	}
	iVar26 = func_221(1, 1);
	if (!iVar26 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 25, iVar26);
	}
}

int func_455(struct<2> Param0, struct<2> Param2)
{
	if (!func_458(Param0))
	{
		return 0;
	}
	if (Param0 == Param2 && Param0.f_1 == Param2.f_1)
	{
		return 1;
	}
	return 0;
}

int func_456(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2419386.f_199.f_674[iParam0 /*57*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_457(int iParam0)
{
	int iVar0;
	
	if (func_69(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2419386.f_199.f_674[iVar0 /*57*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_458(struct<2> Param0)
{
	if (Param0 == -1 || Param0.f_1 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<20> func_459(int iParam0)
{
	struct<20> Var0;
	int iVar20;
	int iVar21;
	
	Var0 = 18;
	Var0.f_19 = 0;
	if (!func_460(iParam0))
	{
		return Var0;
	}
	if (func_69(iParam0, 0, 1))
	{
		iVar20 = 0;
		while (iVar20 < 10)
		{
			if (Global_2419386.f_199.f_674[iVar20 /*57*/] == iParam0)
			{
				iVar21 = 0;
				while (iVar21 < 18)
				{
					if (Global_2419386.f_199.f_674[iVar20 /*57*/].f_1[iVar21] != 0 && !func_458(Global_2419386.f_199.f_674[iVar20 /*57*/].f_20[iVar21 /*2*/]))
					{
						Var0[Var0.f_19] = Global_2419386.f_199.f_674[iVar20 /*57*/].f_1[iVar21];
						Var0.f_19++;
					}
					iVar21++;
				}
			}
			else
			{
				iVar20++;
			}
		}
	}
	return Var0;
}

int func_460(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_101())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_461()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

void func_462()
{
	if (Local_221.f_18 <= 0)
	{
		return;
	}
	if (!func_466())
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
	return func_29(0);
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
	if (func_181(&(Local_3649.f_2.f_14[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_469(int iParam0)
{
	int iVar0;
	
	if (func_470(iParam0))
	{
		iVar0 = func_59(iParam0);
		return (Local_3649.f_327[iVar0 /*6*/].f_1 == 5 || func_6(iParam0, 0));
	}
	return 1;
}

bool func_470(int iParam0)
{
	return (func_60(iParam0) && func_61() == 2);
}

void func_471(int iParam0)
{
	if (Local_221.f_18.f_5[iParam0 /*12*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_75.f_17);
		if (StackVal)
		{
			if (!func_6(iParam0, 6))
			{
				if (func_45(Local_221.f_18.f_5[iParam0 /*12*/].f_2))
				{
					if (unk_0x2CD491285F9C0C53(1))
					{
						if (func_472(iParam0))
						{
							func_58(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

int func_472(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	if (!unk_0xF7DE07F319727299(Local_3649.f_2[iParam0]))
	{
		Var0 = { func_493(iParam0) };
		fVar3 = Local_221.f_18.f_5[iParam0 /*12*/].f_6;
		Var4 = { Local_221.f_18.f_5[iParam0 /*12*/].f_7 };
		if (func_38(Var0))
		{
			return 0;
		}
		Local_3649.f_2[iParam0] = unk_0x22CA0B37B74BB381(unk_0xDFCBAFA6018378B2(joaat("PICKUP_PORTABLE_CRATE_UNFIXED_INAIRVEHICLE_WITH_PASSENGERS"), Var0, !func_492(iParam0, 0), Local_221.f_18.f_5[iParam0 /*12*/].f_2));
		unk_0xE922BAA80E8F9324(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), fVar3);
		if (!func_38(Var4))
		{
			unk_0xC82085403E46A869(unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam0]), Var4, 2, 1);
		}
		func_487(iParam0, Var0);
		if (Local_1202.f_75.f_23 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1202.f_75.f_23);
		}
	}
	if (Local_3649.f_2.f_56 != func_486())
	{
		Local_3649.f_2.f_56 = func_486();
	}
	if (unk_0xF7DE07F319727299(Local_3649.f_2[iParam0]))
	{
		if (func_474(&(Local_3649.f_2.f_42[iParam0 /*2*/]), func_485(iParam0), iParam0, Local_3649.f_2.f_56, Local_3649.f_515, func_484(iParam0), func_483(iParam0)))
		{
			func_473(unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam0]), Local_3649.f_2.f_42[iParam0 /*2*/].f_1);
			Local_3649.f_2.f_37[iParam0] = unk_0x5A002C4821A13338();
			return 1;
		}
	}
	return 0;
}

void func_473(int iParam0, int iParam1)
{
	if (unk_0x6844807B17DC2DFC("FMDeliverableID", 3))
	{
		unk_0x00AF6A2AAFB41525(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_474(var uParam0, int iParam1, int iParam2, var uParam3, struct<2> Param4, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	bool bVar4;
	
	if (iParam1 == func_101())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1683921.f_4773, 31))
	{
		iVar1 = (Global_1683921.f_4774 - 1);
		if (unk_0xD3137A576BE9EC5C() == iVar1)
		{
			return 0;
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_1683921.f_4773), 31);
		}
	}
	if (Global_1683921.f_4774 == 0)
	{
		Global_1683921.f_4774 = unk_0xD3137A576BE9EC5C();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1683921.f_4775[iVar0] = -1;
			iVar2 = func_481(unk_0x460153A63B9477BC(), iVar0);
			if (func_480(iVar2))
			{
				unk_0xBE20AB8238688965(&(Global_1683921.f_4773), iVar0);
			}
			iVar0++;
		}
	}
	uVar3 = func_479(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar3;
	if (func_477(*uParam0))
	{
		if (Global_1683921.f_4774 == unk_0xD3137A576BE9EC5C())
		{
			unk_0xBE20AB8238688965(&(Global_1683921.f_4773), iParam2);
			unk_0xBE20AB8238688965(&(Global_1683921.f_4773), 31);
			uParam0->f_1 = -1;
			Global_1683921.f_4774++;
			return 0;
		}
		else
		{
			func_476(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1683921.f_4775[iParam2] == -1)
	{
		Global_1683921.f_4775[iParam2] = uVar3;
	}
	if (!func_13(&(Global_1683921.f_4600)) || func_11(&(Global_1683921.f_4600), 1500, 0))
	{
		bVar4 = true;
		func_16(&(Global_1683921.f_4600), 0, 0);
	}
	if (!bVar4)
	{
		if (unk_0xD3137A576BE9EC5C() == Global_1683921.f_4602)
		{
			bVar4 = true;
		}
	}
	if (bVar4)
	{
		func_475(*uParam0, uParam3, uParam6, Param4, uParam7);
		Global_1683921.f_4602 = unk_0xD3137A576BE9EC5C();
	}
	return 0;
}

void func_475(struct<2> Param0, var uParam2, var uParam3, struct<2> Param4, var uParam6)
{
	struct<9> Var0;
	int iVar9;
	
	if (!func_458(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1000;
	Var0 = 1996378932;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0 };
	Var0.f_4 = uParam2;
	Var0.f_8 = uParam3;
	Var0.f_5 = uParam6;
	Var0.f_6 = { Param4 };
	iVar9 = func_221(1, 1);
	if (!iVar9 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 9, iVar9);
	}
}

void func_476(var uParam0, var uParam1, char* sParam2)
{
}

int func_477(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_478(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_478(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_479(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1683921.f_4775[iParam1] != -1)
	{
		return Global_1683921.f_4775[iParam1];
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1683921.f_4773, iVar0))
		{
			unk_0xBE20AB8238688965(&(Global_1683921.f_4773), iVar0);
			return func_481(iParam0, iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_480(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_481(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_482(iParam0);
	return (iVar0 + iParam1);
}

int func_482(int iParam0)
{
	return unk_0x856D5567211886A2(unk_0x72C1D3A1AB8CAA5B(iParam0));
}

int func_483(int iParam0)
{
	return 0;
}

int func_484(int iParam0)
{
	return 1;
}

int func_485(int iParam0)
{
	return func_461();
}

int func_486()
{
	return 23;
}

void func_487(int iParam0, struct<3> Param1)
{
	if (func_60(iParam0))
	{
		func_58(iParam0, 29);
		if (iParam0 != func_491(func_59(iParam0)))
		{
			func_58(iParam0, 40);
		}
	}
	else if (!func_492(iParam0, 7))
	{
		func_58(iParam0, 39);
	}
	unk_0x342AB3CE1C296A56(Local_3649.f_2[iParam0], 1);
	unk_0x1CCBC799127EA27B(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), 1200);
	unk_0x697DA7132EE43ABC(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), 50, 0);
	unk_0x0312E5501F93E5AB(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), true);
	unk_0x52090984B5C8A3E4(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
	unk_0xA5EAD2ACE2C8BBB2(unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam0]), 1, 1);
	unk_0x7C47E49129337557(unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam0]), true);
	unk_0x0C9DA4B265A14BE0(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), 1);
	unk_0xFC667CCCC848D576(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), 1);
	unk_0x66DF677B28DBD838(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), 1);
	if (func_490(iParam0))
	{
		unk_0x6A8F948698B360B4(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), true);
	}
	else
	{
		func_58(iParam0, 28);
	}
	if (!func_492(iParam0, 1))
	{
		unk_0xC18BA33CBF71A593(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]));
	}
	if (func_492(iParam0, 2))
	{
		unk_0x03D382CB0B44E2FC(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), Param1, 1, 0, 0, 1);
	}
	if (func_492(iParam0, 3))
	{
		unk_0xAFB24BC90ACA6210(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]));
		unk_0xEF6C40CE5DEBAAE3(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), 1);
	}
	if (func_492(iParam0, 4))
	{
		unk_0x9729E0DCF1C3C9A9(unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam0]), 1);
	}
	if ((func_492(iParam0, 6) || func_492(iParam0, 7)) || func_60(iParam0))
	{
		unk_0x80250B8368A4E611(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), false, 0);
	}
	if (func_489(iParam0))
	{
		unk_0xFA6E875B9DF13F14(unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam0]), 1);
		func_58(iParam0, 23);
	}
	if (func_492(iParam0, 9))
	{
		func_488(iParam0, 1, 0);
	}
}

void func_488(int iParam0, int iParam1, int iParam2)
{
	unk_0xB6988251AB94C1ED(unk_0x0EE5FAC7EF37F8A0(Local_3649.f_2[iParam0]), iParam1, iParam2);
}

int func_489(int iParam0)
{
	if (func_492(iParam0, 8))
	{
		return 1;
	}
	if (func_29(22))
	{
		return 1;
	}
	return 0;
}

bool func_490(int iParam0)
{
	if (func_6(iParam0, 29))
	{
		return 0;
	}
	return !func_492(iParam0, 5);
}

int func_491(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_221.f_18)
	{
		if (Local_3649.f_2.f_32[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_492(int iParam0, int iParam1)
{
	return func_4(&(Local_221.f_18.f_5[iParam0 /*12*/]), iParam1);
}

Vector3 func_493(int iParam0)
{
	if (func_470(iParam0))
	{
		return Local_221.f_351.f_1[func_59(iParam0) /*13*/].f_3 + func_494(iParam0, Local_221.f_351.f_1[func_59(iParam0) /*13*/].f_2);
	}
	else if (!func_38(Local_221.f_18.f_5[iParam0 /*12*/].f_3))
	{
		return Local_221.f_18.f_5[iParam0 /*12*/].f_3;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_1202.f_75.f_21);
	return StackVal, StackVal, StackVal;
}

Vector3 func_494(int iParam0, int iParam1)
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

void func_495()
{
}

int func_496()
{
	return Local_3649.f_464;
}

void func_497(int iParam0)
{
	Local_3649.f_463 = iParam0;
}

int func_498()
{
	int iVar0;
	int iVar1;
	
	if (!func_1183(func_1187(), func_1185()))
	{
		return 0;
	}
	if (!func_518())
	{
		return 0;
	}
	func_517();
	func_513();
	Local_3649.f_474 = unk_0x96799BFA3859CDC1(func_512(), -1, 0);
	func_509();
	func_507();
	func_506();
	func_504();
	func_503();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_500(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Local_3649.f_395[iVar1] = -1;
		iVar1++;
	}
	Local_3649.f_478 = unk_0x344C570D6F8700DF(0, 99999999);
	unk_0xF73A2DAF57FFFE87(&(Local_3649.f_471), &(Local_3649.f_472));
	Global_1630317[iLocal_3570 /*595*/].f_522 = Local_3649.f_471;
	Global_1630317[iLocal_3570 /*595*/].f_523 = Local_3649.f_472;
	Local_3649.f_479 = unk_0x5A002C4821A13338();
	if (!func_499())
	{
		return 0;
	}
	Call_Loc(Local_1202.f_1);
	return StackVal;
}

int func_499()
{
	return 1;
}

void func_500(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	if (func_38(func_501(iParam0)))
	{
		return;
	}
	fVar0 = (Local_221.f_740.f_1[iParam0 /*12*/].f_7 / 2f);
	fVar1 = (fVar0 * 0.25f);
	fVar2 = (fVar0 * 0.5f);
	Var3 = { func_501(iParam0) };
	if (func_112())
	{
		Var3.x = (Var3.x + unk_0x658086F2B3C5E4E4(fVar1, fVar2));
	}
	else
	{
		Var3.x = (Var3.x - unk_0x658086F2B3C5E4E4(fVar1, fVar2));
	}
	if (func_112())
	{
		Var3.f_1 = (Var3.f_1 + unk_0x658086F2B3C5E4E4(fVar1, fVar2));
	}
	else
	{
		Var3.f_1 = (Var3.f_1 - unk_0x658086F2B3C5E4E4(fVar1, fVar2));
	}
	Local_3649.f_409.f_2[iParam0 /*3*/] = { Var3 };
}

Vector3 func_501(int iParam0)
{
	if (Local_1202.f_319.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_319.f_2);
		return StackVal, StackVal, StackVal;
	}
	if (Local_221.f_740.f_1[iParam0 /*12*/].f_2 != -1)
	{
		return func_502(Local_221.f_740.f_1[iParam0 /*12*/].f_2, Local_221.f_740.f_1[iParam0 /*12*/].f_3);
	}
	return Local_221.f_740.f_1[iParam0 /*12*/].f_4;
}

Vector3 func_502(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			return Local_221.f_18.f_5[iParam1 /*12*/].f_3;
		
		case 0:
			return Local_221.f_72.f_1[iParam1 /*21*/].f_3;
		
		case 1:
			return Local_221.f_351.f_1[iParam1 /*13*/].f_3;
		
		case 2:
			return Local_221.f_419.f_1[iParam1 /*10*/].f_3;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_503()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = (iVar1 + Local_221.f_635[iVar0 /*32*/]);
		iVar0++;
	}
	Local_3649.f_484 = iVar1;
}

void func_504()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_221.f_72)
	{
		Local_3649.f_62[iVar0 /*22*/].f_15 = func_505(iVar0);
		iVar0++;
	}
}

int func_505(int iParam0)
{
	if (Local_221.f_72.f_1[iParam0 /*21*/].f_16 == -1)
	{
		Local_221.f_72.f_1[iParam0 /*21*/].f_16 = 1500;
	}
	return unk_0x344C570D6F8700DF(0, Local_221.f_72.f_1[iParam0 /*21*/].f_16);
}

void func_506()
{
	Local_3649.f_465 = 2;
}

void func_507()
{
	int iVar0;
	
	if (func_508())
	{
		if (func_31(&(Local_3649.f_2.f_32), &(Local_3649.f_395.f_3)))
		{
			func_14(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_221.f_18)
		{
			Local_3649.f_2.f_32[iVar0] = Local_221.f_18.f_5[iVar0 /*12*/].f_10;
			iVar0++;
		}
	}
}

int func_508()
{
	return 0;
}

void func_509()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < Local_221.f_18)
	{
		iVar4 = Local_221.f_18.f_5[iVar0 /*12*/].f_10;
		iVar5 = Local_221.f_18.f_5[iVar0 /*12*/].f_11;
		if (iVar4 != -1 && iVar5 != 0)
		{
			switch (iVar5)
			{
				case 2:
					func_193(iVar4, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar3 = Local_221.f_583[iVar1];
		if (iVar3 != -1)
		{
			func_193(iVar3, 15);
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < Local_221.f_72)
	{
		iVar3 = Local_221.f_72.f_1[iVar2 /*21*/].f_8;
		if (iVar3 != -1 && func_150(iVar3, 15))
		{
			func_62(iVar2, 18);
		}
		iVar6 = 0;
		while (iVar6 < Local_221.f_766)
		{
			if (Local_221.f_766.f_1[iVar6 /*10*/] == iVar2)
			{
				func_62(iVar2, 20);
			}
			iVar6++;
		}
		iVar2++;
	}
	func_510(0);
}

void func_510(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_221.f_635[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1 == -1)
		{
		}
		else
		{
			switch (Local_221.f_635[iParam0 /*32*/].f_7[iVar0 /*2*/])
			{
				case 2:
					func_193(Local_221.f_635[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 16);
					break;
				
				case 3:
					func_511(Local_221.f_635[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 5);
					break;
				
				case 1:
					func_62(Local_221.f_635[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 19);
					break;
			}
			iVar0++;
		}
	}
}

void func_511(int iParam0, int iParam1)
{
	if (func_15(&(Local_3649.f_358[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

char* func_512()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_513()
{
	Local_3649.f_473 = func_514() + 1;
	Global_1630317[iLocal_3570 /*595*/].f_11.f_386 = Local_3649.f_473;
}

int func_514()
{
	if (func_516() == func_101())
	{
		return 0;
	}
	return func_515(func_516());
}

int func_515(int iParam0)
{
	if (func_102(iParam0) == func_101())
	{
		return 0;
	}
	return Global_1630317[iParam0 /*595*/].f_11.f_19;
}

int func_516()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

void func_517()
{
}

int func_518()
{
	func_1182();
	func_552();
	if (!func_519())
	{
		return 0;
	}
	Stack.Push(Local_1202 != 0);
	Call_Loc(Local_1202);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_519()
{
	if (func_1189(12))
	{
		return 1;
	}
	if (!func_525())
	{
		return 0;
	}
	func_521();
	func_520();
	if (Local_1202.f_11 != 0)
	{
		Call_Loc(Local_1202.f_11);
	}
	func_145(12);
	return 1;
}

void func_520()
{
}

void func_521()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_589)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_18)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (-1 != Local_221.f_18.f_5[iVar0 /*12*/].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_72)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		if (Local_221.f_72.f_1[iVar0 /*21*/].f_10 != -1)
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Local_221.f_792[Local_221.f_72.f_1[iVar0 /*21*/].f_10 /*16*/])))
			{
			}
		}
		iVar2 = Local_221.f_72.f_1[iVar0 /*21*/].f_11;
		if (iVar2 != -1)
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Local_221.f_937[iVar2 /*9*/])))
			{
			}
			iVar3 = Local_221.f_937[Local_221.f_72.f_1[iVar0 /*21*/].f_11 /*9*/].f_8;
			if (iVar3 != -1)
			{
				if (!unk_0x7BCC91F3C1CF24E8(&(Local_221.f_937.f_10[iVar3 /*16*/])))
				{
				}
			}
		}
		if (-1 != Local_221.f_72.f_1[iVar0 /*21*/].f_8)
		{
		}
		if (-1 != Local_221.f_72.f_1[iVar0 /*21*/].f_8)
		{
		}
		func_524(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_351)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		func_523(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_419)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		iVar0 = 0;
		while (iVar0 < Local_221.f_635[iVar4 /*32*/])
		{
			iVar0++;
		}
		iVar4++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_766)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			iVar5++;
		}
		iVar0++;
	}
	iVar6 = 0;
	while (iVar6 < 1)
	{
		iVar6++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_38(Local_221.f_964[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_684)
	{
		func_522(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_221.f_740)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (Local_221.f_668.f_1[iVar0 /*7*/])
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
}

void func_522(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_115(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_523(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_162(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_524(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (func_49(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

bool func_525()
{
	return func_526(func_548(), &Local_221, &Local_1651);
}

int func_526(char* sParam0, var uParam1, var uParam2)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	func_547();
	if (!unk_0x26F63AFB9E3C323C(sParam0))
	{
		return 0;
	}
	func_528(uParam1);
	func_527(uParam2);
	return 1;
}

void func_527(var uParam0)
{
	unk_0x625B28E8C95F91F4();
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_528(var uParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = unk_0xE52A8802193E5624();
	uVar1 = unk_0x79248942282C8E38(iVar0, "mission");
	Global_4456448.f_83138 = unk_0xB09B53A347BF8B9E(iVar0, "debugOnlyVersion");
	func_529(&uVar1, uParam0, 0, &uVar2);
}

bool func_529(var uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_530(uParam0, uParam1);
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

void func_530(var uParam0, var uParam1)
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
	int iVar27;
	int iVar28;
	var uVar29[1];
	int iVar31[1];
	var uVar33;
	bool bVar34;
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
	int iVar67;
	var uVar68;
	int iVar69;
	var uVar70[6];
	int iVar77[6];
	var uVar84;
	bool bVar85;
	var uVar86;
	bool bVar87;
	int iVar88;
	var uVar89[1];
	int iVar91[1];
	var uVar93;
	bool bVar94;
	int iVar95;
	int iVar96;
	var uVar97[1];
	int iVar99[1];
	var uVar101;
	bool bVar102;
	var uVar103;
	bool bVar104;
	var uVar105;
	bool bVar106;
	var uVar107;
	bool bVar108;
	var uVar109;
	bool bVar110;
	int iVar111;
	var uVar112;
	bool bVar113;
	var uVar114;
	bool bVar115;
	var uVar116;
	bool bVar117;
	var uVar118;
	bool bVar119;
	int iVar120;
	int iVar121;
	var uVar122[1];
	int iVar124[1];
	var uVar126;
	bool bVar127;
	var uVar128;
	bool bVar129;
	var uVar130;
	bool bVar131;
	var uVar132;
	bool bVar133;
	int iVar134;
	int iVar135;
	var uVar136;
	bool bVar137;
	int iVar138;
	int iVar139;
	var uVar140;
	bool bVar141;
	var uVar142;
	bool bVar143;
	var uVar144[1];
	int iVar146[1];
	var uVar148;
	bool bVar149;
	int iVar150;
	var uVar151;
	bool bVar152;
	var uVar153;
	bool bVar154;
	var uVar155;
	bool bVar156;
	var uVar157;
	bool bVar158;
	int iVar159;
	var uVar160;
	bool bVar161;
	int iVar162;
	var uVar163;
	bool bVar164;
	var uVar165;
	bool bVar166;
	var uVar167;
	bool bVar168;
	var uVar169;
	bool bVar170;
	int iVar171;
	var uVar172[12];
	int iVar185[12];
	var uVar198[12];
	int iVar211[12];
	int iVar224;
	int iVar225;
	var uVar226;
	bool bVar227;
	var uVar228;
	bool bVar229;
	var uVar230;
	bool bVar231;
	int iVar232;
	int iVar233;
	var uVar234[1];
	int iVar236[1];
	var uVar238;
	bool bVar239;
	var uVar240;
	bool bVar241;
	var uVar242;
	bool bVar243;
	int iVar244;
	int iVar245;
	var uVar246;
	bool bVar247;
	int iVar248;
	var uVar249[1];
	int iVar251[1];
	var uVar253[1];
	int iVar255[1];
	var uVar257[1];
	int iVar259[1];
	var uVar261[1];
	int iVar263[1];
	int iVar265;
	int iVar266;
	var uVar267;
	bool bVar268;
	var uVar269;
	bool bVar270;
	var uVar271;
	bool bVar272;
	var uVar273;
	bool bVar274;
	int iVar275;
	var uVar276;
	bool bVar277;
	int iVar278;
	int iVar279;
	var uVar280;
	bool bVar281;
	var uVar282;
	bool bVar283;
	int iVar284;
	var uVar285;
	bool bVar286;
	int iVar287;
	var uVar288;
	bool bVar289;
	var uVar290;
	bool bVar291;
	var uVar292;
	bool bVar293;
	var uVar294[1];
	int iVar296[1];
	
	func_546(&iVar8, *uParam0, "me");
	func_546(&iVar9, iVar8, "blp");
	func_546(&iVar10, iVar8, "ents");
	func_546(&iVar27, *uParam0, "pd");
	func_546(&iVar28, iVar27, "pds");
	func_546(&iVar67, iVar27, "grp");
	func_546(&uVar68, iVar67, "rel");
	func_546(&iVar69, iVar67, "trg");
	func_546(&iVar88, iVar27, "asp");
	func_546(&iVar95, *uParam0, "vh");
	func_546(&iVar96, iVar95, "veh");
	func_546(&iVar111, iVar96, "blp");
	func_546(&iVar120, *uParam0, "pp");
	func_546(&iVar121, iVar120, "prps");
	func_546(&iVar134, *uParam0, "amb");
	func_546(&iVar135, iVar134, "veh");
	func_546(&iVar138, *uParam0, "gt");
	func_546(&iVar139, iVar138, "loc");
	func_546(&iVar150, iVar139, "blp");
	func_546(&iVar159, *uParam0, "tot");
	func_546(&iVar162, iVar159, "tohud");
	func_546(&iVar171, iVar159, "tar");
	func_546(&iVar224, *uParam0, "pop");
	func_546(&iVar225, iVar224, "blkr");
	func_546(&iVar232, *uParam0, "ta");
	func_546(&iVar233, iVar232, "ars");
	func_546(&iVar244, *uParam0, "ptrl");
	func_546(&iVar245, iVar244, "pat");
	func_546(&iVar248, iVar245, "nd");
	func_546(&iVar265, *uParam0, "fcs");
	func_546(&iVar266, iVar265, "fcs");
	func_546(&iVar275, *uParam0, "sro");
	func_546(&iVar278, *uParam0, "anims");
	func_546(&iVar279, iVar278, "anm");
	func_546(&iVar284, iVar278, "anmD");
	func_546(&iVar287, *uParam0, "port");
	if (func_545(*uParam0, "fmbs") == 7)
	{
		bVar7 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar10, &Var0) == 7)
		{
			iVar13[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar10, "mn") == 7)
	{
		bVar16 = true;
	}
	if (func_545(iVar10, "pos") == 7)
	{
		bVar18 = true;
	}
	if (func_545(iVar10, "head") == 7)
	{
		bVar20 = true;
	}
	if (func_545(iVar10, "rot") == 7)
	{
		bVar22 = true;
	}
	if (func_545(iVar10, "cv") == 7)
	{
		bVar24 = true;
	}
	if (func_545(iVar10, "crt") == 7)
	{
		bVar26 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar28, &Var0) == 7)
		{
			iVar31[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar28, "mn") == 7)
	{
		bVar34 = true;
	}
	if (func_545(iVar28, "pos") == 7)
	{
		bVar36 = true;
	}
	if (func_545(iVar28, "head") == 7)
	{
		bVar38 = true;
	}
	if (func_545(iVar28, "wpn") == 7)
	{
		bVar40 = true;
	}
	if (func_545(iVar28, "veh") == 7)
	{
		bVar42 = true;
	}
	if (func_545(iVar28, "st") == 7)
	{
		bVar44 = true;
	}
	if (func_545(iVar28, "scen") == 7)
	{
		bVar46 = true;
	}
	if (func_545(iVar28, "anim") == 7)
	{
		bVar48 = true;
	}
	if (func_545(iVar28, "int") == 7)
	{
		bVar50 = true;
	}
	if (func_545(iVar28, "asi") == 7)
	{
		bVar52 = true;
	}
	if (func_545(iVar28, "grp") == 7)
	{
		bVar54 = true;
	}
	if (func_545(iVar28, "mvmt") == 7)
	{
		bVar56 = true;
	}
	if (func_545(iVar28, "mrd") == 7)
	{
		bVar58 = true;
	}
	if (func_545(iVar28, "sr") == 7)
	{
		bVar60 = true;
	}
	if (func_545(iVar28, "sa") == 7)
	{
		bVar62 = true;
	}
	if (func_545(iVar28, "hr") == 7)
	{
		bVar64 = true;
	}
	if (func_545(iVar28, "dr") == 7)
	{
		bVar66 = true;
	}
	iVar5 = 0;
	while (iVar5 < 6)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar69, &Var0) == 7)
		{
			iVar77[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar67, "ed") == 7)
	{
		bVar85 = true;
	}
	if (func_545(iVar67, "gt") == 7)
	{
		bVar87 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar88, &Var0) == 7)
		{
			iVar91[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar88, "vh") == 7)
	{
		bVar94 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar96, &Var0) == 7)
		{
			iVar99[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar96, "mn") == 7)
	{
		bVar102 = true;
	}
	if (func_545(iVar96, "pos") == 7)
	{
		bVar104 = true;
	}
	if (func_545(iVar96, "head") == 7)
	{
		bVar106 = true;
	}
	if (func_545(iVar96, "col") == 7)
	{
		bVar108 = true;
	}
	if (func_545(iVar96, "int") == 7)
	{
		bVar110 = true;
	}
	if (func_545(iVar111, "sprt") == 7)
	{
		bVar113 = true;
	}
	if (func_545(iVar111, "hclr") == 7)
	{
		bVar115 = true;
	}
	if (func_545(iVar111, "scl") == 7)
	{
		bVar117 = true;
	}
	if (func_545(iVar111, "sh") == 7)
	{
		bVar119 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar121, &Var0) == 7)
		{
			iVar124[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar121, "mn") == 7)
	{
		bVar127 = true;
	}
	if (func_545(iVar121, "pos") == 7)
	{
		bVar129 = true;
	}
	if (func_545(iVar121, "head") == 7)
	{
		bVar131 = true;
	}
	if (func_545(iVar121, "rot") == 7)
	{
		bVar133 = true;
	}
	if (func_545(iVar135, "idx") == 7)
	{
		bVar137 = true;
	}
	if (func_545(iVar139, "pos") == 7)
	{
		bVar141 = true;
	}
	if (func_545(iVar139, "rad") == 7)
	{
		bVar143 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar139, &Var0) == 7)
		{
			iVar146[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar139, "brd") == 7)
	{
		bVar149 = true;
	}
	if (func_545(iVar150, "sprt") == 7)
	{
		bVar152 = true;
	}
	if (func_545(iVar150, "hclr") == 7)
	{
		bVar154 = true;
	}
	if (func_545(iVar150, "scl") == 7)
	{
		bVar156 = true;
	}
	if (func_545(iVar150, "sh") == 7)
	{
		bVar158 = true;
	}
	if (func_545(iVar159, "tco") == 7)
	{
		bVar161 = true;
	}
	if (func_545(iVar162, "brtyp") == 7)
	{
		bVar164 = true;
	}
	if (func_545(iVar162, "brtit") == 7)
	{
		bVar166 = true;
	}
	if (func_545(iVar162, "brmax") == 7)
	{
		bVar168 = true;
	}
	if (func_545(iVar162, "brord") == 7)
	{
		bVar170 = true;
	}
	iVar5 = 0;
	while (iVar5 < 12)
	{
		StringCopy(&Var0, "totyp", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar171, &Var0) == 7)
		{
			iVar185[iVar5] = 1;
		}
		StringCopy(&Var0, "toid", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar171, &Var0) == 7)
		{
			iVar211[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar225, "typ") == 7)
	{
		bVar227 = true;
	}
	if (func_545(iVar225, "min") == 7)
	{
		bVar229 = true;
	}
	if (func_545(iVar225, "max") == 7)
	{
		bVar231 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar233, &Var0) == 7)
		{
			iVar236[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar233, "vmn") == 7)
	{
		bVar239 = true;
	}
	if (func_545(iVar233, "vmx") == 7)
	{
		bVar241 = true;
	}
	if (func_545(iVar233, "fwd") == 7)
	{
		bVar243 = true;
	}
	if (func_545(iVar245, "pedi") == 7)
	{
		bVar247 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar248, &Var0) == 7)
		{
			iVar251[iVar5] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar248, &Var0) == 7)
		{
			iVar255[iVar5] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar248, &Var0) == 7)
		{
			iVar259[iVar5] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar248, &Var0) == 7)
		{
			iVar263[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_545(iVar266, "ftyp") == 7)
	{
		bVar268 = true;
	}
	if (func_545(iVar266, "feid") == 7)
	{
		bVar270 = true;
	}
	if (func_545(iVar266, "fvec") == 7)
	{
		bVar272 = true;
	}
	if (func_545(iVar266, "frng") == 7)
	{
		bVar274 = true;
	}
	if (func_545(iVar275, "name") == 7)
	{
		bVar277 = true;
	}
	if (func_545(iVar279, "name") == 7)
	{
		bVar281 = true;
	}
	if (func_545(iVar279, "indx") == 7)
	{
		bVar283 = true;
	}
	if (func_545(iVar284, "name") == 7)
	{
		bVar286 = true;
	}
	if (func_545(iVar287, "pos") == 7)
	{
		bVar289 = true;
	}
	if (func_545(iVar287, "head") == 7)
	{
		bVar291 = true;
	}
	if (func_545(iVar287, "plnkp") == 7)
	{
		bVar293 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_545(iVar287, &Var0) == 7)
		{
			iVar296[iVar5] = 1;
		}
		iVar5++;
	}
	if (bVar7)
	{
		uVar6 = unk_0x8FB84FA27FE10524(*uParam0, "fmbs");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar13[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar11[iVar5] = unk_0x8FB84FA27FE10524(iVar10, &Var0);
		}
		iVar5++;
	}
	if (bVar16)
	{
		uVar15 = unk_0x8FB84FA27FE10524(iVar10, "mn");
	}
	if (bVar18)
	{
		uVar17 = unk_0x8FB84FA27FE10524(iVar10, "pos");
	}
	if (bVar20)
	{
		uVar19 = unk_0x8FB84FA27FE10524(iVar10, "head");
	}
	if (bVar22)
	{
		uVar21 = unk_0x8FB84FA27FE10524(iVar10, "rot");
	}
	if (bVar24)
	{
		uVar23 = unk_0x8FB84FA27FE10524(iVar10, "cv");
	}
	if (bVar26)
	{
		uVar25 = unk_0x8FB84FA27FE10524(iVar10, "crt");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar31[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar29[iVar5] = unk_0x8FB84FA27FE10524(iVar28, &Var0);
		}
		iVar5++;
	}
	if (bVar34)
	{
		uVar33 = unk_0x8FB84FA27FE10524(iVar28, "mn");
	}
	if (bVar36)
	{
		uVar35 = unk_0x8FB84FA27FE10524(iVar28, "pos");
	}
	if (bVar38)
	{
		uVar37 = unk_0x8FB84FA27FE10524(iVar28, "head");
	}
	if (bVar40)
	{
		uVar39 = unk_0x8FB84FA27FE10524(iVar28, "wpn");
	}
	if (bVar42)
	{
		uVar41 = unk_0x8FB84FA27FE10524(iVar28, "veh");
	}
	if (bVar44)
	{
		uVar43 = unk_0x8FB84FA27FE10524(iVar28, "st");
	}
	if (bVar46)
	{
		uVar45 = unk_0x8FB84FA27FE10524(iVar28, "scen");
	}
	if (bVar48)
	{
		uVar47 = unk_0x8FB84FA27FE10524(iVar28, "anim");
	}
	if (bVar50)
	{
		uVar49 = unk_0x8FB84FA27FE10524(iVar28, "int");
	}
	if (bVar52)
	{
		uVar51 = unk_0x8FB84FA27FE10524(iVar28, "asi");
	}
	if (bVar54)
	{
		uVar53 = unk_0x8FB84FA27FE10524(iVar28, "grp");
	}
	if (bVar56)
	{
		uVar55 = unk_0x8FB84FA27FE10524(iVar28, "mvmt");
	}
	if (bVar58)
	{
		uVar57 = unk_0x8FB84FA27FE10524(iVar28, "mrd");
	}
	if (bVar60)
	{
		uVar59 = unk_0x8FB84FA27FE10524(iVar28, "sr");
	}
	if (bVar62)
	{
		uVar61 = unk_0x8FB84FA27FE10524(iVar28, "sa");
	}
	if (bVar64)
	{
		uVar63 = unk_0x8FB84FA27FE10524(iVar28, "hr");
	}
	if (bVar66)
	{
		uVar65 = unk_0x8FB84FA27FE10524(iVar28, "dr");
	}
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if (iVar77[iVar5])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar70[iVar5] = unk_0x8FB84FA27FE10524(iVar69, &Var0);
		}
		iVar5++;
	}
	if (bVar85)
	{
		uVar84 = unk_0x8FB84FA27FE10524(iVar67, "ed");
	}
	if (bVar87)
	{
		uVar86 = unk_0x8FB84FA27FE10524(iVar67, "gt");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar91[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar89[iVar5] = unk_0x8FB84FA27FE10524(iVar88, &Var0);
		}
		iVar5++;
	}
	if (bVar94)
	{
		uVar93 = unk_0x8FB84FA27FE10524(iVar88, "vh");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar99[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar97[iVar5] = unk_0x8FB84FA27FE10524(iVar96, &Var0);
		}
		iVar5++;
	}
	if (bVar102)
	{
		uVar101 = unk_0x8FB84FA27FE10524(iVar96, "mn");
	}
	if (bVar104)
	{
		uVar103 = unk_0x8FB84FA27FE10524(iVar96, "pos");
	}
	if (bVar106)
	{
		uVar105 = unk_0x8FB84FA27FE10524(iVar96, "head");
	}
	if (bVar108)
	{
		uVar107 = unk_0x8FB84FA27FE10524(iVar96, "col");
	}
	if (bVar110)
	{
		uVar109 = unk_0x8FB84FA27FE10524(iVar96, "int");
	}
	if (bVar113)
	{
		uVar112 = unk_0x8FB84FA27FE10524(iVar111, "sprt");
	}
	if (bVar115)
	{
		uVar114 = unk_0x8FB84FA27FE10524(iVar111, "hclr");
	}
	if (bVar117)
	{
		uVar116 = unk_0x8FB84FA27FE10524(iVar111, "scl");
	}
	if (bVar119)
	{
		uVar118 = unk_0x8FB84FA27FE10524(iVar111, "sh");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar124[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar122[iVar5] = unk_0x8FB84FA27FE10524(iVar121, &Var0);
		}
		iVar5++;
	}
	if (bVar127)
	{
		uVar126 = unk_0x8FB84FA27FE10524(iVar121, "mn");
	}
	if (bVar129)
	{
		uVar128 = unk_0x8FB84FA27FE10524(iVar121, "pos");
	}
	if (bVar131)
	{
		uVar130 = unk_0x8FB84FA27FE10524(iVar121, "head");
	}
	if (bVar133)
	{
		uVar132 = unk_0x8FB84FA27FE10524(iVar121, "rot");
	}
	if (bVar137)
	{
		uVar136 = unk_0x8FB84FA27FE10524(iVar135, "idx");
	}
	if (bVar141)
	{
		uVar140 = unk_0x8FB84FA27FE10524(iVar139, "pos");
	}
	if (bVar143)
	{
		uVar142 = unk_0x8FB84FA27FE10524(iVar139, "rad");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar146[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar144[iVar5] = unk_0x8FB84FA27FE10524(iVar139, &Var0);
		}
		iVar5++;
	}
	if (bVar149)
	{
		uVar148 = unk_0x8FB84FA27FE10524(iVar139, "brd");
	}
	if (bVar152)
	{
		uVar151 = unk_0x8FB84FA27FE10524(iVar150, "sprt");
	}
	if (bVar154)
	{
		uVar153 = unk_0x8FB84FA27FE10524(iVar150, "hclr");
	}
	if (bVar156)
	{
		uVar155 = unk_0x8FB84FA27FE10524(iVar150, "scl");
	}
	if (bVar158)
	{
		uVar157 = unk_0x8FB84FA27FE10524(iVar150, "sh");
	}
	if (bVar161)
	{
		uVar160 = unk_0x8FB84FA27FE10524(iVar159, "tco");
	}
	if (bVar164)
	{
		uVar163 = unk_0x8FB84FA27FE10524(iVar162, "brtyp");
	}
	if (bVar166)
	{
		uVar165 = unk_0x8FB84FA27FE10524(iVar162, "brtit");
	}
	if (bVar168)
	{
		uVar167 = unk_0x8FB84FA27FE10524(iVar162, "brmax");
	}
	if (bVar170)
	{
		uVar169 = unk_0x8FB84FA27FE10524(iVar162, "brord");
	}
	iVar5 = 0;
	while (iVar5 < 12)
	{
		if (iVar185[iVar5])
		{
			StringCopy(&Var0, "totyp", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar172[iVar5] = unk_0x8FB84FA27FE10524(iVar171, &Var0);
		}
		if (iVar211[iVar5])
		{
			StringCopy(&Var0, "toid", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar198[iVar5] = unk_0x8FB84FA27FE10524(iVar171, &Var0);
		}
		iVar5++;
	}
	if (bVar227)
	{
		uVar226 = unk_0x8FB84FA27FE10524(iVar225, "typ");
	}
	if (bVar229)
	{
		uVar228 = unk_0x8FB84FA27FE10524(iVar225, "min");
	}
	if (bVar231)
	{
		uVar230 = unk_0x8FB84FA27FE10524(iVar225, "max");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar236[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar234[iVar5] = unk_0x8FB84FA27FE10524(iVar233, &Var0);
		}
		iVar5++;
	}
	if (bVar239)
	{
		uVar238 = unk_0x8FB84FA27FE10524(iVar233, "vmn");
	}
	if (bVar241)
	{
		uVar240 = unk_0x8FB84FA27FE10524(iVar233, "vmx");
	}
	if (bVar243)
	{
		uVar242 = unk_0x8FB84FA27FE10524(iVar233, "fwd");
	}
	if (bVar247)
	{
		uVar246 = unk_0x8FB84FA27FE10524(iVar245, "pedi");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar251[iVar5])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar249[iVar5] = unk_0x8FB84FA27FE10524(iVar248, &Var0);
		}
		if (iVar255[iVar5])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar253[iVar5] = unk_0x8FB84FA27FE10524(iVar248, &Var0);
		}
		if (iVar259[iVar5])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar257[iVar5] = unk_0x8FB84FA27FE10524(iVar248, &Var0);
		}
		if (iVar263[iVar5])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar261[iVar5] = unk_0x8FB84FA27FE10524(iVar248, &Var0);
		}
		iVar5++;
	}
	if (bVar268)
	{
		uVar267 = unk_0x8FB84FA27FE10524(iVar266, "ftyp");
	}
	if (bVar270)
	{
		uVar269 = unk_0x8FB84FA27FE10524(iVar266, "feid");
	}
	if (bVar272)
	{
		uVar271 = unk_0x8FB84FA27FE10524(iVar266, "fvec");
	}
	if (bVar274)
	{
		uVar273 = unk_0x8FB84FA27FE10524(iVar266, "frng");
	}
	if (bVar277)
	{
		uVar276 = unk_0x8FB84FA27FE10524(iVar275, "name");
	}
	if (bVar281)
	{
		uVar280 = unk_0x8FB84FA27FE10524(iVar279, "name");
	}
	if (bVar283)
	{
		uVar282 = unk_0x8FB84FA27FE10524(iVar279, "indx");
	}
	if (bVar286)
	{
		uVar285 = unk_0x8FB84FA27FE10524(iVar284, "name");
	}
	if (bVar289)
	{
		uVar288 = unk_0x8FB84FA27FE10524(iVar287, "pos");
	}
	if (bVar291)
	{
		uVar290 = unk_0x8FB84FA27FE10524(iVar287, "head");
	}
	if (bVar293)
	{
		uVar292 = unk_0x8FB84FA27FE10524(iVar287, "plnkp");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar296[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar294[iVar5] = unk_0x8FB84FA27FE10524(iVar287, &Var0);
		}
		iVar5++;
	}
	*uParam1 = { func_544(*uParam0, "fmnm", "") };
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_16[iVar4] = func_543(uVar6, iVar4, 0, bVar7);
		iVar4++;
	}
	uParam1->f_18 = func_542(iVar8, "num", 0);
	uParam1->f_18.f_1 = func_541(iVar9, "sprt", -1);
	uParam1->f_18.f_1.f_1 = func_541(iVar9, "hclr", 12);
	uParam1->f_18.f_1.f_2 = func_540(iVar9, "scl", 1f);
	uParam1->f_18.f_1.f_3 = func_538(iVar9, "sh", 0);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_18.f_5[iVar4 /*12*/][iVar5] = func_543(uVar11[iVar5], iVar4, 0, iVar13[iVar5]);
			iVar5++;
		}
		uParam1->f_18.f_5[iVar4 /*12*/].f_2 = func_537(uVar15, iVar4, 0, bVar16);
		uParam1->f_18.f_5[iVar4 /*12*/].f_3 = { func_536(uVar17, iVar4, 0f, 0f, 0f, bVar18) };
		uParam1->f_18.f_5[iVar4 /*12*/].f_6 = func_535(uVar19, iVar4, 0f, bVar20);
		uParam1->f_18.f_5[iVar4 /*12*/].f_7 = { func_536(uVar21, iVar4, 0f, 0f, 0f, bVar22) };
		uParam1->f_18.f_5[iVar4 /*12*/].f_10 = func_543(uVar23, iVar4, -1, bVar24);
		uParam1->f_18.f_5[iVar4 /*12*/].f_11 = func_537(uVar25, iVar4, 2, bVar26);
		iVar4++;
	}
	uParam1->f_72 = func_542(iVar27, "num", 0);
	iVar4 = 0;
	while (iVar4 < 12)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_72.f_1[iVar4 /*21*/][iVar5] = func_543(uVar29[iVar5], iVar4, 0, iVar31[iVar5]);
			iVar5++;
		}
		uParam1->f_72.f_1[iVar4 /*21*/].f_2 = func_537(uVar33, iVar4, 0, bVar34);
		uParam1->f_72.f_1[iVar4 /*21*/].f_3 = { func_536(uVar35, iVar4, 0f, 0f, 0f, bVar36) };
		uParam1->f_72.f_1[iVar4 /*21*/].f_6 = func_535(uVar37, iVar4, 0f, bVar38);
		uParam1->f_72.f_1[iVar4 /*21*/].f_7 = func_537(uVar39, iVar4, 0, bVar40);
		uParam1->f_72.f_1[iVar4 /*21*/].f_8 = func_543(uVar41, iVar4, -1, bVar42);
		uParam1->f_72.f_1[iVar4 /*21*/].f_9 = func_537(uVar43, iVar4, 0, bVar44);
		uParam1->f_72.f_1[iVar4 /*21*/].f_10 = func_543(uVar45, iVar4, -1, bVar46);
		uParam1->f_72.f_1[iVar4 /*21*/].f_11 = func_543(uVar47, iVar4, -1, bVar48);
		uParam1->f_72.f_1[iVar4 /*21*/].f_12 = func_543(uVar49, iVar4, -1, bVar50);
		uParam1->f_72.f_1[iVar4 /*21*/].f_13 = func_543(uVar51, iVar4, -1, bVar52);
		uParam1->f_72.f_1[iVar4 /*21*/].f_14 = func_543(uVar53, iVar4, 0, bVar54);
		uParam1->f_72.f_1[iVar4 /*21*/].f_15 = func_537(uVar55, iVar4, 2, bVar56);
		uParam1->f_72.f_1[iVar4 /*21*/].f_16 = func_543(uVar57, iVar4, -1, bVar58);
		uParam1->f_72.f_1[iVar4 /*21*/].f_17 = func_535(uVar59, iVar4, 60f, bVar60);
		uParam1->f_72.f_1[iVar4 /*21*/].f_18 = func_535(uVar61, iVar4, 60f, bVar62);
		uParam1->f_72.f_1[iVar4 /*21*/].f_19 = func_535(uVar63, iVar4, 60f, bVar64);
		uParam1->f_72.f_1[iVar4 /*21*/].f_20 = func_535(uVar65, iVar4, -1f, bVar66);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		iVar5 = 0;
		while (iVar5 < 6)
		{
			uParam1->f_72.f_254[iVar4 /*10*/].f_1[iVar5] = func_543(uVar70[iVar5], iVar4, -1, iVar77[iVar5]);
			iVar5++;
		}
		uParam1->f_72.f_254[iVar4 /*10*/].f_8 = func_543(uVar84, iVar4, 0, bVar85);
		uParam1->f_72.f_254[iVar4 /*10*/].f_9 = func_543(uVar86, iVar4, -1, bVar87);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_72.f_275[iVar4 /*3*/][iVar5] = func_543(uVar89[iVar5], iVar4, 0, iVar91[iVar5]);
			iVar5++;
		}
		uParam1->f_72.f_275[iVar4 /*3*/].f_2 = func_543(uVar93, iVar4, 0, bVar94);
		iVar4++;
	}
	uParam1->f_351 = func_542(iVar95, "num", 0);
	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_351.f_1[iVar4 /*13*/][iVar5] = func_543(uVar97[iVar5], iVar4, 0, iVar99[iVar5]);
			iVar5++;
		}
		uParam1->f_351.f_1[iVar4 /*13*/].f_2 = func_537(uVar101, iVar4, 0, bVar102);
		uParam1->f_351.f_1[iVar4 /*13*/].f_3 = { func_536(uVar103, iVar4, 0f, 0f, 0f, bVar104) };
		uParam1->f_351.f_1[iVar4 /*13*/].f_6 = func_535(uVar105, iVar4, 0f, bVar106);
		uParam1->f_351.f_1[iVar4 /*13*/].f_7 = func_543(uVar107, iVar4, -1, bVar108);
		uParam1->f_351.f_1[iVar4 /*13*/].f_8 = func_543(uVar109, iVar4, -1, bVar110);
		uParam1->f_351.f_1[iVar4 /*13*/].f_9 = func_537(uVar112, iVar4, -1, bVar113);
		uParam1->f_351.f_1[iVar4 /*13*/].f_9.f_1 = func_537(uVar114, iVar4, 12, bVar115);
		uParam1->f_351.f_1[iVar4 /*13*/].f_9.f_2 = func_535(uVar116, iVar4, 1f, bVar117);
		uParam1->f_351.f_1[iVar4 /*13*/].f_9.f_3 = func_534(uVar118, iVar4, 0, bVar119);
		iVar4++;
	}
	uParam1->f_351.f_67 = func_542(iVar95, "trv", -1);
	uParam1->f_419 = func_542(iVar120, "num", 0);
	iVar4 = 0;
	while (iVar4 < 7)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_419.f_1[iVar4 /*10*/][iVar5] = func_543(uVar122[iVar5], iVar4, 0, iVar124[iVar5]);
			iVar5++;
		}
		uParam1->f_419.f_1[iVar4 /*10*/].f_2 = func_537(uVar126, iVar4, 0, bVar127);
		uParam1->f_419.f_1[iVar4 /*10*/].f_3 = { func_536(uVar128, iVar4, 0f, 0f, 0f, bVar129) };
		uParam1->f_419.f_1[iVar4 /*10*/].f_6 = func_535(uVar130, iVar4, 0f, bVar131);
		uParam1->f_419.f_1[iVar4 /*10*/].f_7 = { func_536(uVar132, iVar4, 0f, 0f, 0f, bVar133) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_583[iVar4] = func_543(uVar136, iVar4, -1, bVar137);
		iVar4++;
	}
	uParam1->f_583.f_2 = func_542(iVar134, "wvs", 3);
	uParam1->f_583.f_3 = func_542(iVar134, "spd", 15000);
	uParam1->f_583.f_4 = func_542(iVar134, "rspd", 5000);
	uParam1->f_583.f_5 = func_540(iVar134, "sdst", 200f);
	uParam1->f_589 = func_542(iVar138, "num", 0);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		uParam1->f_589.f_1[iVar4 /*11*/] = { func_536(uVar140, iVar4, 0f, 0f, 0f, bVar141) };
		uParam1->f_589.f_1[iVar4 /*11*/].f_3 = func_535(uVar142, iVar4, -1f, bVar143);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_589.f_1[iVar4 /*11*/].f_4[iVar5] = func_543(uVar144[iVar5], iVar4, 0, iVar146[iVar5]);
			iVar5++;
		}
		uParam1->f_589.f_1[iVar4 /*11*/].f_6 = func_535(uVar148, iVar4, 0f, bVar149);
		uParam1->f_589.f_1[iVar4 /*11*/].f_7 = func_537(uVar151, iVar4, -1, bVar152);
		uParam1->f_589.f_1[iVar4 /*11*/].f_7.f_1 = func_537(uVar153, iVar4, 12, bVar154);
		uParam1->f_589.f_1[iVar4 /*11*/].f_7.f_2 = func_535(uVar155, iVar4, 1f, bVar156);
		uParam1->f_589.f_1[iVar4 /*11*/].f_7.f_3 = func_534(uVar157, iVar4, 0, bVar158);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_635[iVar4 /*32*/] = func_543(uVar160, iVar4, 0, bVar161);
		uParam1->f_635[iVar4 /*32*/].f_1 = func_537(uVar163, iVar4, 1, bVar164);
		uParam1->f_635[iVar4 /*32*/].f_1.f_1 = func_533(uVar165, iVar4, "", bVar166);
		uParam1->f_635[iVar4 /*32*/].f_1.f_2 = func_543(uVar167, iVar4, 0, bVar168);
		uParam1->f_635[iVar4 /*32*/].f_1.f_3 = func_537(uVar169, iVar4, 5, bVar170);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			uParam1->f_635[iVar4 /*32*/].f_7[iVar5 /*2*/] = func_537(uVar172[iVar5], iVar4, 0, iVar185[iVar5]);
			uParam1->f_635[iVar4 /*32*/].f_7[iVar5 /*2*/].f_1 = func_543(uVar198[iVar5], iVar4, -1, iVar211[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
	uParam1->f_668 = func_542(iVar224, "num", 0);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_668.f_1[iVar4 /*7*/] = func_537(uVar226, iVar4, -1, bVar227);
		uParam1->f_668.f_1[iVar4 /*7*/].f_1 = { func_536(uVar228, iVar4, 0f, 0f, 0f, bVar229) };
		uParam1->f_668.f_1[iVar4 /*7*/].f_4 = { func_536(uVar230, iVar4, 0f, 0f, 0f, bVar231) };
		iVar4++;
	}
	uParam1->f_684 = func_542(iVar232, "num", 0);
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_684.f_1[iVar4 /*9*/][iVar5] = func_543(uVar234[iVar5], iVar4, 0, iVar236[iVar5]);
			iVar5++;
		}
		uParam1->f_684.f_1[iVar4 /*9*/].f_2 = { func_536(uVar238, iVar4, 0f, 0f, 0f, bVar239) };
		uParam1->f_684.f_1[iVar4 /*9*/].f_5 = { func_536(uVar240, iVar4, 0f, 0f, 0f, bVar241) };
		uParam1->f_684.f_1[iVar4 /*9*/].f_8 = func_535(uVar242, iVar4, 0f, bVar243);
		iVar4++;
	}
	uParam1->f_766 = func_542(iVar244, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_766.f_1[iVar4 /*10*/] = func_543(uVar246, iVar4, -1, bVar247);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_766.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/] = func_543(uVar249[iVar5], iVar4, -1, iVar251[iVar5]);
			uParam1->f_766.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_1 = { func_536(uVar253[iVar5], iVar4, 0f, 0f, 0f, iVar255[iVar5]) };
			uParam1->f_766.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_4 = { func_536(uVar257[iVar5], iVar4, 0f, 0f, 0f, iVar259[iVar5]) };
			uParam1->f_766.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_7 = func_543(uVar261[iVar5], iVar4, 2000, iVar263[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_785[iVar4 /*6*/] = func_537(uVar267, iVar4, 0, bVar268);
		uParam1->f_785[iVar4 /*6*/].f_1 = func_543(uVar269, iVar4, 0, bVar270);
		uParam1->f_785[iVar4 /*6*/].f_2 = { func_536(uVar271, iVar4, 0f, 0f, 0f, bVar272) };
		uParam1->f_785[iVar4 /*6*/].f_5 = func_535(uVar273, iVar4, 0f, bVar274);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 9)
	{
		uParam1->f_792[iVar4 /*16*/] = { func_532(uVar276, iVar4, "", bVar277) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_937[iVar4 /*9*/] = { func_531(uVar280, iVar4, "", bVar281) };
		uParam1->f_937[iVar4 /*9*/].f_8 = func_543(uVar282, iVar4, -1, bVar283);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_937.f_10[iVar4 /*16*/] = { func_532(uVar285, iVar4, "", bVar286) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_964[iVar4 /*8*/] = { func_536(uVar288, iVar4, 0f, 0f, 0f, bVar289) };
		uParam1->f_964[iVar4 /*8*/].f_3 = func_535(uVar290, iVar4, 0f, bVar291);
		uParam1->f_964[iVar4 /*8*/].f_4 = func_543(uVar292, iVar4, -1, bVar293);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_964[iVar4 /*8*/].f_6[iVar5] = func_543(uVar294[iVar5], iVar4, 0, iVar296[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
}

struct<8> func_531(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<8> Var0;
	
	if (bParam3 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		StringCopy(&Var0, unk_0x79D9D0E778A09313(uParam0, iParam1), 32);
	}
	else
	{
		StringCopy(&Var0, sParam2, 32);
	}
	return Var0;
}

struct<16> func_532(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<16> Var0;
	
	if (bParam3 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		StringCopy(&Var0, unk_0x79D9D0E778A09313(uParam0, iParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

char* func_533(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		return unk_0x79D9D0E778A09313(uParam0, iParam1);
	}
	return sParam2;
}

int func_534(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		return unk_0xC52D94FB9A0DF81F(uParam0, iParam1);
	}
	return iParam2;
}

float func_535(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		return unk_0xE009CD6BE86E01BB(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_536(var uParam0, int iParam1, struct<3> Param2, bool bParam5)
{
	if (bParam5 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		return unk_0xE1FED37B7E267CA5(uParam0, iParam1);
	}
	return Param2;
}

int func_537(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		return unk_0x4B56D0BC936D6B69(uParam0, iParam1);
	}
	return iParam2;
}

int func_538(int iParam0, char* sParam1, int iParam2)
{
	if (func_539(iParam0) && unk_0x8F7B30F5D982073D(iParam0, sParam1) == 1)
	{
		return unk_0x98EB53BDF3A6E627(iParam0, sParam1);
	}
	return iParam2;
}

bool func_539(int iParam0)
{
	return iParam0 != 0;
}

float func_540(int iParam0, char* sParam1, float fParam2)
{
	if (func_539(iParam0) && unk_0x8F7B30F5D982073D(iParam0, sParam1) == 3)
	{
		return unk_0x10EE6D308E1ED34F(iParam0, sParam1);
	}
	return fParam2;
}

int func_541(int iParam0, char* sParam1, int iParam2)
{
	if (func_539(iParam0) && unk_0x8F7B30F5D982073D(iParam0, sParam1) == 2)
	{
		return unk_0xB09B53A347BF8B9E(iParam0, sParam1);
	}
	return iParam2;
}

int func_542(int iParam0, char* sParam1, int iParam2)
{
	if (func_539(iParam0) && unk_0x8F7B30F5D982073D(iParam0, sParam1) == 2)
	{
		return unk_0xB09B53A347BF8B9E(iParam0, sParam1);
	}
	return iParam2;
}

int func_543(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < unk_0x9E9888B157398849(uParam0))
	{
		return unk_0x4B56D0BC936D6B69(uParam0, iParam1);
	}
	return iParam2;
}

struct<16> func_544(int iParam0, char* sParam1, char* sParam2)
{
	struct<16> Var0;
	
	if (func_539(iParam0) && unk_0x8F7B30F5D982073D(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, unk_0xE6297DDA1009EDC2(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_545(int iParam0, char* sParam1)
{
	if (!func_539(iParam0))
	{
		return 0;
	}
	return unk_0x8F7B30F5D982073D(iParam0, sParam1);
}

void func_546(var uParam0, int iParam1, char* sParam2)
{
	if (!func_539(iParam1))
	{
		return;
	}
	if (!func_539(*uParam0) && unk_0x8F7B30F5D982073D(iParam1, sParam2) == 6)
	{
		*uParam0 = unk_0x79248942282C8E38(iParam1, sParam2);
		if (!func_539(*uParam0))
		{
		}
	}
	if (!func_539(*uParam0))
	{
	}
}

void func_547()
{
	if (unk_0xE52A8802193E5624() != 0)
	{
		unk_0x625B28E8C95F91F4();
	}
}

char* func_548()
{
	return func_549(func_551(), func_550());
}

char* func_549(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "DJ_KM_Skate_Clothing_1";
		
		case 1:
			return "DJ_KM_Pizza";
		
		case 2:
			return "DJ_KM_Chakra_Stones_1";
		
		case 3:
			return "DJ_MM_Rental_Car_1";
		
		case 4:
			return "DJ_MM_Slippers_1";
		
		case 5:
			return "DJ_PT_Equipment_1";
		
		case 6:
			return "DJ_PT_Champagne_1";
		
		default:
	}
	return "LoadedDataTest3";
}

int func_550()
{
	return Local_3649.f_502.f_1;
}

int func_551()
{
	return Local_3649.f_502;
}

void func_552()
{
	if (func_1189(21))
	{
		return;
	}
	func_553();
	func_145(21);
}

void func_553()
{
	switch (func_551())
	{
		case 0:
			func_1142();
			break;
		
		case 1:
			func_1087();
			break;
		
		case 2:
			func_869();
			break;
		
		case 4:
			func_819();
			break;
		
		case 3:
			func_699();
			break;
		
		case 6:
			func_638();
			break;
		
		case 5:
			func_554();
			break;
	}
}

void func_554()
{
	Local_1202.f_11 = 149136;
	Local_1202.f_3.f_1 = 149012;
	Local_1202.f_9 = 148765;
	Local_1202.f_9.f_1 = 146383;
	Local_1202.f_62.f_3.f_1 = 146325;
	Local_1202.f_62.f_3.f_3 = 146313;
	Local_1202.f_62.f_3.f_2 = 146301;
	Local_1202.f_62.f_3 = 146202;
	Local_1202.f_382.f_3.f_2 = 146186;
	Local_1202.f_54 = 146172;
	Local_1202.f_54.f_4 = 146160;
	Local_1202.f_54.f_3 = 146151;
	Local_1202.f_355 = 146106;
	Local_1202.f_355.f_1 = 146038;
	Local_1202.f_361.f_4 = 146028;
	Local_1202.f_361.f_3 = 145981;
	Local_1202.f_361.f_5 = 145949;
	Local_1202.f_24 = 145917;
	Local_1202.f_24.f_1.f_1 = 145877;
	Local_1202.f_24.f_1.f_2 = 145837;
	Local_1202.f_75.f_5 = 145827;
	Local_1202.f_75.f_12 = 145815;
	Local_1202.f_75.f_4 = 145804;
	Local_1202.f_75.f_21 = 145757;
	Local_1202.f_75.f_25 = 145658;
	Local_1202.f_75.f_17 = 145638;
	Local_1202.f_108.f_124 = 145497;
	Local_1202.f_108.f_92.f_12 = 145485;
	Local_1202.f_108.f_132 = 145410;
	Local_1202.f_108.f_18 = 145370;
	Local_1202.f_108.f_76 = 144986;
	Local_1202.f_108.f_76.f_3 = 144973;
	Local_1202.f_108 = 144313;
	Local_1202.f_350.f_1 = 144287;
	Local_1202.f_243.f_28 = 144227;
	Local_1202.f_243.f_29 = 144081;
	Local_1202.f_243.f_19 = 144068;
	Local_1202.f_38 = 144059;
}

int func_555()
{
	return 2;
}

float func_556(var uParam0)
{
	return 50f;
}

int func_557(int iParam0, var uParam1)
{
	if (Local_221.f_351.f_1[iParam0 /*13*/].f_2 == joaat("pony"))
	{
		uParam1->f_66 = joaat("pony");
		StringCopy(&(uParam1->f_1), "43GSP782", 16);
		*uParam1 = 3;
		uParam1->f_5 = 16;
		uParam1->f_6 = 16;
		uParam1->f_7 = 16;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_67 = 0;
		uParam1->f_69 = 1;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
		unk_0xBE20AB8238688965(&(uParam1->f_77), 1);
		return 1;
	}
	return 0;
}

void func_558(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xFF90B7B5F1AF504A(uParam1, 1, 1, 0);
			break;
		
		case 1:
			unk_0xFF90B7B5F1AF504A(uParam1, 0, 1, 0);
			unk_0xFF90B7B5F1AF504A(uParam1, 1, 1, 0);
			break;
	}
}

bool func_559(var uParam0, var uParam1, var uParam2)
{
	return func_560() != 0;
}

int func_560()
{
	return func_20();
}

void func_561(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_573(iParam0, 0, 9);
			func_571(iParam0, 0, 1, 144921);
			func_573(iParam0, 1, 20);
			func_571(iParam0, 1, 2, 144802);
			func_573(iParam0, 2, 7);
			break;
		
		case 1:
			func_573(iParam0, 0, 10);
			break;
		
		case 2:
			func_573(iParam0, 0, 9);
			func_571(iParam0, 0, 1, 144921);
			func_573(iParam0, 1, 17);
			func_568(iParam0, 1, 144788);
			func_566(iParam0, 1, 144737);
			func_571(iParam0, 1, 1, 144680);
			func_571(iParam0, 1, 2, 144539);
			func_573(iParam0, 2, 7);
			break;
		
		case 3:
			break;
		
		default:
			func_573(iParam0, 0, 9);
			func_571(iParam0, 0, 1, 144802);
			func_573(iParam0, 1, 7);
			break;
	}
}

bool func_562(var uParam0, int iParam1)
{
	return ((Local_3649.f_502.f_4 >= 14 && func_563(uParam0, iParam1)) && func_85(1));
}

bool func_563(var uParam0, int iParam1)
{
	return func_564(iParam1, func_575(uParam0), 1) <= 9f;
}

float func_564(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	if (!bParam4)
	{
		Var0.f_2 = 0f;
		Param1.f_2 = 0f;
	}
	return SYSTEM::VDIST2(Var0, Param1);
}

bool func_565(var uParam0, int iParam1)
{
	return (Local_3649.f_502.f_4 < 14 && func_563(uParam0, iParam1));
}

void func_566(int iParam0, int iParam1, int iParam2)
{
	Local_2043[iParam0 /*99*/].f_1[iParam1 /*13*/].f_9 = iParam2;
}

void func_567(var uParam0, var uParam1)
{
	Local_3649.f_502.f_4++;
}

void func_568(int iParam0, int iParam1, int iParam2)
{
	Local_2043[iParam0 /*99*/].f_1[iParam1 /*13*/].f_8 = iParam2;
}

void func_569(var uParam0, int iParam1)
{
	unk_0x9B94F6169B0DAEFD(iParam1);
}

bool func_570(int iParam0, var uParam1)
{
	return func_84(iParam0);
}

void func_571(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2043[iParam0 /*99*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_2043[iParam0 /*99*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_2043[iParam0 /*99*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_2043[iParam0 /*99*/].f_1[iParam1 /*13*/].f_12++;
}

bool func_572(var uParam0, var uParam1)
{
	return func_3(1);
}

void func_573(int iParam0, int iParam1, int iParam2)
{
	Local_2043[iParam0 /*99*/].f_1[iParam1 /*13*/] = iParam2;
	Local_2043[iParam0 /*99*/]++;
}

float func_574(var uParam0)
{
	return 1000f;
}

Vector3 func_575(var uParam0)
{
	switch (Local_3649.f_502.f_4)
	{
		case 0:
			return -591.0623f, -1166.539f, 21.1782f;
		
		case 1:
			return -620.3408f, -1165.117f, 21.1782f;
		
		case 2:
			return -621.4808f, -1101.907f, 21.1781f;
		
		case 3:
			return -614.5312f, -1073.422f, 21.3785f;
		
		case 4:
			return -616.4337f, -1034.042f, 20.7875f;
		
		case 5:
			return -623.31f, -996.9479f, 20.0253f;
		
		case 6:
			return -668.8128f, -1031.397f, 16.6584f;
		
		case 7:
			return -713.4483f, -1060.382f, 13.0133f;
		
		case 8:
			return -738.2045f, -1016.511f, 13.9066f;
		
		case 9:
			return -760.2473f, -978.169f, 14.644f;
		
		case 10:
			return -726.4073f, -968.7161f, 17.1713f;
		
		case 11:
			return -695.4406f, -947.1296f, 18.8838f;
		
		case 12:
			return -695.2433f, -923.0771f, 22.0752f;
		
		case 13:
			return -695.4212f, -910.3208f, 22.0774f;
		
		case 14:
			return -692.1169f, -908.2917f, 22.6719f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_576(var uParam0)
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[1 /*22*/]))
	{
		return 0;
	}
	return unk_0x62D2FF718BC7717D(Local_3649.f_62[1 /*22*/]);
}

void func_577(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[2 /*22*/]))
	{
		return;
	}
	if (Param1.f_5 && Param1 == unk_0x62D2FF718BC7717D(Local_3649.f_62[2 /*22*/]))
	{
		unk_0x45F588C0DD767737(unk_0x3C6C6327BA564AEE(Local_3649.f_62[2 /*22*/]), 8, 0, 0, 0);
	}
}

char* func_578(var uParam0)
{
	return "IDJ_PT_THIEF_B";
}

void func_579(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0x45F588C0DD767737(iParam1, 0, 0, 2, 0);
			unk_0x45F588C0DD767737(iParam1, 3, 1, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 4, 0, 1, 0);
			break;
		
		case 1:
			unk_0x0DC39BE87E4C5599(iParam1, false);
			unk_0xD51BD2949F557887(iParam1, 1, 0);
			break;
		
		case 2:
			unk_0x16E50383DEE2A560(iParam1, 400);
			unk_0x697DA7132EE43ABC(iParam1, 400, 0);
			unk_0x0DC39BE87E4C5599(iParam1, false);
			unk_0x45F588C0DD767737(iParam1, 8, 1, 0, 0);
			break;
		
		case 3:
			unk_0x697DA7132EE43ABC(iParam1, 0, 0);
			break;
	}
}

bool func_580(var uParam0)
{
	return Local_3649.f_62[2 /*22*/].f_1 == 6;
}

void func_581(var uParam0)
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = 2;
	func_582(5, &Var0);
}

void func_582(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = -1161523894;
	Var0.f_1 = iLocal_3570;
	Var0.f_2 = iParam0;
	Var0.f_3 = { *iParam1 };
	unk_0xB802750B43D4047C(1, &Var0, 5, func_68(1));
}

Vector3 func_583(var uParam0)
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[2 /*22*/]))
	{
		return 0f, 0f, 0f;
	}
	return unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_3649.f_62[2 /*22*/]), 0);
}

int func_584(var uParam0)
{
	return 676;
}

char* func_585(var uParam0)
{
	return "IDJ_PT_EQ_BLIP";
}

int func_586(var uParam0)
{
	return 18;
}

char* func_587(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 2:
				return "IDJ_T_PT_EQ_EQb";
			}
		
		default:
	}
	return "";
}

char* func_588(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 2:
				return "IDJ_T_PT_EQ_EQa";
			}
		
		default:
	}
	return "";
}

int func_589()
{
	if (func_560() == 0)
	{
		return !func_11(&uLocal_5109, 6000, 0);
	}
	return 0;
}

char* func_590(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_PTEQ_A";
		
		default:
	}
	return "";
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_560() == 0 && func_11(&uLocal_5109, 5000, 0));
		
		default:
	}
	return 0;
}

int func_592(var uParam0)
{
	return 158;
}

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_560() == 0;
			break;
		
		case 1:
			return (func_560() == 1 && func_11(&uLocal_5124, 3000, 0));
			break;
	}
	return 0;
}

char* func_594(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_PT_HLP_DJEQ";
		
		case 1:
			return "IDJ_PT_HLP_THIE";
		
		default:
	}
	return "";
}

int func_595(var uParam0)
{
	return 1;
}

char* func_596(var uParam0)
{
	return "IDJ_PT_FOCUS";
}

bool func_597(var uParam0)
{
	return func_560() == 1;
}

Vector3 func_598()
{
	return func_199(func_201());
}

int func_599(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return func_600();
		
		case 2:
			return func_560() == 3;
		
		default:
	}
	return 0;
}

int func_600()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_221.f_72.f_254)
	{
		if (func_85(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_601()
{
	return "HEI4_MUSIC_STOP";
}

char* func_602()
{
	return "HEI4_FAIL";
}

char* func_603(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_SUSPENSE_START";
		
		case 1:
			return "HEI4_MED_INTENSITY";
		
		case 2:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_604()
{
	func_628(0, 4, 148742);
	func_627(0, 1, 1);
	func_628(1, 7, 148605);
	func_627(1, 2, 2);
	func_606(2, 3, 4, 5, 6, 148287, 148259, 146752, 148287, 1);
	func_628(6, 44, 146462);
}

void func_605()
{
}

void func_606(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
	func_628(iVar0, 22, iParam5);
	func_607(iVar0, iParam4);
	func_607(iVar0, iVar1);
	func_607(iVar0, iVar4);
	func_607(iVar0, iVar5);
	func_607(iVar0, iVar2);
	func_628(iVar1, 24, iParam6);
	func_607(iVar1, iParam4);
	func_607(iVar1, iVar4);
	func_607(iVar1, iVar5);
	func_607(iVar1, iVar2);
	func_628(iVar2, 25, iParam7);
	func_607(iVar2, iParam4);
	func_607(iVar2, iVar4);
	func_607(iVar2, iVar5);
	func_628(iVar3, 23, iParam8);
	func_607(iVar3, iParam4);
	func_607(iVar3, iVar1);
	func_607(iVar3, iVar4);
	func_607(iVar3, iVar5);
	func_607(iVar3, iVar2);
}

void func_607(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1832[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_1832[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1832[iParam0 /*21*/].f_19++;
}

void func_608()
{
	func_609("IDJ_HLPDELV_T", "IDJ_PT_EQUIP", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_609(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_610(sParam0, sParam1, sParam2, bParam5, iParam3))
	{
		Global_1312603 = 13;
		Global_1312603.f_56 = iParam3;
		Global_1312603.f_57 = iParam4;
	}
}

int func_610(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam1) > 63)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam2))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam2) > 63)
	{
		return 0;
	}
	if (func_620(sParam0, sParam1, sParam2) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_614();
	Global_1312603 = 10;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	StringCopy(&(Global_1312603.f_32), sParam2, 64);
	Global_1312603.f_58 = uParam4;
	Global_1312603.f_56 = uParam4;
	func_613();
	func_612(bParam3);
	func_611();
	return 1;
}

void func_611()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), 1);
}

void func_612(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_1312603.f_59), 0);
}

void func_613()
{
	Global_1312603.f_10 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 86400000);
	Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
}

void func_614()
{
	func_616();
	func_615(0);
}

void func_615(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x25DDB354A40FFCDB();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x6CAAB7E78B5D978A();
		Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
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

void func_616()
{
	if (!func_619())
	{
	}
	if (func_618())
	{
		unk_0x6BF33E036B49E0DD(&(Global_1312603.f_12));
		func_617();
		unk_0x9F579D40FBAC4233();
	}
}

void func_617()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			unk_0x42710E9E08FA375A(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_618()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_619()
{
	if (!func_618())
	{
		return 0;
	}
	unk_0xCD7691F7F3015C57(&(Global_1312603.f_12));
	func_617();
	return unk_0x5E0AC8AED85CE7CB();
}

bool func_620(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_618())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam2))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12)))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam1) == unk_0x856D5567211886A2(&(Global_1312603.f_16)))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam2) == unk_0x856D5567211886A2(&(Global_1312603.f_32));
}

void func_621()
{
	func_609("IDJ_DELIVER_THE", "IDJ_PT_EQUIP", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_622()
{
	func_623("IDJ_RECOVER", "IDJ_PT_EQUIP", 18, 0);
}

void func_623(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_624(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 19;
		Global_1312603.f_56 = iParam2;
	}
}

int func_624(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (func_625(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_614();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = uParam3;
	Global_1312603.f_56 = uParam3;
	func_613();
	func_612(bParam2);
	func_611();
	return 1;
}

bool func_625(char* sParam0, char* sParam1)
{
	if (!func_618())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12)))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam1) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

void func_626()
{
	func_623("ILH_STOP_THE", "IDJ_THIEVES", 6, 0);
}

void func_627(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = Local_1832[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_1832[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1832[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_1832[iParam0 /*21*/].f_19++;
}

void func_628(int iParam0, int iParam1, int iParam2)
{
	Local_1832[iParam0 /*21*/] = iParam1;
	Local_1832[iParam0 /*21*/].f_20 = iParam2;
	iLocal_3584++;
}

void func_629()
{
	func_623("ILH_GOTO_THE", "IDJ_LOC_PIRATE", 12, 0);
}

void func_630()
{
	func_634(0, 4);
	func_633(0, 1);
	func_634(1, 7);
	func_631(1, 2, 148909);
	func_634(2, 22);
	func_633(2, 3);
	func_634(3, 24);
	func_633(3, 4);
	func_634(4, 44);
}

void func_631(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1671[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_1671[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1671[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_1671[iParam0 /*20*/].f_19++;
}

bool func_632()
{
	return Local_3649.f_62[2 /*22*/].f_1 == 6;
}

void func_633(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1671[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_1671[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1671[iParam0 /*20*/].f_19++;
}

void func_634(int iParam0, int iParam1)
{
	Local_1671[iParam0 /*20*/] = iParam1;
	iLocal_3583++;
}

void func_635()
{
	int iVar0;
	
	if (unk_0x3D70CCF2C9B362CD(Local_3649.f_327[0 /*6*/]))
	{
		iVar0 = unk_0x770D3B2B4702434A(Local_3649.f_327[0 /*6*/]);
		if (((func_150(0, 6) && unk_0xAA5B806352173DEA(iVar0)) && unk_0xB064AF9925F5537B(iVar0, -1, 0)) && !unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			unk_0xC160551F55D6365A(iVar0, 1, 1, 0);
			unk_0x0A9768A52FEE2064(iVar0, 1);
			unk_0xC4DB45F7A0864686(iVar0, 1);
			unk_0x2B8A0A599794F3B9(iVar0);
			unk_0xE096849E490C2EC2(iVar0, "RADIO_35_DLC_HEI4_MLR");
		}
	}
}

void func_636()
{
	Local_221.f_18 = 1;
	Local_221.f_18.f_5[0 /*12*/].f_2 = 1348391436;
	Local_221.f_575 = 30;
	Local_221.f_575.f_1 = 2;
	func_637(0, 24);
}

void func_637(int iParam0, int iParam1)
{
	if (func_15(&(Local_221.f_351.f_1[iParam0 /*13*/]), iParam1))
	{
	}
}

void func_638()
{
	Local_1202.f_11 = 152541;
	Local_1202.f_3.f_2 = 152448;
	Local_1202.f_3.f_2.f_1 = 152369;
	Local_1202.f_9 = 152287;
	Local_1202.f_9.f_1 = 152060;
	Local_1202.f_62.f_3.f_3 = 146313;
	Local_1202.f_62.f_3.f_2 = 146301;
	Local_1202.f_62.f_1 = 151941;
	Local_1202.f_62 = 151874;
	Local_1202.f_382.f_3.f_2 = 151858;
	Local_1202.f_75.f_12 = 151846;
	Local_1202.f_75.f_4 = 151836;
	Local_1202.f_75.f_18 = 151823;
	Local_1202.f_75.f_28 = 151788;
	Local_1202.f_108.f_124 = 151726;
	Local_1202.f_108 = 151693;
	Local_1202.f_319.f_4 = 151607;
	Local_1202.f_319.f_3 = 151585;
	Local_1202.f_38 = 144059;
	Local_1202.f_243.f_28 = 151437;
	Local_1202.f_243.f_29 = 151301;
	Local_1202.f_243.f_32 = 150969;
	Local_1202.f_243.f_33 = 150969;
	Local_1202.f_352 = 150936;
	Local_1202.f_352.f_1 = 150913;
	Local_1202.f_3.f_1 = 150293;
	Local_1202.f_3 = 150164;
	Local_1202.f_355.f_1 = 149847;
	Local_1202.f_355 = 149763;
	Local_1202.f_361.f_4 = 149753;
	Local_1202.f_361.f_3 = 149675;
	Local_1202.f_361.f_5 = 149630;
	Local_1202.f_24 = 149586;
}

int func_639()
{
	if (func_640() == 0)
	{
		return !func_11(&uLocal_5109, 6000, 0);
	}
	return 0;
}

int func_640()
{
	return func_20();
}

char* func_641(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_PTCP_A";
		
		case 1:
			return "IDJ_TX_P_PTCP_U";
		
		default:
	}
	return "";
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_640() == 0 && func_11(&uLocal_5109, 5000, 0));
		
		case 1:
			return (func_640() == 3 && func_11(&uLocal_5126, 5000, 0));
		
		default:
	}
	return 0;
}

int func_643(var uParam0)
{
	return 158;
}

char* func_644(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_PT_HLP_STRT";
		
		case 1:
			return "IDJ_PT_HLP_SRCe";
		
		case 2:
			return "IDJ_PT_HLP_SRCt";
		
		case 3:
			return "IDJ_PT_HLP_TRK";
		
		case 4:
			return "IDJ_PT_HLP_SPD";
		
		default:
	}
	return "";
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_640() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_640() == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_648(0))
			{
				return 1;
			}
			break;
		
		case 3:
			return (func_640() == 3 && func_11(&uLocal_5126, 5000, 0));
			break;
		
		case 4:
			return (func_640() == 3 && func_646());
			break;
	}
	return 0;
}

int func_646()
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[1 /*6*/]))
	{
		return 0;
	}
	if (unk_0xE0B3BC41DDA88DF0(iLocal_3571, unk_0x770D3B2B4702434A(Local_3649.f_327[1 /*6*/]), 0))
	{
		if (unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(unk_0x62D2FF718BC7717D(Local_3649.f_327[1 /*6*/]))) > func_647())
		{
			return 1;
		}
	}
	return 0;
}

float func_647()
{
	switch (func_551())
	{
		case 6:
			return 22f;
		
		default:
	}
	return 22f;
}

bool func_648(int iParam0)
{
	return func_649(&(Local_3649.f_409), iParam0);
}

bool func_649(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0xCE990E643CD9D0E5((*uParam0)[iVar0], iVar1);
}

void func_650()
{
	func_651(0);
}

void func_651(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (Local_4188[iVar0 /*114*/].f_69 > 0 && Local_3649.f_502.f_3 > Local_4188[iVar0 /*114*/].f_104)
			{
				Local_3649.f_502.f_3 = Local_4188[iVar0 /*114*/].f_104;
			}
		}
		iVar0++;
	}
	if (Local_3649.f_502.f_3 <= 0f)
	{
		func_58(iParam0, 3);
	}
}

void func_652()
{
	func_659();
	func_653(0);
}

void func_653(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_59(iParam0);
	if (unk_0x3D70CCF2C9B362CD(Local_3649.f_327[iVar0 /*6*/]))
	{
		iVar1 = unk_0x62D2FF718BC7717D(Local_3649.f_327[iVar0 /*6*/]);
		if (func_658(iVar1) && unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(iVar1)) > func_647())
		{
			if (!func_657(iParam0))
			{
				return;
			}
			if (!func_655(iLocal_3570, 1))
			{
				return;
			}
			if (func_11(&uLocal_5105, 500, 0))
			{
				func_24(&uLocal_5105);
				func_654(5f);
			}
		}
		else if (func_13(&uLocal_5105))
		{
			func_24(&uLocal_5105);
		}
	}
}

void func_654(float fParam0)
{
	Local_4188[unk_0x59E2AD1A8ACEDA31() /*114*/].f_104 = (Local_4188[unk_0x59E2AD1A8ACEDA31() /*114*/].f_104 - fParam0);
	if (Local_4188[unk_0x59E2AD1A8ACEDA31() /*114*/].f_104 < 0f)
	{
		Local_4188[unk_0x59E2AD1A8ACEDA31() /*114*/].f_104 = 0f;
	}
}

int func_655(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_3241[iVar0 /*7*/].f_4 == iParam0)
		{
			if (bParam1)
			{
				if (func_656(iVar0, iLocal_3573, 6) || func_6(iVar0, 4))
				{
					return 0;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_656(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_4188[iParam1 /*114*/].f_3[iParam0 /*3*/]), iParam2);
}

int func_657(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 < 0 || iParam0 > 3) || !unk_0x3D70CCF2C9B362CD(Local_3649.f_2[iParam0]))
	{
		return 0;
	}
	if (unk_0x663F84E7375B82E6(Local_3649.f_2[iParam0]))
	{
		if (!unk_0xF05B7723022657B3(Local_3649.f_2[iParam0]))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = unk_0x62D2FF718BC7717D(Local_3649.f_2[iParam0]);
		fVar1 = SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(iVar0, 1));
		iVar2 = 0;
		while (iVar2 < unk_0xEFA28384DDD283E1())
		{
			if (unk_0xBD09DF93F957A0CF(iVar2))
			{
				iVar3 = unk_0x1FA7B77001D60F9D(unk_0x9019589211A13B02(iVar2));
				if (SYSTEM::VDIST2(unk_0x3E4D3CCC220BDFB1(iVar3, 1), unk_0x3E4D3CCC220BDFB1(iVar0, 1)) < fVar1)
				{
					return 0;
				}
			}
			iVar2++;
		}
	}
	return 1;
}

int func_658(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_659()
{
	if (Local_3649.f_502.f_3 < Local_4188[unk_0x59E2AD1A8ACEDA31() /*114*/].f_104)
	{
		Local_4188[unk_0x59E2AD1A8ACEDA31() /*114*/].f_104 = Local_3649.f_502.f_3;
	}
}

int func_660(var uParam0)
{
	return SYSTEM::ROUND(Local_4188[unk_0x59E2AD1A8ACEDA31() /*114*/].f_104);
}

bool func_661(var uParam0)
{
	return func_662(3);
}

bool func_662(int iParam0)
{
	return func_4(&(Local_3649.f_500), iParam0);
}

void func_663(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	int iVar0;
	float fVar1;
	
	if (func_150(iParam0, 14))
	{
		iVar0 = func_667(iParam0);
		if (!func_657(iVar0))
		{
			return;
		}
		if (func_13(&uLocal_5103) && !func_11(&uLocal_5103, 200, 0))
		{
			return;
		}
		else
		{
			func_24(&uLocal_5103);
			func_12(&uLocal_5103, 0, 0);
		}
		fVar1 = func_664(&uParam1);
		if (fVar1 > 0f)
		{
			func_654(fVar1);
		}
	}
}

float func_664(var uParam0)
{
	float fVar0;
	
	fVar0 = (uParam0->f_2 * 50f);
	if (fVar0 > func_666(0, 0))
	{
		if (func_665(uParam0))
		{
			if (fVar0 > func_666(1, 1))
			{
				fVar0 = func_666(1, 1);
			}
		}
		if (fVar0 > func_666(1, 0))
		{
			fVar0 = func_666(1, 0);
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

int func_665(var uParam0)
{
	if (uParam0->f_6 == joaat("weapon_rammed_by_car") || uParam0->f_6 == joaat("weapon_run_over_by_car"))
	{
		return 1;
	}
	return 0;
}

float func_666(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return 20f;
		}
		else
		{
			return 30f;
		}
	}
	return 5f;
}

int func_667(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (Local_3649.f_2.f_32[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_668(int iParam0, var uParam1)
{
	switch (Local_221.f_351.f_1[iParam0 /*13*/].f_2)
	{
		case joaat("mule"):
			uParam1->f_66 = joaat("mule");
			StringCopy(&(uParam1->f_1), "15SBF953", 16);
			uParam1->f_5 = 111;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xBE20AB8238688965(&(uParam1->f_77), 6);
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_669(int iParam0, int iParam1)
{
	switch (Local_221.f_351.f_1[iParam0 /*13*/].f_2)
	{
		case joaat("mule"):
			unk_0x289D342D7C2DA52A(iParam1, 3);
			unk_0x463F70A7E1EF1482(iParam1, 15f);
			unk_0x9CC6357234EC5D4A(iParam1, 6);
			unk_0x7C3ECA5C7ACE0DDB(iParam1, 0, 5, 0.4f);
			unk_0x70736E63608BE77D(iParam1, 1);
			break;
		
		case joaat("bodhi2"):
			unk_0x289D342D7C2DA52A(iParam1, 3);
			unk_0x463F70A7E1EF1482(iParam1, 15f);
			unk_0x7C3ECA5C7ACE0DDB(iParam1, 4, 5, 0.25f);
			unk_0x0FC504FAF5EB94FB(iParam1, 51f);
			unk_0x9CC6357234EC5D4A(iParam1, 6);
			unk_0xE096849E490C2EC2(iParam1, "RADIO_11_TALK_02");
			break;
	}
}

Vector3 func_670(var uParam0)
{
	return Local_221.f_351.f_1[1 /*13*/].f_3;
}

int func_671(int iParam0)
{
	if (Local_3328.f_1 < (Local_221.f_740.f_1[iParam0 /*12*/].f_8 * Local_221.f_740.f_1[iParam0 /*12*/].f_8))
	{
		if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[1 /*6*/]))
		{
			return 0;
		}
		return unk_0xA38BFCB05DBE439D(unk_0x62D2FF718BC7717D(Local_3649.f_327[1 /*6*/]));
	}
	return 0;
}

void func_672(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_573(iParam0, 0, 9);
			break;
	}
}

void func_673(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0x45F588C0DD767737(iParam1, 0, 0, 1, 0);
			unk_0x45F588C0DD767737(iParam1, 3, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 4, 0, 0, 0);
			unk_0x697DA7132EE43ABC(iParam1, 0, 0);
			break;
	}
}

void func_674(var uParam0)
{
	func_675(17);
}

void func_675(int iParam0)
{
	if (func_15(&(Local_221.f_16), iParam0))
	{
	}
}

float func_676(var uParam0)
{
	return 25f;
}

int func_677(var uParam0)
{
	return 225;
}

char* func_678(var uParam0)
{
	return "IDJ_DELVRTRK_B";
}

Vector3 func_679()
{
	return func_200(func_201());
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (unk_0x3D70CCF2C9B362CD(Local_3649.f_327[1 /*6*/]) && unk_0xE0B3BC41DDA88DF0(iLocal_3571, unk_0x770D3B2B4702434A(Local_3649.f_327[1 /*6*/]), 0));
			break;
	}
	return 0;
}

int func_681(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (unk_0x3D70CCF2C9B362CD(Local_3649.f_327[1 /*6*/]) && func_682(uParam0, "bottles_loop", unk_0x770D3B2B4702434A(Local_3649.f_327[1 /*6*/]), "dlc_btl_stolen_supplies_Sounds", 0, 0));
			break;
	}
	return 0;
}

int func_682(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (*uParam0 == -1)
	{
		*uParam0 = unk_0x5E54B0823F46079E();
		unk_0x2DB2D4C3CB88500D(*uParam0, sParam1, iParam2, sParam3, iParam4, iParam5);
		return 1;
	}
	return 0;
}

void func_683()
{
	func_628(0, 4, 152264);
	func_627(0, 1, 1);
	func_628(1, 5, 152241);
	func_627(1, 2, 2);
	func_606(2, 3, 4, 5, 6, 152218, 152190, 152162, 152139, 1);
	func_628(6, 44, 146462);
}

void func_684()
{
	func_623("IDJ_RECOVER", "IDJ_DELVRTRK", 9, 0);
}

void func_685()
{
	func_609("IDJ_HLPDELV_T", "IDJ_TRUCK", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_686()
{
	func_609("IDJ_DELIVER_THE", "IDJ_TRUCK", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_687()
{
	func_623("IDJ_RECOVER", "IDJ_DELVRTRK", 9, 0);
}

void func_688()
{
	func_623("IDJ_MM_SEARCH", "IDJ_MM_AREA", 12, 0);
}

void func_689()
{
	func_623("ILH_GOTO", "IDJ_MM_GRAPE", 12, 0);
}

void func_690()
{
	func_634(0, 4);
	func_633(0, 1);
	func_634(1, 5);
	func_631(1, 2, 152356);
	func_634(2, 22);
	func_633(2, 3);
	func_634(3, 24);
	func_633(3, 4);
	func_634(4, 44);
}

bool func_691()
{
	return func_648(0);
}

void func_692(var uParam0, int iParam1)
{
	if (!bLocal_3568)
	{
		return;
	}
	if (func_694(iParam1, 3))
	{
		func_693(3);
	}
}

void func_693(int iParam0)
{
	if (func_15(&(Local_3649.f_500), iParam0))
	{
	}
}

bool func_694(int iParam0, int iParam1)
{
	return func_4(&(Local_4188[iParam0 /*114*/].f_102), iParam1);
}

void func_695()
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[1 /*6*/]))
	{
		return;
	}
	if (!func_662(3))
	{
		if (unk_0xE0B3BC41DDA88DF0(iLocal_3571, unk_0x770D3B2B4702434A(Local_3649.f_327[1 /*6*/]), 0))
		{
			func_696(3);
		}
	}
}

void func_696(int iParam0)
{
	if (func_15(&(Local_4188[iLocal_3572 /*114*/].f_102), iParam0))
	{
	}
}

void func_697()
{
	func_698(0, 15);
	func_637(1, 9);
	Local_221.f_589.f_1[0 /*11*/].f_3 = 200f;
	Local_221.f_740 = 1;
	Local_221.f_740.f_1[0 /*12*/].f_4 = { Local_221.f_589.f_1[0 /*11*/] };
	Local_221.f_740.f_1[0 /*12*/].f_7 = 200f;
	Local_221.f_740.f_1[0 /*12*/].f_8 = 25f;
	Local_221.f_778[0 /*6*/] = 2;
	Local_221.f_778[0 /*6*/].f_1 = "IDJ_HUD_CMPGNE";
	Local_221.f_778[0 /*6*/].f_2 = 1000;
	Local_221.f_575 = 30;
	Local_221.f_575.f_1 = 2;
}

void func_698(int iParam0, int iParam1)
{
	if (func_15(&(Local_221.f_18.f_5[iParam0 /*12*/]), iParam1))
	{
	}
}

void func_699()
{
	Local_1202.f_11 = 160808;
	Local_1202.f_3.f_1 = 159455;
	Local_1202.f_3.f_2 = 159029;
	Local_1202.f_9 = 158710;
	Local_1202.f_9.f_1 = 157802;
	Local_1202.f_62.f_3.f_1 = 157744;
	Local_1202.f_62.f_3.f_3 = 146313;
	Local_1202.f_62.f_3.f_2 = 146301;
	Local_1202.f_62.f_3 = 157690;
	Local_1202.f_382.f_3.f_2 = 157674;
	Local_1202.f_108.f_109.f_1 = 157663;
	Local_1202.f_108.f_109 = 157603;
	Local_1202.f_108.f_109.f_3 = 157577;
	Local_1202.f_108.f_124 = 157422;
	Local_1202.f_108.f_92.f_12 = 157390;
	Local_1202.f_108.f_92.f_4 = 157362;
	Local_1202.f_108.f_92.f_5 = 157335;
	Local_1202.f_108.f_92 = 157257;
	Local_1202.f_108.f_92.f_9 = 157231;
	Local_1202.f_108.f_125 = 157046;
	Local_1202.f_108.f_131 = 156990;
	Local_1202.f_108.f_133 = 156925;
	Local_1202.f_108.f_123 = 156888;
	Local_1202.f_108.f_85.f_1.f_5 = 156805;
	Local_1202.f_108 = 156172;
	Local_1202.f_108.f_72 = 156163;
	Local_1202.f_108.f_72.f_3 = 156125;
	Local_1202.f_108.f_72.f_1 = 156099;
	Local_1202.f_108.f_72.f_2 = 156065;
	Local_1202.f_108.f_21.f_1 = 156056;
	Local_1202.f_108.f_21.f_2 = 156014;
	Local_1202.f_108.f_85.f_1.f_1 = 155984;
	Local_1202.f_108.f_85.f_1.f_4 = 155975;
	Local_1202.f_75.f_12 = 155963;
	Local_1202.f_75.f_4 = 155952;
	Local_1202.f_75.f_9 = 155943;
	Local_1202.f_75.f_18 = 155930;
	Local_1202.f_24 = 155876;
	Local_1202.f_382 = 155490;
	Local_1202.f_243.f_28 = 155454;
	Local_1202.f_243.f_29 = 155321;
	Local_1202.f_54 = 155289;
	Local_1202.f_54.f_3 = 155280;
	Local_1202.f_54.f_4 = 155268;
	Local_1202.f_355.f_1 = 155098;
	Local_1202.f_355 = 155040;
	Local_1202.f_361.f_4 = 155030;
	Local_1202.f_361.f_3 = 154983;
	Local_1202.f_361.f_5 = 154951;
	Local_1202.f_24.f_1.f_1 = 154911;
	Local_1202.f_24.f_1.f_2 = 154871;
	Local_1202.f_24.f_1 = 154845;
	Local_1202.f_367.f_12 = 154670;
	Local_1202.f_367.f_8 = 154658;
	Local_1202.f_367.f_11 = 153578;
	Local_1202.f_367.f_9 = 153566;
	Local_1202.f_367.f_13 = 153557;
	Local_1202.f_367.f_6 = 153548;
	Local_1202.f_367.f_5 = 153539;
	Local_1202.f_367.f_14 = 153496;
	Local_1202.f_367.f_3 = 153460;
	Local_1202.f_38 = 144059;
}

int func_700(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_701(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_696(6);
			break;
		
		case 5:
			func_696(7);
			break;
	}
}

int func_702()
{
	return -1;
}

int func_703(var uParam0, var uParam1)
{
	return 2;
}

int func_704(var uParam0, var uParam1)
{
	return 0;
}

char* func_705(var uParam0, var uParam1)
{
	return "HS4_MOODY";
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_715(0, iLocal_3573, 1);
		
		case 1:
			return func_694(iLocal_3573, 0);
		
		case 2:
			if ((unk_0x99BF74E1D085CEA6(iLocal_3570) && !func_694(iLocal_3573, 2)) && func_715(0, iLocal_3573, 1))
			{
				if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
				{
					return 0;
				}
				if (!func_714() && unk_0xEEB37DB9533AA764(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/])))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 3:
			if (func_694(iLocal_3573, 2))
			{
				if (func_11(&uLocal_5117, 2000, 0))
				{
					func_24(&uLocal_5117);
					return 1;
				}
			}
			return 0;
			break;
		
		case 4:
			if (func_713() == 2 && func_711(3))
			{
				if (func_11(&uLocal_5117, 10000, 0))
				{
					func_24(&uLocal_5117);
					return 1;
				}
			}
			return 0;
			break;
		
		case 5:
			if (func_713() == 3 && func_711(4))
			{
				unk_0xC4CC25B68A91D144(-1, "Phone_Text_Arrive", "DLC_H4_MM_Sounds", 1);
				return 1;
			}
			return 0;
			break;
		
		case 6:
			if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[0 /*6*/]))
			{
				return 0;
			}
			if (unk_0xA38BFCB05DBE439D(unk_0x62D2FF718BC7717D(Local_3649.f_327[0 /*6*/])))
			{
				if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
				{
					return 0;
				}
				if (unk_0xD44D03437956A1ED(unk_0x62D2FF718BC7717D(Local_3649.f_62[0 /*22*/]), unk_0x62D2FF718BC7717D(Local_3649.f_327[0 /*6*/]), 287))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 7:
			if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
			{
				return 0;
			}
			return ((func_713() == 5 && unk_0xEEB37DB9533AA764(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]))) && !func_710());
			break;
		
		case 8:
			if (func_709())
			{
				if (func_11(&uLocal_5117, 2000, 0))
				{
					func_24(&uLocal_5117);
					return 1;
				}
			}
			break;
		
		case 9:
			if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[0 /*6*/]))
			{
				return 0;
			}
			return unk_0x95C3F62F0982F1E0(unk_0x770D3B2B4702434A(Local_3649.f_327[0 /*6*/]), 1148846080, 1148846080, 1148846080, 1148846080, 1148846080, 1148846080) < 90f;
			break;
		
		case 10:
			if (func_713() == 6 && func_711(8))
			{
				if (func_11(&uLocal_5117, 10000, 0))
				{
					func_24(&uLocal_5117);
					return 1;
				}
			}
			return 0;
			break;
		
		case 11:
			return ((func_713() == 6 && func_707()) && Local_3241[0 /*7*/].f_2 < 200f);
	}
	return 0;
}

var func_707()
{
	return (func_708() && func_709());
}

bool func_708()
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[0 /*6*/]))
	{
		return 0;
	}
	return unk_0xE0B3BC41DDA88DF0(iLocal_3571, unk_0x770D3B2B4702434A(Local_3649.f_327[0 /*6*/]), 0);
}

bool func_709()
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
	{
		return 0;
	}
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[0 /*6*/]))
	{
		return 0;
	}
	return unk_0xE0B3BC41DDA88DF0(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]), unk_0x770D3B2B4702434A(Local_3649.f_327[0 /*6*/]), 0);
}

bool func_710()
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[1 /*22*/]))
	{
		return 0;
	}
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[2 /*22*/]))
	{
		return 0;
	}
	return (!func_658(unk_0x3C6C6327BA564AEE(Local_3649.f_62[1 /*22*/])) && !func_658(unk_0x3C6C6327BA564AEE(Local_3649.f_62[2 /*22*/])));
}

bool func_711(int iParam0)
{
	return (func_712(iParam0) && Local_3341.f_2 != iParam0);
}

bool func_712(int iParam0)
{
	return func_649(&Local_3341, iParam0);
}

int func_713()
{
	return func_20();
}

int func_714()
{
	if (unk_0x47DBF174A0CB9D55(iLocal_3571, 0))
	{
		return unk_0xB064AF9925F5537B(unk_0xA5D5B1042E8F47BD(iLocal_3571, 1), -2, 1);
	}
	return 0;
}

bool func_715(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_4188[iParam1 /*114*/].f_16[iParam0 /*2*/]), iParam2);
}

char* func_716(var uParam0)
{
	return "HS4MOAU";
}

char* func_717(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4MO_RCSO1";
		
		case 1:
			return "HS4MO_RCUP1";
		
		case 2:
			return "HS4MO_RCWV1";
		
		case 3:
			return "HS4MO_RCFC1";
		
		case 4:
			return "HS4MO_RCHD1";
		
		case 5:
			return "HS4MO_RCB1";
		
		case 6:
			return "HS4MO_RCCS1";
		
		case 7:
			return "HS4MO_RCRCF1";
		
		case 8:
			return "HS4MO_RCGC1";
		
		case 9:
			return "HS4MO_RCCD1";
		
		case 10:
			return "HS4MO_RCDTC1";
		
		case 11:
			return "HS4MO_RCNC1";
		
		default:
	}
	return "";
}

int func_718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		default:
	}
	return 1;
}

char* func_719(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "IDJ_T_MM_RC_MMb";
			}
		
		default:
	}
	return "";
}

char* func_720(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "IDJ_T_MM_RC_MMa";
			}
		
		default:
	}
	return "";
}

char* func_721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_MMRC_A";
		
		default:
	}
	return "";
}

int func_722(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_713() == 0 && func_11(&uLocal_5109, 5000, 0));
		
		default:
	}
	return 0;
}

int func_723(var uParam0)
{
	return 158;
}

char* func_724(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_HLP_INT";
		
		case 1:
			return "IDJ_MM_HLP_SGNL";
		
		case 2:
			return "IDJ_MM_HLP_RSX";
		
		default:
	}
	return "";
}

int func_725(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_713() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_713() == 1)
			{
				if (func_715(0, iLocal_3573, 1) && !func_662(0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (func_713() == 6)
			{
				if (func_708() && !func_726())
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_726()
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
	{
		return 0;
	}
	return unk_0xFE6F151E15A69B3A(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]), unk_0x14A1FF4316FA17CB(iLocal_3570));
}

char* func_727(var uParam0)
{
	return "IDJ_MM_FOCUS";
}

int func_728(var uParam0)
{
	return 1;
}

bool func_729(var uParam0)
{
	return func_730() == 22;
}

int func_730()
{
	return Local_1671[func_20() /*20*/];
}

int func_731(int iParam0, var uParam1)
{
	switch (Local_221.f_351.f_1[iParam0 /*13*/].f_2)
	{
		case joaat("italirsx"):
			uParam1->f_66 = joaat("italirsx");
			StringCopy(&(uParam1->f_1), "05SBF291", 16);
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 35;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_732(int iParam0, int iParam1)
{
	if (Local_221.f_351.f_1[iParam0 /*13*/].f_2 == joaat("italirsx"))
	{
		unk_0x70736E63608BE77D(iParam1, 1);
	}
}

int func_733()
{
	if (!func_711(8))
	{
		return 0;
	}
	if (func_151(iLocal_3573, 2))
	{
		return 0;
	}
	if (func_738() != 24 && func_738() != 25)
	{
		return 0;
	}
	if (Local_3317.f_9 != func_201())
	{
		return 0;
	}
	if (func_734())
	{
		return 0;
	}
	return 1;
}

int func_734()
{
	if (unk_0x1A3D0DF92BF7D8C4(iLocal_3570) < 1)
	{
		return 0;
	}
	if (func_737())
	{
		return 1;
	}
	if (func_736())
	{
		if (func_735(iLocal_3570, 0, 1, 0) || func_655(iLocal_3570, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_735(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if ((((iParam1 || !func_6(iVar0, 4)) && (iParam2 || !func_656(iVar0, unk_0x653D75F1BBF766B3(iParam0), 1))) && (iParam3 || !func_656(iVar0, unk_0x653D75F1BBF766B3(iParam0), 12))) && func_656(iVar0, unk_0x653D75F1BBF766B3(iParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_736()
{
	if (Local_1202.f_38.f_10 != 0)
	{
		Call_Loc(Local_1202.f_38.f_10);
		return StackVal;
	}
	return 1;
}

int func_737()
{
	if (Local_1202.f_38.f_9 != 0)
	{
		Call_Loc(Local_1202.f_38.f_9);
		return StackVal;
	}
	return 0;
}

int func_738()
{
	return Local_1832[func_739() /*21*/];
}

int func_739()
{
	return Local_4188[iLocal_3572 /*114*/];
}

int func_740()
{
	if (func_713() == 0)
	{
		return !func_11(&uLocal_5109, 6000, 0);
	}
	if (func_713() == 2)
	{
		if (!func_662(10))
		{
			return 1;
		}
	}
	return 0;
}

float func_741(var uParam0)
{
	return 125f;
}

int func_742(var uParam0)
{
	return 1;
}

int func_743(var uParam0)
{
	return 523;
}

char* func_744(var uParam0)
{
	return "IDJ_MM_RSX_BLIP";
}

int func_745(var uParam0)
{
	return 1;
}

float func_746(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		default:
	}
	return 0f;
}

Vector3 func_747(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return -272.7f, -1305.1f, 31.4f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_748(var uParam0)
{
	return 1;
}

float func_749(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		default:
	}
	return 7.5f;
}

int func_750(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

float func_751(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_662(2))
			{
				return 1f;
			}
			break;
	}
	return 3f;
}

int func_752(var uParam0)
{
	return 1;
}

void func_753(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_573(iParam0, 0, 9);
			func_571(iParam0, 0, 1, 156781);
			func_573(iParam0, 1, 41);
			func_571(iParam0, 1, 2, 156712);
			func_573(iParam0, 2, 0);
			break;
		
		case 1:
			func_573(iParam0, 0, 0);
			func_571(iParam0, 0, 1, 156675);
			func_573(iParam0, 1, 13);
			func_571(iParam0, 1, 2, 156660);
			func_573(iParam0, 2, 2);
			func_571(iParam0, 2, 4, 156571);
			func_573(iParam0, 4, 15);
			func_571(iParam0, 4, 5, 156458);
			func_573(iParam0, 5, 14);
			func_571(iParam0, 5, 3, 156403);
			func_573(iParam0, 3, 7);
			break;
		
		case 2:
			func_573(iParam0, 0, 0);
			func_571(iParam0, 0, 3, 156403);
			func_573(iParam0, 3, 7);
			break;
	}
}

int func_754(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_713() >= 5 && func_84(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_755(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (unk_0x47DBF174A0CB9D55(iParam1, 0))
			{
				if (unk_0x95C3F62F0982F1E0(unk_0xA5D5B1042E8F47BD(iParam1, 0), 1148846080, 1148846080, 1148846080, 1148846080, 1148846080, 1148846080) < 85f && unk_0xF3A639BEE7AADF55(unk_0xA5D5B1042E8F47BD(iParam1, 0)) < 1f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_756(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (unk_0x47DBF174A0CB9D55(iParam1, 0))
			{
				if (unk_0x95C3F62F0982F1E0(unk_0xA5D5B1042E8F47BD(iParam1, 0), 1148846080, 1148846080, 1148846080, 1148846080, 1148846080, 1148846080) < 85f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_757(int iParam0, var uParam1)
{
	return func_55(iParam0, 5);
}

int func_758(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_713() == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_759(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[0 /*6*/]))
			{
				return 0;
			}
			return unk_0xE0B3BC41DDA88DF0(iParam1, unk_0x770D3B2B4702434A(Local_3649.f_327[0 /*6*/]), 0);
			break;
	}
	return 0;
}

var func_760(var uParam0, var uParam1)
{
	return (func_55(0, 1) && func_662(0));
}

void func_761(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (func_713() == 1)
			{
				if (!func_694(iLocal_3573, 0))
				{
					if (unk_0x47DBF174A0CB9D55(iLocal_3571, 0))
					{
						unk_0xD4C86DEC93F19FB0(unk_0xA5D5B1042E8F47BD(iLocal_3571, 0), 10f, 1, 1);
					}
				}
			}
			break;
	}
}

int func_762(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_713() > 4)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_763(int iParam0)
{
	if (iParam0 == 0)
	{
		func_764(iParam0, 0);
	}
}

void func_764(int iParam0, int iParam1)
{
	if (func_74(iParam0, iParam1))
	{
		return;
	}
	if (func_76(iParam0) != 0)
	{
		return;
	}
	func_67(0, iParam0, iParam1);
}

int func_765(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_3649.f_62[iParam0 /*22*/]), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_766(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			if (!unk_0xD15202C6B03220B8(iParam1, 402, 1))
			{
				if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_327[0 /*6*/]))
				{
					return;
				}
				if (unk_0xE0B3BC41DDA88DF0(iParam1, unk_0x770D3B2B4702434A(Local_3649.f_327[0 /*6*/]), 0))
				{
					if (func_174(Local_3649.f_62[0 /*22*/]))
					{
						unk_0x694113444F21E39F(iParam1, 402, true);
					}
				}
			}
			if (bLocal_3568)
			{
				if (unk_0x47DBF174A0CB9D55(iParam1, 0))
				{
					if (!func_767(unk_0xA5D5B1042E8F47BD(iParam1, 0)))
					{
						func_10(20);
					}
				}
			}
			break;
	}
}

int func_767(int iParam0)
{
	if (func_658(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_713() == 0)
			{
				return 0;
			}
			if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
			{
				return 0;
			}
			return !unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]), 0);
			break;
	}
	return 0;
}

int func_770(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		
		default:
	}
	return 6;
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 280;
		
		default:
	}
	return -1;
}

char* func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_PED_BLIP";
		
		default:
	}
	return "PB_ENEMY";
}

void func_773(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0x45F588C0DD767737(iParam1, 0, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 2, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 3, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 6, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 9, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 5, 0, 0, 0);
			unk_0x78024EFD31A7FAD4(iParam1, 1, 0, 0, false);
			unk_0x4FCABD4082A6C808(iParam1, 2);
			unk_0xC62EE91883AF24A2(iParam1, 0);
			break;
		
		case 2:
			unk_0x6673CC701BC8E9C1(iParam1, 1, 1);
			unk_0x6673CC701BC8E9C1(iParam1, 2, 1);
			break;
	}
}

int func_774(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_775(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 2;
		
		case 3:
			return 21;
		
		case 4:
			return 32;
		
		case 5:
			return 34;
		
		default:
	}
	return 39;
}

int func_776(var uParam0)
{
	return 5000;
}

Vector3 func_777()
{
	return func_200(func_201());
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return func_600();
		
		case 2:
			return func_713() == 6;
		
		default:
	}
	return 0;
}

char* func_779(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_SUSPENSE_START";
		
		case 1:
			return "HEI4_MED_INTENSITY";
		
		case 2:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_780()
{
	func_628(0, 4, 158687);
	func_795(0, 1, 158666);
	func_628(1, 20, 158512);
	func_795(1, 2, 158499);
	func_628(2, 4, 158476);
	func_795(2, 1, 158462);
	func_795(2, 3, 158666);
	func_628(3, 20, 158354);
	func_627(3, 4, 4);
	func_627(3, 5, 5);
	func_628(4, 4, 158331);
	func_795(4, 1, 158462);
	func_627(4, 5, 5);
	func_606(5, 6, 7, 8, 9, 158092, 158022, 157994, 157971, 1);
	func_628(9, 44, 146462);
}

void func_781()
{
	func_623("IDJ_RECOVER", "IDJ_MM_RSX_OBJ", 9, 0);
}

void func_782()
{
	func_609("IDJ_HLPDELV_T", "IDJ_MM_RSX_OBJ", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_783()
{
	if (!func_709())
	{
		func_623("IDJ_MM_WAIT_RSX", "IDJ_MOODYMANN", 9, 0);
	}
	else if (func_711(8))
	{
		func_609("IDJ_DELIVER_THE", "IDJ_MM_RSX_OBJ", "IDJ_LOC_MUSIC", 1, 12, 0);
	}
	else
	{
		func_788();
	}
}

void func_784()
{
	if ((func_726() && !func_785()) && !func_710())
	{
		func_623("IDJ_COLLECT", "IDJ_MOODYMANN", 9, 0);
	}
	else
	{
		func_623("IDJ_MM_RCVR_SLN", "IDJ_MM_RSX_OBJ", 9, 0);
	}
}

int func_785()
{
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
	{
		return 0;
	}
	return func_786(iLocal_3571, unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]));
}

int func_786(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0xAE06B9E39EBDE049(iParam1))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !unk_0xA59F96B50B97E63C(iParam1, 0))
		{
			if (unk_0x47DBF174A0CB9D55(iParam0, 0) && unk_0x47DBF174A0CB9D55(iParam1, 0))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, 0);
				iVar1 = unk_0xA5D5B1042E8F47BD(iParam1, 0);
				if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xAE06B9E39EBDE049(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_787()
{
	func_623("ILH_GOTO", "IDJ_LOC_BENNYS", 12, 0);
}

void func_788()
{
	if (func_790())
	{
		func_789();
	}
}

void func_789()
{
	if (!func_618())
	{
		return;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return;
	}
	func_614();
}

int func_790()
{
	if (!func_618())
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return 0;
	}
	return 1;
}

bool func_791()
{
	return !func_662(1);
}

void func_792()
{
	func_623("IDJ_MM_GOTO_DTN", "IDJ_LOC_DOWN", 12, 0);
}

bool func_793()
{
	return func_662(1);
}

void func_794()
{
	if ((func_694(iLocal_3573, 0) && unk_0x47DBF174A0CB9D55(iLocal_3571, 0)) && func_715(0, iLocal_3573, 1))
	{
		func_623("IDJ_MM_WAIT", "IDJ_MOODYMANN", 9, 0);
	}
	else
	{
		func_623("IDJ_COLLECT", "IDJ_MOODYMANN", 9, 0);
	}
}

void func_795(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1832[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_1832[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1832[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_1832[iParam0 /*21*/].f_19++;
}

int func_796()
{
	if (func_3(1))
	{
		return 1;
	}
	return 0;
}

void func_797()
{
	func_623("IDJ_MM_GOTO", "IDJ_MM_GOTO_LOC", 12, 0);
}

void func_798()
{
	func_634(0, 4);
	func_633(0, 1);
	func_634(1, 20);
	func_631(1, 2, 158499);
	func_634(2, 4);
	func_802(2, 158981);
	func_631(2, 1, 158462);
	func_633(2, 3);
	func_634(3, 20);
	func_631(3, 4, 158948);
	func_634(4, 4);
	func_802(4, 158888);
	func_631(4, 1, 158462);
	func_631(4, 5, 158863);
	func_634(5, 22);
	func_633(5, 6);
	func_634(6, 24);
	func_633(6, 7);
	func_634(7, 44);
}

var func_799()
{
	return (func_3(1) || func_6(0, 7));
}

void func_800()
{
	if (func_3(1) || func_6(0, 7))
	{
		if (Local_3649.f_481 + 1 < Local_221.f_589.f_1)
		{
			Local_3649.f_481++;
		}
	}
}

bool func_801()
{
	return func_662(11);
}

void func_802(int iParam0, int iParam1)
{
	Local_1671[iParam0 /*20*/].f_18 = iParam1;
}

void func_803()
{
	if (func_3(1))
	{
		if (Local_3649.f_481 + 1 < Local_221.f_589.f_1)
		{
			Local_3649.f_481++;
		}
	}
}

void func_804()
{
	struct<2> Var0;
	
	if (!unk_0x3D70CCF2C9B362CD(Local_3649.f_62[0 /*22*/]))
	{
		return;
	}
	if (func_713() == 1)
	{
		if (func_715(0, iLocal_3573, 1))
		{
			if (unk_0x99BF74E1D085CEA6(iLocal_3570) && func_714())
			{
				func_696(0);
			}
		}
	}
	if (func_785())
	{
		if (!func_662(2))
		{
			if (!func_694(iLocal_3573, 2))
			{
				func_696(2);
				Var0 = -1;
				Var0.f_1 = -1;
				Var0 = 0;
				func_582(5, &Var0);
			}
		}
		if (!func_694(iLocal_3573, 1))
		{
			func_696(1);
		}
	}
	else
	{
		func_807(1);
	}
	if (func_713() == 6)
	{
		if (func_708() && !func_726())
		{
			if (func_806(iLocal_3571, unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]), 1) <= func_749(0))
			{
				if (unk_0x99BF74E1D085CEA6(iLocal_3570))
				{
					unk_0x59478CBBF96AF7D1(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]));
					if (!unk_0x7DA97DBB7F7D2DE5(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/])))
					{
						unk_0xE19B69814D61BBA5(unk_0x3C6C6327BA564AEE(Local_3649.f_62[0 /*22*/]), uLocal_3300);
					}
				}
			}
		}
	}
	if (bLocal_3568)
	{
		func_805(1);
	}
}

void func_805(int iParam0)
{
	if (func_181(&(Local_3649.f_500), iParam0))
	{
	}
}

float func_806(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	if (!unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(iParam1, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Var3, iParam2);
}

void func_807(int iParam0)
{
	if (func_181(&(Local_4188[iLocal_3572 /*114*/].f_102), iParam0))
	{
	}
}

void func_808()
{
	func_815();
	Stack.Push(0);
	Call_Loc(Local_1202.f_108.f_92);
	if (StackVal && !func_662(0))
	{
		if (!unk_0x8F678487EEBD8CE4(uLocal_5119))
		{
			uLocal_5119 = unk_0x5F920D11DDA03179(Local_221.f_72.f_1[0 /*21*/].f_3, 15f);
			func_813(&uLocal_5119, 9);
			unk_0xB7F03636BDF7080E(uLocal_5119, 85);
		}
	}
	else if (unk_0x8F678487EEBD8CE4(uLocal_5119))
	{
		unk_0x93370FA10F15BE44(&uLocal_5119);
	}
	if (func_69(func_102(iLocal_3570), 1, 1))
	{
		func_809(func_201(), !func_709());
	}
}

void func_809(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0 || !func_810(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (bParam1)
		{
			if (Global_1683921.f_4661[iVar0] == iParam0)
			{
				return;
			}
			if (Global_1683921.f_4661[iVar0] == 0)
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
		}
		else if (Global_1683921.f_4661[iVar0] == iParam0)
		{
			Global_1683921.f_4661[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iVar1 > -1)
		{
			Global_1683921.f_4661[iVar1] = iParam0;
		}
	}
}

bool func_810(int iParam0)
{
	return func_811(iParam0, unk_0x460153A63B9477BC());
}

int func_811(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_101() && func_69(iParam1, 0, 1))
	{
		if (Global_1683921.f_4766.f_2 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_812(iParam1, 1))
			{
				iVar0 = func_102(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2419386.f_199.f_674[iVar1 /*57*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2419386.f_199.f_674[iVar1 /*57*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

bool func_812(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_460(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_101();
}

void func_813(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		iVar0 = func_814(iParam1);
		unk_0xECC9A00CF1181EC2(*uParam0, iVar0);
	}
}

int func_814(int iParam0)
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
	unk_0x28DD484BAEAF8437(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_815()
{
	if (!func_715(0, iLocal_3573, 1))
	{
		return;
	}
	if (unk_0x57249FAAE00CFE1F(iLocal_3570))
	{
		if (func_785())
		{
			if (!func_74(0, 4))
			{
				func_764(0, 4);
			}
		}
		else if (!func_74(0, 5))
		{
			func_764(0, 5);
		}
	}
	else if (unk_0x1A3D0DF92BF7D8C4(iLocal_3570) > 0)
	{
		if (!func_74(0, 3))
		{
			func_764(0, 3);
		}
	}
	else
	{
		if (func_74(0, 3))
		{
			func_816(0, 3);
		}
		if (func_74(0, 4))
		{
			func_816(0, 4);
		}
		if (func_74(0, 5))
		{
			func_816(0, 5);
		}
	}
}

void func_816(int iParam0, int iParam1)
{
	func_181(&(Local_3520[iParam0 /*2*/]), iParam1);
}

void func_817()
{
	func_675(17);
	func_62(0, 15);
	func_62(0, 17);
	func_818(0, 0);
	func_818(0, 18);
	func_698(0, 15);
	Local_221.f_72.f_254[1 /*10*/] = -762195218;
	Local_221.f_589.f_1[0 /*11*/].f_3 = 50f;
	Local_221.f_72.f_1[0 /*21*/].f_13 = 0;
	Local_221.f_72.f_1[1 /*21*/].f_7 = joaat("weapon_pistol");
	Local_221.f_72.f_1[2 /*21*/].f_7 = joaat("weapon_pistol");
	Local_221.f_575 = 30;
	Local_221.f_575.f_1 = 2;
}

void func_818(int iParam0, int iParam1)
{
	if (func_15(&(Local_221.f_72.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

void func_819()
{
	Local_1202.f_11 = 163553;
	Local_1202.f_2 = 162248;
	Local_1202.f_3.f_2 = 162217;
	Local_1202.f_9 = 162164;
	Local_1202.f_9.f_1 = 161977;
	Local_1202.f_62.f_3.f_3 = 146313;
	Local_1202.f_62.f_3.f_2 = 146301;
	Local_1202.f_382.f_3.f_2 = 161961;
	Local_1202.f_75.f_12 = 161949;
	Local_1202.f_75.f_4 = 161937;
	Local_1202.f_52.f_1 = 161913;
	Local_1202.f_243.f_28 = 161877;
	Local_1202.f_243.f_29 = 161745;
	Local_1202.f_367.f_12 = 161700;
	Local_1202.f_367.f_8 = 161688;
	Local_1202.f_367.f_11 = 161611;
	Local_1202.f_367.f_4 = 161602;
	Local_1202.f_367.f_9 = 161590;
	Local_1202.f_367.f_10 = 161580;
	Local_1202.f_367.f_2 = 161571;
	Local_1202.f_367.f_5 = 161562;
	Local_1202.f_367.f_14 = 161533;
	Local_1202.f_355.f_1 = 161487;
	Local_1202.f_355 = 161442;
	Local_1202.f_361.f_4 = 161432;
	Local_1202.f_361.f_3 = 161385;
	Local_1202.f_361.f_5 = 161353;
	Local_1202.f_24 = 161309;
	Local_1202.f_38 = 144059;
}

int func_820()
{
	if (func_821() == 0)
	{
		return !func_11(&uLocal_5109, 6000, 0);
	}
	return 0;
}

int func_821()
{
	return func_20();
}

char* func_822(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_MMSL_A";
		
		default:
	}
	return "";
}

int func_823(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_821() == 0 && func_11(&uLocal_5109, 5000, 0));
		
		default:
	}
	return 0;
}

int func_824(var uParam0)
{
	return 158;
}

char* func_825(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_HLP_MLL";
		
		case 1:
			return "IDJ_MM_HLP_SLP";
		
		default:
	}
	return "";
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_821() == 0;
		
		case 1:
			return func_662(9);
		
		default:
	}
	return 0;
}

void func_827(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_696(5);
			break;
	}
}

int func_828()
{
	return -1;
}

int func_829(var uParam0)
{
	return 0;
}

int func_830(var uParam0)
{
	return 171;
}

char* func_831(var uParam0, var uParam1)
{
	return "HS4_MOODY";
}

int func_832(var uParam0)
{
	return 1;
}

int func_833(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_11(&uLocal_5120, 15000, 0);
		
		case 1:
			return ((func_6(0, 1) && func_711(0)) && func_11(&uLocal_5122, 7000, 0));
		
		default:
	}
	return 0;
}

char* func_834(var uParam0)
{
	return "HS4MOAU";
}

char* func_835(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4MO_SPU1";
		
		case 1:
			return "HS4MO_SDS1";
		
		default:
	}
	return "";
}

int func_836(int iParam0, var uParam1)
{
	switch (Local_221.f_351.f_1[iParam0 /*13*/].f_2)
	{
		case joaat("faggio"):
			uParam1->f_66 = joaat("faggio");
			StringCopy(&(uParam1->f_1), "40DZC153", 16);
			uParam1->f_5 = 54;
			uParam1->f_6 = 0;
			uParam1->f_7 = 60;
			uParam1->f_8 = 1;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 6;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_837(int iParam0, int iParam1)
{
	if (Local_221.f_351.f_1[iParam0 /*13*/].f_2 == joaat("faggio"))
	{
		unk_0x70736E63608BE77D(iParam1, 1);
	}
}

int func_838()
{
	if (bLocal_3568)
	{
		return func_662(9);
	}
	return 0;
}

var func_839(var uParam0)
{
	return unk_0x0CD0167AEB96E096();
}

char* func_840(var uParam0)
{
	return "IDJ_SCTR_BLIP";
}

Vector3 func_841()
{
	return func_200(func_201());
}

void func_842()
{
	func_628(0, 4, 162141);
	func_627(0, 1, 1);
	func_606(1, 2, 3, 4, 5, 162118, 162090, 162062, 162039, 1);
	func_628(5, 44, 146462);
}

void func_843()
{
	func_623("IDJ_MM_RECOVER", "IDJ_MM_SLIP", 9, 0);
}

void func_844()
{
	func_609("IDJ_MM_HLPDELVR", "IDJ_MM_SLIP", "IDJ_LOC_MUSIC", 9, 12, 0);
}

void func_845()
{
	func_609("IDJ_MM_DELIVER", "IDJ_MM_SLIP", "IDJ_LOC_MUSIC", 9, 12, 0);
}

void func_846()
{
	func_623("IDJ_GET_ON_THE", "IDJ_SCOOTER", 9, 0);
}

void func_847()
{
	func_623("ILH_GOTO_THE", "IDJ_LOC_MALL", 12, 0);
}

void func_848()
{
	func_634(0, 4);
	func_633(0, 1);
	func_634(1, 22);
	func_633(1, 2);
	func_634(2, 24);
	func_633(2, 3);
	func_634(3, 44);
}

void func_849()
{
	if (func_662(9))
	{
		Local_221.f_575 = 2;
		Local_221.f_575.f_1 = 0;
	}
}

int func_850()
{
	func_851();
	return 1;
}

void func_851()
{
	if (!func_866(171, 3))
	{
		func_852(171, 3, 1);
	}
}

void func_852(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8237 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 154)
	{
		func_859();
		if (iParam1 == 4)
		{
			func_858(iParam0, 0, 1);
			func_858(iParam0, 1, 1);
			func_858(iParam0, 2, 1);
			func_857(iParam0, 0, 1);
			func_857(iParam0, 1, 1);
			func_857(iParam0, 2, 1);
		}
		else
		{
			if (func_856(iParam0, iParam1) == 1 && func_855(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_858(iParam0, iVar0, 1);
			func_857(iParam0, iVar0, 1);
		}
		if (bParam2)
		{
			if (!Global_76833)
			{
				if (iParam1 != 4)
				{
					if (Global_19681 != iParam1)
					{
						Global_8210[iParam1 /*4*/] = { func_854(iParam0) };
						Global_8227[iParam1] = 1;
						Global_8232[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19681)
					{
					}
					else
					{
						Global_8161[1 /*6*/] = { func_854(iParam0) };
						Global_8161[1 /*6*/].f_5 = iParam1;
						func_853();
					}
				}
				else
				{
					Global_8161[1 /*6*/] = { func_854(iParam0) };
					Global_8161[1 /*6*/].f_5 = iParam1;
					func_853();
				}
			}
			else
			{
				Global_8161[1 /*6*/] = { func_854(iParam0) };
				Global_8161[1 /*6*/].f_5 = iParam1;
				func_853();
			}
		}
	}
}

void func_853()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, unk_0x7C774D8CB8DC6FE3(&(Global_1848[Global_8237 /*29*/].f_7)), 64);
	if (Global_8256 == 0)
	{
		unk_0x5B8DD855EAFD33B5("");
		StringCopy(&cVar16, unk_0x7C774D8CB8DC6FE3(&(Global_8161[1 /*6*/])), 64);
		sVar32 = unk_0x7C774D8CB8DC6FE3("CELL_253");
		unk_0x39E1440587355CC1(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		unk_0x5B8DD855EAFD33B5("CELL_255");
		unk_0x6A826E35A3096ED0(&(Global_8161[1 /*6*/]));
		unk_0x39E1440587355CC1(&cVar0, &cVar0, 0, 3, "", 0);
	}
	unk_0xD2459066EA58CE43(&Global_7551, 0);
}

struct<4> func_854(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_855(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_24[iParam1];
}

int func_856(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1848[iParam0 /*29*/].f_12[iParam1];
}

void func_857(int iParam0, int iParam1, int iParam2)
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

void func_858(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1848[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_111858.f_28046[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_859()
{
	if (func_865(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
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
		Global_19681 = func_860();
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

var func_860()
{
	func_861();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_861()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_863(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_862(unk_0x9B0761B4C3EB8BC7());
			if (func_300(iVar0) && (!func_865(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_300(Global_111858.f_2359.f_539.f_4321))
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

int func_862(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_863(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_863(int iParam0)
{
	if (func_300(iParam0))
	{
		return func_864(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_864(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_865(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_866(int iParam0, int iParam1)
{
	if (func_856(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_867()
{
	func_675(17);
	func_637(0, 9);
	func_698(0, 6);
	func_868(0, 10);
	func_698(0, 15);
	Local_221.f_419.f_72[0 /*6*/] = 0;
	Local_221.f_419.f_72[0 /*6*/].f_1 = 2;
	Local_221.f_419.f_72[0 /*6*/].f_2 = 0;
	Local_221.f_419.f_1[0 /*10*/].f_7 = { 0f, 0f, -90f };
	Local_221.f_575 = 30;
	Local_221.f_575.f_1 = 2;
}

void func_868(int iParam0, int iParam1)
{
	if (func_15(&(Local_221.f_419.f_1[iParam0 /*10*/]), iParam1))
	{
	}
}

void func_869()
{
	Local_1202.f_11 = 226236;
	Local_1202.f_2 = 226196;
	Local_1202.f_3.f_1 = 226122;
	Local_1202.f_3 = 225510;
	Local_1202.f_3.f_2 = 225450;
	Local_1202.f_3.f_2.f_1 = 225419;
	Local_1202.f_9 = 225191;
	Local_1202.f_9.f_1 = 166160;
	Local_1202.f_62.f_3.f_1 = 166089;
	Local_1202.f_62.f_3.f_3 = 146313;
	Local_1202.f_62.f_3.f_2 = 146301;
	Local_1202.f_62.f_3 = 166020;
	Local_1202.f_75.f_17 = 165770;
	Local_1202.f_75.f_29 = 165713;
	Local_1202.f_108.f_124 = 165688;
	Local_1202.f_108.f_132 = 165360;
	Local_1202.f_108 = 165309;
	Local_1202.f_417.f_18 = 165259;
	Local_1202.f_417.f_19 = 165188;
	Local_1202.f_417.f_12 = 165176;
	Local_1202.f_417.f_5 = 165166;
	Local_1202.f_417.f_9 = 165157;
	Local_1202.f_417.f_6 = 165144;
	Local_1202.f_417.f_4 = 165132;
	Local_1202.f_417.f_23 = 165119;
	Local_1202.f_417.f_24 = 165057;
	Local_1202.f_13.f_8 = 164997;
	Local_1202.f_355.f_1 = 164788;
	Local_1202.f_355 = 164704;
	Local_1202.f_24.f_1.f_1 = 164664;
	Local_1202.f_24.f_1.f_2 = 164624;
	Local_1202.f_367.f_12 = 164498;
	Local_1202.f_367.f_8 = 164486;
	Local_1202.f_367.f_11 = 164335;
	Local_1202.f_367.f_4 = 164326;
	Local_1202.f_367.f_9 = 164314;
	Local_1202.f_367.f_10 = 164304;
	Local_1202.f_367.f_2 = 164295;
	Local_1202.f_367.f_5 = 164286;
	Local_1202.f_352 = 164273;
	Local_1202.f_352.f_1 = 164257;
	Local_1202.f_442 = 164248;
	Local_1202.f_38 = 144059;
	Local_1202.f_38.f_9 = 164204;
}

int func_870()
{
	if (func_871() == 3)
	{
		if (unk_0x1A3D0DF92BF7D8C4(iLocal_3570) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_871()
{
	return func_20();
}

int func_872(var uParam0)
{
	return 0;
}

var func_873(var uParam0)
{
	return Local_3649.f_502.f_5;
}

bool func_874(var uParam0)
{
	return func_662(6);
}

int func_875()
{
	return -1;
}

int func_876(var uParam0)
{
	return 0;
}

int func_877(var uParam0)
{
	return 153;
}

char* func_878(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_879(var uParam0)
{
	return 1;
}

int func_880(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_730() == 24 && func_11(&uLocal_5107, 10000, 0));
		
		case 1:
			return ((func_871() == 3 && unk_0x1A3D0DF92BF7D8C4(iLocal_3570) < 1) && func_11(&uLocal_5115, 3000, 0));
		
		case 2:
			return (func_871() == 3 && fLocal_3600 < 500f);
		
		case 3:
			return (func_871() == 3 && fLocal_3600 < 100f);
		
		default:
	}
	return 0;
}

char* func_881(var uParam0)
{
	return "HS4EDAU";
}

char* func_882(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_CSUC1";
			break;
		
		case 2:
			return "HS4ED_CSUC2";
			break;
		
		case 3:
			return "HS4ED_CSPM1";
			break;
	}
	return "";
}

char* func_883(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 1:
				return "IDJ_T_PT_CS_CSb";
			}
		
		default:
	}
	return "";
}

char* func_884(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 1:
				return "IDJ_T_PT_CS_CSa";
			}
		
		default:
	}
	return "";
}

char* func_885(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_INTR";
		
		case 1:
			return "IDJ_KM_HLP_HPPS";
		
		case 2:
			return "IDJ_KM_HLP_RCVR";
		
		case 3:
			return "IDJ_KM_HLP_BSD";
		
		case 4:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_886(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_871() == 0;
			break;
		
		case 1:
			if (func_871() == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_871() == 1 || func_871() == 2)
			{
				return func_662(6);
			}
			break;
		
		case 3:
			if (func_888() == 3 && !func_887())
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_888() == 3 && func_887())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_887()
{
	return ((func_460(iLocal_3570) && func_662(14)) && !func_694(iLocal_3573, 9));
}

int func_888()
{
	return func_739();
}

int func_889()
{
	if (func_694(iLocal_3573, 4) && func_151(iLocal_3573, 1))
	{
		return 1;
	}
	else if (func_662(8))
	{
		return func_151(iLocal_3573, 1);
	}
	return 0;
}

void func_890(var uParam0)
{
	struct<2> Var0;
	
	Local_4188[iLocal_3572 /*114*/].f_104.f_1++;
	func_696(4);
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = 1;
	func_582(5, &Var0);
}

float func_891(var uParam0)
{
	return 0.25f;
}

var func_892(var uParam0)
{
	return unk_0x0CD0167AEB96E096();
}

float func_893(var uParam0)
{
	return 0.75f;
}

int func_894(var uParam0)
{
	return 1;
}

int func_895(var uParam0)
{
	return 18;
}

char* func_896(var uParam0)
{
	return "IDJ_KM_STNS_BLP";
}

Vector3 func_897(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_3649.f_62[func_898(iParam0) /*22*/]), 0);
}

int func_898(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return 0;
	}
	return Local_3649.f_502.f_7[iParam0];
}

bool func_899(int iParam0)
{
	return (func_900() && Local_3649.f_62[func_898(iParam0) /*22*/].f_1 == 6);
}

bool func_900()
{
	return Local_3649.f_502.f_6;
}

void func_901(int iParam0)
{
	func_573(iParam0, 0, 9);
	func_571(iParam0, 0, 1, 165346);
	func_573(iParam0, 1, 7);
}

bool func_902(int iParam0, var uParam1)
{
	return func_84(iParam0);
}

void func_903(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	if (((bLocal_3568 && Param1.f_5) && func_907() >= 2) && !func_900())
	{
		func_904();
	}
}

void func_904()
{
	var uVar0[12];
	int iVar13;
	int iVar14;
	
	if (Local_3649.f_502.f_6)
	{
		return;
	}
	func_905(&uVar0, 12, 1);
	iVar13 = 0;
	while (iVar13 < 12)
	{
		if (iVar14 >= 5)
		{
		}
		else
		{
			if (Local_3649.f_62[uVar0[iVar13] /*22*/].f_1 != 6)
			{
				Local_3649.f_502.f_7[iVar14] = uVar0[iVar13];
				iVar14++;
			}
			iVar13++;
		}
	}
	Local_3649.f_502.f_6 = 1;
}

void func_905(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iVar0;
		iVar0++;
	}
	if (bParam2)
	{
		func_906(uParam0, iParam1);
	}
}

void func_906(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 < 2)
	{
		return;
	}
	iVar0 = (iParam1 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = unk_0x344C570D6F8700DF(0, iVar0 + 1);
		func_32(uParam0[iVar0], uParam0[iVar1]);
		iVar0 = (iVar0 + -1);
	}
}

int func_907()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (Local_3649.f_62[iVar1 /*22*/].f_1 == 6)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_908(int iParam0, int iParam1, var uParam2)
{
	func_62(iParam0, 19);
	unk_0x6673CC701BC8E9C1(iParam1, 46, 1);
}

int func_909(var uParam0, int iParam1)
{
	if (func_694(iParam1, 4) && func_151(iParam1, 1))
	{
		return 1;
	}
	else if (func_662(8))
	{
		return func_151(iParam1, 1);
	}
	return 0;
}

int func_910(var uParam0)
{
	return func_911();
}

int func_911()
{
	int iVar0;
	int iVar1;
	
	if (func_871() < 3)
	{
		return 0;
	}
	if (unk_0x96799BFA3859CDC1(func_512(), -1, 0) < Local_3649.f_474)
	{
		func_912();
	}
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar1 = unk_0x628A51AC66E80772(iVar0);
		if (func_694(iVar1, 4) && func_151(iVar1, 1))
		{
			return 1;
		}
		else if (func_662(8))
		{
			if (func_151(iVar1, 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_912()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x96799BFA3859CDC1(func_512(), -1, 0))
	{
		iVar1 = (iVar1 + Local_4188[iVar0 /*114*/].f_104.f_1);
		iVar0++;
	}
	if (iVar1 < func_913())
	{
		func_693(8);
	}
}

int func_913()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_46(iVar1, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_914(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return func_600();
		
		case 2:
			return func_871() == 2;
		
		case 3:
			return func_871() == 3;
		
		default:
	}
	return 0;
}

char* func_915(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_DELIVERING_START";
		
		case 1:
			return "HEI4_GUNFIGHT";
		
		case 2:
			return "HEI4_SUSPENSE";
		
		case 3:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_916()
{
	func_628(0, 4, 225168);
	func_627(0, 1, 1);
	func_628(1, 7, 225146);
	func_1060(1, 225120);
	func_627(1, 2, 2);
	func_628(2, 39, 225078);
	func_1056(2, 225019);
	func_627(2, 3, 3);
	func_628(3, 4, 166266);
	func_627(3, 4, 4);
	func_628(4, 44, 146462);
}

void func_917()
{
	if ((func_1055(func_201()) && func_694(iLocal_3573, 4)) && func_922(func_201(), &uLocal_5101, 1, 0))
	{
		func_921("IDJ_GOON_WAIT", unk_0x72C1D3A1AB8CAA5B(func_102(iLocal_3570)), 9, 0);
	}
	else if (func_887())
	{
		func_918("IDJ_BOSS_GOTO", 0);
	}
	else if (!func_694(iLocal_3573, 4) && !func_662(8))
	{
		func_609("IDJ_HLPDELV_T", "IDJ_KM_STNS_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
	else
	{
		func_609("IDJ_DELIVER_THE", "IDJ_KM_STNS_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_918(char* sParam0, bool bParam1)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return;
	}
	if (func_919(sParam0))
	{
		return;
	}
	func_614();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_613();
	func_612(bParam1);
	func_611();
}

bool func_919(char* sParam0)
{
	if (!func_618())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_920(sParam0);
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12));
}

bool func_920(char* sParam0)
{
	if (!func_618())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

void func_921(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_624(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 16;
		Global_1312603.f_56 = iParam2;
	}
}

bool func_922(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<27> Var7;
	int iVar34;
	struct<3> Var35;
	
	Var7 = { func_949(iParam0) };
	iVar34 = func_948(iParam0);
	Var35 = { func_939(iParam0) };
	if (iParam2 && !unk_0xCE990E643CD9D0E5(iVar34, 8))
	{
		if (unk_0xCE990E643CD9D0E5(iVar34, 9))
		{
			if ((unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 1))) || unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) == joaat("avenger")) || unk_0xCE990E643CD9D0E5(iVar34, 15))
			{
				func_937(iParam0, &(Var7.f_20), &(Var7.f_23), &(Var7.f_26), bParam3);
			}
			if (bParam3)
			{
				func_937(iParam0, &(Var7.f_20), &(Var7.f_23), &(Var7.f_26), 1);
			}
			return unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var7.f_20, Var7.f_23, Var7.f_26, 0, 1, 0);
		}
		else
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				if (unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 1))))
				{
					Var35 = { 1f, 1f, 2f };
				}
				if (func_936(&iParam0))
				{
					Var35 = { 2f, 2f, 2f };
				}
				func_935(iParam0, &Var0, &Var3, Var35);
			}
			else
			{
				func_934(iParam0, &Var0, &Var3, Var35);
			}
			if (unk_0xD79BDB7193E12293(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, 0, 1, 0))
			{
				*uParam1 = 1;
				return 1;
			}
		}
	}
	if (!func_930(iParam0) || func_928())
	{
		*uParam1 = 0;
		return 0;
	}
	*uParam1 = 4;
	if (unk_0xCE990E643CD9D0E5(iVar34, 5))
	{
		func_924(iParam0, &Var0, &Var3, &fVar6, 0);
		if (unk_0xCE990E643CD9D0E5(iVar34, 4))
		{
			if (!unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, fVar6, 0, 1, 2))
			{
				func_924(iParam0, &Var0, &Var3, &fVar6, 1);
				return unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, fVar6, 0, 1, 2);
			}
		}
		else
		{
			return unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, fVar6, 0, 1, 2);
		}
	}
	func_923(iParam0, &Var0, &Var3);
	return unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Var0, Var3, 0, 1, 2);
}

void func_923(int iParam0, var uParam1, var uParam2)
{
	struct<27> Var0;
	
	if (iParam0 != 0)
	{
		Var0 = { func_949(iParam0) };
		*uParam1 = { Var0.f_20 };
		*uParam2 = { Var0.f_23 };
	}
}

void func_924(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	struct<27> Var0;
	
	if (bParam4)
	{
		if (func_926(&iParam0) == 20)
		{
			func_925(iParam0, uParam1, uParam2, fParam3);
		}
	}
	else
	{
		Var0 = { func_949(iParam0) };
		*uParam1 = { Var0.f_20 };
		*uParam2 = { Var0.f_23 };
		*fParam3 = Var0.f_26;
	}
}

int func_925(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 409:
			*uParam1 = { -2267.026f, 402.2257f, 183.667f };
			*uParam2 = { -2257.724f, 380.6196f, 267.6024f };
			*uParam3 = 20f;
			return 1;
		
		case 410:
			*uParam1 = { -757.3264f, -192.9475f, 43.20822f };
			*uParam2 = { -745.3168f, -213.0097f, 128.1185f };
			*uParam3 = 18f;
			return 1;
		
		case 413:
			*uParam1 = { -410.7763f, -319.03f, 70.80331f };
			*uParam2 = { -380.264f, -340.9736f, 155.8033f };
			*uParam3 = 16f;
			return 1;
		
		case 421:
			*uParam1 = { 740.6537f, 1287.007f, 353.2967f };
			*uParam2 = { 716.8173f, 1286.363f, 439.296f };
			*uParam3 = 30f;
			return 1;
		
		case 430:
			*uParam1 = { -2595.064f, 1927.041f, 167.0463f };
			*uParam2 = { -2589.626f, 1882.5f, 250.4927f };
			*uParam3 = 22f;
			return 1;
		
		default:
	}
	return 0;
}

int func_926(int iParam0)
{
	if (func_927(iParam0))
	{
		if (*iParam0 >= 382 && *iParam0 <= 401)
		{
			return 23;
		}
		if (*iParam0 >= 402 && *iParam0 <= 431)
		{
			return 20;
		}
		if (*iParam0 >= 432 && *iParam0 <= 491)
		{
			return 15;
		}
		if (*iParam0 >= 492 && *iParam0 <= 521)
		{
			return 24;
		}
		if (*iParam0 >= 522 && *iParam0 <= 551)
		{
			return 21;
		}
		if (*iParam0 >= 552 && *iParam0 <= 584)
		{
			return 22;
		}
		if (*iParam0 >= 585 && *iParam0 <= 614)
		{
			return 16;
		}
		if (*iParam0 >= 615 && *iParam0 <= 644)
		{
			return 17;
		}
		if (*iParam0 >= 645 && *iParam0 <= 674)
		{
			return 25;
		}
	}
	return -1;
}

bool func_927(var uParam0)
{
	return (*uParam0 >= 377 && *uParam0 <= 674);
}

bool func_928()
{
	return func_929(unk_0x460153A63B9477BC(), 29);
}

bool func_929(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

int func_930(int iParam0)
{
	if (!func_932(iParam0))
	{
		return 0;
	}
	if (func_931())
	{
		return 0;
	}
	return 1;
}

int func_931()
{
	if (func_246(unk_0x460153A63B9477BC()) == 229 && func_244(unk_0x460153A63B9477BC()) == 26)
	{
		return 1;
	}
	return 0;
}

int func_932(int iParam0)
{
	int iVar0;
	
	switch (func_933(iParam0))
	{
		case 0:
		case 2:
		case 3:
			return 0;
		
		case 1:
		case 4:
		case 5:
		case 6:
			iVar0 = func_948(iParam0);
			return unk_0xCE990E643CD9D0E5(iVar0, 3);
		
		default:
	}
	return 0;
}

int func_933(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 376)
	{
		return 0;
	}
	if (iParam0 >= 377 && iParam0 <= 674)
	{
		return 1;
	}
	if (iParam0 >= 675 && iParam0 <= 683)
	{
		return 2;
	}
	if (iParam0 >= 684 && iParam0 <= 703)
	{
		return 3;
	}
	if (iParam0 >= 704 && iParam0 <= 713)
	{
		return 4;
	}
	if (iParam0 >= 714 && iParam0 <= 746)
	{
		return 5;
	}
	if (iParam0 >= 747 && iParam0 <= 765)
	{
		return 6;
	}
	return -1;
}

void func_934(int iParam0, var uParam1, var uParam2, struct<3> Param3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	Var0 = { func_199(iParam0) };
	fVar3 = (1f * Param3.x);
	fVar4 = (1f * Param3.f_1);
	fVar5 = (2f * Param3.f_2);
	*uParam1 = { Var0 - Vector(0f, fVar4, fVar3) };
	*uParam2 = { Var0 + Vector(fVar5, fVar4, fVar3) };
}

void func_935(int iParam0, var uParam1, var uParam2, struct<3> Param3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { func_200(iParam0) };
	fVar3 = (5f * Param3.x);
	fVar4 = (5f * Param3.f_1);
	fVar5 = (2.5f * Param3.f_2);
	fVar6 = 0f;
	if (Param3.f_2 != 1f)
	{
		fVar6 = (fVar5 * 0.5f);
		fVar5 = fVar6;
	}
	*uParam1 = { Var0 - Vector(fVar6, fVar4, fVar3) };
	*uParam2 = { Var0 + Vector(fVar5, fVar4, fVar3) };
}

bool func_936(int iParam0)
{
	return (*iParam0 >= 377 && *iParam0 <= 381);
}

void func_937(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	func_938(iParam0, uParam1, uParam2, uParam3, bParam4);
}

int func_938(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (iParam0)
		{
			case 675:
				*uParam1 = { 1297.229f, 2854.667f, 46.22242f };
				*uParam2 = { 1277.379f, 2838.311f, 54.34742f };
				*uParam3 = 14.75f;
				return 1;
			
			case 676:
				*uParam1 = { 7.976243f, 2604.159f, 82.82843f };
				*uParam2 = { 30.07752f, 2618.249f, 90.95343f };
				*uParam3 = 14.75f;
				return 1;
			
			case 677:
				*uParam1 = { 2777.815f, 3928.604f, 42.66043f };
				*uParam2 = { 2759.668f, 3910.758f, 50.78543f };
				*uParam3 = 14.75f;
				return 1;
			
			case 678:
				*uParam1 = { 3419.642f, 5501.849f, 23.10643f };
				*uParam2 = { 3394.699f, 5507.827f, 31.23143f };
				*uParam3 = 14.75f;
				return 1;
			
			case 679:
				*uParam1 = { -9.453247f, 6836.305f, 12.64543f };
				*uParam2 = { 14.47614f, 6827.522f, 20.77043f };
				*uParam3 = 14.75f;
				return 1;
			
			case 680:
				*uParam1 = { -2232.366f, 2430.486f, 9.009426f };
				*uParam2 = { -2230.132f, 2405.009f, 17.13443f };
				*uParam3 = 14.75f;
				return 1;
			
			case 681:
				*uParam1 = { -9.857053f, 3314.334f, 38.45943f };
				*uParam2 = { -4.230778f, 3339.46f, 46.58443f };
				*uParam3 = 14.75f;
				return 1;
			
			case 682:
				*uParam1 = { 2064.196f, 1738.971f, 101.3424f };
				*uParam2 = { 2082.448f, 1757.641f, 109.4674f };
				*uParam3 = 14.75f;
				return 1;
			
			case 683:
				*uParam1 = { 1881.381f, 295.3014f, 161.1334f };
				*uParam2 = { 1867.705f, 273.5757f, 169.2584f };
				*uParam3 = 14.75f;
				return 1;
			
			default:
		}
		return 0;
	}
	switch (iParam0)
	{
		case 675:
			*uParam1 = { 1273.677f, 2835.732f, 44.84742f };
			*uParam2 = { 1262.887f, 2827.357f, 55.80887f };
			*uParam3 = 17.125f;
			return 1;
		
		case 676:
			*uParam1 = { 32.71862f, 2620.037f, 81.45343f };
			*uParam2 = { 43.60667f, 2626.619f, 90.93901f };
			*uParam3 = 17.125f;
			return 1;
		
		case 677:
			*uParam1 = { 2757.371f, 3908.717f, 41.28543f };
			*uParam2 = { 2749.064f, 3901.245f, 51.93591f };
			*uParam3 = 17.125f;
			return 1;
		
		case 678:
			*uParam1 = { 3392.239f, 5508.464f, 21.73143f };
			*uParam2 = { 3380.613f, 5511.087f, 31.09143f };
			*uParam3 = 17.125f;
			return 1;
		
		case 679:
			*uParam1 = { 17.18369f, 6826.096f, 11.27043f };
			*uParam2 = { 28.89165f, 6822.171f, 22.87762f };
			*uParam3 = 17.125f;
			return 1;
		
		case 680:
			*uParam1 = { -2229.61f, 2401.256f, 7.634426f };
			*uParam2 = { -2229.282f, 2387.398f, 21.65034f };
			*uParam3 = 17.125f;
			return 1;
		
		case 681:
			*uParam1 = { -3.066728f, 3343.304f, 37.08443f };
			*uParam2 = { 1.22503f, 3357.966f, 47.80353f };
			*uParam3 = 17.125f;
			return 1;
		
		case 682:
			*uParam1 = { 2084.432f, 1759.63f, 99.96742f };
			*uParam2 = { 2092.595f, 1767.434f, 110.466f };
			*uParam3 = 17.125f;
			return 1;
		
		case 683:
			*uParam1 = { 1866.002f, 271.215f, 159.7584f };
			*uParam2 = { 1859.329f, 260.6256f, 171.2149f };
			*uParam3 = 17.125f;
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_939(int iParam0)
{
	switch (func_933(iParam0))
	{
		case 0:
			return func_945(func_946(&iParam0));
		
		case 1:
			return func_944(func_926(&iParam0));
		
		case 2:
			return func_943();
		
		case 3:
			return func_942();
		
		case 5:
			return func_941();
		
		case 6:
			return func_940(iParam0);
		
		default:
	}
	return 1f, 1f, 1f;
}

Vector3 func_940(int iParam0)
{
	switch (iParam0)
	{
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 765:
			if (func_658(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				return 0.5f, 0.5f, 1f;
			}
			break;
		
		case 755:
		case 757:
		case 758:
		case 759:
		case 760:
		case 764:
			return 1f, 1f, 1f;
			break;
		
		case 761:
		case 762:
			if (func_658(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				return 3f, 3f, 4.5f;
			}
			break;
		
		case 763:
			return 100f, 100f, 200f;
			break;
		
		case 756:
			return 1f, 1f, 2f;
			break;
	}
	return 1f, 1f, 1f;
}

Vector3 func_941()
{
	if (func_658(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0.5f, 0.5f, 1f;
	}
	return 1f, 1f, 1f;
}

Vector3 func_942()
{
	return 1f, 1f, 1f;
}

Vector3 func_943()
{
	return 1f, 1f, 1f;
}

Vector3 func_944(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { 1f, 1f, 1f };
	return Var0;
}

Vector3 func_945(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 8:
			Var0 = { 1f, 1f, 3f };
			break;
		
		case 14:
			Var0 = { 2.5f, 2.5f, 4f };
			break;
		
		case 18:
			Var0 = { 2f, 2f, 4f };
			break;
		
		case 15:
			Var0 = { 2.2f, 2.2f, 4f };
			break;
		
		case 17:
			Var0 = { 0.75f, 0.75f, 4f };
			break;
		
		case 19:
			Var0 = { 2f, 2f, 4f };
			break;
		
		case 16:
			Var0 = { 2f, 2f, 4f };
			break;
		
		default:
			Var0 = { 1f, 1f, 1f };
			break;
	}
	return Var0;
}

int func_946(int iParam0)
{
	if (func_947(iParam0))
	{
		if (*iParam0 >= 12 && *iParam0 <= 71)
		{
			return 17;
		}
		if (*iParam0 >= 72 && *iParam0 <= 91)
		{
			return 15;
		}
		if (*iParam0 >= 92 && *iParam0 <= 156)
		{
			return 14;
		}
		if (*iParam0 >= 157 && *iParam0 <= 256)
		{
			return 16;
		}
		if (*iParam0 >= 257 && *iParam0 <= 356)
		{
			return 19;
		}
		if (*iParam0 >= 357 && *iParam0 <= 376)
		{
			return 18;
		}
	}
	return -1;
}

bool func_947(var uParam0)
{
	return (*uParam0 >= 1 && *uParam0 <= 376);
}

var func_948(int iParam0)
{
	struct<27> Var0;
	
	Var0 = { func_949(iParam0) };
	return Var0.f_16;
}

struct<27> func_949(int iParam0)
{
	struct<27> Var0;
	
	switch (func_933(iParam0))
	{
		case 0:
			Var0 = { func_1022(iParam0) };
			break;
		
		case 1:
			Var0 = { func_1005(iParam0) };
			break;
		
		case 2:
			Var0 = { func_999(iParam0) };
			break;
		
		case 3:
			Var0 = { func_989(iParam0) };
			break;
		
		case 4:
			Var0 = { func_983(iParam0) };
			break;
		
		case 5:
			Var0 = { func_975(iParam0) };
			break;
		
		case 6:
			Var0 = { func_950(iParam0) };
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<27> func_950(int iParam0)
{
	struct<27> Var0;
	
	if (func_974(iParam0))
	{
		StringCopy(&(Var0.f_8), func_973(iParam0), 32);
		Var0.f_3 = func_972(iParam0);
		Var0.f_7 = func_971(iParam0);
		Var0.f_17 = func_970(iParam0);
		Var0.f_18 = 171984;
		Var0.f_19 = 171941;
		func_953(iParam0, &Var0);
		func_952(iParam0, &Var0);
		func_951(iParam0, &Var0);
	}
	return Var0;
}

void func_951(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 763:
			uParam1->f_20 = { -2484.88f, -4361.851f, -7.889073f };
			uParam1->f_23 = { 4009.877f, -3911.593f, 3001.878f };
			uParam1->f_26 = 750f;
			return;
			break;
	}
	uParam1->f_20 = { 0f, 0f, 0f };
	uParam1->f_23 = { 0f, 0f, 0f };
	uParam1->f_26 = 0f;
}

void func_952(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 11);
	switch (iParam0)
	{
		case 757:
			unk_0xBE20AB8238688965(&(uParam1->f_16), 16);
			unk_0xBE20AB8238688965(&(uParam1->f_16), 8);
			break;
		
		case 763:
			unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
			unk_0xBE20AB8238688965(&(uParam1->f_16), 5);
			unk_0xBE20AB8238688965(&(uParam1->f_16), 1);
			break;
		
		case 756:
			unk_0xBE20AB8238688965(&(uParam1->f_16), 13);
			break;
	}
}

void func_953(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_955(iParam0) };
	*uParam1 = { func_954(iParam0) };
}

Vector3 func_954(int iParam0)
{
	switch (iParam0)
	{
		case 765:
			return -1011.788f, -480.2999f, 38.9756f;
		
		case 747:
			return 2331.56f, 2575.972f, 45.6677f;
		
		case 748:
			return -443.3367f, 6016.453f, 30.7172f;
		
		case 749:
			return -1079.142f, -855.9941f, 4.0321f;
		
		case 750:
			return 1855.284f, 3683.246f, 33.2675f;
		
		case 751:
			return 459.2572f, -1007.858f, 27.2567f;
		
		case 752:
			return -105.4055f, 2796.867f, 52.3442f;
		
		case 753:
			return 930.3027f, -1807.612f, 30.3326f;
		
		case 754:
			return -127.9034f, -1394.535f, 28.5281f;
		
		case 762:
			return -1395.269f, -3267.321f, 12.9448f;
		
		case 756:
			return 987.5f, 79.66f, 79.99f;
		
		default:
	}
	return func_955(iParam0);
}

Vector3 func_955(int iParam0)
{
	switch (iParam0)
	{
		case 747:
			return 2332.839f, 2582.595f, 45.6677f;
		
		case 748:
			return -436.1613f, 6028.733f, 30.3405f;
		
		case 749:
			return -1068.84f, -851.9506f, 3.8671f;
		
		case 750:
			return 1865.898f, 3699.468f, 32.5628f;
		
		case 751:
			return 446.1463f, -1019.909f, 27.5497f;
		
		case 752:
			return -104.1688f, 2796.184f, 52.3266f;
		
		case 753:
			return 934.3446f, -1803.678f, 29.7528f;
		
		case 754:
			return -138.0878f, -1396.641f, 28.8028f;
		
		case 765:
			return -1081.882f, -501.9055f, 35.6193f;
		
		case 756:
			return 934f, -2.6f, 78f;
		
		case 755:
			return -1079.98f, -2867.023f, 12.9505f;
		
		case 758:
			return -154.8892f, -2663.216f, 5.0002f;
		
		case 759:
			return -1615.657f, 5271.33f, -0.4f;
		
		case 760:
			return 1738.386f, 3280.542f, 40.1063f;
		
		case 761:
			return -1148.742f, -3403.921f, 12.945f;
		
		case 762:
			return -1394.095f, -3263.974f, 12.9448f;
		
		case 763:
			return 1376.011f, -4400.693f, 150.6801f;
		
		case 764:
			return -1294.799f, -3539.78f, 0.1343f;
		
		case 757:
			return func_956(0f, 30.6f, -1f);
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_956(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (func_959(0))
	{
		iVar0 = func_958(func_516());
		if (func_658(iVar0))
		{
			return unk_0x7EC595B99EA7C4B1(iVar0, Param0);
		}
		else
		{
			return func_957(757, func_516(), 0);
		}
	}
	else
	{
		iVar1 = func_958(unk_0x460153A63B9477BC());
		if (func_658(iVar1))
		{
			return unk_0x7EC595B99EA7C4B1(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_957(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == func_101())
	{
		return 0f, 0f, 0f;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1683921.f_4796[iVar0 /*2*/] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (bParam2)
	{
		return Global_1630317[iParam1 /*595*/].f_552.f_16[iVar1 /*6*/];
	}
	return Global_1630317[iParam1 /*595*/].f_552.f_16[iVar1 /*6*/].f_3;
}

int func_958(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (unk_0xAE06B9E39EBDE049(Global_1694879[iParam0]))
		{
			return Global_1694879[iParam0];
		}
	}
	return -1;
}

bool func_959(bool bParam0)
{
	return func_812(unk_0x460153A63B9477BC(), bParam0);
}

void func_960(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 763:
			*uParam2 = 0;
			*uParam3 = 1;
			return;
			break;
	}
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_961(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 757)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 765:
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 761:
		case 762:
		case 755:
		case 756:
		case 759:
		case 764:
		case 758:
		case 760:
			if (func_658(unk_0x9B0761B4C3EB8BC7()) && !func_969(unk_0x460153A63B9477BC()))
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
					if (func_658(iVar0) && func_962(iParam0, iVar0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_962(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam1);
	if (unk_0xFF88B5221E8464D2(iParam1, &iVar1))
	{
		if (func_658(iVar1))
		{
			if (unk_0x36FE6D3220816ADA(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || ((!unk_0xB86B8E85030B1552(iVar0) && !unk_0x0CE6C9C2E6F95026(iVar0)) && !unk_0x97AFEF6099069369(iVar0)))
	{
		if (func_968(iParam0))
		{
			if (!unk_0x442D6659150AF4B3(iVar0) && !unk_0xF9C3E2B9AA9E2294(iVar0))
			{
				return 0;
			}
		}
		else if (func_967(iParam0))
		{
			if (!unk_0x5874D60325749F00(iVar0) && !unk_0x8EB87975F59A9367(iVar0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_966(iParam1))
	{
		return 0;
	}
	if ((func_965(iParam1, 1) || func_964(iParam1)) || func_963(iParam1, 1))
	{
		return iParam2;
	}
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0x871819940BD2E434(iParam1, "MPBitset"))
		{
			iVar2 = unk_0x8C0800114C2864BE(iParam1, "MPBitset");
			if (unk_0xCE990E643CD9D0E5(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

int func_963(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && (!bParam1 || unk_0x80FF6C016CDB0FAF(iParam0, 0)))
		{
			if (unk_0x871819940BD2E434(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_964(int iParam0)
{
	if ((unk_0x6844807B17DC2DFC("CreatedByPegasus", 2) && unk_0x871819940BD2E434(iParam0, "CreatedByPegasus")) && unk_0x84E72BB19D4FDE12(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_965(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && (!bParam1 || unk_0x80FF6C016CDB0FAF(iParam0, 0)))
		{
			if (unk_0x871819940BD2E434(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_966(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(iParam0) == joaat("hauler2") || unk_0x36FE6D3220816ADA(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_967(int iParam0)
{
	switch (iParam0)
	{
		case 765:
			return 0;
			break;
		
		case 759:
		case 764:
			return 1;
			break;
	}
	return 0;
}

int func_968(int iParam0)
{
	switch (iParam0)
	{
		case 765:
			return 0;
			break;
		
		case 761:
		case 762:
		case 760:
		case 763:
			return 1;
			break;
	}
	return 0;
}

int func_969(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_69(iParam0, 1, 1))
	{
		iVar1 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xA4E17AE82A76F738(iVar1, 2))
		{
			return 1;
		}
		if (unk_0x47DBF174A0CB9D55(iVar1, 1))
		{
			if (!unk_0x47DBF174A0CB9D55(iVar1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = unk_0xCE078AEFF5C495DE(iVar1);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				return 1;
			}
		}
		if (unk_0x11B7C25143EE2F29(iVar1))
		{
			return 1;
		}
		if (unk_0x16BC17A8EDC701A2(iVar1, -1794415470) == 1 || unk_0x16BC17A8EDC701A2(iVar1, -1794415470) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_970(int iParam0)
{
	switch (iParam0)
	{
		case 761:
		case 762:
			return 20;
			break;
		
		default:
			return 27;
			break;
	}
	return 27;
}

float func_971(int iParam0)
{
	switch (iParam0)
	{
		case 748:
		case 749:
		case 747:
		case 750:
			return 5f;
		
		default:
	}
	return 10f;
}

float func_972(int iParam0)
{
	return 5f;
}

char* func_973(int iParam0)
{
	return "GB_DELIVERY";
}

bool func_974(int iParam0)
{
	return (iParam0 >= 747 && iParam0 <= 765);
}

struct<27> func_975(int iParam0)
{
	struct<27> Var0;
	
	if (func_982(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 174689;
		Var0.f_19 = 174673;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 26;
		func_977(iParam0, &Var0);
		unk_0xBE20AB8238688965(&(Var0.f_16), 13);
		if (iParam0 == 732)
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 3);
			unk_0xBE20AB8238688965(&(Var0.f_16), 5);
			unk_0xBE20AB8238688965(&(Var0.f_16), 9);
			unk_0xBE20AB8238688965(&(Var0.f_16), 8);
			Var0.f_20 = { 717.713f, 122.6333f, 78.75452f };
			Var0.f_23 = { 663.8443f, 142.1459f, 122.0014f };
			Var0.f_26 = 60f;
			Var0.f_7 = 5f;
		}
		else if (func_976(iParam0, 1))
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 11);
		}
		else if (iParam0 == 733)
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 9);
			unk_0xBE20AB8238688965(&(Var0.f_16), 15);
			Var0.f_20 = { 1026.913f, -271.2461f, 49.62276f };
			Var0.f_23 = { 1036.819f, -267.2213f, 53.21184f };
			Var0.f_26 = 5.3125f;
		}
	}
	return Var0;
}

int func_976(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 714:
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
			return 1;
			break;
		
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
			return iParam1;
			break;
	}
	return 0;
}

void func_977(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_978(iParam0) };
	if (func_976(iParam0, 0))
	{
		switch (iParam0)
		{
			case 714:
				*uParam1 = { -237.12f, 6228.755f, 29.5005f };
				break;
			
			case 715:
				*uParam1 = { 1710.83f, 4760.13f, 40.0504f };
				break;
			
			case 716:
				*uParam1 = { -105.19f, -1778.3f, 27.51f };
				break;
			
			case 717:
				*uParam1 = { -617.7421f, 285.8363f, 79.6871f };
				break;
			
			case 718:
				*uParam1 = { -1287.114f, -278.0045f, 36.5935f };
				break;
			
			case 719:
				*uParam1 = { 726.7626f, -822.4685f, 22.8603f };
				break;
		}
	}
	else
	{
		*uParam1 = { uParam1->f_4 };
	}
}

Vector3 func_978(int iParam0)
{
	switch (iParam0)
	{
		case 714:
			return -239.6946f, 6231.41f, 30.5003f;
		
		case 715:
			return 1710.63f, 4755.55f, 40.97f;
		
		case 716:
			return -102.8687f, -1775.582f, 28.5124f;
		
		case 717:
			return -618.0107f, 282.3917f, 80.6787f;
		
		case 718:
			return -1288.845f, -275.3818f, 37.7781f;
		
		case 719:
			return 722.7928f, -822.6534f, 23.7156f;
		
		case 720:
			return -249.71f, 6222.79f, 30.49f;
		
		case 721:
			return 1688.938f, 4770.203f, 40.9215f;
		
		case 722:
			return -113.4865f, -1763.319f, 28.7557f;
		
		case 723:
			return -592.94f, 270.24f, 81.17f;
		
		case 724:
			return -1268.06f, -294.23f, 36.4f;
		
		case 725:
			return 751.33f, -840.9f, 24.62f;
		
		case 726:
			return -248.9815f, 6226.736f, 30.4544f;
		
		case 727:
			return 1712.496f, 4799.796f, 40.8101f;
		
		case 728:
			return -31.0365f, -1754.201f, 28.2347f;
		
		case 729:
			return -596.077f, 332.5039f, 84.1166f;
		
		case 730:
			return -1273.903f, -284.471f, 36.9529f;
		
		case 731:
			return 737.4631f, -841.6989f, 24.0383f;
		
		case 732:
			return 696.304f, 129.601f, 79.755f;
		
		case 733:
			return 1031.95f, -269.04f, 49.8512f;
		
		case 734:
			return 1742.125f, 3275.608f, 40.132f;
		
		case 735:
			return -161.4011f, -164.9205f, 42.6216f;
		
		case 736:
			return -1125.329f, 4946.633f, 219.0566f;
		
		case 742:
			return 977.4358f, 17.8086f, 79.9903f;
		
		case 743:
			return 992.6253f, 75.9125f, 79.9906f;
		
		case 744:
			return 987.3862f, 79.2873f, 79.9906f;
		
		case 745:
			return 974.0888f, 13.0281f, 80.041f;
		
		case 746:
			return 980.2654f, 22.3152f, 79.9902f;
		
		case 737:
			return 1964.725f, 3755.312f, 31.2405f;
		
		case 738:
			return -23.473f, 6456.655f, 30.4236f;
		
		case 739:
			return -1325.822f, -1149.726f, 3.398f;
		
		case 740:
			return 192.6347f, -153.5202f, 55.9168f;
		
		case 741:
			return 1066.743f, -2384.296f, 29.461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_979(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_980(int iParam0)
{
	int iVar0;
	
	if ((((((iParam0 == 735 || iParam0 == 736) || iParam0 == 742) || iParam0 == 743) || iParam0 == 744) || iParam0 == 745) || iParam0 == 746)
	{
		return 0;
	}
	if (func_976(iParam0, 1))
	{
		if (func_658(unk_0x9B0761B4C3EB8BC7()) && !func_969(unk_0x460153A63B9477BC()))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if (func_658(iVar0) && func_981(iParam0, iVar0, 1))
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
	else
	{
		return 1;
	}
	return 0;
}

int func_981(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam1);
	if (unk_0xFF88B5221E8464D2(iParam1, &iVar1))
	{
		if (func_658(iVar1))
		{
			if (unk_0x36FE6D3220816ADA(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || ((!unk_0xB86B8E85030B1552(iVar0) && !unk_0x0CE6C9C2E6F95026(iVar0)) && !unk_0x97AFEF6099069369(iVar0)))
	{
		return 0;
	}
	if (func_966(iParam1))
	{
		return 0;
	}
	if ((func_965(iParam1, 1) || func_964(iParam1)) || func_963(iParam1, 1))
	{
		return iParam2;
	}
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0x871819940BD2E434(iParam1, "MPBitset"))
		{
			iVar2 = unk_0x8C0800114C2864BE(iParam1, "MPBitset");
			if (unk_0xCE990E643CD9D0E5(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

bool func_982(int iParam0)
{
	return (iParam0 >= 714 && iParam0 <= 746);
}

struct<27> func_983(int iParam0)
{
	struct<27> Var0;
	
	if (func_988(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 175798;
		Var0.f_19 = 175782;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 25;
		func_984(iParam0, &Var0);
		if (iParam0 == 710)
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 3);
			unk_0xBE20AB8238688965(&(Var0.f_16), 5);
			unk_0xBE20AB8238688965(&(Var0.f_16), 2);
			unk_0xBE20AB8238688965(&(Var0.f_16), 8);
			Var0.f_20 = { 939.5024f, 141.9415f, 84.5562f };
			Var0.f_23 = { 955.4819f, 160.9863f, 103.5805f };
			Var0.f_26 = 16.6875f;
			Var0.f_7 = 5f;
		}
		if (iParam0 == 711)
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 3);
			unk_0xBE20AB8238688965(&(Var0.f_16), 9);
			unk_0xBE20AB8238688965(&(Var0.f_16), 5);
			unk_0xBE20AB8238688965(&(Var0.f_16), 8);
			unk_0xBE20AB8238688965(&(Var0.f_16), 1);
			unk_0xBE20AB8238688965(&(Var0.f_16), 14);
			Var0.f_20 = { 951.1802f, 19.74426f, 120.3121f };
			Var0.f_23 = { 977.124f, 62.42398f, 159.2259f };
			Var0.f_26 = 31f;
		}
	}
	return Var0;
}

void func_984(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_985(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

Vector3 func_985(int iParam0)
{
	switch (iParam0)
	{
		case 704:
			return 918.5922f, 50.5265f, 79.7648f;
		
		case 705:
			return 915.2054f, 52.5925f, 79.7648f;
		
		case 710:
			return 939.7278f, 145.0655f, 79.8304f;
		
		case 711:
			return 965.8581f, 42.3771f, 123.1199f;
		
		case 712:
			return 976.8382f, -69.818f, 73.9592f;
		
		case 713:
			return 935.5134f, 0.3663f, 77.7649f;
		
		case 706:
			return -523.206f, -1720.587f, 18.225f;
		
		case 707:
			return 273.709f, -2223.898f, 7.257f;
		
		case 708:
			return -1068.403f, 4912.794f, 211.851f;
		
		case 709:
			return -1584.666f, 2695.359f, 3.118f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_986(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_987(int iParam0)
{
	switch (iParam0)
	{
		case 704:
		case 705:
		case 713:
		case 712:
		case 711:
			return 1;
		
		default:
	}
	return 0;
}

bool func_988(int iParam0)
{
	return (iParam0 >= 704 && iParam0 <= 713);
}

struct<27> func_989(int iParam0)
{
	struct<27> Var0;
	
	if (func_998(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 176576;
		Var0.f_19 = 176560;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 23;
		Var0.f_17 = 24;
		unk_0xBE20AB8238688965(&(Var0.f_16), 10);
		unk_0xBE20AB8238688965(&(Var0.f_16), 11);
		func_991(iParam0, &Var0);
		if (func_990(iParam0))
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 12);
		}
		else
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 13);
		}
	}
	return Var0;
}

bool func_990(int iParam0)
{
	return (iParam0 >= 694 && iParam0 <= 703);
}

void func_991(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_992(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

Vector3 func_992(int iParam0)
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

void func_993(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_994(int iParam0)
{
	int iVar0;
	
	if (func_990(iParam0) || func_997(iParam0))
	{
		if (func_658(unk_0x9B0761B4C3EB8BC7()) && !func_969(unk_0x460153A63B9477BC()))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
				if (func_658(iVar0) && func_995(iParam0, iVar0, func_997(iParam0)))
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
	return 0;
}

int func_995(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam1);
	if (unk_0xFF88B5221E8464D2(iParam1, &iVar1))
	{
		if (func_658(iVar1))
		{
			if (unk_0x36FE6D3220816ADA(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || (iVar0 == joaat("terbyte") && func_996(iParam0))) || ((!unk_0xB86B8E85030B1552(iVar0) && !unk_0x0CE6C9C2E6F95026(iVar0)) && !unk_0x97AFEF6099069369(iVar0)))
	{
		return 0;
	}
	if (func_966(iParam1))
	{
		return 0;
	}
	if ((func_965(iParam1, 1) || func_964(iParam1)) || func_963(iParam1, 1))
	{
		return uParam2;
	}
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0x871819940BD2E434(iParam1, "MPBitset"))
		{
			iVar2 = unk_0x8C0800114C2864BE(iParam1, "MPBitset");
			if (unk_0xCE990E643CD9D0E5(iVar2, 17))
			{
				return uParam2;
			}
		}
	}
	return 1;
}

int func_996(int iParam0)
{
	if ((iParam0 == 690 || iParam0 == 691) || iParam0 == 687)
	{
		return 1;
	}
	return 0;
}

bool func_997(int iParam0)
{
	return (iParam0 >= 684 && iParam0 <= 693);
}

bool func_998(int iParam0)
{
	return (iParam0 >= 684 && iParam0 <= 703);
}

struct<27> func_999(int iParam0)
{
	struct<27> Var0;
	
	if (func_1004(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 178060;
		Var0.f_19 = 178019;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 22;
		func_1000(iParam0, &Var0);
		unk_0xBE20AB8238688965(&(Var0.f_16), 9);
	}
	return Var0;
}

void func_1000(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1001(iParam0) };
	*uParam1 = { uParam1->f_4 };
	switch (iParam0)
	{
		case 675:
			uParam1->f_20 = { 1273.677f, 2835.732f, 44.84742f };
			uParam1->f_23 = { 1264.765f, 2828.705f, 55.94585f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 676:
			uParam1->f_20 = { 32.71862f, 2620.037f, 81.45343f };
			uParam1->f_23 = { 41.51775f, 2625.42f, 91.57298f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 677:
			uParam1->f_20 = { 2757.371f, 3908.717f, 41.28543f };
			uParam1->f_23 = { 2750.301f, 3902.29f, 52.10129f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 678:
			uParam1->f_20 = { 3392.239f, 5508.464f, 21.73143f };
			uParam1->f_23 = { 3382.523f, 5510.846f, 31.62641f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 679:
			uParam1->f_20 = { 17.18369f, 6826.096f, 11.27043f };
			uParam1->f_23 = { 26.70887f, 6822.46f, 22.73343f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 680:
			uParam1->f_20 = { -2229.61f, 2401.256f, 7.634426f };
			uParam1->f_23 = { -2229.246f, 2390.694f, 20.95616f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 681:
			uParam1->f_20 = { -3.066728f, 3343.304f, 38.14693f };
			uParam1->f_23 = { -0.032484f, 3354.439f, 45.36308f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 682:
			uParam1->f_20 = { 2084.432f, 1759.63f, 99.96742f };
			uParam1->f_23 = { 2091.107f, 1765.938f, 110.7136f };
			uParam1->f_26 = 12.4375f;
			break;
		
		case 683:
			uParam1->f_20 = { 1866.002f, 271.215f, 159.7584f };
			uParam1->f_23 = { 1860.504f, 262.6771f, 170.922f };
			uParam1->f_26 = 12.4375f;
			break;
	}
}

Vector3 func_1001(int iParam0)
{
	switch (iParam0)
	{
		case 675:
			return 1272.357f, 2834.424f, 47.9951f;
		
		case 676:
			return 35.1777f, 2621.545f, 84.4465f;
		
		case 677:
			return 2755.241f, 3906.798f, 44.2074f;
		
		case 678:
			return 3388.732f, 5509.329f, 24.78f;
		
		case 679:
			return 20.3048f, 6825.069f, 14.3348f;
		
		case 680:
			return -2229.332f, 2398.65f, 11.0724f;
		
		case 681:
			return -2.7877f, 3345.063f, 40.1563f;
		
		case 682:
			return 2086.75f, 1761.963f, 102.9603f;
		
		case 683:
			return 1864.349f, 268.5328f, 162.9432f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1002(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 13)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1003(var uParam0)
{
	return 1;
}

bool func_1004(var uParam0)
{
	return (*uParam0 >= 675 && *uParam0 <= 683);
}

struct<27> func_1005(int iParam0)
{
	struct<27> Var0;
	int iVar27;
	int iVar28;
	
	iVar27 = func_926(&iParam0);
	if (func_927(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 205185;
		Var0.f_19 = 205070;
		Var0.f_3 = 2f;
		Var0.f_7 = 10f;
		if (func_936(&iParam0))
		{
			unk_0xBE20AB8238688965(&(Var0.f_16), 3);
			unk_0xBE20AB8238688965(&(Var0.f_16), 5);
			iVar28 = func_1018(iParam0);
			Var0 = { func_1017(iVar28) };
			Var0.f_4 = { func_1016(iVar28) };
			func_1015(iVar28, &(Var0.f_20), &(Var0.f_23), &(Var0.f_26));
			Var0.f_17 = 20;
		}
		else
		{
			switch (iVar27)
			{
				case 23:
					Var0.f_17 = 11;
					func_1014(iParam0, &Var0);
					break;
				
				case 20:
					Var0.f_17 = 12;
					func_1013(iParam0, &Var0);
					Var0.f_7 = 15f;
					break;
				
				case 15:
					Var0.f_17 = 13;
					func_1012(iParam0, &Var0);
					Var0.f_7 = 7.5f;
					break;
				
				case 24:
					unk_0xBE20AB8238688965(&(Var0.f_16), 7);
					Var0.f_17 = 14;
					func_1011(iParam0, &Var0);
					break;
				
				case 21:
					Var0.f_17 = 15;
					func_1010(iParam0, &Var0);
					break;
				
				case 22:
					Var0.f_17 = 16;
					func_1009(iParam0, &Var0);
					break;
				
				case 16:
					Var0.f_17 = 17;
					func_1008(iParam0, &Var0);
					break;
				
				case 17:
					Var0.f_17 = 18;
					func_1007(iParam0, &Var0);
					break;
				
				case 25:
					Var0.f_17 = 19;
					func_1006(iParam0, &Var0);
					break;
				}
			}
	}
	return Var0;
}

void func_1006(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 645:
			uParam1->f_4 = { -1009.399f, -1510.902f, 10.787f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1009.357f, -1510.773f, 30.78681f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 646:
			uParam1->f_4 = { 488.149f, 193.576f, 110.521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 488.3388f, 193.4493f, 130.521f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 647:
			uParam1->f_4 = { 1136.636f, -1545.09f, 47.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1136.649f, -1545.196f, 67.14507f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 648:
			uParam1->f_4 = { 287.184f, -2430.126f, 7.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 287.0954f, -2430.258f, 27.04158f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 649:
			uParam1->f_4 = { -1273.492f, 613.795f, 138.303f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1273.409f, 613.6357f, 158.3027f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 650:
			uParam1->f_4 = { 1152.29f, -411.709f, 73.447f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1152.219f, -411.7438f, 93.4471f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 651:
			uParam1->f_4 = { 154.71f, 1154.905f, 225.794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 154.7392f, 1154.619f, 245.7941f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 652:
			uParam1->f_4 = { -3102.653f, 405.02f, 15.265f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3102.914f, 404.9397f, 35.26507f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 653:
			uParam1->f_4 = { -1568.817f, -416.371f, 58.755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1568.9f, -416.2934f, 78.75464f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 654:
			uParam1->f_4 = { -697.74f, 167.438f, 72.242f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -697.7376f, 167.3414f, 92.24247f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 655:
			uParam1->f_4 = { -707.304f, -896.965f, 29.343f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -707.3842f, -896.7987f, 49.34295f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 656:
			uParam1->f_4 = { 129.193f, -1504.046f, 35.35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 129.2808f, -1504.016f, 55.35003f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 657:
			uParam1->f_4 = { 705.942f, -898.681f, 31.162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 706.1223f, -898.7618f, 51.16165f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 658:
			uParam1->f_4 = { -54.868f, -320.534f, 55.571f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -54.92479f, -320.5946f, 75.57126f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 659:
			uParam1->f_4 = { 960.6f, -2310.002f, 38.836f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 960.7292f, -2310.002f, 58.83584f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 660:
			uParam1->f_4 = { 2475.58f, 3442.302f, 52.942f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2475.584f, 3442.382f, 74.15777f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 661:
			uParam1->f_4 = { -71.699f, 6380.39f, 34.004f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -71.58961f, 6380.449f, 55.21976f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 662:
			uParam1->f_4 = { 2576.59f, 4648.265f, 35.655f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2576.537f, 4648.233f, 56.87077f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 663:
			uParam1->f_4 = { 1383.088f, 2164.901f, 100.221f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1383.053f, 2164.877f, 121.4368f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 664:
			uParam1->f_4 = { -52.204f, 2874.061f, 57.88f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -52.19807f, 2874.119f, 79.09576f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 665:
			uParam1->f_4 = { -2606.045f, 1874.706f, 166.32f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2605.907f, 1874.733f, 187.5358f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 666:
			uParam1->f_4 = { 2232.609f, 5612.76f, 57.479f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2232.607f, 5612.829f, 78.69922f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 667:
			uParam1->f_4 = { -98.906f, 1909.688f, 196.053f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -98.8879f, 1909.77f, 217.2665f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 668:
			uParam1->f_4 = { 1338.384f, 4353.149f, 46.215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1338.347f, 4353.256f, 67.43076f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 669:
			uParam1->f_4 = { -533.217f, 4196.721f, 191.991f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -533.3099f, 4196.712f, 213.206f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 670:
			uParam1->f_4 = { -1514.534f, 1524.422f, 117.112f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1514.498f, 1524.455f, 138.3278f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 671:
			uParam1->f_4 = { 1224.78f, 2735.091f, 41.089f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1224.727f, 2735.13f, 62.30476f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 672:
			uParam1->f_4 = { 1430.944f, 6354.661f, 27.35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1430.843f, 6354.548f, 48.56577f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 673:
			uParam1->f_4 = { -746.832f, 5579.238f, 40.596f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -746.8964f, 5579.122f, 61.8147f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 674:
			uParam1->f_4 = { 1950.596f, 3831.224f, 38.394f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1950.513f, 3831.26f, 59.60977f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1007(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 615:
			uParam1->f_4 = { -1129.887f, 4908.95f, 218.176f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1129.952f, 4908.959f, 367.2639f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 616:
			uParam1->f_4 = { -1278.679f, 4397.949f, 8.797f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1278.8f, 4398.199f, 157.8854f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 617:
			uParam1->f_4 = { 2472.119f, -383.714f, 108.633f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2472.227f, -383.7167f, 257.6341f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 618:
			uParam1->f_4 = { 3704.91f, 3792.808f, 10.344f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3704.833f, 3792.772f, 159.3807f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 619:
			uParam1->f_4 = { 501.491f, 5604.684f, 796.915f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 501.4285f, 5604.606f, 945.9148f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 620:
			uParam1->f_4 = { -324.364f, -1968.709f, 65.994f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -324.3981f, -1968.649f, 214.9936f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 621:
			uParam1->f_4 = { 1352.153f, 4355.032f, 42.72f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1352.194f, 4355.176f, 191.7198f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 622:
			uParam1->f_4 = { -188.822f, -176.633f, 84.225f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -188.8102f, -176.5466f, 233.2247f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 623:
			uParam1->f_4 = { 2327.591f, -2106.102f, 4.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2327.514f, -2106.169f, 153.0316f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 624:
			uParam1->f_4 = { -930.626f, 6157.1f, 3.935f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -930.6824f, 6157.203f, 152.9289f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 625:
			uParam1->f_4 = { 685.825f, -744.68f, 33.968f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 685.7804f, -744.5552f, 183.0251f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 626:
			uParam1->f_4 = { -3222.702f, 835.279f, 1.389f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3222.962f, 835.3319f, 150.3925f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 627:
			uParam1->f_4 = { 3722.393f, 1525.736f, 0.188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3731.082f, 1518.727f, 154.9921f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 628:
			uParam1->f_4 = { 4343.171f, 5407.742f, 0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 4349.43f, 5413.023f, 153.4886f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 629:
			uParam1->f_4 = { 1493.387f, 7343.342f, -0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1495.309f, 7349.077f, 153.3537f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 630:
			uParam1->f_4 = { 1108.552f, -3865.831f, -0.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1108.74f, -3865.597f, 149.2532f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 631:
			uParam1->f_4 = { -2794.206f, -1340.128f, -0.857f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2794.711f, -1341.127f, 150.9005f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 632:
			uParam1->f_4 = { -3753.333f, 2421.297f, 0.134f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3753.042f, 2421.227f, 151.5792f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 633:
			uParam1->f_4 = { 2820.673f, 5970.349f, 351.4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2819.888f, 5971.666f, 498.5311f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 634:
			uParam1->f_4 = { -1207.282f, 508.525f, 104.699f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1208.541f, 508.3144f, 251.8198f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 635:
			uParam1->f_4 = { 1458.088f, 1113.121f, 115.213f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1458.243f, 1111.971f, 262.334f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 636:
			uParam1->f_4 = { 2472.171f, 3423.729f, 50.713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2472.185f, 3423.361f, 200.9512f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 637:
			uParam1->f_4 = { -57.098f, 1915.81f, 196.24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -56.97901f, 1914.767f, 343.6823f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 638:
			uParam1->f_4 = { -1747.223f, 1991.318f, 118.105f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1748.072f, 1992.806f, 265.1205f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 639:
			uParam1->f_4 = { 2480.091f, 4951.536f, 45.872f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2480.827f, 4952.609f, 193.0078f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 640:
			uParam1->f_4 = { 306.207f, 6493.011f, 30.267f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 304.8512f, 6493.137f, 177.407f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 641:
			uParam1->f_4 = { 1184.253f, -2272.983f, 31.212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1183.06f, -2273.078f, 178.3331f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 642:
			uParam1->f_4 = { 704.845f, 3122.848f, 44.728f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 704.9832f, 3121.729f, 191.8539f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 643:
			uParam1->f_4 = { 2213.413f, 1834.712f, 108.61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2214.313f, 1835.36f, 255.7564f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 644:
			uParam1->f_4 = { 1087.726f, 9.947f, 81.59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1087.425f, 8.9017f, 228.8473f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1008(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 585:
			uParam1->f_4 = { -1410.13f, -993.289f, 18.38f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1410.102f, -993.2345f, 168.3805f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 586:
			uParam1->f_4 = { -71.169f, 807.415f, 226.25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -71.13431f, 807.3287f, 376.2498f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 587:
			uParam1->f_4 = { -163.298f, -160.212f, 92.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -163.2319f, -160.0414f, 242.7024f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 588:
			uParam1->f_4 = { 78.731f, -1587.635f, 37.559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 78.70574f, -1587.401f, 187.5587f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 589:
			uParam1->f_4 = { 1145.42f, -431.092f, 66.169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1145.483f, -431.0724f, 216.1644f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 590:
			uParam1->f_4 = { -293.618f, 2798.6f, 58.476f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -293.5615f, 2798.718f, 208.46f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 591:
			uParam1->f_4 = { -2233.786f, 222.936f, 193.612f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2234.008f, 223.1098f, 343.6117f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 592:
			uParam1->f_4 = { -211.003f, 6270.165f, 30.489f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -211.3024f, 6270.386f, 180.4893f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 593:
			uParam1->f_4 = { 501.306f, 5597.584f, 794.921f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 501.0702f, 5597.815f, 944.9088f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 594:
			uParam1->f_4 = { 2559.657f, 4288.563f, 40.59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2559.551f, 4288.573f, 190.5903f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 595:
			uParam1->f_4 = { 2061.787f, 1876.157f, 92.147f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2061.821f, 1876.255f, 242.0961f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 596:
			uParam1->f_4 = { 1439.398f, -2123.25f, 55.758f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1439.464f, -2123.064f, 205.7386f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 597:
			uParam1->f_4 = { 536.555f, -2817.696f, 5.042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 536.7016f, -2817.775f, 155.0421f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 598:
			uParam1->f_4 = { 1414.709f, 3812.396f, 31.285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1414.681f, 3812.424f, 181.2858f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 599:
			uParam1->f_4 = { -1224.871f, 4451.718f, 29.123f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1224.649f, 4451.727f, 179.1271f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 600:
			uParam1->f_4 = { 1942.57f, 4992.075f, 41.622f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1942.686f, 4992.245f, 191.605f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 601:
			uParam1->f_4 = { -413.839f, 1570.649f, 354.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -413.7642f, 1570.749f, 504.0011f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 602:
			uParam1->f_4 = { -338.977f, -738.634f, 52.247f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -338.8257f, -739.0767f, 202.2467f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 603:
			uParam1->f_4 = { 2785.339f, -671.202f, 3.129f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2785.372f, -671.1329f, 153.1176f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 604:
			uParam1->f_4 = { 1597.853f, 6574.43f, 13.057f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1597.943f, 6574.682f, 163.0956f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 605:
			uParam1->f_4 = { -1788.953f, 5296.781f, 0.937f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1794.737f, 5302.018f, 156.0463f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 606:
			uParam1->f_4 = { 107.929f, 7556.932f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 102.0676f, 7561.387f, 154.2871f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 607:
			uParam1->f_4 = { 4348.7f, 4204.648f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 4356.096f, 4211.247f, 155.3993f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 608:
			uParam1->f_4 = { 3350.914f, 1271.106f, -0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3344.999f, 1277.366f, 155.4821f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 609:
			uParam1->f_4 = { 25.182f, -3666.942f, 1.312f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 32.64173f, -3669.944f, 155.9386f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 610:
			uParam1->f_4 = { -3462.223f, 1513.8f, 0.938f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3470.701f, 1519.476f, 155.7491f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 611:
			uParam1->f_4 = { 3123.25f, 6765.652f, 0.563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3127.177f, 6770.722f, 155.9512f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 612:
			uParam1->f_4 = { 3666.045f, -1481.32f, 1.125f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3664.705f, -1489.47f, 155.7794f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 613:
			uParam1->f_4 = { -2261.479f, -1643.832f, 0.375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2246.73f, -1646.456f, 155.4379f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 614:
			uParam1->f_4 = { 2602.581f, -2480.521f, 0.188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2592.321f, -2481.46f, 156.4927f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1009(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	unk_0xBE20AB8238688965(&(uParam1->f_16), 6);
	switch (iParam0)
	{
		case 552:
			uParam1->f_4 = { -228.69f, -2445.7f, 19f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -228.4485f, -2445.367f, 16.0014f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 553:
			uParam1->f_4 = { 617.286f, -840.587f, 24.072f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 617.3474f, -840.5027f, 21.92936f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		
		case 554:
			uParam1->f_4 = { 2908.728f, 770.107f, 35.121f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2908.175f, 769.7324f, 33.86459f };
			uParam1->f_23 = { 25f, 25f, 13f };
			uParam1->f_26 = 0f;
			break;
		
		case 555:
			uParam1->f_4 = { -180.058f, 2863.623f, 37.528f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -180.1334f, 2863.537f, 37.45629f };
			uParam1->f_23 = { 25f, 25f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 556:
			uParam1->f_4 = { -1414.163f, 2636.951f, 8.005f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1413.618f, 2636.493f, 7.268405f };
			uParam1->f_23 = { 25f, 25f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 557:
			uParam1->f_4 = { -2665.451f, 2595.696f, 6.008f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2665.38f, 2595.291f, 5.917889f };
			uParam1->f_23 = { 25f, 25f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 558:
			uParam1->f_4 = { -1955.164f, 4579.263f, 16.212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1954.963f, 4579.154f, 13.93992f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		
		case 559:
			uParam1->f_4 = { -509.557f, 4421.524f, 44.4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -510.9154f, 4421.009f, 39.48253f };
			uParam1->f_23 = { 25f, 25f, 13f };
			uParam1->f_26 = 0f;
			break;
		
		case 560:
			uParam1->f_4 = { 806.034f, -2635.465f, 15.293f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 806.7756f, -2636.127f, 4.788301f };
			uParam1->f_23 = { 25f, 25f, 19f };
			uParam1->f_26 = 0f;
			break;
		
		case 561:
			uParam1->f_4 = { 2265.854f, 2036.017f, 142.197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2265.952f, 2036.054f, 139.336f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 562:
			uParam1->f_4 = { 1659.95f, -1638.865f, 125.283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1659.896f, -1638.868f, 122.2527f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 563:
			uParam1->f_4 = { -1850.943f, -334.037f, 70.237f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1850.938f, -334.012f, 67.08746f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 564:
			uParam1->f_4 = { 1976.216f, 717.231f, 178.613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1976.275f, 717.4149f, 175.2972f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 565:
			uParam1->f_4 = { -24.043f, 668.69f, 211.003f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -23.55385f, 668.9614f, 202.5266f };
			uParam1->f_23 = { 25f, 25f, 18f };
			uParam1->f_26 = 0f;
			break;
		
		case 566:
			uParam1->f_4 = { -211.001f, -1800.318f, 14.044f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -210.7738f, -1800.152f, 11.55491f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		
		case 567:
			uParam1->f_4 = { 321.856f, 2214.761f, 87.77f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 321.9139f, 2214.874f, 85.22589f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 568:
			uParam1->f_4 = { 1973.514f, 5042.104f, 51.505f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1973.453f, 5042.029f, 49.96577f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 569:
			uParam1->f_4 = { 2025.132f, 2941.179f, 56.555f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2025.186f, 2941.275f, 55.59736f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		
		case 570:
			uParam1->f_4 = { 77.001f, 7075.894f, 13.25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 76.95587f, 7075.936f, 10.97238f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 571:
			uParam1->f_4 = { 3857.717f, 4362.673f, 17.503f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3857.716f, 4362.641f, 15.64045f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 572:
			uParam1->f_4 = { 2920.751f, 5314.043f, 109.404f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2920.73f, 5314.069f, 106.1341f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 573:
			uParam1->f_4 = { 201.446f, -725.152f, 60.002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 201.3546f, -725.2289f, 57.07697f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 574:
			uParam1->f_4 = { 714.262f, 4115.009f, 45.006f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 714.308f, 4115.063f, 43.81426f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		
		case 575:
			uParam1->f_4 = { 1090.173f, 61.733f, 92.059f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1090.208f, 61.79512f, 89.89091f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 576:
			uParam1->f_4 = { -2823.096f, 1423.129f, 109.982f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2823.114f, 1423.143f, 108.8084f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		
		case 577:
			uParam1->f_4 = { -1373.553f, 5352.695f, 14.957f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1373.512f, 5352.809f, 13.16294f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 578:
			uParam1->f_4 = { -1350.463f, -1434.643f, 17.118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1350.43f, -1434.647f, 14.32419f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 579:
			uParam1->f_4 = { 2471.126f, 3763.668f, 55.025f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2471.111f, 3763.623f, 52.04755f };
			uParam1->f_23 = { 25f, 25f, 11.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 580:
			uParam1->f_4 = { -967.126f, -974.166f, 15.002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -967.1616f, -974.1507f, 12.86518f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 581:
			uParam1->f_4 = { 626.714f, 623.564f, 142.166f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 626.7075f, 623.6097f, 138.911f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 582:
			uParam1->f_4 = { -1038.206f, 929.886f, 182.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1038.277f, 929.9075f, 178.7169f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 583:
			uParam1->f_4 = { -1186.123f, 38.309f, 65f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1186.143f, 38.23398f, 62.72668f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 584:
			uParam1->f_4 = { 1441.211f, 6346.602f, 37.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1441.137f, 6346.373f, 33.95491f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1010(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 522:
			uParam1->f_4 = { 1628.253f, -1885.011f, 104.244f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1628.259f, -1885.124f, 249.2359f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 523:
			uParam1->f_4 = { 2663.699f, 1395.744f, 23.461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2663.73f, 1395.77f, 168.4647f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 524:
			uParam1->f_4 = { -681.022f, 5798.669f, 16.331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -680.9479f, 5798.407f, 161.331f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 525:
			uParam1->f_4 = { -1046.675f, -997.832f, 8.618f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1046.516f, -997.7623f, 153.6183f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 526:
			uParam1->f_4 = { 2361.193f, 2563.87f, 50.653f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2361.377f, 2563.77f, 195.6504f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 527:
			uParam1->f_4 = { 2228.439f, 5595.11f, 53.047f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2228.511f, 5594.973f, 198.0431f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 528:
			uParam1->f_4 = { 1041.293f, -2980.383f, 4.901f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1041.385f, -2980.493f, 149.901f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 529:
			uParam1->f_4 = { -2975.953f, 728.386f, 28.34f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2975.98f, 728.3309f, 173.3399f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 530:
			uParam1->f_4 = { 1564.093f, 3572.587f, 32.745f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1564.143f, 3572.576f, 177.7401f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 531:
			uParam1->f_4 = { -1376.622f, -1398.935f, 4.628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1376.795f, -1398.847f, 150.8438f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 532:
			uParam1->f_4 = { -1833.113f, 2154.464f, 114.646f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1833.026f, 2154.511f, 260.8618f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 533:
			uParam1->f_4 = { 1730.572f, 4856.538f, 39.628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1730.67f, 4856.528f, 185.8422f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 534:
			uParam1->f_4 = { 418.192f, -1331.322f, 45.054f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 418.2052f, -1331.248f, 191.2698f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 535:
			uParam1->f_4 = { 248.522f, 3107.336f, 44.924f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 248.511f, 3107.332f, 190.9334f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 536:
			uParam1->f_4 = { 3294.076f, 5188.679f, 17.416f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3294.17f, 5188.587f, 163.4254f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 537:
			uParam1->f_4 = { -987.05f, 4397.283f, 14.945f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -986.8815f, 4396.998f, 159.8712f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 538:
			uParam1->f_4 = { 2702.994f, 3503.466f, 60.526f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2703.048f, 3503.433f, 205.5258f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 539:
			uParam1->f_4 = { 985.286f, -2244.75f, 29.557f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 985.3023f, -2244.744f, 174.5568f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 540:
			uParam1->f_4 = { 2257.649f, 5157.199f, 56.825f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2257.498f, 5157.228f, 201.8318f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 541:
			uParam1->f_4 = { -1057.081f, 834.838f, 165.729f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1057.117f, 834.9001f, 310.7293f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 542:
			uParam1->f_4 = { 473.819f, -2589.012f, 13.461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 473.68f, -2588.864f, 158.461f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 543:
			uParam1->f_4 = { 69.555f, 6526.386f, 30.576f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 69.5831f, 6526.563f, 176.7918f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 544:
			uParam1->f_4 = { 1390.892f, 2172.039f, 100.532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1390.97f, 2171.999f, 246.7478f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 545:
			uParam1->f_4 = { -238.29f, -1530.307f, 30.486f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -238.3365f, -1530.406f, 176.7018f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 546:
			uParam1->f_4 = { 1350.858f, 6372.605f, 32.21f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1350.847f, 6372.572f, 178.4258f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 547:
			uParam1->f_4 = { -289.799f, 2526.061f, 73.613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -289.8188f, 2526.115f, 219.8288f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 548:
			uParam1->f_4 = { 384.79f, -1798.908f, 32.015f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 384.7624f, -1798.774f, 178.2308f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 549:
			uParam1->f_4 = { 1300.635f, 6611.277f, 1.215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1300.758f, 6611.332f, 147.4308f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 550:
			uParam1->f_4 = { 2688.698f, 2878f, 35.041f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2688.731f, 2878.051f, 181.2568f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 551:
			uParam1->f_4 = { -482.302f, -428.943f, 56.24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -482.3047f, -428.8116f, 202.4558f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1011(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 492:
			uParam1->f_4 = { 1349.434f, -2211.201f, 59.185f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1349.434f, -2211.201f, 59.185f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 493:
			uParam1->f_4 = { 244.666f, -3086.762f, 4.634f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 244.666f, -3086.762f, 4.634f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 494:
			uParam1->f_4 = { 374.023f, -1845.642f, 26.707f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 374.023f, -1845.642f, 26.707f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 495:
			uParam1->f_4 = { 2566.534f, -678.942f, 53.169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2566.534f, -678.942f, 53.169f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 496:
			uParam1->f_4 = { 1147.377f, -1479.249f, 33.685f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1147.377f, -1479.249f, 33.685f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 497:
			uParam1->f_4 = { -1204.087f, -1340.333f, 3.726f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1204.087f, -1340.333f, 3.726f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 498:
			uParam1->f_4 = { 736.9614f, -328.0111f, 49.2329f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 736.9614f, -328.0111f, 49.2329f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 499:
			uParam1->f_4 = { 1025.344f, 955.4961f, 221.172f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1025.344f, 955.4961f, 221.172f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 500:
			uParam1->f_4 = { 298.837f, 16.626f, 82.075f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 298.837f, 16.626f, 82.075f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 501:
			uParam1->f_4 = { -301.376f, -1106.58f, 22.026f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -301.376f, -1106.58f, 22.026f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 502:
			uParam1->f_4 = { 1321.417f, -725.513f, 64.579f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1321.417f, -725.513f, 64.579f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 503:
			uParam1->f_4 = { 2611.826f, 469.9974f, 104.681f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2611.826f, 469.9974f, 104.681f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 504:
			uParam1->f_4 = { -808.094f, -396.25f, 36.031f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -808.094f, -396.25f, 36.031f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 505:
			uParam1->f_4 = { 150.6398f, 758.6245f, 208.3275f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 150.6398f, 758.6245f, 208.3275f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 506:
			uParam1->f_4 = { -1619.563f, 391.341f, 85.697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1619.563f, 391.341f, 85.697f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 507:
			uParam1->f_4 = { 1756.945f, 6395.202f, 35.4139f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1756.945f, 6395.202f, 35.4139f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 508:
			uParam1->f_4 = { 56.7549f, 6521.598f, 30.4565f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 56.7549f, 6521.598f, 30.4565f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 509:
			uParam1->f_4 = { -596.026f, 5753.056f, 34.011f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -596.026f, 5753.056f, 34.011f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 510:
			uParam1->f_4 = { -2259.771f, 4341.076f, 42.849f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2259.771f, 4341.076f, 42.849f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 511:
			uParam1->f_4 = { 135.126f, 4447.888f, 79.167f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 135.126f, 4447.888f, 79.167f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 512:
			uParam1->f_4 = { 1440.967f, 4470.13f, 48.483f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1440.967f, 4470.13f, 48.483f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 513:
			uParam1->f_4 = { 1963.212f, 5083.114f, 39.6153f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1963.212f, 5083.114f, 39.6153f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 514:
			uParam1->f_4 = { 2679.76f, 4341.263f, 44.796f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2679.76f, 4341.263f, 44.796f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 515:
			uParam1->f_4 = { 2183.006f, 3399.342f, 44.527f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2183.006f, 3399.342f, 44.527f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 516:
			uParam1->f_4 = { 1472.324f, 3658.755f, 33.285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1472.324f, 3658.755f, 33.285f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 517:
			uParam1->f_4 = { 1275.338f, 2629.966f, 36.708f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1275.338f, 2629.966f, 36.708f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 518:
			uParam1->f_4 = { 170.01f, 3214.749f, 41.299f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 170.01f, 3214.749f, 41.299f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 519:
			uParam1->f_4 = { -1700.283f, 2371.03f, 48.2861f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1700.283f, 2371.03f, 48.2861f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 520:
			uParam1->f_4 = { -281.741f, 1958.118f, 162.362f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -281.741f, 1958.118f, 162.362f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 521:
			uParam1->f_4 = { 2513.363f, 1969.448f, 18.888f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2513.363f, 1969.448f, 18.888f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1012(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	unk_0xBE20AB8238688965(&(uParam1->f_16), 8);
	switch (iParam0)
	{
		case 432:
			uParam1->f_4 = { 930.938f, -2985.865f, 4.902f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 930.9051f, -2985.834f, 7.117765f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 433:
			uParam1->f_4 = { 686.271f, 577.686f, 129.462f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 683.8532f, 571.3344f, 126.4614f };
			uParam1->f_23 = { 687.7781f, 581.9451f, 138.4614f };
			uParam1->f_26 = 26f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 5);
			break;
		
		case 434:
			uParam1->f_4 = { -383.939f, -2672.466f, 5.001f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -375.7137f, -2665.313f, 2.000296f };
			uParam1->f_23 = { -389.1924f, -2679.025f, 16.00022f };
			uParam1->f_26 = 14f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 5);
			break;
		
		case 435:
			uParam1->f_4 = { -529.086f, -1684.222f, 18.162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -529.1872f, -1684.504f, 24.37777f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 436:
			uParam1->f_4 = { -971.197f, -1305.371f, 19.805f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -971.147f, -1305.277f, 26.02388f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 437:
			uParam1->f_4 = { -1479.12f, -663.178f, 27.944f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1479.093f, -663.1809f, 30.15976f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 438:
			uParam1->f_4 = { -606.75f, -127.3f, 38.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -606.7186f, -127.3883f, 42.22477f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 439:
			uParam1->f_4 = { -489.128f, 187.43f, 82.163f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -489.0805f, 188.4146f, 84.66271f };
			uParam1->f_23 = { 9f, 9f, 7.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 440:
			uParam1->f_4 = { -121.642f, -1000.841f, 53.264f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -121.5962f, -1000.928f, 59.47977f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 441:
			uParam1->f_4 = { -477.012f, -1048.3f, 28.111f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -476.2034f, -1048.321f, 33.15062f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 442:
			uParam1->f_4 = { -2210.614f, 201.99f, 173.602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2210.535f, 202.004f, 177.8178f };
			uParam1->f_23 = { 8f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 443:
			uParam1->f_4 = { -3266.001f, 955.427f, 7.353f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3265.769f, 956.6714f, 8.852164f };
			uParam1->f_23 = { 4f, 5f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 444:
			uParam1->f_4 = { 203.223f, 1198.412f, 230.291f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 204.1984f, 1198.68f, 232.2904f };
			uParam1->f_23 = { 6f, 5f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 445:
			uParam1->f_4 = { 1129.031f, -2074.754f, 30.009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1128.883f, -2074.139f, 32.11232f };
			uParam1->f_23 = { 8f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 446:
			uParam1->f_4 = { 710.051f, -1221.815f, 23.662f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 709.9984f, -1221.838f, 31.87777f };
			uParam1->f_23 = { 12f, 12f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 447:
			uParam1->f_4 = { -773.23f, -1044.829f, 22.103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -772.9905f, -1045.433f, 25.03213f };
			uParam1->f_23 = { 8f, 8f, 5.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 448:
			uParam1->f_4 = { -945.851f, -1422.691f, 6.68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -945.8654f, -1422.655f, 9.895765f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 449:
			uParam1->f_4 = { -1680.96f, -1144.234f, 12.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1680.959f, -1144.148f, 16.23376f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 450:
			uParam1->f_4 = { -1500.022f, -333.221f, 44.9f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1500.08f, -333.2999f, 49.11576f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 451:
			uParam1->f_4 = { -1860.242f, 222.527f, 83.294f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1861.147f, 221.5836f, 84.88553f };
			uParam1->f_23 = { 10f, 10f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 452:
			uParam1->f_4 = { 413.116f, -29.235f, 113.545f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 413.6682f, -29.54296f, 120.6307f };
			uParam1->f_23 = { 12f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 453:
			uParam1->f_4 = { 34.83f, -383.45f, 63.806f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 35.54145f, -383.3248f, 67.84561f };
			uParam1->f_23 = { 7.5f, 7.5f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 454:
			uParam1->f_4 = { 255.416f, -710.354f, 43.686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 255.4533f, -710.2729f, 53.90176f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 455:
			uParam1->f_4 = { 592.18f, -507.294f, 23.749f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 592.2883f, -507.1213f, 27.96477f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 456:
			uParam1->f_4 = { 1076.132f, -685.856f, 56.644f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1076.657f, -686.3031f, 60.68362f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 457:
			uParam1->f_4 = { 471.317f, -2645.512f, 4.712f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 471.1914f, -2645.628f, 7.927763f };
			uParam1->f_23 = { 8f, 8f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 458:
			uParam1->f_4 = { -129.316f, -2223.401f, 6.812f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -129.3752f, -2223.397f, 11.02777f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 459:
			uParam1->f_4 = { -89.978f, -1619.276f, 28.561f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -90.02207f, -1619.194f, 31.77677f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 460:
			uParam1->f_4 = { 276.008f, -1094.465f, 51.577f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 276.0785f, -1094.377f, 59.79276f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 461:
			uParam1->f_4 = { -549.746f, -790.459f, 28.327f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -549.791f, -790.4379f, 34.54276f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 462:
			uParam1->f_4 = { -822.68f, -595.052f, 36.197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -823.3206f, -595.4732f, 41.19666f };
			uParam1->f_23 = { 8f, 8f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 463:
			uParam1->f_4 = { -1220.762f, -498.094f, 30.3f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1220.795f, -498.2372f, 35.50819f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 464:
			uParam1->f_4 = { -178.672f, 53.382f, 66.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -177.8781f, 53.51821f, 69.70059f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 465:
			uParam1->f_4 = { 852.861f, -1902.551f, 36.09f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 852.8772f, -1902.478f, 42.80576f };
			uParam1->f_23 = { 10f, 10f, 8.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 466:
			uParam1->f_4 = { -510.353f, -2030.173f, 11.433f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -510.2602f, -2029.906f, 17.69487f };
			uParam1->f_23 = { 6f, 6f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 467:
			uParam1->f_4 = { 62.658f, -814.916f, 50.886f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 62.39498f, -815.689f, 57.88592f };
			uParam1->f_23 = { 8f, 8f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 468:
			uParam1->f_4 = { -325.831f, -595.941f, 32.559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -325.953f, -595.9745f, 37.77476f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 469:
			uParam1->f_4 = { 1083.071f, -231.408f, 56.415f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1078.683f, -239.1982f, 53.72866f };
			uParam1->f_23 = { 1089.179f, -221.7898f, 67.01202f };
			uParam1->f_26 = 11f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 5);
			break;
		
		case 470:
			uParam1->f_4 = { 210.413f, -3323.262f, 4.794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 210.3148f, -3323.42f, 9.009765f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 471:
			uParam1->f_4 = { -1275.779f, 140.19f, 57.33f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1275.382f, 139.8815f, 61.54577f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 472:
			uParam1->f_4 = { 1306.26f, -1114.417f, 38.5697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1306.246f, -1114.322f, 42.7855f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 473:
			uParam1->f_4 = { 1430.655f, -965.071f, 46.799f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1431.873f, -967.0405f, 49.8205f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 474:
			uParam1->f_4 = { 939.319f, -2368.1f, 29.532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 939.37f, -2368.138f, 32.24776f };
			uParam1->f_23 = { 10f, 10f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 475:
			uParam1->f_4 = { -466.422f, -902.717f, 37.689f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -464.9896f, -901.9402f, 41.18874f };
			uParam1->f_23 = { 6f, 6f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 476:
			uParam1->f_4 = { -3106.299f, 1226.45f, 9.702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3106.248f, 1226.497f, 14.41776f };
			uParam1->f_23 = { 10f, 10f, 4.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 477:
			uParam1->f_4 = { 593.029f, -2094.036f, 4.753f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 592.5204f, -2093.164f, 7.95219f };
			uParam1->f_23 = { 6f, 9f, 4.2f };
			uParam1->f_26 = 0f;
			break;
		
		case 478:
			uParam1->f_4 = { -153.31f, -1098.898f, 12.118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -153.3793f, -1098.834f, 22.33376f };
			uParam1->f_23 = { 7f, 7f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 479:
			uParam1->f_4 = { -45.0454f, -343.4405f, 42.8071f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -45.01437f, -343.3614f, 49.02287f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 480:
			uParam1->f_4 = { -891.383f, -1259.071f, 19.875f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -891.2989f, -1258.869f, 28.09076f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 481:
			uParam1->f_4 = { -423.703f, -330.012f, 41.222f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -423.746f, -330.0201f, 51.37157f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 482:
			uParam1->f_4 = { 730.988f, -2650.476f, 5.178f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 731.4402f, -2650.377f, 7.383765f };
			uParam1->f_23 = { 8f, 8f, 4f };
			uParam1->f_26 = 0f;
			break;
		
		case 483:
			uParam1->f_4 = { 900.184f, -1436.454f, 11.174f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 899.5982f, -1435.845f, 18.16083f };
			uParam1->f_23 = { 6f, 6f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 484:
			uParam1->f_4 = { -136.243f, -943.827f, 113.252f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -136.9158f, -946.3685f, 116.1366f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 485:
			uParam1->f_4 = { -1468.573f, -176.102f, 47.82f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1468.538f, -176.3f, 53.03576f };
			uParam1->f_23 = { 10f, 10f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 486:
			uParam1->f_4 = { 472.426f, -850.549f, 25.315f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 472.5545f, -850.2525f, 28.51157f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 487:
			uParam1->f_4 = { 692.847f, -1009.201f, 21.774f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 692.7442f, -1009.966f, 23.76004f };
			uParam1->f_23 = { 9f, 9f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 488:
			uParam1->f_4 = { 2523.03f, -191.997f, 74.313f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2523.234f, -191.9221f, 79.00169f };
			uParam1->f_23 = { 6f, 6f, 6.5f };
			uParam1->f_26 = 0f;
			break;
		
		case 489:
			uParam1->f_4 = { 837.865f, -844.449f, 25.336f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 837.7624f, -844.5037f, 31.55177f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 490:
			uParam1->f_4 = { -119.004f, -1470.729f, 32.822f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -118.999f, -1470.701f, 34.92577f };
			uParam1->f_23 = { 10f, 10f, 4f };
			uParam1->f_26 = 0f;
			break;
		
		case 491:
			uParam1->f_4 = { 10.9498f, 57.9502f, 70.8541f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 10.98904f, 58.02048f, 78.86353f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1013(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	unk_0xBE20AB8238688965(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 402:
			uParam1->f_4 = { -1256.478f, -834.671f, 64.331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1260.381f, -827.6134f, 64.13916f };
			uParam1->f_23 = { -1238.341f, -860.1589f, 145.1225f };
			uParam1->f_26 = 17f;
			break;
		
		case 403:
			uParam1->f_4 = { 228.338f, -3185.367f, 39.469f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 230.0216f, -3137.969f, 37.16509f };
			uParam1->f_23 = { 230.2049f, -3248.131f, 119.6029f };
			uParam1->f_26 = 67f;
			break;
		
		case 404:
			uParam1->f_4 = { -147.57f, -1279.328f, 46.898f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -122.0623f, -1274.618f, 44.34243f };
			uParam1->f_23 = { -173.7991f, -1275.016f, 126.8981f };
			uParam1->f_26 = 35f;
			break;
		
		case 405:
			uParam1->f_4 = { 910.37f, -1681.356f, 50.132f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 941.9596f, -1687.26f, 36.06182f };
			uParam1->f_23 = { 881.2831f, -1681.78f, 126.1416f };
			uParam1->f_26 = 30f;
			break;
		
		case 406:
			uParam1->f_4 = { 934.263f, -938.137f, 58.092f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 927.3521f, -914.6846f, 53.09032f };
			uParam1->f_23 = { 927.3652f, -980.6048f, 138.0957f };
			uParam1->f_26 = 55f;
			break;
		
		case 407:
			uParam1->f_4 = { 84.206f, -350.93f, 66.202f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 56.1851f, -333.0296f, 61.14438f };
			uParam1->f_23 = { 96.68251f, -347.6448f, 146.1444f };
			uParam1->f_26 = 30f;
			break;
		
		case 408:
			uParam1->f_4 = { -1575.921f, 214.739f, 73.338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1596.797f, 198.9028f, 68.83855f };
			uParam1->f_23 = { -1556.021f, 217.9655f, 153.8386f };
			uParam1->f_26 = 39f;
			break;
		
		case 409:
			uParam1->f_4 = { -2262.532f, 368.693f, 187.602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2261.236f, 353.3083f, 183.667f };
			uParam1->f_23 = { -2272.48f, 378.9598f, 267.6024f };
			uParam1->f_26 = 30f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 4);
			break;
		
		case 410:
			uParam1->f_4 = { -743.213f, -221.389f, 47.519f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -759.4615f, -226.511f, 43.11855f };
			uParam1->f_23 = { -733.8257f, -215.8577f, 128.1186f };
			uParam1->f_26 = 23f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 4);
			break;
		
		case 411:
			uParam1->f_4 = { 40.7f, -1777.083f, 46.7f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 33.93224f, -1787.518f, 41.51208f };
			uParam1->f_23 = { 80.86339f, -1730.699f, 126.7003f };
			uParam1->f_26 = 27f;
			break;
		
		case 412:
			uParam1->f_4 = { 847.553f, -2523.74f, 39.525f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 806.3157f, -2519.168f, 36.5355f };
			uParam1->f_23 = { 881.936f, -2524.729f, 127.2971f };
			uParam1->f_26 = 25f;
			break;
		
		case 413:
			uParam1->f_4 = { -398.9756f, -343.3768f, 69.9677f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -416.5431f, -346.0821f, 71.05437f };
			uParam1->f_23 = { -375.17f, -351.4191f, 155.8033f };
			uParam1->f_26 = 25f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 4);
			break;
		
		case 414:
			uParam1->f_4 = { 77.9442f, -922.8723f, 84.2884f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 107.6461f, -933.997f, 44.6149f };
			uParam1->f_23 = { 54.39706f, -914.7451f, 166.6149f };
			uParam1->f_26 = 85f;
			break;
		
		case 415:
			uParam1->f_4 = { 185.776f, 255.676f, 140.478f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 179.0235f, 227.5602f, 135.9282f };
			uParam1->f_23 = { 200.9801f, 288.2397f, 220.9282f };
			uParam1->f_26 = 28f;
			break;
		
		case 416:
			uParam1->f_4 = { 1240.408f, -2994.69f, 11.164f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1240.566f, -3002.224f, 3.319258f };
			uParam1->f_23 = { 1240.273f, -2950.456f, 88.31926f };
			uParam1->f_26 = 27f;
			break;
		
		case 417:
			uParam1->f_4 = { -137.675f, 6176.477f, 39.165f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -149.8223f, 6160.892f, 35.82255f };
			uParam1->f_23 = { -115.8774f, 6195.789f, 121.9215f };
			uParam1->f_26 = 32f;
			break;
		
		case 418:
			uParam1->f_4 = { 2740.51f, 3474.729f, 72.704f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2722.111f, 3442.816f, 66.5176f };
			uParam1->f_23 = { 2751.01f, 3512.019f, 152.5181f };
			uParam1->f_26 = 27f;
			break;
		
		case 419:
			uParam1->f_4 = { 1710.586f, 4779.984f, 46.585f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1711.055f, 4760.765f, 41.41178f };
			uParam1->f_23 = { 1711.034f, 4790.055f, 127.4129f };
			uParam1->f_26 = 30f;
			break;
		
		case 420:
			uParam1->f_4 = { 590.234f, 2763.851f, 50.145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 598.3928f, 2744.509f, 44.43517f };
			uParam1->f_23 = { 595.8835f, 2782.835f, 127.9985f };
			uParam1->f_26 = 52f;
			break;
		
		case 421:
			uParam1->f_4 = { 734.51f, 1292.156f, 359.296f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 739.7446f, 1288.609f, 353.2967f };
			uParam1->f_23 = { 769.9889f, 1287.509f, 439.2967f };
			uParam1->f_26 = 55f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 4);
			break;
		
		case 422:
			uParam1->f_4 = { -1111.574f, 2704.87f, 22.841f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1123.027f, 2693.358f, 17.49279f };
			uParam1->f_23 = { -1098.112f, 2716.403f, 102.4839f };
			uParam1->f_26 = 22f;
			break;
		
		case 423:
			uParam1->f_4 = { 1518.644f, 3578.375f, 41.0232f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1542.941f, 3591.818f, 35.10985f };
			uParam1->f_23 = { 1506.198f, 3570.45f, 121.1119f };
			uParam1->f_26 = 18f;
			break;
		
		case 424:
			uParam1->f_4 = { -1594.487f, 763.167f, 188.194f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1613.787f, 760.4377f, 182.2431f };
			uParam1->f_23 = { -1563.257f, 784.1996f, 275.9496f };
			uParam1->f_26 = 45f;
			break;
		
		case 425:
			uParam1->f_4 = { 250.021f, 3610.677f, 32.931f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 239.7506f, 3564.669f, 27.76138f };
			uParam1->f_23 = { 249.5125f, 3627.261f, 112.5437f };
			uParam1->f_26 = 48f;
			break;
		
		case 426:
			uParam1->f_4 = { 156.196f, 7353.579f, 10.521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 137.4374f, 7337.537f, 2.219269f };
			uParam1->f_23 = { 177.069f, 7369.922f, 90.69885f };
			uParam1->f_26 = 48f;
			break;
		
		case 427:
			uParam1->f_4 = { 2936.501f, 777.473f, 25.68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2904.622f, 760.8602f, 12.97041f };
			uParam1->f_23 = { 2959f, 809.2928f, 102.5311f };
			uParam1->f_26 = 48f;
			break;
		
		case 428:
			uParam1->f_4 = { 3623.009f, 5676.726f, 6.772f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3596.06f, 5674.643f, 1.261269f };
			uParam1->f_23 = { 3674.869f, 5651.38f, 102.2014f };
			uParam1->f_26 = 39.25f;
			break;
		
		case 429:
			uParam1->f_4 = { 2373.838f, 6615.34f, 1.1413f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2385.575f, 6643.938f, -11.1034f };
			uParam1->f_23 = { 2372.584f, 6580.026f, 87.70878f };
			uParam1->f_26 = 60f;
			break;
		
		case 430:
			uParam1->f_4 = { -2589.942f, 1884.457f, 170.4919f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2597.961f, 1873.451f, 165.6799f };
			uParam1->f_23 = { -2576.077f, 1892.283f, 250.493f };
			uParam1->f_26 = 20f;
			unk_0xBE20AB8238688965(&(uParam1->f_16), 4);
			break;
		
		case 431:
			uParam1->f_4 = { -494.282f, 5289.946f, 79.61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -512.1506f, 5246.959f, 74.31995f };
			uParam1->f_23 = { -486.8627f, 5314.746f, 166.4803f };
			uParam1->f_26 = 35f;
			break;
	}
}

void func_1014(int iParam0, var uParam1)
{
	unk_0xBE20AB8238688965(&(uParam1->f_16), 3);
	unk_0xBE20AB8238688965(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 382:
			uParam1->f_4 = { 874.777f, 2344.294f, 50.686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 861.0251f, 2349.384f, 49.64794f };
			uParam1->f_23 = { 881.1734f, 2349.657f, 70.6908f };
			uParam1->f_26 = 30f;
			break;
		
		case 383:
			uParam1->f_4 = { -7.204f, 6199.675f, 38.755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3.588748f, 6194.031f, 30.69162f };
			uParam1->f_23 = { -18.89411f, 6213.56f, 70.39188f };
			uParam1->f_26 = 45f;
			break;
		
		case 384:
			uParam1->f_4 = { 1991.296f, 5002.771f, 40.41f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1982.497f, 5013.054f, 37.34918f };
			uParam1->f_23 = { 2002.317f, 4990.892f, 70.40779f };
			uParam1->f_26 = 40f;
			break;
		
		case 385:
			uParam1->f_4 = { 1787.863f, 3397.899f, 39.721f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1779.74f, 3394.033f, 36.23817f };
			uParam1->f_23 = { 1803.401f, 3407.283f, 69.5711f };
			uParam1->f_26 = 40f;
			break;
		
		case 386:
			uParam1->f_4 = { -2022.113f, 561.086f, 106.95f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2024.853f, 543.6421f, 106.1676f };
			uParam1->f_23 = { -2018.602f, 575.4886f, 139.3349f };
			uParam1->f_26 = 32f;
			break;
		
		case 387:
			uParam1->f_4 = { 3848.949f, 4749.052f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3857.233f, 4736.315f, 2.018371f };
			uParam1->f_23 = { 3841.512f, 4761.041f, 30.14906f };
			uParam1->f_26 = 25f;
			break;
		
		case 388:
			uParam1->f_4 = { 942.1198f, 6940.537f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 939.619f, 6925.514f, 1.983978f };
			uParam1->f_23 = { 944.592f, 6954.486f, 29.81213f };
			uParam1->f_26 = 25f;
			break;
		
		case 389:
			uParam1->f_4 = { -757.7433f, 6175.542f, 4.1283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -771.9074f, 6176.819f, 2.186861f };
			uParam1->f_23 = { -743.0279f, 6174.761f, 30.68049f };
			uParam1->f_26 = 25f;
			break;
		
		case 390:
			uParam1->f_4 = { -1807.144f, 5279.726f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1812.923f, 5266.89f, 2.169169f };
			uParam1->f_23 = { -1800.996f, 5293.814f, 30.28967f };
			uParam1->f_26 = 25f;
			break;
		
		case 391:
			uParam1->f_4 = { -3414.893f, 1565.538f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3428.292f, 1561.292f, 2.13642f };
			uParam1->f_23 = { -3400.509f, 1570.362f, 30.36943f };
			uParam1->f_26 = 25f;
			break;
		
		case 392:
			uParam1->f_4 = { -347.548f, -2421.686f, 1.652f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -359.1149f, -2435.098f, -1.131242f };
			uParam1->f_23 = { -336.0713f, -2407.629f, 26.86958f };
			uParam1->f_26 = 9f;
			break;
		
		case 393:
			uParam1->f_4 = { 1043.372f, -2881.166f, 18.018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1024.188f, -2880.972f, 15.03582f };
			uParam1->f_23 = { 1063.541f, -2881.016f, 43.03582f };
			uParam1->f_26 = 30f;
			break;
		
		case 394:
			uParam1->f_4 = { 924.896f, -1240.747f, 24.524f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 932.9946f, -1260.574f, 22.68546f };
			uParam1->f_23 = { 912.2214f, -1232.266f, 49.51196f };
			uParam1->f_26 = 30f;
			break;
		
		case 395:
			uParam1->f_4 = { -451.996f, -918.816f, 46.985f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -451.6511f, -935.5438f, 43.98464f };
			uParam1->f_23 = { -452.4876f, -897.9177f, 71.98894f };
			uParam1->f_26 = 25f;
			break;
		
		case 396:
			uParam1->f_4 = { 1147.597f, 124.969f, 80.967f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1133.214f, 100.1685f, 77.02354f };
			uParam1->f_23 = { 1163.711f, 149.8149f, 104.8858f };
			uParam1->f_26 = 60f;
			break;
		
		case 397:
			uParam1->f_4 = { 673.841f, 1285.48f, 362.103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 675.8716f, 1288.757f, 356.296f };
			uParam1->f_23 = { 676.0979f, 1276.26f, 384.296f };
			uParam1->f_26 = 30f;
			break;
		
		case 398:
			uParam1->f_4 = { -2316.168f, -1328.555f, 4.2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2322.772f, -1342.042f, 2.358489f };
			uParam1->f_23 = { -2309.929f, -1315.937f, 30.41694f };
			uParam1->f_26 = 25f;
			break;
		
		case 399:
			uParam1->f_4 = { 2288.262f, -2547.099f, -24.1587f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2278.695f, -2557.841f, 2.410532f };
			uParam1->f_23 = { 2298.015f, -2536.507f, 30.3815f };
			uParam1->f_26 = 25f;
			break;
		
		case 400:
			uParam1->f_4 = { 3107.64f, 822.0205f, -5.6705f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3117.857f, 811.9422f, 2.199003f };
			uParam1->f_23 = { 3097.107f, 831.8228f, 30.35834f };
			uParam1->f_26 = 25f;
			break;
		
		case 401:
			uParam1->f_4 = { 3430.34f, 2275.244f, -21.7691f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3422.722f, 2263.081f, 2.113419f };
			uParam1->f_23 = { 3438.165f, 2287.443f, 30.34889f };
			uParam1->f_26 = 25f;
			break;
	}
}

void func_1015(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -1132.019f, -3481.439f, 36.94393f };
			*uParam2 = { -1227.921f, -3426.592f, 136.8073f };
			*uParam3 = 100f;
			break;
		
		case 2:
			*uParam1 = { -1381.35f, -3303.02f, 29.99623f };
			*uParam2 = { -1434.088f, -3272.819f, 130.9934f };
			*uParam3 = 45f;
			break;
		
		case 3:
			*uParam1 = { -2019.949f, 3159.68f, 48.58803f };
			*uParam2 = { -1979.777f, 3229.238f, 156.5891f };
			*uParam3 = 70f;
			break;
		
		case 4:
			*uParam1 = { -1876.744f, 3111.081f, 43.71916f };
			*uParam2 = { -1850.549f, 3156.451f, 148.7225f };
			*uParam3 = 33f;
			break;
		
		case 5:
			*uParam1 = { -2468.442f, 3278.073f, 43.7138f };
			*uParam2 = { -2442.203f, 3323.376f, 148.7309f };
			*uParam3 = 33f;
			break;
	}
}

Vector3 func_1016(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1148.628f, -3403.893f, 12.945f };
			break;
		
		case 2:
			Var0 = { -1391.453f, -3259.564f, 12.9448f };
			break;
		
		case 3:
			Var0 = { -2025.203f, 3150.572f, 31.8103f };
			break;
		
		case 4:
			Var0 = { -1881.584f, 3102.007f, 31.8103f };
			break;
		
		case 5:
			Var0 = { -2473.68f, 3267.99f, 31.8461f };
			break;
	}
	return Var0;
}

Vector3 func_1017(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1152.431f, -3410.42f, 12.945f };
			break;
		
		case 2:
			Var0 = { -1395.358f, -3266.353f, 12.9448f };
			break;
		
		case 3:
			Var0 = { -2020.971f, 3157.293f, 31.8103f };
			break;
		
		case 4:
			Var0 = { -1877.766f, 3108.921f, 31.8103f };
			break;
		
		case 5:
			Var0 = { -2469.717f, 3275.254f, 31.8325f };
			break;
	}
	return Var0;
}

int func_1018(var uParam0)
{
	return func_391(func_1019(&uParam0));
}

int func_1019(var uParam0)
{
	if ((func_936(uParam0) || *uParam0 == 761) || *uParam0 == 762)
	{
		switch (*uParam0)
		{
			case 377:
				return 83;
			
			case 378:
				return 84;
			
			case 379:
				return 85;
			
			case 380:
				return 86;
			
			case 381:
				return 87;
			
			case 761:
				return 83;
			
			case 762:
				return 84;
			}
		
		default:
	}
	return -1;
}

void func_1020(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 4)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (((((((iParam1 == 6 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1021(int iParam0)
{
	switch (func_926(&iParam0))
	{
		case 24:
			return 1;
		
		default:
	}
	if (func_936(&iParam0))
	{
		return 1;
	}
	return 0;
}

struct<27> func_1022(int iParam0)
{
	struct<27> Var0;
	int iVar27;
	int iVar28;
	
	iVar27 = func_946(&iParam0);
	if (func_947(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_GUNRUNNING_DELIVERY", 32);
		Var0.f_18 = 224888;
		Var0.f_19 = 224838;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		if (func_1052(&iParam0))
		{
			Var0 = { Global_1678288.f_941[func_1051(&iParam0) /*3*/] };
			Var0.f_4 = { func_1047(func_1049(iParam0), 0) };
			iVar28 = unk_0x9B0761B4C3EB8BC7();
			switch (func_1032(&iVar28))
			{
				case 4:
					Var0.f_17 = 2;
					func_1032(&iVar28);
					break;
				
				case 1:
					Var0.f_17 = 1;
					break;
				
				case 3:
					Var0.f_17 = 3;
					if (func_1031(&iVar28) || func_1029(&iVar28))
					{
						Var0.f_17 = 4;
					}
					break;
			}
		}
		else
		{
			switch (iVar27)
			{
				case 17:
					Var0.f_17 = 5;
					func_1028(iParam0, &Var0);
					break;
				
				case 18:
					Var0.f_17 = 6;
					func_1027(iParam0, &Var0);
					Var0.f_7 = 15f;
					break;
				
				case 15:
					Var0.f_17 = 7;
					func_1026(iParam0, &Var0);
					Var0.f_7 = 7.5f;
					break;
				
				case 14:
					Var0.f_17 = 10;
					func_1025(iParam0, &Var0);
					break;
				
				case 16:
					Var0.f_17 = 8;
					func_1024(iParam0, &Var0);
					break;
				
				case 19:
					Var0.f_17 = 9;
					func_1023(iParam0, &Var0);
					break;
				}
			}
	}
	return Var0;
}

void func_1023(int iParam0, var uParam1)
{
	if (iParam0 > 256)
	{
		switch (iParam0)
		{
			case 307:
				uParam1->f_4 = { -115.4032f, 1416.123f, 294.134f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 308:
				uParam1->f_4 = { 156.6951f, 703.3265f, 207.1029f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 309:
				uParam1->f_4 = { 2538.239f, -199.7805f, 72.551f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 310:
				uParam1->f_4 = { 659.4763f, -491.1226f, 14.688f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 311:
				uParam1->f_4 = { 1411.413f, 1051.715f, 113.3343f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 312:
				uParam1->f_4 = { -583.498f, -1453.726f, 9.2096f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 313:
				uParam1->f_4 = { 1582.181f, -2009.475f, 92.7024f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 314:
				uParam1->f_4 = { 1563.969f, -2677.09f, 36.8862f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 315:
				uParam1->f_4 = { 1110.337f, -3080.767f, 4.8473f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 316:
				uParam1->f_4 = { 369.0472f, -2431.285f, 5.0417f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 317:
				uParam1->f_4 = { -758.4178f, -2595.934f, 12.8285f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 318:
				uParam1->f_4 = { 732.8478f, -1518.746f, 18.7068f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 319:
				uParam1->f_4 = { -815.6332f, -1819.319f, 27.6752f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 320:
				uParam1->f_4 = { 1234.662f, -2689.25f, 1.4614f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 321:
				uParam1->f_4 = { 271.8187f, -2501.891f, 5.4403f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 322:
				uParam1->f_4 = { 395.6607f, 32.3907f, 90.4966f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 323:
				uParam1->f_4 = { -1049.013f, -89.9484f, 42.5869f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 324:
				uParam1->f_4 = { 1345.963f, -1025.396f, 38.9002f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 325:
				uParam1->f_4 = { -1630.345f, -1124.862f, 1.0889f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 326:
				uParam1->f_4 = { 5.3001f, -1102.714f, 37.152f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 327:
				uParam1->f_4 = { 613.4843f, -1108.784f, 9.1824f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 328:
				uParam1->f_4 = { -350.6446f, -1188.939f, 21.9375f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 329:
				uParam1->f_4 = { 2486.714f, -1989.521f, 66.1648f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 330:
				uParam1->f_4 = { 610.8346f, -2850.166f, 2.095f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 331:
				uParam1->f_4 = { 508.5753f, -2309.013f, 4.9173f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 332:
				uParam1->f_4 = { 865.9128f, 831.9396f, 167.0572f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 333:
				uParam1->f_4 = { 438.3826f, 790.9186f, 193.4617f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 334:
				uParam1->f_4 = { 2174.23f, 129.0715f, 227.4601f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 335:
				uParam1->f_4 = { -430.7544f, -566.5062f, 26.6955f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 336:
				uParam1->f_4 = { 820.8608f, -487.1843f, 29.3492f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 337:
				uParam1->f_4 = { -927.1212f, -754.834f, 18.7713f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 338:
				uParam1->f_4 = { 2826.007f, -744.9128f, 16.3986f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 339:
				uParam1->f_4 = { -347.0302f, -1714.736f, 0.1588f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 340:
				uParam1->f_4 = { 1165.333f, -2217.156f, 29.818f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 341:
				uParam1->f_4 = { 732.7329f, -724.3032f, 25.5982f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 342:
				uParam1->f_4 = { -534.8953f, -893.4067f, 23.3456f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 343:
				uParam1->f_4 = { -1483.8f, -1478.867f, 1.5746f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 344:
				uParam1->f_4 = { 660.1437f, -1662.937f, 8.7057f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 345:
				uParam1->f_4 = { 756.9075f, -2560.279f, 9.1108f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 346:
				uParam1->f_4 = { -688.3148f, -2474.599f, 12.8285f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 347:
				uParam1->f_4 = { -344.8739f, 1373.627f, 339.4823f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 348:
				uParam1->f_4 = { 679.5253f, 1213.034f, 323.3946f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 349:
				uParam1->f_4 = { 402.2882f, 1033.397f, 236.317f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 350:
				uParam1->f_4 = { 1994.461f, 497.7719f, 162.3902f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 351:
				uParam1->f_4 = { -71.2453f, 184.6311f, 86.3855f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 352:
				uParam1->f_4 = { -423.4632f, 865.8475f, 233.0571f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 353:
				uParam1->f_4 = { -1040.682f, 918.1884f, 168.968f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 354:
				uParam1->f_4 = { -1540.535f, 332.4937f, 84.6292f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 355:
				uParam1->f_4 = { -1984.656f, -248.1744f, 33.4115f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 356:
				uParam1->f_4 = { -359.8619f, -92.1446f, 44.662f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			}
	}
	switch (iParam0)
	{
		case 257:
			uParam1->f_4 = { 2347.526f, 5563.68f, 38.5584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 258:
			uParam1->f_4 = { 2732.712f, 5221.74f, 50.1412f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 259:
			uParam1->f_4 = { -203.4516f, 4426.908f, 45.1766f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 260:
			uParam1->f_4 = { 1402.941f, 2107.932f, 104.4429f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 261:
			uParam1->f_4 = { 1913.308f, 3726.871f, 31.4625f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 262:
			uParam1->f_4 = { 77.0293f, 7077.308f, 0.9681f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 263:
			uParam1->f_4 = { 1468.96f, 4947.473f, 75.1823f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 264:
			uParam1->f_4 = { -126.1526f, 3546.554f, 55.0922f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 265:
			uParam1->f_4 = { 1063.111f, 3275.501f, 36.6055f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 266:
			uParam1->f_4 = { -509.5927f, 5242.972f, 79.304f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 267:
			uParam1->f_4 = { 2351.059f, 5001.8f, 41.7707f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 268:
			uParam1->f_4 = { 1824.454f, 4733.53f, 32.5693f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 269:
			uParam1->f_4 = { -1844.69f, 4556.438f, 4.9786f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 270:
			uParam1->f_4 = { -1376.324f, 4413.688f, 28.537f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 271:
			uParam1->f_4 = { -18.1656f, 6261.238f, 30.2358f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 272:
			uParam1->f_4 = { 570.2625f, 4177.667f, 37.1188f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 273:
			uParam1->f_4 = { -445.1836f, 4015.951f, 80.0153f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 274:
			uParam1->f_4 = { 1440.298f, 2804.806f, 51.8026f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 275:
			uParam1->f_4 = { -2103.897f, 2473.496f, 0.5534f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 276:
			uParam1->f_4 = { -80.3433f, 1879.382f, 196.2338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 277:
			uParam1->f_4 = { -494.58f, 5547.659f, 72.4075f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 278:
			uParam1->f_4 = { 1262.87f, 4384.995f, 43.9866f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 279:
			uParam1->f_4 = { 825.5037f, 2137.788f, 51.2936f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 280:
			uParam1->f_4 = { -2911.529f, 1592.034f, 28.2507f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 281:
			uParam1->f_4 = { -1658.676f, 3045.86f, 30.8135f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 282:
			uParam1->f_4 = { 813.8033f, 6638.829f, 1.0195f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 283:
			uParam1->f_4 = { 143.9241f, 6317.533f, 30.474f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 284:
			uParam1->f_4 = { -291.3325f, 6303.275f, 30.4923f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 285:
			uParam1->f_4 = { -575.9571f, 5846.869f, 28.8116f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 286:
			uParam1->f_4 = { 2515.608f, 4962.869f, 43.5619f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 287:
			uParam1->f_4 = { 2900.887f, 4637.51f, 47.5426f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 288:
			uParam1->f_4 = { 1993.716f, 3934.452f, 31.23f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 289:
			uParam1->f_4 = { 124.3457f, 3004.625f, 47.3517f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 290:
			uParam1->f_4 = { 754.0544f, 2336.919f, 49.0994f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 291:
			uParam1->f_4 = { 2746.92f, 1444.504f, 23.4889f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 292:
			uParam1->f_4 = { 1550.989f, 6543.894f, 21.4149f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 293:
			uParam1->f_4 = { 993.5634f, 6403.824f, 28.4137f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 294:
			uParam1->f_4 = { 1623.713f, 3783.464f, 33.652f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 295:
			uParam1->f_4 = { 2623.721f, 1971.464f, 29.141f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 296:
			uParam1->f_4 = { 2899.761f, 4382.502f, 49.3713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 297:
			uParam1->f_4 = { 2581.925f, 5608.749f, 59.9163f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 298:
			uParam1->f_4 = { 2236.698f, 4785.659f, 39.1814f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 299:
			uParam1->f_4 = { 1158.342f, 4584.417f, 73.9566f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 300:
			uParam1->f_4 = { 1495.8f, 4599.003f, 50.9645f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 301:
			uParam1->f_4 = { 1988.47f, 3033.79f, 46.0563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 302:
			uParam1->f_4 = { -1640.253f, 4581.037f, 41.8798f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 303:
			uParam1->f_4 = { 2607.227f, 4441.909f, 39.0584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 304:
			uParam1->f_4 = { -1204.787f, 4448.327f, 30.2424f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 305:
			uParam1->f_4 = { -2302.336f, 4116.885f, 27.3913f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 306:
			uParam1->f_4 = { 468.1049f, 3546.374f, 32.2386f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
	}
	if (((((((((((((((((((iParam0 != 261 && iParam0 != 266) && iParam0 != 271) && iParam0 != 276) && iParam0 != 281) && iParam0 != 286) && iParam0 != 291) && iParam0 != 296) && iParam0 != 301) && iParam0 != 306) && iParam0 != 311) && iParam0 != 316) && iParam0 != 321) && iParam0 != 326) && iParam0 != 331) && iParam0 != 336) && iParam0 != 341) && iParam0 != 346) && iParam0 != 351) && iParam0 != 356)
	{
		unk_0xBE20AB8238688965(&(uParam1->f_16), 2);
	}
}

void func_1024(int iParam0, var uParam1)
{
	if (iParam0 > 156)
	{
		switch (iParam0)
		{
			case 207:
				uParam1->f_4 = { -2191.674f, 904.894f, 228.613f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 208:
				uParam1->f_4 = { -2512.552f, 761.624f, 300.404f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 209:
				uParam1->f_4 = { -2554.847f, 279.211f, 184.89f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 210:
				uParam1->f_4 = { -2267.61f, -26.611f, 111.309f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 211:
				uParam1->f_4 = { -1705.979f, -82.071f, 79.054f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 212:
				uParam1->f_4 = { 2581.854f, -775.529f, 84.981f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 213:
				uParam1->f_4 = { 2155.905f, -1111.007f, 172.283f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 214:
				uParam1->f_4 = { 2048.335f, -1619.833f, 234.082f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 215:
				uParam1->f_4 = { 1880.627f, -1864.139f, 192.18f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 216:
				uParam1->f_4 = { 1827.189f, -2349.425f, 146.409f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 217:
				uParam1->f_4 = { 1893.68f, -885.746f, 117.794f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 218:
				uParam1->f_4 = { 1495.998f, -1275.113f, 121.534f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 219:
				uParam1->f_4 = { 1269.73f, -941.188f, 77.584f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 220:
				uParam1->f_4 = { 1582.159f, -635.642f, 147.727f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 221:
				uParam1->f_4 = { 1841.793f, -237.63f, 293.53f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 222:
				uParam1->f_4 = { 2216.092f, 246.356f, 258.916f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 223:
				uParam1->f_4 = { 2205.155f, 591.884f, 261.37f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 224:
				uParam1->f_4 = { 2089.61f, 971.773f, 213.314f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 225:
				uParam1->f_4 = { 1885.172f, 997.583f, 274.815f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 226:
				uParam1->f_4 = { 1830.645f, 1496.993f, 119.015f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 227:
				uParam1->f_4 = { 1050.058f, 1020.909f, 249.595f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 228:
				uParam1->f_4 = { 1311.87f, 720.812f, 85.503f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 229:
				uParam1->f_4 = { 1619.17f, 450.971f, 250.382f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 230:
				uParam1->f_4 = { 1589.916f, 95.761f, 209.272f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 231:
				uParam1->f_4 = { 1169.067f, -147.911f, 55.814f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 232:
				uParam1->f_4 = { 980.968f, 716.382f, 192.186f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 233:
				uParam1->f_4 = { 822.654f, 1314.468f, 362.31f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 234:
				uParam1->f_4 = { 358.749f, 1186.109f, 266.835f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 235:
				uParam1->f_4 = { 409.162f, 712.279f, 196.507f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 236:
				uParam1->f_4 = { 568.269f, 431.24f, 171.505f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 237:
				uParam1->f_4 = { 442.851f, 1711.104f, 258.1f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 238:
				uParam1->f_4 = { 489.231f, 1446.313f, 350.169f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 239:
				uParam1->f_4 = { -39.039f, 1563.259f, 297.352f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 240:
				uParam1->f_4 = { -96.733f, 1265.517f, 302.811f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 241:
				uParam1->f_4 = { 186.677f, 1038.29f, 243.259f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 242:
				uParam1->f_4 = { 125.427f, 1435.429f, 261.481f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 243:
				uParam1->f_4 = { -471.373f, 1525.389f, 390.228f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 244:
				uParam1->f_4 = { -891.67f, 1297.359f, 300.137f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 245:
				uParam1->f_4 = { -1022.612f, 1641.04f, 258.438f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 246:
				uParam1->f_4 = { -1363.53f, 1662.061f, 176.57f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 247:
				uParam1->f_4 = { -1135.81f, 1901.406f, 175.34f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 248:
				uParam1->f_4 = { -1043.954f, 1592.751f, 265.3f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 249:
				uParam1->f_4 = { -1289.223f, 1127.897f, 280.162f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 250:
				uParam1->f_4 = { -1547.309f, 724.521f, 202.398f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 251:
				uParam1->f_4 = { -1766.17f, 613.099f, 179.457f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 252:
				uParam1->f_4 = { -1616.113f, 794.88f, 184.868f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 253:
				uParam1->f_4 = { -1948.807f, 1081.29f, 256.194f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 254:
				uParam1->f_4 = { -2354.82f, 1293.149f, 330.953f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 255:
				uParam1->f_4 = { -1947.759f, 1503.9f, 269.274f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 256:
				uParam1->f_4 = { -1736.649f, 1771.232f, 197.702f };
				*uParam1 = { uParam1->f_4 };
				break;
			}
	}
	switch (iParam0)
	{
		case 157:
			uParam1->f_4 = { 2166.96f, 5773.108f, 176.947f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 158:
			uParam1->f_4 = { 1794.606f, 5805.495f, 334.124f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 159:
			uParam1->f_4 = { 1311.736f, 5810.9f, 471.065f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 160:
			uParam1->f_4 = { 803.115f, 5696.31f, 696.74f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 161:
			uParam1->f_4 = { 505.028f, 5524.13f, 775.336f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 162:
			uParam1->f_4 = { 2678.877f, 2657.504f, 81.457f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 163:
			uParam1->f_4 = { 2950.072f, 2508.028f, 163.35f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 164:
			uParam1->f_4 = { 2802.67f, 2057.809f, 123.411f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 165:
			uParam1->f_4 = { 2383.232f, 1815.577f, 90.89f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 166:
			uParam1->f_4 = { 2119.979f, 1718.67f, 100.1659f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 167:
			uParam1->f_4 = { 2985.565f, 4871.652f, 126.073f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 168:
			uParam1->f_4 = { 3193.98f, 4728.654f, 191.278f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 169:
			uParam1->f_4 = { 3443.923f, 4200.008f, 239.302f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 170:
			uParam1->f_4 = { 3090.46f, 3505.364f, 122.488f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 171:
			uParam1->f_4 = { 2956.266f, 3130.24f, 170.545f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 172:
			uParam1->f_4 = { -114.5166f, 4366.305f, 66.5739f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 173:
			uParam1->f_4 = { -389.1314f, 4714.173f, 262.0202f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 174:
			uParam1->f_4 = { -927.3663f, 4830.777f, 308.1317f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 175:
			uParam1->f_4 = { -947.983f, 4616.67f, 238.343f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 176:
			uParam1->f_4 = { -1193.135f, 4791.787f, 219.39f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 177:
			uParam1->f_4 = { -547.3558f, 3063.189f, 41.6977f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 178:
			uParam1->f_4 = { -788.8897f, 3439.263f, 163.2574f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 179:
			uParam1->f_4 = { -693.747f, 3633.733f, 290.969f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 180:
			uParam1->f_4 = { -524.5084f, 3545.819f, 235.8375f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 181:
			uParam1->f_4 = { -299.48f, 3403.149f, 143.3759f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 182:
			uParam1->f_4 = { -757.9035f, 3107.519f, 87.9309f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 183:
			uParam1->f_4 = { -936.9541f, 3343.828f, 214.99f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 184:
			uParam1->f_4 = { -976.6102f, 3827.846f, 428.4182f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 185:
			uParam1->f_4 = { -1172.518f, 3833.279f, 483.9537f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 186:
			uParam1->f_4 = { -1296.6f, 3683.431f, 425.8118f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 187:
			uParam1->f_4 = { 1806.788f, 6509.859f, 69.7009f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 188:
			uParam1->f_4 = { 2136.818f, 6427.576f, 153.6458f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 189:
			uParam1->f_4 = { 2412.896f, 6475.143f, 72.3587f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 190:
			uParam1->f_4 = { 2827.761f, 5967.506f, 350.351f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 191:
			uParam1->f_4 = { 3061.18f, 5557.61f, 195.6185f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 192:
			uParam1->f_4 = { 2626.258f, 3660.501f, 100.4183f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 193:
			uParam1->f_4 = { 1727.974f, 3046.818f, 58.9817f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 194:
			uParam1->f_4 = { 537.097f, 3362.167f, 98.3086f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 195:
			uParam1->f_4 = { -314.4719f, 3789.605f, 67.1712f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 196:
			uParam1->f_4 = { -544.3684f, 4198.801f, 191.2337f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 197:
			uParam1->f_4 = { -1634.461f, 1987.978f, 114.3933f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 198:
			uParam1->f_4 = { -1946.999f, 1558.013f, 268.019f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 199:
			uParam1->f_4 = { -2367.749f, 1294.907f, 331.8613f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 200:
			uParam1->f_4 = { -2725.23f, 1248.93f, 132.6765f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 201:
			uParam1->f_4 = { -3247.449f, 1246.809f, 1.6992f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 202:
			uParam1->f_4 = { 2487.351f, 5210.566f, 70.7697f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 203:
			uParam1->f_4 = { 2153.843f, 5382.093f, 164.5574f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 204:
			uParam1->f_4 = { 1663.681f, 5156.728f, 152.0881f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 205:
			uParam1->f_4 = { 1398.803f, 5181.02f, 224.986f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 206:
			uParam1->f_4 = { 862.0489f, 5172.775f, 456.8228f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if (((((((((((((((((((iParam0 != 161 && iParam0 != 166) && iParam0 != 171) && iParam0 != 176) && iParam0 != 181) && iParam0 != 186) && iParam0 != 191) && iParam0 != 196) && iParam0 != 201) && iParam0 != 206) && iParam0 != 211) && iParam0 != 216) && iParam0 != 221) && iParam0 != 226) && iParam0 != 231) && iParam0 != 236) && iParam0 != 241) && iParam0 != 246) && iParam0 != 251) && iParam0 != 256)
	{
		unk_0xBE20AB8238688965(&(uParam1->f_16), 2);
	}
}

void func_1025(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 92:
			uParam1->f_4 = { 2875.468f, 2806.367f, 53.7213f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 93:
			uParam1->f_4 = { 1052.251f, 2670.066f, 38.551f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 94:
			uParam1->f_4 = { -833.729f, 1714.583f, 191.577f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 95:
			uParam1->f_4 = { -2653.676f, 2422.161f, 3.925f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 96:
			uParam1->f_4 = { -3048.342f, 602.2847f, 6.2691f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 97:
			uParam1->f_4 = { 1068.72f, 3588.034f, 30.602f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 98:
			uParam1->f_4 = { 138.118f, 3119.263f, 41.636f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 99:
			uParam1->f_4 = { -1285.809f, 2593.409f, 11.3524f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 100:
			uParam1->f_4 = { -2417.672f, 4110.082f, 17.934f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 101:
			uParam1->f_4 = { -292.009f, 6130.332f, 30.501f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 102:
			uParam1->f_4 = { -140.7524f, 6356.994f, 30.4906f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 103:
			uParam1->f_4 = { 1449.218f, 6579.69f, 11.894f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 104:
			uParam1->f_4 = { 2399.676f, 4911.915f, 41.464f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 105:
			uParam1->f_4 = { 1706.076f, 3872.908f, 33.904f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 106:
			uParam1->f_4 = { 435.271f, 3522.796f, 32.626f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 107:
			uParam1->f_4 = { 1187.571f, 6561.227f, 1.997f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 108:
			uParam1->f_4 = { 2486.772f, 4816.758f, 33.768f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 109:
			uParam1->f_4 = { 1488.547f, 3701.168f, 33.382f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 110:
			uParam1->f_4 = { 1522.554f, 1669.512f, 109.698f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 111:
			uParam1->f_4 = { 2309.18f, 2518.352f, 45.667f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 112:
			uParam1->f_4 = { 1095.315f, 2109.932f, 52.42f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 113:
			uParam1->f_4 = { 1376.68f, 3599.511f, 33.881f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 114:
			uParam1->f_4 = { 2952.854f, 4253.191f, 52.768f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 115:
			uParam1->f_4 = { 2263.006f, 5612.513f, 53.817f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 116:
			uParam1->f_4 = { 1465.186f, 6356f, 22.836f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 117:
			uParam1->f_4 = { 1929.979f, 4642.605f, 39.444f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 118:
			uParam1->f_4 = { 1803.659f, 3731.653f, 32.819f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 119:
			uParam1->f_4 = { 1034.936f, 2514.938f, 45.828f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 120:
			uParam1->f_4 = { 1215.731f, 1819.276f, 77.957f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 121:
			uParam1->f_4 = { 2700.918f, 1559.111f, 23.527f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 122:
			uParam1->f_4 = { 186.915f, 3056.921f, 41.959f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 123:
			uParam1->f_4 = { -124.3542f, 1883.494f, 196.7805f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 124:
			uParam1->f_4 = { 1433.62f, 1182.607f, 113.194f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 125:
			uParam1->f_4 = { 2077.199f, 2340.758f, 93.3144f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 126:
			uParam1->f_4 = { 2869.919f, 4711.485f, 47.8156f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 127:
			uParam1->f_4 = { -3196.817f, 962.4005f, 17.1183f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 128:
			uParam1->f_4 = { -3043.259f, 133.9678f, 10.6028f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 129:
			uParam1->f_4 = { -1657.024f, -224.0322f, 54.0132f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 130:
			uParam1->f_4 = { -1065.002f, -1443.479f, 4.4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 131:
			uParam1->f_4 = { 37.752f, -1608.548f, 28.357f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 132:
			uParam1->f_4 = { -1174.63f, -735.4771f, 19.2095f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 133:
			uParam1->f_4 = { -1336.968f, -1297.628f, 3.838f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 134:
			uParam1->f_4 = { 372.931f, -2132.614f, 15.2837f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 135:
			uParam1->f_4 = { 164.893f, -981.952f, 29.092f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 136:
			uParam1->f_4 = { -633.342f, -71.931f, 39.44f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 137:
			uParam1->f_4 = { -3109.526f, 221.046f, 5.814f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 138:
			uParam1->f_4 = { -1917.599f, 629.539f, 124.01f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 139:
			uParam1->f_4 = { -1291.788f, -268.334f, 38.298f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 140:
			uParam1->f_4 = { -97.476f, 91.144f, 70.777f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 141:
			uParam1->f_4 = { 860.49f, -916.962f, 24.923f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 142:
			uParam1->f_4 = { 1359.713f, 1147.29f, 113.3128f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 143:
			uParam1->f_4 = { 643.5014f, 195.1281f, 95.1524f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 144:
			uParam1->f_4 = { 477.2894f, -1158.148f, 28.2918f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 145:
			uParam1->f_4 = { 12.1334f, -1742.4f, 28.3029f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 146:
			uParam1->f_4 = { 946.0427f, -2185.876f, 29.5616f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 147:
			uParam1->f_4 = { -672.3598f, -1823.936f, 27.8611f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 148:
			uParam1->f_4 = { 18.1799f, -2485.081f, 5.0068f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 149:
			uParam1->f_4 = { 1096.543f, -3142.269f, 4.9008f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 150:
			uParam1->f_4 = { 1129.265f, -2382.284f, 30.2488f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 151:
			uParam1->f_4 = { 1735.333f, -1431.009f, 111.637f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 152:
			uParam1->f_4 = { 313.451f, -2022.135f, 19.4894f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 153:
			uParam1->f_4 = { 1142.636f, -2511.395f, 32.2916f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 154:
			uParam1->f_4 = { 1687.536f, -1583.242f, 111.5227f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 155:
			uParam1->f_4 = { 1374.894f, -739.6987f, 66.2329f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 156:
			uParam1->f_4 = { 1902.062f, 418.819f, 162.108f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if ((((((((((((iParam0 != 96 && iParam0 != 101) && iParam0 != 106) && iParam0 != 111) && iParam0 != 116) && iParam0 != 121) && iParam0 != 126) && iParam0 != 131) && iParam0 != 136) && iParam0 != 141) && iParam0 != 146) && iParam0 != 151) && iParam0 != 156)
	{
		unk_0xBE20AB8238688965(&(uParam1->f_16), 2);
	}
}

void func_1026(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 72:
			uParam1->f_4 = { -227.4169f, 2062.385f, 138.4856f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 73:
			uParam1->f_4 = { 2772.322f, 2845.964f, 34.8882f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 74:
			uParam1->f_4 = { 2989.183f, 3466.004f, 70.351f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 75:
			uParam1->f_4 = { -2666.346f, 3455.672f, 14.1713f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 76:
			uParam1->f_4 = { 1492.691f, 3579.083f, 34.2291f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 77:
			uParam1->f_4 = { -2379.711f, 4278.755f, 9.1551f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 78:
			uParam1->f_4 = { 2500.738f, 4294.372f, 38.1973f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case joaat("MPSV_LP0_31"):
			uParam1->f_4 = { -1848.626f, 4419.534f, 48.1508f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 80:
			uParam1->f_4 = { -1566.002f, 4485.896f, 20.2007f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 81:
			uParam1->f_4 = { -386.5953f, 6380.837f, 13.0622f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 82:
			uParam1->f_4 = { 1186.324f, -3241.427f, 5.0288f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 83:
			uParam1->f_4 = { 210.987f, -3127.62f, 4.7903f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 84:
			uParam1->f_4 = { 302.8576f, -2857.04f, 5.0245f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 85:
			uParam1->f_4 = { 1635.403f, -2370.956f, 92.9864f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 86:
			uParam1->f_4 = { 853.4637f, -2437.818f, 26.9939f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 87:
			uParam1->f_4 = { -1226.498f, -2393.574f, 12.9452f };
			*uParam1 = { uParam1->f_4 };
			unk_0xBE20AB8238688965(&(uParam1->f_16), 0);
			break;
		
		case 88:
			uParam1->f_4 = { 900.6783f, -1736.104f, 29.4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 89:
			uParam1->f_4 = { 1737.746f, -1534.781f, 111.6664f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 90:
			uParam1->f_4 = { 485.929f, -1394.48f, 28.2951f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 91:
			uParam1->f_4 = { -146.8984f, -1347.38f, 28.6772f };
			*uParam1 = { uParam1->f_4 };
			break;
			break;
	}
}

void func_1027(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 367:
			uParam1->f_4 = { -725.8421f, -2213.141f, 5.003f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 368:
			uParam1->f_4 = { -315.874f, -2552.008f, 5.0006f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 369:
			uParam1->f_4 = { 144.4716f, -2807.349f, 5.0002f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 370:
			uParam1->f_4 = { 1142.307f, -3277.464f, 4.9007f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 371:
			uParam1->f_4 = { 791.4049f, -2482.021f, 19.9127f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 372:
			uParam1->f_4 = { -34.7159f, -2418.303f, 5f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 373:
			uParam1->f_4 = { -947.4313f, -3531.936f, 13.0788f };
			*uParam1 = { uParam1->f_4 };
			unk_0xBE20AB8238688965(&(uParam1->f_16), 0);
			break;
		
		case 374:
			uParam1->f_4 = { 1482.078f, -2436.562f, 65.2259f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 375:
			uParam1->f_4 = { 821.9077f, -2937.065f, 4.9042f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 376:
			uParam1->f_4 = { -1157.331f, -2885.625f, 12.9456f };
			*uParam1 = { uParam1->f_4 };
			unk_0xBE20AB8238688965(&(uParam1->f_16), 0);
			break;
		
		case 357:
			uParam1->f_4 = { -2884.53f, 3492.161f, 8.2728f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 358:
			uParam1->f_4 = { 1840.318f, 1813.824f, 66.5145f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 359:
			uParam1->f_4 = { 2074.879f, 4605.449f, 34.5385f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 360:
			uParam1->f_4 = { 2801.846f, 4749.39f, 45.4179f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 361:
			uParam1->f_4 = { 2766.352f, 1700.96f, 23.7017f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 362:
			uParam1->f_4 = { -1543.172f, 2856.046f, 30.1456f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 363:
			uParam1->f_4 = { -3131f, 1284.291f, 19.8153f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 364:
			uParam1->f_4 = { -564.372f, 6363.489f, 2.2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 365:
			uParam1->f_4 = { 754.9817f, 6609.063f, 1.3558f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 366:
			uParam1->f_4 = { 1026.274f, 4338.423f, 40.0694f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

void func_1028(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 12:
			uParam1->f_4 = { 17.2985f, 6579.499f, 31.3584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 13:
			uParam1->f_4 = { 408.3282f, 6611.388f, 26.876f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 14:
			uParam1->f_4 = { 21.6079f, 6516.493f, 30.4948f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 15:
			uParam1->f_4 = { -206.043f, 6455.797f, 30.1761f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 16:
			uParam1->f_4 = { -225.5175f, 6436.706f, 30.1974f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 17:
			uParam1->f_4 = { -128.7701f, 6342.206f, 30.4904f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 18:
			uParam1->f_4 = { -353.8975f, 6334.597f, 28.8339f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 19:
			uParam1->f_4 = { -315.1533f, 6312.473f, 31.3387f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 20:
			uParam1->f_4 = { -433.5699f, 6260.372f, 29.2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 21:
			uParam1->f_4 = { -258.5444f, 6223.631f, 30.4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 22:
			uParam1->f_4 = { -274.8564f, 6170.648f, 30.4898f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 23:
			uParam1->f_4 = { -441.0088f, 6144.66f, 30.4783f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 24:
			uParam1->f_4 = { 2244.295f, 5175.046f, 59.1204f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 25:
			uParam1->f_4 = { 2011.648f, 4969.727f, 40.5599f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 26:
			uParam1->f_4 = { 2309.9f, 4753.106f, 36.0693f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 27:
			uParam1->f_4 = { -1351.068f, 4844.388f, 136.8821f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 28:
			uParam1->f_4 = { 1679.104f, 4653.37f, 42.3712f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 29:
			uParam1->f_4 = { 1712.925f, 4747.414f, 40.9356f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 30:
			uParam1->f_4 = { 2936.587f, 4487.754f, 46.8833f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 31:
			uParam1->f_4 = { 1881.445f, 3761.149f, 31.9154f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 32:
			uParam1->f_4 = { 1891.136f, 3711.45f, 31.8388f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 33:
			uParam1->f_4 = { 923.1298f, 3646.537f, 31.5969f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 34:
			uParam1->f_4 = { 1360.123f, 3599.097f, 33.8908f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 35:
			uParam1->f_4 = { 436.2162f, 3550.248f, 32.2386f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 36:
			uParam1->f_4 = { -2235.781f, 3475.785f, 29.33f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 37:
			uParam1->f_4 = { 1206.722f, 2716.476f, 37.0042f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 38:
			uParam1->f_4 = { 994.0612f, 2656.839f, 39.1282f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 39:
			uParam1->f_4 = { 2864.118f, 1473.196f, 23.5583f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 40:
			uParam1->f_4 = { 1775.074f, 3652.844f, 33.3731f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 41:
			uParam1->f_4 = { -258.8979f, 6251.875f, 30.4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 42:
			uParam1->f_4 = { -2001.644f, 454.9861f, 101.4866f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 43:
			uParam1->f_4 = { -181.7756f, 319.9248f, 96.7999f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 44:
			uParam1->f_4 = { -152.1834f, 201.6567f, 89.9091f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 45:
			uParam1->f_4 = { -1935.115f, 183.2173f, 83.5954f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 46:
			uParam1->f_4 = { 351.9804f, 21.8583f, 84.4991f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 47:
			uParam1->f_4 = { 195.2451f, -157.1152f, 55.6824f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 48:
			uParam1->f_4 = { -1490.21f, -203.8835f, 49.3974f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 49:
			uParam1->f_4 = { 941.5977f, -247.444f, 67.5999f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 50:
			uParam1->f_4 = { -531.7662f, -43.3292f, 41.4131f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 51:
			uParam1->f_4 = { -1308.971f, -410.3486f, 33.557f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 52:
			uParam1->f_4 = { 914.3543f, -489.5208f, 58.0344f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 53:
			uParam1->f_4 = { 1242.42f, -578.4505f, 68.4043f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 54:
			uParam1->f_4 = { -1273.175f, -607.2695f, 25.484f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 55:
			uParam1->f_4 = { 322.7755f, -683.6807f, 28.3018f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 56:
			uParam1->f_4 = { 916.045f, -641.1888f, 56.8682f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 57:
			uParam1->f_4 = { -1360.594f, -780.0303f, 18.7525f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 58:
			uParam1->f_4 = { -617.1512f, -784.4778f, 24.1344f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 59:
			uParam1->f_4 = { -1364.377f, -898.3317f, 11.4705f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 60:
			uParam1->f_4 = { -1440.974f, -871.7243f, 9.9175f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 61:
			uParam1->f_4 = { 450.0986f, -934.5388f, 27.58f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 62:
			uParam1->f_4 = { 1135.143f, -974.3087f, 45.5844f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 63:
			uParam1->f_4 = { -1327.618f, -1027.488f, 6.7181f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 64:
			uParam1->f_4 = { -600.9597f, -1091.987f, 21.1781f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 65:
			uParam1->f_4 = { -1248.995f, -1211.936f, 6.1084f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 66:
			uParam1->f_4 = { -1097.926f, -1505.146f, 3.6901f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 67:
			uParam1->f_4 = { 1318.131f, -1663.014f, 50.2364f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 68:
			uParam1->f_4 = { 267.6798f, -1721.867f, 28.2842f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 69:
			uParam1->f_4 = { 954.9901f, -2004.117f, 29.2387f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 70:
			uParam1->f_4 = { 1003.837f, -2364.251f, 29.5096f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 71:
			uParam1->f_4 = { -694.7249f, -2453.918f, 12.8718f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

int func_1029(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xAE06B9E39EBDE049(*iParam0))
	{
		return 0;
	}
	if (unk_0x94BF5C4EB0D40E9E(*iParam0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(*iParam0, 0);
		if (unk_0xAE06B9E39EBDE049(iVar0) && func_1030(&iVar0))
		{
			iVar1 = unk_0x8DD7747A1E466394(iVar0);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1030(int iParam0)
{
	if (!unk_0xAE06B9E39EBDE049(*iParam0))
	{
		return 0;
	}
	if (((unk_0x36FE6D3220816ADA(*iParam0) == joaat("cargobob") || unk_0x36FE6D3220816ADA(*iParam0) == joaat("cargobob2")) || unk_0x36FE6D3220816ADA(*iParam0) == joaat("cargobob3")) || unk_0x36FE6D3220816ADA(*iParam0) == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

int func_1031(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xAE06B9E39EBDE049(*iParam0))
	{
		return 0;
	}
	if (unk_0x47DBF174A0CB9D55(*iParam0, 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(*iParam0, 0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			if (unk_0xEB1D872D96DDA8E2(iVar0))
			{
				iVar1 = unk_0x4C5D14F2B0FA4599(iVar0);
				if (unk_0xAE06B9E39EBDE049(iVar1))
				{
					iVar2 = unk_0xEA90A5DC55A2F652(iVar1);
					if (unk_0xAE06B9E39EBDE049(iVar2) && func_1030(&iVar2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1032(int iParam0)
{
	if (unk_0x47DBF174A0CB9D55(*iParam0, 0))
	{
		if (!func_1033(unk_0xE4400E48E081F17A(*iParam0), unk_0xA5D5B1042E8F47BD(*iParam0, 1)))
		{
			return 4;
		}
		else if (unk_0xDF1110AC39C733FE(*iParam0))
		{
			return 2;
		}
		else if (unk_0x94BF5C4EB0D40E9E(*iParam0))
		{
			return 3;
		}
		else if (unk_0x47DBF174A0CB9D55(*iParam0, 0))
		{
			return 1;
		}
		return 0;
	}
	return 4;
}

int func_1033(int iParam0, int iParam1)
{
	if (func_658(iParam1) && func_69(iParam0, 1, 1))
	{
		if (func_1039(iParam0))
		{
			if (func_1038(iParam0, 1))
			{
				if ((func_812(iParam0, 1) && func_1036(iParam1) != func_102(iParam0)) || func_1034(iParam1, iParam0))
				{
					return 0;
				}
			}
			else if (func_1034(iParam1, iParam0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1034(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x460153A63B9477BC();
	if (!func_812(unk_0x460153A63B9477BC(), 1))
	{
		if (iParam1 != func_101())
		{
			iVar0 = iParam1;
		}
		else
		{
			return 0;
		}
	}
	if (func_658(iParam0))
	{
		iVar1 = func_1035(iParam0, 1, 0, 1);
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (unk_0xCE990E643CD9D0E5(iVar1, iVar2))
			{
				if (func_69(unk_0xF1110FE23C67293A(iVar2), 0, 1))
				{
					if (func_812(unk_0xF1110FE23C67293A(iVar2), 1) && !func_100(iVar0, unk_0xF1110FE23C67293A(iVar2)))
					{
						return 1;
					}
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_1035(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = unk_0xF1110FE23C67293A(iVar1);
		if (func_69(iVar3, 1, 0))
		{
			if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iVar3), iParam3))
			{
				if (!unk_0x4577ACD7664F1CF3(iVar3))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iVar3), iParam3);
					if (iVar2 == iParam0)
					{
						if (unk_0x6CC163E30ECE0790(iVar3) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) || !bParam2)
						{
							if (iVar3 != unk_0x460153A63B9477BC() || iParam1)
							{
								unk_0xBE20AB8238688965(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_1036(int iParam0)
{
	int iVar0;
	
	if (!func_965(iParam0, 1))
	{
		return func_101();
	}
	iVar0 = unk_0x8C0800114C2864BE(iParam0, "Player_Vehicle");
	return func_1037(iVar0, 0, 1, 0);
}

int func_1037(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = unk_0xF1110FE23C67293A(iVar1);
			if (func_69(iVar0, 0, 1) || (iParam1 && unk_0xB64E1AAF98811C56(iVar0)))
			{
				if (iParam0 == unk_0x69FCAB6112C0ABA7(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_69(iParam3, 0, 1) || (iParam1 && unk_0xB64E1AAF98811C56(iParam3)))
	{
		if (iParam0 == unk_0x69FCAB6112C0ABA7(iParam3))
		{
			return iParam3;
		}
	}
	return func_101();
}

int func_1038(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_69(iParam0, 1, 1))
	{
		iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0x47DBF174A0CB9D55(iVar0, iParam1))
		{
			if (func_965(unk_0xA5D5B1042E8F47BD(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1039(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	
	if (func_69(iParam0, 1, 1) && func_1046(iParam0))
	{
		Var0 = { func_1043(iParam0, -1, 0) };
		if (func_1042(Var0))
		{
			iVar2 = func_1041(Var0);
			if (func_1040(iVar2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1040(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<26> Var4;
	var uVar30[25];
	
	iVar0 = 26;
	iVar1 = 26;
	iVar2 = 25;
	iVar3 = 25;
	if (iVar0 != iVar1)
	{
		return 0;
	}
	if (iVar3 != iVar2)
	{
	}
	Var4 = 25;
	Var4.f_2 = 1;
	Var4.f_3 = 1;
	Var4.f_4 = 1;
	Var4.f_5 = 1;
	Var4.f_6 = 1;
	Var4.f_7 = 1;
	Var4.f_8 = 1;
	Var4.f_9 = 1;
	Var4.f_10 = 1;
	Var4.f_11 = 1;
	Var4.f_12 = 1;
	Var4.f_13 = 1;
	Var4.f_14 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_17 = 1;
	Var4.f_18 = 1;
	Var4.f_19 = 1;
	Var4.f_20 = 1;
	Var4.f_21 = 1;
	Var4.f_22 = 1;
	Var4.f_23 = 1;
	Var4.f_24 = 1;
	Var4.f_25 = 1;
	unk_0x13AF25746D6C3CA9(&uVar30, &Var4, 26);
	return uVar30[iParam0];
}

int func_1041(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_478(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419386.f_199.f_1[iVar0 /*14*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

bool func_1042(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_101());
}

struct<2> func_1043(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	Var0.f_1 = -1;
	if (!func_1046(iParam0))
	{
		return Var0;
	}
	if ((func_69(iParam0, 0, 1) && iParam1 > -2) && iParam1 < 5)
	{
		if (iParam1 == -1)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if ((func_1042(Global_1630317[iParam0 /*595*/].f_552.f_1[iVar2 /*2*/]) && func_477(Global_1630317[iParam0 /*595*/].f_552.f_1[iVar2 /*2*/])) && (!bParam2 || !func_1044(Global_1630317[iParam0 /*595*/].f_552.f_1[iVar2 /*2*/])))
				{
					return Global_1630317[iParam0 /*595*/].f_552.f_1[iVar2 /*2*/];
				}
				iVar2++;
			}
		}
		else
		{
			iVar3 = iParam1;
			if (func_1042(Global_1630317[iParam0 /*595*/].f_552.f_1[iVar3 /*2*/]) && func_477(Global_1630317[iParam0 /*595*/].f_552.f_1[iVar3 /*2*/]))
			{
				return Global_1630317[iParam0 /*595*/].f_552.f_1[iVar3 /*2*/];
			}
		}
	}
	return Var0;
}

int func_1044(struct<2> Param0)
{
	if (func_1042(Param0))
	{
		if (func_1045(Param0) == 2 || func_478(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_552.f_12, Param0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1045(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (Global_2419386.f_199.f_1[iVar0 /*14*/].f_1.f_1 != -1 && func_478(Global_2419386.f_199.f_1[iVar0 /*14*/].f_1, Param0))
		{
			return Global_2419386.f_199.f_1[iVar0 /*14*/];
		}
		iVar0++;
	}
	return -1;
}

int func_1046(int iParam0)
{
	if (iParam0 != func_101() && func_69(iParam0, 0, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_552, 0);
	}
	return 0;
}

Vector3 func_1047(int iParam0, int iParam1)
{
	struct<3> Var0[2];
	
	Var0[0 /*3*/] = { 0f, 0f, 0f };
	Var0[1 /*3*/] = { 0f, 0f, 0f };
	if (!func_1048(iParam0))
	{
		return Var0[0 /*3*/];
	}
	switch (iParam0)
	{
		case 1:
			Var0[0 /*3*/] = { 46.57f, 6298.997f, 30.2003f };
			break;
		
		case 2:
			Var0[0 /*3*/] = { 405.3243f, 6493.409f, 26.71f };
			break;
		
		case 3:
			Var0[0 /*3*/] = { 58.64f, 6469.08f, 30.3094f };
			break;
		
		case 4:
			Var0[0 /*3*/] = { -441.42f, 6144.01f, 30.44f };
			break;
		
		case 5:
			Var0[0 /*3*/] = { -179.1551f, 6317.944f, 30.2184f };
			break;
		
		case 6:
			Var0[0 /*3*/] = { 1453.143f, -1686.121f, 64.9563f };
			break;
		
		case 7:
			Var0[0 /*3*/] = { 114.6697f, 164.4655f, 103.4672f };
			break;
		
		case 8:
			Var0[0 /*3*/] = { -1464.77f, -390.1486f, 37.3017f };
			break;
		
		case 9:
			Var0[0 /*3*/] = { -1172.126f, -1390.925f, 3.7783f };
			break;
		
		case 10:
			Var0[0 /*3*/] = { 311.3521f, -760.6975f, 28.0504f };
			Var0[1 /*3*/] = { 307.7254f, -699.9282f, 28.3096f };
			break;
		
		case 11:
			Var0[0 /*3*/] = { 208.0649f, 2456.774f, 54.8342f };
			break;
		
		case 12:
			Var0[0 /*3*/] = { 2878.758f, 4459.61f, 47.3484f };
			break;
		
		case 13:
			Var0[0 /*3*/] = { 376.971f, 3590.405f, 32.2221f };
			break;
		
		case 14:
			Var0[0 /*3*/] = { 646.3618f, 2792.016f, 40.6392f };
			break;
		
		case 15:
			Var0[0 /*3*/] = { 1642.669f, 4839.135f, 40.9704f };
			break;
		
		case 16:
			Var0[0 /*3*/] = { 1189.591f, -3098.619f, 4.7346f };
			break;
		
		case 17:
			Var0[0 /*3*/] = { 140.2878f, -2477.946f, 4.94f };
			break;
		
		case 18:
			Var0[0 /*3*/] = { -256.8373f, -2586.215f, 4.9106f };
			break;
		
		case 19:
			Var0[0 /*3*/] = { 666.0431f, -2672.718f, 4.9612f };
			break;
		
		case 20:
			Var0[0 /*3*/] = { -337.6264f, -2769.627f, 3.944f };
			break;
		
		case 21:
			Var0[0 /*3*/] = { 494.0037f, 3015.448f, 40.0526f };
			break;
		
		case 22:
			Var0[0 /*3*/] = { 849.5273f, 3023.794f, 40.2763f };
			break;
		
		case 23:
			Var0[0 /*3*/] = { 40.4676f, 2928.654f, 54.7342f };
			break;
		
		case 24:
			Var0[0 /*3*/] = { 1572.055f, 2224.068f, 77.3731f };
			break;
		
		case 25:
			Var0[0 /*3*/] = { 2107.983f, 3324.722f, 44.3713f };
			break;
		
		case 26:
			Var0[0 /*3*/] = { 2488.974f, 3164.124f, 48.0622f };
			break;
		
		case 27:
			Var0[0 /*3*/] = { 1798.893f, 4705.239f, 38.955f };
			break;
		
		case 28:
			Var0[0 /*3*/] = { -753.681f, 5944.054f, 18.8012f };
			break;
		
		case 29:
			Var0[0 /*3*/] = { -388.6984f, 4338.543f, 55.1304f };
			break;
		
		case 30:
			Var0[0 /*3*/] = { -3029.436f, 3334.414f, 9.0759f };
			break;
		
		case 31:
			Var0[0 /*3*/] = { -3155.589f, 1376.788f, 16.0949f };
			break;
	}
	if (iParam1 && !func_236(Var0[1 /*3*/], 0f, 0f, 0f, 0))
	{
		return Var0[1 /*3*/];
	}
	return Var0[0 /*3*/];
}

int func_1048(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1049(var uParam0)
{
	return func_1050(func_1051(&uParam0));
}

int func_1050(int iParam0)
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

int func_1051(var uParam0)
{
	if (func_1052(uParam0))
	{
		switch (*uParam0)
		{
			case 1:
				return 70;
			
			case 2:
				return 71;
			
			case 3:
				return 72;
			
			case 4:
				return 73;
			
			case 5:
				return 74;
			
			case 6:
				return 75;
			
			case 7:
				return 76;
			
			case 8:
				return 77;
			
			case 9:
				return 78;
			
			case 10:
				return 79;
			
			case 11:
				return 80;
			}
		
		default:
	}
	return -1;
}

bool func_1052(var uParam0)
{
	return (*uParam0 >= 1 && *uParam0 <= 11);
}

void func_1053(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 2)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 3 || iParam1 == 1)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1054(int iParam0)
{
	if ((func_946(&iParam0) == 14 || func_946(&iParam0) == 15) || func_946(&iParam0) == 19)
	{
		return 0;
	}
	return 1;
}

int func_1055(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (Global_1683921.f_4661[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1056(int iParam0, int iParam1)
{
	Local_1832[iParam0 /*21*/].f_18 = iParam1;
}

void func_1057()
{
	func_1058(0f, 0f, 0f, 1, 0);
}

void func_1058(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam3;
	Global_2405074.f_45.f_53 = iParam4;
}

void func_1059()
{
	func_623("IDJ_RECOVER", "IDJ_KM_STNS_OBJ", 18, 0);
}

void func_1060(int iParam0, int iParam1)
{
	Local_1832[iParam0 /*21*/].f_17 = iParam1;
}

void func_1061()
{
	func_1058(Local_221.f_589.f_1[0 /*11*/], 1, 0);
}

void func_1062()
{
	func_623("ILH_TKE_OUT", "IDJ_THIEVES", 6, 0);
}

void func_1063()
{
	func_623("ILH_GOTO_THE", "IDJ_LOC_TR_PARK", 12, 0);
}

void func_1064()
{
	func_634(0, 4);
	func_633(0, 1);
	func_634(1, 7);
	func_631(1, 2, 225406);
	func_634(2, 39);
	func_631(2, 3, 225393);
	func_634(3, 4);
	func_631(3, 4, 225267);
	func_634(4, 44);
}

int func_1065()
{
	if (func_1066(0))
	{
		return 1;
	}
	return 0;
}

int func_1066(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_1067(iVar0, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1067(int iParam0, int iParam1)
{
	if ((func_6(iParam0, 4) || func_6(iParam0, 3)) || (iParam1 && func_656(iParam0, iLocal_3573, 6)))
	{
		return 1;
	}
	return 0;
}

bool func_1068()
{
	return func_662(5);
}

bool func_1069()
{
	return func_662(4);
}

void func_1070(var uParam0, int iParam1)
{
	if (bLocal_3568)
	{
		if (func_694(iParam1, 9))
		{
			func_693(14);
		}
	}
}

void func_1071()
{
	if (func_922(func_201(), &uLocal_5101, 1, 0))
	{
		func_696(9);
	}
	else
	{
		func_807(9);
	}
	if (bLocal_3568)
	{
		if (func_662(14))
		{
			func_805(14);
		}
	}
}

void func_1072()
{
	if (!func_662(6))
	{
		if (func_1080() > 0)
		{
			func_693(6);
		}
	}
	if (!func_662(7))
	{
		if (func_1080() >= 4)
		{
			func_1073(2, 0, 3000);
			func_693(7);
		}
	}
	if (!func_662(4))
	{
		if (func_1080() == 5)
		{
			func_693(4);
		}
	}
	if (!func_662(5))
	{
		Local_3649.f_502.f_5 = func_913();
		if (Local_3649.f_502.f_5 == 5)
		{
			func_693(5);
		}
	}
}

void func_1073(int iParam0, int iParam1, int iParam2)
{
	if (func_959(1))
	{
		func_1075(iLocal_3581, func_1076(1), iParam0, iParam1, iParam2);
	}
	else
	{
		func_1075(iLocal_3581, func_1074(iLocal_3570), iParam0, iParam1, iParam2);
	}
}

int func_1074(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

void func_1075(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	struct<7> Var0;
	
	Var0 = -1501904967;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = unk_0x5A002C4821A13338();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 7, iParam1);
	}
}

int func_1076(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_959(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar3 = unk_0xF1110FE23C67293A(iVar1);
			if (func_69(iVar3, 0, 0))
			{
				if (func_1079())
				{
					if (func_1077(iVar3, unk_0x460153A63B9477BC(), bParam0))
					{
						unk_0xBE20AB8238688965(&uVar0, iVar3);
					}
				}
				else
				{
					iVar2 = func_516();
					if (iVar2 != func_101())
					{
						if (func_1077(iVar3, iVar2, bParam0))
						{
							unk_0xBE20AB8238688965(&uVar0, iVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

int func_1077(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_101())
	{
		if (!bParam2)
		{
			if (func_1078(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_101())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_1078(int iParam0, int iParam1)
{
	if (iParam1 != func_101())
	{
		if (iParam0 != func_101())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_101())
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

bool func_1079()
{
	return func_460(unk_0x460153A63B9477BC());
}

int func_1080()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_46(iVar1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1081()
{
	func_1082();
}

void func_1082()
{
	if (!func_69(func_102(iLocal_3570), 1, 1))
	{
		return;
	}
	func_809(func_201(), unk_0x272784C60C397DB6(func_96(func_102(iLocal_3570)), func_197(), 1) > 100f);
}

int func_1083()
{
	func_1084();
	return 1;
}

void func_1084()
{
	if (!func_866(153, 3))
	{
		func_852(153, 3, 1);
	}
}

void func_1085()
{
	int iVar0;
	
	func_1086(1, 0);
	Local_221.f_668 = 1;
	Local_221.f_72.f_254[0 /*10*/].f_1[0] = 0;
	Local_221.f_72.f_254[0 /*10*/].f_1[1] = 1;
	Local_221.f_72.f_254[0 /*10*/].f_1[2] = 2;
	Local_221.f_72.f_254[0 /*10*/].f_1[3] = 3;
	Local_221.f_72.f_254[0 /*10*/].f_1[4] = 4;
	Local_221.f_72.f_254[0 /*10*/].f_1[5] = 5;
	Local_221.f_72.f_1[2 /*21*/].f_7 = joaat("weapon_dbshotgun");
	Local_221.f_72.f_1[4 /*21*/].f_7 = joaat("weapon_flaregun");
	Local_221.f_510 = 5;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_221.f_510.f_1[iVar0 /*12*/] = 267661430;
		Local_221.f_510.f_1[iVar0 /*12*/].f_5 = { 0f, 0f, 90f };
		iVar0++;
	}
	Local_221.f_18 = 1;
	Local_221.f_18.f_5[0 /*12*/].f_11 = 1;
	Local_221.f_18.f_5[0 /*12*/].f_3 = { Local_221.f_589.f_1[1 /*11*/] };
	Local_221.f_18.f_5[0 /*12*/].f_2 = joaat("prop_drug_package");
	func_698(0, 6);
	Local_221.f_589.f_1[1 /*11*/].f_6 = 1400f;
	Local_221.f_778[0 /*6*/] = 1;
	Local_221.f_778[0 /*6*/].f_1 = "IDJ_HUD_STONES";
	Local_221.f_778[0 /*6*/].f_2 = 5;
	Local_221.f_575 = 30;
	Local_221.f_575.f_1 = 2;
}

void func_1086(int iParam0, int iParam1)
{
	if (func_15(&(Local_221.f_589.f_1[iParam0 /*11*/].f_4), iParam1))
	{
	}
}

void func_1087()
{
	Local_1202.f_11 = 229122;
	Local_1202.f_2 = 229109;
	Local_1202.f_3.f_1 = 229097;
	Local_1202.f_3.f_2 = 229014;
	Local_1202.f_3.f_2.f_1 = 228983;
	Local_1202.f_9 = 228930;
	Local_1202.f_9.f_1 = 228670;
	Local_1202.f_62.f_3.f_3 = 146313;
	Local_1202.f_62.f_3.f_2 = 146301;
	Local_1202.f_75.f_12 = 228658;
	Local_1202.f_75.f_5 = 228648;
	Local_1202.f_75.f_4 = 228636;
	Local_1202.f_52.f_1 = 228612;
	Local_1202.f_382.f_2 = 228593;
	Local_1202.f_108.f_109.f_1 = 228582;
	Local_1202.f_108.f_109 = 228543;
	Local_1202.f_108.f_109.f_3 = 228534;
	Local_1202.f_108.f_124 = 228449;
	Local_1202.f_108 = 228317;
	Local_1202.f_108.f_21.f_1 = 228307;
	Local_1202.f_108.f_21.f_2 = 228049;
	Local_1202.f_108.f_21.f_14 = 228040;
	Local_1202.f_108.f_85.f_1 = 228031;
	Local_1202.f_108.f_85.f_1.f_5 = 227994;
	Local_1202.f_108.f_85.f_1.f_4 = 227985;
	Local_1202.f_108.f_85.f_1.f_1 = 227972;
	Local_1202.f_243.f_28 = 227936;
	Local_1202.f_243.f_29 = 227781;
	Local_1202.f_54 = 227766;
	Local_1202.f_54.f_3 = 227757;
	Local_1202.f_54.f_4 = 227745;
	Local_1202.f_54.f_1 = 227717;
	Local_1202.f_355.f_1 = 227547;
	Local_1202.f_355 = 227463;
	Local_1202.f_361.f_4 = 227453;
	Local_1202.f_361.f_3 = 227436;
	Local_1202.f_361.f_5 = 227424;
	Local_1202.f_367.f_12 = 227330;
	Local_1202.f_367.f_8 = 227318;
	Local_1202.f_367.f_11 = 227235;
	Local_1202.f_367.f_4 = 227226;
	Local_1202.f_367.f_9 = 227214;
	Local_1202.f_367.f_10 = 227204;
	Local_1202.f_367.f_2 = 227195;
	Local_1202.f_367.f_5 = 227186;
	Local_1202.f_367.f_14 = 227156;
	Local_1202.f_38 = 144059;
}

void func_1088(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_696(8);
			break;
	}
}

int func_1089()
{
	return -1;
}

int func_1090(var uParam0)
{
	return 0;
}

int func_1091(var uParam0)
{
	return 153;
}

char* func_1092(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_1093(var uParam0)
{
	return 1;
}

int func_1094(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_730() == 24 && func_11(&uLocal_5107, 10000, 0));
		
		case 1:
			return (func_730() == 24 && Local_3241[0 /*7*/].f_2 < 100f);
		
		default:
	}
	return 0;
}

char* func_1095(var uParam0)
{
	return "HS4EDAU";
}

char* func_1096(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_PPM1";
			break;
	}
	return "";
}

char* func_1097(var uParam0)
{
	return "IDJ_KM_TXT_PIZ";
}

bool func_1098(var uParam0)
{
	return fLocal_3600 < 500f;
}

int func_1099(var uParam0)
{
	return 153;
}

char* func_1100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_PZT";
		
		case 1:
			return "IDJ_KM_HLP_DVR";
		
		case 2:
			return "IDJ_KM_HLP_CHS";
		
		case 3:
			return "IDJ_KM_HLP_BSD";
		
		case 4:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_1101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_1103() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fLocal_3600 < 500f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1103() == 1)
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_1102() == 3 && !func_887())
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_1102() == 3 && func_887())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1102()
{
	return func_739();
}

int func_1103()
{
	return func_20();
}

int func_1104(var uParam0)
{
	if (!func_11(&uLocal_5113, 3000, 0))
	{
		return 1;
	}
	return 0;
}

char* func_1105(var uParam0)
{
	return "IDJ_PZ_FOCUS";
}

int func_1106(var uParam0)
{
	return 1;
}

bool func_1107(var uParam0)
{
	return func_730() == 22;
}

int func_1108(int iParam0, var uParam1)
{
	switch (Local_221.f_351.f_1[iParam0 /*13*/].f_2)
	{
		case joaat("faggio"):
			uParam1->f_66 = joaat("faggio");
			StringCopy(&(uParam1->f_1), "P1ZZ4", 16);
			*uParam1 = 3;
			uParam1->f_5 = 28;
			uParam1->f_6 = 53;
			uParam1->f_7 = 28;
			uParam1->f_8 = 1;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 6;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[11] = 4;
			uParam1->f_9[22] = 1;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_1109(int iParam0, int iParam1)
{
	if (Local_221.f_351.f_1[iParam0 /*13*/].f_2 == joaat("faggio"))
	{
		unk_0x70736E63608BE77D(iParam1, 1);
	}
}

float func_1110(var uParam0)
{
	return 15f;
}

int func_1111(var uParam0)
{
	return 1;
}

void func_1112(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_112())
		{
			func_764(iParam0, 1);
		}
		else
		{
			func_764(iParam0, 2);
		}
	}
}

int func_1113(var uParam0)
{
	return 1;
}

int func_1114()
{
	return 1;
}

Vector3 func_1115(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 298.2737f, 161.3832f, 103.104f;
		
		case 1:
			return 272.7557f, 158.9814f, 103.4403f;
		
		case 2:
			return 257.2968f, 115.6647f, 99.1878f;
		
		case 3:
			return 236.3171f, 57.1677f, 84.4952f;
		
		case 4:
			return 226.4263f, 49.2641f, 83.0705f;
		
		case 5:
			return 181.252f, 65.1596f, 82.545f;
		
		case 6:
			return 163.1799f, 80.2115f, 83.6059f;
		
		case 7:
			return 144.3906f, 84.8557f, 82.6487f;
		
		case 8:
			return 29.5628f, 124.5115f, 83.8743f;
		
		case 9:
			return -15.8644f, 137.0026f, 86.693f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_1116(var uParam0)
{
	return 10;
}

void func_1117(int iParam0)
{
	func_573(iParam0, 0, 9);
	func_571(iParam0, 0, 1, 228436);
	func_573(iParam0, 1, 13);
	func_571(iParam0, 1, 2, 228421);
	func_571(iParam0, 1, 3, 228407);
	func_573(iParam0, 3, 7);
	func_573(iParam0, 2, 2);
	func_571(iParam0, 2, 3, 228407);
}

bool func_1118(int iParam0, var uParam1)
{
	return func_84(iParam0);
}

bool func_1119(int iParam0, var uParam1)
{
	return func_55(iParam0, 5);
}

bool func_1120(var uParam0, var uParam1)
{
	return func_3(1);
}

void func_1121(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0x45F588C0DD767737(iParam1, 0, 0, 1, 0);
			unk_0x45F588C0DD767737(iParam1, 3, 0, 1, 0);
			unk_0x45F588C0DD767737(iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 8, 1, 1, 0);
			unk_0x78024EFD31A7FAD4(iParam1, 0, 0, 0, false);
			unk_0x697DA7132EE43ABC(iParam1, 300, 0);
			break;
	}
}

int func_1122(var uParam0)
{
	return 1;
}

int func_1123(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 10;
		
		case 2:
			return 16;
		
		default:
	}
	return 39;
}

int func_1124(var uParam0)
{
	return 5000;
}

bool func_1125(var uParam0)
{
	return Local_3317.f_10 > 1400f;
}

int func_1126()
{
	if (bLocal_3568)
	{
		return func_662(13);
	}
	return 0;
}

var func_1127(var uParam0)
{
	return unk_0x0CD0167AEB96E096();
}

int func_1128(var uParam0)
{
	return 9;
}

char* func_1129(var uParam0)
{
	return "IDJ_SCTR_BLIP";
}

void func_1130()
{
	func_628(0, 4, 228907);
	func_627(0, 1, 1);
	func_606(1, 2, 3, 4, 5, 228884, 228802, 228755, 228732, 1);
	func_628(5, 44, 146462);
}

void func_1131()
{
	func_623("IDJ_RECOVER", "IDJ_SCOOTER", 9, 0);
}

void func_1132()
{
	if (func_887())
	{
		func_918("IDJ_BOSS_GOTO", 0);
	}
	else
	{
		func_609("IDJ_HLPDELV_T", "IDJ_KM_PZA_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1133()
{
	if (func_1055(func_201()) && func_922(func_201(), &uLocal_5101, 1, 0))
	{
		func_921("IDJ_GOON_WAIT", unk_0x72C1D3A1AB8CAA5B(func_102(iLocal_3570)), 9, 0);
	}
	else
	{
		func_609("IDJ_DELIVER_THE", "IDJ_KM_PZA_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1134()
{
	func_623("ILH_STEAL", "IDJ_SCOOTER", 9, 0);
}

void func_1135()
{
	func_623("ILH_GOTO_THE", "IDJ_LOC_PZTS", 12, 0);
}

void func_1136()
{
	func_634(0, 4);
	func_633(0, 1);
	func_634(1, 22);
	func_633(1, 2);
	func_634(2, 24);
	func_633(2, 3);
	func_634(3, 44);
}

void func_1137(var uParam0, int iParam1)
{
	if (bLocal_3568)
	{
		if (func_694(iParam1, 9))
		{
			func_693(14);
		}
	}
}

void func_1138()
{
	if (func_662(13))
	{
		Local_221.f_575 = 5;
		Local_221.f_575.f_1 = 0;
	}
	if (func_922(func_201(), &uLocal_5101, 1, 0))
	{
		func_696(9);
	}
	else
	{
		func_807(9);
	}
	if (bLocal_3568)
	{
		if (func_662(14))
		{
			func_805(14);
		}
	}
}

void func_1139()
{
	func_1082();
}

int func_1140()
{
	func_1084();
	return 1;
}

void func_1141()
{
	func_675(17);
	func_637(0, 9);
	func_698(0, 6);
	func_868(0, 10);
	func_868(0, 26);
	func_637(0, 14);
	Local_221.f_72.f_1[0 /*21*/].f_13 = 0;
	Local_221.f_419.f_72[0 /*6*/] = 0;
	Local_221.f_419.f_72[0 /*6*/].f_1 = 2;
	Local_221.f_419.f_72[0 /*6*/].f_2 = 0;
	Local_221.f_419.f_1[0 /*10*/].f_7 = { 0f, 0f, -90f };
}

void func_1142()
{
	Local_1202.f_11 = 231407;
	Local_1202.f_2 = 231394;
	Local_1202.f_3.f_1 = 231349;
	Local_1202.f_3 = 231307;
	Local_1202.f_3.f_2 = 231247;
	Local_1202.f_3.f_2.f_1 = 231216;
	Local_1202.f_9 = 231163;
	Local_1202.f_9.f_1 = 230907;
	Local_1202.f_62.f_3.f_1 = 230836;
	Local_1202.f_62.f_3.f_3 = 146313;
	Local_1202.f_62.f_3.f_2 = 146301;
	Local_1202.f_62.f_3 = 230698;
	Local_1202.f_75.f_12 = 230686;
	Local_1202.f_75.f_5 = 230676;
	Local_1202.f_75.f_4 = 230666;
	Local_1202.f_75.f_18 = 230653;
	Local_1202.f_75.f_28 = 230639;
	Local_1202.f_382.f_2 = 228593;
	Local_1202.f_108.f_124 = 230467;
	Local_1202.f_108 = 230241;
	Local_1202.f_355.f_1 = 230117;
	Local_1202.f_355 = 230059;
	Local_1202.f_367.f_12 = 229965;
	Local_1202.f_367.f_8 = 229953;
	Local_1202.f_367.f_11 = 229870;
	Local_1202.f_367.f_4 = 229861;
	Local_1202.f_367.f_9 = 229849;
	Local_1202.f_367.f_10 = 229839;
	Local_1202.f_367.f_2 = 229830;
	Local_1202.f_367.f_5 = 229821;
	Local_1202.f_38 = 144059;
	Local_1202.f_243.f_28 = 229768;
	Local_1202.f_243.f_29 = 229617;
}

int func_1143(int iParam0, var uParam1)
{
	switch (Local_221.f_351.f_1[iParam0 /*13*/].f_2)
	{
		case joaat("paradise"):
			uParam1->f_66 = joaat("paradise");
			StringCopy(&(uParam1->f_1), "24OXS365", 16);
			*uParam1 = 3;
			uParam1->f_5 = 2;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_67 = 1;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			unk_0xBE20AB8238688965(&(uParam1->f_77), 0);
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_1144(int iParam0, int iParam1)
{
	if (Local_221.f_351.f_1[iParam0 /*13*/].f_2 == joaat("paradise"))
	{
		unk_0x7CC9C12947A9030C(iParam1, 2, 1);
		unk_0xFF90B7B5F1AF504A(iParam1, 3, 1, 0);
		unk_0x70736E63608BE77D(iParam1, 1);
	}
}

int func_1145()
{
	return -1;
}

int func_1146(var uParam0)
{
	return 0;
}

int func_1147(var uParam0)
{
	return 153;
}

char* func_1148(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_1149(var uParam0)
{
	return 1;
}

int func_1150(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_730() == 24 && func_11(&uLocal_5107, 10000, 0));
		
		case 1:
			return (func_730() == 24 && Local_3241[0 /*7*/].f_2 < 100f);
		
		default:
	}
	return 0;
}

char* func_1151(var uParam0)
{
	return "HS4EDAU";
}

char* func_1152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_SCPM1";
			break;
	}
	return "";
}

char* func_1153(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_SKT";
		
		case 1:
			return "IDJ_KM_HLP_BSD";
		
		case 2:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_1154(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_1156() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_1155() == 3 && !func_887())
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1155() == 3 && func_887())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1155()
{
	return func_739();
}

int func_1156()
{
	return func_20();
}

void func_1157(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 6:
			func_573(iParam0, 0, 9);
			func_571(iParam0, 0, 1, 230424);
			func_573(iParam0, 1, 7);
			break;
		
		case 3:
		case 4:
			func_573(iParam0, 0, 9);
			func_571(iParam0, 0, 2, 230410);
			func_573(iParam0, 2, 11);
			break;
		
		case 2:
			func_573(iParam0, 0, 9);
			func_571(iParam0, 0, 3, 230396);
			func_573(iParam0, 3, 12);
			break;
	}
}

bool func_1158(int iParam0, var uParam1)
{
	return func_84(iParam0);
}

bool func_1159(int iParam0, var uParam1)
{
	return func_84(iParam0);
}

var func_1160(int iParam0, var uParam1)
{
	return (func_84(iParam0) || (func_150(0, 10) && func_11(&uLocal_5111, 2000, 0)));
}

void func_1161(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			unk_0x45F588C0DD767737(iParam1, 0, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 2, 0, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 3, 0, 1, 0);
			unk_0x45F588C0DD767737(iParam1, 4, 0, 1, 0);
			unk_0x6673CC701BC8E9C1(iParam1, 46, 1);
			break;
		
		case 1:
			unk_0x45F588C0DD767737(iParam1, 0, 0, 2, 0);
			unk_0x45F588C0DD767737(iParam1, 2, 1, 0, 0);
			unk_0x45F588C0DD767737(iParam1, 3, 1, 1, 0);
			unk_0x45F588C0DD767737(iParam1, 4, 1, 2, 0);
			unk_0x6673CC701BC8E9C1(iParam1, 46, 1);
			break;
		
		case 2:
			unk_0xD51BD2949F557887(iParam1, 1, 0);
			break;
		
		case 5:
		case 6:
			unk_0x6673CC701BC8E9C1(iParam1, 46, 1);
			break;
	}
}

void func_1162(var uParam0)
{
	func_675(17);
}

float func_1163(var uParam0)
{
	return 25f;
}

int func_1164(var uParam0)
{
	return 225;
}

int func_1165(var uParam0)
{
	return 9;
}

char* func_1166(var uParam0)
{
	return "IDJ_SKTE_BLIP";
}

int func_1167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return (func_600() || unk_0x1A3D0DF92BF7D8C4(iLocal_3570) > 0);
			break;
		
		case 2:
			return ((func_1156() >= 1 && func_694(iLocal_3573, 10)) && unk_0x1A3D0DF92BF7D8C4(iLocal_3570) == 0);
			break;
		
		case 3:
			return (func_1156() == 2 && unk_0x1A3D0DF92BF7D8C4(iLocal_3570) == 0);
			break;
	}
	return 0;
}

char* func_1168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_DELIVERING_START";
		
		case 1:
			return "HEI4_GUNFIGHT";
		
		case 2:
			return "HEI4_SUSPENSE";
		
		case 3:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_1169()
{
	func_628(0, 4, 231140);
	func_627(0, 1, 1);
	func_606(1, 2, 3, 4, 5, 231117, 231039, 230992, 230969, 1);
	func_628(5, 44, 146462);
}

void func_1170()
{
	func_623("IDJ_RECOVER", "IDJ_SKTE_MRCHV", 9, 0);
}

void func_1171()
{
	if (func_887())
	{
		func_918("IDJ_BOSS_GOTO", 0);
	}
	else
	{
		func_609("IDJ_HLPDELV_T", "IDJ_KM_MERCH", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1172()
{
	if (func_1055(func_201()) && func_694(iLocal_3573, 9))
	{
		func_921("IDJ_GOON_WAIT", unk_0x72C1D3A1AB8CAA5B(func_102(iLocal_3570)), 9, 0);
	}
	else
	{
		func_609("IDJ_DELIVER_THE", "IDJ_KM_MERCH", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1173()
{
	func_623("ILH_STEAL", "IDJ_SKTE_MRCHV", 9, 0);
}

void func_1174()
{
	func_623("ILH_GOTO", "IDJ_LOC_SKATE", 12, 0);
}

void func_1175()
{
	func_634(0, 4);
	func_633(0, 1);
	func_634(1, 22);
	func_633(1, 2);
	func_634(2, 24);
	func_633(2, 3);
	func_634(3, 44);
}

void func_1176(var uParam0, int iParam1)
{
	if (bLocal_3568)
	{
		if (func_694(iParam1, 9))
		{
			func_693(14);
		}
	}
}

void func_1177()
{
	if (func_922(func_201(), &uLocal_5101, 1, 0))
	{
		func_696(9);
	}
	else
	{
		func_807(9);
	}
	if (bLocal_3568)
	{
		if (func_662(14))
		{
			func_805(14);
		}
	}
}

void func_1178()
{
	if (func_600() && !func_662(12))
	{
		func_1073(2, 0, 3000);
		func_693(12);
	}
}

void func_1179()
{
	func_1082();
	if (!func_694(iLocal_3573, 10) && unk_0x1A3D0DF92BF7D8C4(iLocal_3570) > 0)
	{
		func_696(10);
	}
}

int func_1180()
{
	func_1084();
	return 1;
}

void func_1181()
{
	func_698(0, 15);
	func_637(0, 9);
	func_868(2, 10);
	func_868(2, 26);
	Local_221.f_419.f_72[0 /*6*/] = 2;
	Local_221.f_419.f_72[0 /*6*/].f_1 = 2;
	Local_221.f_419.f_72[0 /*6*/].f_2 = 0;
	Local_221.f_419.f_72[0 /*6*/].f_3 = { 0f, -2f, -0.42f };
	Local_221.f_419.f_1[2 /*10*/].f_7 = { 0f, 0f, 25f };
	Local_221.f_575 = 30;
	Local_221.f_575.f_1 = 2;
}

void func_1182()
{
}

int func_1183(var uParam0, var uParam1)
{
	Local_3649.f_502 = uParam0;
	Local_3649.f_502.f_1 = uParam1;
	Local_3649.f_502.f_2 = func_1184(Local_3649.f_502);
	switch (Local_3649.f_502)
	{
		case 6:
			Local_3649.f_502.f_3 = 1000f;
			break;
	}
	return 1;
}

int func_1184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		default:
	}
	return -1;
}

int func_1185()
{
	return func_1186();
}

int func_1186()
{
	return Global_2540384.f_5188.f_341;
}

int func_1187()
{
	return func_1188();
}

int func_1188()
{
	return Global_2540384.f_5188.f_340;
}

bool func_1189(int iParam0)
{
	return func_4(&uLocal_3585, iParam0);
}

void func_1190()
{
	func_1458();
	func_1451();
	func_1446();
	func_1307();
	func_1194();
	func_1191();
}

void func_1191()
{
	if (!func_1189(30))
	{
		if (Local_1202.f_59 != 0)
		{
			Call_Loc(Local_1202.f_59);
			func_1192(StackVal);
		}
		func_145(30);
	}
}

void func_1192(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 15)
	{
		return;
	}
	func_1193(iParam0);
}

void func_1193(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_35[iVar0]), iVar1);
}

void func_1194()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_151(iLocal_3573, 0))
	{
		return;
	}
	if (!func_1306(0))
	{
		if (func_1189(11))
		{
			func_1305(func_551(), &iVar0, &iVar1);
		}
		if (iVar0 > 0)
		{
			func_1300(iVar0);
		}
		if (iVar1 > 0)
		{
			if (Local_221.f_581.f_1)
			{
				func_1299();
			}
			func_1253(0, iLocal_3571, "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
		}
		Local_3301.f_5 = (Local_3301.f_5 + iVar0);
		Local_3301.f_6 = (Local_3301.f_6 + iVar1);
		if (func_460(iLocal_3570))
		{
			if (func_1189(11))
			{
				if (!func_1249(func_551()))
				{
					func_1245(func_551());
					Global_1676855.f_16 = unk_0x856D5567211886A2(func_1242(func_551()));
				}
			}
		}
		func_1241(0);
	}
	if (func_1189(11))
	{
		iVar2 = func_1240(func_551());
		if (iVar2 > 0)
		{
			if (func_1196(iVar2, &uLocal_5102))
			{
				Global_1676855.f_15 = (Global_1676855.f_15 + iVar2);
				func_1195(0);
			}
		}
		else
		{
			func_1195(0);
		}
	}
	else
	{
		func_1195(0);
	}
}

void func_1195(int iParam0)
{
	if (func_15(&(Local_4188[iLocal_3572 /*114*/].f_1), iParam0))
	{
	}
}

bool func_1196(int iParam0, var uParam1)
{
	return func_1197(iParam0, 11, uParam1, -1, -1);
}

int func_1197(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_1239(iParam1))
	{
	}
	else
	{
		iVar0 = func_1238();
		iVar1 = (Global_262145.f_26468 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_1236();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_1219(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_1238() - Global_1696910);
			func_1218(iVar4, 1);
			func_1216();
			func_1215();
			Global_1696910 = (Global_1696910 + iVar4);
			if (iParam1 == 0)
			{
				func_1208(iVar4);
				Global_2462183 = 1;
			}
			else if (iParam1 == 3)
			{
				func_1201(iVar4);
				if (iVar4 >= Global_262145.f_26476)
				{
					Global_2462182 = 1;
				}
				else if (iVar4 >= Global_262145.f_26475)
				{
					Global_2462183 = 1;
				}
			}
			Var5 = func_1200(iParam1);
			Var5.f_1 = func_1199(iParam1, iParam3, iParam4);
			if (func_1198(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x982EAC40778C4B0A(-1) + unk_0x043DDE27C7AA3445());
			Var5.f_6 = Global_1696910;
			unk_0xBE75FF31A3167DE9(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_1198(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_1199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_1200(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_1201(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1207();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_1205();
	if (iVar0 == 0)
	{
		func_1204();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26470)
	{
		func_1203();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26472)
	{
		func_1202(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26472);
		func_1203();
		Global_2462183 = 1;
	}
	else
	{
		func_1202(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 + iParam0));
	}
}

void func_1202(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, 1);
	}
}

void func_1203()
{
	func_1204();
}

void func_1204()
{
	func_1202(joaat("MPPLY_CASINO_CHIPS_WONTIM"), unk_0x5A002C4821A13338());
}

int func_1205()
{
	return func_1206(joaat("MPPLY_CASINO_CHIPS_WON_GD"));
}

int func_1206(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_1207()
{
	return func_1206(joaat("MPPLY_CASINO_CHIPS_WONTIM"));
}

void func_1208(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1214();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_1213();
	if (iVar0 == 0)
	{
		func_1212();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26469)
	{
		func_1211();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_1209()
	{
		func_1202(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), func_1209());
		func_1211();
	}
	else
	{
		func_1202(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), (iVar2 + iParam0));
	}
}

int func_1209()
{
	if (func_1210(unk_0x460153A63B9477BC()))
	{
		return Global_262145.f_26264;
	}
	return Global_262145.f_26263;
}

int func_1210(int iParam0)
{
	if (iParam0 != func_101())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

void func_1211()
{
	func_1212();
}

void func_1212()
{
	func_1202(joaat("MPPLY_CASINO_CHIPS_PURTIM"), unk_0x5A002C4821A13338());
}

int func_1213()
{
	return func_1206(joaat("MPPLY_CASINO_CHIPS_PUR_GD"));
}

int func_1214()
{
	return func_1206(joaat("MPPLY_CASINO_CHIPS_PURTIM"));
}

void func_1215()
{
	if (unk_0xCE990E643CD9D0E5(Global_1696949, 6))
	{
		unk_0xBE20AB8238688965(&Global_1696949, 9);
		func_16(&Global_1696952, 0, 0);
	}
}

void func_1216()
{
	if (func_1217())
	{
		unk_0xBE20AB8238688965(&Global_1696949, 1);
	}
}

bool func_1217()
{
	return (unk_0xCE990E643CD9D0E5(Global_1696949, 6) || unk_0xCE990E643CD9D0E5(Global_1696949, 5));
}

void func_1218(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0xBE20AB8238688965(&Global_1696949, 6);
	Global_1696950 = iParam0;
	Global_1696951 = iParam1;
}

bool func_1219(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_1198(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_288())
	{
		if (*uParam0 == 0)
		{
			if (func_1235() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_1200(iParam1);
			iVar5 = -22148635;
			if (func_1239(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_1231(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_1231(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_1227())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_1226(func_1235()))
			{
				if (func_1225(func_1235()) == 2)
				{
					unk_0xA6292C176D37A114(func_1224(func_1235()));
					if (func_1239(iParam1))
					{
						unk_0xFD1477B29C5CAB48(iVar0, iParam2);
					}
					else
					{
						unk_0xA1ADC53367E34B7C(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_1220(func_1235());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x6914A85D2E17013B(iVar0, 0, 1, 0, -1, 0))
	{
		if (func_1239(iParam1))
		{
			unk_0xFD1477B29C5CAB48(iVar0, iParam2);
		}
		else
		{
			unk_0xA1ADC53367E34B7C(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_1220(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_288())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_1223(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2ABDF07188759AF4();
			}
		}
		else if (!bVar0)
		{
			unk_0x7365588A145923CE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_1221(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_1221(var uParam0)
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
	func_1222(&(uParam0->f_14));
	func_1222(&(uParam0->f_14.f_13));
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

void func_1222(var uParam0)
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

int func_1223(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_1224(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_1225(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_1226(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_1227()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_288())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_1235();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_94()) || unk_0x701B05C16EF4F48E())
		{
			if (func_1230(Global_4264051[iVar2 /*85*/].f_66.f_6, Global_4264051[iVar2 /*85*/].f_66.f_4, Global_4264051[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4265553 = 1;
			}
			return 0;
		}
		if (Global_2463410)
		{
			if (Global_4264051[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_1224(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar3))
		{
			Global_4264051[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4264051[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar2 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			if (bVar0)
			{
				Global_4264051[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4264051[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4264051[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_1228(Global_4264051[iVar2 /*85*/], iVar2);
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	return 0;
}

void func_1228(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_1074(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_1229();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar36);
	}
}

void func_1229()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

int func_1230(int iParam0, int iParam1, int iParam2)
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

int func_1231(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_288())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_94()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
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
	iVar1 = func_1235();
	if (iVar1 == -1)
	{
		if (!func_1233(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_1232(iParam1))
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
		if (bVar0 || unk_0x9ED721597A55C9F9(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1232(int iParam0)
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

int func_1233(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_288())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_94()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
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
		if (unk_0x4BEB563BB33B9937())
		{
			unk_0x2ABDF07188759AF4();
		}
	}
	if (bVar0 || unk_0x2B083CB3B730204F(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_1234(iVar3, iParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_1234(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_288())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_1228(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1235()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_1224(iVar0) != 2147483647)
		{
			if (func_1223(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1236()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_1209() - func_1213());
	iVar1 = (Global_262145.f_26468 - func_1238());
	iVar2 = func_1237();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_1237()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1209();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x8686B1F0487AE4B9())
	{
		if (unk_0x6914A85D2E17013B(iVar0, 0, 1, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x043DDE27C7AA3445() + unk_0x982EAC40778C4B0A(-1));
		}
	}
	else if (unk_0x6914A85D2E17013B(iVar0, 0, 1, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x5C556DABD4C01559();
	}
	return iVar1;
}

int func_1238()
{
	return func_225(8249, -1, 0);
}

int func_1239(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

int func_1240(int iParam0)
{
	if (!func_460(iLocal_3570))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 3:
		case 4:
			return Global_262145.f_29431;
		
		case 5:
		case 6:
			return Global_262145.f_29430;
		
		default:
	}
	return 0;
}

void func_1241(int iParam0)
{
	if (func_15(&uLocal_3594, iParam0))
	{
	}
}

char* func_1242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			if (func_1243())
			{
				return "CLO_H4F_DECL_51";
			}
			else
			{
				return "CLO_H4M_DECL_51";
			}
			break;
		
		case 3:
		case 4:
			if (func_1243())
			{
				return "CLO_H4F_DECL_53";
			}
			else
			{
				return "CLO_H4M_DECL_53";
			}
			break;
		
		case 5:
		case 6:
			if (func_1243())
			{
				return "CLO_H4F_DECL_54";
			}
			else
			{
				return "CLO_H4M_DECL_54";
			}
			break;
	}
	return "";
}

bool func_1243()
{
	return func_1244(unk_0x460153A63B9477BC());
}

int func_1244(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_1245(int iParam0)
{
	func_1247(func_1248(iParam0), 1, -1, 1);
	func_1246(func_1242(iParam0));
}

int func_1246(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	iVar0 = unk_0x6B7E7B0C2E6AA381("CLOTHES_UNLOCK", 7, sParam0, 1);
	return iVar0;
}

int func_1247(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_1248(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 30635;
			break;
		
		case 3:
		case 4:
			return 30636;
			break;
		
		case 5:
		case 6:
			return 30637;
			break;
	}
	return 30635;
}

bool func_1249(int iParam0)
{
	return func_1250(func_1248(iParam0), -1, -1);
}

int func_1250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar1 = func_1252(iParam0, iParam1);
	uVar2 = func_1251(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_1251(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_1252(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_1253(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_1254(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_1254(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1264(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				iVar1 = unk_0x9048E8838E822F21(iParam1);
				func_1260(unk_0x1D5C49FCA9BC5B02(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_1255(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_1255(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_1258(iParam0, 1) };
	if (iParam0 == func_1257(unk_0x9B0761B4C3EB8BC7()))
	{
		func_1256(1);
	}
	func_1260(Var0, iParam1, 0, sParam2, iParam3);
}

void func_1256(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_1257(int iParam0)
{
	return iParam0;
}

Vector3 func_1258(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xC337F69A1938DDA2())
	{
		Var3 = { unk_0x1DB2F48A1F5B2CD3(2) };
	}
	if (iParam0 == func_1259(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar6 = unk_0xEF7858F25585F853(iParam0);
		if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_1259(int iParam0)
{
	return iParam0;
}

void func_1260(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440049.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440049.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440049.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440049.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_1263(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam3;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam4;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_1262();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_1261();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam6);
		}
	}
}

int func_1261()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_1262()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_1263(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x272784C60C397DB6(unk_0x0F1DDC797C100E7F(), Param0, 1);
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

var func_1264(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_1265(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_1265(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_1298(unk_0x460153A63B9477BC()) || func_1297(unk_0x460153A63B9477BC()))
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
	else if (func_1295() || func_1293(unk_0x460153A63B9477BC()))
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
	if (func_1292(sParam2))
	{
	}
	if (func_1291())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_1289(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_1288(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_1286(0, &iVar1);
					break;
				
				case 3:
					func_1286(1, &iVar1);
					break;
				
				case 1:
					func_1284(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688737)
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
			func_1282(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_1273((func_1281(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_1282(1165, iVar1, -1);
				}
				func_1268(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_1266((func_1267(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_1266((func_1267(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_1266(int iParam0)
{
	if (func_1291())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_1202(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

int func_1267(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_69(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_1206(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_1206(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

void func_1268(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_103(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar13 = func_1271(func_1272(&Var0));
			if (iVar13 == 0)
			{
				func_1270(&Global_1388052, iParam0);
				func_1269(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar13 == 1)
			{
				func_1270(&Global_1388053, iParam0);
				func_1269(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar13 == 2)
			{
				func_1270(&Global_1388054, iParam0);
				func_1269(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar13 == 3)
			{
				func_1270(&Global_1388055, iParam0);
				func_1269(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar13 == 4)
			{
				func_1270(&Global_1388056, iParam0);
				func_1269(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_1269(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, uParam1, 1);
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

void func_1270(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_1271(int iParam0)
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

int func_1272(var uParam0)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(uParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

void func_1273(int iParam0, int iParam1, int iParam2)
{
	if (func_1291())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_226(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_226(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1158693853, -1345423847);
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
				unk_0xC0B1609C742F66E3(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_424(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_1279(iParam0, 1);
		}
		func_1278(639, iParam0, -1, 1);
		func_1277(640, func_1279(iParam0, 1), -1, 1, 0);
		Global_1388197[func_226(-1)] = iParam0;
		func_1274(-1109644434, 7, 0);
	}
}

void func_1274(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_1276(iParam1, iParam2))
	{
		iVar0 = func_1275();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_1275()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1276(int iParam0, var uParam1)
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

void func_1277(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_226(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_1278(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_226(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_226(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_226(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_226(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_226(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_226(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_226(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_226(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_226(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_226(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_226(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_226(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_226(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_226(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_226(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_226(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_226(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_226(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_226(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_226(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_226(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_226(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_226(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_226(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_226(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_226(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_226(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_226(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_226(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_226(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_226(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_226(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_226(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_226(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_226(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_226(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_226(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_226(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_226(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_226(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_226(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_226(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_226(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_226(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_226(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_226(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_226(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_226(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_226(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_226(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_226(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_226(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_226(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_226(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_1279(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_1280(iParam0, 0);
}

int func_1280(int iParam0, int iParam1)
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
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
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

int func_1281(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_226(-1)];
			}
			else if (func_424(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_226(-1)];
	}
	return 0;
}

void func_1282(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_225(iParam0, func_226(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_1283(iParam0))
	{
		func_1277(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_1278(iParam0, iVar0, iParam2, 1);
	}
}

int func_1283(int iParam0)
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

void func_1284(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar4 = unk_0x628A51AC66E80772(iVar0);
		if (unk_0xBD09DF93F957A0CF(iVar4))
		{
			iVar5 = unk_0x9019589211A13B02(iVar4);
			if (unk_0x6CC163E30ECE0790(iVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_334(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_104(unk_0x460153A63B9477BC(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_1285(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_1285(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_1285(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_1286(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xEFA28384DDD283E1())
		{
			iVar3 = iVar0;
			if (unk_0xBD09DF93F957A0CF(iVar3))
			{
				iVar4 = unk_0x9019589211A13B02(iVar3);
				if (func_69(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_104(unk_0x460153A63B9477BC(), iVar4))
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
			if (func_69(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_1287(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_104(unk_0x460153A63B9477BC(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_1285(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_1285(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_1287(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_96(iParam0), func_96(iParam1));
	return 0f;
}

int func_1288(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_1285(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_1289(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_1281(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_1281(unk_0x460153A63B9477BC());
		}
	}
	if (func_1290(8000, 0, 0) > 0)
	{
		if (func_1290(8000, 0, 0) < (iParam0 + func_1281(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_1290(8000, 0, 0) - func_1281(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_1290(int iParam0, bool bParam1, int iParam2)
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
	return Global_292402[iParam0];
}

int func_1291()
{
	return 1;
}

int func_1292(char* sParam0)
{
	if (unk_0x211E6DB3335430B4(sParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F(sParam0, "") || unk_0xF005CCA4263DF67F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_1293(int iParam0)
{
	return func_1294(func_246(iParam0));
}

int func_1294(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1295()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_97();
	}
	return func_1296(Global_4456448.f_82708);
}

int func_1296(int iParam0)
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

bool func_1297(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_1298(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_1299()
{
	Global_2463792 = 1;
}

void func_1300(int iParam0)
{
	var uVar0;
	
	if (func_288())
	{
		func_1301(-1027218631, iParam0, &uVar0, 0, 1, 0);
	}
	else
	{
		unk_0xE2BB399D90942091(iParam0, func_551());
	}
}

void func_1301(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_288())
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
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_1302(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_1302(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_1302(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_1302(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_1302(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_288())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_94()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
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
	if ((bVar0 || iVar1) || unk_0x734A68E809CC23F0(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar4))
		{
			*uParam0 = func_1234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_1304(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_1303(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_1303(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_1220(iParam0);
	}
}

void func_1304(int iParam0, var uParam1)
{
	Global_2464590 = uParam1;
	Global_2464589 = iParam0;
}

void func_1305(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			if (func_460(iLocal_3570))
			{
				*uParam1 = (*uParam1 + Global_262145.f_29424);
				*uParam2 = (*uParam2 + Global_262145.f_29432);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_29427);
			}
			break;
		
		case 3:
		case 4:
			if (func_460(iLocal_3570))
			{
				*uParam1 = (*uParam1 + Global_262145.f_29426);
				*uParam2 = (*uParam2 + Global_262145.f_29434);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_29428);
			}
			break;
		
		case 5:
		case 6:
			if (func_460(iLocal_3570))
			{
				*uParam1 = (*uParam1 + Global_262145.f_29425);
				*uParam2 = (*uParam2 + Global_262145.f_29433);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_29429);
			}
			break;
	}
}

bool func_1306(int iParam0)
{
	return func_4(&uLocal_3594, iParam0);
}

void func_1307()
{
	if (!func_1189(8))
	{
		if (func_1445())
		{
			if (func_1377(0, 1, 1) && func_1376())
			{
				func_1308();
				func_145(8);
			}
		}
		else
		{
			func_145(8);
		}
	}
}

void func_1308()
{
	switch (func_496())
	{
		case 20:
			if (func_551() == 3)
			{
				func_1371(89, func_1375(), func_1373(), func_1372(), -1, -1, -1082130432, 0, 1, 2, 0);
				return;
			}
			break;
		
		case 12:
			func_1370(88, "CSH_STOVER_T", "CSH_FAIL_NOP", 1, -1, 2, 1, 0);
			return;
			break;
		
		case 2:
			return;
			break;
	}
	if (func_1367())
	{
		if (func_1366())
		{
			func_1356(100, func_1364(), func_1363(), func_1361(1, 1, 0), 0, -1, func_1358(), func_1357(), 1, 2, 0);
		}
		else
		{
			func_1310(100, func_1358(), func_1363(), func_1364(), 1, -1, -1082130432, 2);
		}
	}
	else if (func_1189(11))
	{
		func_1371(100, func_1361(1, 1, 0), func_1309(), func_1364(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
	else
	{
		func_1371(89, func_1375(), func_1373(), func_1372(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
}

char* func_1309()
{
	switch (func_551())
	{
		case 0:
		case 1:
		case 3:
		case 5:
		case 6:
			return "IDJ_DELIVERED";
		
		case 4:
			return "IDJ_DELIVERED_P";
		
		case 2:
			return "IDJ_RECOVERED_P";
		
		default:
	}
	return "CSH_STPASSVC_S";
}

int func_1310(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_1355(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_1311(&Var0);
}

int func_1311(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_1327(uParam0, uParam0->f_17);
	func_1324(uParam0);
	if (func_97())
	{
		func_1324(uParam0);
	}
	if (func_1323(uParam0->f_1))
	{
		func_1316();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_1315(uParam0->f_69, 8192))
			{
				Global_1663777 = 1;
			}
			return 1;
		}
		if (((Global_2440049.f_2834[0 /*80*/].f_1 == 13 || Global_2440049.f_2834[0 /*80*/].f_1 == 53) || Global_2440049.f_2834[0 /*80*/].f_1 == 54) || Global_2440049.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440049.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440049.f_2834[iVar0 + 1 /*80*/] = { Global_2440049.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440049.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_1316();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_1313(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_1315(uParam0->f_69, 128))
			{
				if (func_1312(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_1313(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1312(int iParam0)
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

void func_1313(var uParam0, int iParam1)
{
	func_1314(uParam0, iParam1);
}

void func_1314(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_1315(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1316()
{
	bool bVar0;
	
	if (Global_2440049.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_1317();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_1317()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_1321(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_1318(&(Global_2440049.f_3158.f_1), 1);
}

void func_1318(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x2E352DDBBF674246(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF1B28F753235CE2A(0);
			unk_0xE1FDD153F5858534();
		}
		unk_0x2E352DDBBF674246(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xFF8E7A064055ECA6(0);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!unk_0x252C34B7867FDDFA(unk_0x2639A2323BEA8CC6()))
		{
			if (!Global_77102)
			{
				if (unk_0x03DB5C6AABF8DA46() && !func_1320(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_1319(0);
}

void func_1319(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_1320(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_1321(var uParam0)
{
	func_1322(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_1322(var uParam0)
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

int func_1323(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_1324(var uParam0)
{
	if (func_1326(uParam0->f_1))
	{
		uParam0->f_72 = func_1325();
	}
}

int func_1325()
{
	return 21;
}

int func_1326(int iParam0)
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

void func_1327(var uParam0, int iParam1)
{
	if (func_1326(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_101() || !func_69(iParam1, 0, 1))
	{
		return;
	}
	if (func_1312(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_1328(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_1328(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_338(iParam0) && !bParam4)
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
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_338(unk_0x460153A63B9477BC()) || (func_1354() && func_1353())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_1352();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_69(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_1350(iParam1, iParam0, 0);
							}
							else
							{
								return func_1340(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_1340(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_1350(iParam1, iParam0, 0);
				}
				else
				{
					return func_1329(0, -1, 0);
				}
			}
			else
			{
				return func_1329(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_1350(iParam1, iParam0, 0);
		}
		else
		{
			return func_1340(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_1340(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_1329(bool bParam0, int iParam1, bool bParam2)
{
	return func_1330(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_1330(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_1339() || (func_1338() && func_1336())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_1335(iParam2, iVar0);
		}
		else
		{
			return func_1335(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_334(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_1334(1);
				}
				else
				{
					return func_1334(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_1331(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_1331(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_1334(1);
	}
	return func_1334(0);
}

int func_1331(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_1333(iParam0, iParam1, iParam3);
	if (func_1332(Global_4456448.f_82708, 1))
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

int func_1332(int iParam0, bool bParam1)
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

int func_1333(int iParam0, int iParam1, int iParam2)
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
			if (!func_334(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1334(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_1335(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1333(iParam1, iParam0, 4);
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

bool func_1336()
{
	if (func_1337())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_1337()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_1338()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_1339()
{
	if (func_1337() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_1340(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148)
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
			if (func_1346())
			{
				iVar3 = func_1345(iParam0);
				if (!iVar3 == -1)
				{
					return func_1343(iVar3);
				}
			}
			if ((func_1342(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_334(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_1334(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_1341(1);
			}
			else
			{
				return func_1330(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_1334(1);
			}
			else
			{
				return func_1330(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_1345(iParam0);
	if (!iVar4 == -1)
	{
		return func_1343(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_1341(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_1342(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
}

int func_1343(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_1344(iParam0);
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

var func_1344(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_1345(int iParam0)
{
	if (!iParam0 == func_101())
	{
		if (func_812(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_102(iParam0)];
		}
	}
	return -1;
}

int func_1346()
{
	if ((((func_408() || func_1349()) || func_97()) || func_1348()) || func_1347())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_1347()
{
	return Global_2451787.f_23;
}

var func_1348()
{
	return Global_2451787.f_20;
}

var func_1349()
{
	return Global_2451787.f_17;
}

int func_1350(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_1346())
	{
		iVar2 = func_1345(iParam1);
		if (!iVar2 == -1)
		{
			return func_1343(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_101())
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
				if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 29))
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
			iVar0 = func_1330(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_1351(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_334(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_1341(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1351(int iParam0)
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

var func_1352()
{
	return Global_2359302.f_2;
}

bool func_1353()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_1354()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

void func_1355(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_101();
	uParam1->f_18 = func_101();
	uParam1->f_19 = func_101();
	uParam1->f_20 = func_101();
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

int func_1356(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10)
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
	func_1355(iParam0, &Var0, iParam6, sParam2, sParam1);
	StringCopy(&(Var0.f_57), sParam3, 16);
	StringCopy(&(Var0.f_61), sParam4, 16);
	Var0.f_6 = iParam5;
	Var0.f_4 = uParam7;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_1313(&(Var0.f_69), iParam10);
	}
	return func_1311(&Var0);
}

int func_1357()
{
	return func_7();
}

int func_1358()
{
	return func_1359(iLocal_3570);
}

int func_1359(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_1360(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1360(int iParam0, int iParam1)
{
	if (func_812(iParam0, 1) && !func_29(21))
	{
		return Local_3649.f_2.f_27[iParam1] == unk_0x69FCAB6112C0ABA7(func_102(iParam0));
	}
	return Local_3649.f_2.f_27[iParam1] == unk_0x69FCAB6112C0ABA7(iParam0);
}

char* func_1361(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (bParam1)
		{
			if (bParam2)
			{
				switch (func_1362())
				{
					case 0:
						return "IDJ_SKTE_MRCH";
					
					case 1:
						return "IDJ_KM_PIZZA";
					
					case 2:
						return "IDJ_KM_STONES";
					
					case 4:
						return "IDJ_MM_SLIP";
					
					case 3:
						return "IDJ_MM_RENTAL";
					
					case 6:
						return "IDJ_CHAMPAGNE";
					
					case 5:
						return "IDJ_PT_EQUIP";
					
					default:
				}
			}
			else
			{
				switch (func_1362())
				{
					case 0:
						return "IDJ_SKTE_MRCH_B";
					
					case 1:
						return "IDJ_KM_PIZZA_B";
					
					case 2:
						return "IDJ_KM_STONES_B";
					
					case 4:
						return "IDJ_MM_SLIP_B";
					
					case 3:
						return "IDJ_MM_RENTAL";
					
					case 6:
						return "IDJ_CHAMPAGNE_B";
					
					case 5:
						return "IDJ_PT_EQUIP_B";
					}
				
				default:
			}
		}
		else
		{
			switch (func_1362())
			{
				case 0:
					return "IDJ_SKTE_MRCH_B";
				
				case 1:
					return "IDJ_KM_PIZZA_B";
				
				case 2:
					return "IDJ_KM_STONES_B";
				
				case 4:
					return "IDJ_MM_SLIP";
				
				case 3:
					return "IDJ_MM_RENTAL";
				
				case 6:
					return "IDJ_DELVRTRK_B";
				
				case 5:
					return "IDJ_PT_EQUIP_B";
				}
			
			default:
		}
	}
	else
	{
		switch (func_1362())
		{
			case 0:
				return "IDJ_SKTE_MRCH";
			
			case 1:
				return "IDJ_KM_PIZZA";
			
			case 2:
				return "IDJ_KM_STONES";
			
			case 4:
				return "IDJ_MM_SLIP";
			
			case 3:
				return "IDJ_MM_RENTAL";
			
			case 6:
				return "IDJ_DELVRTRK";
			
			case 5:
				return "IDJ_PT_EQUIP";
			}
		
		default:
	}
	return "SMTYPE_MIXED";
}

int func_1362()
{
	return Local_3649.f_502.f_2;
}

char* func_1363()
{
	return "";
}

char* func_1364()
{
	return func_1365();
}

char* func_1365()
{
	switch (func_551())
	{
		case 0:
		case 1:
		case 2:
			return "IDJ_KM_BM_TITLE";
		
		case 3:
		case 4:
			return "IDJ_MM_BM_TITLE";
		
		case 5:
		case 6:
			return "IDJ_PT_BM_TITLE";
		
		default:
	}
	return "IDJ_BM_TITLE";
}

int func_1366()
{
	switch (func_551())
	{
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1367()
{
	if (Local_1202.f_70.f_1 != 0)
	{
		Call_Loc(Local_1202.f_70.f_1);
		return StackVal;
	}
	if (!func_465())
	{
		return 0;
	}
	if (func_1369() && func_1359(iLocal_3570) < func_7())
	{
		return 1;
	}
	return (func_1368(iLocal_3570) && !func_1369());
}

int func_1368(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_6(iVar0, 4) && func_1360(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1369()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_221.f_18)
	{
		if (!func_6(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1370(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_1355(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_1313(&(Var0.f_69), iParam7);
	}
	return func_1311(&Var0);
}

int func_1371(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_1355(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_1313(&(Var0.f_69), iParam10);
	}
	return func_1311(&Var0);
}

char* func_1372()
{
	return "IDJ_BM_F";
}

char* func_1373()
{
	switch (func_551())
	{
		case 0:
		case 1:
		case 5:
		case 6:
			return "IDJ_FAIL_DLVR";
		
		case 4:
			return "IDJ_FAIL_DLVR_P";
		
		case 3:
			return "IDJ_FAIL_RCVR";
		
		case 2:
			return "IDJ_FAIL_RCVR_P";
		
		default:
	}
	if (func_1374())
	{
		return "CSH_FAIL_NDa";
	}
	return "CSH_FAIL_NDb";
}

int func_1374()
{
	switch (func_551())
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 4:
			return 0;
		
		case 3:
			return 1;
		
		case 6:
			return 1;
		
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_1375()
{
	return func_1361(1, 1, 1);
}

int func_1376()
{
	return 1;
}

bool func_1377(int iParam0, int iParam1, int iParam2)
{
	return ((!func_1437() && !func_1436()) && func_1378((iParam0 && func_1434()), 1, func_1433(), 0));
}

int func_1378(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_929(unk_0x460153A63B9477BC(), 29))
	{
		return 0;
	}
	if (func_1432(unk_0x460153A63B9477BC(), 21))
	{
		return 0;
	}
	if (func_1432(unk_0x460153A63B9477BC(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD0E70037A973A810())
		{
			return 0;
		}
	}
	if (!func_1431(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x450A8984AFF05042())
		{
			return 0;
		}
	}
	if (func_1430(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_1429())
	{
		return 0;
	}
	if (func_1428())
	{
		return 0;
	}
	if (func_1427())
	{
		return 0;
	}
	if (func_1426())
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (func_336(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_1424())
	{
		return 0;
	}
	if (func_1432(unk_0x460153A63B9477BC(), 0) || func_1432(unk_0x460153A63B9477BC(), 3))
	{
		return 0;
	}
	if ((func_1432(unk_0x460153A63B9477BC(), 12) || func_1432(unk_0x460153A63B9477BC(), 14)) || func_1432(unk_0x460153A63B9477BC(), 13))
	{
		return 0;
	}
	if (func_1419(unk_0x460153A63B9477BC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
	{
		if (!func_1390())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_229())
		{
			return 0;
		}
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_1389(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_1388())
	{
		return 0;
	}
	if (func_1387(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((func_389(unk_0x460153A63B9477BC()) && func_386(unk_0x460153A63B9477BC()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1386())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (func_1385(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_1384(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_1382(unk_0x460153A63B9477BC()))
	{
		if (func_1381(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_1379())
	{
		return 0;
	}
	return 1;
}

bool func_1379()
{
	return func_1380() == 1;
}

int func_1380()
{
	return Global_1704006;
}

int func_1381(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

bool func_1382(int iParam0)
{
	return func_1383(iParam0, 20);
}

bool func_1383(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_1384(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_2515846;
	}
	else
	{
		uVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(uVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
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

int func_1385(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_1386()
{
	return Global_1678288.f_4347 != -1;
}

int func_1387(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_1388()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1389(int iParam0)
{
	if (!func_69(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_1390()
{
	int iVar0;
	
	iVar0 = func_246(unk_0x460153A63B9477BC());
	if (((func_1418(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_28) || func_1417(unk_0x460153A63B9477BC())) || func_1416(unk_0x460153A63B9477BC())) || func_1411(unk_0x460153A63B9477BC()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_1410(unk_0x460153A63B9477BC()))
	{
		if (func_1409(iVar0) || func_1408(iVar0))
		{
			return 1;
		}
	}
	if (func_1407(unk_0x460153A63B9477BC()))
	{
		if (func_1408(iVar0))
		{
			return 1;
		}
	}
	if (func_1406(unk_0x460153A63B9477BC()))
	{
		if (func_1405(iVar0))
		{
			return 1;
		}
	}
	if (func_1404(unk_0x460153A63B9477BC()))
	{
		if (func_1403(iVar0))
		{
			return 1;
		}
	}
	if (func_1402(unk_0x460153A63B9477BC()))
	{
		if (func_1294(iVar0))
		{
			return 1;
		}
	}
	if (func_1401(unk_0x460153A63B9477BC()))
	{
		if (func_1400(iVar0))
		{
			return 1;
		}
	}
	if (func_390(unk_0x460153A63B9477BC(), 0))
	{
		if (func_1399(iVar0))
		{
			if (func_1397(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
		}
	}
	if (func_1396(unk_0x460153A63B9477BC()))
	{
		if (func_1395(iVar0))
		{
			return 1;
		}
		if (func_1394(iVar0))
		{
			return 1;
		}
		if (func_1393())
		{
			return 1;
		}
	}
	if (func_1392(unk_0x460153A63B9477BC()))
	{
		if (func_1391())
		{
			return 1;
		}
	}
	return 0;
}

bool func_1391()
{
	return Global_2540384.f_6663;
}

int func_1392(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_1393()
{
	return Global_2540384.f_6662;
}

int func_1394(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_1395(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_1396(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_1397(int iParam0)
{
	if (func_1398(iParam0) != func_101())
	{
		return func_1398(iParam0) == func_102(iParam0);
	}
	return 0;
}

int func_1398(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_1399(int iParam0)
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

int func_1400(int iParam0)
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

int func_1401(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_1402(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_1403(int iParam0)
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

int func_1404(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_1405(int iParam0)
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

int func_1406(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_1407(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_1408(int iParam0)
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

int func_1409(int iParam0)
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

int func_1410(int iParam0)
{
	if (func_402(Global_1590682[iParam0 /*883*/].f_274.f_28, -1))
	{
		return 1;
	}
	return 0;
}

int func_1411(int iParam0)
{
	if (func_1412(Global_1590682[iParam0 /*883*/].f_274.f_28, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1412(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1413(unk_0x460153A63B9477BC(), 0);
	}
	if (bParam1)
	{
		if (func_1413(unk_0x460153A63B9477BC(), 0))
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

bool func_1413(int iParam0, bool bParam1)
{
	if (Global_1590518 != func_101())
	{
		if (!func_1415(Global_1590518))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x460153A63B9477BC() != Global_1590518)
			{
				if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_1590518 /*443*/].f_199, 24) || func_1414(Global_1590518))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 24);
}

int func_1414(int iParam0)
{
	if (iParam0 != func_101())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 9);
	}
	return 0;
}

int func_1415(int iParam0)
{
	if (iParam0 != func_101())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_351, 2);
	}
	return 0;
}

int func_1416(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_1417(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_1418(int iParam0)
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

int func_1419(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
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
		if (func_1417(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_1407(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_1416(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_1406(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_1404(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_1402(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_384(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_1401(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_1423(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_390(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_1422(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_1396(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_1421(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_1392(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_1420(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1420(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_1421(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_1422(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_1423(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_69(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_385(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_1424()
{
	if (func_1425() == 0)
	{
		return 1;
	}
	return 0;
}

int func_1425()
{
	return Global_1312485.f_18;
}

bool func_1426()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_1427()
{
	return Global_1312896;
}

bool func_1428()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 5;
}

bool func_1429()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

int func_1430(int iParam0)
{
	if (func_335(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1431(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

bool func_1432(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

bool func_1433()
{
	if (Local_1202.f_24.f_4 != 0)
	{
		Call_Loc(Local_1202.f_24.f_4);
		return StackVal;
	}
	if (func_1393())
	{
		return 0;
	}
	return !func_1189(3);
}

bool func_1434()
{
	return !func_1435();
}

bool func_1435()
{
	return Local_3557 != -1;
}

int func_1436()
{
	return 0;
}

int func_1437()
{
	if ((func_1383(unk_0x460153A63B9477BC(), 21) || func_1383(unk_0x460153A63B9477BC(), 22)) || func_1443())
	{
		return 1;
	}
	if (func_1439())
	{
		func_1438(22);
		return 1;
	}
	return 0;
}

void func_1438(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

int func_1439()
{
	if (func_245(unk_0x460153A63B9477BC(), 0))
	{
		if (((func_1442() && !func_1441()) || func_1432(unk_0x460153A63B9477BC(), 21)) || func_1432(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		else
		{
			func_1440(27);
		}
	}
	return 0;
}

void func_1440(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

bool func_1441()
{
	return Global_1312436.f_1;
}

bool func_1442()
{
	return Global_1312436;
}

bool func_1443()
{
	return func_1444(377, -1);
}

int func_1444(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_1445()
{
	if (func_1189(11))
	{
		if (func_29(24) || func_29(23))
		{
			return 0;
		}
	}
	return 1;
}

void func_1446()
{
	int iVar0;
	
	if (func_1449())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_656(iVar0, iLocal_3573, 16))
		{
			if (Local_3649.f_2.f_42[iVar0 /*2*/].f_1 != -1)
			{
				func_1448(Local_3649.f_2.f_42[iVar0 /*2*/]);
			}
			func_1447(iVar0, 16);
		}
		iVar0++;
	}
}

void func_1447(int iParam0, int iParam1)
{
	if (func_15(&(Local_4188[iLocal_3572 /*114*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_1448(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1683921.f_4618[iVar0 /*2*/].f_1 == -1)
		{
			Global_1683921.f_4618[iVar0 /*2*/] = { Param0 };
			unk_0xBE20AB8238688965(&Global_1683921, 1);
			return;
		}
		iVar0++;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_1683921, 1))
	{
		unk_0xBE20AB8238688965(&Global_1683921, 1);
	}
}

bool func_1449()
{
	return func_1450(unk_0x460153A63B9477BC());
}

int func_1450(int iParam0)
{
	if (iParam0 != func_101())
	{
		if (func_1042(Global_1630317[iParam0 /*595*/].f_552.f_12) || unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_552, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_1451()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_221.f_72)
	{
		if (func_55(iVar1, 18))
		{
			if (unk_0x3D70CCF2C9B362CD(Local_3649.f_62[iVar1 /*22*/]))
			{
				iVar0 = unk_0x3C6C6327BA564AEE(Local_3649.f_62[iVar1 /*22*/]);
				if (!unk_0xA59F96B50B97E63C(iVar0, 0))
				{
					func_1452(iVar1, iVar0);
				}
			}
		}
		iVar1++;
	}
}

void func_1452(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!func_1457(iParam1, -251125078, 1) && func_174(Local_3649.f_62[iParam0 /*22*/]))
	{
		func_1456(iParam0, iParam1);
		Var0 = { func_1455(iParam0) };
		unk_0xD66FADEF7D42D49B(iParam1, Var0, func_1454(iParam0), func_1453(iParam0), 0, 0);
	}
}

int func_1453(int iParam0)
{
	if (Local_1202.f_108.f_60.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_60.f_2);
		return StackVal;
	}
	return -1;
}

float func_1454(int iParam0)
{
	if (Local_1202.f_108.f_60.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_60.f_1);
		return StackVal;
	}
	return 10000f;
}

Vector3 func_1455(int iParam0)
{
	if (Local_1202.f_108.f_60 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1202.f_108.f_60);
		return StackVal, StackVal, StackVal;
	}
	return unk_0x3E4D3CCC220BDFB1(unk_0x3C6C6327BA564AEE(Local_3649.f_62[iParam0 /*22*/]), 0);
}

void func_1456(int iParam0, int iParam1)
{
	if (Local_1202.f_108.f_60.f_3 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1202.f_108.f_60.f_3);
		return;
	}
	unk_0x4E65320BC9AD521C(iParam1, 1);
	unk_0x6673CC701BC8E9C1(iParam1, 5, 0);
	unk_0x6673CC701BC8E9C1(iParam1, 17, 1);
	unk_0x6AC7395A8E313A46(iParam1, 1024, 1);
	unk_0x6AC7395A8E313A46(iParam1, 32768, 0);
}

int func_1457(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x16BC17A8EDC701A2(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_1458()
{
	if (func_1189(11))
	{
		if (Local_1202.f_62.f_3.f_2 != 0)
		{
			Call_Loc(Local_1202.f_62.f_3.f_2);
			unk_0x21723EF7B2FCC4CC(StackVal);
		}
	}
	else if (Local_1202.f_62.f_3.f_3 != 0)
	{
		Call_Loc(Local_1202.f_62.f_3.f_3);
		unk_0x21723EF7B2FCC4CC(StackVal);
	}
	func_1459(0);
}

void func_1459(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1189(34))
		{
			unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
			unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
			func_145(34);
		}
	}
	else if (func_1189(34))
	{
		unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
		unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
		func_1460(34);
	}
}

void func_1460(int iParam0)
{
	if (func_181(&uLocal_3585, iParam0))
	{
	}
}

void func_1461()
{
	if (func_1462())
	{
		func_145(11);
	}
}

bool func_1462()
{
	if (Local_1202.f_70 != 0)
	{
		Call_Loc(Local_1202.f_70);
		return StackVal;
	}
	if (Local_221.f_18 > 0)
	{
		if (func_465())
		{
			return func_1368(iLocal_3570);
		}
		return func_1463(iLocal_3570);
	}
	return func_496() == 3;
}

int func_1463(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_6(iVar0, 4) || !func_1360(iParam0, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_1464()
{
}

void func_1465()
{
	func_3094();
	func_2992();
	func_2990();
	func_2957();
	func_2956();
	if (Local_1202.f_3.f_1 != 0)
	{
		Call_Loc(Local_1202.f_3.f_1);
	}
	func_2859();
	func_2811();
	func_2787();
	func_2721();
	func_2704();
	func_2689();
	func_2673();
	func_2655();
	func_2637();
	func_2513();
	func_2476();
	func_2466();
	func_2446();
	func_2409();
	func_2356();
	func_2241();
	func_2238();
	func_2208();
	func_2189();
	func_2182();
	func_1695();
	func_1686();
	func_1469();
	func_1466();
}

void func_1466()
{
	int iVar0;
	
	if (func_739() != -1)
	{
		while ((func_739() < iLocal_3584 && iVar0 < Local_1832[func_739() /*21*/].f_19) && Local_1832[func_739() /*21*/].f_1[iVar0 /*3*/] != -1)
		{
			if (func_1468(func_739(), iVar0))
			{
				Call_Loc(Local_1832[func_739() /*21*/].f_18);
				func_1467(Local_1832[func_739() /*21*/].f_1[iVar0 /*3*/]);
				Call_Loc(Local_1832[func_739() /*21*/].f_17);
				return;
			}
			iVar0++;
		}
	}
}

void func_1467(var uParam0)
{
	Local_4188[iLocal_3572 /*114*/] = uParam0;
}

int func_1468(int iParam0, int iParam1)
{
	if (Local_1832[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1 != 0)
	{
		Call_Loc(Local_1832[iParam0 /*21*/].f_1[iParam1 /*3*/].f_1);
		return StackVal;
	}
	if (Local_1832[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 != -1)
	{
		return (Local_1832[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == func_20() || Local_1832[iParam0 /*21*/].f_1[iParam1 /*3*/].f_2 == Local_3649.f_468);
	}
	return 0;
}

void func_1469()
{
	if (func_1685())
	{
		if (iLocal_3593 == -1)
		{
			iLocal_3593 = func_225(2047, -1, 0);
		}
		if (!func_1189(60))
		{
			if (func_1683(iLocal_3571, 3, -1))
			{
				func_145(61);
			}
			if (func_225(2047, -1, 0) < 3)
			{
				func_1282(2047, 3, -1);
			}
			unk_0xBE20AB8238688965(&(Global_2540384.f_4655), 22);
			unk_0xEE46E0CF4F1C3016(iLocal_3570, 100f);
			unk_0xB1AC1F996633F5B4(iLocal_3571, 0);
			unk_0x5B91E038374B8BD8(iLocal_3571, 0);
			Global_1688723 = 1;
			func_145(60);
		}
		if (!func_1683(iLocal_3571, 3, -1))
		{
			func_1681(0);
			func_1676(iLocal_3571, 3, -1);
			func_1675(1);
		}
	}
	else
	{
		func_1470();
	}
}

void func_1470()
{
	if (func_1189(60))
	{
		if (func_1683(iLocal_3571, 3, -1))
		{
			if (!func_1189(61))
			{
				func_1471(iLocal_3571, 3, -1, -1);
			}
		}
		unk_0xB1AC1F996633F5B4(iLocal_3571, 1);
		unk_0x5B91E038374B8BD8(iLocal_3571, 1);
		unk_0xEE46E0CF4F1C3016(iLocal_3570, 100f);
		unk_0xBE20AB8238688965(&(Global_2540384.f_4655), 22);
		func_1277(2047, iLocal_3593, -1, 1, 0);
		func_1675(0);
		func_1460(60);
	}
}

void func_1471(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = unk_0xE4400E48E081F17A(iParam0);
	}
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		Global_76717[iVar1] = -1;
		Global_76717.f_13[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_76717.f_26)
	{
		Global_76717.f_26[iVar1] = -1;
		Global_76717.f_36[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < Global_76717.f_46)
	{
		Global_76717.f_46[iVar1] = -1;
		iVar1++;
	}
	bVar2 = false;
	if (func_1669(iParam0, &Global_76717, iParam1, &iParam3))
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Global_76717[iVar1] != -1)
			{
				if (unk_0x3FB4D40A857CEA77(iParam0, iVar1) == Global_76717[iVar1] && unk_0x79AFA009D186C4FB(iParam0, iVar1) == Global_76717.f_13[iVar1])
				{
					if (iVar1 == 2)
					{
						bVar0 = true;
					}
					if (iVar1 == 1)
					{
						bVar2 = true;
					}
					unk_0x45F588C0DD767737(iParam0, iVar1, 0, 0, 0);
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < Global_76717.f_26)
		{
			if (Global_76717.f_26[iVar1] != -1 && Global_76717.f_26[iVar1] != 255)
			{
				if (unk_0xA98E0435012EAF07(iParam0, iVar1) == Global_76717.f_26[iVar1] && unk_0x77A103B794FA7737(iParam0, iVar1) == Global_76717.f_36[iVar1])
				{
					unk_0x4FCABD4082A6C808(iParam0, iVar1);
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			if (!func_1668())
			{
				if (func_1444(161, -1))
				{
					func_1494(iParam0, 2, func_225(2052, Global_76644, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_1494(iParam0, 2, func_225(752, Global_76644, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
		if (iParam1 == 4)
		{
			if (bVar2)
			{
				if (iParam2 != -1 && iParam2 != unk_0x460153A63B9477BC())
				{
					if (unk_0x55AA2C5419794343(unk_0xF1110FE23C67293A(iParam2)))
					{
						unk_0xE4E810B3471CA47E(iParam0, unk_0xF1110FE23C67293A(iParam2));
					}
				}
				else
				{
					func_1477(iParam0, -1);
				}
			}
			func_1476(0);
			func_1472(1, 2);
		}
	}
}

void func_1472(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = iParam0 != true;
	bVar1 = iParam1 != 2;
	if (bVar0 == 1)
	{
		bVar2 = false;
		if (!iParam0 == 3)
		{
			if (unk_0xCF7C8FAFCB27E229())
			{
				unk_0xA12420AB85045A85(Global_1663053);
				Global_1663053 = -1f;
				unk_0xB8985B892FCAE306(false);
				bVar2 = true;
			}
			unk_0xCB220E8041ED7444(bVar0);
			unk_0xBE20AB8238688965(&(Global_1656684[unk_0x460153A63B9477BC() /*199*/].f_198), 0);
		}
		else
		{
			if (unk_0x7EF99B84743C74AF() || unk_0x73CD2BA666A5DC40())
			{
				unk_0xCB220E8041ED7444(false);
				bVar2 = true;
			}
			unk_0xB8985B892FCAE306(bVar0);
			Global_1663053 = unk_0x6402E358B11C9E60();
			unk_0xA12420AB85045A85(0.5f);
			unk_0xBE20AB8238688965(&(Global_1656684[unk_0x460153A63B9477BC() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1663054 == -1)
			{
				Global_1663054 = unk_0x5E54B0823F46079E();
			}
			if (!Global_1663054 == -1 && unk_0x046706CBB367B768(Global_1663054))
			{
				if (iParam1 == 1)
				{
					if (!bVar2)
					{
						unk_0xC4CC25B68A91D144(Global_1663054, "On", "GTAO_Vision_Modes_SoundSet", 0);
					}
					else
					{
						unk_0xC4CC25B68A91D144(Global_1663054, "Switch", "GTAO_Vision_Modes_SoundSet", 0);
					}
				}
				else if (bVar1)
				{
					if (!bVar2)
					{
						unk_0xC4CC25B68A91D144(Global_1663054, "On", "GTAO_Vision_Modes_SoundSet", 1);
					}
					else
					{
						unk_0xC4CC25B68A91D144(Global_1663054, "Switch", "GTAO_Vision_Modes_SoundSet", 1);
					}
				}
			}
		}
	}
	else
	{
		if (unk_0x7EF99B84743C74AF() || unk_0x73CD2BA666A5DC40())
		{
			unk_0xCB220E8041ED7444(bVar0);
			unk_0xD2459066EA58CE43(&(Global_1656684[unk_0x460153A63B9477BC() /*199*/].f_198), 0);
		}
		if (unk_0xCF7C8FAFCB27E229())
		{
			unk_0xA12420AB85045A85(Global_1663053);
			Global_1663053 = -1f;
			unk_0xB8985B892FCAE306(bVar0);
			unk_0xD2459066EA58CE43(&(Global_1656684[unk_0x460153A63B9477BC() /*199*/].f_198), 2);
		}
		if (iParam1 == 1 || bVar1)
		{
			if (Global_1663054 == -1)
			{
				Global_1663054 = unk_0x5E54B0823F46079E();
			}
			if (!Global_1663054 == -1 && unk_0x046706CBB367B768(Global_1663054))
			{
				if (iParam1 == 1)
				{
					unk_0xC4CC25B68A91D144(Global_1663054, "Off", "GTAO_Vision_Modes_SoundSet", 0);
				}
				else if (bVar1)
				{
					unk_0xC4CC25B68A91D144(Global_1663054, "Off", "GTAO_Vision_Modes_SoundSet", 1);
				}
			}
		}
	}
	func_1473(!bVar0);
}

void func_1473(bool bParam0)
{
	func_1474(323, bParam0, -1, 1);
}

void func_1474(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_1475())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_226(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, uParam1, iParam3);
		}
	}
}

int func_1475()
{
	return 1;
	return 0;
}

void func_1476(bool bParam0)
{
	if (Global_4268625 != bParam0)
	{
		Global_4268625 = bParam0;
		if (bParam0)
		{
			StringCopy(&Global_4268626, unk_0x6C5C6B207AA78253(), 64);
		}
		else
		{
			StringCopy(&Global_4268626, "", 64);
		}
	}
}

void func_1477(int iParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	bool bVar19;
	int iVar20;
	
	if (!unk_0x36E2FC4B39D3018D(iParam0))
	{
	}
	unk_0x296AF85CC6E891AF(iParam0, &Var0);
	iVar10 = func_225(2096, iParam1, 0);
	iVar11 = func_225(2097, iParam1, 0);
	iVar12 = func_225(2098, iParam1, 0);
	iVar13 = func_225(2099, iParam1, 0);
	iVar14 = func_225(2100, iParam1, 0);
	iVar15 = func_225(2101, iParam1, 0);
	fVar16 = func_1493(134, iParam1);
	fVar17 = func_1493(135, iParam1);
	fVar18 = func_1493(136, iParam1);
	bVar19 = func_1444(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		unk_0x5B5751111E879A6F(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_225(2102, iParam1, 0);
		if (iVar20 > 0)
		{
			func_1478(iParam0, iParam1, 0);
		}
	}
}

void func_1478(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_1492(iVar1);
		if (!bParam2)
		{
			fVar3 = func_1493(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_1491(iVar2, iParam1);
		}
		unk_0x69D0D9BA8F4533D8(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_1490(iVar4);
		iVar6 = func_1489(iVar5);
		iVar7 = func_1488(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				iVar10 = func_1485(iVar6, iParam1, -1);
				uVar11 = func_1493(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_1484(iVar6, iParam1);
				uVar11 = func_1491(iVar7, iParam1);
			}
			unk_0xE5E78CECD32206A8(iParam0, iVar5, iVar10, uVar11);
			iVar8 = func_1483(iVar5);
			iVar9 = func_1482(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_225(iVar8, iParam1, 0);
					iVar14 = func_225(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_1481(iVar8, iParam1);
					iVar14 = func_1481(iVar9, iParam1);
				}
				func_1480(iVar13, &uVar12, &uVar15);
				unk_0x522472ED486C5BFE(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_1479(&iParam0, iParam1, bParam2);
}

void func_1479(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_1493(157, iParam1);
	}
	else
	{
		fVar0 = func_1491(157, iParam1);
	}
	if (*iParam0 == unk_0x9B0761B4C3EB8BC7())
	{
	}
	unk_0x0C5A9B65B745AF78(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_1480(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_1481(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2551832[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0xB759F48CD364B4FE(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_1482(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2160;
		
		case 1:
			return 2161;
		
		case 5:
			return 2162;
		
		case 8:
			return 2163;
		
		case 10:
			return 2158;
		
		default:
	}
	return -1;
}

int func_1483(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 2153;
		
		case 1:
			return 2154;
		
		case 5:
			return 2155;
		
		case 8:
			return 2156;
		
		case 10:
			return 2157;
		
		default:
	}
	return -1;
}

int func_1484(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
		iVar2 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
		iVar2 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
		iVar2 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar1 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
		iVar2 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	if (!unk_0x4C0B69611CC6D65F(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_1485(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	iVar1 = func_1487(iParam0, iParam1);
	uVar2 = func_1486(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_1486(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	return iVar0;
}

int func_1487(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_94();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	return iVar0;
}

int func_1488(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return -1;
}

int func_1489(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return -1;
}

int func_1490(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return -1;
}

float func_1491(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587146[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0x04DDD94898CB0D4F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_1492(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return -1;
}

float func_1493(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587146[iParam0 /*3*/][func_226(iParam1)];
	if (unk_0xB734B6962B239811(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_1494(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar32;
	var uVar42;
	int iVar59;
	var uVar60;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	int iVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	var uVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	var uVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	var uVar131;
	int iVar132;
	int iVar133;
	int iVar134;
	int iVar135;
	int iVar136;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		if ((Global_1312829 != 4 && Global_1312829 != 5) && Global_1312829 != 7)
		{
			return 0;
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x9B0761B4C3EB8BC7() && Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_226 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_76644;
	}
	Global_76645++;
	iVar5 = unk_0x36FE6D3220816ADA(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
		if (!func_1626(iParam3))
		{
			Global_76645 = (Global_76645 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76645 > 1)
		{
		}
		else
		{
			func_1621(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0x6BD562D713BA3F70(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_76690 };
		}
		else
		{
			uVar15 = { func_1617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76647[1 /*14*/] = { func_1627(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x45F588C0DD767737(iParam0, func_1616(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_1616(iVar0)));
					}
					else
					{
						unk_0x45F588C0DD767737(iParam0, func_1616(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
					{
						func_1621(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76647[1 /*14*/] = { func_1627(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_76707 };
							}
							else
							{
								uVar32 = { func_1613(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76647[1 /*14*/] = { func_1627(iVar5, 14, uVar32[iVar1], -1) };
								func_1612(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
								if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
								{
									func_1621(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == -1)
								{
									unk_0x45F588C0DD767737(iParam0, func_1616(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_1616(iVar0)));
								}
								else
								{
									unk_0x45F588C0DD767737(iParam0, func_1616(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_1494(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
							{
								func_1621(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76647[1 /*14*/] = { func_1627(iVar5, iVar0, func_1608(iParam0, iVar0, -1), -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 3))
				{
					uVar42 = { func_1617(iVar5, 0) };
					func_1494(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x45F588C0DD767737(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_1607();
			if (iVar59 != -1)
			{
				func_1605(iVar59, 0, iParam10);
			}
			func_1601(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_1613(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76647[1 /*14*/] = { func_1627(iVar5, 14, uVar60[iVar1], -1) };
			func_1612(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
			if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
			{
				func_1621(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76645 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_1599(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1494(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_1612(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
		if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
		{
			func_1621(iVar5, iParam1, iParam2, 1);
		}
		if (Global_76647[1 /*14*/].f_12 == 0)
		{
			if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar70 = unk_0x21A69BE7599CD8B7(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1));
				if (unk_0x4D0432E34C5996D9(iVar70, joaat("HAIR_SHRINK"), 0))
				{
					func_1494(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76647[1 /*14*/].f_12 == 0)
		{
			func_1592(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1599(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1494(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1599(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1494(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_1616(iParam1);
		if (unk_0x3FB4D40A857CEA77(iParam0, iVar71) != Global_76647[1 /*14*/].f_3 || unk_0x79AFA009D186C4FB(iParam0, iVar71) != Global_76647[1 /*14*/].f_4)
		{
			iVar72 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
			iVar73 = unk_0x21A69BE7599CD8B7(iParam0, 7, unk_0x3FB4D40A857CEA77(iParam0, 7), unk_0x79AFA009D186C4FB(iParam0, 7));
			if (((iParam1 == 11 && unk_0x4D0432E34C5996D9(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x4D0432E34C5996D9(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x4D0432E34C5996D9(iVar73, -2095729091, 0)))
			{
				unk_0x45F588C0DD767737(iParam0, 7, 0, 0, unk_0xABAC9462CD887571(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x4D0432E34C5996D9(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x4D0432E34C5996D9(iVar72, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x45F588C0DD767737(iParam0, 8, 15, 0, unk_0xABAC9462CD887571(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x45F588C0DD767737(iParam0, 8, 2, 0, unk_0xABAC9462CD887571(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 0);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 1);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 2);
					unk_0xFCB85CEF67ADE0E2(iParam0, Global_1314053, Global_1314054, Global_1314055, 3);
				}
				iVar75 = func_1590(iParam0, 11);
				iVar76 = func_1590(iParam0, 8);
				iVar77 = func_1590(iParam0, 4);
				iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
				if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar74 = func_1589(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar74 = func_1589(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_ROBE"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("MORPH_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("GORKA_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_1590(iParam0, 8);
					}
				}
				iVar78 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
				if (unk_0x4D0432E34C5996D9(iVar78, joaat("GLOVES"), 0))
				{
					iVar79 = func_1588(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_1599(iParam0, iVar5, 11, iVar75, 3, 0);
					}
					switch (iVar78)
					{
						case joaat("DLC_MP_VAL_F_UPPR0_0"):
						case joaat("DLC_MP_VAL_F_UPPR0_1"):
						case joaat("DLC_MP_VAL_F_UPPR0_2"):
						case joaat("DLC_MP_VAL_F_UPPR0_3"):
						case joaat("DLC_MP_VAL_F_UPPR0_4"):
						case joaat("DLC_MP_VAL_F_UPPR0_5"):
							iVar79 = 11;
							iVar74 = func_1589(iVar5, iParam2, 11, 4);
							if (!unk_0x4D0432E34C5996D9(iVar74, joaat("DRESS"), 0))
							{
								iVar79 = -99;
							}
							break;
					}
					if (iVar79 != -99)
					{
						iVar80 = 0;
						while (iVar80 < 18)
						{
							if (func_1587(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x4D0432E34C5996D9(func_1589(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar75 = func_1590(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_1589(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0))
					{
						iVar81 = func_1585(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
						if (iVar81 != -99)
						{
							func_1494(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_1584(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_1589(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_1589(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_1584(iVar5, iVar75, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && (unk_0x4D0432E34C5996D9(iVar74, joaat("VEST"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && ((((((((unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_5"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_11"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -872449705, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("APART_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar82 = func_1583(iParam0, iParam2);
							iVar83 = func_1585(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
							if (iVar83 != -99)
							{
								func_1494(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								func_1494(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar84 = func_1581(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_1627(iVar5, 11, iVar84, -1) };
									iVar83 = func_1585(iVar5, iVar84, iParam2, Global_76647[1 /*14*/].f_4);
									iVar85 = func_1589(iVar5, iParam2, 11, 3);
									if ((iVar83 == -99 || unk_0x4D0432E34C5996D9(iVar85, joaat("BIKER_VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar85, 1170568373, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_1589(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_1494(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76647[1 /*14*/] = { func_1627(iVar5, 11, iVar75, -1) };
						iVar86 = Global_76647[1 /*14*/].f_3;
						Global_76647[1 /*14*/] = { func_1627(iVar5, 11, iParam2, -1) };
						iVar87 = Global_76647[1 /*14*/].f_3;
						if (iVar86 != iVar87)
						{
							iVar89 = func_1583(iParam0, iParam2);
							Global_76647[1 /*14*/] = { func_1627(iVar5, 8, iVar76, -1) };
							iVar88 = Global_76647[1 /*14*/].f_4;
							iVar90 = func_1580(iVar5, iVar76, iVar88);
							if (iVar89 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								iVar91 = iVar89;
							}
							else if (iVar90 == -99)
							{
								iVar91 = iVar76;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar92 = func_1589(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_1579(iVar92) == 6) || unk_0x4D0432E34C5996D9(iVar92, joaat("BIKER_VEST"), 0))
									{
										iVar90 = func_1581(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_1627(iVar5, 11, iVar90, -1) };
										iVar91 = func_1585(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar76 == 32 || iVar76 == 33) || iVar76 == 119))
								{
									if (!unk_0x4D0432E34C5996D9(func_1589(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar90 = func_1581(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_1627(iVar5, 11, iVar90, -1) };
										iVar91 = func_1585(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								iVar93 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar93 = func_1589(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar93 = func_1589(iVar5, iVar76, 8, 4);
								}
								if (unk_0x4D0432E34C5996D9(iVar93, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar90 = func_1581(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_1627(iVar5, 11, iVar90, -1) };
									iVar91 = func_1585(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar91 = func_1585(iVar5, iVar90, iParam2, iVar88);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_1589(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1578(iVar5, func_1590(iParam0, 4), iVar90))
										{
											iVar91 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_1589(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1578(iVar5, func_1590(iParam0, 4), iVar90))
										{
											iVar91 = 48;
										}
									}
								}
							}
							if (iVar91 != -99)
							{
								func_1494(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar90 = func_1581(iVar5, 11, -1);
								Global_76647[1 /*14*/] = { func_1627(iVar5, 11, iVar90, -1) };
								iVar91 = func_1585(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								if (iVar91 == -99)
								{
									iVar91 = 240;
								}
								func_1494(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_1494(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1575(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x45F588C0DD767737(iParam0, 10, 0, 0, unk_0xABAC9462CD887571(iParam0, 10));
				}
			}
			func_1601(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1588(iVar5, func_1608(iParam0, 8, -1), iParam2, func_1608(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_225(2152, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_225(2159, iParam10, 0);
				}
				unk_0x777697644ED166F1(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar94 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar94 = func_1573(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar94 = func_1571(iParam2);
					}
					if (iVar94 != -99 && iParam2 != iVar94)
					{
						iParam2 = iVar94;
					}
				}
				func_1531(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar95 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar95, joaat("GLOVES"), 0))
			{
				iVar96 = func_1590(iParam0, 11);
				iVar97 = func_1590(iParam0, 4);
				iVar98 = func_1588(iVar5, iParam2, iVar96, iVar97);
				if (iVar98 == -99)
				{
					iVar98 = func_1599(iParam0, iVar5, 11, iVar96, 3, 0);
				}
				switch (iVar95)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar98 = 11;
						iVar99 = func_1589(iVar5, iParam2, 11, 4);
						if (!unk_0x4D0432E34C5996D9(iVar99, joaat("DRESS"), 0))
						{
							iVar98 = -99;
						}
						break;
				}
				if (iVar98 != -99)
				{
					iVar100 = 0;
					while (iVar100 < 18)
					{
						if (func_1587(iVar5, iVar98, iVar100) == iVar95)
						{
							iVar11 = iVar100;
							iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
			func_1601(iParam0, iParam1, iParam2, iParam6, 0);
			iVar101 = func_1590(iParam0, 11);
			if (func_1584(iVar5, iVar101, -1))
			{
				iVar102 = func_1580(iVar5, iParam2, Global_76647[1 /*14*/].f_4);
				func_1575(iVar5, iVar102);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1588(iVar5, iParam2, func_1590(iParam0, 11), func_1590(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar103 = func_1590(iParam0, 7);
				if (!func_1528(iVar5, iVar103, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x45F588C0DD767737(iParam0, func_1616(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar104 = func_225(2099, iParam10, 0);
				iVar105 = func_225(2100, iParam10, 0);
				iVar106 = func_225(2101, iParam10, 0);
				uVar107 = func_1493(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x5B5751111E879A6F(iParam0, 0, 0, 0, iVar104, iVar105, iVar106, 0f, uVar107, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x5B5751111E879A6F(iParam0, 21, 0, 0, iVar104, iVar105, iVar106, 0f, fVar107, 0f, false);
				}
				iVar108 = 0;
				while (iVar108 < 20)
				{
					unk_0x69D0D9BA8F4533D8(iParam0, iVar108, 0f);
					iVar108++;
				}
			}
			else
			{
				func_1477(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar109 = func_1590(iParam0, 11);
			iVar110 = func_1590(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_1589(iVar5, iVar109, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1578(iVar5, iParam2, func_1580(iVar5, iVar110, 0)))
					{
						func_1494(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_1589(iVar5, iVar109, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1578(iVar5, iParam2, func_1580(iVar5, iVar110, 0)))
					{
						func_1494(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_1627(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1588(iVar5, func_1590(iParam0, 8), func_1590(iParam0, 11), iParam2);
			}
			iVar111 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar111, joaat("GLOVES"), 0))
			{
				iVar112 = func_1588(iVar5, iVar110, iVar109, iParam2);
				if (iVar112 == -99)
				{
					iVar112 = func_1599(iParam0, iVar5, 11, iVar109, 3, 0);
				}
				switch (iVar111)
				{
					case joaat("DLC_MP_VAL_F_UPPR0_0"):
					case joaat("DLC_MP_VAL_F_UPPR0_1"):
					case joaat("DLC_MP_VAL_F_UPPR0_2"):
					case joaat("DLC_MP_VAL_F_UPPR0_3"):
					case joaat("DLC_MP_VAL_F_UPPR0_4"):
					case joaat("DLC_MP_VAL_F_UPPR0_5"):
						iVar112 = 11;
						iVar113 = func_1589(iVar5, iParam2, 11, 4);
						if (!unk_0x4D0432E34C5996D9(iVar113, joaat("DRESS"), 0))
						{
							iVar112 = -99;
						}
						break;
				}
				if (iVar112 != -99)
				{
					iVar114 = 0;
					while (iVar114 < 18)
					{
						if (func_1587(iVar5, iVar112, iVar114) == iVar111)
						{
							iVar11 = iVar114;
							iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
						}
						iVar114++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x45F588C0DD767737(iParam0, func_1616(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_1616(iParam1)));
		}
		else
		{
			unk_0x45F588C0DD767737(iParam0, func_1616(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1599(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1494(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_2621444)
							{
								case joaat("DLC_MP_VAL_F_UPPR0_0"):
								case joaat("DLC_MP_VAL_F_UPPR0_1"):
								case joaat("DLC_MP_VAL_F_UPPR0_2"):
								case joaat("DLC_MP_VAL_F_UPPR0_3"):
								case joaat("DLC_MP_VAL_F_UPPR0_4"):
								case joaat("DLC_MP_VAL_F_UPPR0_5"):
									iVar11 = -1;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != -99)
							{
								iVar6 = func_1588(iVar5, iVar3, func_1590(iParam0, 11), func_1590(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1599(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1494(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_1527(iParam0))
				{
					iVar115 = func_1525(iParam0, iVar5, iParam1, iParam2);
					if (iVar115 > 0)
					{
						iVar115 = (iVar115 + unk_0x79AFA009D186C4FB(iParam0, 9));
						if (!func_1519(iParam0, 9, iVar115))
						{
							func_1494(iParam0, 9, iVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1494(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
					if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_1494(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar116 = func_225(2041, -1, 0);
				if (unk_0x3FB4D40A857CEA77(iParam0, 5) != 0)
				{
					unk_0x45F588C0DD767737(iParam0, 5, func_1513(iParam0, iVar116), func_1512(iParam0, iVar116), func_1511(iParam0, iVar116));
				}
				if (iParam0 == unk_0x9B0761B4C3EB8BC7())
				{
					unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_1513(unk_0x9B0761B4C3EB8BC7(), iVar116), func_1512(unk_0x9B0761B4C3EB8BC7(), iVar116), 0);
					unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_1511(unk_0x9B0761B4C3EB8BC7(), iVar116));
					func_1510(unk_0x460153A63B9477BC(), iVar116);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x4D0432E34C5996D9(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_1494(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar117 = func_1608(iParam0, 4, -1);
					iVar118 = iParam2;
				}
				else
				{
					iVar117 = iParam2;
					iVar118 = func_1608(iParam0, 11, -1);
				}
				if (func_1509(iVar5, 11, iVar118, -1))
				{
					if (!func_1508(iVar5, 4, iVar117, -1))
					{
						if (func_1507(iVar5, 4, iVar117, &uVar119))
						{
							func_1494(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_1508(iVar5, 4, iVar117, -1))
				{
					if (func_1506(iVar5, 4, iVar117, &uVar119))
					{
						func_1494(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar120 = unk_0x3FB4D40A857CEA77(iParam0, 6);
				iVar121 = unk_0x79AFA009D186C4FB(iParam0, 6);
				iVar122 = unk_0x21A69BE7599CD8B7(iParam0, 6, iVar120, iVar121);
				iVar123 = unk_0x3FB4D40A857CEA77(iParam0, 4);
				iVar124 = unk_0x79AFA009D186C4FB(iParam0, 4);
				iVar125 = unk_0x21A69BE7599CD8B7(iParam0, 4, iVar123, iVar124);
				iVar126 = func_1590(iParam0, 4);
				iVar127 = func_1590(iParam0, 6);
				if (func_1505(iVar5, iVar122))
				{
					if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_1504(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0x164989BEE998606B(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_1501(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_1494(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_1501(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_1494(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_1500(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0x164989BEE998606B(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_1501(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_1494(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_1501(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_1494(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
				if (func_1505(iVar5, iVar125))
				{
					if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_1500(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0x164989BEE998606B(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_1501(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_1494(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_1501(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_1494(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_1504(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0x164989BEE998606B(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0x0CB8E5A136C709DC(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_1501(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_1494(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_1501(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_1494(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_1592(iParam0);
				iVar133 = unk_0x3FB4D40A857CEA77(iParam0, 1);
				iVar134 = unk_0x79AFA009D186C4FB(iParam0, 1);
				iVar135 = unk_0x21A69BE7599CD8B7(iParam0, 1, iVar133, iVar134);
				if (unk_0x4D0432E34C5996D9(iVar135, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_1599(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1494(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1599(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1494(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1495(iParam0, &uVar4))
		{
			func_1494(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1494(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_1494(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1494(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar136 = func_1587(iVar5, func_1608(iParam0, 3, -1), iVar11);
		if (iVar136 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_1501(iVar5, iVar136, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_1501(iVar5, iVar136, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_1494(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76645 = (Global_76645 - 1);
	return 1;
}

int func_1495(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_1608(unk_0x9B0761B4C3EB8BC7(), 2, -1);
	if (func_225(753, Global_76644, 0) != -99 && func_1497())
	{
		if (func_1496() == 4)
		{
			return 1;
		}
		if (func_225(753, Global_76644, 0) == 0 && func_225(754, Global_76644, 0) == 0)
		{
			if (func_1444(161, Global_76644))
			{
				if (func_225(2052, Global_76644, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_225(752, Global_76644, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_225(753, Global_76644, 0);
		iVar1 = func_225(754, Global_76644, 0);
		if (!func_1519(iParam0, iVar1, iVar0))
		{
			if (func_1444(161, Global_76644))
			{
				*uParam1 = func_225(2052, Global_76644, 0);
			}
			else
			{
				*uParam1 = func_225(752, Global_76644, 0);
			}
			func_1277(753, -99, Global_76644, 1, 0);
			func_1277(754, 2, Global_76644, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1496()
{
	return Global_1312829;
}

int func_1497()
{
	if (func_1499() && func_1498(0))
	{
		return 1;
	}
	return 0;
}

var func_1498(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_1499()
{
	return func_1498(func_94() + 1);
}

int func_1500(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1589(iParam0, iParam1, 6, 3);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, 1137160120, 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x4D0432E34C5996D9(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((unk_0x4D0432E34C5996D9(iParam2, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((unk_0x4D0432E34C5996D9(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1589(iParam0, iParam1, 6, 4);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, 1137160120, 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((unk_0x4D0432E34C5996D9(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_1501(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x21A524CB091C80DE(iParam3, 7, -1, 1, -1, -1);
		iVar0 = unk_0x6CEBE002E58DEE97(iParam1);
		if (iVar0 != -1)
		{
			return (func_1503(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x21A524CB091C80DE(iParam3, 7, -1, 0, -1, func_1616(iParam2));
		iVar1 = unk_0x96E2929292A4DB77(iParam1);
		if (iVar1 != -1)
		{
			return (func_1502(iParam0, func_1616(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_1502(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_1503(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_1504(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1589(iParam0, iParam1, 4, 3);
				iVar1 = func_1579(iVar0);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if (((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x4D0432E34C5996D9(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("SKINNY"), 0)) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0) && !unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case joaat("DLC_MP_VAL_M_LEGS1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_0"):
					case joaat("DLC_MP_BEACH_M_LOWR0_1"):
					case joaat("DLC_MP_BEACH_M_LOWR0_2"):
					case joaat("DLC_MP_BEACH_M_LOWR0_3"):
					case joaat("DLC_MP_BEACH_M_LOWR0_4"):