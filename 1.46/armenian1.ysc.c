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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	int iLocal_59 = 0;
	var uLocal_60 = 10;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	bool bLocal_101 = 0;
	bool bLocal_102 = 0;
	bool bLocal_103 = 0;
	bool bLocal_104 = 0;
	bool bLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	var uLocal_115 = 0;
	bool bLocal_116 = 0;
	bool bLocal_117 = 0;
	bool bLocal_118 = 0;
	bool bLocal_119 = 0;
	bool bLocal_120 = 0;
	bool bLocal_121 = 0;
	bool bLocal_122 = 0;
	bool bLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	float fLocal_126[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_127[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_128[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_129[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_130[117] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_131 = 0f;
	float fLocal_132 = 0f;
	float fLocal_133 = 0f;
	float fLocal_134 = 0f;
	float fLocal_135[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_136[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_137[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_138[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_139[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_140[38] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_141[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_142[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_143[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_144[15] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	float fLocal_149 = 0f;
	float fLocal_150 = 0f;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	float fLocal_153 = 0f;
	float fLocal_154 = 0f;
	float fLocal_155 = 0f;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	float fLocal_158 = 0f;
	float fLocal_159 = 0f;
	float fLocal_160 = 0f;
	float fLocal_161 = 0f;
	float fLocal_162 = 0f;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	int iLocal_166[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_167[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_168[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_169[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_170[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_171[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_172[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	vector3 vLocal_190[117] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_191[15] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_192[38] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_193 = { 0f, 0f, 0f };
	vector3 vLocal_194 = { 0f, 0f, 0f };
	vector3 vLocal_195 = { 0f, 0f, 0f };
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	vector3 vLocal_202 = { 0f, 0f, 0f };
	vector3 vLocal_203 = { 0f, 0f, 0f };
	vector3 vLocal_204 = { 0f, 0f, 0f };
	vector3 vLocal_205 = { 0f, 0f, 0f };
	char cLocal_206[64] = "";
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	int iLocal_215 = 0;
	int iLocal_216[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_217[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_218[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222[117] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_223[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_224[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_225[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_226[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	var uLocal_230 = 15;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	bool bLocal_246 = 0;
	bool bLocal_247 = 0;
	bool bLocal_248 = 0;
	bool bLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	bool bLocal_261 = 0;
	bool bLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	bool bLocal_267 = 0;
	bool bLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	bool bLocal_273 = 0;
	bool bLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	bool bLocal_279 = 0;
	int iLocal_280 = 0;
	bool bLocal_281 = 0;
	int iLocal_282 = 0;
	bool bLocal_283 = 0;
	bool bLocal_284 = 0;
	int iLocal_285 = 0;
	bool bLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	bool bLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	bool bLocal_294 = 0;
	bool bLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[80] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_301 = 0f;
	float fLocal_302 = 0f;
	float fLocal_303 = 0f;
	float fLocal_304 = 0f;
	float fLocal_305 = 0f;
	float fLocal_306 = 0f;
	float fLocal_307 = 0f;
	float fLocal_308 = 0f;
	float fLocal_309 = 0f;
	float fLocal_310 = 0f;
	float fLocal_311 = 0f;
	float fLocal_312 = 0f;
	float fLocal_313 = 0f;
	float fLocal_314 = 0f;
	float fLocal_315 = 0f;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	var uLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	var uLocal_385 = 10;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	vector3 vLocal_396 = { 0f, 0f, 0f };
	vector3 vLocal_397 = { 0f, 0f, 0f };
	vector3 vLocal_398 = { 0f, 0f, 0f };
	vector3 vLocal_399 = { 0f, 0f, 0f };
	vector3 vLocal_400 = { 0f, 0f, 0f };
	vector3 vLocal_401 = { 0f, 0f, 0f };
	vector3 vLocal_402 = { 0f, 0f, 0f };
	vector3 vLocal_403 = { 0f, 0f, 0f };
	vector3 vLocal_404 = { 0f, 0f, 0f };
	vector3 vLocal_405 = { 0f, 0f, 0f };
	vector3 vLocal_406 = { 0f, 0f, 0f };
	vector3 vLocal_407 = { 0f, 0f, 0f };
	vector3 vLocal_408 = { 0f, 0f, 0f };
	vector3 vLocal_409 = { 0f, 0f, 0f };
	vector3 vLocal_410 = { 0f, 0f, 0f };
	vector3 vLocal_411 = { 0f, 0f, 0f };
	vector3 vLocal_412 = { 0f, 0f, 0f };
	char* sLocal_413 = NULL;
	char* sLocal_414 = NULL;
	char* sLocal_415 = NULL;
	char* sLocal_416 = NULL;
	char* sLocal_417 = NULL;
	char* sLocal_418 = NULL;
	char* sLocal_419 = NULL;
	char* sLocal_420 = NULL;
	char* sLocal_421 = NULL;
	char* sLocal_422 = NULL;
	char* sLocal_423 = NULL;
	char* sLocal_424 = NULL;
	char* sLocal_425 = NULL;
	char* sLocal_426 = NULL;
	char* sLocal_427 = NULL;
	char* sLocal_428 = NULL;
	char* sLocal_429 = NULL;
	char* sLocal_430 = NULL;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438[4] = { 0, 0, 0, 0 };
	int iLocal_439[1] = { 0 };
	int iLocal_440[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445[2] = { 0, 0 };
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_450[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_451[2] = { 0, 0 };
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	var uLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461[2] = { 0, 0 };
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_466[2] = { 0, 0 };
	int iLocal_467[2] = { 0, 0 };
	int iLocal_468 = 0;
	int iLocal_469[2] = { 0, 0 };
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	struct<5> Local_505 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_506 = { 0f, 0f, 0f };
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	struct<2> Local_509 = { 0, 0 } ;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	struct<5> Local_513[4];
	struct<5> Local_514[2];
	int iLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	struct<7> Local_520[6];
	vector3 vLocal_521 = { 0f, 0f, 0f };
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	struct<5> Local_524[2];
	struct<7> Local_525[2];
	struct<2> Local_526 = { 0, 0 } ;
	struct<14> Local_527 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 3;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 4;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 4;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 4;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 4;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 4;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 4;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 4;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	char* sLocal_587 = NULL;
	struct<10> Local_588[16];
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = -1;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 1000;
	var uLocal_603 = 1000;
	var uLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_58 = UI::_0x4A9923385BDB9DAD();
	iLocal_59 = UI::_GET_BLIP_INFO_ID_ITERATOR();
	bLocal_95 = true;
	bLocal_102 = true;
	bLocal_124 = true;
	fLocal_145 = 120f;
	fLocal_146 = 0f;
	fLocal_148 = 1f;
	fLocal_149 = 0f;
	fLocal_150 = 1f;
	fLocal_151 = 30f;
	fLocal_153 = 1f;
	fLocal_154 = 5f;
	fLocal_155 = 1f;
	fLocal_156 = 1f;
	fLocal_157 = 100f;
	fLocal_158 = 100f;
	fLocal_159 = 0f;
	fLocal_160 = 7000f;
	fLocal_161 = 0f;
	fLocal_162 = 0f;
	fLocal_163 = 0.3f;
	fLocal_164 = 0.5f;
	fLocal_165 = 50f;
	iLocal_176 = -1;
	iLocal_184 = -1;
	iLocal_185 = -1;
	bLocal_261 = true;
	bLocal_262 = true;
	bLocal_284 = true;
	fLocal_301 = 0f;
	fLocal_302 = 0f;
	fLocal_303 = 0f;
	fLocal_304 = 123.744f;
	fLocal_305 = -77.7f;
	fLocal_306 = -87.9f;
	fLocal_307 = 322.2873f;
	fLocal_308 = 316.722f;
	fLocal_309 = 251.8757f;
	fLocal_310 = 0.4923f;
	fLocal_311 = 0f;
	fLocal_312 = 17.3f;
	fLocal_313 = -160.9f;
	fLocal_314 = 153.3213f;
	fLocal_315 = 159.5713f;
	iLocal_332 = -1;
	iLocal_333 = -1;
	iLocal_350 = -1;
	iLocal_351 = -1;
	iLocal_352 = -1;
	iLocal_353 = -1;
	iLocal_354 = -1;
	iLocal_383 = -1;
	vLocal_396 = { -31.17f, -1090.754f, 25.4344f };
	vLocal_397 = { 0f, 0f, 0f };
	vLocal_398 = { -25.4559f, -1426.998f, 29.656f };
	vLocal_399 = { -56.8445f, -1107.244f, 24.4344f };
	vLocal_400 = { -33.6656f, -1092.602f, 30.4344f };
	vLocal_401 = { -16.1017f, -1079.592f, 25.6721f };
	vLocal_402 = { -40.54f, -1096.27f, 25.43f };
	vLocal_403 = { -42f, -1095.5f, 25.43f };
	vLocal_404 = { -1899.216f, -593.5246f, 10.8973f };
	vLocal_405 = { -1899.791f, -594.6526f, 10.8853f };
	vLocal_406 = { -1883.565f, -575.7982f, 10.7861f };
	vLocal_407 = { -24.9598f, -1437.647f, 29.6552f };
	vLocal_408 = { -42.95f, -1097.3f, 25.41f };
	vLocal_409 = { -43.98f, -1095.47f, 25.41f };
	vLocal_410 = { -29.9308f, -1089.822f, 25.4221f };
	vLocal_411 = { -34.2931f, -1089.394f, 25.4222f };
	vLocal_412 = { -1663.97f, -1126.7f, 30.7f };
	sLocal_413 = "mattarmenian";
	sLocal_414 = "armenian_1_int";
	sLocal_415 = "armenian_1_mcs_1";
	sLocal_416 = "arm_1_mcs_2_concat";
	sLocal_417 = "missarmenian1walktocar";
	sLocal_418 = "missarmenian1@dealership";
	sLocal_419 = "missarmenian1banter";
	sLocal_420 = "missarmenian1movieextras";
	sLocal_421 = "missarmenian1ig_13";
	sLocal_422 = "missarmenian1leadinout";
	sLocal_423 = "missarmenian1leadinoutarmenian_1_mcs_1_leadinout";
	sLocal_424 = "arm1_01";
	sLocal_425 = "arm1_05";
	sLocal_426 = "missarmenian1driving_taunts@lamar_1";
	sLocal_427 = "missarmenian1driving_taunts@lamar_2";
	sLocal_428 = "missarmenian1driving_taunts@franklin";
	sLocal_429 = "missarmenian1leadinoutarm_1_ig_14_leadinout";
	sLocal_430 = "MISSFINALE_C2IG_5";
	iLocal_482 = joaat("ninef2");
	iLocal_483 = joaat("rapidgt2");
	iLocal_484 = joaat("manana");
	iLocal_485 = joaat("p_sec_gate_01_s");
	iLocal_486 = joaat("p_sec_gate_01_s_col");
	iLocal_487 = joaat("s_m_m_armoured_01");
	iLocal_488 = joaat("s_m_m_security_01");
	iLocal_489 = joaat("a_m_y_beach_02");
	iLocal_490 = joaat("p_cs_shirt_01_s");
	iLocal_491 = joaat("v_ilev_fa_warddoorl");
	iLocal_492 = joaat("v_ilev_fa_warddoorr");
	iLocal_493 = joaat("prop_ld_health_pack");
	iLocal_494 = joaat("jetmax");
	iLocal_495 = joaat("marquis");
	iLocal_496 = joaat("a_m_y_beach_01");
	iLocal_497 = joaat("prop_phone_ing");
	iLocal_498 = joaat("prop_ld_ferris_wheel");
	iLocal_499 = joaat("prop_ferris_car_01");
	iLocal_500 = joaat("a_f_y_beach_01");
	iLocal_501 = joaat("a_m_y_beach_01");
	iLocal_502 = joaat("a_f_y_fitness_02");
	iLocal_503 = joaat("a_m_y_beachvesp_01");
	iLocal_504 = joaat("a_f_y_hipster_02");
	iLocal_586 = 1;
	GAMEPLAY::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GAMEPLAY::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		func_905();
		iLocal_585 = 1;
		Global_88352 = 3;
		func_897();
	}
	func_883();
	TIME::SET_CLOCK_TIME(8, 0, 0);
	TIME::SET_CLOCK_DATE(6, 5, 2009);
	if (func_882())
	{
		iVar0 = func_881();
		if (Global_87504)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			GAMEPLAY::_0x7EC6F9A478A6A512();
			func_880(1, 0);
		}
		else if (iVar0 == 1)
		{
			func_880(4, 0);
		}
		else if (iVar0 == 2)
		{
			if (Global_87504)
			{
				func_880(5, 0);
			}
			else
			{
				func_880(6, 0);
			}
		}
		else if (iVar0 == 3)
		{
			if (Global_87504)
			{
				func_880(9, 0);
			}
			else
			{
				func_880(10, 0);
			}
		}
		else if (iVar0 > 3)
		{
			if (Global_87504)
			{
				func_880(11, 0);
			}
			else
			{
				func_880(11, 0);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		bLocal_288 = true;
	}
	else
	{
		func_838(0, "OPENING_CUTSCENE", 0, 0, 0, 1);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		UNK1::_0x208784099002BC30("M_FranklinAndLamar", 0);
		if (bLocal_288)
		{
			if (iLocal_585 == 1)
			{
				bLocal_288 = false;
			}
		}
		if (!func_837(138))
		{
			if (CAM::_0xEE778F8C7E1142E2(1) == 4 || CAM::_0xEE778F8C7E1142E2(0) == 4)
			{
				func_836(138, 1);
			}
		}
		if (iLocal_584 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_525[0 /*7*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[0 /*7*/], 0))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[1 /*7*/], 0))
					{
						func_823(4);
					}
					else
					{
						func_823(3);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_525[1 /*7*/]))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[1 /*7*/], 0))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[0 /*7*/], 0))
					{
						func_823(4);
					}
					else
					{
						func_823(3);
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(Local_525[iLocal_317 /*7*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
			{
				func_823(2);
			}
		}
		if (iLocal_584 > 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_525[iLocal_317 /*7*/]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
				{
					if (func_822(&(Local_525[iLocal_317 /*7*/])))
					{
						func_823(7);
					}
				}
			}
		}
		if (iLocal_584 < 11)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_434))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
				{
					if (iLocal_584 > 9)
					{
						if (func_822(&iLocal_434))
						{
							func_823(8);
						}
					}
				}
				else
				{
					func_823(6);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_505))
		{
			if (PED::IS_PED_INJURED(Local_505))
			{
				func_823(1);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(vLocal_506.x))
		{
			if (PED::IS_PED_INJURED(vLocal_506.x))
			{
				func_823(19);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_509))
		{
			if (PED::IS_PED_INJURED(Local_509))
			{
				func_823(20);
			}
		}
		if (iLocal_584 > 5)
		{
			func_821();
		}
		if (iLocal_584 >= 10)
		{
			func_802(&uLocal_539, 1, 1);
		}
		if (!iLocal_299)
		{
			if (iLocal_584 >= 6)
			{
				func_800(4, PLAYER::PLAYER_PED_ID());
				iLocal_299 = 1;
			}
		}
		switch (iLocal_584)
		{
			case 0:
				func_517();
				break;
			
			case 1:
				func_515();
				break;
			
			case 2:
				func_513();
				break;
			
			case 3:
			case 4:
				func_418();
				break;
			
			case 5:
				func_390();
				break;
			
			case 6:
				func_373();
				break;
			
			case 7:
				func_368();
				break;
			
			case 8:
				func_364();
				break;
			
			case 9:
				func_349();
				break;
			
			case 10:
				func_264();
				break;
			
			case 11:
				func_2();
				break;
			
			case 12:
				break;
			
			case 13:
				break;
			
			case 14:
				break;
			
			case 15:
				break;
			
			case 16:
				break;
			
			case 17:
				break;
			
			case 18:
				break;
			
			case 19:
				break;
		}
		func_1();
	}
}

void func_1()
{
	float fVar0;
	
	if (!Local_526.f_1)
	{
		if (iLocal_584 == 3)
		{
			if (bLocal_261)
			{
			}
			else if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_322, sLocal_413))
			{
				fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_322, sLocal_413);
				Local_526 = ((fLocal_301 / fVar0) * 99f);
				PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_526 / 100f), 1);
			}
		}
		else if (iLocal_584 == 6)
		{
			if (!bLocal_261)
			{
				if (!Local_526.f_1)
				{
					Local_526 = (Local_526 + (1f * SYSTEM::TIMESTEP()));
					if (Local_526 > 100f)
					{
						Local_526 = 100f;
					}
					PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_526 / 100f), 1);
				}
			}
		}
	}
}

void func_2()
{
	bool bVar0;
	vector3 vVar1;
	
	if (iLocal_585 == 4)
	{
		if (iLocal_316 != 99)
		{
			if (bLocal_288)
			{
				func_263(-13.9541f, -1446.656f, 30.5515f, 335.0142f, 0, 0);
				iLocal_316 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -13.9541f, -1446.656f, 30.5515f, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(-13.9541f, -1446.656f, 30.5515f);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_316 = 99;
			}
		}
		else if (func_258(-17.8292f, -1458.012f, 29.4598f, 0, 0) && func_188(vLocal_407, fLocal_310, 0))
		{
			func_185(0, -1, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_434, -1);
				if (!PED::IS_PED_INJURED(Local_505))
				{
					PED::SET_PED_INTO_VEHICLE(Local_505, iLocal_434, 0);
				}
			}
			iLocal_585 = 0;
		}
	}
	if (iLocal_585 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_416, 8);
		STREAMING::REQUEST_MODEL(iLocal_490);
		STREAMING::REQUEST_MODEL(iLocal_491);
		STREAMING::REQUEST_MODEL(iLocal_492);
		STREAMING::REQUEST_MODEL(iLocal_493);
		func_99(sLocal_416);
		if (((((STREAMING::HAS_MODEL_LOADED(iLocal_490) && STREAMING::HAS_MODEL_LOADED(iLocal_491)) && STREAMING::HAS_MODEL_LOADED(iLocal_492)) && STREAMING::HAS_MODEL_LOADED(iLocal_493)) && SYSTEM::TIMERA() > 1000) && (!func_98() || func_97()))
		{
			bVar0 = false;
			if (GAMEPLAY::IS_PC_VERSION())
			{
				bVar0 = func_96();
			}
			else
			{
				bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
			}
			if (bVar0)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GO_HOME"))
				{
					AUDIO::STOP_AUDIO_SCENE("ARM_1_GO_HOME");
				}
				iLocal_459 = OBJECT::CREATE_OBJECT(iLocal_490, -11.7f, -1439.255f, 30.099f, 1, true, 0);
				iLocal_460 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_493, -17.92f, -1436.34f, 30.2033f, 1, true, 0);
				ENTITY::SET_ENTITY_HEADING(iLocal_460, -158.75f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_460, true);
				iLocal_461[0] = OBJECT::CREATE_OBJECT(iLocal_491, -12.7f, -1439.255f, 20.099f, 1, true, 0);
				iLocal_461[1] = OBJECT::CREATE_OBJECT(iLocal_492, -10.7f, -1439.255f, 20.099f, 1, true, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_490);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_493);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_491);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_492);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_459, "Franklins_shirt", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_461[0], "Closet_Door_L", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_461[1], "Closet_Door_R", 0, 0, 0);
				ENTITY::CREATE_MODEL_HIDE(-18.3539f, -1438.784f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), 0);
				ENTITY::CREATE_MODEL_HIDE(-18.3594f, -1438.133f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), 0);
				func_71(48, 0);
				func_71(47, 0);
				OBJECT::_DOOR_CONTROL(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, 1, 0f, 0f, -1f);
				func_69();
				func_60(1, 1, 1, 0, 0);
				UNK1::_0x293220DA1B46CEBC(5f, 0f, 3);
				CUTSCENE::START_CUTSCENE(8);
				UNK1::_0x48621C9FCA3EBD28(4);
				if (!func_59(0))
				{
					Global_88352 = 1;
				}
				iLocal_316 = 0;
				iLocal_255 = 0;
				iLocal_585 = 1;
			}
		}
	}
	if (iLocal_585 == 1)
	{
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_255 = 1;
			iLocal_585 = 3;
		}
		if (iLocal_471 == 0)
		{
			iLocal_471 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-14.6461f, -1437.332f, 31.116f, "v_franklins");
		}
		else if (!INTERIOR::IS_INTERIOR_READY(iLocal_471))
		{
			INTERIOR::_LOAD_INTERIOR(iLocal_471);
		}
		vVar1 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_459))
		{
			STREAMING::REQUEST_MODEL(iLocal_490);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_490))
			{
				iLocal_459 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_490, -19.126f, -1438.791f, 31.6833f, 1, true, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_459, -3.744568f, -0.022376f, 14.53727f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_459, true);
				ENTITY::SET_ENTITY_VISIBLE(iLocal_459, false, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_490);
			}
		}
		switch (iLocal_316)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					UI::CLEAR_PRINTS();
					UI::CLEAR_HELP(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_434, -25.169f, -1427.966f, 29.6567f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_434, 0.9548f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_434, false, 0, 0);
						VEHICLE::SET_VEHICLE_FIXED(iLocal_434);
					}
					func_57(&Local_505, 1);
					GAMEPLAY::CLEAR_AREA(-17.8292f, -1458.012f, 29.4598f, 100f, 1, 0, 0, false);
					func_56();
					iLocal_316++;
				}
				break;
			
			case 1:
				UI::HIDE_HUD_COMPONENT_THIS_FRAME(2);
				if (CUTSCENE::GET_CUTSCENE_TIME() > 21500)
				{
					func_55("AR1_BARBERS", 7000);
					iLocal_316++;
				}
				break;
			
			case 2:
				if (CUTSCENE::GET_CUTSCENE_TIME() > 26700)
				{
					if (func_54(0))
					{
						func_51(0, 0, 1, 0, 0);
					}
					func_50(19, 1);
					func_50(20, 1);
					func_50(21, 1);
					func_50(22, 1);
					func_50(23, 1);
					func_50(24, 1);
					func_50(25, 1);
					SYSTEM::SETTIMERA(0);
					SYSTEM::SETTIMERB(0);
					iLocal_316++;
				}
				break;
			
			case 3:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((vVar1.z - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				if (SYSTEM::TIMERA() > 3000)
				{
					func_55("AR1_SAVE1", -1);
					UI::DISPLAY_RADAR(true);
					CUTSCENE::REGISTER_SYNCHRONISED_SCRIPT_SPEECH();
					if (!UI::DOES_BLIP_EXIST(iLocal_452))
					{
						iLocal_452 = func_48(-14.3803f, -1438.514f, 30.1015f, 0);
						UI::SET_BLIP_SPRITE(iLocal_452, 40);
						UI::SET_BLIP_FLASHES(iLocal_452, 1);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 4:
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((vVar1.z - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
				CUTSCENE::REGISTER_SYNCHRONISED_SCRIPT_SPEECH();
				if (SYSTEM::TIMERB() > 5000)
				{
					if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-14.8691f, -1441.159f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
					{
						OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.159f, 31.1932f, 1, 0f, 0);
					}
					UI::DISPLAY_RADAR(false);
					SYSTEM::SETTIMERB(0);
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 5:
				if (!iLocal_287)
				{
					if (func_47("AR1_SAVE1"))
					{
						if (SYSTEM::TIMERA() > 8750)
						{
							UI::CLEAR_HELP(0);
							iLocal_287 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 9500)
				{
					func_55("AR1_TVHELP", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 6:
				if (SYSTEM::TIMERB() > 5000)
				{
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 7:
				if (!iLocal_287)
				{
					if (func_47("AR1_TVHELP"))
					{
						if (SYSTEM::TIMERA() > 15000)
						{
							UI::CLEAR_HELP(0);
							iLocal_287 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 16000)
				{
					func_55("AR1_MEDIHELP", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 8:
				if (SYSTEM::TIMERB() > 5000)
				{
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 9:
				if (!iLocal_287)
				{
					if (func_47("AR1_MEDIHELP"))
					{
						if (SYSTEM::TIMERA() > 22500)
						{
							UI::CLEAR_HELP(0);
							iLocal_287 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 23500)
				{
					OBJECT::_DOOR_CONTROL(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, 0, 0f, 0f, 0f);
					func_55("AR1_SAVE2", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 10:
				if (SYSTEM::TIMERB() > 5000)
				{
					func_55("AR1_SAVE2B", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 11:
				if (SYSTEM::TIMERB() > 5000)
				{
					SYSTEM::SETTIMERB(0);
					iLocal_287 = 0;
					iLocal_316++;
				}
				break;
			
			case 12:
				if (!iLocal_287)
				{
					if (func_47("AR1_SAVE2B"))
					{
						if (SYSTEM::TIMERA() > 35000)
						{
							UI::CLEAR_HELP(0);
							iLocal_287 = 1;
						}
					}
				}
				if (SYSTEM::TIMERA() > 36000)
				{
					func_55("AR1_SAVE3", -1);
					SYSTEM::SETTIMERB(0);
					iLocal_316++;
				}
				break;
			
			case 13:
				if (SYSTEM::TIMERB() > 7000)
				{
					UI::CLEAR_HELP(0);
					iLocal_316++;
				}
				break;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_459))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_shirt", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_459, true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[0]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Closet_Door_L", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_461[0], true);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_461[1]))
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Closet_Door_R", 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_461[1], true);
			}
		}
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_459))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_459, true, 0);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_585 = 2;
		}
	}
	if (iLocal_585 == 2)
	{
		func_57(&Local_505, 1);
		UI::CLEAR_HELP(1);
		UNK1::_0x81CBAE94390F9F89();
		if (iLocal_255 && CAM::IS_SCREEN_FADED_OUT())
		{
			AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			func_46(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 1, 10000);
		}
		func_31();
		OBJECT::_DOOR_CONTROL(joaat("v_ilev_fa_roomdoor"), -15.989f, -1436.03f, 31.199f, 0, 0f, 0f, 0f);
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-14.8691f, -1441.159f, 31.1932f, 3f, joaat("v_ilev_fa_frontdoor"), 0))
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fa_frontdoor"), -14.8691f, -1441.159f, 31.1932f, 1, 0f, 0);
		}
		func_60(0, 1, 1, 0, 0);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		func_56();
		func_4(0);
	}
	if (iLocal_585 == 3)
	{
		func_3();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		CUTSCENE::STOP_CUTSCENE(0);
		iLocal_255 = 1;
		iLocal_585 = 1;
	}
}

void func_3()
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(800);
		}
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_4(bool bParam0)
{
	if (bParam0)
	{
		if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
		func_56();
	}
	func_14(5, 1);
	func_11(2, 1);
	PLAYER::SPECIAL_ABILITY_UNLOCK(func_9(1));
	func_31();
	func_8(6, 0, 1);
	func_5(0, 0);
	func_897();
}

void func_5(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_56183)
	{
		Global_56183 = iParam1;
	}
	if (bParam0)
	{
		if ((func_59(0) && Global_71451.f_1 == 1) && func_7(Global_71451))
		{
		}
		else
		{
			Global_56181 = 1;
		}
	}
	if (Global_106070.f_9057 || func_59(0))
	{
		iVar0 = func_6();
		iVar1 = Global_84079[iVar0 /*5*/];
		uVar2 = Global_71474.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_106070.f_9057)
			{
			}
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_84079[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (GAMEPLAY::IS_BIT_SET(Global_84079[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		GAMEPLAY::SET_BIT(&(Global_84079[iVar0 /*5*/].f_1), 4);
		GAMEPLAY::SET_BIT(&Global_71453, 1);
		Global_71469 = uVar2;
		Global_71470 = GAMEPLAY::GET_GAME_TIMER();
	}
}

int func_6()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_84079[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_7(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_8(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = GAMEPLAY::IS_BIT_SET(Global_106070.f_9057.f_99.f_219[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_9057.f_99.f_219[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_9057.f_99.f_219[iParam0]), iParam1);
	}
}

int func_9(int iParam0)
{
	if (func_10(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_10(int iParam0)
{
	return iParam0 < 3;
}

void func_11(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_13(iParam0, 0))
		{
			func_12(iParam0, 1, 0);
			func_12(iParam0, 2, 0);
			func_12(iParam0, 3, 0);
			func_12(iParam0, 4, 0);
			func_12(iParam0, 0, 1);
			Global_70024[iParam0] = 1;
		}
	}
	else
	{
		func_12(iParam0, 0, 0);
	}
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_32605[iParam0]), iParam1);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_32605[iParam0]), iParam1);
	}
}

bool func_13(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return GAMEPLAY::IS_BIT_SET(Global_106070.f_32605[iParam0], iParam1);
}

void func_14(int iParam0, bool bParam1)
{
	if (iParam0 == 10)
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_7201[iParam0]), 0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_7201[iParam0]), 0);
	}
	GAMEPLAY::SET_SAVE_HOUSE(Global_88365[iParam0 /*10*/].f_8, bParam1, 1);
	func_20(iParam0);
	func_18(iParam0, 0);
	func_16(iParam0);
	func_15(iParam0);
}

void func_15(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::SET_BIT(&(Global_31904[(38 / 32)]), (38 % 32));
			func_71(38, 0);
			GAMEPLAY::SET_BIT(&(Global_31904[(41 / 32)]), (41 % 32));
			func_71(41, 0);
			GAMEPLAY::SET_BIT(&(Global_31904[(43 / 32)]), (43 % 32));
			func_71(43, 0);
			GAMEPLAY::SET_BIT(&(Global_31904[(42 / 32)]), (42 % 32));
			func_71(42, 0);
			GAMEPLAY::SET_BIT(&(Global_31904[(44 / 32)]), (44 % 32));
			func_71(44, 0);
			break;
		
		case 1:
			GAMEPLAY::SET_BIT(&(Global_31904[(51 / 32)]), (51 % 32));
			func_71(51, 0);
			break;
		
		case 2:
			GAMEPLAY::SET_BIT(&(Global_31904[(51 / 32)]), (51 % 32));
			func_71(51, 0);
			break;
		
		case 3:
			GAMEPLAY::SET_BIT(&(Global_31904[(53 / 32)]), (53 % 32));
			func_71(53, 0);
			break;
		
		case 4:
			GAMEPLAY::SET_BIT(&(Global_31904[(81 / 32)]), (81 % 32));
			func_71(81, 0);
			GAMEPLAY::SET_BIT(&(Global_31904[(82 / 32)]), (82 % 32));
			func_71(82, 0);
			break;
		
		case 5:
			GAMEPLAY::SET_BIT(&(Global_31904[(47 / 32)]), (47 % 32));
			func_71(47, 0);
			GAMEPLAY::SET_BIT(&(Global_31904[(50 / 32)]), (50 % 32));
			func_71(50, 0);
			break;
		
		case 6:
			GAMEPLAY::SET_BIT(&(Global_31904[(50 / 32)]), (50 % 32));
			func_71(50, 0);
			break;
	}
}

void func_16(int iParam0)
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
			if (func_17(1))
			{
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[1 /*10*/].f_8, true, 1);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[0 /*10*/].f_8, func_17(0), 0);
			}
			else if (func_17(0))
			{
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[0 /*10*/].f_8, true, 1);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[1 /*10*/].f_8, func_17(1), 0);
			}
			break;
		
		case 2:
		case 3:
		case 4:
			if (func_17(3))
			{
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[3 /*10*/].f_8, true, 1);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[4 /*10*/].f_8, func_17(4), 0);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[2 /*10*/].f_8, func_17(2), 0);
			}
			else if (func_17(4))
			{
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[4 /*10*/].f_8, true, 1);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[3 /*10*/].f_8, func_17(3), 0);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[2 /*10*/].f_8, func_17(2), 0);
			}
			else if (func_17(2))
			{
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[2 /*10*/].f_8, true, 1);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[3 /*10*/].f_8, func_17(3), 0);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[4 /*10*/].f_8, func_17(4), 0);
			}
			break;
		
		case 5:
		case 6:
			if (func_17(6))
			{
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[6 /*10*/].f_8, true, 1);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[5 /*10*/].f_8, func_17(5), 0);
			}
			else if (func_17(5))
			{
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[5 /*10*/].f_8, true, 1);
				GAMEPLAY::SET_SAVE_HOUSE(Global_88365[6 /*10*/].f_8, func_17(6), 0);
			}
			break;
	}
}

bool func_17(int iParam0)
{
	return GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iParam0], 0);
}

void func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar4;
	
	if (iParam0 == 10)
	{
		return;
	}
	bVar4 = GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iParam0], 0);
	if (iParam0 == 5 && GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[6], 0))
	{
		bVar4 = true;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		StringCopy(&Var3, "", 32);
		iVar2 = 10;
		while (func_19(iVar0, iVar1, &Var3, &iVar2))
		{
			if (iVar2 == iParam0)
			{
				if (bVar4)
				{
					if (bParam1)
					{
						unk_0xDA05194260CDCDF9(GAMEPLAY::GET_HASH_KEY(&Var3), 0);
					}
				}
				OBJECT::_0xF2E1A7133DD356A6(GAMEPLAY::GET_HASH_KEY(&Var3), bVar4);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_19(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*iParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*iParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*iParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*iParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*iParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*iParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_20(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_88365[iParam0 /*10*/].f_7 == 263)
	{
		return;
	}
	bVar0 = false;
	if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iParam0], 0))
	{
		if (Global_88365[iParam0 /*10*/].f_9 != func_27())
		{
			bVar0 = true;
		}
		else if (!func_25(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_17(6))
		{
			bVar0 = false;
		}
	}
	if (func_22(14))
	{
		bVar0 = false;
	}
	func_21(Global_88365[iParam0 /*10*/].f_7, bVar0, 0);
}

void func_21(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 18);
		if (Global_25831 == 1)
		{
			Global_25832 = 1;
		}
		Global_25831 = 1;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 0);
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 15);
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 0);
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 15);
	}
	if (!GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 0))
	{
		if (UI::DOES_BLIP_EXIST(Global_25834[iVar0 /*23*/].f_19))
		{
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			UI::REMOVE_BLIP(&(Global_25834[iVar0 /*23*/].f_19));
			GAMEPLAY::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

int func_22(int iParam0)
{
	if (Global_36117 == 15)
	{
		return 0;
	}
	if (func_23(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_23(int iParam0)
{
	return func_24(iParam0, Global_36117);
}

int func_24(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_93284.f_325 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_25(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_26(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_88365[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_93284.f_325 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_26(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_27()
{
	func_28();
	return Global_106070.f_2355.f_539.f_4301;
}

void func_28()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_9(Global_106070.f_2355.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_30(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_29(14) || Global_105021))
			{
				if (Global_106070.f_2355.f_539.f_4301 != iVar0 && func_10(Global_106070.f_2355.f_539.f_4301))
				{
					Global_106070.f_2355.f_539.f_4302 = Global_106070.f_2355.f_539.f_4301;
				}
				Global_106070.f_2355.f_539.f_4303 = iVar0;
				Global_106070.f_2355.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106070.f_2355.f_539.f_4301 != 145)
			{
				Global_106070.f_2355.f_539.f_4303 = Global_106070.f_2355.f_539.f_4301;
			}
			return;
		}
	}
	Global_106070.f_2355.f_539.f_4301 = 145;
}

bool func_29(int iParam0)
{
	return Global_36117 == iParam0;
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_9(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_31()
{
	func_32(0, 1, 0);
	func_32(1, 1, 0);
	func_32(2, 1, 0);
	func_32(3, 1, 0);
	func_32(4, 1, 0);
	func_32(5, 1, 0);
	func_32(6, 1, 0);
}

void func_32(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_45(iParam0, 0, 0))
		{
			if (iParam2 && Global_93284.f_18[iParam0])
			{
				if (func_44(iParam0) == 3 && !func_43(iParam0))
				{
					func_42(iParam0);
					func_41(iParam0, 0, 0);
					func_34(iParam0, 1, 0);
					func_33(iParam0);
				}
				else
				{
					func_41(iParam0, 1, 0);
					func_33(iParam0);
				}
			}
			else
			{
				func_41(iParam0, 0, 0);
				func_34(iParam0, 1, 0);
				func_33(iParam0);
			}
		}
		else
		{
			func_34(iParam0, 1, 0);
			func_33(iParam0);
		}
	}
	else if (func_45(iParam0, 0, 0))
	{
		func_34(iParam0, 0, 0);
		func_34(iParam0, 1, 0);
		func_33(iParam0);
	}
}

void func_33(int iParam0)
{
	Global_93284.f_172[iParam0] = 1;
	Global_93284.f_171 = 1;
}

void func_34(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			iVar0 = func_38(func_39(iParam0), -1, 0);
			GAMEPLAY::CLEAR_BIT(&iVar0, iParam1);
			func_35(func_39(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_35(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_36(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_36(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
		if (iVar1 > -1)
		{
			Global_2535232 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2535232 = 1;
		}
	}
	return iVar0;
}

int func_37()
{
	return Global_1312736;
}

int func_38(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2535519[iParam0 /*3*/][func_36(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_39(int iParam0)
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
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_40()
{
	return Global_25459;
}

void func_41(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		GAMEPLAY::SET_BIT(&(Global_93284.f_1336[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			iVar0 = func_38(func_39(iParam0), -1, 0);
			GAMEPLAY::SET_BIT(&iVar0, iParam1);
			func_35(func_39(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(Global_106070.f_668[iParam0]), iParam1);
	}
}

void func_42(int iParam0)
{
	if (Global_93284.f_18[iParam0])
	{
		func_41(iParam0, 10, 1);
		func_41(iParam0, 19, 1);
	}
}

bool func_43(int iParam0)
{
	return func_45(iParam0, 5, 1);
}

int func_44(int iParam0)
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
	}
	return 6;
}

int func_45(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return GAMEPLAY::IS_BIT_SET(Global_93284.f_1336[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			return GAMEPLAY::IS_BIT_SET(func_38(func_39(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_46(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_GAME_TIMER();
	while ((GAMEPLAY::GET_GAME_TIMER() - iVar0) < iParam3)
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, fParam1, iParam2);
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			iVar0 = 0;
		}
		SYSTEM::WAIT(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

int func_47(char* sParam0)
{
	UI::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return UI::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_48(vector3 vParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = UI::ADD_BLIP_FOR_COORD(vParam0);
	UI::SET_BLIP_SCALE(iVar0, func_49(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	UI::SET_BLIP_ROUTE(iVar0, iParam1);
	return iVar0;
}

float func_49(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_50(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == GAMEPLAY::IS_BIT_SET(Global_25834[iVar0 /*23*/].f_11, 7))
	{
		return;
	}
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 7);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_25834[iVar0 /*23*/].f_11), 7);
	}
	if (Global_25831 == 1)
	{
		Global_25832 = 1;
	}
	Global_25831 = 1;
	GAMEPLAY::SET_BIT(&(Global_25834[iVar0 /*23*/].f_11), 18);
}

void func_51(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam0 != -1)
	{
		if (!func_54(iParam0))
		{
			return;
		}
		Global_25519[iParam0 /*11*/].f_5 = 1;
		Global_25519[iParam0 /*11*/] = iParam1;
		Global_25519[iParam0 /*11*/].f_1 = iParam2;
		Global_25519[iParam0 /*11*/].f_9 = iParam4;
		Global_25519[iParam0 /*11*/].f_7 = iParam3;
		if (func_53(iParam0))
		{
			GRAPHICS::SET_TV_CHANNEL(-1);
			GRAPHICS::_0xF7B38B8305F1FE8B(iParam1, func_52(iParam2), iParam4);
			GRAPHICS::SET_TV_CHANNEL(iParam1);
		}
	}
	StringCopy(&Global_25597, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
}

char* func_52(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 1:
			sVar0 = "PL_STD_CNT";
			break;
		
		case 2:
			sVar0 = "PL_STD_WZL";
			break;
		
		case 3:
			sVar0 = "PL_LO_CNT";
			break;
		
		case 4:
			sVar0 = "PL_LO_WZL";
			break;
		
		case 7:
			sVar0 = "PL_SP_WORKOUT";
			break;
		
		case 8:
			sVar0 = "PL_SP_INV";
			break;
		
		case 9:
			sVar0 = "PL_SP_INV_EXP";
			break;
		
		case 5:
			sVar0 = "PL_LO_RS";
			break;
		
		case 6:
			sVar0 = "PL_LO_RS_CUTSCENE";
			break;
		
		case 10:
			sVar0 = "PL_SP_PLSH1_INTRO";
			break;
		
		case 11:
			sVar0 = "PL_LES1_FAME_OR_SHAME";
			break;
		
		case 12:
			sVar0 = "PL_STD_WZL_FOS_EP2";
			break;
		
		case 13:
			sVar0 = "PL_MP_WEAZEL";
			break;
		
		case 14:
			sVar0 = "PL_MP_CCTV";
			break;
	}
	return sVar0;
}

int func_53(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25519[iParam0 /*11*/].f_2)
		{
			return 1;
		}
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 != -1)
	{
		if (Global_25519[iParam0 /*11*/].f_6)
		{
			return 1;
		}
	}
	return 0;
}

void func_55(char* sParam0, int iParam1)
{
	UI::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	UI::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_56()
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_57(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(*iParam0))
			{
				if ((ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(*iParam0) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*iParam0)) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(*iParam0))
				{
					ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, false);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
			{
				ENTITY::SET_ENTITY_COLLISION(*iParam0, true, 0);
			}
			if (PED::IS_PED_GROUP_MEMBER(*iParam0, func_58()))
			{
				PED::REMOVE_PED_FROM_GROUP(*iParam0);
			}
			if (!bParam1)
			{
				PED::SET_PED_KEEP_TASK(*iParam0, 1);
			}
		}
		if (bParam1)
		{
			PED::DELETE_PED(iParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

var func_58()
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

bool func_59(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return GAMEPLAY::IS_BIT_SET(Global_71453, 0);
}

void func_60(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_68(1);
		UI::_0xA8FDB297A8D25FBA();
		UI::_0xFDB423997FA30340();
		if (Global_14513.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_67())
			{
				Global_14513.f_1 = 3;
			}
			Global_15822 = 5;
		}
		func_66(1, iParam3, iParam2, 0);
		Global_56187 = 1;
		Global_68497 = 1;
		Global_71203 = 1;
	}
	else
	{
		func_68(0);
		UI::_0xE1CD1E48E025E661();
		Global_56187 = 0;
		if (bParam1)
		{
			GRAPHICS::_0x03FC694AE06C5A20();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_66(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_64(PLAYER::PLAYER_ID())) && !func_62(PLAYER::PLAYER_ID(), 0)) && !func_61()) && !bParam4)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_64(PLAYER::PLAYER_ID())) && !bParam4)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_71203 = 0;
	}
}

bool func_61()
{
	return GAMEPLAY::IS_BIT_SET(Global_1589747[PLAYER::PLAYER_ID() /*790*/].f_39.f_18, 14);
}

bool func_62(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_63(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589747[iParam0 /*790*/].f_211 == 8;
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

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
	}
	if (Global_1312837[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_64(int iParam0)
{
	if (func_62(iParam0, 0))
	{
		return 1;
	}
	if (func_65())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_2423801[iParam0 /*413*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_65()
{
	return GAMEPLAY::IS_BIT_SET(Global_2359302, 3);
}

int func_66(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_67()
{
	if (Global_14513.f_1 == 1 || Global_14513.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_68(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&Global_2383, 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_2383, 13);
	}
}

void func_69()
{
	Global_14688 = 0;
	func_70();
}

void func_70()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15822 = 6;
	}
}

void func_71(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_71205)
		{
			iVar0 = Global_2437022.f_75[iParam0];
		}
		else
		{
			iVar0 = Global_106070.f_7233[iParam0];
		}
		if (iVar0 != iParam1 || GAMEPLAY::IS_BIT_SET(Global_31904[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				GAMEPLAY::SET_BIT(&(Global_31913[(iParam0 / 32)]), (iParam0 % 32));
				Global_32376[iParam0] = iParam1;
			}
			else if (Global_71205)
			{
				Global_2437022.f_75[iParam0] = iParam1;
			}
			else
			{
				Global_106070.f_7233[iParam0] = iParam1;
			}
			GAMEPLAY::SET_BIT(&(Global_31904[(iParam0 / 32)]), (iParam0 % 32));
			func_73(iParam0);
			if (GAMEPLAY::IS_BIT_SET(Global_31904[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_72(iParam0);
			}
		}
	}
}

void func_72(int iParam0)
{
	if (!GAMEPLAY::IS_BIT_SET(Global_32847.f_228[(iParam0 / 32)], (iParam0 % 23)))
	{
		GAMEPLAY::SET_BIT(&(Global_32847.f_228[(iParam0 / 32)]), (iParam0 % 23));
		Global_32847[Global_32847.f_227] = iParam0;
		Global_32847.f_227++;
	}
}

void func_73(int iParam0)
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_94())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { func_93(iParam0) };
	if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 2))
	{
		func_79(iParam0, &Var0);
	}
	if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), true);
	if ((GAMEPLAY::IS_BIT_SET(Global_31913[(iParam0 / 32)], (iParam0 % 32)) && Global_32376[iParam0] == 2) && fVar4 > 210f)
	{
		GAMEPLAY::CLEAR_BIT(&(Global_31913[(iParam0 / 32)]), (iParam0 % 32));
		Global_31922[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (GAMEPLAY::IS_BIT_SET(Global_32149[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_93284.f_325 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
					{
						Global_93284.f_325 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar5 = Global_93284.f_325;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					GAMEPLAY::SET_BIT(&(Global_31913[(iParam0 / 32)]), (iParam0 % 32));
					Global_32376[iParam0] = 3;
					GAMEPLAY::SET_BIT(&(Global_31904[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			GAMEPLAY::CLEAR_BIT(&(Global_32149[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31913[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_32376[iParam0];
	}
	else if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_106070.f_9057)
		{
			iVar3 = func_76(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_29(14))
		{
			iVar3 = 0;
		}
	}
	else if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_74())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_106070.f_7233[iParam0];
	}
	if (Global_32603[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31904[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!GAMEPLAY::IS_BIT_SET(Global_31913[(iParam0 / 32)], (iParam0 % 32)) || (Global_31922[iParam0] == 0 && Global_32376[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_31903)
		{
		}
		else
		{
			if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (GAMEPLAY::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || GAMEPLAY::ABSF(OBJECT::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_31904[(iParam0 / 32)]), (iParam0 % 32));
			Global_32603[iParam0] = iVar3;
		}
	}
	if (GAMEPLAY::IS_BIT_SET(Global_31913[(iParam0 / 32)], (iParam0 % 32)) && Global_32376[iParam0] != 2)
	{
		GAMEPLAY::SET_BIT(&(Global_31904[(iParam0 / 32)]), (iParam0 % 32));
		func_72(iParam0);
		if (Global_31922[iParam0] < 2)
		{
			Global_31922[iParam0]++;
		}
	}
}

int func_74()
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	switch (func_75())
	{
		case 0:
			if (Global_106070.f_9057.f_99.f_58[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_106070.f_9057.f_99.f_58[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_106070.f_9057.f_99.f_58[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_75()
{
	func_28();
	return Global_106070.f_2355.f_539.f_4301;
}

int func_76(int iParam0)
{
	int iVar0;
	
	iVar0 = func_75();
	if (func_77(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[5], 0) || GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[6], 0))
			{
				return 0;
			}
		}
		if (func_10(iVar0))
		{
			if (GAMEPLAY::IS_BIT_SET(Global_88354[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[0], 0))
				{
					return 0;
				}
			}
			if (func_10(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_88354[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[5], 0))
				{
					return 0;
				}
			}
			if (func_10(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_88354[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[6], 0))
				{
					return 0;
				}
			}
			if (func_10(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_88354[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[2], 0))
				{
					return 0;
				}
				if (func_10(iVar0))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_88354[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[1], 0))
				{
					return 0;
				}
				if (func_10(iVar0))
				{
					if (GAMEPLAY::IS_BIT_SET(Global_88354[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[3], 0))
				{
					return 0;
				}
			}
			if (func_10(iVar0))
			{
				if (GAMEPLAY::IS_BIT_SET(Global_88354[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_77(int iParam0)
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_78(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)));
				switch (iVar0)
				{
					case joaat("utillitruck"):
					case joaat("monster"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_78(int iParam0)
{
	return iParam0;
}

void func_79(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!GAMEPLAY::IS_BIT_SET(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_82();
	iVar1 = func_81(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_80(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_106070.f_7233[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_80(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_106070.f_7233[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 12f)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_80(iParam0))
			{
				if ((SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_106070.f_9057.f_99.f_58[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_106070.f_7233[iParam0] = 0;
							OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_106070.f_9057.f_99.f_58[4])
				{
					Global_106070.f_7233[iParam0] = 0;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else if (Global_106070.f_9057.f_99.f_58[4])
			{
				Global_106070.f_7233[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_106070.f_7233[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 18f)
					{
						Global_106070.f_7233[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_80(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_106070.f_7233[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), *uParam1) >= 40f)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_80(iParam0))
			{
				Global_106070.f_7233[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_80(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_106070.f_7233[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[70 /*34*/].f_6) == 0)
			{
				if (!func_80(iParam0))
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_80(iParam0))
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_80(iParam0) && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[26 /*34*/].f_6) == 0)
			{
				Global_106070.f_7233[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_80(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[43 /*34*/].f_6) == 0)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_80(iParam0))
			{
				Global_106070.f_7233[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_80(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[93 /*34*/].f_6) > 0)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_80(iParam0))
			{
				Global_106070.f_7233[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_80(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[10 /*34*/].f_6) == 0)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_80(iParam0))
			{
				if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[47 /*34*/].f_6) == 0)
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[70 /*34*/].f_6) == 0)
			{
				if (!func_80(iParam0))
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[48 /*34*/].f_6) == 0)
			{
				if (!func_80(iParam0))
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_84115[39 /*34*/].f_6) == 0)
			{
				if (!func_80(iParam0))
				{
					Global_106070.f_7233[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_80(iParam0))
			{
				Global_106070.f_7233[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_80(iParam0))
			{
				Global_106070.f_7233[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_80(iParam0))
			{
				Global_106070.f_7233[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_106070.f_7233[iParam0], 1, 1);
			}
			break;
	}
}

bool func_80(int iParam0)
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_93(iParam0) };
	iVar1 = OBJECT::_0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_81(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

var func_82()
{
	var uVar0;
	
	func_92(&uVar0, TIME::GET_CLOCK_SECONDS());
	func_91(&uVar0, TIME::GET_CLOCK_MINUTES());
	func_90(&uVar0, TIME::GET_CLOCK_HOURS());
	func_85(&uVar0, TIME::GET_CLOCK_DAY_OF_MONTH());
	func_84(&uVar0, TIME::GET_CLOCK_MONTH());
	func_83(&uVar0, TIME::GET_CLOCK_YEAR());
	return uVar0;
}

void func_83(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_84(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_85(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_89(*uParam0);
	iVar1 = func_87(*uParam0);
	if (iParam1 < 1 || iParam1 > func_86(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_86(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_87(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_88(GAMEPLAY::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_88(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_89(var uParam0)
{
	return uParam0 & 15;
}

void func_90(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_91(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_92(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

struct<7> func_93(int iParam0)
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = -2031139496;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = -281080954;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = -1069262641;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = -2143706301;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = -1403421822;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = -1950137670;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = -167996547;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = -1935818563;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = -566554453;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = -2123275866;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = -595055661;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = -265260897;
			break;
		
		case 33:
			Var0.f_3 = -1212951353;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = -1284867488;
			break;
		
		case 34:
			Var0.f_3 = -1212951353;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = -681886015;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = -2086556500;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = -1496386696;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2097039789;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -2127416656;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1986583853;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1978427516;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1700375831;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -272570634;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1040675994;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			GAMEPLAY::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = -1361617046;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = -1871080926;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = -1038180727;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = -459199009;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = -427498890;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = -288764223;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = -252283844;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = -826072862;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = -874851305;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = -1480820165;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = -1212951353;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = -1212951353;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = -126474752;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = -726993043;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = -565026078;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = -106474626;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = -1900237971;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = -2102079126;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = -1905793212;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = -1797032505;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = -62235167;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = -1727188163;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = -562748873;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = -1631467220;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = -1788473129;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = -1831288286;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = -1332101528;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = -1811763714;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = -1456048340;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = -89065356;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = -925491840;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = -1230442770;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = -961994186;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = -1772472848;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = -46374650;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = -358302761;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = -1237936041;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = -199126299;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = -897071863;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = -864465775;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = -208439480;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = -1001088805;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = -1563127729;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = -84399179;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = -461898059;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = -884051216;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = -1184516519;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = -1184516519;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = -966790948;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = -2068750132;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = -1716533184;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = -1965020851;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = -1743257725;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = -1743257725;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = -431382051;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = -293975210;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = -785215289;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = -222270721;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = -366143778;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = -588495243;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = -320891223;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = -1517722103;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = -1093199712;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = -444768985;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = -1417472813;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = -1376084479;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = -2119023917;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = -1488490473;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = -511187813;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = -248569395;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = -1437380438;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = -946336965;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = -1796714665;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = -1155247245;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = -1194470801;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = -2129698061;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = -2119023917;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = -795418380;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = -1502457334;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = -1994188940;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = -621770121;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = -1331552374;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = -293141277;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = -1863079210;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = -2018911784;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = -93934272;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = -2112857171;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = -722798986;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = -320140460;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = -920027322;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = -58432001;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = -2007378629;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = -1053755588;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = -53446139;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = -41786493;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = -2116116146;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = -74083138;
			GAMEPLAY::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = -1670085357;
			break;
	}
	return Var0;
}

int func_94()
{
	if ((func_40() == -1 || func_40() == 999) && !func_95() == 0)
	{
		return 1;
	}
	return 0;
}

int func_95()
{
	return Global_25460;
}

bool func_96()
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_71204)
	{
		if (!bVar0)
		{
			Global_71204 = 1;
		}
	}
	return bVar0;
}

int func_97()
{
	if (Global_16833 == 1)
	{
		return 1;
	}
	return 0;
}

int func_98()
{
	if (Global_15822 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_99(char* sParam0)
{
	int iVar0;
	
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	if (CUTSCENE::_0xB56BBBCC2955D9CB())
	{
		if (iVar0 == 846233810)
		{
			func_100("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 2, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 5, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Lamar", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 3, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 5, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 9, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 8, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Michael", 11, 0, 0, 0);
		}
		else if (iVar0 == 2029898270)
		{
			func_100("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_505))
			{
				CUTSCENE::_0x2A56C06EBEF2B0D9("Lamar", Local_505, 0);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Siemon", 3, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 3, 4, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 1, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 2, 2, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 4, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 6, 0, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 8, 3, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Jimmy", 10, 2, 0, 0);
		}
		else if (iVar0 == -2000131661)
		{
			func_100("Franklin", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (!PED::IS_PED_INJURED(Local_505))
			{
				CUTSCENE::_0x2A56C06EBEF2B0D9("Lamar", Local_505, 0);
			}
		}
	}
}

void func_100(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	struct<50> Var0;
	int iVar1;
	
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_101(iParam1, &Var0, iParam3);
	iVar1 = 0;
	while (iVar1 < 12)
	{
		CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, iVar1, Var0.f_13[iVar1], Var0[iVar1], iParam2);
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 9)
	{
		if (Var0.f_39[iVar1] == -1 || Var0.f_39[iVar1] == 255)
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, -1, 0, iParam2);
		}
		else
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, iVar1, Var0.f_39[iVar1], Var0.f_49[iVar1], iParam2);
		}
		iVar1++;
	}
}

void func_101(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	struct<14> Var3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var2 = 12;
	Var2.f_13 = 12;
	Var2.f_26 = 12;
	Var2.f_39 = 9;
	Var2.f_49 = 9;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	func_181(iParam0, &Var2, 0, -1);
	func_181(iParam0, uParam1, iParam2, -1);
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (uParam1->f_13[iVar0] != Var2.f_13[iVar0] || (*uParam1)[iVar0] != Var2[iVar0])
		{
			if (func_178(iVar4, func_180(iVar0), func_179(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_180(iVar0)), &iVar1))
			{
				Var3 = { func_112(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_110(iVar4, func_180(iVar0), func_179(iParam0, Var2.f_13[iVar0], Var2[iVar0], func_180(iVar0)), &iVar1))
			{
				Var3 = { func_112(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (uParam1->f_39[iVar0] != Var2.f_39[iVar0] || uParam1->f_49[iVar0] != Var2.f_49[iVar0])
		{
			if (func_178(iVar4, 14, func_103(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_112(iVar4, 2, uParam1->f_59, -1) };
				uParam1->f_13[2] = Var3.f_3;
				(*uParam1)[2] = Var3.f_4;
				iVar5 = 1;
			}
			if (func_110(iVar4, 14, func_103(iParam0, Var2.f_39[iVar0], Var2.f_49[iVar0], iVar0), &iVar1))
			{
				Var3 = { func_112(iVar4, 1, uParam1->f_62, -1) };
				uParam1->f_13[1] = Var3.f_3;
				(*uParam1)[1] = Var3.f_4;
				iVar6 = 1;
			}
		}
		iVar0++;
	}
	if (iVar6 || iVar5)
	{
		iVar7 = func_179(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
		iVar8 = func_179(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
		iVar9 = func_102(iVar4, iVar8, iVar7);
		if (iVar9 != -99)
		{
			Var3 = { func_112(iVar4, 0, iVar9, -1) };
			uParam1->f_13[0] = Var3.f_3;
			(*uParam1)[0] = Var3.f_4;
		}
	}
}

int func_102(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return -99;
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_109(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = DLC1::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_105(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_105(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_104(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_109(iParam3);
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
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
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		DLC1::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			DLC1::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_108(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		DLC1::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 0, -1, func_107(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_106(iParam0, func_107(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_106(int iParam0, int iParam1)
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

int func_107(int iParam0)
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

int func_108(int iParam0)
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

int func_109(int iParam0)
{
	switch (iParam0)
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
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_111(iParam0);
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

struct<14> func_112(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_177();
	if (iParam0 == joaat("player_zero"))
	{
		func_159(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_140(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_113(iParam1, iParam2);
	}
	return Global_71017[0 /*14*/];
}

void func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_139(iParam1);
			break;
		
		case 2:
			func_138(iParam1);
			break;
		
		case 3:
			func_135(iParam1);
			break;
		
		case 4:
			func_134(iParam1);
			break;
		
		case 6:
			func_133(iParam1);
			break;
		
		case 5:
			func_132(iParam1);
			break;
		
		case 8:
			func_131(iParam1);
			break;
		
		case 9:
			func_130(iParam1);
			break;
		
		case 10:
			func_129(iParam1);
			break;
		
		case 1:
			func_128(iParam1);
			break;
		
		case 7:
			func_127(iParam1);
			break;
		
		case 11:
			func_126(iParam1);
			break;
		
		case 12:
			func_125(iParam1);
			break;
		
		case 13:
			func_124(iParam1);
			break;
		
		case 14:
			func_114(iParam1);
			break;
	}
}

void func_114(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 155, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_115(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_122(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (GAMEPLAY::GET_HASH_KEY(sParam3) != GAMEPLAY::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 5);
		}
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 6);
		if (func_29(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (DLC1::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_120(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_120(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_120(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_120(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_120(Global_2621444, 1, 1, 1, -1))
			{
				GAMEPLAY::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_120(Global_2621444, 2, 1, 1, -1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 0);
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 5);
		if (func_119(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_119(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_119(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		GAMEPLAY::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_29(14))
			{
				return;
			}
			iVar0 = func_38(func_118(iParam1, uParam0->f_2), Global_71014, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_38(func_117(iParam1, uParam0->f_2), Global_71014, 0);
			if (GAMEPLAY::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_116(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_38(iVar1, Global_71014, 0);
				if (!GAMEPLAY::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					GAMEPLAY::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 1);
			GAMEPLAY::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_116(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
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
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_117(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
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
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_118(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
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
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
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
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 4:
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
		
		case 5:
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
		
		case 6:
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
		
		case 7:
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
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_119(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/][iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				GAMEPLAY::SET_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return GAMEPLAY::IS_BIT_SET(Global_106070.f_2355[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_120(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_71014;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_121(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_38(iVar2, iVar0, 0);
		return GAMEPLAY::IS_BIT_SET(iVar3, iVar1);
	}
	return 0;
}

bool func_121(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 9954;
	if ((bParam4 && Global_4265675) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
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
					case -1795774903:
					case -379046860:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1023;
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
		if (Global_4265675)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
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
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
				
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
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
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
				
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 9954;
}

int func_122(int iParam0)
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

void func_123(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_71017[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = DLC1::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			DLC1::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_115(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_115(&(Global_71017[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		DLC1::INIT_SHOP_PED_PROP(&Var6);
		iVar9 = 0;
		iVar10 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			DLC1::GET_SHOP_PED_QUERY_PROP(iVar8, &Var6);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_115(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, DLC1::_0x341DE7ED1D2A1BFD(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		DLC1::INIT_SHOP_PED_COMPONENT(&Var11);
		if (iParam3 != -1 && Global_71186)
		{
			DLC1::GET_SHOP_PED_COMPONENT(iParam3, &Var11);
			Global_2621444 = Var11.f_1;
			Global_2621445 = Var11;
			func_115(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, DLC1::_0x341DE7ED1D2A1BFD(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = DLC1::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, -1, 0, -1, func_107(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			DLC1::GET_SHOP_PED_QUERY_COMPONENT(iVar12, &Var11);
			if (!DLC1::_IS_DLC_DATA_EMPTY(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_115(&(Global_71017[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, DLC1::_0x341DE7ED1D2A1BFD(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_125(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_126(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_127(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_128(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_129(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_123(iVar7, iParam0, 33, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_130(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_123(iVar7, iParam0, 17, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_131(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 18, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_132(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_133(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_123(iVar7, iParam0, 84, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_123(iVar7, iParam0, 104, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_135(int iParam0)
{
	if (iParam0 < 136)
	{
		func_137(iParam0);
	}
	else
	{
		func_136(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_123(3, iParam0, 242, -1);
	}
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_138(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_139(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_71017[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_123(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_140(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_158(iParam1);
			break;
		
		case 2:
			func_157(iParam1);
			break;
		
		case 3:
			func_153(iParam1);
			break;
		
		case 4:
			func_152(iParam1);
			break;
		
		case 6:
			func_151(iParam1);
			break;
		
		case 5:
			func_150(iParam1);
			break;
		
		case 8:
			func_149(iParam1);
			break;
		
		case 9:
			func_148(iParam1);
			break;
		
		case 10:
			func_147(iParam1);
			break;
		
		case 1:
			func_146(iParam1);
			break;
		
		case 7:
			func_145(iParam1);
			break;
		
		case 11:
			func_144(iParam1);
			break;
		
		case 12:
			func_143(iParam1);
			break;
		
		case 13:
			func_142(iParam1);
			break;
		
		case 14:
			func_141(iParam1);
			break;
	}
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 175, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_142(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 9, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 47, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_144(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_123(iVar7, iParam0, 63, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_145(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_146(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_148(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 12, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_149(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 77, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_151(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_123(iVar7, iParam0, 134, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_123(iVar7, iParam0, 117, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_153(int iParam0)
{
	if (iParam0 < 107)
	{
		func_156(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_155(iParam0);
	}
	else
	{
		func_154(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_123(3, iParam0, 318, -1);
	}
}

void func_154(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_155(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_157(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 21, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_158(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_71017[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_123(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_176(iParam1);
			break;
		
		case 2:
			func_175(iParam1);
			break;
		
		case 3:
			func_172(iParam1);
			break;
		
		case 4:
			func_171(iParam1);
			break;
		
		case 6:
			func_170(iParam1);
			break;
		
		case 5:
			func_169(iParam1);
			break;
		
		case 8:
			func_168(iParam1);
			break;
		
		case 9:
			func_167(iParam1);
			break;
		
		case 10:
			func_166(iParam1);
			break;
		
		case 1:
			func_165(iParam1);
			break;
		
		case 7:
			func_164(iParam1);
			break;
		
		case 11:
			func_163(iParam1);
			break;
		
		case 12:
			func_162(iParam1);
			break;
		
		case 13:
			func_161(iParam1);
			break;
		
		case 14:
			func_160(iParam1);
			break;
	}
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_123(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_161(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 10, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_162(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 53, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_163(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 45, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_164(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 1, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 5, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_166(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_123(iVar7, iParam0, 48, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_167(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 20, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_168(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 24, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_169(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_123(iVar7, iParam0, 14, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_170(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_123(iVar7, iParam0, 99, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 113, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_172(int iParam0)
{
	if (iParam0 < 60)
	{
		func_174(iParam0);
	}
	else
	{
		func_173(iParam0);
	}
	if (Global_71017[0 /*14*/].f_2 == -1)
	{
		func_123(3, iParam0, 181, -1);
	}
}

void func_173(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_175(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_123(iVar7, iParam0, 6, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_176(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_71017[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_123(iVar7, iParam0, 7, -1);
			return;
			break;
	}
	func_115(&(Global_71017[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_177()
{
	Global_71017[0 /*14*/].f_1 = -1;
	Global_71017[0 /*14*/].f_2 = -1;
	Global_71017[0 /*14*/].f_5 = -1;
	Global_71017[0 /*14*/].f_3 = -1;
	Global_71017[0 /*14*/].f_4 = -1;
	Global_71017[0 /*14*/].f_7 = 0;
	Global_71017[0 /*14*/].f_6 = 0;
	Global_71017[0 /*14*/].f_13 = -1;
	Global_71017[0 /*14*/].f_12 = 0;
	Global_71017[0 /*14*/] = 0;
	StringCopy(&(Global_71017[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_178(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	*iParam3 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != -99)
	{
		iVar0 = func_111(iParam0);
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_106070.f_2355.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_179(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_107(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_180(int iParam0)
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

void func_181(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_30(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_184(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_183(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_10(iVar0))
		{
			uParam1->f_59 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_106070.f_2355.f_539[iVar0 /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_182(161, iParam3))
			{
				uParam1->f_59 = func_38(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_38(752, iParam3, 0);
			}
			uParam1->f_60 = func_38(753, iParam3, 0);
			uParam1->f_61 = func_38(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_182(161, iParam3))
			{
				uParam1->f_59 = func_38(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_38(752, iParam3, 0);
			}
		}
	}
}

int func_182(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2566070[iParam0 /*3*/][func_36(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_183(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != -1)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_184(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_30(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	if (func_882() && func_187())
	{
		while (Global_93227 != 6)
		{
			SYSTEM::WAIT(0);
		}
		GAMEPLAY::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			}
		}
		GRAPHICS::_STOP_ALL_SCREEN_EFFECTS();
		func_186(0);
	}
}

void func_186(int iParam0)
{
	if (iParam0 == 1)
	{
		GAMEPLAY::SET_BIT(&(Global_93232.f_20), 13);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&(Global_93232.f_20), 13);
	}
}

bool func_187()
{
	return GAMEPLAY::IS_BIT_SET(Global_93232.f_20, 13);
}

int func_188(vector3 vParam0, float fParam1, bool bParam2)
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
	{
		func_257(1, 1);
		if (func_255(1, 1))
		{
			if (bParam2)
			{
				return 1;
			}
			else if (func_189(&iLocal_434, 1, vParam0, fParam1, 1, 1))
			{
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_434, 0, 0);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_434, 1, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_434, 0, 0);
				VEHICLE::SET_VEHICLE_STRONG(iLocal_434, 1);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_434, 1);
				AUDIO::_0x6FDDAD856E36988A(iLocal_434, 1);
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

int func_189(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	struct<97> Var2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char cVar6[16];
	int iVar7;
	
	if (func_10(iParam1))
	{
		Var2.f_11 = 12;
		Var2.f_31 = 49;
		Var2.f_81 = 2;
		func_254(iParam1, &Var2, iParam5);
		if (Var2 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var2)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_106070.f_2355.f_539.f_4296) && Global_106070.f_9057.f_99.f_58[131])
		{
			Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/] = 0;
		}
		if (Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_5, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_7, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar3 = 0;
				while (iVar3 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar3 + 1, !Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_11[iVar3]);
					iVar3++;
				}
				if (Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_253(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_27));
					if (Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_84, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_85, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_93, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_94, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_249(iParam0, &(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_31), &(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_247(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_106070.f_2355.f_539.f_2387[0 /*295*/][iParam1 /*98*/]);
				}
				func_246(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/] == Var2)
		{
			STREAMING::REQUEST_MODEL(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/], vParam2, fParam3, 0, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_5, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_7, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar4 = 0;
				while (iVar4 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar4 + 1, !Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_11[iVar4]);
					iVar4++;
				}
				if (Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_24);
				}
				if (func_253(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_27));
					if (Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_84, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_85, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_93, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_94, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, GAMEPLAY::IS_BIT_SET(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_89);
				}
				if (Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_90);
						}
					}
				}
				func_249(iParam0, &(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_31), &(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_247(iParam0);
					}
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_106070.f_2355.f_539.f_2387[1 /*295*/][iParam1 /*98*/]);
				}
				func_246(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var2);
			if (STREAMING::HAS_MODEL_LOADED(Var2))
			{
				bVar5 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var2, vParam2, fParam3, 1, 1, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 1084227584);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::_0x428BACCDF5E26EAD(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar6, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var2.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var2.f_5, Var2.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var2.f_7, Var2.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var2.f_2);
				iVar7 = 0;
				while (iVar7 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar7 + 1, !Var2.f_11[iVar7]);
					iVar7++;
				}
				if (Var2.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var2.f_24);
				}
				if (func_253(&uVar1, &iVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, iVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var2.f_27));
					if (Var2.f_26 >= 0 && Var2.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var2.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var2.f_84, Var2.f_85, Var2.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var2.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var2.f_87);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var2.f_93, Var2.f_94, Var2.f_95);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, GAMEPLAY::IS_BIT_SET(Var2.f_92, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, GAMEPLAY::IS_BIT_SET(Var2.f_92, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, GAMEPLAY::IS_BIT_SET(Var2.f_92, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, GAMEPLAY::IS_BIT_SET(Var2.f_92, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var2.f_89 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var2.f_89);
				}
				if (Var2.f_90 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var2.f_90 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var2.f_90);
						}
					}
				}
				func_249(iParam0, &(Var2.f_31), &(Var2.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var2.f_96);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_106070.f_9057.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar6);
						bVar5 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						func_247(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_106070.f_2355.f_539.f_4296) && Global_106070.f_9057.f_99.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_106070.f_2355.f_539.f_4296 = 1;
					func_190(iParam1, iParam0, 0, 1);
				}
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var2);
				}
				if (bVar5)
				{
					func_246(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_190(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	
	if ((func_10(iParam0) && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
	{
		if (iParam2 > Global_106070.f_2355.f_539.f_2387)
		{
			return;
		}
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_225(*iParam1, iParam0);
		}
		if (VEHICLE::GET_NUM_MOD_KITS(*iParam1) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(*iParam1, 0);
		}
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*iParam1);
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*iParam1, &iVar1))
		{
			Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(iVar1);
		}
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*iParam1);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*iParam1);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 1);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 2);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 3);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 4);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 5);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 6);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 7);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 8);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 9);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 10);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 11);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*iParam1, 12);
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam1, 0))
		{
			iVar2 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*iParam1);
			if (iVar2 == 0 || iVar2 == 5)
			{
				Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			}
			else
			{
				Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
			}
		}
		else
		{
			Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		StringCopy(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam1), 16);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*iParam1, &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*iParam1, &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*iParam1, &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*iParam1);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*iParam1);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*iParam1);
		Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(*iParam1);
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam1, &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_95));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 2))
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 3))
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 0))
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(*iParam1, 1))
		{
			GAMEPLAY::SET_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		}
		Global_106070.f_2355.f_539.f_4297[iParam0] = 10;
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*iParam1) >= 0 && func_195(*iParam1, 0, &uVar0))
		{
			func_194(iParam1, &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_81));
			if (bParam3)
			{
				Global_106070.f_20090[iParam0 /*43*/].f_40 = 1;
				Global_106070.f_20090[iParam0 /*43*/] = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/];
				Global_106070.f_20090[iParam0 /*43*/].f_3 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_106070.f_20090[iParam0 /*43*/].f_4 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_106070.f_20090[iParam0 /*43*/].f_5 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_106070.f_20090[iParam0 /*43*/].f_6 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_106070.f_20090[iParam0 /*43*/].f_10 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_106070.f_20090[iParam0 /*43*/].f_16 = !Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_106070.f_20090[iParam0 /*43*/].f_19 = { Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_106070.f_20090[iParam0 /*43*/].f_23 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_106070.f_20090[iParam0 /*43*/].f_7 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_106070.f_20090[iParam0 /*43*/].f_8 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_106070.f_20090[iParam0 /*43*/].f_9 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_106070.f_20090[iParam0 /*43*/].f_11 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_106070.f_20090[iParam0 /*43*/].f_12 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_106070.f_20090[iParam0 /*43*/].f_13 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_106070.f_20090[iParam0 /*43*/].f_14 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_106070.f_20090[iParam0 /*43*/].f_15 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_106070.f_20090[iParam0 /*43*/].f_18 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_106070.f_20090[iParam0 /*43*/].f_17 = Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_106070.f_20090[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 11) + 1;
				Global_106070.f_20090[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 12) + 1;
				Global_106070.f_20090[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 4) + 1;
				Global_106070.f_20090[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 23) + 1;
				Global_106070.f_20090[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 14) + 1;
				Global_106070.f_20090[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 16) + 1;
				Global_106070.f_20090[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*iParam1, 15) + 1;
				Global_106070.f_20090[iParam0 /*43*/].f_32 = VEHICLE::_0xEEBFC7A7EFDC35B4(*iParam1);
				Global_106070.f_20090[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*iParam1);
				Global_106070.f_20090[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 0);
				Global_106070.f_20090[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 1);
				Global_106070.f_20090[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 2);
				Global_106070.f_20090[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*iParam1, 14, 3);
				Global_106070.f_20090[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*iParam1);
				Global_106070.f_20090[iParam0 /*43*/].f_31 = func_193(*iParam1);
				Global_106070.f_20090[iParam0 /*43*/].f_33[0] = AUDIO::_0xACB5DCCA1EC76840(*iParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*iParam1, &iVar4, &uVar5, &uVar6);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_191(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_7, iVar3, 1, &(Global_106070.f_20090[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*iParam1, &iVar4, &uVar5);
				if (iVar4 == 0)
				{
					iVar3 = 0;
				}
				else if (iVar4 == 1)
				{
					iVar3 = 1;
				}
				else if (iVar4 == 3)
				{
					iVar3 = 2;
				}
				else if (iVar4 == 4)
				{
					iVar3 = 3;
				}
				else if (iVar4 == 5)
				{
					iVar3 = 4;
				}
				else
				{
					iVar3 = -1;
				}
				func_191(Global_106070.f_2355.f_539.f_2387[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, iVar3, 0, &(Global_106070.f_20090[iParam0 /*43*/].f_2));
			}
		}
	}
}

int func_191(int iParam0, int iParam1, int iParam2, bool bParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (func_192(iVar0, &sVar2, &iVar1, &iVar3, &iVar4))
	{
		if ((iParam0 == iVar3 && (!bParam3 || iParam1 == iVar4)) && ((iParam2 == iVar1 || iParam2 == -1) || iParam2 == 255))
		{
			*uParam4 = iVar0;
			return 1;
		}
		iVar0++;
	}
	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

bool func_192(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

float func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = 100000;
	iVar1 = 65000;
	iVar2 = 50000;
	iVar3 = 20000;
	iVar4 = 20000;
	iVar5 = iVar4;
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 3)
		{
			iVar5 = iVar0;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 1)
		{
			iVar5 = iVar1;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 2)
		{
			iVar5 = iVar2;
		}
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(iParam0) == 0)
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				iVar5 = iVar3;
			}
			else
			{
				iVar5 = iVar4;
			}
		}
	}
	fVar6 = (SYSTEM::TO_FLOAT(iVar5) / SYSTEM::TO_FLOAT(iVar4));
	return fVar6;
}

int func_194(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_195(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	
	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if ((!func_223(iVar0, bParam1, uParam2) && !func_222(PLAYER::PLAYER_ID())) && !func_206(iParam0))
	{
		return 0;
	}
	if (func_222(PLAYER::PLAYER_ID()))
	{
		if (func_205(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	bVar1 = false;
	if (func_204(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0)))
	{
		bVar1 = true;
	}
	if (((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_202(iParam0)) && !bVar1) && !(func_201(ENTITY::GET_ENTITY_MODEL(iParam0)) && func_197(PLAYER::PLAYER_ID())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
			
			default:
				*uParam2 = 2;
				break;
		}
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((func_196(iParam0) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("sentinel2")) && ENTITY::GET_ENTITY_MODEL(iParam0) != joaat("issi2"))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	return 1;
}

int func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90688[iVar0]))
		{
			if (Global_90688[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_197(int iParam0)
{
	if (iParam0 != func_200())
	{
		if (func_199(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_198(Global_2423801[iParam0 /*413*/].f_309.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_198(int iParam0)
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
		case 79:
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
	}
	return -1;
}

int func_199(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437022.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_200()
{
	return -1;
}

int func_201(int iParam0)
{
	if (((iParam0 == 1945374990 || iParam0 == 1653666139) || iParam0 == 219613597) || iParam0 == -1988428699)
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return 1;
			break;
		
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_203(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_203(int iParam0)
{
	if (iParam0 != func_200())
	{
		if (func_199(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_198(Global_2423801[iParam0 /*413*/].f_309.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_204(int iParam0)
{
	if (iParam0 != func_200())
	{
		if (func_199(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_198(Global_2423801[iParam0 /*413*/].f_309.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	switch (iParam0)
	{
		case -2118308144:
		case 1489874736:
		case -1693015116:
		case -692292317:
		case -1435527158:
			return 1;
			break;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (func_221(PLAYER::PLAYER_ID()) || func_220(PLAYER::PLAYER_ID()))
	{
		if (func_207(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return 0;
	}
	if (func_210(iParam0, 0))
	{
		return 1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
	{
		if (DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle") == NETWORK::_NETWORK_GET_PLAYER_VEHICLE_NETWORK_ID(PLAYER::PLAYER_ID()))
		{
			if (func_208(iParam0))
			{
				return 1;
			}
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case 159274291:
				case 433954513:
				case 1483171323:
				case 886810209:
				case 1561920505:
				case -410205223:
				case 903794909:
				case -391595372:
				case 1254014755:
					return 1;
					break;
				}
			}
	}
	return 0;
}

int func_208(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	if (func_209(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return 1;
	}
	return 0;
}

int func_209(int iParam0)
{
	switch (iParam0)
	{
		case 562680400:
		case 1897744184:
		case -32236122:
		case 884483972:
		case -1210451983:
		case 1356124575:
		case -1924433270:
		case -1242608589:
		case -212993243:
		case 2044532910:
		case -638562243:
			return 1;
			break;
	}
	return 0;
}

int func_210(int iParam0, bool bParam1)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical"):
		case joaat("insurgent"):
			if (func_212(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
			{
				if (Global_2524719.f_290 == iParam0)
				{
					return 1;
				}
				else if (func_211(iParam0) != -1 && !bParam1)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Global_2437022.f_623[iVar0] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_212(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		if (func_219(iParam0, 0))
		{
			return 1;
		}
	}
	switch (iParam0)
	{
		case joaat("faction"):
		case joaat("buccaneer"):
		case joaat("chino"):
		case joaat("moonbeam"):
		case joaat("primo"):
		case joaat("voodoo2"):
			return func_218();
			break;
		
		case joaat("sabregt"):
			if (Global_262145.f_14092)
			{
				return func_217();
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
			if (Global_262145.f_14093)
			{
				return func_217();
			}
			break;
		
		case joaat("virgo3"):
			if (Global_262145.f_14091)
			{
				return func_217();
			}
			break;
		
		case joaat("minivan"):
			if (Global_262145.f_14094)
			{
				return func_217();
			}
			break;
		
		case joaat("slamvan"):
			if (Global_262145.f_14096)
			{
				return func_217();
			}
			break;
		
		case joaat("sultan"):
		case joaat("banshee"):
			return func_216();
			break;
		
		case joaat("comet2"):
			if (Global_262145.f_18538)
			{
				return func_215();
			}
			break;
		
		case joaat("diablous"):
			if (Global_262145.f_18540)
			{
				return func_215();
			}
			break;
		
		case joaat("fcr"):
			if (Global_262145.f_18544)
			{
				return func_215();
			}
			break;
		
		case joaat("elegy2"):
			if (Global_262145.f_18541)
			{
				return func_215();
			}
			break;
		
		case joaat("nero"):
			if (Global_262145.f_18548)
			{
				return func_215();
			}
			break;
		
		case joaat("italigtb"):
			if (Global_262145.f_18546)
			{
				return func_215();
			}
			break;
		
		case joaat("specter"):
			if (Global_262145.f_18551)
			{
				return func_215();
			}
			break;
		
		case joaat("technical"):
			if (Global_262145.f_20493)
			{
				return func_214();
			}
			break;
		
		case joaat("insurgent"):
			if (Global_262145.f_20494)
			{
				return func_214();
			}
			break;
		
		case joaat("ratloader"):
		case joaat("ratloader2"):
			return func_213();
			break;
		
		case joaat("glendale"):
			return func_213();
			break;
		
		case -2096690334:
			return func_213();
			break;
		
		case 931280609:
			return func_213();
			break;
		
		case joaat("gargoyle"):
			return func_213();
			break;
		
		case joaat("dominator"):
			return func_213();
			break;
		
		case joaat("dominator2"):
			return func_213();
			break;
		
		case 444994115:
			return func_213();
			break;
		
		case 1637620610:
			return func_213();
			break;
		
		case -755532233:
			return func_213();
			break;
		
		case -27326686:
			return func_213();
			break;
		
		case -1812949672:
			return func_213();
			break;
		
		case -1374500452:
			return func_213();
			break;
		
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_213();
			break;
	}
	return 0;
}

bool func_213()
{
	return DLC2::IS_DLC_PRESENT(1927191088);
}

bool func_214()
{
	return DLC2::IS_DLC_PRESENT(2067165443);
}

bool func_215()
{
	return DLC2::IS_DLC_PRESENT(-957277403);
}

bool func_216()
{
	return DLC2::IS_DLC_PRESENT(210122941);
}

bool func_217()
{
	return DLC2::IS_DLC_PRESENT(-1894522408);
}

bool func_218()
{
	return DLC2::IS_DLC_PRESENT(1630677557);
}

int func_219(int iParam0, int iParam1)
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
			if (!Global_262145.f_14092)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14093)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14091)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14094)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14096)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14095)
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
			if (Global_262145.f_18538)
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
			if (Global_262145.f_18540)
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
			if (Global_262145.f_18544)
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
			if (Global_262145.f_18541)
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
			if (Global_262145.f_18548)
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
			if (Global_262145.f_18546)
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
			if (Global_262145.f_18551)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case 1356124575:
			if (Global_262145.f_20493)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -1924433270:
			if (Global_262145.f_20494)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
	}
	return 0;
}

int func_220(int iParam0)
{
	if (iParam0 != func_200())
	{
		if (func_199(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_200())
			{
				return func_198(Global_2423801[iParam0 /*413*/].f_309.f_4) == 5;
			}
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	if (iParam0 != func_200())
	{
		if (func_199(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1 && Global_2423801[iParam0 /*413*/].f_309.f_7 != func_200())
			{
				return func_198(Global_2423801[iParam0 /*413*/].f_309.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	if (iParam0 != func_200())
	{
		if (func_199(iParam0, 1, 1))
		{
			if (Global_2423801[iParam0 /*413*/].f_309.f_4 != -1)
			{
				return func_198(Global_2423801[iParam0 /*413*/].f_309.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_223(int iParam0, bool bParam1, var uParam2)
{
	bool bVar0;
	
	if (!bParam1)
	{
		if ((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("pranger")) || iParam0 == joaat("sheriff2"))
		{
			*uParam2 = 1;
			return 0;
		}
	}
	if (((((((iParam0 == joaat("ambulance") || iParam0 == 1938952078) || iParam0 == joaat("taxi")) || iParam0 == joaat("lguard")) || iParam0 == joaat("ripley")) || iParam0 == joaat("dilettante2")) || iParam0 == joaat("airbus")) || iParam0 == joaat("airtug"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("burrito") || iParam0 == joaat("rumpo2")) || iParam0 == joaat("speedo")) || iParam0 == joaat("speedo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((iParam0 == joaat("scorcher") || iParam0 == joaat("bmx")) || iParam0 == joaat("cruiser")) || iParam0 == joaat("fixter"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (((((((((((((((((((iParam0 == joaat("caddy") || iParam0 == joaat("forklift")) || iParam0 == joaat("caddy2")) || iParam0 == joaat("crusader")) || iParam0 == joaat("tribike")) || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3")) || iParam0 == joaat("tractor")) || iParam0 == joaat("tractor2")) || iParam0 == joaat("mower")) || iParam0 == joaat("tornado4")) || iParam0 == joaat("docktug")) || iParam0 == joaat("stretch")) || iParam0 == joaat("bison2")) || iParam0 == joaat("bison3")) || iParam0 == joaat("benson")) || iParam0 == joaat("pounder")) || iParam0 == joaat("submersible")) || iParam0 == joaat("emperor3")) || iParam0 == joaat("dune2"))
	{
		*uParam2 = 2;
		return 0;
	}
	bVar0 = false;
	if (func_204(PLAYER::PLAYER_ID()) && (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)))
	{
		bVar0 = true;
	}
	if (((((((((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && iParam0 != joaat("blazer")) && iParam0 != joaat("blazer3")) && iParam0 != joaat("blazer4")) && iParam0 != joaat("blazer5")) && iParam0 != joaat("chimera")) && iParam0 != 1502869817) && iParam0 != -1881846085) && !bVar0)
	{
		*uParam2 = 2;
		return 0;
	}
	if (iParam0 == joaat("monster"))
	{
		*uParam2 = 2;
		return 0;
	}
	if ((iParam0 == joaat("insurgent") || iParam0 == joaat("technical")) || iParam0 == joaat("limo2"))
	{
		*uParam2 = 2;
		return 0;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_224(iParam0))
		{
			*uParam2 = 2;
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam0 == joaat("insurgent") || iParam0 == joaat("insurgent2"))
		{
			*uParam2 = 2;
		}
	}
	return 1;
}

int func_224(int iParam0)
{
	switch (iParam0)
	{
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("forklift"):
			return 1;
			break;
	}
	return 0;
}

void func_225(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_230(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106070.f_2355.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106070.f_32605.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106070.f_32605.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66)
		{
			if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
			{
				if (GAMEPLAY::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106070.f_32605.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106070.f_32605.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106070.f_32605.f_5590 = iParam1;
	Global_70929 = iParam0;
	Global_106070.f_32605.f_5588 = 1;
	func_226(iParam0, &(Global_106070.f_32605.f_5510));
}

void func_226(int iParam0, var uParam1)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_229(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_228(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 23);
						GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 12);
		}
		func_194(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				GAMEPLAY::SET_BIT(&(uParam1->f_77), func_227(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			GAMEPLAY::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_227(int iParam0)
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

int func_228(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case -998177792:
			return 1;
		
		default:
	}
	return 0;
}

void func_229(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_230(int iParam0)
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_245(iParam0, 0, 0)) || func_245(iParam0, 1, 0)) || func_245(iParam0, 2, 0)) || func_244(iParam0) != 145) || func_243(iParam0)) || func_242(iParam0)) || func_196(iParam0)) || func_241(iParam0)) || !func_231(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_242(iParam0))
		{
		}
		if (func_242(iParam0))
		{
		}
		if (func_245(iParam0, 0, 0))
		{
		}
		if (func_245(iParam0, 1, 0))
		{
		}
		if (func_245(iParam0, 2, 0))
		{
		}
		if (func_244(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_231(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_232(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case 1938952078:
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_232(int iParam0, bool bParam1)
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
		if (!func_240())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < DLC1::GET_NUM_DLC_VEHICLES())
		{
			if (DLC1::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (DLC1::_IS_DLC_DATA_EMPTY(Var1))
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
		if ((((!func_239() && !func_238()) && !func_237()) && !func_236()) && !func_240())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((GAMEPLAY::IS_DURANGO_VERSION() || GAMEPLAY::IS_PC_VERSION()) || GAMEPLAY::IS_ORBIS_VERSION())
		{
		}
		else if (!func_237())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_235(iParam0))
		{
			return 0;
		}
	}
	if (!func_233(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_233(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_234())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
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
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_234()
{
	if (GAMEPLAY::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2503689)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6488 && !Global_262145.f_12797) && iVar1 < Global_262145.f_12798)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14091 && iVar1 < Global_262145.f_14103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14092 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14093 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14094 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14102)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16718 && iVar1 < Global_262145.f_16682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16717 && iVar1 < Global_262145.f_16681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16716 && iVar1 < Global_262145.f_16680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16879 && iVar1 < Global_262145.f_16901)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16880 && iVar1 < Global_262145.f_16902)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16881 && iVar1 < Global_262145.f_16903)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18528 && iVar1 < Global_262145.f_18625)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18529 && iVar1 < Global_262145.f_18626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18530 && iVar1 < Global_262145.f_18627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18531 && iVar1 < Global_262145.f_18628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18532 && iVar1 < Global_262145.f_18629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1234311532)
	{
		if (!Global_262145.f_19608 && iVar1 < Global_262145.f_19604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1405937764)
	{
		if (!Global_262145.f_19609 && iVar1 < Global_262145.f_19605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 719660200)
	{
		if (!Global_262145.f_19610 && iVar1 < Global_262145.f_19606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -982130927)
	{
		if (!Global_262145.f_19611 && iVar1 < Global_262145.f_19607)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 917809321)
	{
		if (!Global_262145.f_20487 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 223240013)
	{
		if (!Global_262145.f_20488 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1504306544)
	{
		if (!Global_262145.f_20489 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1939284556)
	{
		if (!Global_262145.f_20490 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 159274291)
	{
		if (!Global_262145.f_20491 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 433954513)
	{
		if (!Global_262145.f_20492 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1763555241)
	{
		if (!Global_262145.f_21264 && iVar1 < Global_262145.f_21284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -749299473)
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -975345305)
	{
		if (!Global_262145.f_21267 && iVar1 < Global_262145.f_21287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1700874274)
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -392675425)
	{
		if (!Global_262145.f_21265 && iVar1 < Global_262145.f_21285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1043222410)
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1386191424)
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1565978651)
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1036591958)
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -32878452)
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -42959138)
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1984275979)
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1007528109)
	{
		if (!Global_262145.f_21266 && iVar1 < Global_262145.f_21286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1523619738)
	{
		if (!Global_262145.f_21268 && iVar1 < Global_262145.f_21288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1392481335)
	{
		if (!Global_262145.f_21269 && iVar1 < Global_262145.f_21289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -998177792)
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1242608589)
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1841130506)
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2049897956)
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1483171323)
	{
		if (!Global_262145.f_22225 && iVar1 < Global_262145.f_22253)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22226 && iVar1 < Global_262145.f_22254)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1693015116)
	{
		if (!Global_262145.f_22227 && iVar1 < Global_262145.f_22255)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -692292317)
	{
		if (!Global_262145.f_22228 && iVar1 < Global_262145.f_22256)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1435527158)
	{
		if (!Global_262145.f_22229 && iVar1 < Global_262145.f_22257)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1181327175)
	{
		if (!Global_262145.f_22230 && iVar1 < Global_262145.f_22258)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1489874736)
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -212993243)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 447548909)
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1561920505)
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1848994066)
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1104234922)
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1871995513)
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1352136073)
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -313185164)
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2079788230)
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 600450546)
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -410205223)
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 867799010)
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1529242755)
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 903794909)
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1532697517)
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 15219735)
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 661493923)
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 838982985)
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -391595372)
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -121446169)
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1909189272)
	{
		if (!Global_262145.f_23432 && iVar1 < Global_262145.f_23448)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1617472902)
	{
		if (!Global_262145.f_23433 && iVar1 < Global_262145.f_23449)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1267543371)
	{
		if (!Global_262145.f_23437 && iVar1 < Global_262145.f_23453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 931280609)
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1046206681)
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1259134696)
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1115909093)
	{
		if (!Global_262145.f_23431 && iVar1 < Global_262145.f_23447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1031562256)
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -376434238)
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -986944621)
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1134706562)
	{
		if (!Global_262145.f_23434 && iVar1 < Global_262145.f_23450)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -2120700196)
	{
		if (!Global_262145.f_23436 && iVar1 < Global_262145.f_23452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -214906006)
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -988501280)
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1254014755)
	{
		if (!Global_262145.f_23435 && iVar1 < Global_262145.f_23451)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -726768679)
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23522 && iVar1 < Global_262145.f_23509)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 345756458)
	{
		if (!Global_262145.f_23523 && iVar1 < Global_262145.f_23510)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1945374990)
	{
		if (!Global_262145.f_23528 && iVar1 < Global_262145.f_23515)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1653666139)
	{
		if (!Global_262145.f_23527 && iVar1 < Global_262145.f_23514)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 500482303)
	{
		if (!Global_262145.f_23525 && iVar1 < Global_262145.f_23512)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2044532910)
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -638562243)
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1692272545)
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2069146067)
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -420911112)
	{
		if (!Global_262145.f_23524 && iVar1 < Global_262145.f_23511)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 321186144)
	{
		if (!Global_262145.f_23526 && iVar1 < Global_262145.f_23513)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -54332285)
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -307958377)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == 1721676810)
	{
	}
	else if (iParam0 == -801550069)
	{
	}
	else if (iParam0 == 679453769)
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == 2139203625)
	{
	}
	else if (iParam0 == -1890996696)
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == -1146969353)
	{
	}
	else if (iParam0 == 1542143200)
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == 444994115)
	{
	}
	else if (iParam0 == 1637620610)
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == 540101442)
	{
	}
	else if (iParam0 == -1106120762)
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == -2096690334)
	{
	}
	else if (iParam0 == 1591739866)
	{
		if (!Global_262145.f_25628 && iVar1 < Global_262145.f_25630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1168952148)
	{
		if (!Global_262145.f_24683 && iVar1 < Global_262145.f_24676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1566607184)
	{
		if (!Global_262145.f_24684 && iVar1 < Global_262145.f_24677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -331467772)
	{
		if (!Global_262145.f_24685 && iVar1 < Global_262145.f_24678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1279262537)
	{
		if (!Global_262145.f_24686 && iVar1 < Global_262145.f_24679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -49115651)
	{
		if (!Global_262145.f_25629 && iVar1 < Global_262145.f_25631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1456744817)
	{
		if (!Global_262145.f_24687 && iVar1 < Global_262145.f_24680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -507495760)
	{
		if (!Global_262145.f_24688 && iVar1 < Global_262145.f_24681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -286046740)
	{
		if (!Global_262145.f_24689 && iVar1 < Global_262145.f_24682)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_236()
{
	return 0;
}

int func_237()
{
	return 1;
}

int func_238()
{
	return 1;
}

int func_239()
{
	if (DLC2::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_240()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				GAMEPLAY::SET_BIT(&iVar0, 2);
				GAMEPLAY::SET_BIT(&iVar0, 4);
				GAMEPLAY::SET_BIT(&iVar0, 6);
				GAMEPLAY::SET_BIT(&Global_25, 2);
				GAMEPLAY::SET_BIT(&Global_25, 4);
				GAMEPLAY::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = GAMEPLAY::GET_PROFILE_SETTING(866);
					GAMEPLAY::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_144765 == 2)
	{
		return 1;
	}
	else if (Global_144765 == 3)
	{
		return 0;
	}
	if (GAMEPLAY::_0x5AA3BEFA29F03AD4())
	{
		if (GAMEPLAY::IS_BIT_SET(GAMEPLAY::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_241(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && GAMEPLAY::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_232(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_242(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_90658[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_90658[iVar0], 0))
			{
				if (Global_90658[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_90658[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_243(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_70024.f_484[24]))
	{
		if (iParam0 == Global_70024.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_70024.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70024.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_244(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_90658[iVar0]))
		{
			if (Global_90658[iVar0] == iParam0)
			{
				return Global_90668[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_245(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_19(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || GAMEPLAY::IS_BIT_SET(Global_106070.f_7201[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_90658[iVar0]))
		{
			Global_90658[iVar0] = iParam0;
			Global_90668[iVar0] = iParam1;
			Global_90678[iVar0] = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_90678[iVar0]))
			{
				Global_90706[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90706[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_247(var uParam0)
{
	if (!func_248(*uParam0))
	{
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_106070.f_9057.f_99.f_58[119]);
	}
}

bool func_248(int iParam0)
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, 5);
}

int func_249(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xE41033B25D003A07(*uParam0, 255);
				}
				else
				{
					unk_0xE41033B25D003A07(*uParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_219(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_252(*uParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_252(*uParam0, ((*uParam1)[38] - 1)), false);
	}
	func_251(uParam0);
	if (func_250(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
	}
	return 1;
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = GAMEPLAY::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == GAMEPLAY::GET_HASH_KEY("MNU_CAGE") || iVar2 == GAMEPLAY::GET_HASH_KEY("SABRE_CAG"))
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

void func_251(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
	}
}

int func_252(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
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
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
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

int func_253(var uParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_106070.f_20090.f_261)
	{
		*uParam0 = { Global_106070.f_20090.f_267 };
		*iParam1 = Global_106070.f_20090.f_271;
		return 1;
	}
	return 0;
}

void func_254(int iParam0, var uParam1, int iParam2)
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
			if (Global_106070.f_9057.f_99.f_58[128] && !Global_106070.f_9057.f_99.f_58[131])
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
					if (Global_106070.f_9057.f_99.f_58[119])
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
			else if (Global_106070.f_9057.f_99.f_58[118])
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

int func_255(int iParam0, int iParam1)
{
	if (func_10(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(func_256(iParam0, iParam1));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_10(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_254(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_257(int iParam0, int iParam1)
{
	if (func_10(iParam0))
	{
		STREAMING::REQUEST_MODEL(func_256(iParam0, iParam1));
	}
	else if (iParam0 != 145)
	{
	}
}

int func_258(vector3 vParam0, float fParam1, int iParam2)
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_505) || iParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_505))
		{
			if (func_260(&Local_505, 19, vParam0, fParam1, 1))
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
			PED::SET_PED_COMPONENT_VARIATION(Local_505, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_505, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_505, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_505, 5, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_505, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_505, 8, 0, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_505, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_505, 1862763509);
			PED::SET_PED_CONFIG_FLAG(Local_505, 182, true);
			func_259(&Local_588, 5, Local_505, "LAMAR", 0, 1);
			return 1;
		}
	}
	else
	{
		if (Local_588[5 /*10*/] != Local_505)
		{
			func_259(&Local_588, 5, Local_505, "LAMAR", 0, 1);
		}
		return 1;
	}
	return 0;
}

void func_259(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71205)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_260(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_10(iParam1))
	{
		iVar0 = func_262(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, vParam2, fParam3, 0, false);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*iParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*iParam0, 5, 2, 0, 0);
				}
			}
			func_261(*iParam0, iParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_261(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_89161[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_262(int iParam0)
{
	if (!func_10(iParam0))
	{
		return Global_106070.f_28022[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_263(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_882())
	{
		GAMEPLAY::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		GAMEPLAY::CLEAR_BIT(&(Global_93232.f_20), 2);
		GAMEPLAY::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		Global_93228 = { vParam0 };
		Global_93231 = fParam1;
		Global_93227 = 1;
		if (iParam2 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_93232.f_20), 14);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_93232.f_20), 14);
		}
		if (iParam3 == 1)
		{
			GAMEPLAY::SET_BIT(&(Global_93232.f_20), 24);
		}
		else
		{
			GAMEPLAY::CLEAR_BIT(&(Global_93232.f_20), 24);
		}
		func_186(1);
	}
}

void func_264()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	bool bVar4;
	float fVar5;
	int iVar6[1];
	float fVar7;
	int iVar8;
	struct<2> Var9;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	int iVar15;
	
	if (iLocal_585 == 4)
	{
		if (iLocal_470 == 0)
		{
			iLocal_470 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_402, 1, 0, 0, 1);
		INTERIOR::_LOAD_INTERIOR(iLocal_470);
		if (bLocal_288)
		{
			func_263(vLocal_402, fLocal_305, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_402, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_305);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			STREAMING::LOAD_SCENE(vLocal_402);
			SYSTEM::WAIT(0);
		}
		func_348();
		while ((((((((((!INTERIOR::IS_INTERIOR_READY(iLocal_470) || !func_347(0)) || !func_346(0)) || !ENTITY::DOES_ENTITY_EXIST(Local_505)) || !ENTITY::DOES_ENTITY_EXIST(Local_525[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_525[1 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(iLocal_434)) || !ENTITY::DOES_ENTITY_EXIST(Local_509)) || !ENTITY::DOES_ENTITY_EXIST(vLocal_506.x)) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(func_256(1, 1))) || !STREAMING::HAS_ANIM_DICT_LOADED(sLocal_423))
		{
			VEHICLE::REQUEST_VEHICLE_ASSET(func_256(1, 1), 3);
			STREAMING::REQUEST_ANIM_DICT(sLocal_423);
			INTERIOR::_LOAD_INTERIOR(iLocal_470);
			func_258(vLocal_403, fLocal_306, 0);
			func_345(34.0424f, -638.7692f, 30.6252f, 0);
			func_344(44.0424f, -638.7692f, 30.6252f, 0);
			func_188(vLocal_401, fLocal_304, 0);
			func_343(vLocal_408, fLocal_312, 0);
			func_340(vLocal_409, fLocal_313, 0);
			SYSTEM::WAIT(0);
		}
		func_185(0, -1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		func_339();
		func_338();
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_402, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_305);
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], -30.5774f, -1090.563f, 25.4222f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], 159.6013f);
			ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_317 /*7*/], true);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_525[iLocal_317 /*7*/], 0);
		}
		iLocal_353 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, func_337(-67.2459f), 0, 7);
		iLocal_354 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, 72.3459f, 0, 7);
		func_336();
		iLocal_316 = 99;
		iLocal_269 = 1;
		iLocal_585 = 0;
	}
	if (iLocal_585 == 0)
	{
		if (iLocal_470 != 0)
		{
			if (INTERIOR::IS_INTERIOR_READY(iLocal_470))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_470);
				iLocal_470 = 0;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[0 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[0 /*7*/], false, 0, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_525[0 /*7*/], 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[1 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[1 /*7*/], false, 0, 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_525[1 /*7*/], 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
		{
			VEHICLE::SET_VEHICLE_FIXED(iLocal_434);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -38.077f, -1096.467f, 25.4223f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 296.617f);
			if (!PED::IS_PED_INJURED(Local_505))
			{
				ENTITY::SET_ENTITY_COORDS(Local_505, vLocal_403, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_505, fLocal_306);
			}
			while (!func_347(0))
			{
				SYSTEM::WAIT(0);
			}
			if (iLocal_316 != 99)
			{
				func_46(vLocal_402, 100f, 1, 5000);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0) && !PED::IS_PED_INJURED(Local_505))
			{
				AI::TASK_ENTER_VEHICLE(Local_505, iLocal_434, 40000, 0, 1f, 1, 0);
			}
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 296.617f, 0, 0);
			SYSTEM::WAIT(500);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		}
		func_335(1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GO_HOME"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_GO_HOME");
		}
		if (!PED::IS_PED_INJURED(Local_509) && !PED::IS_PED_INJURED(vLocal_506.x))
		{
			if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_423))
			{
				iLocal_372 = PED::CREATE_SYNCHRONIZED_SCENE(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				AI::TASK_SYNCHRONIZED_SCENE(vLocal_506.x, iLocal_372, sLocal_423, "_leadout_simeon", 1000f, -1.5f, 5, 0, 1148846080, 0);
				AI::TASK_SYNCHRONIZED_SCENE(Local_509, iLocal_372, sLocal_423, "_leadout_jimmy", 1000f, -1.5f, 5, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_372, 0f);
			}
			AI::TASK_LOOK_AT_ENTITY(vLocal_506.x, Local_509, -1, 2048, 2);
		}
		func_56();
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[0 /*7*/], 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_525[0 /*7*/], false);
			ENTITY::_SET_ENTITY_REGISTER(Local_525[0 /*7*/], 1);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_525[0 /*7*/]);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[1 /*7*/], 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(Local_525[1 /*7*/], false);
			ENTITY::_SET_ENTITY_REGISTER(Local_525[1 /*7*/], 1);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_525[1 /*7*/]);
		}
		func_334(&(iLocal_439[0]), 0);
		func_333();
		func_71(48, 1);
		func_71(47, 1);
		func_838(3, "GO_TO_HOUSE", 1, 0, 0, 1);
		SYSTEM::SETTIMERA(0);
		vLocal_506.z = 0;
		iLocal_364 = 0;
		iLocal_375 = 0;
		iLocal_316 = 0;
		iLocal_275 = 0;
		iLocal_585 = 1;
	}
	if (iLocal_585 == 1)
	{
		func_71(49, 3);
		if (SYSTEM::TIMERA() < 3000)
		{
			UNK1::_0xAF66DCEE6609B148();
		}
		if (!PED::IS_PED_INJURED(Local_505))
		{
			if (!iLocal_275)
			{
				GAMEPLAY::SET_BIT(&(Local_527.f_13), 10);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_505, 1f);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_434, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_434))
				{
					GAMEPLAY::CLEAR_BIT(&(Local_527.f_13), 10);
					if (!PED::IS_PED_IN_VEHICLE(Local_505, iLocal_434, 0))
					{
						AI::TASK_ENTER_VEHICLE(Local_505, iLocal_434, 20000, 0, 2f, 1, 0);
					}
					iLocal_275 = 1;
				}
			}
		}
		switch (iLocal_316)
		{
			case 0:
				if (!UI::DOES_BLIP_EXIST(iLocal_452))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
					{
						iLocal_452 = func_331(iLocal_434, 0, 0);
					}
				}
				if (!iLocal_300[62])
				{
					if (!func_329(&Local_527, 1))
					{
						func_259(&Local_588, 6, Local_509, "JIMMY", 0, 1);
						func_259(&Local_588, 4, vLocal_506.x, "SIMEON", 0, 1);
						if (func_328(&Local_588, "ARM1AUD", "ARM1_GETINJ", 7, 0, 0, 0))
						{
							iLocal_300[62] = 1;
						}
					}
				}
				else if (func_318(&Local_588, "ARM1AUD", "ARM1_LEAVEG", "ARM1_LEAVEG_1", 7, 0, 0))
				{
					iLocal_300[53] = 1;
					iLocal_316 = (iLocal_316 + 1);
				}
				break;
			
			case 1:
				if (UI::DOES_BLIP_EXIST(iLocal_452))
				{
					UI::REMOVE_BLIP(&iLocal_452);
				}
				if (func_284(&Local_527, vLocal_398, 0.001f, 0.001f, 2f, 1, Local_505, iLocal_434, "AR1_HOME", "AR1_WAIT", "CMN_GENGETINY", "CMN_GENGETBCKY", 0, 1, 1, -1))
				{
					iLocal_316++;
				}
				else if (UI::DOES_BLIP_EXIST(Local_527.f_5))
				{
					if (!iLocal_300[54])
					{
						if (iLocal_364 == 0)
						{
							iLocal_364 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_364) > 7000)
						{
							if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (func_283("AR1_HOME", 0, 0))
								{
									UI::CLEAR_PRINTS();
								}
								func_55("AR1_VIEWSTATS", 15000);
								iLocal_300[54] = 1;
								iLocal_364 = 0;
							}
						}
					}
					else if (!iLocal_300[55])
					{
						if (!CONTROLS::IS_CONTROL_PRESSED(0, 19))
						{
							iLocal_364 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_364) > 250 && func_282(1))
						{
							func_55("AR1_VIEWSTATS2", 15000);
							iLocal_300[55] = 1;
						}
					}
					if (iLocal_269)
					{
						VEHICLE::REMOVE_VEHICLE_ASSET(func_256(1, 1));
						iLocal_269 = 0;
					}
					fVar1 = 12f;
					fVar2 = ENTITY::GET_ENTITY_SPEED(iLocal_434);
					if (fVar2 < 3f)
					{
						fVar2 = 3f;
					}
					else if (fVar2 > fVar1)
					{
						fVar2 = fVar1;
					}
					fVar0 = (2f + (((fVar2 - 3f) / (fVar1 - 3f)) * 8.5f));
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -27.6771f, -1427.279f, 29.66922f, -23.04911f, -1427.3f, 32.1599f, fVar0, 0, 1, 0) && func_281(1, 1, 1))
					{
						func_277(&Local_527, 1, 0);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						fLocal_311 = fVar2;
						iLocal_316++;
					}
					else if (SYSTEM::TIMERA() > 1000 && func_276(PLAYER::PLAYER_PED_ID(), Local_505))
					{
						if (func_97())
						{
							func_275(0);
						}
						if (!iLocal_300[56])
						{
							if (!func_329(&Local_527, 1))
							{
								if (func_328(&Local_588, "ARM1AUD", "ARM1_DRIV2A", 7, 0, 0, 0))
								{
									iLocal_300[56] = 1;
								}
							}
						}
						else if (!iLocal_300[58])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -16.96474f, -1462.947f, 29.15786f, -17.41634f, -1431.48f, 36.68279f, 22.25f, 0, 1, 0))
							{
								if (!func_329(&Local_527, 1))
								{
									if (func_328(&Local_588, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
									{
										iLocal_300[58] = 1;
									}
								}
								else
								{
									func_273();
								}
							}
						}
					}
				}
				else if (iLocal_300[56] || iLocal_300[58])
				{
					if (!func_97())
					{
						func_275(1);
					}
				}
				break;
			
			case 2:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, 0))
				{
					CONTROLS::DISABLE_CONTROL_ACTION(0, 27, 1);
					if (fLocal_311 > 3f && fLocal_311 < 12f)
					{
						fVar5 = 2f;
					}
					else
					{
						fVar5 = 3.5f;
					}
					if (func_271(iVar3, fVar5, 1, 1056964608, 0, 1, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
						bVar4 = true;
					}
				}
				else
				{
					bVar4 = true;
				}
				if (func_97())
				{
					func_275(0);
				}
				if (!iLocal_300[58])
				{
					if (func_329(&Local_527, 0))
					{
						func_273();
					}
					else if (func_328(&Local_588, "ARM1AUD", "ARM1_ATHOME", 7, 0, 0, 0))
					{
						iLocal_300[58] = 1;
					}
				}
				else if (bVar4)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 768);
					iLocal_585 = 2;
				}
				break;
		}
		if (GAMEPLAY::IS_PC_VERSION())
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_398) < (20f * 20f))
			{
				CUTSCENE::REQUEST_CUTSCENE(sLocal_416, 8);
				func_99(sLocal_416);
			}
			else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_398) > (30f * 30f))
			{
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_398) < (100f * 100f))
		{
			CUTSCENE::REQUEST_CUTSCENE(sLocal_416, 8);
			func_99(sLocal_416);
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_398) > (120f * 120f))
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (UI::DOES_BLIP_EXIST(Local_527.f_5))
		{
			if (!iLocal_300[59])
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -24.22909f, -1451.201f, 29.76049f, -23.50623f, -1430.866f, 32.15756f, 7f, 0, 1, 0))
				{
					func_55("AR1_GARHELP1", 15000);
					iLocal_300[59] = 1;
				}
			}
		}
		if (!iLocal_300[60])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_434, 1)) < 225f && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_434))
				{
					func_55("AR1_UNIQUE", 15000);
					iLocal_300[60] = 1;
				}
			}
		}
		else if (!iLocal_300[61])
		{
			if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_55("AR1_APPHELP", 15000);
				iLocal_300[61] = 1;
			}
		}
		if (!PED::IS_PED_INJURED(vLocal_506.x) && !PED::IS_PED_INJURED(Local_509))
		{
			switch (vLocal_506.z)
			{
				case 0:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) > 0f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372))
					{
						PED::GET_PED_NEARBY_VEHICLES(vLocal_506.x, &iVar6);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6[0], 0))
						{
							AI::TASK_ENTER_VEHICLE(Local_509, iVar6[0], 20000, -1, 1f, 1, 0);
							AI::TASK_ENTER_VEHICLE(vLocal_506.x, iVar6[0], 20000, 0, 1f, 1, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_509, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(vLocal_506.x, 1);
							iLocal_377 = 0;
							iLocal_378 = 0;
							vLocal_506.z++;
						}
					}
					break;
				
				case 1:
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_509))
					{
						iVar6[0] = PED::GET_VEHICLE_PED_IS_IN(Local_509, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iVar6[0], 0))
						{
							fVar7 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iVar6[0], 1));
							if (fVar7 < 225f)
							{
								if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_376) > 0)
								{
									iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
									if (iVar8 != 0)
									{
										if (!func_329(&Local_527, 1))
										{
											if (!iLocal_300[76])
											{
												if (func_328(&Local_588, "ARM1AUD", "ARM1_RADIO1", 7, 0, 0, 0))
												{
													VEHICLE::SET_VEHICLE_ENGINE_ON(iVar6[0], true, 1, 0);
													AUDIO::SET_VEHICLE_RADIO_LOUD(iVar6[0], 1);
													AUDIO::SET_VEH_RADIO_STATION(iVar6[0], "RADIO_01_CLASS_ROCK");
													iLocal_300[76] = 1;
													iLocal_376 = (GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(8000, 13000));
												}
											}
											else if (iLocal_377 < 5)
											{
												if (iLocal_377 == 0)
												{
													StringCopy(&Var9, "ARM1_GETINJ2", 16);
												}
												else if (iLocal_377 == 1)
												{
													StringCopy(&Var9, "ARM1_GETINJ3", 16);
												}
												else if (iLocal_377 == 2)
												{
													StringCopy(&Var9, "ARM1_GETINJ4", 16);
												}
												else if (iLocal_377 == 3)
												{
													StringCopy(&Var9, "ARM1_GETINJ5", 16);
												}
												else if (iLocal_377 == 4)
												{
													StringCopy(&Var9, "ARM1_GETINJ6", 16);
												}
												if (func_328(&Local_588, "ARM1AUD", &Var9, 7, 0, 0, 0))
												{
													iLocal_377++;
													iLocal_376 = (GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(8000, 13000));
												}
											}
											else if (!iLocal_300[77])
											{
												if (func_328(&Local_588, "ARM1AUD", "ARM1_FNKLEV1", 7, 0, 0, 0))
												{
													AI::TASK_LOOK_AT_ENTITY(vLocal_506.x, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
													iLocal_300[77] = 1;
												}
											}
										}
									}
								}
							}
							MemCopy(&uVar10, {func_270()}, 4);
							if (GAMEPLAY::ARE_STRINGS_EQUAL(&uVar10, "ARM1_GETINJ"))
							{
								if (fVar7 > 400f)
								{
									func_273();
								}
							}
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_375) > 0)
							{
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar6[0], PLAYER::PLAYER_PED_ID(), 1))
								{
									func_823(18);
									iVar11 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
									iVar12 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2);
									if (iVar11 == 0)
									{
										if (iVar12 == 0)
										{
											func_268(Local_509, "GENERIC_INSULT_MED", 3);
										}
										else
										{
											func_268(Local_509, "GENERIC_CURSE_MED", 3);
										}
										iLocal_375 = (GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
									else if (iLocal_378 < 3)
									{
										if (!func_329(&Local_527, 1))
										{
											if (func_328(&Local_588, "ARM1AUD", "ARM1_FNKLEV2", 7, 0, 0, 0))
											{
												iLocal_375 = (GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4000, 7000));
												iLocal_378++;
											}
										}
									}
									else
									{
										if (iVar12 == 0)
										{
											func_268(Local_509, "GENERIC_INSULT_HIGH", 3);
										}
										else
										{
											func_268(Local_509, "GENERIC_CURSE_HIGH", 3);
										}
										iLocal_375 = (GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4000, 7000));
									}
								}
							}
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar6[0]);
							iVar13 = 0;
							while (iVar13 < iLocal_438)
							{
								if (iLocal_438[iVar13] != iVar6[0])
								{
									if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_438[iVar13], PLAYER::PLAYER_PED_ID(), 1))
									{
										func_823(18);
									}
								}
								iVar13++;
							}
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar6[0], 0))
							{
								func_823(14);
							}
						}
					}
					break;
				}
		}
		fVar14 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -20.2493f, -1082.746f, 25.6579f);
		if (iLocal_470 != 0)
		{
			if (fVar14 > 1600f)
			{
				if (INTERIOR::IS_INTERIOR_READY(iLocal_470))
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_470);
					iLocal_470 = 0;
				}
			}
		}
		if (fVar14 > 10000f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_509))
			{
				func_57(&Local_509, 1);
				func_57(&vLocal_506, 1);
				STREAMING::REMOVE_ANIM_DICT(sLocal_423);
				func_267(0, -1);
				func_334(&(Local_525[0 /*7*/]), 0);
				func_334(&(Local_525[1 /*7*/]), 0);
				if (iLocal_257)
				{
					func_334(&(iLocal_438[0]), 0);
					func_334(&(iLocal_438[1]), 0);
					func_334(&(iLocal_438[2]), 0);
					func_334(&(iLocal_438[3]), 0);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_399, vLocal_400, true, 1);
					iLocal_257 = 0;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_525[0 /*7*/]))
		{
			if (fVar14 > 22500f)
			{
				func_334(&(Local_525[0 /*7*/]), 0);
				func_334(&(Local_525[1 /*7*/]), 0);
			}
		}
		if (!PED::IS_PED_INJURED(Local_505) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_505, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 90000f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_434, 0))
			{
				func_823(9);
			}
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_434, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 90000f)
			{
				func_823(13);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[0 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[1 /*7*/], 0))
		{
			if ((((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_525[0 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_525[0 /*7*/], joaat("weapon_unarmed"), 0)) || (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_525[1 /*7*/], 0, 2) && !WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_525[1 /*7*/], joaat("weapon_unarmed"), 0))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_525[0 /*7*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_525[1 /*7*/]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_525[0 /*7*/], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_525[1 /*7*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_823(12);
				}
			}
		}
	}
	if (iLocal_585 == 2)
	{
		func_266();
		func_334(&(Local_525[iLocal_317 /*7*/]), 1);
		func_334(&(Local_525[iLocal_318 /*7*/]), 1);
		func_57(&Local_509, 1);
		func_57(&vLocal_506, 1);
		STREAMING::REMOVE_ANIM_DICT(sLocal_423);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (iLocal_353 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_353);
			iLocal_353 = -1;
		}
		if (iLocal_354 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_354);
			iLocal_354 = -1;
		}
		iVar15 = 0;
		iVar15 = 0;
		while (iVar15 < iLocal_458)
		{
			func_265(&(iLocal_458[iVar15]), 0);
			iVar15++;
		}
		SYSTEM::SETTIMERA(0);
		iLocal_316 = 0;
		iLocal_585 = 0;
		iLocal_584 = 11;
	}
	if (iLocal_585 == 3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
		{
			if (!PED::IS_PED_INJURED(Local_505))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_505, iLocal_434, 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_505, iLocal_434, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_434, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_434, -1);
			}
			ENTITY::SET_ENTITY_COORDS(iLocal_434, vLocal_398, 1, 0, 0, 1);
		}
		STREAMING::LOAD_SCENE(vLocal_398);
		iLocal_585 = 1;
	}
}

void func_265(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
		}
		if (bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_266()
{
	if (UI::DOES_BLIP_EXIST(iLocal_452))
	{
		UI::REMOVE_BLIP(&iLocal_452);
	}
	if (UI::DOES_BLIP_EXIST(Local_505.f_1))
	{
		UI::REMOVE_BLIP(&(Local_505.f_1));
	}
	if (UI::DOES_BLIP_EXIST(Local_509.f_1))
	{
		UI::REMOVE_BLIP(&(Local_509.f_1));
	}
	if (UI::DOES_BLIP_EXIST(vLocal_506.y))
	{
		UI::REMOVE_BLIP(&(vLocal_506.f_1));
	}
	if (UI::DOES_BLIP_EXIST(iLocal_453))
	{
		UI::REMOVE_BLIP(&iLocal_453);
	}
	if (UI::DOES_BLIP_EXIST(iLocal_454))
	{
		UI::REMOVE_BLIP(&iLocal_454);
	}
	UI::REMOVE_BLIP(&(Local_525[0 /*7*/].f_1));
	UI::REMOVE_BLIP(&(Local_525[1 /*7*/].f_1));
}

void func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_56194 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_68276)
	{
		if (iParam1 == -1 || Global_68277[iVar0 /*9*/] == iParam1)
		{
			if (Global_68277[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_68277[iVar0 /*9*/].f_6 = iParam0;
				Global_68277[iVar0 /*9*/].f_7 = 1;
				Global_68277[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_268(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_269(iParam2), 1);
}

int func_269(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

struct<6> func_270()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		return Global_15441;
	}
	return Var0;
}

int func_271(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 71, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 72, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 76, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 73, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 59, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 69, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 70, 1);
		CONTROLS::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	CONTROLS::DISABLE_CONTROL_ACTION(0, 74, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 86, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 81, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 82, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 138, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 136, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 114, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 107, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 110, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 89, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 87, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 88, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 113, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 115, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 116, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 117, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 118, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 119, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 131, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 132, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 123, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 126, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 129, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 130, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 133, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_272(iParam0);
	if ((GAMEPLAY::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = GAMEPLAY::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (GAMEPLAY::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_272(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (unk_0x36D782F68B309BDA(iParam0))
		{
			if (unk_0x3D34E80EED4AE3BE(iParam0))
			{
				unk_0x81E1552E35DC3839(iParam0, 0);
			}
		}
	}
}

void func_273()
{
	Global_14688 = 0;
	func_274();
}

void func_274()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16833 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15822 = 6;
		return;
	}
}

void func_275(int iParam0)
{
	Global_16833 = iParam0;
}

int func_276(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_277(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_280(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (UI::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			UI::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_279(iVar0, iParam0);
		func_278(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), iVar0);
			GAMEPLAY::CLEAR_BIT(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (UI::DOES_BLIP_EXIST(*iParam0))
	{
		UI::REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], 0, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

void func_278(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::CLEAR_BIT(&(iParam1->f_13), 17);
			break;
		
		case 1:
			GAMEPLAY::CLEAR_BIT(&(iParam1->f_13), 18);
			break;
		
		case 2:
			GAMEPLAY::CLEAR_BIT(&(iParam1->f_13), 19);
			break;
	}
}

void func_279(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			GAMEPLAY::CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_280(var uParam0)
{
	if (UI::DOES_BLIP_EXIST(uParam0->f_5))
	{
		UI::REMOVE_BLIP(&(uParam0->f_5));
	}
}

int func_281(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (GAMEPLAY::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_282(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17228.f_4 && Global_17228.f_104 == 4);
	}
	return Global_17228.f_4;
}

bool func_283(char* sParam0, int iParam1, char* sParam2)
{
	UI::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	return UI::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_284(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)
{
	return func_285(iParam0, vParam1, vParam2, iParam3, iParam4, 0, 0, iParam5, sParam6, sParam7, sParam7, sParam7, sParam7, sParam8, sParam9, bParam10, bParam11, bParam12, iParam13);
}

int func_285(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)
{
	return func_286(iParam0, vParam1, vParam2, func_317(), func_317(), iParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_286(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, int iParam24, int iParam25, int iParam26, bool bParam27, float fParam28)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam7;
	iParam0->f_17[1] = iParam8;
	iParam0->f_17[2] = iParam9;
	iParam0->f_16 = iParam7;
	func_316(iParam0);
	func_315(iParam0);
	func_314();
	if (func_298(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, iParam24, iParam25, iParam26, iParam6, bParam18))
	{
		func_297(sParam12);
		func_297(sParam13);
		func_297(sParam14);
		func_297(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
				{
					GAMEPLAY::SET_BIT(&(iParam0->f_13), 3);
					if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 9))
					{
						GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 23))
					{
						GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 23);
					}
					GAMEPLAY::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_295(iParam0, iParam21))
				{
					GAMEPLAY::SET_BIT(&(iParam0->f_13), 3);
					if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 9))
					{
						GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					GAMEPLAY::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_297(sParam16);
				func_297(sParam19);
				func_297("MORE_SEATS");
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (UI::DOES_BLIP_EXIST(iParam0->f_5))
					{
						UI::REMOVE_BLIP(&(iParam0->f_5));
						func_297(sParam11);
					}
					if (UI::DOES_BLIP_EXIST(*iParam0))
					{
						UI::REMOVE_BLIP(iParam0);
					}
					if ((!func_329(iParam0, 1) && !func_294(iParam0)) && !GAMEPLAY::IS_BIT_SET(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_292(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_268(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						GAMEPLAY::SET_BIT(&(iParam0->f_13), 0);
						GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 0))
					{
						func_297("LOSE_WANTED");
						GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 0);
						GAMEPLAY::SET_BIT(&(iParam0->f_13), 1);
					}
					if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 1))
					{
						if (!func_329(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_268(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!UI::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (UI::DOES_BLIP_EXIST(*iParam0))
						{
							UI::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_48(vVar3, 0);
						if (!iParam23 == -1)
						{
							UI::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_291(iParam0->f_5, iParam0);
						}
					}
					else if (!func_290(vVar3, UI::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						UI::SET_BLIP_COORDS(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_291(iParam0->f_5, iParam0);
						}
					}
					if (!func_329(iParam0, 2))
					{
						if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 2))
						{
							func_292(iParam0, sParam11, 0);
							GAMEPLAY::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 13))
						{
							iParam5 = 0;
						}
					}
					bVar1 = false;
					iVar4 = 0;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						iVar4 = 1;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, vParam2, iParam5, iVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vParam3, vParam4, fParam28, 0, iVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), vParam1, vParam2, iParam5, iVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], func_58()) || !func_289(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_287(iParam0))
							{
								func_297(sParam11);
								func_297(sParam16);
								func_297(sParam12);
								func_297(sParam13);
								func_297(sParam14);
								func_297(sParam15);
								func_297("LOSE_WANTED");
								func_297("MORE_SEATS");
								func_297(sParam19);
								func_277(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 9) && !GAMEPLAY::IS_BIT_SET(iParam0->f_13, 22)))
				{
					func_297(sParam16);
					func_297(sParam19);
					if (UI::DOES_BLIP_EXIST(iParam0->f_5) || UI::DOES_BLIP_EXIST(*iParam0))
					{
						UI::REMOVE_BLIP(&(iParam0->f_5));
						UI::REMOVE_BLIP(iParam0);
						func_297(sParam11);
					}
					if ((!func_329(iParam0, 1) && !func_294(iParam0)) && !GAMEPLAY::IS_BIT_SET(iParam0->f_13, 0))
					{
						if (bParam22)
						{
							func_292(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_268(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						GAMEPLAY::SET_BIT(&(iParam0->f_13), 0);
						GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 0))
					{
						func_297("LOSE_WANTED");
						GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 0);
						GAMEPLAY::SET_BIT(&(iParam0->f_13), 1);
					}
					if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 1))
					{
						if (!func_329(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_268(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!UI::DOES_BLIP_EXIST(*iParam0))
						{
							if (UI::DOES_BLIP_EXIST(iParam0->f_5))
							{
								UI::REMOVE_BLIP(&(iParam0->f_5));
								func_297(sParam11);
							}
							*iParam0 = func_331(iParam10, 0, 0);
							UI::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 4))
							{
								func_291(*iParam0, iParam0);
							}
						}
						if (!func_329(iParam0, 2))
						{
							if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 3))
							{
								func_292(iParam0, sParam16, 0);
								GAMEPLAY::SET_BIT(&(iParam0->f_13), 3);
								GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 9))
							{
								if (!GAMEPLAY::IS_STRING_NULL(sParam19))
								{
									if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 4))
									{
										func_292(iParam0, sParam19, 0);
										GAMEPLAY::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 4))
								{
									func_292(iParam0, sParam16, 0);
									GAMEPLAY::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										func_268(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									GAMEPLAY::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (UI::DOES_BLIP_EXIST(iParam0->f_5))
				{
					UI::REMOVE_BLIP(&(iParam0->f_5));
					func_297(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_329(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar7]))
									{
										func_268(iParam0->f_17[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_292(iParam0, "MORE_SEATS", 0);
									GAMEPLAY::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 3))
							{
								func_292(iParam0, sParam16, 0);
								GAMEPLAY::SET_BIT(&(iParam0->f_13), 3);
								GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 4))
							{
								if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 9))
								{
									func_292(iParam0, sParam19, 0);
									GAMEPLAY::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_329(iParam0, 2))
					{
						if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 3))
						{
							func_292(iParam0, sParam16, 0);
							GAMEPLAY::SET_BIT(&(iParam0->f_13), 3);
							GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 9))
						{
							if (!GAMEPLAY::IS_STRING_NULL(sParam19))
							{
								if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 4))
								{
									func_292(iParam0, sParam19, 0);
									GAMEPLAY::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 4))
							{
								func_292(iParam0, sParam16, 0);
								GAMEPLAY::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 0))
		{
			GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		func_297(sParam11);
		func_297(sParam16);
		func_297(sParam19);
		func_297(sParam16);
		func_297("LOSE_WANTED");
		if (UI::DOES_BLIP_EXIST(iParam0->f_5))
		{
			UI::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (UI::DOES_BLIP_EXIST(*iParam0))
		{
			UI::REMOVE_BLIP(iParam0);
		}
	}
	GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 11);
	GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

int func_287(int iParam0)
{
	if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 12))
	{
		if (func_288(PLAYER::PLAYER_PED_ID()))
		{
			if (func_281(1, 0, 1) || GAMEPLAY::IS_BIT_SET(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_281(1, 0, 1) || GAMEPLAY::IS_BIT_SET(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_288(int iParam0)
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_289(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_276(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_58(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_58()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_58(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_290(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (GAMEPLAY::ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (GAMEPLAY::ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (GAMEPLAY::ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (GAMEPLAY::ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (GAMEPLAY::ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_291(int iParam0, int iParam1)
{
	if (UI::DOES_BLIP_EXIST(iParam0))
	{
		if (UI::DOES_BLIP_EXIST(iParam1->f_6))
		{
			UI::SET_BLIP_ROUTE(iParam1->f_6, 0);
		}
		UI::_0x3DDA37128DD1ACA8(0);
		UI::_0x67EEDEA1B9BAFD94();
		iParam1->f_6 = iParam0;
		UI::SET_BLIP_ROUTE(iParam0, 1);
	}
}

void func_292(int iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!GAMEPLAY::IS_STRING_NULL(sParam1))
		{
			if (!GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_293(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = GAMEPLAY::GET_GAME_TIMER();
}

void func_293(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_294(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0->f_16))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_296(iVar0, iParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_296(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::_0xF7F203E31F96F6A1(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::_0xF7F203E31F96F6A1(iParam0, 1))
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

void func_297(char* sParam0)
{
	if (!GAMEPLAY::IS_STRING_NULL(sParam0))
	{
		UI::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_298(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	iParam0->f_17[0] = uParam1;
	iParam0->f_17[1] = uParam2;
	iParam0->f_17[2] = uParam3;
	iParam0->f_16 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 29) && !GAMEPLAY::IS_BIT_SET(iParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					GAMEPLAY::SET_BIT(&(iParam0->f_13), 28);
				}
			}
		}
		else if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 29) && GAMEPLAY::IS_BIT_SET(iParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 26))
	{
		bVar14 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_21))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 50f, 0, iVar16);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar15, 0))
			{
				iParam0->f_21 = iVar15;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0->f_21, 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0->f_21, 1)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_296(iParam0->f_21, iParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
									{
										PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
									}
									if (AI::GET_SCRIPT_TASK_STATUS(iParam0->f_17[iVar0], -1794415470) == 7 && !func_313(iParam0->f_17[iVar0], iParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(iParam0->f_17[iVar0]) && !AI::IS_PED_GETTING_UP(iParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_17[iVar0], 1);
											AI::TASK_ENTER_VEHICLE(iParam0->f_17[iVar0], iParam0->f_21, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_17[iVar0]) && !iParam0->f_15)
					{
						AI::CLEAR_PED_TASKS(iParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
					{
						if (func_311(iParam0, iParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iParam0->f_17[iVar0], func_58());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 26))
	{
		if ((!func_310(iParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
			{
				if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_329(iParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, iVar17);
						if (!PED::IS_PED_INJURED(iParam0->f_17[iVar18]))
						{
							func_268(iParam0->f_17[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_292(iParam0, "MORE_SEATS", 0);
						GAMEPLAY::SET_BIT(&(iParam0->f_13), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 13);
			func_297("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(iParam0->f_17[0]) || !PED::IS_PED_INJURED(iParam0->f_17[1])) || !PED::IS_PED_INJURED(iParam0->f_17[2]))
			{
				if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_329(iParam0, 2))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (func_309(iVar10, iParam0))
						{
							func_292(iParam0, "CMN_VEHSUIT", 0);
							GAMEPLAY::SET_BIT(&(iParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 31);
					func_297("CMN_VEHSUIT");
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					GAMEPLAY::SET_BIT(&(iParam0->f_13), 21);
				}
			}
			else if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 21))
			{
				GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
					{
						PED::SET_PED_DIES_IN_WATER(iParam0->f_17[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(iParam0->f_17[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
							{
								if (!func_310(iParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!func_308(iParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar10, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0->f_17[iVar0], iVar10))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar10) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar10))
								{
									vVar19 = { ENTITY::GET_ENTITY_COORDS(iVar10, 1) };
									if (vVar19.z < -1f)
									{
										AI::TASK_LEAVE_VEHICLE(iParam0->f_17[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0->f_17[iVar0]))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(iParam0->f_17[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar10, 0))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar10))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												AI::TASK_LEAVE_VEHICLE(iParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												AI::TASK_LEAVE_VEHICLE(iParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar20 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												AI::TASK_LEAVE_VEHICLE(iParam0->f_17[iVar0], iVar10, 4160);
											}
											else
											{
												AI::TASK_LEAVE_VEHICLE(iParam0->f_17[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
					{
						iVar21 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar21))
						{
							if (func_296(iVar21, iParam0, 0))
							{
								if (func_307(iVar0, iParam0) || !GAMEPLAY::IS_BIT_SET(iParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0->f_17[iVar0], iVar0);
									func_278(iVar0, iParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										GAMEPLAY::SET_BIT(&(iParam0->f_13), 27);
									}
								}
							}
							else if (!func_307(iVar0, iParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar21) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iParam0->f_17[iVar0], 2);
								}
								func_306(iVar0, iParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()) && !func_305(iParam0->f_17[iVar0], iParam10)) && !func_304(iParam0->f_17[iVar0], iParam10))
					{
						if (func_311(iParam0, iParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
							{
								if (((!PED::IS_PED_RAGDOLL(iParam0->f_17[iVar0]) && !AI::IS_PED_GETTING_UP(iParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(iParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_17[iVar0]))
								{
									iVar11 = AI::GET_SCRIPT_TASK_STATUS(iParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7)
									{
										AI::CLEAR_PED_TASKS(iParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(iParam0->f_17[iVar0], func_58());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!UI::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
							{
								iParam0->f_11 = GAMEPLAY::GET_GAME_TIMER();
								iParam0->f_1[iVar0] = func_331(iParam0->f_17[iVar0], 0, 0);
								UI::SET_BLIP_DISPLAY(iParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_291(iParam0->f_1[iVar0], iParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (UI::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
					{
						if (((func_289(iParam0->f_17[iVar0], 1) || func_305(iParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
						{
							if (UI::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
							{
								UI::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
								func_297(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_291(iParam0->f_1[iVar0], iParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(iParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(iParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !GAMEPLAY::IS_BIT_SET(iParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_289(iParam0->f_17[iVar0], 1))
										{
											if (func_288(iParam0->f_17[iVar0]))
											{
												iVar11 = AI::GET_SCRIPT_TASK_STATUS(iParam0->f_17[iVar0], 451360105);
												if (iVar11 == 7)
												{
													AI::TASK_LEAVE_ANY_VEHICLE(iParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(iParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(iParam0->f_17[iVar0])) && !AI::IS_PED_GETTING_UP(iParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
										}
									}
									iVar11 = AI::GET_SCRIPT_TASK_STATUS(iParam0->f_17[iVar0], -1794415470);
									if (iVar11 == 7 && !func_313(iParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(iParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_303(iParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(iParam0->f_17[iVar0])) && !AI::IS_PED_GETTING_UP(iParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_17[iVar0], 1);
											if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0->f_17[iVar0], 1f);
											}
											AI::TASK_ENTER_VEHICLE(iParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0->f_17[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, 0))
									{
										iParam0->f_1[iVar0] = func_331(iParam0->f_17[iVar0], 0, 0);
										UI::SET_BLIP_DISPLAY(iParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
							{
								if (func_311(iParam0, iParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(iParam0->f_17[iVar0]) && !AI::IS_PED_GETTING_UP(iParam0->f_17[iVar0]))
									{
										iVar11 = AI::GET_SCRIPT_TASK_STATUS(iParam0->f_17[iVar0], -1794415470);
										if (iVar11 == 7)
										{
											AI::CLEAR_PED_TASKS(iParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0->f_17[iVar0], 0);
										PED::SET_PED_AS_GROUP_MEMBER(iParam0->f_17[iVar0], func_58());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()))
							{
								if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(iParam0->f_17[iVar0], func_58());
								}
							}
							else if (GAMEPLAY::IS_BIT_SET(iParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
								GAMEPLAY::SET_BIT(&(iParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_58()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
						}
					}
				}
				else if (UI::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
				{
					UI::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
					func_297(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (UI::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_329(iParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
						{
							if (func_308(iParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(iParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), iParam0->f_8, iParam0->f_8, iParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (iParam0->f_8 * 0.85f), (iParam0->f_8 * 0.85f), iParam0->f_8, 0, 1, 0) && !func_308(iParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = GAMEPLAY::GET_GAME_TIMER();
			if ((iVar5 - iParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (iParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!GAMEPLAY::IS_BIT_SET(iParam0->f_13, 5))
							{
								func_292(iParam0, sParam7, 0);
								GAMEPLAY::SET_BIT(&(iParam0->f_13), 5);
								iParam0->f_12 = iVar1;
							}
							else
							{
								iParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_302(iVar0, iParam0))
									{
										if (!GAMEPLAY::IS_STRING_NULL(uVar13[iVar0]))
										{
											if (!GAMEPLAY::ARE_STRINGS_EQUAL(uVar13[iVar0], ""))
											{
												func_300(iParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_299(iVar0, iParam0);
												iParam0->f_12 = iVar1;
											}
										}
										if (!func_302(iVar0, iParam0))
										{
											func_292(iParam0, uVar12[iVar0], 0);
											func_299(iVar0, iParam0);
											iParam0->f_12 = iVar1;
										}
									}
									else
									{
										iParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					iParam0->f_12 = 0;
				}
			}
		}
		GAMEPLAY::CLEAR_BIT(&(iParam0->f_13), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (UI::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
				{
					UI::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
					func_297(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_297("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_299(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::SET_BIT(&(iParam1->f_13), 14);
			break;
		
		case 1:
			GAMEPLAY::SET_BIT(&(iParam1->f_13), 15);
			break;
		
		case 2:
			GAMEPLAY::SET_BIT(&(iParam1->f_13), 16);
			break;
	}
}

void func_300(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!GAMEPLAY::IS_STRING_NULL(sParam1))
		{
			if (!GAMEPLAY::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_301(sParam1, sParam2, 7500, 1);
			}
		}
	}
	iParam0->f_10 = GAMEPLAY::GET_GAME_TIMER();
}

void func_301(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	UI::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	UI::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	UI::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_302(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return GAMEPLAY::IS_BIT_SET(iParam1->f_13, 14);
		
		case 1:
			return GAMEPLAY::IS_BIT_SET(iParam1->f_13, 15);
		
		case 2:
			return GAMEPLAY::IS_BIT_SET(iParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_303(int iParam0, float fParam1)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_58()))
		{
			iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_305(int iParam0, int iParam1)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_306(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			GAMEPLAY::SET_BIT(&(iParam1->f_13), 17);
			break;
		
		case 1:
			GAMEPLAY::SET_BIT(&(iParam1->f_13), 18);
			break;
		
		case 2:
			GAMEPLAY::SET_BIT(&(iParam1->f_13), 19);
			break;
	}
}

int func_307(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return GAMEPLAY::IS_BIT_SET(iParam1->f_13, 17);
		
		case 1:
			return GAMEPLAY::IS_BIT_SET(iParam1->f_13, 18);
		
		case 2:
			return GAMEPLAY::IS_BIT_SET(iParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_309(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(iParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == iParam1->f_17[0] || iVar3 == iParam1->f_17[1]) || iVar3 == iParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == iParam1->f_17[0] || iVar4 == iParam1->f_17[1]) || iVar4 == iParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == iParam1->f_17[0] || iVar5 == iParam1->f_17[1]) || iVar5 == iParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_310(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_296(iVar0, iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_311(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (func_310(iParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_296(iVar0, iParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (func_312(iVar0))
							{
								return 1;
							}
						}
					}
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
	}
	return 0;
}

int func_312(int iParam0)
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_313(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_314()
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							AI::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_315(var uParam0)
{
	int iVar0;
	
	if (!GAMEPLAY::IS_BIT_SET(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		GAMEPLAY::SET_BIT(&(uParam0->f_13), 25);
	}
}

void func_316(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], 0);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
	}
}

Vector3 func_317()
{
	vector3 vVar0;
	
	return vVar0;
}

bool func_318(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_327(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15829 = 0;
	Global_15836 = 0;
	Global_15831 = 0;
	Global_16813 = 1;
	Global_16815 = 0;
	Global_16819 = 0;
	StringCopy(&Global_16826, sParam3, 24);
	Global_2621441 = 0;
	return func_319(sParam2, iParam4, 0);
}

int func_319(char* sParam0, int iParam1, bool bParam2)
{
	Global_15823 = 0;
	if (Global_15822 == 0 || Global_15824 == 2)
	{
		if (Global_15822 != 0)
		{
			if (iParam1 > Global_15824)
			{
				if (Global_15829 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14513.f_1 = 3;
					Global_15822 = 0;
					Global_15823 = 1;
					Global_15875 = 0;
					Global_15818 = 0;
					Global_15819 = 0;
					Global_15833 = 0;
					Global_15832 = 0;
					Global_14512 = 0;
				}
				else
				{
					func_326();
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
		if (func_325(8, -1))
		{
			return 0;
		}
		Global_15898 = { Global_15892 };
		func_324();
		Global_15111 = { Global_15276 };
		Global_15828 = Global_15829;
		Global_15835 = Global_15836;
		Global_2621442 = Global_2621441;
		Global_15837 = { Global_15853 };
		Global_15830 = Global_15831;
		Global_16812 = Global_16813;
		Global_16820 = { Global_16826 };
		Global_16814 = Global_16815;
		Global_16816 = Global_16817;
		Global_16818 = Global_16819;
		Global_15441.f_370 = Global_16811;
		Global_15441.f_368 = Global_16809;
		Global_15441.f_369 = Global_16810;
		Global_15818 = Global_15819;
		if (Global_15828)
		{
			GAMEPLAY::CLEAR_BIT(&Global_2383, 20);
			GAMEPLAY::CLEAR_BIT(&Global_2384, 17);
			GAMEPLAY::CLEAR_BIT(&Global_2385, 0);
			if (bParam2)
			{
				func_323();
				if (Global_3188[Global_14513 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14513.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14479 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_322())
				{
					return 0;
				}
				if (AI::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
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
				if (!Global_71205)
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
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_67())
			{
				return 0;
			}
			else
			{
				switch (Global_14513.f_1)
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
				if (GAMEPLAY::IS_BIT_SET(Global_2383, 9))
				{
					return 0;
				}
			}
			func_321();
			Global_15832 = bParam2;
		}
		Global_15824 = iParam1;
		StringCopy(&Global_15441, sParam0, 24);
		Global_14688 = 0;
		func_320();
		return 1;
	}
	if (Global_15822 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15824 || iParam1 == Global_15824)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_326();
	}
	return 0;
}

void func_320()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14690[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15822 = 1;
}

void func_321()
{
	Global_15875 = Global_15874;
	Global_15869 = Global_15870;
	Global_15916 = { Global_15904 };
	Global_15922 = { Global_15910 };
	Global_15877 = Global_15876;
	Global_15946 = { Global_15928 };
	Global_15952 = { Global_15934 };
	Global_15958 = { Global_15940 };
	Global_15964 = { Global_15970 };
	Global_1698 = Global_1699;
	Global_1700 = Global_1701;
	Global_15833 = Global_15834;
	Global_15835 = Global_15836;
	Global_15837 = { Global_15853 };
	Global_15826 = Global_15827;
	Global_16838 = 0;
	Global_15871 = 0;
	Global_15872 = 0;
	GAMEPLAY::CLEAR_BIT(&Global_2384, 16);
}

int func_322()
{
	int iVar0;
	int iVar1;
	
	if (Global_71205)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
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
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_323()
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[0 /*29*/])
			{
				Global_14513 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[1 /*29*/])
			{
				Global_14513 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_106070.f_28022[2 /*29*/])
			{
				Global_14513 = 2;
			}
			else
			{
				Global_14513 = 0;
			}
		}
	}
	else
	{
		Global_14513 = func_75();
		if (Global_14513 == 145)
		{
			Global_14513 = 3;
		}
		if (Global_71205)
		{
			Global_14513 = 3;
		}
		if (Global_14513 > 3)
		{
			Global_14513 = 3;
		}
	}
}

void func_324()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15111[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15111[iVar0 /*10*/].f_1), "", 24);
		Global_15111[iVar0 /*10*/].f_7 = 0;
		Global_15111[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15111.f_161 = -99;
	Global_15111.f_162 = { 0f, 0f, 0f };
}

bool func_325(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1368245.f_203[iParam1];
			}
			break;
	}
	return GAMEPLAY::IS_BIT_SET(Global_1368245.f_1048, iParam0);
}

void func_326()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16833 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14513.f_1 == 9) || Global_14512 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15822 = 6;
		Global_14513.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15822 = 6;
		return;
	}
}

void func_327(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15276 = { *uParam0 };
	Global_1699 = iParam1;
	StringCopy(&Global_15892, sParam2, 24);
	Global_16811 = iParam5;
	if (iParam3 == 0)
	{
		Global_16809 = 1;
		Global_16807 = 0;
	}
	else
	{
		Global_16809 = 0;
		Global_16807 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16810 = 1;
		Global_16808 = 0;
	}
	else
	{
		Global_16810 = 0;
		Global_16808 = 1;
	}
}

bool func_328(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_327(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 0;
	Global_16819 = 0;
	Global_2621441 = 0;
	return func_319(sParam2, iParam3, 0);
}

int func_329(int iParam0, int iParam1)
{
	if (iParam1 != 1 || UI::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (UI::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_330(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || UI::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_98() && !func_97())
		{
			return 1;
		}
	}
	return 0;
}

int func_330(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GAMEPLAY::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_331(int iParam0, bool bParam1, bool bParam2)
{
	return func_332(iParam0, !bParam1, bParam2);
}

int func_332(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = UI::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		UI::SET_BLIP_SCALE(iVar0, func_49(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			UI::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			UI::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		UI::SET_BLIP_SCALE(iVar0, func_49(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		UI::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		UI::SET_BLIP_SCALE(iVar0, func_49(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_333()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_300;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_300[iVar1] = 0;
		iVar1++;
	}
}

void func_334(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*iParam0, -8f, 1);
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
		}
		if (bParam1)
		{
			VEHICLE::DELETE_VEHICLE(iParam0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_335(bool bParam0)
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-44.9779f, -1093.988f, 19.4526f, -30.0332f, -1074.433f, 39.4526f, !bParam0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-20.801f, -1084.057f, 20.8603f, -3.4886f, -1050.998f, 31.8603f, !bParam0, 1);
	if (bParam0)
	{
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(-37f, -1087f, 26f, 5f, 0, 0, 0, 0, false, 0);
	}
}

void func_336()
{
	if (iLocal_478 == 0)
	{
		iLocal_478 = PED::ADD_SCENARIO_BLOCKING_AREA(-49.41105f, -1078.832f, 20.47327f, -44.08052f, -1071.936f, 39.47327f, 0, 1, 1, 1);
	}
	if (iLocal_479 == 0)
	{
		iLocal_479 = PED::ADD_SCENARIO_BLOCKING_AREA(-54.5514f, -1111.473f, 22.2924f, -39.9018f, -1104.013f, 39.7759f, 0, 1, 1, 1);
	}
}

float func_337(float fParam0)
{
	return (fParam0 * 0.01745329f);
}

void func_338()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[0 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[1 /*7*/], 0))
	{
		VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_525[0 /*7*/], 1);
		VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_525[1 /*7*/], 1);
	}
}

void func_339()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
	{
		ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_318 /*7*/], fLocal_315);
		ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_318 /*7*/], vLocal_411, 1, 0, 0, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_318 /*7*/], true);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_525[iLocal_318 /*7*/], 0);
	}
}

int func_340(vector3 vParam0, float fParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(vLocal_506.x))
	{
		func_342(18);
		if (func_341(18))
		{
			if (!bParam2)
			{
				if (func_260(&vLocal_506, 18, vParam0, fParam1, 1))
				{
					PED::SET_PED_COMPONENT_VARIATION(vLocal_506.x, 3, 1, 0, 0);
					PED::SET_PED_CAN_BE_TARGETTED(vLocal_506.x, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(vLocal_506.x, 1862763509);
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (!func_10(iParam0))
	{
		return STREAMING::HAS_MODEL_LOADED(func_262(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_342(int iParam0)
{
	if (!func_10(iParam0))
	{
		STREAMING::REQUEST_MODEL(func_262(iParam0));
	}
	else if (iParam0 != 145)
	{
	}
}

int func_343(vector3 vParam0, float fParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_509))
	{
		func_342(14);
		if (func_341(14))
		{
			if (!bParam2)
			{
				if (func_260(&Local_509, 14, vParam0, fParam1, 1))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_509, 3, 4, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_509, 1, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_509, 2, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_509, 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_509, 6, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_509, 8, 3, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_509, 10, 2, 0, 0);
					PED::SET_PED_CAN_BE_TARGETTED(Local_509, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_509, 1862763509);
				}
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_344(vector3 vParam0, float fParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_525[1 /*7*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_483);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_483))
		{
			Local_525[1 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_483, vParam0, fParam1, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_525[1 /*7*/], 1084227584);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_525[1 /*7*/], 0f);
			VEHICLE::SET_VEHICLE_COLOURS(Local_525[1 /*7*/], 28, 28);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_525[1 /*7*/], 23, 0);
			VEHICLE::SET_VEHICLE_STRONG(Local_525[1 /*7*/], 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_525[1 /*7*/], 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_525[1 /*7*/], false);
			ENTITY::SET_ENTITY_HEALTH(Local_525[1 /*7*/], 2000, 0);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_525[1 /*7*/], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_525[1 /*7*/], "2603AM56");
			VEHICLE::_0x51BB2D88D31A914B(Local_525[1 /*7*/], 0);
			VEHICLE::_0x192547247864DFDD(Local_525[1 /*7*/], 0);
			ENTITY::_0xE12ABE5E3A389A6C(Local_525[1 /*7*/], 0);
			ENTITY::_0xA80AE305E0A3044F(Local_525[1 /*7*/], 0);
			VEHICLE::_0xDFFCEF48E511DB48(Local_525[1 /*7*/], 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_483);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_345(vector3 vParam0, float fParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_525[0 /*7*/]))
	{
		STREAMING::REQUEST_MODEL(iLocal_482);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_482))
		{
			Local_525[0 /*7*/] = VEHICLE::CREATE_VEHICLE(iLocal_482, vParam0, fParam1, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_525[0 /*7*/], 1084227584);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_525[0 /*7*/], 0f);
			VEHICLE::SET_VEHICLE_COLOURS(Local_525[0 /*7*/], 111, 111);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_525[0 /*7*/], 111, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_525[0 /*7*/], 2000, 0);
			VEHICLE::SET_VEHICLE_STRONG(Local_525[0 /*7*/], 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_525[0 /*7*/], 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_525[0 /*7*/], false);
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_525[0 /*7*/], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_525[0 /*7*/], "5912FL34");
			VEHICLE::_0x51BB2D88D31A914B(Local_525[0 /*7*/], 0);
			VEHICLE::_0x192547247864DFDD(Local_525[0 /*7*/], 0);
			ENTITY::_0xE12ABE5E3A389A6C(Local_525[0 /*7*/], 0);
			ENTITY::_0xA80AE305E0A3044F(Local_525[0 /*7*/], 0);
			VEHICLE::_0xDFFCEF48E511DB48(Local_525[0 /*7*/], 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_482);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_346(bool bParam0)
{
	vector3 vVar0;
	int iVar1;
	
	if (!iLocal_257)
	{
		vVar0 = { vLocal_399 + Vector((vLocal_400.z - vLocal_400.z), (vLocal_400.y - vLocal_400.y), (vLocal_400.x - vLocal_399.x)) };
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(vVar0, 30f, 0, 0, 0, 0, false, 0);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_399, vLocal_400, false, 1);
		iLocal_257 = 1;
	}
	STREAMING::REQUEST_MODEL(joaat("bjxl"));
	STREAMING::REQUEST_MODEL(joaat("ninef"));
	if (STREAMING::HAS_MODEL_LOADED(joaat("bjxl")) && STREAMING::HAS_MODEL_LOADED(joaat("ninef")))
	{
		if (!bParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_438[0]))
			{
				iLocal_438[0] = VEHICLE::CREATE_VEHICLE(joaat("ninef"), -49.9f, -1094.7f, 26.1366f, 96.8607f, 1, 1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_438[0], 31, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_438[0], 42, 0);
				ENTITY::_SET_ENTITY_REGISTER(iLocal_438[0], 1);
				iLocal_438[1] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -46.5f, -1097.5f, 26.35f, 108.8107f, 1, 1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_438[1], 126, 126);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_438[1], 126, 0);
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_438[1], "57EIG117");
				ENTITY::_SET_ENTITY_REGISTER(iLocal_438[1], 1);
				iLocal_438[2] = VEHICLE::CREATE_VEHICLE(joaat("ninef"), -41.7f, -1099.5f, 26.0304f, 137.6117f, 1, 1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_438[2], 1, 1);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_438[2], 15, 0);
				ENTITY::_SET_ENTITY_REGISTER(iLocal_438[2], 1);
				iLocal_438[3] = VEHICLE::CREATE_VEHICLE(joaat("bjxl"), -36.8f, -1101.2f, 26.0912f, 151.7322f, 1, 1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_438[3], 1, 111);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_438[3], 4, 0);
				ENTITY::_SET_ENTITY_REGISTER(iLocal_438[3], 1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bjxl"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ninef"));
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < iLocal_438)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_438[iVar1], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_438[iVar1], 0);
				}
				iVar1++;
			}
		}
		return 1;
	}
	return 0;
}

int func_347(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_439[0]))
	{
		STREAMING::REQUEST_MODEL(joaat("blista"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("blista")))
		{
			if (!bParam0)
			{
				GAMEPLAY::CLEAR_AREA(-11.6041f, -1080.867f, 25.6721f, 20f, 1, 0, 0, false);
				iLocal_439[0] = VEHICLE::CREATE_VEHICLE(joaat("blista"), -8.6907f, -1082.098f, 25.6721f, 128.8319f, 1, 1, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("blista"));
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_348()
{
	if (iLocal_317 == iLocal_318)
	{
		iLocal_317 = Global_89761;
		if (iLocal_317 == 0)
		{
			iLocal_318 = 1;
		}
		else
		{
			iLocal_318 = 0;
		}
	}
}

void func_349()
{
	if (iLocal_585 == 4)
	{
		if (iLocal_316 != 99)
		{
			if (iLocal_470 == 0)
			{
				iLocal_470 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_408, 1, 0, 0, 1);
			INTERIOR::_LOAD_INTERIOR(iLocal_470);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_470))
			{
				if (bLocal_288)
				{
					func_263(vLocal_408, 335.0142f, 0, 0);
					iLocal_316 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_408, 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					STREAMING::LOAD_SCENE(vLocal_408);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iLocal_316 = 99;
				}
			}
		}
		else
		{
			STREAMING::REQUEST_ANIM_DICT(sLocal_423);
			func_348();
			if ((((((((func_258(vLocal_403, fLocal_306, 0) && func_345(34.0424f, -638.7692f, 30.6252f, 0)) && func_344(44.0424f, -638.7692f, 30.6252f, 0)) && func_188(vLocal_401, fLocal_304, 0)) && func_343(vLocal_408, fLocal_312, 0)) && func_340(vLocal_409, fLocal_313, 0)) && func_347(0)) && func_346(0)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_423))
			{
				func_185(0, -1, 0);
				func_339();
				func_338();
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_402, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_305);
				func_336();
				iLocal_269 = 1;
				iLocal_585 = 0;
			}
		}
	}
	if (iLocal_585 == 0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_415, 8);
		func_99(sLocal_415);
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[0 /*7*/], 0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[0 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[1 /*7*/], 0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[1 /*7*/], 1);
		}
		if (func_96() && (!func_329(&Local_527, 1) || SYSTEM::TIMERA() > 5000))
		{
			if (!PED::IS_PED_INJURED(Local_505))
			{
				AI::TASK_CLEAR_LOOK_AT(Local_505);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_505, "Lamar", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_509))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_509, "Jimmy", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(vLocal_506.x))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(vLocal_506.x, "Siemon", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_438[0], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[0], "ninef^1", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_438[1], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[1], "Jimmys_Car", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_438[2], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[2], "Franklin_stealcar", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_438[3], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_438[3], "bjxl^1", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			iLocal_353 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-59f, -1095.8f, 25.4223f, 10f, 4f, 3f, func_337(-67.2459f), 0, 7);
			iLocal_354 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-37.4137f, -1108.567f, 25.4223f, 4f, 4f, 3f, func_337(72.3459f), 0, 7);
			func_69();
			func_60(1, 1, 1, 0, 0);
			AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			UNK1::_0x48621C9FCA3EBD28(4);
			SYSTEM::SETTIMERB(0);
			SYSTEM::SETTIMERA(0);
			iLocal_316 = 0;
			iLocal_585 = 1;
		}
	}
	if (iLocal_585 == 1)
	{
		switch (iLocal_316)
		{
			case 0:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					UI::CLEAR_PRINTS();
					UI::CLEAR_HELP(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
					{
						ENTITY::SET_ENTITY_COLLISION(Local_525[iLocal_317 /*7*/], true, 0);
						ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], vLocal_410, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], fLocal_314);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_525[iLocal_317 /*7*/], 1084227584);
						ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_317 /*7*/], true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_525[iLocal_317 /*7*/], 3);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_317 /*7*/], false, 0, 0);
					}
					CAM::STOP_GAMEPLAY_HINT(1);
					STREAMING::REMOVE_ANIM_DICT(sLocal_429);
					STREAMING::REMOVE_ANIM_DICT(sLocal_423);
					func_56();
					iLocal_316++;
				}
				break;
		}
		func_188(vLocal_401, fLocal_304, 0);
		if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_255 = 1;
		}
		if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			iLocal_585 = 2;
		}
		else
		{
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())))
			{
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, fLocal_305, 0, 0);
			}
			if (!PED::IS_PED_INJURED(Local_505))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lamar", ENTITY::GET_ENTITY_MODEL(Local_505)))
				{
					ENTITY::SET_ENTITY_COORDS(Local_505, vLocal_403, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(Local_505, fLocal_306);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
					{
						AI::TASK_ENTER_VEHICLE(Local_505, iLocal_434, 40000, 0, 1f, 1, 0);
						PED::FORCE_PED_MOTION_STATE(Local_505, -668482597, 0, 1, 0);
					}
				}
			}
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_423);
	}
	if (iLocal_585 == 2)
	{
		UNK1::_0x81CBAE94390F9F89();
		func_266();
		func_60(0, 1, 1, 0, 0);
		SYSTEM::SETTIMERA(0);
		iLocal_316 = 0;
		iLocal_585 = 0;
		iLocal_584 = 10;
		func_350(1, 0);
	}
	if (iLocal_585 == 3)
	{
		func_3();
		UNK1::_0x81CBAE94390F9F89();
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE(0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE() || !func_188(vLocal_401, fLocal_304, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_434, vLocal_401, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_434, fLocal_304);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_COLLISION(Local_525[iLocal_317 /*7*/], true, 0);
			ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], fLocal_314);
			ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], vLocal_410, 1, 0, 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_525[iLocal_317 /*7*/], 1084227584);
			ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_317 /*7*/], true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_525[iLocal_317 /*7*/], 3);
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_317 /*7*/], false, 0, 0);
		}
		if (!PED::IS_PED_INJURED(Local_505))
		{
			ENTITY::SET_ENTITY_COORDS(Local_505, vLocal_403, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_505, fLocal_306);
		}
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_402, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_305);
		iLocal_585 = 2;
	}
}

int func_350(int iParam0, int iParam1)
{
	if (GAMEPLAY::IS_BIT_SET(Global_93232.f_20, 17))
	{
		return 0;
	}
	return func_351(iParam0, iParam1);
}

int func_351(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_352(iParam0, iParam1);
}

int func_352(int iParam0, int iParam1)
{
	if (func_29(14) && !func_363(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25706 != 0 && !Global_71205)
	{
		return 0;
	}
	if (func_362(&Global_4268566))
	{
		if (func_360(&Global_4268566, iParam0))
		{
			return 0;
		}
		if (func_353(&Global_4268566, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_353(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_29(14) && !func_363(iParam1))
	{
		return 0;
	}
	if (func_360(uParam0, iParam1))
	{
		return 0;
	}
	if (func_359(uParam0) < 0f)
	{
		func_358(uParam0, 0);
	}
	func_356(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_354(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_354(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_29(14) && !func_363(iParam1))
	{
		return 0;
	}
	if (func_360(uParam0, iParam1))
	{
		return 0;
	}
	if (func_359(uParam0) < 0f)
	{
		func_358(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_355(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_355(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_356(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_357(uParam0, iVar0);
		iVar0++;
	}
	func_358(uParam0, (Global_4268565 - 0.5f));
}

void func_357(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_358(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_359(var uParam0)
{
	return uParam0->f_80;
}

bool func_360(var uParam0, int iParam1)
{
	return func_361(uParam0, iParam1) != -1;
}

int func_361(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_362(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_363(int iParam0)
{
	switch (iParam0)
	{
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
		
		default:
	}
	return 0;
}

void func_364()
{
	int iVar0;
	
	if (iLocal_585 == 4)
	{
		if (iLocal_316 != 99)
		{
			if (iLocal_470 == 0)
			{
				iLocal_470 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_402, 1, 0, 0, 1);
			INTERIOR::_LOAD_INTERIOR(iLocal_470);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_470))
			{
				if (bLocal_288)
				{
					func_263(vLocal_402, 335.0142f, 0, 0);
					iLocal_316 = 99;
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_402, 1, 0, 0, 1);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
					STREAMING::LOAD_SCENE(vLocal_402);
					ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
					iLocal_316 = 99;
				}
			}
		}
		else
		{
			func_348();
			if (((((func_258(vLocal_403, fLocal_306, 0) && func_345(34.0424f, -638.7692f, 30.6252f, 0)) && func_344(44.0424f, -638.7692f, 30.6252f, 0)) && func_188(vLocal_401, fLocal_304, 0)) && func_347(0)) && func_346(0))
			{
				func_185(0, -1, 0);
				func_339();
				func_338();
				func_336();
				iLocal_269 = 1;
				bLocal_295 = false;
				iLocal_585 = 0;
			}
		}
	}
	if (iLocal_585 == 0)
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_423);
		STREAMING::REQUEST_ANIM_DICT(sLocal_429);
		STREAMING::REQUEST_MODEL(iLocal_497);
		if ((((((func_343(vLocal_408, fLocal_312, 0) && func_340(vLocal_409, fLocal_313, 0)) && func_258(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_423)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_429)) && STREAMING::HAS_MODEL_LOADED(iLocal_497)) && (!PED::IS_PED_INJURED(Local_505) && PED::_0x7350823473013C02(Local_505)))
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				func_259(&Local_588, 6, Local_509, "JIMMY", 0, 1);
				func_259(&Local_588, 4, vLocal_506.x, "SIMEON", 0, 1);
				func_367(&Local_588, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
				while (!func_347(0))
				{
					SYSTEM::WAIT(0);
				}
				if (iLocal_316 != 99)
				{
					func_46(vLocal_410, 300f, 1, 10000);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
			{
				if (!bLocal_295)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_317 /*7*/]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/]);
					}
					ENTITY::SET_ENTITY_COLLISION(Local_525[iLocal_317 /*7*/], true, 0);
					ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_317 /*7*/], false);
					ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], fLocal_314);
					ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], vLocal_410, 1, 0, 0, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_317 /*7*/], false, 0, 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_525[iLocal_317 /*7*/], 0);
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], -1);
					}
					AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					if (CAM::IS_SCREEN_FADED_OUT() && CAM::_0xEE778F8C7E1142E2(0) == 4)
					{
						AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
						SYSTEM::WAIT(100);
					}
					else
					{
						AI::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 100, 0);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_525[iLocal_317 /*7*/], true, 0);
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, 0);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_318 /*7*/], false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_318 /*7*/], false, 0, 0);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_525[iLocal_318 /*7*/], 0);
				ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_318 /*7*/], fLocal_315);
				ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_318 /*7*/], vLocal_411, 1, 0, 0, 1);
			}
			iVar0 = 0;
			if (!PED::IS_PED_INJURED(Local_505))
			{
				AI::CLEAR_PED_TASKS_IMMEDIATELY(Local_505);
				Local_505.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_429, "leadin_loop", 1000f, -4f, 5, 145, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_505.f_4, 1f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_505.f_4, 1);
					iVar0 = 1;
				}
				else
				{
					AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_429, "leadin_action", 1000f, -4f, 5, 145, 1148846080, 0);
					PED::SET_SYNCHRONIZED_SCENE_RATE(Local_505.f_4, 0.98f);
					PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_505.f_4, 0);
				}
				AI::TASK_LOOK_AT_ENTITY(Local_505, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				iLocal_463 = OBJECT::CREATE_OBJECT(iLocal_497, -30.99f, -1094.082f, 25.423f, 1, true, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_463, Local_505, PED::GET_PED_BONE_INDEX(Local_505, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_497);
			}
			UI::CLEAR_HELP(1);
			CAM::DESTROY_ALL_CAMS(0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			func_60(0, 1, 1, 0, 0);
			UI::DISPLAY_HUD(1);
			UI::DISPLAY_RADAR(true);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-66.2173f, -1121.954f, 14.8642f, -41.2857f, -1111.164f, 34.8642f, true, 1);
			STREAMING::REMOVE_ANIM_DICT(sLocal_418);
			func_335(1);
			func_333();
			AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_ON");
			if (!CAM::IS_SCREEN_FADED_IN())
			{
				if (!CAM::IS_SCREEN_FADING_IN())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				while (!CAM::IS_SCREEN_FADED_IN())
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_525[0 /*7*/], 0))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[0 /*7*/], 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_525[1 /*7*/], 0))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[1 /*7*/], 1);
					}
					SYSTEM::WAIT(0);
				}
			}
			if (iVar0 && !PED::IS_PED_INJURED(Local_505))
			{
				Local_505.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(-30.995f, -1094.7f, 25.423f, 0f, 0f, -18.72f, 2);
				AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_429, "leadin_action", 8f, -4f, 5, 145, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(Local_505.f_4, 0f);
				PED::SET_SYNCHRONIZED_SCENE_RATE(Local_505.f_4, 0.97f);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(Local_505.f_4, 0);
			}
			if (!PED::IS_PED_INJURED(Local_509) && !PED::IS_PED_INJURED(vLocal_506.x))
			{
				iLocal_372 = PED::CREATE_SYNCHRONIZED_SCENE(-39.546f, -1092.79f, 25.422f, 0f, 0f, 0f, 2);
				AI::TASK_SYNCHRONIZED_SCENE(vLocal_506.x, iLocal_372, sLocal_423, "_leadin_simeon", 1000f, -1.5f, 5, 0, 1148846080, 0);
				AI::TASK_SYNCHRONIZED_SCENE(Local_509, iLocal_372, sLocal_423, "_leadin_jimmy", 1000f, -1.5f, 5, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_372, 0.35f);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			func_366();
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			SYSTEM::SETTIMERA(0);
			iLocal_316 = 0;
			iLocal_585 = 1;
		}
	}
	if (iLocal_585 == 1)
	{
		func_366();
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		if ((!iLocal_300[52] && !PED::IS_PED_INJURED(vLocal_506.x)) && !PED::IS_PED_INJURED(Local_509))
		{
			func_365();
			iLocal_300[52] = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[0 /*7*/], 0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[0 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[1 /*7*/], 0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[1 /*7*/], 1);
		}
		if (iLocal_296)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				CAM::_0x2A2173E46DAECD12(1, iLocal_586);
				iLocal_296 = 0;
			}
			else
			{
				CONTROLS::DISABLE_CONTROL_ACTION(0, 0, 1);
			}
		}
		switch (iLocal_316)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -34.0797f, -1094.802f, 25.17234f, -35.01475f, -1097.344f, 27.67234f, 9.5f, 0, 1, 0))
				{
					CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(iLocal_438[1], 0), -1, 2500, 2000, 0);
					CAM::_0xF8BDBF3D573049A1(0.6f);
					CAM::_0x5D7B620DAE436138(0.015f);
					CAM::_0xC92717EF615B6704(0.05f);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::GET_IS_MULTIPLAYER_BRIEF(1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
					AI::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -39.6f, -1097f, 25.6f, 1f, -1, 0.25f, 5, 1193033728);
					if (!PED::IS_PED_INJURED(vLocal_506.x))
					{
						AI::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), vLocal_506.x, -1, 2048, 2);
					}
					iLocal_316++;
				}
				break;
		}
		if ((!PED::IS_PED_INJURED(vLocal_506.x) && !PED::IS_PED_INJURED(Local_509)) && !PED::IS_PED_INJURED(Local_505))
		{
			if (!UI::DOES_BLIP_EXIST(vLocal_506.y))
			{
				vLocal_506.y = func_331(vLocal_506.x, 0, 0);
			}
			PED::SET_PED_MOVE_RATE_OVERRIDE(PLAYER::PLAYER_PED_ID(), 0.87f);
			if (func_329(&Local_527, 0))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) >= 0.9f)
				{
					func_273();
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_463))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_505, -2033458239))
				{
					func_265(&iLocal_463, 1);
				}
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -38.59081f, -1095.907f, 25.4223f, -51.04851f, -1100.539f, 27.4223f, 10.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.40492f, -1086.267f, 25.57324f, -31.38518f, -1084.528f, 27.57324f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -37.61462f, -1108.704f, 25.45593f, -38.44304f, -1110.918f, 27.43603f, 2.25f, 0, 1, 0)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_372) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_372) >= 0.99f))
			{
				iLocal_585 = 2;
			}
		}
		CUTSCENE::REQUEST_CUTSCENE(sLocal_415, 8);
		func_99(sLocal_415);
	}
	if (iLocal_585 == 2)
	{
		func_266();
		func_273();
		func_265(&iLocal_463, 1);
		SYSTEM::SETTIMERA(0);
		iLocal_316 = 0;
		iLocal_585 = 0;
		iLocal_584 = 9;
	}
	if (iLocal_585 == 3)
	{
		iLocal_585 = 2;
	}
}

void func_365()
{
	AUDIO::START_PRELOADED_CONVERSATION();
	Global_16814 = 0;
}

void func_366()
{
	CONTROLS::DISABLE_CONTROL_ACTION(0, 21, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 22, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 24, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 257, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 44, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 36, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 23, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 263, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 264, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 143, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 262, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 261, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 25, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 45, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 141, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 142, 1);
	CONTROLS::DISABLE_CONTROL_ACTION(0, 37, 1);
}

bool func_367(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	func_327(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15829 = 0;
	Global_15831 = 0;
	Global_15836 = 0;
	Global_16813 = 0;
	Global_16815 = 1;
	Global_16819 = 0;
	Global_16817 = iParam7;
	Global_2621441 = 0;
	return func_319(sParam2, iParam3, 0);
}

void func_368()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	STREAMING::_0xA76359FC80B2438E(1f);
	if (iLocal_585 == 4)
	{
		if (iLocal_316 != 99)
		{
			if (bLocal_288)
			{
				func_263(vLocal_401, 335.0142f, 0, 0);
				iLocal_316 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vLocal_401, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(vLocal_401);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_316 = 99;
			}
		}
		else
		{
			if (iLocal_470 == 0)
			{
				iLocal_470 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
			}
			INTERIOR::_LOAD_INTERIOR(iLocal_470);
			func_348();
			if ((((func_258(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0) && func_345(34.0424f, -638.7692f, 30.6252f, 0)) && func_344(44.0424f, -638.7692f, 30.6252f, 0)) && func_188(vLocal_401, fLocal_304, 0)) && INTERIOR::IS_INTERIOR_READY(iLocal_470))
			{
				func_185(0, -1, 0);
				func_372();
				func_339();
				func_338();
				func_336();
				func_335(1);
				bLocal_289 = false;
				iLocal_585 = 0;
			}
		}
	}
	if (iLocal_585 == 0)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
		VEHICLE::REQUEST_VEHICLE_RECORDING(330, sLocal_413);
		VEHICLE::REQUEST_VEHICLE_RECORDING(331, sLocal_413);
		VEHICLE::REQUEST_VEHICLE_RECORDING(332, sLocal_413);
		VEHICLE::REQUEST_VEHICLE_RECORDING(333, sLocal_413);
		STREAMING::REQUEST_ANIM_DICT(sLocal_418);
		if (((((func_346(1) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(330, sLocal_413)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(331, sLocal_413)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(332, sLocal_413)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(333, sLocal_413)) && (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_418) || !bLocal_284))
		{
			UI::CLEAR_PRINTS();
			UI::CLEAR_HELP(1);
			func_266();
			func_277(&Local_527, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			UNK1::_STOP_RECORDING_AND_SAVE_CLIP();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_434, vLocal_401, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_434, fLocal_304);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_434, 1084227584);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_318 /*7*/], false, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_525[iLocal_318 /*7*/], 3);
			}
			func_334(&(iLocal_438[0]), 1);
			func_334(&(iLocal_438[1]), 1);
			func_334(&(iLocal_438[2]), 1);
			func_334(&(iLocal_438[3]), 1);
			VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(0);
			GAMEPLAY::CLEAR_AREA(-42.8436f, -1111.725f, 25.4355f, 100f, 1, 0, 0, false);
			func_346(0);
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-66.2173f, -1121.954f, 14.8642f, -41.2857f, -1111.164f, 34.8642f, false, 1);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_DEALERSHIP"))
			{
				AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_TO_DEALERSHIP");
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_438)
			{
				if (iVar0 == 0)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_438[0], -49.9f, -1094.7f, 26.0416f, 0, 0, 1);
				}
				else if (iVar0 == 1)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_438[1], -46.5f, -1097.5f, 26.35f, 0, 0, 1);
				}
				else if (iVar0 == 2)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_438[2], -41.7f, -1099.5f, 26.0304f, 0, 0, 1);
				}
				else if (iVar0 == 3)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_438[3], -36.8f, -1101.2f, 26.3321f, 0, 0, 1);
				}
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_438[iVar0], true);
				iVar0++;
			}
			if (!PED::IS_PED_INJURED(Local_505))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_505, true, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_505, false);
				ENTITY::SET_ENTITY_COLLISION(Local_505, true, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_505, false);
			}
			GAMEPLAY::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 1), 10f, 1, 0, 0, false);
			GAMEPLAY::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 1), 200f, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_525[iLocal_317 /*7*/], 1);
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/]))
				{
					AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], -1);
				}
				if (ENTITY::GET_ENTITY_SPEED(Local_525[iLocal_317 /*7*/]) < 30f)
				{
					vVar1 = { ENTITY::GET_ENTITY_ROTATION(Local_525[iLocal_317 /*7*/], 2) };
					if (GAMEPLAY::ABSF(vVar1.y) < 30f && GAMEPLAY::ABSF(vVar1.x) < 45f)
					{
						bLocal_289 = true;
					}
				}
			}
			if (bLocal_289)
			{
				if (!bLocal_268)
				{
					PATHFIND::SET_ROADS_IN_AREA(-89.0913f, -1133.143f, 0.886f, 13.5596f, -1053.273f, 53.886f, 1, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
					{
						AI::TASK_VEHICLE_DRIVE_TO_COORD(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], -27.3f, -1082f, 26.2f, 15f, 0, ENTITY::GET_ENTITY_MODEL(Local_525[iLocal_317 /*7*/]), 4456448, 2f, 5f);
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
			{
				if (!bLocal_268)
				{
					if (iLocal_317 == 0)
					{
						if (bLocal_267)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/], 330, sLocal_413, 1);
							func_371(&(Local_525[iLocal_317 /*7*/]), 4535f);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/], 331, sLocal_413, 1);
							func_371(&(Local_525[iLocal_317 /*7*/]), 2200f);
						}
					}
					else if (bLocal_267)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/], 332, sLocal_413, 1);
						func_371(&(Local_525[iLocal_317 /*7*/]), 4435f);
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/], 333, sLocal_413, 1);
						func_371(&(Local_525[iLocal_317 /*7*/]), 3000f);
					}
					VEHICLE::_0x1F2E4E06DEA8992B(Local_525[iLocal_317 /*7*/], 1);
				}
			}
			CAM::DESTROY_ALL_CAMS(0);
			if (bLocal_284)
			{
				iLocal_455 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				if (bLocal_267)
				{
					iLocal_342 = PED::CREATE_SYNCHRONIZED_SCENE(-58.096f, -1099.135f, 25.565f, 0f, 0f, -20f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_455, iLocal_342, "car_dealership_int_ltr_cam", sLocal_418);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_342, 0f);
				}
				else
				{
					iLocal_342 = PED::CREATE_SYNCHRONIZED_SCENE(-58.096f, -1101.335f, 25.565f, 0f, 0f, -20f, 2);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_455, iLocal_342, "car_dealership_int_rtl_cam", sLocal_418);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_342, 0f);
				}
			}
			else
			{
				iLocal_455 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::_0xD1B0F412F109EA5D(iLocal_455, 2);
				if (bLocal_268)
				{
					CAM::_0x0FB82563989CF4FB(iLocal_455, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.54986f, -1116.585f, 27.78851f, 0.939515f, -0.028141f, -58.80625f, 35.0707f, 1, 2), 0, 3);
				}
				else if (bLocal_267)
				{
					CAM::_0x0FB82563989CF4FB(iLocal_455, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.71259f, -1116.481f, 27.74226f, 0.890156f, -0.013359f, -38.18335f, 35.0707f, 1, 2), 0, 3);
				}
				else
				{
					CAM::_0x0FB82563989CF4FB(iLocal_455, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.88025f, -1116.144f, 27.74217f, 0.890156f, -0.013359f, -94.54407f, 35.0707f, 1, 2), 0, 3);
				}
				CAM::_0x0FB82563989CF4FB(iLocal_455, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.58225f, -1116.546f, 27.78374f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, 1, 2), 5000, 1);
				CAM::_0x0FB82563989CF4FB(iLocal_455, CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", -77.09956f, -1117.414f, 27.78397f, 0.890799f, -0.014147f, -60.93074f, 35.0707f, 1, 2), 6700, 1);
			}
			CAM::SET_CAM_ACTIVE(iLocal_455, true);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			func_60(1, 1, 1, 0, 0);
			UI::DISPLAY_HUD(0);
			UI::DISPLAY_RADAR(false);
			AUDIO::TRIGGER_MUSIC_EVENT("ARM1_RADIO_OFF");
			if (bLocal_268)
			{
				SYSTEM::SETTIMERB(1500);
			}
			else
			{
				SYSTEM::SETTIMERB(0);
			}
			UNK1::_0x293220DA1B46CEBC(4f, 12f, 4);
			func_56();
			bLocal_295 = false;
			iLocal_255 = 0;
			iLocal_316 = 0;
			iLocal_585 = 1;
		}
	}
	if (iLocal_585 == 1)
	{
		CONTROLS::SET_PAD_SHAKE(0, 0, 0);
		func_258(-37.542f, -1084.87f, 25.4344f, 246.4778f, 0);
		switch (iLocal_316)
		{
			case 0:
				if (SYSTEM::TIMERB() > 4500 && !bLocal_295)
				{
					ENTITY::SET_ENTITY_COLLISION(Local_525[iLocal_317 /*7*/], false, 0);
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_317 /*7*/]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_317 /*7*/], true);
					}
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_423);
				STREAMING::REQUEST_ANIM_DICT(sLocal_429);
				if (bLocal_267)
				{
					vVar2 = { vLocal_408 };
					vVar3 = { vLocal_409 };
				}
				else
				{
					vVar2 = { -51.6f, -1091.9f, 25.9f };
					vVar3 = { -51f, -1090.1f, 25.7f };
				}
				if (func_343(vVar2, fLocal_312, 0) && func_340(vVar3, fLocal_313, 0))
				{
					func_259(&Local_588, 6, Local_509, "JIMMY", 0, 1);
					func_259(&Local_588, 4, vLocal_506.x, "SIMEON", 0, 1);
					func_367(&Local_588, "ARM1AUD", "ARM1_MCS1LI", 7, 0, 0, 0, 0);
					if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_423) && SYSTEM::TIMERB() > 8500)
					{
						iLocal_585 = 2;
					}
				}
				if (!iLocal_300[51])
				{
					if (SYSTEM::TIMERB() > 2500)
					{
						func_55("AR1_SHOWROOM", 13000);
						iLocal_300[51] = 1;
					}
				}
				if (!iLocal_296)
				{
					if (SYSTEM::TIMERB() > 8300)
					{
						iVar4 = CAM::_0xEE778F8C7E1142E2(0);
						iVar5 = CAM::_0xEE778F8C7E1142E2(1);
						if (((iVar4 == 4 && iVar5 != 4) && CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4) || (iVar4 != 4 && (iVar5 == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)))
						{
							iLocal_586 = iVar5;
							CAM::_0x2A2173E46DAECD12(1, iVar4);
							iLocal_296 = 1;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
				{
					if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(Local_525[iLocal_317 /*7*/]))
					{
						if (SYSTEM::TIMERB() > 8000)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_317 /*7*/], false, 0, 0);
						}
					}
				}
				if (SYSTEM::TIMERB() > 5000)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_525[0 /*7*/], 0))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[0 /*7*/], 1);
					}
					if (!ENTITY::IS_ENTITY_DEAD(Local_525[1 /*7*/], 0))
					{
						VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[1 /*7*/], 1);
					}
				}
				break;
		}
		if (func_369(1000))
		{
			iLocal_255 = 1;
			iLocal_585 = 3;
		}
		func_347(0);
	}
	if (iLocal_585 == 2)
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(330, sLocal_413);
		VEHICLE::REMOVE_VEHICLE_RECORDING(331, sLocal_413);
		VEHICLE::REMOVE_VEHICLE_RECORDING(332, sLocal_413);
		VEHICLE::REMOVE_VEHICLE_RECORDING(333, sLocal_413);
		VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-89.0913f, -1133.143f, 0.886f, 13.5596f, -1053.273f, 53.886f, 1);
		iLocal_316 = 0;
		iLocal_585 = 0;
		iLocal_584 = 8;
	}
	if (iLocal_585 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				SYSTEM::WAIT(0);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_434, 0))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_434, vLocal_401, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_434, fLocal_304);
		}
		bLocal_295 = false;
		iLocal_585 = 2;
	}
}

int func_369(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = GAMEPLAY::GET_GAME_TIMER();
		}
		Global_28 = GAMEPLAY::GET_GAME_TIMER();
		if ((GAMEPLAY::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_370())
			{
				Global_27 = GAMEPLAY::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_370()
{
	if (UI::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 18) || CONTROLS::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_371(int iParam0, float fParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
		{
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*iParam0, (fParam1 - VEHICLE::GET_TIME_POSITION_IN_RECORDING(*iParam0)));
		}
	}
}

void func_372()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], 0))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], -1);
		}
	}
}

void func_373()
{
	struct<82> Var0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	
	if (iLocal_585 == 4)
	{
		if (bLocal_288)
		{
			func_263(35.2234f, -646.9493f, 30.6292f, 335.0142f, 0, 0);
			iLocal_316 = 99;
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 35.2234f, -646.9493f, 30.6292f, 1, 0, 0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			STREAMING::LOAD_SCENE(35.2234f, -646.9493f, 30.6292f);
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			iLocal_316 = 99;
		}
		func_348();
		func_385(180, 0, 0, 1, 0);
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_413);
		while (((((!ENTITY::DOES_ENTITY_EXIST(Local_505) || !ENTITY::DOES_ENTITY_EXIST(Local_525[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_525[1 /*7*/])) || !STREAMING::HAS_MODEL_LOADED(joaat("police3"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_413))
		{
			func_258(-25.356f, -1086.305f, 25.5721f, 52.8017f, 0);
			func_345(34.0424f, -638.7692f, 30.6252f, 0);
			func_344(44.0424f, -638.7692f, 30.6252f, 0);
			STREAMING::REQUEST_MODEL(joaat("police3"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_413);
			SYSTEM::WAIT(0);
		}
		func_185(0, -1, 0);
		func_372();
		func_339();
		func_338();
		func_384();
		PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
		PED::SET_CREATE_RANDOM_COPS(0);
		GAMEPLAY::CLEAR_AREA_OF_COPS(44.4942f, -634.8408f, 34.55825f, 400f, 0);
		iLocal_432 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 87.5619f, -588.9714f, 30.599f, 160.1988f, 1, 1, 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_432, true, 1, 0);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_432, 1);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_432, 300, sLocal_413, 1, 0, 786603);
		func_371(&iLocal_432, 10500f);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
		iLocal_445[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_432, 6, joaat("s_m_y_cop_01"), -1, 1, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_445[0], joaat("weapon_pistol"), -1, false, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[0], 2, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[0], 0);
		iLocal_445[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_432, 6, joaat("s_m_y_cop_01"), 0, 1, true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_445[1], joaat("weapon_pistol"), -1, false, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[1], 2, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[1], 0);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
		if (!PED::IS_PED_INJURED(Local_505))
		{
			ENTITY::SET_ENTITY_COORDS(Local_505, -32.912f, -1086.304f, 29.2035f, 1, 0, 0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_505, true);
			ENTITY::SET_ENTITY_COLLISION(Local_505, false, 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_505, false, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_317 /*7*/], true, 1, 0);
			if (iLocal_317 == 0)
			{
				ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], 337.9254f);
				ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 35.9457f, -646.1738f, 30.6258f, 1, 0, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], 335.015f);
				ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 35.2234f, -646.9493f, 30.6292f, 1, 0, 0, 1);
			}
		}
		func_385(180, 0, 0, 1, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-50.5f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		SYSTEM::WAIT(500);
		iLocal_585 = 0;
	}
	if (iLocal_585 == 0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_MAX_WANTED_LEVEL(2);
		PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
		GAMEPLAY::ENABLE_DISPATCH_SERVICE(3, 1);
		PED::SET_CREATE_RANDOM_COPS(0);
		GAMEPLAY::CLEAR_AREA_OF_COPS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 0);
		func_383(1);
		bLocal_268 = false;
		bLocal_267 = false;
		iLocal_270 = 0;
		if (bLocal_294)
		{
			Local_526.f_1 = 0;
		}
		if (!Local_526.f_1)
		{
			iLocal_300[19] = 0;
		}
		func_336();
		func_335(1);
		func_382(9, 1);
		func_381(1);
		func_71(48, 1);
		func_71(47, 1);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LOSE_COPS"))
		{
			AUDIO::START_AUDIO_SCENE("ARM_1_LOSE_COPS");
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GAMEPLAY::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0, 0, 0, 0, false, 0);
		}
		func_56();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_525[iLocal_317 /*7*/], 1);
			ENTITY::SET_ENTITY_INVINCIBLE(Local_525[iLocal_317 /*7*/], false);
			VEHICLE::_0x1AA8A837D2169D94(Local_525[iLocal_317 /*7*/], 0);
		}
		func_380(2, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		UNK1::_0x293220DA1B46CEBC(0f, 15f, 3);
		func_838(2, "LOSE_COPS", 0, 0, 0, 1);
		SYSTEM::SETTIMERA(0);
		iLocal_290 = 0;
		iLocal_349 = 0;
		iLocal_348 = GAMEPLAY::GET_GAME_TIMER();
		iLocal_366 = 0;
		iLocal_316 = 0;
		iLocal_585 = 1;
	}
	if (iLocal_585 == 1)
	{
		func_379(0, 1);
		if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_348) < 7000)
		{
			PLAYER::_0xBC9490CA15AEA8FB(PLAYER::PLAYER_ID());
			PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			PLAYER::_0xDC64D2C53493ED12(PLAYER::PLAYER_ID());
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_432, 0))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_432))
			{
				if (iLocal_349 == 0)
				{
					if (!PED::IS_PED_INJURED(iLocal_445[0]))
					{
						AI::TASK_ARREST_PED(iLocal_445[0], PLAYER::PLAYER_PED_ID());
					}
					if (!PED::IS_PED_INJURED(iLocal_445[1]))
					{
						AI::TASK_ARREST_PED(iLocal_445[1], PLAYER::PLAYER_PED_ID());
					}
					iLocal_349 = GAMEPLAY::GET_GAME_TIMER();
				}
				else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_349) > 2000)
				{
					func_57(&(iLocal_445[0]), 0);
					func_57(&(iLocal_445[1]), 0);
					func_334(&iLocal_432, 0);
				}
			}
		}
		switch (iLocal_316)
		{
			case 0:
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_348) > 120000 || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PED::SET_CREATE_RANDOM_COPS(1);
					iLocal_316++;
				}
				break;
		}
		if (!iLocal_300[75])
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_02", 0f);
				iLocal_300[75] = 1;
			}
		}
		if (func_377(&Local_527, vLocal_396, 0.001f, 0.001f, 2f, 1, Local_525[iLocal_317 /*7*/], "AR1_GOGARAGE", "", "CMN_GENGETBCK", 1, 0, 1, -1))
		{
			iLocal_585 = 2;
		}
		if (!iLocal_290)
		{
			if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_ARMENIAN_1_01", 0f);
				iLocal_290 = 1;
			}
		}
		if (UI::DOES_BLIP_EXIST(Local_527.f_5))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vLocal_396) < 10000f)
			{
				VEHICLE::REQUEST_VEHICLE_RECORDING(330, sLocal_413);
				VEHICLE::REQUEST_VEHICLE_RECORDING(331, sLocal_413);
				VEHICLE::REQUEST_VEHICLE_RECORDING(332, sLocal_413);
				VEHICLE::REQUEST_VEHICLE_RECORDING(333, sLocal_413);
				Var0.f_11 = 12;
				Var0.f_31 = 49;
				Var0.f_81 = 2;
				func_254(1, &Var0, 0);
				STREAMING::REQUEST_MODEL(Var0);
			}
			bVar1 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -58.52349f, -1072.446f, 25.51242f, -47.36769f, -1076.728f, 28.77682f, 14.75f, 0, 1, 0);
			bVar2 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -11.13597f, -1091.419f, 25.42208f, -24.34815f, -1126.346f, 29.78418f, 13f, 0, 1, 0);
			if (bVar1 || bVar2)
			{
				bLocal_267 = bVar1;
				iLocal_585 = 2;
			}
			if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.30199f, -1092.126f, 25.43398f, -34.19631f, -1089.122f, 28.43427f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -32.19282f, -1086.231f, 25.43401f, -35.28241f, -1094.512f, 28.43435f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -26.85529f, -1088.089f, 25.43394f, -28.94933f, -1094.195f, 28.43419f, 1.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.09365f, -1085.448f, 25.60689f, -32.26557f, -1081.161f, 28.40192f, 7.75f, 0, 1, 0))
			{
				bLocal_268 = true;
				iLocal_585 = 2;
			}
		}
		if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			func_57(&Local_505, 1);
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], 0))
			{
				if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!iLocal_300[45])
						{
							func_55("AR1_COPHELP1", 13000);
							iLocal_300[45] = 1;
							UI::FLASH_WANTED_DISPLAY(1);
						}
						else if (!iLocal_300[46])
						{
							UI::FLASH_WANTED_DISPLAY(0);
							func_55("AR1_COPHELP2", 13000);
							iLocal_300[46] = 1;
						}
						else if (!iLocal_300[47])
						{
							func_55("AR1_COPHELP2B", 13000);
							iLocal_300[47] = 1;
						}
						else if (!iLocal_300[48])
						{
							func_55("AR1_COPHELP3", 13000);
							iLocal_300[48] = 1;
						}
						else if (!iLocal_300[49])
						{
							func_55("AR1_DUCKHELP", 13000);
							iLocal_300[49] = 1;
						}
					}
				}
				if (!iLocal_300[50])
				{
					if (!func_329(&Local_527, 0))
					{
						func_268(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_MED", 4);
						iLocal_300[50] = 1;
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -21.09365f, -1085.448f, 25.60689f, -32.26557f, -1081.161f, 28.40192f, 7.75f, 0, 1, 0))
			{
				func_823(22);
			}
		}
		else
		{
			if (!iLocal_300[49] && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				func_55("AR1_DUCKHELP", 13000);
				iLocal_300[49] = 1;
			}
			if (!iLocal_270)
			{
				UI::FLASH_WANTED_DISPLAY(0);
				func_376(0, -1);
				iLocal_270 = 1;
			}
		}
		if (iLocal_300[49] && func_47("AR1_DUCKHELP"))
		{
			if (CONTROLS::IS_CONTROL_PRESSED(0, 73))
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_384) > 500)
				{
					UI::CLEAR_HELP(1);
				}
			}
			else
			{
				iLocal_384 = GAMEPLAY::GET_GAME_TIMER();
			}
		}
		if (!UI::DOES_BLIP_EXIST(Local_527))
		{
			if (!Local_526.f_1)
			{
				if (iLocal_300[49] || !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!iLocal_300[19])
					{
						if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (CONTROLS::_IS_INPUT_DISABLED(0))
							{
								func_55("AR1_RAGEBAR_KM", 13000);
							}
							else
							{
								func_55("AR1_RAGEBAR", 13000);
							}
							iLocal_300[19] = 1;
							UI::FLASH_ABILITY_BAR(10000);
						}
					}
				}
				if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
				{
					func_375();
					Local_526.f_1 = 1;
				}
			}
		}
		else
		{
			if (func_47("AR1_RAGEBAR"))
			{
				func_375();
			}
			if (GAMEPLAY::IS_PC_VERSION())
			{
				if (func_47("AR1_RAGEBAR_KM"))
				{
					func_375();
				}
			}
		}
		if (iLocal_470 == 0)
		{
			iLocal_470 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-38.62f, -1099.01f, 27.31f, "v_carshowroom");
		}
		bVar3 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -38.62f, -1099.01f, 27.31f) > 62500f;
		bVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -38.62f, -1099.01f, 27.31f) < 40000f;
		if (bVar4)
		{
			func_188(vLocal_401, fLocal_304, 0);
			STREAMING::REQUEST_ANIM_DICT(sLocal_418);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_470))
			{
				if (!func_374())
				{
					func_346(0);
				}
			}
			else
			{
				INTERIOR::_LOAD_INTERIOR(iLocal_470);
			}
		}
		else if (bVar3)
		{
			func_346(1);
			func_334(&(iLocal_438[0]), 1);
			func_334(&(iLocal_438[1]), 1);
			func_334(&(iLocal_438[2]), 1);
			func_334(&(iLocal_438[3]), 1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_434))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_434, 1)) > 40000f)
				{
					func_334(&iLocal_434, 1);
				}
			}
			STREAMING::REMOVE_ANIM_DICT(sLocal_418);
			if (INTERIOR::IS_INTERIOR_READY(iLocal_470))
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_470);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 1)) > 40000f)
			{
				func_823(13);
			}
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -26.27152f, -1083.751f, 25.43581f) < 40000f)
		{
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(-46.17491f, -1105.761f, 26.16539f, 35f, 0);
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -26.27152f, -1083.751f, 25.43581f) > 62500f)
		{
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
		switch (iLocal_366)
		{
			case 0:
				if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LOSE_COPS"))
					{
						AUDIO::STOP_AUDIO_SCENE("ARM_1_LOSE_COPS");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_DEALERSHIP"))
					{
						AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_TO_DEALERSHIP");
					}
					iLocal_366++;
				}
				break;
			}
	}
	if (iLocal_585 == 2)
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 75, 1);
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < iLocal_466)
		{
			func_265(&(iLocal_466[iVar5]), 0);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < iLocal_467)
		{
			func_265(&(iLocal_467[iVar5]), 0);
			iVar5++;
		}
		STREAMING::REMOVE_ANIM_DICT("map_objects");
		func_383(0);
		func_385(180, 0, 0, 1, 0);
		UI::FLASH_WANTED_DISPLAY(0);
		func_382(9, 0);
		func_273();
		SYSTEM::SETTIMERA(0);
		iLocal_316 = 0;
		iLocal_585 = 0;
		iLocal_584 = 7;
	}
	if (iLocal_585 == 3)
	{
		func_880(7, 1);
	}
}

int func_374()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[1]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_438[3]))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_375()
{
	if ((func_47("AR1_RAGEBAR") || func_47("AR1_RAGEHOW")) || func_47("AR1_RAGESTAT"))
	{
		UI::CLEAR_HELP(1);
	}
	if (GAMEPLAY::IS_PC_VERSION())
	{
		if (func_47("AR1_RAGEBAR_KM"))
		{
			UI::CLEAR_HELP(1);
		}
	}
	UI::FLASH_ABILITY_BAR(0);
}

void func_376(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_56189)
	{
	}
	Global_56189 = 0;
	if (bParam0)
	{
		Global_56190 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_56406[Global_68277[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_68277[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_68277[iVar0 /*9*/] > 0)
			{
				if (Global_68277[iVar0 /*9*/] == iParam1)
				{
					Global_68277[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

bool func_377(int iParam0, vector3 vParam1, vector3 vParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, bool bParam8, int iParam9, bool bParam10, int iParam11)
{
	return func_286(iParam0, vParam1, vParam2, func_317(), func_317(), iParam3, 5, 0, 0, 0, iParam4, sParam5, func_378(), func_378(), func_378(), func_378(), sParam6, 0, bParam8, sParam7, 0, iParam9, bParam10, iParam11, 0, 0, 0, 1, 1065353216);
}

var func_378()
{
	var uVar0;
	
	return uVar0;
}

int func_379(bool bParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_467[0]))
	{
		STREAMING::REQUEST_MODEL(iLocal_485);
		STREAMING::REQUEST_MODEL(iLocal_486);
		if (STREAMING::HAS_MODEL_LOADED(iLocal_485) && STREAMING::HAS_MODEL_LOADED(iLocal_486))
		{
			if (!bParam0)
			{
				if (!bParam1)
				{
					iLocal_466[0] = OBJECT::CREATE_OBJECT(iLocal_485, -72.785f, -682.29f, 32.77f, 1, true, 0);
					iLocal_466[1] = OBJECT::CREATE_OBJECT(iLocal_485, 25f, -664.5f, 30.76f, 1, true, 0);
					ENTITY::SET_ENTITY_HEADING(iLocal_466[0], 69.743f);
					ENTITY::SET_ENTITY_HEADING(iLocal_466[1], 339.996f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_466[0], true);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_466[1], true);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_466[0], 250);
					ENTITY::SET_ENTITY_LOD_DIST(iLocal_466[1], 250);
				}
				iLocal_467[0] = OBJECT::CREATE_OBJECT(iLocal_486, -72.785f, -682.29f, 32.87f, 1, true, 0);
				iLocal_467[1] = OBJECT::CREATE_OBJECT(iLocal_486, 25f, -664.5f, 30.86f, 1, true, 0);
				ENTITY::SET_ENTITY_HEADING(iLocal_467[0], -110.257f);
				ENTITY::SET_ENTITY_HEADING(iLocal_467[1], 339.996f);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_467[0], true);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_467[1], true);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_467[0], 250);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_467[1], 250);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_485);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_486);
			}
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_380(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_56191 = iParam0;
	if (!Global_56189)
	{
		Global_56189 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_68276)
		{
			if (Global_68277[iVar0 /*9*/] == iParam0)
			{
				Global_68277[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_381(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_332 == -1)
		{
			iLocal_332 = GAMEPLAY::_0x918C7B2D2FF3928B(25.40665f, -664.5241f, 30.37865f, 10.39396f, -690.48f, 35.73986f, 19.25f);
		}
		if (iLocal_333 == -1)
		{
			iLocal_333 = GAMEPLAY::_0x918C7B2D2FF3928B(14.52216f, -684.6943f, 30.08809f, -85.90411f, -678.752f, 38.47314f, 52.5f);
		}
	}
	else
	{
		if (iLocal_332 != -1)
		{
			GAMEPLAY::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_332);
			iLocal_332 = -1;
		}
		if (iLocal_333 != -1)
		{
			GAMEPLAY::REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(iLocal_333);
			iLocal_333 = -1;
		}
	}
}

void func_382(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_25704, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_25704, iParam0);
	}
}

void func_383(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105126, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_105120 = 1;
	}
	else
	{
		StringCopy(&Global_105126, "NULL", 24);
		Global_105120 = 0;
	}
}

void func_384()
{
	Local_526 = 99f;
	PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), (Local_526 / 100f), 1);
}

void func_385(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (iParam0 != 198)
	{
		if (Global_71205)
		{
			Global_2437022.f_75.f_227[iParam0] = iParam1;
		}
		else
		{
			Global_106070.f_7233.f_227[iParam0] = iParam1;
		}
		Global_33084[iParam0] = iParam2;
		Global_33283[iParam0] = 1;
		func_388(iParam0, bParam3, iParam4, 0);
		func_386(iParam0, iParam1);
	}
}

void func_386(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_387(0, 0);
			}
			else
			{
				func_387(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_387(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		GAMEPLAY::SET_BIT(&Global_104708, iParam0);
	}
	else
	{
		GAMEPLAY::CLEAR_BIT(&Global_104708, iParam0);
	}
	Global_104707 = 1;
}

bool func_388(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_1645162 = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_64 = 3;
	Var3.f_75 = 3;
	Var3.f_91 = 3;
	func_389(&Var3, iParam0);
	if (func_94())
	{
		iVar1 = Global_106070.f_7233.f_227[iParam0];
	}
	else
	{
		iVar1 = Global_2437022.f_75.f_227[iParam0];
	}
	iVar2 = Global_33482[iParam0];
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3)
	{
		Global_1645162 = 1;
	}
	else
	{
		bVar5 = true;
		if (GAMEPLAY::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != GAMEPLAY::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_33084[iParam0] && GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_1645162 = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || AI::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar5 = false;
						Global_1645162 = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar5 = false;
			Global_1645162 = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], 0);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_34678[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
								Global_1645162 = 1;
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_34)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_34));
								Global_1645162 = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_34)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_34)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_34)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_34));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_34479[iParam0] = 1;
					Global_34678[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
					if (iVar6 != 0)
					{
						if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_50)) != GAMEPLAY::GET_HASH_KEY(""))
						{
							if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_50)))
							{
								INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_50));
							}
						}
						if (iVar1 == 0)
						{
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES")) && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != GAMEPLAY::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("") && GAMEPLAY::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != GAMEPLAY::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar6);
						}
					}
					Global_34678[iParam0] = 1;
					Global_34479[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), true) < 250f)
					{
						uVar4 = OBJECT::_0xB48FCED898292E52(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::_0x52AF537A0C5B8AAD(uVar4))
						{
							if (iVar1 == 0)
							{
								OBJECT::_0x5C29F698D404C5E1(uVar4, 3);
								Global_34678[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::_0x899BA936634A322E(uVar4) != 6 && OBJECT::_0x899BA936634A322E(uVar4) != 7) && OBJECT::_0x899BA936634A322E(uVar4) != 8)
								{
									OBJECT::_0x5C29F698D404C5E1(uVar4, 10);
									Global_34678[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						GAMEPLAY::CLEAR_BIT(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						GAMEPLAY::SET_BIT(&(Global_32830[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_33283[iParam0] = 0;
				Global_33482[iParam0] = iVar1;
				if (!func_94())
				{
					if (!Global_34079[iParam0])
					{
						Global_34079[iParam0] = 1;
						Global_34278++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_389(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_64[iVar0] = 0;
		uParam0->f_75[iVar0] = 0;
		uParam0->f_91[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_33 = 0;
	StringCopy(&(uParam0->f_34), "", 32);
	StringCopy(&(uParam0->f_42), "", 32);
	StringCopy(&(uParam0->f_50), "", 32);
	uParam0->f_58 = { 0f, 0f, 0f };
	uParam0->f_61 = { 0f, 0f, 0f };
	uParam0->f_68 = { 0f, 0f, 0f };
	uParam0->f_71 = { 0f, 0f, 0f };
	uParam0->f_74 = 0f;
	uParam0->f_79 = { 0f, 0f, 0f };
	uParam0->f_82 = { 0f, 0f, 0f };
	uParam0->f_85 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_58 = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_61 = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_68 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_71 = { 190.75f, 31.25f, 21f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_58 = { 814f, -1750f, 20f };
			uParam0->f_61 = { 790f, -1899f, 35f };
			uParam0->f_64[0] = 1;
			uParam0->f_64[1] = 0;
			uParam0->f_64[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -112041596;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = -186270611;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_79 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_82 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_85 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_88 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_68 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_71 = { 13.6f, 20f, 8.9f };
			uParam0->f_74 = 48f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_79 = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_82 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_85 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_88 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_33 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_79 = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_82 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_58 = { 1206.8f, 1803f, 43.9f };
			uParam0->f_61 = { 1329f, 2060.4f, 143.9f };
			uParam0->f_64[0] = 0;
			uParam0->f_64[1] = 1;
			uParam0->f_64[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_42), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_42), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_42), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_68 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_71 = { 5.5f, 3f, 2f };
			uParam0->f_74 = -10f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_50), "csr_inMission", 32);
			uParam0->f_33 = 0;
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_68 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_71 = { 2.5f, 3f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_68 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_71 = { 3f, 1f, 3f };
			uParam0->f_74 = 0f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_68 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_71 = { 1f, 3f, 2f };
			uParam0->f_74 = -45f;
			uParam0->f_75[0] = 0;
			uParam0->f_75[1] = 1;
			uParam0->f_75[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_42), "v_hospital", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_42), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_42), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_42), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_79 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_82 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_85 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_88 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_91[0] = 0;
			uParam0->f_91[1] = 1;
			uParam0->f_91[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_79 = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_82 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_79 = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_82 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_79 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_82 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_79 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_82 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_79 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_82 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_79 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_82 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_33 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_85 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_88 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_91[0] = 1;
			uParam0->f_91[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_390()
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	
	vVar0 = { 39.0428f, -638.7694f, 30.6267f };
	fVar1 = 335.0152f;
	if (iLocal_318 == 0)
	{
		vVar0 = { 39.3644f, -638.0751f, 30.6267f };
		fVar1 = 335.0097f;
	}
	if (iLocal_585 == 4)
	{
		if (iLocal_316 != 99)
		{
			if (bLocal_288)
			{
				func_263(vVar0, fVar1, 0, 0);
				iLocal_316 = 99;
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar0, 1, 0, 0, 1);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
				STREAMING::LOAD_SCENE(vVar0);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				iLocal_316 = 99;
			}
		}
		else
		{
			func_348();
			if ((func_258(vVar0 + Vector(3f, 1f, 0f), 0, 0) && func_345(vVar0, 0)) && func_344(vVar0 + Vector(0f, 3f, 0f), 0))
			{
				func_185(0, -1, 0);
				func_372();
				func_417();
				func_338();
				func_416();
				func_384();
				func_415();
				PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
				{
					AUDIO::_DYNAMIC_MIXER_RELATED_FN(Local_525[iLocal_318 /*7*/], "ARM_1_LAMARS_CAR", 0);
				}
				bLocal_262 = true;
				iLocal_585 = 0;
			}
		}
	}
	if (iLocal_585 == 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_319, sLocal_413);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_320, sLocal_413);
		VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_321, sLocal_413);
		VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_413);
		STREAMING::REQUEST_MODEL(joaat("police3"));
		STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
		STREAMING::REQUEST_ANIM_DICT("map_objects");
		STREAMING::REQUEST_ANIM_DICT(sLocal_419);
		if (((((((((func_379(1, 0) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_319, sLocal_413)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_320, sLocal_413)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_321, sLocal_413)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_413)) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("map_objects")) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_419)) && (bLocal_262 || (!bLocal_262 && SYSTEM::TIMERB() > 1000)))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_318 /*7*/], false);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_318 /*7*/]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/]);
				}
				if (iLocal_318 == 1)
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_413);
				}
				else
				{
					VEHICLE::REMOVE_VEHICLE_RECORDING(5, sLocal_413);
				}
				VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_525[iLocal_318 /*7*/], 0, 0);
				VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(Local_525[iLocal_318 /*7*/], 1, 0);
			}
			func_397(0, 1);
			func_396();
			func_334(&iLocal_433, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), false);
			func_265(&iLocal_462, 0);
			func_57(&vLocal_521, 1);
			if (iLocal_473 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_473);
				iLocal_473 = 0;
			}
			if (!PED::IS_PED_INJURED(Local_505))
			{
				AI::CLEAR_PED_SECONDARY_TASK(Local_505);
				AI::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_505, 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Local_505, 0);
				AI::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_505, 20000, 2096, 4);
				AI::TASK_LOOK_AT_ENTITY(Local_505, PLAYER::PLAYER_PED_ID(), 20000, 2096, 4);
			}
			func_379(0, 0);
			ENTITY::PLAY_ENTITY_ANIM(iLocal_466[1], "p_sec_gate_01_s_close", "map_objects", 4f, 0, 1, 0, 0f, 0);
			ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_466[1]);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_466[1], false, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_467[0], false, 0);
			ENTITY::SET_ENTITY_COLLISION(iLocal_467[1], false, 0);
			UI::CLEAR_PRINTS();
			UI::CLEAR_HELP(1);
			func_69();
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			PED::SET_CREATE_RANDOM_COPS(0);
			GAMEPLAY::CLEAR_AREA(44.4942f, -634.8408f, 34.55825f, 200f, 1, 0, 0, false);
			iLocal_432 = VEHICLE::CREATE_VEHICLE(joaat("police3"), 7.542f, -578.0831f, 36.6983f, 336.2658f, 1, 1, 0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_432, true, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
			iLocal_445[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_432, 6, joaat("s_m_y_cop_01"), -1, 1, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_445[0], joaat("weapon_pistol"), -1, false, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[0], 2, 0);
			iLocal_445[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_432, 6, joaat("s_m_y_cop_01"), 0, 1, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_445[1], joaat("weapon_pistol"), -1, false, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_445[1], 2, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
			AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_525[iLocal_317 /*7*/], 1);
				VEHICLE::ROLL_DOWN_WINDOWS(Local_525[iLocal_317 /*7*/]);
				VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_525[iLocal_317 /*7*/], 1);
				if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/]))
				{
					AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], -1);
				}
			}
			AUDIO::STOP_AUDIO_SCENES();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_01");
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01");
			if (bLocal_262)
			{
				fVar2 = func_394(ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 1), iLocal_321, sLocal_413, 20);
				fVar3 = func_394(ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_318 /*7*/], 1), iLocal_320, sLocal_413, 20);
				if (fVar2 < 1000f)
				{
					fVar2 = 1000f;
				}
				if (fVar3 < 1000f)
				{
					fVar3 = 1000f;
				}
				if (GAMEPLAY::ABSF((fVar3 - fVar2)) < 750f)
				{
					if ((fVar3 - fVar2) > 0f)
					{
						fVar3 = (fVar3 + 500f);
					}
					else
					{
						fVar2 = (fVar2 + 500f);
					}
				}
				if (bLocal_246)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/], iLocal_320, sLocal_413, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_371(&(Local_525[iLocal_318 /*7*/]), 2500f);
						}
						else
						{
							func_371(&(Local_525[iLocal_318 /*7*/]), fVar3);
						}
						VEHICLE::_0x1F2E4E06DEA8992B(Local_525[iLocal_318 /*7*/], 1);
						VEHICLE::_0xDFFCEF48E511DB48(Local_525[iLocal_318 /*7*/], 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Lamar_Throttle_Blip", Local_525[iLocal_318 /*7*/], 0, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/], iLocal_321, sLocal_413, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_371(&(Local_525[iLocal_317 /*7*/]), 1500f);
						}
						else
						{
							func_371(&(Local_525[iLocal_317 /*7*/]), fVar2);
						}
						VEHICLE::_0x1F2E4E06DEA8992B(Local_525[iLocal_317 /*7*/], 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Franklin_Throttle_Blip", Local_525[iLocal_317 /*7*/], 0, 0, 0);
					}
				}
				else
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/], iLocal_320, sLocal_413, 1);
						func_371(&(Local_525[iLocal_318 /*7*/]), (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_320, sLocal_413) - 200f));
						VEHICLE::_0x1F2E4E06DEA8992B(Local_525[iLocal_318 /*7*/], 1);
						VEHICLE::_0xDFFCEF48E511DB48(Local_525[iLocal_318 /*7*/], 1);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/], iLocal_321, sLocal_413, 1);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_371(&(Local_525[iLocal_317 /*7*/]), 1500f);
						}
						else
						{
							func_371(&(Local_525[iLocal_317 /*7*/]), fVar2);
						}
						VEHICLE::_0x1F2E4E06DEA8992B(Local_525[iLocal_317 /*7*/], 1);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Franklin_Throttle_Blip", Local_525[iLocal_317 /*7*/], 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_505))
					{
						AI::TASK_LOOK_AT_COORD(Local_505, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_525[iLocal_318 /*7*/], -2.5729f, 0.4432f, 0.4889f), 20000, 2096, 4);
					}
				}
				iLocal_455 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				if (bLocal_276)
				{
					CAM::SET_CAM_PARAMS(iLocal_455, 43.50769f, -636.9529f, 31.88593f, -5.839731f, -0.072286f, 141.0281f, 28.4257f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_455, 43.44817f, -636.9048f, 31.88602f, -5.839731f, -0.072286f, 141.0281f, 28.4257f, 6500, 0, 0, 2);
				}
				else
				{
					CAM::SET_CAM_PARAMS(iLocal_455, 44.4942f, -634.8408f, 34.55825f, -9.333186f, 0.007438f, 141.6949f, 34.99998f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_455, 45.33989f, -634.41f, 31.49674f, -1.446978f, -0.011956f, 131.2897f, 34.99998f, 4500, 3, 3, 2);
				}
				CAM::SHAKE_CAM(iLocal_455, "HAND_SHAKE", 0.05f);
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				UI::DISPLAY_RADAR(false);
				UI::DISPLAY_HUD(0);
				func_60(1, 1, 1, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
			{
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_525[iLocal_317 /*7*/], 0);
				ENTITY::SET_ENTITY_INVINCIBLE(Local_525[iLocal_317 /*7*/], true);
				VEHICLE::_0x1AA8A837D2169D94(Local_525[iLocal_317 /*7*/], 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_318 /*7*/], 1), 40.40989f, -635.81f, 31.09674f) > SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 1), 40.40989f, -635.81f, 31.09674f))
					{
						func_393(5);
					}
				}
			}
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			AUDIO::START_AUDIO_SCENE("ARM_1_COPS_ARRIVE");
			func_56();
			SYSTEM::SETTIMERB(0);
			SYSTEM::SETTIMERA(0);
			Local_505.f_2 = 0;
			UNK1::_0x48621C9FCA3EBD28(4);
			iLocal_342 = -1;
			bLocal_283 = false;
			iLocal_297 = 0;
			iLocal_316 = 0;
			iLocal_585 = 1;
		}
	}
	if (iLocal_585 == 1)
	{
		func_392(1);
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_342))
		{
			fVar4 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_342);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[iLocal_318 /*7*/], 0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[iLocal_318 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[iLocal_317 /*7*/], 0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[iLocal_317 /*7*/], 1);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(iLocal_466[1]))
		{
			if (SYSTEM::TIMERB() > 10)
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_466[1], true, 0);
			}
		}
		switch (iLocal_316)
		{
			case 0:
				if (!iLocal_300[43])
				{
					if (bLocal_247)
					{
						if (bLocal_248)
						{
							if (func_367(&Local_588, "ARM1AUD", "ARM1_DISS4", 7, 0, 0, 0, 0))
							{
								iLocal_300[43] = 1;
							}
						}
						else if (func_367(&Local_588, "ARM1AUD", "ARM1_DISS3", 7, 0, 0, 0, 0))
						{
							iLocal_300[43] = 1;
						}
					}
					else if (bLocal_246)
					{
						if (func_367(&Local_588, "ARM1AUD", "ARM1_DISS1", 7, 0, 0, 0, 0))
						{
							iLocal_300[43] = 1;
						}
					}
					else if (func_367(&Local_588, "ARM1AUD", "ARM1_DISS2", 7, 0, 0, 0, 0))
					{
						iLocal_300[43] = 1;
					}
				}
				if (bLocal_262)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_318 /*7*/]))
						{
							if ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_320, sLocal_413) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_525[iLocal_318 /*7*/])) < 200f)
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_525[iLocal_318 /*7*/], 0f);
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_317 /*7*/]))
						{
							if ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_321, sLocal_413) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_525[iLocal_317 /*7*/])) < 200f)
							{
								VEHICLE::SET_PLAYBACK_SPEED(Local_525[iLocal_317 /*7*/], 0f);
							}
						}
					}
				}
				STREAMING::REQUEST_MODEL(joaat("police3"));
				STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
				STREAMING::REQUEST_ANIM_DICT(sLocal_419);
				if (((((SYSTEM::TIMERB() > 4500 || !bLocal_262) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_419)) && iLocal_300[43])
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0)) && !PED::IS_PED_INJURED(Local_505))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_318 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/]);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_320, sLocal_413);
						ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_318 /*7*/], false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/], iLocal_319, sLocal_413, 0);
						VEHICLE::_0x1F2E4E06DEA8992B(Local_525[iLocal_318 /*7*/], 0);
						VEHICLE::SET_PLAYBACK_SPEED(Local_525[iLocal_318 /*7*/], 0f);
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_329, "Idling_Throttle_Blip_Loop", Local_525[iLocal_318 /*7*/], "ARM_1_SOUNDSET", 0, 0);
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_317 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/]);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_321, sLocal_413);
						ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], vVar0, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], fVar1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_525[iLocal_317 /*7*/], 1084227584);
						ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_317 /*7*/], true);
						AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						AI::CLEAR_PED_TASKS_IMMEDIATELY(Local_505);
						AI::TASK_CLEAR_LOOK_AT(Local_505);
						AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
						Local_505.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_317 == 0)
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_341, Local_525[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[0 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_505.f_4, Local_525[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_341, Local_525[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[1 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_505.f_4, Local_525[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[0 /*7*/], "seat_dside_f"));
						}
						if (bLocal_247)
						{
							if (bLocal_248)
							{
								AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_341, sLocal_419, "CarRace_Banter_bothtrashed_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
								AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_419, "CarRace_Banter_bothtrashed_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
								bLocal_283 = true;
							}
							else
							{
								AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_341, sLocal_419, "CarRace_Banter_thatbucket_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
								AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_419, "CarRace_Banter_thatbucket_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
								bLocal_283 = true;
							}
						}
						else if (bLocal_246)
						{
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_341, sLocal_419, "CarRace_Banter_FlowThrough_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_419, "CarRace_Banter_FlowThrough_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
							bLocal_283 = true;
						}
						else
						{
							AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_341, sLocal_419, "CarRace_Banter_MoveSome_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
							AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_419, "CarRace_Banter_MoveSome_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
							bLocal_283 = true;
						}
					}
					CAM::DESTROY_ALL_CAMS(0);
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (bLocal_283)
					{
						iLocal_455 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
						iLocal_342 = PED::CREATE_SYNCHRONIZED_SCENE(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						if (bLocal_247)
						{
							if (bLocal_248)
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_455, iLocal_342, "CarRace_Banter_bothtrashed_cam", sLocal_419);
							}
							else
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_455, iLocal_342, "CarRace_Banter_thatbucket_cam", sLocal_419);
							}
						}
						else if (bLocal_246)
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_455, iLocal_342, "carrace_banter_flowthrough_cam", sLocal_419);
						}
						else
						{
							CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_455, iLocal_342, "carrace_banter_movesome_cam", sLocal_419);
						}
					}
					else
					{
						iLocal_455 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
						if (iLocal_318 == 1)
						{
							CAM::SET_CAM_PARAMS(iLocal_455, 36.59747f, -637.1707f, 31.80989f, -3.324733f, -0.009855f, -122.2542f, 21.89666f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iLocal_455, 36.59521f, -637.1694f, 31.76422f, -3.324733f, -0.009855f, -122.2542f, 21.89666f, 15000, 0, 0, 2);
						}
						else
						{
							CAM::SET_CAM_PARAMS(iLocal_455, 36.91358f, -636.7665f, 31.83924f, -3.589668f, -0.002839f, -124.8351f, 21.70874f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(iLocal_455, 36.91154f, -636.7663f, 31.80007f, -3.589668f, -0.002839f, -124.8351f, 21.70874f, 15000, 0, 0, 2);
						}
					}
					if (!bLocal_262)
					{
						CAM::SHAKE_CAM(iLocal_455, "HAND_SHAKE", 0.05f);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						UI::DISPLAY_RADAR(false);
						UI::DISPLAY_HUD(0);
						CAM::SET_WIDESCREEN_BORDERS(1, 0);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_316++;
				}
				break;
			
			case 1:
				if (!iLocal_300[42])
				{
					func_365();
					iLocal_300[42] = 1;
				}
				else if (!func_329(&Local_527, 0) || SYSTEM::TIMERB() > 20000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_432, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_445[0]) && !PED::IS_PED_SITTING_IN_VEHICLE(iLocal_445[0], iLocal_432))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_445[0], iLocal_432, -1);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_432, true, 1, 0);
						VEHICLE::SET_VEHICLE_SIREN(iLocal_432, 1);
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_432, 2);
						AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_432, 1);
						SYSTEM::SETTIMERB(0);
						iLocal_316++;
					}
				}
				break;
			
			case 2:
				VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_413);
				if ((SYSTEM::TIMERB() > 1000 || fVar4 > 0.99f) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(300, sLocal_413))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_432, 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_432))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_432);
						}
						VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_413);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(iLocal_432, 300, sLocal_413, 1, 0, 786603);
						func_371(&iLocal_432, 500f);
						VEHICLE::_0x1F2E4E06DEA8992B(iLocal_432, 1);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_432, 0.1f);
					}
					if (!PED::IS_PED_INJURED(Local_505))
					{
						Local_505.f_4 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						iLocal_341 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
						if (iLocal_317 == 0)
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_341, Local_525[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[0 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_505.f_4, Local_525[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[1 /*7*/], "seat_dside_f"));
						}
						else
						{
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_341, Local_525[1 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[1 /*7*/], "seat_dside_f"));
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(Local_505.f_4, Local_525[0 /*7*/], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_525[0 /*7*/], "seat_dside_f"));
						}
						AI::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_341, sLocal_419, "CarRace_Banter_cops_FRANKLIN", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_341, 0.1f);
						AI::TASK_SYNCHRONIZED_SCENE(Local_505, Local_505.f_4, sLocal_419, "CarRace_Banter_cops_LAMAR", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					if (bLocal_283)
					{
						CAM::DESTROY_ALL_CAMS(0);
						iLocal_455 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
						iLocal_342 = PED::CREATE_SYNCHRONIZED_SCENE(40.715f, -638.31f, 30.675f, 0f, 0f, 66f, 2);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_455, iLocal_342, "CarRace_Banter_cops_cam", sLocal_419);
					}
					else
					{
						CAM::SHAKE_CAM(iLocal_455, "HAND_SHAKE", 0.05f);
						CAM::SET_CAM_PARAMS(iLocal_455, 46.84201f, -636.4459f, 31.56392f, -0.180864f, 0.105875f, 110.3526f, 30.89239f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_455, 46.88197f, -636.5637f, 31.60283f, -0.098123f, 0.105875f, 105.78f, 30.89239f, 16000, 0, 0, 2);
					}
					SYSTEM::SETTIMERB(0);
					iLocal_316++;
				}
				break;
			
			case 3:
				if (!iLocal_300[44])
				{
					if (!func_329(&Local_527, 0))
					{
						func_328(&Local_588, "ARM1AUD", "ARM1_COPS", 7, 0, 0, 0);
					}
					MemCopy(&uVar5, {func_391()}, 4);
					if (GAMEPLAY::ARE_STRINGS_EQUAL(&uVar5, "ARM1_COPS_3"))
					{
						SYSTEM::SETTIMERB(0);
						iLocal_300[44] = 1;
					}
				}
				if (SYSTEM::TIMERB() > 3000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
					{
						VEHICLE::SET_PLAYBACK_SPEED(Local_525[iLocal_318 /*7*/], 1f);
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_329))
						{
							AUDIO::STOP_SOUND(iLocal_329);
						}
						SYSTEM::SETTIMERB(0);
						iLocal_316++;
					}
				}
				break;
			
			case 4:
				if (!iLocal_297)
				{
					if (CAM::_0xEE778F8C7E1142E2(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
					{
						if (SYSTEM::TIMERB() > 2200)
						{
							GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_297 = 1;
						}
					}
				}
				if (SYSTEM::TIMERB() > 2500 || fVar4 > 0.99f)
				{
					iLocal_585 = 2;
				}
				break;
		}
		if (func_369(1000))
		{
			iLocal_585 = 3;
		}
	}
	if (iLocal_585 == 2)
	{
		UNK1::_0x81CBAE94390F9F89();
		UNK1::_0x293220DA1B46CEBC(0f, 10f, 3);
		UI::CLEAR_HELP(1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
		func_392(0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_467[0], true, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_467[1], true, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -8f, 1);
			AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], -1);
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(Local_525[iLocal_317 /*7*/], 0);
		}
		if (!PED::IS_PED_INJURED(Local_505))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(Local_505, -8f, 1);
			AI::CLEAR_PED_TASKS_IMMEDIATELY(Local_505);
			AI::TASK_CLEAR_LOOK_AT(Local_505);
			ENTITY::SET_ENTITY_COORDS(Local_505, -32.912f, -1086.304f, 29.2035f, 1, 0, 0, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Local_505, true);
			ENTITY::SET_ENTITY_COLLISION(Local_505, false, 0);
			ENTITY::SET_ENTITY_VISIBLE(Local_505, false, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_317 /*7*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/]);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_321, sLocal_413);
			ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_317 /*7*/], false);
			if (iLocal_317 == 0)
			{
				ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], 337.9254f);
				ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 35.9457f, -646.1738f, 30.6258f, 1, 0, 0, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], 335.015f);
				ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 35.2234f, -646.9493f, 30.6292f, 1, 0, 0, 1);
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_318 /*7*/]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/]);
			}
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_320, sLocal_413);
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_319, sLocal_413);
			AUDIO::_0x18EB48CFC41F2EA0(Local_525[iLocal_318 /*7*/], 0);
			func_339();
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_46(35.9457f, -646.1738f, 30.6258f, 200f, 1, 5000);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_432, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_432))
			{
				func_371(&iLocal_432, 10500f);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_432, 1f);
				VEHICLE::_0x1F2E4E06DEA8992B(iLocal_432, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_445[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[0], 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_445[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_445[1], 0);
			}
		}
		GAMEPLAY::CLEAR_AREA_OF_VEHICLES(81.9f, -600.2f, 32.5f, 30f, 0, 0, 0, 0, false, 0);
		if ((CAM::DOES_CAM_EXIST(iLocal_455) && CAM::_0xEE778F8C7E1142E2(1) != 4) && CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() != 4)
		{
			CAM::DESTROY_CAM(iLocal_455, 0);
			if (iLocal_317 == 0)
			{
				iLocal_455 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 34.02319f, -647.5784f, 31.91944f, -1.429148f, 0f, -47.80906f, 50.02792f, 1, 2);
			}
			else
			{
				iLocal_455 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", 33.33243f, -648.7061f, 31.86157f, -0.377383f, 0f, -47.84317f, 50.02792f, 1, 2);
			}
			SYSTEM::WAIT(0);
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_419);
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		UI::DISPLAY_RADAR(true);
		UI::DISPLAY_HUD(1);
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
		func_60(0, 1, 1, 0, 0);
		AUDIO::STOP_AUDIO_SCENE("ARM_1_COPS_ARRIVE");
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((-50.5f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		if (CAM::_0xEE778F8C7E1142E2(1) == 4 || CAM::GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() == 4)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		else
		{
			CAM::_0xC819F3CBB62BF692(0, 0, 3, 0);
		}
		STREAMING::NEW_LOAD_SCENE_STOP();
		iLocal_585 = 0;
		iLocal_584 = 6;
	}
	if (iLocal_585 == 3)
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
			while (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_525[iLocal_318 /*7*/], 0))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[iLocal_318 /*7*/], 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_525[iLocal_317 /*7*/], 0))
				{
					VEHICLE::SET_FORCE_HD_VEHICLE(Local_525[iLocal_317 /*7*/], 1);
				}
				SYSTEM::WAIT(0);
			}
		}
		UI::CLEAR_PRINTS();
		func_69();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_432, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_432))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_432);
			}
			VEHICLE::SET_VEHICLE_SIREN(iLocal_432, 1);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_432, 2);
			AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_432, 1);
			VEHICLE::REMOVE_VEHICLE_RECORDING(301, sLocal_413);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_432, 300, sLocal_413, 1);
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_329))
		{
			AUDIO::STOP_SOUND(iLocal_329);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_466[1]))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_466[1], "map_objects", "p_sec_gate_01_s_close", 3))
			{
				ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_466[1], "map_objects", "p_sec_gate_01_s_close", 0.99f);
			}
		}
		iLocal_585 = 2;
	}
}

struct<6> func_391()
{
	struct<6> Var0;
	int iVar1;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15822 == 4)
	{
		iVar1 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar1 = (iVar1 + Global_16832);
		if (iVar1 > -1)
		{
			return Global_14690[iVar1 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_392(bool bParam0)
{
	if (bParam0)
	{
		if (iLocal_475 == 0)
		{
			iLocal_475 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(89.7f, -694.9f, 32.7f, "dt1_05_carpark");
		}
		else if (INTERIOR::IS_INTERIOR_READY(iLocal_475))
		{
			return 1;
		}
		else
		{
			INTERIOR::_LOAD_INTERIOR(iLocal_475);
		}
	}
	else if (iLocal_475 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_475);
		iLocal_475 = 0;
	}
	return 0;
}

void func_393(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_56182 = 0;
	if (!Global_56406[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_68276)
	{
		if (Global_68277[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_68277[iVar1 /*9*/].f_1 = 1;
			Global_68277[iVar1 /*9*/].f_2 = 0f;
			if (Global_68277[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

float func_394(vector3 vParam0, int iParam1, char* sParam2, int iParam3)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, sParam2);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam3)
	{
		if (SYSTEM::VDIST2(vParam0, VEHICLE::_0x92523B76657A517D(iVar0, func_395((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(vParam0, VEHICLE::_0x92523B76657A517D(iVar0, func_395((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(vParam0, VEHICLE::_0x92523B76657A517D(iVar0, func_395((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(vParam0, VEHICLE::_0x92523B76657A517D(iVar0, func_395((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}

float func_395(float fParam0, float fParam1, float fParam2)
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

void func_396()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (iLocal_169[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_169[iVar0], sLocal_413);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_222)
	{
		if (iLocal_166[iVar0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_166[iVar0], sLocal_413);
		}
		iVar0++;
	}
}

void func_397(bool bParam0, bool bParam1)
{
	if (!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(&cLocal_206))
	{
		iLocal_108 = 0;
		func_414();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_215);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), 1);
			PED::SET_CREATE_RANDOM_COPS(1);
		}
		if (bLocal_124)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_413());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_412());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_411());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_410());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_409();
			func_408();
			func_405();
		}
		else
		{
			func_401();
			func_400();
		}
		if (bParam1)
		{
			func_398(0);
		}
	}
}

void func_398(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		func_399(iVar0, bParam0);
		iVar0++;
	}
}

void func_399(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_45(iParam0, 2, 1))
		{
			func_41(iParam0, 2, 1);
		}
	}
	else if (func_45(iParam0, 2, 1))
	{
		func_34(iParam0, 2, 1);
	}
}

void func_400()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		iLocal_222[iVar0] = 0;
		vLocal_190[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_126[iVar0] = 0f;
		fLocal_127[iVar0] = 0f;
		fLocal_128[iVar0] = 0f;
		fLocal_129[iVar0] = 0f;
		iLocal_166[iVar0] = 0;
		fLocal_130[iVar0] = 0f;
		iLocal_167[iVar0] = 0;
		iLocal_216[iVar0] = 0;
		iLocal_168[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_223[iVar0] = 0;
		iVar0++;
	}
	iLocal_173 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iLocal_224[iVar0] = 0;
		vLocal_191[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_141[iVar0] = 0f;
		fLocal_142[iVar0] = 0f;
		fLocal_143[iVar0] = 0f;
		fLocal_144[iVar0] = 0f;
		iLocal_172[iVar0] = 0;
		iLocal_217[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_226[iVar0] = 0;
		iVar0++;
	}
	iLocal_175 = 0;
	iVar0 = 0;
	while (iVar0 < 38)
	{
		iLocal_225[iVar0] = 0;
		vLocal_192[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_135[iVar0] = 0f;
		fLocal_136[iVar0] = 0f;
		fLocal_137[iVar0] = 0f;
		fLocal_138[iVar0] = 0f;
		iLocal_169[iVar0] = 0;
		fLocal_139[iVar0] = 0f;
		iLocal_170[iVar0] = 0;
		iLocal_218[iVar0] = 0;
		iLocal_171[iVar0] = 0;
		iVar0++;
	}
	iLocal_174 = 0;
	iLocal_177 = 0;
	iLocal_180 = 0;
	iLocal_181 = 0;
	iLocal_182 = 0;
}

void func_401()
{
	func_404();
	func_403();
	func_402();
}

void func_402()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_225[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_225[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_225[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_225[iVar0], -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_225[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_225[iVar0]));
			}
		}
		iLocal_170[iVar0] = 0;
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_169[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_169[iVar0], &cLocal_206);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_218[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_218[iVar0]);
		}
		iVar0++;
	}
}

void func_403()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_224[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_224[iVar0]));
			}
		}
		iLocal_172[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_217[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_217[iVar0]);
		}
		iVar0++;
	}
	iLocal_178 = 0;
	iLocal_175 = 0;
}

void func_404()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_222[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_222[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_222[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_222[iVar0], -1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_222[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_222[iVar0]));
			}
		}
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_166[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_166[iVar0], &cLocal_206);
			}
		}
		iLocal_167[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_216[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_216[iVar0]);
		}
		iVar0++;
	}
	iLocal_177 = 0;
	iLocal_173 = 0;
}

void func_405()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_225[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_225[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_225[iVar0]);
				}
			}
			func_407(iLocal_225[iVar0]);
			func_406(iLocal_225[iVar0]);
		}
		iLocal_170[iVar0] = 0;
		iLocal_171[iVar0] = 0;
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_169[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_169[iVar0], &cLocal_206);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 38)
	{
		if (!iLocal_218[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_218[iVar0]);
		}
		iVar0++;
	}
	iLocal_179 = 0;
}

void func_406(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

void func_407(int iParam0)
{
	float fVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!iVar1 == PLAYER::PLAYER_PED_ID())
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
				if (fVar0 < 8f)
				{
					fVar0 = 8f;
				}
				if (fVar0 > 62.9f)
				{
					fVar0 = 62.9f;
				}
				AI::TASK_VEHICLE_MISSION(iVar1, iParam0, 0, 1, fVar0, 786603, 5f, 5f, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 8192, true);
				if (bLocal_125)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, 0);
			}
		}
	}
}

void func_408()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_224[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[iVar0], 0))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_224[iVar0], true, 0);
			}
			func_406(iLocal_224[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!iLocal_217[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_217[iVar0]);
		}
		iVar0++;
	}
	iLocal_178 = 0;
	iLocal_175 = 0;
}

void func_409()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_222[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_222[iVar0], 0))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_222[iVar0], true, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_222[iVar0], 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_222[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_222[iVar0]);
				}
			}
			func_407(iLocal_222[iVar0]);
			func_406(iLocal_222[iVar0]);
		}
		iLocal_167[iVar0] = 0;
		iLocal_168[iVar0] = 0;
		if (!bLocal_104 && !bLocal_117)
		{
			if (iLocal_166[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_166[iVar0], &cLocal_206);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 117)
	{
		if (!iLocal_216[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_216[iVar0]);
		}
		iVar0++;
	}
	iLocal_177 = 0;
	iLocal_173 = 0;
}

int func_410()
{
	return joaat("s_m_y_cop_01");
}

int func_411()
{
	return joaat("police");
}

int func_412()
{
	return joaat("sultan");
}

int func_413()
{
	if (iLocal_219 == 0)
	{
		return joaat("a_m_y_business_01");
	}
	return iLocal_219;
}

void func_414()
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	VEHICLE::SET_NUMBER_OF_PARKED_VEHICLES(-1);
	VEHICLE::SET_GARBAGE_TRUCKS(1);
	VEHICLE::SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(1);
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
}

void func_415()
{
	STREAMING::REMOVE_IPL("DT1_03_Shutter");
	func_385(180, 1, 0, 1, 0);
}

void func_416()
{
	if (iLocal_318 == 1)
	{
		iLocal_319 = 9;
		iLocal_320 = 313;
		iLocal_321 = 312;
	}
	else
	{
		iLocal_319 = 8;
		iLocal_320 = 311;
		iLocal_321 = 310;
	}
}

void func_417()
{
	if (!PED::IS_PED_INJURED(Local_505))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_505, Local_525[iLocal_318 /*7*/], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_505, Local_525[iLocal_318 /*7*/], -1);
			}
		}
	}
}

void func_418()
{
	float fVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	var uVar10;
	struct<6> Var11;
	vector3 vVar12[24];
	struct<6> Var13;
	vector3 vVar14[24];
	int iVar15;
	char* sVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	struct<6> Var23;
	
	fVar0 = 1250f;
	if (iLocal_584 == 4)
	{
		fVar0 = 83500f;
	}
	if (iLocal_585 == 4)
	{
		vVar1 = { Local_525[0 /*7*/].f_2 };
		fVar2 = fLocal_308;
		if (iLocal_584 == 4)
		{
			vVar1 = { -1155.198f, -873.2174f, 10.6185f };
			fVar2 = -150f;
		}
		if (bLocal_288)
		{
			func_263(vVar1, fVar2, 0, 0);
			iLocal_316 = 99;
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vVar1, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar2);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			SYSTEM::WAIT(0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
			iLocal_316 = 99;
		}
		func_348();
		STREAMING::REQUEST_MODEL(iLocal_489);
		while ((((!func_512() || !ENTITY::DOES_ENTITY_EXIST(Local_505)) || !ENTITY::DOES_ENTITY_EXIST(Local_525[0 /*7*/])) || !ENTITY::DOES_ENTITY_EXIST(Local_525[1 /*7*/])) || !STREAMING::HAS_MODEL_LOADED(iLocal_489))
		{
			func_258(vLocal_404, 0, 0);
			func_345(Local_525[0 /*7*/].f_2, Local_525[0 /*7*/].f_5);
			func_344(Local_525[1 /*7*/].f_2, Local_525[1 /*7*/].f_5);
			STREAMING::REQUEST_MODEL(iLocal_489);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0, -1);
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", 0, -1);
			SYSTEM::WAIT(0);
		}
		func_185(0, -1, 0);
		func_372();
		func_417();
		func_338();
		func_511(1);
		PLAYER::SPECIAL_ABILITY_RESET(PLAYER::PLAYER_ID());
		if (iLocal_584 == 3)
		{
			iLocal_447 = PED::CREATE_PED(26, iLocal_489, -1886.833f, -579.0045f, 10.8163f, 315.0557f, 1, true);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_447, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_447, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_447, 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_447, 8, 1, 0, 0);
			AI::TASK_LOOK_AT_ENTITY(iLocal_447, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_489);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			if (iLocal_584 == 4)
			{
				ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], -1153.198f, -875.2174f, 10.6185f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], -150f);
			}
			VEHICLE::SET_VEHICLE_ENGINE_ON(Local_525[iLocal_317 /*7*/], true, 1, 0);
		}
		AUDIO::SET_INITIAL_PLAYER_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::FREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::SET_RADIO_AUTO_UNFREEZE(0);
		AUDIO::SET_RADIO_TRACK("RADIO_03_HIPHOP_NEW", "ARM1_RADIO_STARTS");
		func_510(sLocal_413, iLocal_322, 1, 1);
		func_508();
		func_507(1);
		func_506(joaat("a_m_m_bevhills_02"));
		iLocal_114 = 1;
		bLocal_120 = true;
		fLocal_157 = 200f;
		iLocal_184 = iLocal_169[15];
		func_505((fVar0 + 4000f), (fVar0 - 5000f));
		SYSTEM::WAIT(500);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/], iLocal_322, sLocal_413, 1);
			func_371(&(Local_525[iLocal_318 /*7*/]), fVar0);
			func_504(Local_525[iLocal_318 /*7*/], fVar0);
			if (iLocal_584 == 3)
			{
				PLAYER::SPECIAL_ABILITY_DEPLETE_METER(PLAYER::PLAYER_ID(), 1);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
			}
			else
			{
				ENTITY::SET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/], 210.9189f);
				ENTITY::SET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], -1153.198f, -875.2174f, 10.6185f, 1, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_525[iLocal_317 /*7*/], 1084227584);
				PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			SYSTEM::WAIT(100);
			iLocal_585 = 0;
		}
	}
	if (iLocal_585 == 0)
	{
		func_416();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
		STREAMING::SET_PED_POPULATION_BUDGET(2);
		iLocal_250 = 0;
		iLocal_251 = 0;
		iLocal_252 = 0;
		bLocal_249 = false;
		iLocal_258 = 0;
		iLocal_259 = 0;
		iLocal_271 = 0;
		iLocal_282 = 0;
		iLocal_285 = 0;
		iLocal_292 = 0;
		fLocal_302 = 1f;
		iLocal_327 = 0;
		Local_526.f_1 = 0;
		Local_526 = 0f;
		func_333();
		func_503(1);
		func_502(1);
		func_501(1);
		func_383(1);
		func_836(61, 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		AUDIO::UNFREEZE_RADIO_STATION("RADIO_03_HIPHOP_NEW");
		AUDIO::SET_RADIO_AUTO_UNFREEZE(1);
		func_500(Local_525[iLocal_317 /*7*/], -1);
		func_267(Local_525[iLocal_317 /*7*/], -1);
		SYSTEM::SETTIMERA(0);
		SYSTEM::SETTIMERB(0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			VEHICLE::_0x1AA8A837D2169D94(Local_525[iLocal_317 /*7*/], 1);
			iLocal_346 = ENTITY::GET_ENTITY_HEALTH(Local_525[iLocal_317 /*7*/]);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
		{
			ROPE::ACTIVATE_PHYSICS(Local_525[iLocal_318 /*7*/]);
			VEHICLE::_0xDFFCEF48E511DB48(Local_525[iLocal_318 /*7*/], 1);
			VEHICLE::_0x1F9FB66F3A3842D2(Local_525[iLocal_318 /*7*/], 1);
			AUDIO::_DYNAMIC_MIXER_RELATED_FN(Local_525[iLocal_318 /*7*/], "ARM_1_LAMARS_CAR", 0);
			iLocal_347 = ENTITY::GET_ENTITY_HEALTH(Local_525[iLocal_318 /*7*/]);
		}
		if (!PED::IS_PED_INJURED(Local_505))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_505, 1);
			PED::SET_PED_CONFIG_FLAG(Local_505, 116, false);
			PED::SET_PED_CONFIG_FLAG(Local_505, 118, false);
			PED::SET_PED_CONFIG_FLAG(Local_505, 208, true);
			PED::SET_PED_LOD_MULTIPLIER(Local_505, 2f);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_GET_IN_CAR_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_1_GET_IN_CAR_SCENE");
		}
		if (iLocal_584 == 3)
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_START"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_START");
			}
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
		}
		else
		{
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
			iLocal_300[1] = 1;
			iLocal_300[12] = 1;
			iLocal_300[13] = 1;
			iLocal_300[14] = 1;
			iLocal_300[15] = 1;
			iLocal_300[16] = 1;
			if (bLocal_261)
			{
				iLocal_300[19] = 1;
				iLocal_300[20] = 1;
				iLocal_300[21] = 1;
				Local_526.f_1 = 1;
				bLocal_294 = true;
			}
			func_838(1, "CHASE_MID_POINT", 0, 0, 0, 1);
		}
		iLocal_350 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-334.1819f, -673.7113f, 33.33865f, 28.25f, 3f, 3f, 175.8f, 0, 7);
		iLocal_351 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1138.2f, -723.6f, 20f, 10f, 10f, 3f, 91.3f, 0, 7);
		GAMEPLAY::_SET_UNK_MAP_FLAG(2);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::SETTIMERB(0);
			while (SYSTEM::TIMERB() < 500)
			{
				func_505((fVar0 + 5000f), (fVar0 - 5000f));
				func_499();
				func_498();
				func_472(Local_525[iLocal_318 /*7*/], 1f);
				SYSTEM::WAIT(0);
			}
			if (iLocal_584 == 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_525[iLocal_317 /*7*/], 20f);
				}
			}
			CAM::DO_SCREEN_FADE_IN(800);
			while (!CAM::IS_SCREEN_FADED_IN())
			{
				func_505((fVar0 + 5000f), (fVar0 - 5000f));
				func_498();
				func_472(Local_525[iLocal_318 /*7*/], 1f);
				func_468(0);
				SYSTEM::WAIT(0);
			}
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			VEHICLE::_0x1AA8A837D2169D94(Local_525[iLocal_317 /*7*/], 1);
		}
		if (iLocal_584 == 3)
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
		}
		iLocal_606 = GAMEPLAY::GET_GAME_TIMER();
		func_415();
		iLocal_365 = 0;
		iLocal_367 = 0;
		iLocal_368 = 0;
		iLocal_369 = 0;
		iLocal_355 = 0;
		bLocal_274 = false;
		iLocal_356 = 0;
		iLocal_264 = 0;
		bLocal_279 = false;
		iLocal_316 = 0;
		iLocal_585 = 1;
	}
	if (iLocal_585 == 1)
	{
		func_468(0);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (!PED::IS_PED_INJURED(iLocal_447))
		{
			if (!bLocal_274)
			{
				if ((fLocal_301 > 15000f || (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0) && ENTITY::GET_ENTITY_SPEED(Local_525[iLocal_317 /*7*/]) > 1f)) || CAM::IS_SPHERE_VISIBLE(-1885f, -577.6f, 12.1f, 1f))
				{
					bLocal_274 = true;
				}
			}
			else if (!PED::IS_PED_IN_COMBAT(iLocal_447, 0) && AI::GET_SCRIPT_TASK_STATUS(iLocal_447, 780511057) != 1)
			{
				AI::TASK_COMBAT_PED(iLocal_447, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			if (SYSTEM::VDIST2(vVar3, ENTITY::GET_ENTITY_COORDS(iLocal_447, 1)) > 2500f)
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_447))
				{
					func_57(&iLocal_447, 0);
				}
			}
		}
		if (iLocal_605 == 0 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_606) > 10000)
		{
			UNK1::_0x81CBAE94390F9F89();
			iLocal_605 = 1;
		}
		STREAMING::REQUEST_ANIM_DICT(sLocal_427);
		STREAMING::REQUEST_ANIM_DICT(sLocal_426);
		STREAMING::REQUEST_ANIM_DICT(sLocal_428);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_01", 0, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_CRASHES_MED_01", 0, -1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
		{
			if (iLocal_316 == 0)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_317 /*7*/]))
				{
					fVar4 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_525[iLocal_317 /*7*/]);
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_525[iLocal_317 /*7*/]) != 4)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_525[iLocal_317 /*7*/], 4);
					}
					if ((iLocal_317 == 1 && fVar4 > 3900f) || (iLocal_317 == 0 && fVar4 > 3600f))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_317 /*7*/]);
						VEHICLE::REMOVE_VEHICLE_RECORDING(Local_525[iLocal_317 /*7*/].f_6, sLocal_413);
					}
				}
				else if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(Local_525[iLocal_317 /*7*/]) != 1)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_525[iLocal_317 /*7*/], 1);
				}
			}
			fVar5 = SYSTEM::VDIST2(vVar3, ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_318 /*7*/], 1));
			iVar6 = VEHICLE::GET_CLOSEST_VEHICLE(vVar3, 10f, 0, func_467());
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_318 /*7*/]))
			{
				fLocal_301 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_525[iLocal_318 /*7*/]);
				if (bLocal_273)
				{
					func_464(&fLocal_302, Local_525[iLocal_317 /*7*/], Local_525[iLocal_318 /*7*/]);
				}
				else
				{
					func_463(&fLocal_302, Local_525[iLocal_317 /*7*/], Local_525[iLocal_318 /*7*/]);
				}
				fLocal_160 = 7000f;
				func_498();
				func_472(Local_525[iLocal_318 /*7*/], fLocal_302);
				VEHICLE::SET_PLAYBACK_SPEED(Local_525[iLocal_318 /*7*/], fLocal_302);
				func_460();
				func_459(&(Local_525[iLocal_318 /*7*/]), fLocal_301);
				if (!iLocal_264)
				{
					if (fLocal_301 > 50500f && fLocal_301 < 51100f)
					{
						ENTITY::SET_ENTITY_COLLISION(Local_525[iLocal_318 /*7*/], false, 0);
						iLocal_264 = 1;
					}
				}
				else if (fLocal_301 > 51100f)
				{
					ENTITY::SET_ENTITY_COLLISION(Local_525[iLocal_318 /*7*/], true, 0);
					iLocal_264 = 0;
				}
				if (!bLocal_249)
				{
					if (fLocal_301 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_322, sLocal_413) - 4000f))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_318 /*7*/]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_525[iLocal_318 /*7*/]);
						}
						func_397(0, 1);
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_525[iLocal_318 /*7*/]);
						bLocal_246 = false;
						bLocal_249 = true;
					}
				}
				if (!iLocal_282)
				{
					if (iLocal_318 == 0 && fLocal_301 >= 54635f)
					{
						iVar7 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1052.49f, -476.15f, 36.66f, 5f, -1184516519, 0, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar7))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_525[iLocal_318 /*7*/], true);
							OBJECT::_0xE7E4C198B0185900(iVar7, 1, 0);
							OBJECT::_0xE7E4C198B0185900(iVar7, 2, 0);
						}
						iLocal_282 = 1;
					}
				}
				else if (fLocal_301 > 56000f && fLocal_301 < 56500f)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_525[iLocal_318 /*7*/], false);
				}
			}
			if (iLocal_584 == 3)
			{
				if (fLocal_301 > 83000f)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0) && ENTITY::IS_ENTITY_ON_SCREEN(Local_525[iLocal_318 /*7*/]))
					{
						func_838(1, "CHASE_MID_POINT", 0, 0, 0, 1);
						iLocal_584 = 4;
					}
				}
			}
			if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 75))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/], 0))
				{
					AI::CLEAR_PED_SECONDARY_TASK(PLAYER::PLAYER_PED_ID());
				}
			}
			if (fLocal_301 < 28500f)
			{
				fVar8 = 160000f;
			}
			else
			{
				fVar8 = 60000f;
			}
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_525[iLocal_317 /*7*/]))
			{
				func_458(iVar6);
				func_457(iVar6);
				if (func_283("CMN_GENGETBCK", 0, 0))
				{
					UI::CLEAR_PRINTS();
				}
				if (!bLocal_103)
				{
					iLocal_340 = GAMEPLAY::GET_GAME_TIMER();
				}
				if (bLocal_261)
				{
					if (!iLocal_300[19])
					{
						if (((iLocal_300[1] && (iLocal_300[12] || !func_448(1, 1, 0))) && !func_283("AR1_CHASE", 0, 0)) && fLocal_301 > 17200f)
						{
							if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								if (iLocal_355 == 0)
								{
									iLocal_355 = GAMEPLAY::GET_GAME_TIMER();
								}
								else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_355) > 2500)
								{
									if (CONTROLS::_IS_INPUT_DISABLED(0))
									{
										func_55("AR1_RAGEBAR_KM", 17000);
									}
									else
									{
										func_55("AR1_RAGEBAR", 17000);
									}
									iLocal_300[19] = 1;
									iLocal_355 = 0;
									PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
									UI::FLASH_ABILITY_BAR(10000);
								}
							}
						}
					}
					else if (!iLocal_300[20])
					{
						if (iLocal_355 == 0)
						{
							if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
							{
								iLocal_355 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_355) > 2000)
						{
							func_55("AR1_RAGEHOW", 13000);
							iLocal_300[20] = 1;
							iLocal_355 = GAMEPLAY::GET_GAME_TIMER();
							UI::FLASH_ABILITY_BAR(0);
						}
					}
					else if (!iLocal_300[21])
					{
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_355) > 10000 && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							func_55("AR1_RAGESTAT", 13000);
							iLocal_300[21] = 1;
							iLocal_355 = GAMEPLAY::GET_GAME_TIMER();
							UI::FLASH_ABILITY_BAR(0);
						}
					}
					else if (!iLocal_300[22])
					{
						if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
							iLocal_355 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_355) > 500 && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (CONTROLS::_IS_INPUT_DISABLED(0))
							{
								func_55("AR1_RAGEDEACT_KM", 13000);
							}
							else
							{
								func_55("AR1_RAGEDEACT", 13000);
							}
							iLocal_300[22] = 1;
							iLocal_355 = GAMEPLAY::GET_GAME_TIMER();
						}
					}
					if (!Local_526.f_1)
					{
						if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
						{
							func_375();
							Local_526.f_1 = 1;
						}
					}
				}
				if (iLocal_300[1])
				{
					if (!iLocal_300[12])
					{
						if (iLocal_356 == 0)
						{
							iLocal_356 = GAMEPLAY::GET_GAME_TIMER();
						}
						else if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_356) > 5000)
						{
							if ((PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && func_448(1, 1, 0)) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_300[12] = 1;
								iLocal_356 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
					else if (func_47("AR1_CAMHELP"))
					{
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_356) > 6000)
						{
							UI::CLEAR_HELP(0);
							iLocal_356 = GAMEPLAY::GET_GAME_TIMER();
						}
					}
					if (!UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((fLocal_301 > 60000f && !iLocal_300[13]) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1210.676f, -578.6287f, 25.42328f, -1272.775f, -627.6569f, 37.72716f, 25f, 0, 1, 0)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							func_55("AR1_BRAKE", 13000);
							iLocal_300[13] = 1;
						}
						if (fLocal_301 > 100000f)
						{
							VEHICLE::GET_VEHICLE_LIGHTS_STATE(Local_525[iLocal_317 /*7*/], &iVar9, &uVar10);
							if (!iLocal_300[23])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -349.8183f, -716.8513f, 37.1367f, -351.9376f, -819.9261f, 29.76863f, 16.5f, 0, 1, 0))
								{
									if (iVar9 == 0)
									{
										func_55("AR1_HEADHELP", 13000);
										iLocal_300[23] = 1;
									}
									else
									{
										iLocal_300[23] = 1;
									}
								}
							}
						}
						if (fLocal_301 > 70000f)
						{
							if (!iLocal_300[24])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1134.825f, -900.8605f, 30.00168f, -1002.171f, -1127.49f, -2.783524f, 27.5f, 0, 1, 0))
								{
									func_55("AR1_JUMPHELP", 13000);
									iLocal_300[24] = 1;
								}
							}
						}
						if (fLocal_301 > 100500f && fLocal_301 < 106500f)
						{
							if (!iLocal_300[79])
							{
								func_55("AR1_VEHCAMH", 13000);
								iLocal_300[79] = 1;
							}
						}
						if (fLocal_301 > 125000f)
						{
							if (!iLocal_300[25])
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -150.1928f, -653.9603f, 38.70139f, -69.53586f, -683.4604f, 31.17117f, 16.5f, 0, 1, 0))
								{
									func_55("AR1_JUMPHELP2", 13000);
									iLocal_300[25] = 1;
								}
							}
						}
					}
					if (iLocal_300[79])
					{
						if (func_47("AR1_VEHCAMH"))
						{
							if (CONTROLS::IS_CONTROL_JUST_PRESSED(0, 0))
							{
								UI::CLEAR_HELP(1);
							}
						}
					}
					if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_363) > 10000)
					{
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_340) > 0)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_525[iLocal_317 /*7*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_525[iLocal_318 /*7*/], 0f, 1f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_525[iLocal_318 /*7*/], 0f, 8f, 2f), 4f, 0, 1, 0))
							{
								VEHICLE::START_VEHICLE_HORN(Local_525[iLocal_318 /*7*/], 1500, 0, 0);
								iLocal_363 = GAMEPLAY::GET_GAME_TIMER();
							}
						}
					}
					if (!func_329(&Local_527, 1))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (iLocal_325 == 0 || ((GAMEPLAY::GET_GAME_TIMER() - iLocal_325) > 20000 && fLocal_301 < 144600f))
							{
								if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_525[0 /*7*/], Local_525[1 /*7*/]))
								{
									if (func_328(&Local_588, "ARM1AUD", "ARM1_CRASH", 7, 0, 0, 0))
									{
										Var11 = { func_391() };
										if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_01"))
										{
											StringCopy(&cVar12, "thatscominoutourchecks", 24);
										}
										else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_02"))
										{
											StringCopy(&cVar12, "stoprubbinup", 24);
										}
										else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_03"))
										{
											StringCopy(&cVar12, "imabouttotake", 24);
										}
										else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_04"))
										{
											StringCopy(&cVar12, "imgonnatell", 24);
										}
										else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var11, "ARM1_CRASH_05"))
										{
											StringCopy(&cVar12, "ayyofrank", 24);
										}
										else
										{
											StringCopy(&cVar12, "stoprubbinup", 24);
										}
										if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_427))
										{
											AI::TASK_PLAY_ANIM(Local_505, sLocal_427, &cVar12, 8f, -8f, -1, 32, 0f, 0, 0, 0);
										}
										iLocal_325 = GAMEPLAY::GET_GAME_TIMER();
										iLocal_258 = 0;
										iLocal_259 = 0;
									}
								}
							}
							if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_326) > 16000 && !iLocal_259)
							{
								if (!iLocal_258)
								{
									if ((fLocal_301 > 20000f && fLocal_301 < 144600f) && (fLocal_301 < 55000f || fLocal_301 > 60500f))
									{
										if (fVar5 < 400f)
										{
											if (func_328(&Local_588, "ARM1AUD", "ARM1_TEASE", 7, 0, 0, 0))
											{
												Var13 = { func_391() };
												if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_01"))
												{
													StringCopy(&cVar14, "hahahakeepup", 24);
												}
												else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_02"))
												{
													StringCopy(&cVar14, "manthisismeanttobe", 24);
												}
												else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_03"))
												{
													StringCopy(&cVar14, "rememberthis", 24);
												}
												else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_04"))
												{
													StringCopy(&cVar14, "cmonfrank", 24);
												}
												else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_05"))
												{
													StringCopy(&cVar14, "youaintfuckin", 24);
												}
												else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_06"))
												{
													StringCopy(&cVar14, "skoolinyoass", 24);
												}
												else if (GAMEPLAY::ARE_STRINGS_EQUAL(&Var13, "ARM1_TEASE_07"))
												{
													StringCopy(&cVar14, "keeppoping", 24);
												}
												else
												{
													StringCopy(&cVar14, "cmonmynigga", 24);
												}
												if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_426))
												{
													AI::TASK_PLAY_ANIM(Local_505, sLocal_426, &cVar14, 8f, -8f, -1, 32, 0f, 0, 0, 0);
												}
												iLocal_258 = 1;
											}
										}
									}
								}
								else if (func_328(&Local_588, "ARM1AUD", "ARM1_RESP", 7, 0, 0, 0))
								{
									iLocal_326 = GAMEPLAY::GET_GAME_TIMER();
									iLocal_258 = 0;
								}
							}
							if (!iLocal_259)
							{
								if (!iLocal_258)
								{
									if (!iLocal_300[26])
									{
										if (fLocal_301 > 8000f && fLocal_301 < 15000f)
										{
											if (func_328(&Local_588, "ARM1AUD", "ARM1_RING", 7, 0, 0, 0))
											{
												iLocal_300[26] = 1;
												bLocal_279 = true;
											}
										}
									}
									else if (!iLocal_300[72])
									{
										if (func_328(&Local_588, "ARM1AUD", "ARM1_INDIC", 7, 0, 0, 0))
										{
											iLocal_300[72] = 1;
											iLocal_259 = 1;
										}
									}
									if (fVar5 < 2500f)
									{
										if (fLocal_301 > 42000f && fLocal_301 < 43000f)
										{
											iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_301 > 48000f && fLocal_301 < 49000f)
										{
											iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_301 > 49000f && fLocal_301 < 52000f)
										{
											if (!iLocal_300[73])
											{
												if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
												{
													if (func_328(&Local_588, "ARM1AUD", "ARM1_STDIO", 7, 0, 0, 0))
													{
														iLocal_259 = 0;
														iLocal_258 = 0;
														iLocal_300[73] = 1;
													}
												}
												else if (func_328(&Local_588, "ARM1AUD", "ARM1_STDIO2", 7, 0, 0, 0))
												{
													iLocal_259 = 0;
													iLocal_258 = 0;
													iLocal_300[73] = 1;
												}
											}
										}
										if (fLocal_301 > 61000f && fLocal_301 < 62000f)
										{
											if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_ALLEY", 7, 0, 0, 0);
											}
											else
											{
												iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_ALLEY2", 7, 0, 0, 0);
											}
										}
										if (fLocal_301 > 78000f && fLocal_301 < 79000f)
										{
											iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_301 > 95500f && fLocal_301 < 96500f)
										{
											iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_LEFT", 7, 0, 0, 0);
										}
										if (fLocal_301 > 119300f && fLocal_301 < 120300f)
										{
											iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_RIGHT", 7, 0, 0, 0);
										}
										if (fLocal_301 > 123500f && fLocal_301 < 124500f)
										{
											if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_PARK", 7, 0, 0, 0);
											}
											else
											{
												iLocal_259 = func_328(&Local_588, "ARM1AUD", "ARM1_PARK3", 7, 0, 0, 0);
											}
										}
									}
								}
							}
							else if (func_328(&Local_588, "ARM1AUD", "ARM1_OKAY", 7, 0, 0, 0))
							{
								iLocal_259 = 0;
								iLocal_258 = 0;
							}
							if (!iLocal_258 && !iLocal_259)
							{
								if (fLocal_301 > 141500f && fLocal_301 < 142500f)
								{
									if (!iLocal_300[28])
									{
										if (fVar5 < 2500f)
										{
											if (GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
											{
												if (func_328(&Local_588, "ARM1AUD", "ARM1_BANK", 7, 0, 0, 0))
												{
													iLocal_300[28] = 1;
													iLocal_259 = 0;
													iLocal_258 = 0;
												}
											}
											else if (func_328(&Local_588, "ARM1AUD", "ARM1_BANK2", 7, 0, 0, 0))
											{
												iLocal_300[28] = 1;
												iLocal_259 = 0;
												iLocal_258 = 0;
											}
										}
									}
								}
								if (fLocal_301 > 50000f)
								{
									if (!iLocal_300[15])
									{
										if (iLocal_300[0])
										{
											if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1055.957f, -480.5382f, 42.98192f, -1169.248f, -545.5168f, 27.53709f, 24f, 0, 1, 0))
											{
												if (func_328(&Local_588, "ARM1AUD", "ARM1_ALIEN", 7, 0, 0, 0))
												{
													iLocal_300[15] = 1;
													iLocal_259 = 0;
													iLocal_258 = 0;
												}
											}
											else
											{
												iLocal_300[15] = 1;
												iLocal_259 = 0;
												iLocal_258 = 0;
											}
										}
									}
								}
								if (fLocal_301 > 87150f && fLocal_301 < 88150f)
								{
									if (!iLocal_300[29])
									{
										if (fVar5 < 2500f)
										{
											if (func_328(&Local_588, "ARM1AUD", "ARM1_HILL", 7, 0, 0, 0))
											{
												iLocal_300[29] = 1;
												iLocal_259 = 0;
												iLocal_258 = 0;
											}
										}
									}
								}
								if (fLocal_301 > 20000f && fVar5 > 6400f)
								{
									if (!bLocal_249)
									{
										if (!iLocal_300[30])
										{
											if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_360) > 10000)
											{
												if (func_328(&Local_588, "ARM1AUD", "ARM1_WRONG", 7, 0, 0, 0))
												{
													iLocal_300[30] = 1;
													iLocal_259 = 0;
													iLocal_258 = 0;
													iLocal_358++;
													iLocal_360 = GAMEPLAY::GET_GAME_TIMER();
												}
											}
										}
									}
									if (!iLocal_300[31])
									{
										if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_361) > 10000 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_360) > 4000)
										{
											if (fVar5 > 10000f)
											{
												if (func_328(&Local_588, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_300[31] = 1;
													iLocal_259 = 0;
													iLocal_258 = 0;
													iLocal_359++;
													iLocal_361 = GAMEPLAY::GET_GAME_TIMER();
												}
											}
										}
									}
									if (!iLocal_300[32])
									{
										if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_362) > 10000 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_361) > 4000)
										{
											if (fVar5 > 22500f)
											{
												if (func_328(&Local_588, "ARM1AUD", "ARM1_WARN", 7, 0, 0, 0))
												{
													iLocal_300[32] = 1;
													iLocal_259 = 0;
													iLocal_258 = 0;
													iLocal_359++;
													iLocal_362 = GAMEPLAY::GET_GAME_TIMER();
												}
											}
										}
									}
								}
								else
								{
									if (iLocal_358 < 4)
									{
										iLocal_300[30] = 1;
									}
									if (iLocal_359 < 5)
									{
										iLocal_300[31] = 1;
										iLocal_300[32] = 1;
									}
								}
								if (((fLocal_301 > 25000f && fLocal_301 < 144600f) && (GAMEPLAY::GET_GAME_TIMER() - iLocal_339) > 15000) && (GAMEPLAY::GET_GAME_TIMER() - iLocal_340) > 0)
								{
									if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_340) < 1000 && fVar5 < 400f)
									{
										if (func_328(&Local_588, "ARM1AUD", "ARM1_FRONT4", 7, 0, 0, 0))
										{
											iLocal_259 = 0;
											iLocal_258 = 0;
											iLocal_339 = GAMEPLAY::GET_GAME_TIMER();
										}
									}
									if (((GAMEPLAY::GET_GAME_TIMER() - iLocal_340) > 2000 && fVar5 < 3600f) && fVar5 > 400f)
									{
										if (!iLocal_300[33])
										{
											if (func_328(&Local_588, "ARM1AUD", "ARM1_FRONT1", 7, 0, 0, 0))
											{
												iLocal_259 = 0;
												iLocal_258 = 0;
												iLocal_300[33] = 1;
												iLocal_339 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
										else if (!iLocal_300[34])
										{
											if (func_328(&Local_588, "ARM1AUD", "ARM1_FRONT2", 7, 0, 0, 0))
											{
												iLocal_259 = 0;
												iLocal_258 = 0;
												iLocal_300[34] = 1;
												iLocal_339 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
										else if (!iLocal_300[35])
										{
											if (func_328(&Local_588, "ARM1AUD", "ARM1_FRONT3", 7, 0, 0, 0))
											{
												iLocal_259 = 0;
												iLocal_258 = 0;
												iLocal_300[35] = 1;
												iLocal_339 = GAMEPLAY::GET_GAME_TIMER();
											}
										}
									}
								}
								if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_338) > 10000)
								{
									if (fVar5 < 2500f)
									{
										if (((fLocal_301 > 17000f && fLocal_301 < 25000f) || (fLocal_301 > 32000f && fLocal_301 < 39500f)) || (fLocal_301 > 102000f && fLocal_301 < 108000f))
										{
											iVar15 = GAMEPLAY::GET_RANDOM_INT_IN_RANGE(0, 6);
											if (iVar15 == 0)
											{
												sVar16 = "ARM1_CHAT1";
												iVar17 = 65;
											}
											else if (iVar15 == 1)
											{
												sVar16 = "ARM1_CHAT2";
												iVar17 = 66;
											}
											else if (iVar15 == 2)
											{
												sVar16 = "ARM1_CHAT3";
												iVar17 = 67;
											}
											else if (iVar15 == 3)
											{
												sVar16 = "ARM1_CHAT4";
												iVar17 = 68;
											}
											else if (iVar15 == 4)
											{
												sVar16 = "ARM1_CHAT6";
												iVar17 = 70;
											}
											else
											{
												sVar16 = "ARM1_CHAT7";
												iVar17 = 71;
											}
											if (!iLocal_300[16] && !iLocal_300[17])
											{
												if (!iLocal_300[37])
												{
													if (!iLocal_300[26])
													{
														sVar16 = "ARM1_RING";
														iVar17 = 18;
													}
													else
													{
														iLocal_300[37] = 1;
													}
												}
												if (iLocal_300[37])
												{
													if (func_444() == 0)
													{
														sVar16 = "ARM1_TOW2";
														iVar17 = 17;
													}
													else
													{
														sVar16 = "ARM1_TOW2";
														iVar17 = 17;
													}
												}
											}
											if (!iLocal_300[iVar17])
											{
												if (func_328(&Local_588, "ARM1AUD", sVar16, 7, 0, 0, 0))
												{
													if (GAMEPLAY::ARE_STRINGS_EQUAL(sVar16, "ARM1_RING"))
													{
														iLocal_300[37] = 1;
														bLocal_279 = true;
													}
													else
													{
														iLocal_259 = 0;
														iLocal_258 = 0;
														iLocal_300[iVar17] = 1;
														iLocal_338 = GAMEPLAY::GET_GAME_TIMER();
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (fLocal_301 > 10000f)
					{
						bVar18 = false;
						if (((iVar6 == iLocal_225[0] || iVar6 == iLocal_225[1]) || iVar6 == iLocal_225[6]) || iVar6 == iLocal_222[114])
						{
							bVar18 = true;
						}
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_330) > 3000 || (bVar18 && (GAMEPLAY::GET_GAME_TIMER() - iLocal_330) > 1000))
						{
							if (!func_98())
							{
								if (!ENTITY::IS_ENTITY_DEAD(iVar6, 0) && iVar6 != Local_525[iLocal_318 /*7*/])
								{
									bVar19 = false;
									iVar20 = 0;
									if (bVar18)
									{
										iVar20 = 1;
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar6, Local_525[iLocal_317 /*7*/]))
									{
										bVar19 = true;
									}
									else if (GAMEPLAY::ABSF(ENTITY::GET_ENTITY_SPEED(iVar6)) > 2f)
									{
										if (GAMEPLAY::ABSF((ENTITY::GET_ENTITY_HEADING(iVar6) - ENTITY::GET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/]))) > 60f)
										{
											iVar20 = 1;
										}
									}
									if (bVar19 || iVar20)
									{
										iLocal_446 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar6, -1, 0);
										if (!PED::IS_PED_INJURED(iLocal_446))
										{
											if (bVar19)
											{
												func_268(iLocal_446, "GENERIC_CURSE_HIGH", 6);
											}
											else
											{
												func_268(iLocal_446, "GENERIC_INSULT_HIGH", 6);
											}
											iLocal_330 = GAMEPLAY::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
				if (!bLocal_249)
				{
					if (!UI::DOES_BLIP_EXIST(Local_525[iLocal_318 /*7*/].f_1))
					{
						func_266();
						Local_525[iLocal_318 /*7*/].f_1 = func_331(Local_525[iLocal_318 /*7*/], 0, 0);
					}
					func_443(Local_525[iLocal_318 /*7*/].f_1, Local_525[iLocal_318 /*7*/], SYSTEM::SQRT(fVar8), 0.8f, 0);
					if (!iLocal_300[38])
					{
						if (!PED::IS_PED_INJURED(iLocal_447))
						{
							if (bLocal_274)
							{
								func_259(&Local_588, 7, iLocal_447, "BABYDICK", 0, 1);
								func_442(iLocal_447, "ARM1_CUAA", "BABYDICK", 6);
								iLocal_300[38] = 1;
							}
						}
						else
						{
							iLocal_300[38] = 1;
						}
					}
					if (!iLocal_300[1])
					{
						if (!func_329(&Local_527, 2))
						{
							func_293("AR1_CHASE", 6000, 0);
							iLocal_300[1] = 1;
						}
					}
					if ((fLocal_301 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_322, sLocal_413) - 6000f) && fVar5 < 400f) || (fLocal_301 > 135000f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 13.99176f, -675.8222f, 31.48455f, 20.46627f, -688.1566f, 34.48455f, 4f, 0, 1, 0)))
					{
						bLocal_246 = true;
						bLocal_262 = true;
						iLocal_585 = 2;
					}
				}
				else
				{
					vLocal_397 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_525[iLocal_318 /*7*/], -6f, 0f, 0f) };
					if (!UI::DOES_BLIP_EXIST(iLocal_452))
					{
						func_266();
						iLocal_452 = func_48(vLocal_397, 0);
					}
					if (!UI::DOES_BLIP_EXIST(iLocal_454))
					{
						iLocal_454 = func_48(-88.1825f, -675.9736f, 34.2665f, 1);
						UI::SET_BLIP_ALPHA(iLocal_454, 0);
					}
					if (!iLocal_300[39] && !func_329(&Local_527, 2))
					{
						func_293("AR1_PARK", 7500, 0);
						iLocal_300[39] = 1;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 1), vLocal_397) < 25f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						bLocal_246 = false;
						bLocal_262 = false;
						iLocal_585 = 2;
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_525[iLocal_317 /*7*/], 25.32066f, -664.571f, 30.62743f, 13.76605f, -690.2087f, 36.02796f, 12.75f, 0, 1, 0))
					{
						bLocal_246 = false;
						bLocal_262 = true;
						iLocal_585 = 2;
					}
				}
				if (fLocal_301 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_322, sLocal_413) - 55000f))
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_319, sLocal_413);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_320, sLocal_413);
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_321, sLocal_413);
					VEHICLE::REQUEST_VEHICLE_RECORDING(300, sLocal_413);
					if (fLocal_301 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_322, sLocal_413) - 20000f))
					{
						STREAMING::REQUEST_MODEL(joaat("police3"));
						STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
						func_379(1, 0);
						STREAMING::REQUEST_ANIM_DICT("map_objects");
						STREAMING::REQUEST_ANIM_DICT(sLocal_419);
					}
				}
			}
			else
			{
				if (!UI::DOES_BLIP_EXIST(Local_525[iLocal_317 /*7*/].f_1))
				{
					func_266();
					Local_525[iLocal_317 /*7*/].f_1 = func_441(Local_525[iLocal_317 /*7*/], 0, 0);
				}
				if (func_283("AR1_PARK", 0, 0))
				{
					UI::CLEAR_PRINTS();
				}
				if (!iLocal_300[40])
				{
					func_293("CMN_GENGETBCK", 7500, 0);
					iLocal_300[40] = 1;
				}
				if ((((func_47("AR1_CAMHELP") || func_47("AR1_HEADHELP")) || func_47("AR1_HINTHELP")) || func_47("AR1_BRAKE")) || func_47("AR1_VEHCAMH"))
				{
					UI::CLEAR_HELP(1);
				}
				func_375();
				iLocal_259 = 0;
				iLocal_258 = 0;
				if (SYSTEM::VDIST2(vVar3, ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 1)) > 40000f)
				{
					func_823(13);
				}
			}
			if (!PED::IS_PED_INJURED(Local_505))
			{
				if (fVar5 > fVar8)
				{
					func_823(5);
				}
				if (FIRE::IS_ENTITY_ON_FIRE(Local_505))
				{
					if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_380) > 1000)
					{
						ENTITY::SET_ENTITY_HEALTH(Local_505, 0, 0);
					}
				}
				else
				{
					iLocal_380 = GAMEPLAY::GET_GAME_TIMER();
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(Local_525[iLocal_318 /*7*/], 0))
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_525[iLocal_318 /*7*/]))
			{
				if (SYSTEM::TIMERA() > 10000)
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_525[iLocal_318 /*7*/], true);
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_525[iLocal_318 /*7*/], PLAYER::PLAYER_PED_ID(), 1))
					{
						iVar21 = (VEHICLE::_0x42A4BEB35D372407(Local_525[iLocal_318 /*7*/]) + VEHICLE::_0x2C8CBFE1EA5FC631(Local_525[iLocal_318 /*7*/]));
						if ((VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_525[iLocal_318 /*7*/]) < 200f || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_525[iLocal_318 /*7*/]) < 200f) || iVar21 > 2)
						{
							func_823(21);
						}
						if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_382) > 0)
						{
							func_268(Local_505, "GENERIC_INSULT_HIGH", 3);
							AI::TASK_LOOK_AT_ENTITY(Local_505, PLAYER::PLAYER_PED_ID(), 1000, 2048, 2);
							iLocal_382 = (GAMEPLAY::GET_GAME_TIMER() + GAMEPLAY::GET_RANDOM_INT_IN_RANGE(4000, 7000));
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_525[iLocal_318 /*7*/]);
						}
					}
				}
			}
			if (FIRE::IS_ENTITY_ON_FIRE(Local_525[iLocal_318 /*7*/]))
			{
				func_823(21);
			}
		}
		if (iLocal_584 == 3)
		{
			func_422(&uLocal_593, Local_525[iLocal_318 /*7*/], "AR1_CAMHELP", 0, 1, 1, 1);
		}
		else
		{
			func_422(&uLocal_593, Local_525[iLocal_318 /*7*/], "AR1_CAMHELP", 0, 1, 0, 1);
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE() && !CONTROLS::IS_CONTROL_PRESSED(0, 80))
		{
			if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_381) > 5000 && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!iLocal_300[78])
				{
					func_55("AR1_CAMHELP2", -1);
					iLocal_300[78] = 1;
				}
			}
		}
		else
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE() && func_47("AR1_CAMHELP2"))
			{
				UI::CLEAR_HELP(1);
			}
			iLocal_381 = GAMEPLAY::GET_GAME_TIMER();
		}
		if (iLocal_584 == 3)
		{
			switch (iLocal_365)
			{
				case 0:
					if (bLocal_279)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_START"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_START");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_PHONE_LAMAR");
						}
						iLocal_365++;
					}
					break;
				
				case 1:
					Var23 = { func_270() };
					if (iLocal_300[26])
					{
						if (iLocal_300[72])
						{
							if (!GAMEPLAY::ARE_STRINGS_EQUAL("ARM1_INDIC", &Var23))
							{
								bVar22 = true;
							}
						}
					}
					else if (iLocal_300[16] || iLocal_300[17])
					{
						if (!GAMEPLAY::ARE_STRINGS_EQUAL("ARM1_TOW", &Var23) && !GAMEPLAY::ARE_STRINGS_EQUAL("ARM1_TOW2", &Var23))
						{
							bVar22 = true;
						}
					}
					if (bVar22)
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_PHONE_LAMAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_PHONE_LAMAR");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_FOLLOW_LAMAR"))
						{
							AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_FOLLOW_LAMAR");
						}
						iLocal_365++;
					}
					break;
			}
			switch (iLocal_367)
			{
				case 0:
					if (fLocal_301 > 51500f)
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1048.17f, -473.1709f, 43.59984f, -1062.492f, -486.3139f, 30.66454f, 26.25f, 0, 1, 0))
						{
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_FOLLOW_LAMAR"))
							{
								AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_FOLLOW_LAMAR");
							}
							if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_STUDIO"))
							{
								AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_STUDIO");
							}
							iLocal_367++;
						}
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1214.699f, -582.2675f, 34.07594f, -1209.03f, -578.9652f, 21.30647f, 26.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1048.203f, -472.5669f, 43.38507f, -1046.014f, -466.9206f, 30.80215f, 45.75f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_STUDIO"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_STUDIO");
						}
						iLocal_367++;
					}
					break;
				
				case 2:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_CANALS"))
					{
						AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_TO_CANALS");
					}
					iLocal_367++;
					break;
				}
		}
		switch (iLocal_368)
		{
			case 0:
				if (fLocal_301 > 80000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1169.196f, -849.9986f, 21.09482f, -961.9859f, -1197.101f, -1.209268f, 136.5f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_TO_CANALS"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_TO_CANALS");
						}
						iLocal_368++;
					}
				}
				break;
			
			case 1:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_OVER_BRIDGES"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_OVER_BRIDGES");
				}
				iLocal_368++;
				break;
		}
		switch (iLocal_369)
		{
			case 0:
				if (fLocal_301 > 120000f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -313.1678f, -834.3452f, 40.87144f, -288.5447f, -647.5313f, 27.05053f, 115.5f, 0, 1, 0))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_OVER_BRIDGES"))
						{
							AUDIO::STOP_AUDIO_SCENE("ARM_1_DRIVE_OVER_BRIDGES");
						}
						iLocal_369++;
					}
				}
				break;
			
			case 1:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_DRIVE_THROUGH_GARAGE"))
				{
					AUDIO::START_AUDIO_SCENE("ARM_1_DRIVE_THROUGH_GARAGE");
				}
				iLocal_369++;
				break;
		}
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LAMAR_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("ARM_1_LAMAR_FOCUS_CAM");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("ARM_1_LAMAR_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("ARM_1_LAMAR_FOCUS_CAM");
		}
		if (!bLocal_261)
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 28, 1);
		}
		if (SYSTEM::VDIST2(vVar3, -202.4f, -638.9f, 33.7f) < 22500f)
		{
			if (iLocal_474 == 0)
			{
				iLocal_474 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-202.4f, -638.9f, 33.7f, "dt1_02_carpark");
			}
			else if (!INTERIOR::IS_INTERIOR_READY(iLocal_474))
			{
				INTERIOR::_LOAD_INTERIOR(iLocal_474);
			}
		}
		else if (SYSTEM::VDIST2(vVar3, -202.4f, -638.9f, 33.7f) > 40000f)
		{
			if (iLocal_474 != 0)
			{
				INTERIOR::UNPIN_INTERIOR(iLocal_474);
				iLocal_474 = 0;
			}
		}
		if (fLocal_301 > 100000f)
		{
			if (SYSTEM::VDIST2(vVar3, 34f, -638.5f, 31.6f) < 22500f)
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(46.6f, -624.3f, 32.1f, func_421(-1.1f, 0f, 137.4f), 100f, 0);
				}
			}
			else if (SYSTEM::VDIST2(vVar3, 34f, -638.5f, 31.6f) > 40000f)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
			}
		}
	}
	if (iLocal_585 == 2)
	{
		UI::CLEAR_PRINTS();
		UI::CLEAR_HELP(1);
		func_266();
		func_503(0);
		func_501(0);
		func_383(0);
		func_277(&Local_527, 1, 0);
		func_420(&uLocal_593, 0, 0);
		if (iLocal_474 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_474);
			iLocal_474 = 0;
		}
		func_1();
		bLocal_247 = false;
		bLocal_248 = false;
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
		{
			VEHICLE::_0x1F9FB66F3A3842D2(Local_525[iLocal_318 /*7*/], 0);
			VEHICLE::_0x1AA8A837D2169D94(Local_525[iLocal_317 /*7*/], 0);
			if (iLocal_264)
			{
				ENTITY::SET_ENTITY_COLLISION(Local_525[iLocal_318 /*7*/], true, 0);
				iLocal_264 = 0;
			}
			if ((iLocal_346 - ENTITY::GET_ENTITY_HEALTH(Local_525[iLocal_317 /*7*/])) > 250)
			{
				func_836(61, 1);
				bLocal_247 = true;
			}
			if ((iLocal_347 - ENTITY::GET_ENTITY_HEALTH(Local_525[iLocal_318 /*7*/])) > 250)
			{
				bLocal_248 = true;
			}
			VEHICLE::_SET_VEHICLE_ENGINE_POWER_MULTIPLIER(Local_525[iLocal_317 /*7*/], 0f);
		}
		func_419(iLocal_435);
		func_334(&iLocal_435, 1);
		if (iLocal_350 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_350);
			iLocal_350 = -1;
		}
		if (iLocal_351 != -1)
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_351);
			iLocal_351 = -1;
		}
		STREAMING::REMOVE_ANIM_DICT(sLocal_420);
		STREAMING::REMOVE_ANIM_DICT(sLocal_427);
		STREAMING::REMOVE_ANIM_DICT(sLocal_426);
		STREAMING::REMOVE_ANIM_DICT(sLocal_428);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		AUDIO::SET_AGGRESSIVE_HORNS(0);
		SYSTEM::SETTIMERB(0);
		GAMEPLAY::_SET_UNK_MAP_FLAG(0);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
		func_502(0);
		iLocal_316 = 0;
		iLocal_585 = 0;
		iLocal_584 = 5;
	}
	if (iLocal_585 == 3)
	{
		func_880(5, 1);
	}
}

void func_419(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
		}
	}
}

void func_420(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GAMEPLAY::IS_BIT_SET(Global_2524719.f_4577, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_47(uParam0->f_3))
		{
			UI::CLEAR_HELP(1);
		}
	}
	if (!GAMEPLAY::IS_STRING_NULL(sVar0))
	{
		if (func_47(sVar0))
		{
			UI::CLEAR_HELP(1);
		}
	}
}

Vector3 func_421(vector3 vParam0)
{
	return (-SYSTEM::SIN(vParam0.z) * SYSTEM::COS(vParam0.x)), (SYSTEM::COS(vParam0.z) * SYSTEM::COS(vParam0.x)), SYSTEM::SIN(vParam0.x);
}

void func_422(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_423(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_423(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	func_424(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_424(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_420(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_425(uParam0, iParam1, vParam2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_425(var uParam0, int iParam1, vector3 vParam2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (GAMEPLAY::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_47(iVar0))
	{
		func_440();
	}
	if (func_439(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::_0x7D7A2E43E74E2EB8(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::GET_PED_FLOOD_INVINCIBILITY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_434(uParam0, bParam5, bParam7, 0))
			{
				func_430(uParam0, iParam1, vParam2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_429(iVar0))
				{
					if ((GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_47(iVar0))
							{
								func_55(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_428(1);
								}
							}
						}
					}
				}
			}
			else if (func_429(iVar0))
			{
				if (GAMEPLAY::IS_STRING_NULL(uParam0->f_3) && !GAMEPLAY::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !UI::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_47(iVar0))
						{
							func_55(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (GAMEPLAY::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_428(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!GAMEPLAY::IS_STRING_NULL(sParam3))
			{
				if (func_47(sParam3))
				{
					UI::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
					{
						func_420(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
					{
						func_420(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
					{
						func_420(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
					{
						func_420(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
					{
						func_420(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_420(uParam0, iVar0, 1);
				}
			}
			if (!func_434(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_427(uParam0))
				{
					func_426(uParam0);
				}
			}
		}
	}
	else
	{
		func_420(uParam0, iVar0, 0);
	}
}

void func_426(var uParam0)
{
	if (func_439(PLAYER::PLAYER_PED_ID()))
	{
		AI::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::_STOP_SCREEN_EFFECT("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::_START_SCREEN_EFFECT("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_427(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > GAMEPLAY::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_428(bool bParam0)
{
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_106070.f_10021.f_100++;
			}
			return Global_106070.f_10021.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_106070.f_10021.f_101++;
			}
			return Global_106070.f_10021.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_106070.f_10021.f_102++;
			}
			return Global_106070.f_10021.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_429(char* sParam0)
{
	if (!func_448(1, 1, 0))
	{
		if ((!GAMEPLAY::IS_STRING_NULL_OR_EMPTY(sParam0) && func_47(sParam0)) || func_47("CMN_HINT"))
		{
			UI::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_36117)
	{
		case 0:
		case 3:
			if (func_428(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_428(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_428(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

void func_430(var uParam0, int iParam1, vector3 vParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1316807 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		func_420(uParam0, 0, 0);
	}
	if (func_433(vParam2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_431())
					{
						vParam2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					vParam2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	AI::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::_START_SCREEN_EFFECT("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = GAMEPLAY::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_431()
{
	return func_432(PLAYER::PLAYER_ID());
}

int func_432(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_433(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_434(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (GAMEPLAY::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_438(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_437(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_437(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_438(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_427(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_438(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_437(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_437(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_438(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = GAMEPLAY::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_438(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_437(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_437(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_438(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((GAMEPLAY::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_436(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_435(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_435(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || AI::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_436(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_427(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_448(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_440();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_435(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_448(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_436(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_448(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_437(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_448(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			CONTROLS::DISABLE_CONTROL_ACTION(0, 140, 1);
			CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_438(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_448(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		CONTROLS::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (CONTROLS::IS_DISABLED_CONTROL_PRESSED(0, 80) && GAMEPLAY::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_439(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_440()
{
	GAMEPLAY::SET_BIT(&Global_2384, 4);
}

int func_441(int iParam0, bool bParam1, bool bParam2)
{
	return func_332(iParam0, !bParam1, bParam2);
}

void func_442(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	AUDIO::_PLAY_AMBIENT_SPEECH_WITH_VOICE(iParam0, sParam1, sParam2, func_269(iParam3), 0);
}

void func_443(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (UI::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UI::SET_BLIP_FLASHES(iParam0, 1);
						UI::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						UI::SET_BLIP_FLASHES(iParam0, 0);
						UI::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = GAMEPLAY::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						UI::SET_BLIP_FLASHES(iParam0, 1);
						UI::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						UI::SET_BLIP_FLASHES(iParam0, 0);
						UI::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

int func_444()
{
	int iVar0;
	
	iVar0 = func_446(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_445(iVar0);
}

int func_445(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return -1;
	}
	return Global_106070.f_9057.f_330[iParam0 /*6*/].f_1;
}

int func_446(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = GAMEPLAY::GET_HASH_KEY(sParam0);
	iVar1 = func_447(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_447(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_84115[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

int func_448(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_456(0))
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_68494)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_53362)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(3) == 3 || CAM::_0xEE778F8C7E1142E2(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(6) == 3 || CAM::_0xEE778F8C7E1142E2(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(4) == 3 || CAM::_0xEE778F8C7E1142E2(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(5) == 3 || CAM::_0xEE778F8C7E1142E2(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::_0xEE778F8C7E1142E2(2) == 3 || CAM::_0xEE778F8C7E1142E2(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_454() || func_453(Global_4456448.f_152990)) || func_452())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			iVar1 = func_451(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::_0xE33FFA906CE74880(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 562680400 && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == 1181327175 && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == -1693015116 && iVar1 == 0) && func_450(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (func_449(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_449(int iParam0)
{
	if (iParam0 != func_200())
	{
		if (func_199(iParam0, 1, 1))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
		else if ((Global_1312857 && iParam0 == PLAYER::PLAYER_ID()) && func_199(iParam0, 1, 0))
		{
			return Global_2423801[iParam0 /*413*/].f_309.f_4 != -1;
		}
	}
	return 0;
}

int func_450(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_451(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
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

var func_452()
{
	return Global_2448386.f_16;
}

bool func_453(int iParam0)
{
	return iParam0 == 51;
}

var func_454()
{
	return Global_2448386.f_15;
}

bool func_455()
{
	return GAMEPLAY::GET_GAME_TIMER() <= Global_17367.f_5873 + 100;
}

int func_456(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14513.f_1 > 3)
		{
			if (GAMEPLAY::IS_BIT_SET(Global_2383, 14))
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
	if (SCRIPT::_GET_NUM_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14513.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_457(int iParam0)
{
	vector3 vVar0;
	
	if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_328) > 5000)
	{
		if (!func_329(&Local_527, 1))
		{
			if (iParam0 != Local_525[iLocal_318 /*7*/])
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_525[iLocal_317 /*7*/], iParam0, 1))
					{
						if (ENTITY::GET_ENTITY_SPEED(Local_525[iLocal_317 /*7*/]) > 15f && ENTITY::GET_ENTITY_SPEED(iParam0) > 1f)
						{
							if (GAMEPLAY::ABSF((ENTITY::GET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/]) - ENTITY::GET_ENTITY_HEADING(iParam0))) > 60f)
							{
								vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_525[iLocal_317 /*7*/], ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
								if (vVar0.y < -1.5f && vVar0.y > -5f)
								{
									if (GAMEPLAY::ABSF(vVar0.x) < 4f)
									{
										if (func_328(&Local_588, "ARM1AUD", "ARM1_NEAR", 7, 0, 0, 0))
										{
											iLocal_328 = GAMEPLAY::GET_GAME_TIMER();
											if ((fLocal_301 < 144600f && VEHICLE::GET_CONVERTIBLE_ROOF_STATE(Local_525[iLocal_317 /*7*/]) == 2) && ENTITY::IS_ENTITY_UPRIGHT(Local_525[iLocal_317 /*7*/], 90f))
											{
												if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_428) && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_428, "learnhowtouseastick", 3))
												{
													AI::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), sLocal_428, "learnhowtouseastick", 8f, -8f, -1, 32, 0f, 0, 0, 0);
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

void func_458(int iParam0)
{
	int iVar0;
	
	if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_327) > 2000)
	{
		if (iParam0 != Local_525[iLocal_318 /*7*/])
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 9f)
				{
					if ((ENTITY::GET_ENTITY_SPEED(Local_525[iLocal_317 /*7*/]) - ENTITY::GET_ENTITY_SPEED(iParam0)) > 3f || GAMEPLAY::ABSF((ENTITY::GET_ENTITY_HEADING(Local_525[iLocal_317 /*7*/]) - ENTITY::GET_ENTITY_HEADING(iParam0))) > 60f)
					{
						iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
						if (!PED::IS_PED_INJURED(iVar0))
						{
							VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, 0);
							iLocal_327 = GAMEPLAY::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_459(var uParam0, float fParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		if ((((((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 23000f && fParam1 < 25000f)) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 50500f)) || (fParam1 > 60500f && fParam1 < 63500f)) || (fParam1 > 78750f && fParam1 < 80500f)) || (fParam1 > 95750f && fParam1 < 98000f)) || (fParam1 > 110750f && fParam1 < 113000f)) || (fParam1 > 119000f && fParam1 < 121000f)) || (fParam1 > 123750f && fParam1 < 126000f))
		{
			VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(*uParam0, 1);
		}
		if (((((((fParam1 > 10000f && fParam1 < 12500f) || (fParam1 > 42500f && fParam1 < 45000f)) || (fParam1 > 48000f && fParam1 < 51000f)) || (fParam1 > 71250f && fParam1 < 73200f)) || (fParam1 > 74250f && fParam1 < 76000f)) || (fParam1 > 110750f && fParam1 < 113500f)) || (fParam1 > 119000f && fParam1 < 121250f))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, 1);
		}
		else
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 0, 0);
		}
		if ((((((fParam1 > 23000f && fParam1 < 25000f) || (fParam1 > 61000f && fParam1 < 64000f)) || (fParam1 > 78500f && fParam1 < 81000f)) || (fParam1 > 95750f && fParam1 < 98500f)) || (fParam1 > 115000f && fParam1 < 115750f)) || (fParam1 > 123500f && fParam1 < 126500f))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, 1);
		}
		else
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(*uParam0, 1, 0);
		}
	}
}

void func_460()
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	char cVar13[64];
	char cVar14[64];
	int iVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23[4];
	int iVar24;
	int iVar25;
	int iVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	int iVar30;
	char* sVar31;
	vector3 vVar32;
	
	bVar0 = false;
	bVar1 = false;
	vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (!PED::IS_PED_INJURED(Local_505))
	{
		vVar3 = { ENTITY::GET_ENTITY_COORDS(Local_505, 1) };
	}
	if (!iLocal_285)
	{
		bVar4 = false;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[9], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[9], PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar4 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[10], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[10], PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar4 = true;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[11], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_225[11], PLAYER::PLAYER_PED_ID(), 1))
			{
				bVar4 = true;
			}
		}
		if (bVar4)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[9], 0))
			{
				iVar5[0] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_225[9], -1, 0);
				if (!PED::IS_PED_INJURED(iVar5[0]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225[9]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_225[9]);
					}
					AI::TASK_VEHICLE_MISSION_PED_TARGET(iVar5[0], iLocal_225[9], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, 1);
					PED::SET_PED_KEEP_TASK(iVar5[0], 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[10], 0))
			{
				iVar5[1] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_225[10], -1, 0);
				if (!PED::IS_PED_INJURED(iVar5[1]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225[10]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_225[10]);
					}
					AI::TASK_VEHICLE_MISSION_PED_TARGET(iVar5[1], iLocal_225[10], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, 1);
					PED::SET_PED_KEEP_TASK(iVar5[1], 1);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[11], 0))
			{
				iVar5[2] = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_225[11], -1, 0);
				if (!PED::IS_PED_INJURED(iVar5[2]))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225[11]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_225[11]);
					}
					AI::TASK_VEHICLE_MISSION_PED_TARGET(iVar5[2], iLocal_225[11], PLAYER::PLAYER_PED_ID(), 8, 70f, 786468, 300f, 300f, 1);
					PED::SET_PED_KEEP_TASK(iVar5[2], 1);
				}
			}
			iLocal_285 = 1;
		}
	}
	if (iLocal_218[9] == joaat("cruiser"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[9], 0))
		{
			if (!iLocal_265)
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_225[9], 1), vVar2) < 100f)
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Bike_Bell", iLocal_225[9], "ARM_1_SOUNDSET", 0, 0);
					iLocal_265 = 1;
				}
			}
		}
		else
		{
			iLocal_265 = 0;
		}
	}
	if (iLocal_218[15] == joaat("packer"))
	{
		if (iLocal_170[15] < 99 && fLocal_301 < (fLocal_139[15] + 10000f))
		{
			if (fLocal_301 > (fLocal_139[15] - 10000f) && !ENTITY::DOES_ENTITY_EXIST(iLocal_437))
			{
				STREAMING::REQUEST_MODEL(joaat("tanker"));
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(993, sLocal_413);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_225[15], 0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_437))
			{
				if (fLocal_301 < (fLocal_139[15] + 10000f))
				{
					STREAMING::REQUEST_MODEL(joaat("tanker"));
					if (STREAMING::HAS_MODEL_LOADED(joaat("tanker")) && !bVar0)
					{
						iLocal_437 = VEHICLE::CREATE_VEHICLE(joaat("tanker"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_225[15], 0f, -10f, 0f), ENTITY::GET_ENTITY_HEADING(iLocal_225[15]), 1, 1, 0);
						ENTITY::_SET_ENTITY_REGISTER(iLocal_437, 1);
						ENTITY::_SET_ENTITY_REGISTER(iLocal_225[15], 1);
						VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_225[15], iLocal_437, 1065353216);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tanker"));
						bVar0 = true;
					}
				}
			}
			else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225[15]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_437, 0))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_437))
					{
						VEHICLE::REQUEST_VEHICLE_RECORDING(993, sLocal_413);
						if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(993, sLocal_413))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_437, 993, sLocal_413, 1);
							func_371(&iLocal_437, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_225[15]));
						}
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_437, fLocal_302);
					}
				}
				if (!iLocal_250 && (SYSTEM::VDIST2(vVar2, ENTITY::GET_ENTITY_COORDS(iLocal_225[15], 1)) < 625f || SYSTEM::VDIST2(vVar3, ENTITY::GET_ENTITY_COORDS(iLocal_225[15], 1)) < 400f))
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_225[15], 3000, -2087385909, 0);
					iLocal_250 = 1;
				}
			}
			else if (fLocal_301 > (fLocal_139[15] + 10000f) && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_225[15]) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())))
			{
				func_334(&(iLocal_225[15]), 0);
				func_334(&iLocal_437, 0);
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_225[15]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_437))
			{
				func_334(&iLocal_437, 0);
			}
		}
	}
	if (iLocal_218[32] == joaat("bus"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_225[32], 0))
		{
			if (SYSTEM::VDIST2(vVar2, ENTITY::GET_ENTITY_COORDS(iLocal_225[32], 1)) < 900f)
			{
				if (!iLocal_251)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_225[32], 3000, -2087385909, 0);
					if (iLocal_344 == 0)
					{
						VEHICLE::SET_VEHICLE_LIGHTS(iLocal_225[32], 2);
						iLocal_344 = GAMEPLAY::GET_GAME_TIMER();
					}
					UNK1::_0x293220DA1B46CEBC(2f, 2f, 2);
					iLocal_251 = 1;
				}
			}
			if (iLocal_251 && iLocal_344 != 0)
			{
				if ((GAMEPLAY::GET_GAME_TIMER() - iLocal_344) > 2000)
				{
					VEHICLE::SET_VEHICLE_LIGHTS(iLocal_225[32], 1);
					iLocal_344 = 0;
				}
			}
		}
		else
		{
			iLocal_251 = 0;
			iLocal_344 = 0;
		}
	}
	if (iLocal_218[33] == joaat("burrito3"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_225[33], 0))
		{
			if (!iLocal_292)
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_225[33], 111, 111);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_225[33], 111, 111);
				iLocal_292 = 1;
			}
			if (SYSTEM::VDIST2(vVar2, ENTITY::GET_ENTITY_COORDS(iLocal_225[33], 1)) < 100f)
			{
				if (!iLocal_252)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_225[33], 2000, -2087385909, 0);
					iLocal_252 = 1;
				}
			}
		}
		else
		{
			iLocal_252 = 0;
			iLocal_292 = 0;
		}
	}
	if (iLocal_218[14] == joaat("benson"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_225[14], 0))
		{
			if (!iLocal_253)
			{
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_225[14], 4, 4);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_225[14], 4, 4);
				iLocal_253 = 1;
			}
		}
		else
		{
			iLocal_253 = 0;
		}
	}
	if (iLocal_216[91] == joaat("maverick"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_222[91], 0))
		{
			if (!iLocal_254)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_222[91], true, 1, 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_222[91]);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_222[91], 128, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_222[91], 128, 0);
				iLocal_254 = 1;
			}
		}
		else
		{
			iLocal_254 = 0;
		}
	}
	iVar6 = 0;
	bVar7 = false;
	bVar8 = false;
	iVar9 = 0;
	fVar10 = 0f;
	iVar15 = joaat("s_m_m_movalien_01");
	if (fLocal_301 < 43000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_513)
		{
			Local_513[iVar6 /*5*/].f_2 = 0;
			iVar6++;
		}
		iVar6 = 0;
		while (iVar6 < Local_514)
		{
			Local_514[iVar6 /*5*/].f_2 = 0;
			iVar6++;
		}
	}
	else
	{
		iVar6 = 0;
		while (iVar6 < Local_513)
		{
			if (iVar6 == 0)
			{
				StringCopy(&cVar14, "largegroup_flee_r_f_a", 64);
			}
			else if (iVar6 == 1)
			{
				StringCopy(&cVar14, "largegroup_flee_l_f_b", 64);
			}
			else if (iVar6 == 2)
			{
				StringCopy(&cVar14, "largegroup_flee_l_m_c", 64);
			}
			else if (iVar6 == 3)
			{
				StringCopy(&cVar14, "largegroup_flee_r_m_d", 64);
			}
			if (Local_513[iVar6 /*5*/].f_2 == 0)
			{
				if (fLocal_301 < 55000f)
				{
					STREAMING::REQUEST_MODEL(iVar15);
					STREAMING::REQUEST_ANIM_DICT(sLocal_420);
					if ((STREAMING::HAS_MODEL_LOADED(iVar15) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_420)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							StringCopy(&cVar13, "largegroup_loop_f_a", 64);
						}
						else if (iVar6 == 1)
						{
							StringCopy(&cVar13, "largegroup_loop_f_b", 64);
						}
						else if (iVar6 == 2)
						{
							StringCopy(&cVar13, "largegroup_loop_m_c", 64);
						}
						else if (iVar6 == 3)
						{
							StringCopy(&cVar13, "largegroup_loop_m_d", 64);
						}
						vVar11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_420, &cVar13, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0, 2) };
						vVar12 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_420, &cVar13, -1107.37f, -504.73f, 34.36f, 0f, 0f, 32.2f, 0f, 2) };
						Local_513[iVar6 /*5*/] = PED::CREATE_PED(26, iVar15, vVar11, vVar12.z, 1, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_513[iVar6 /*5*/], vVar11, 0, 0, 1);
						AI::TASK_PLAY_ANIM(Local_513[iVar6 /*5*/], sLocal_420, &cVar13, 1000f, -8f, -1, 9, 0f, 0, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_513[iVar6 /*5*/], true);
						ENTITY::SET_ENTITY_COLLISION(Local_513[iVar6 /*5*/], false, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_513[iVar6 /*5*/], 1);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_513[iVar6 /*5*/], 1);
						if (iVar6 == 2)
						{
							func_259(&Local_588, 2, Local_513[iVar6 /*5*/], "EXTRA1", 0, 1);
						}
						else if (iVar6 == 3)
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar15);
							func_259(&Local_588, 3, Local_513[iVar6 /*5*/], "EXTRA2", 0, 1);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_513[iVar6 /*5*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_513[iVar6 /*5*/], 3, 0, 0, 0);
						if ((iVar6 % 2) == 0)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_513[iVar6 /*5*/], 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_513[iVar6 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_513[iVar6 /*5*/], 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_513[iVar6 /*5*/], 5, 0, 0, 0);
						}
						Local_513[iVar6 /*5*/].f_2 = 1;
						Local_513[iVar6 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_513[iVar6 /*5*/]))
				{
					fVar10 = SYSTEM::VDIST2(vVar2, ENTITY::GET_ENTITY_COORDS(Local_513[iVar6 /*5*/], 1));
					if (fVar10 < 1600f)
					{
						iVar9 = 1;
					}
					if (Local_513[iVar6 /*5*/].f_2 == 1)
					{
						if (!bVar7)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_318 /*7*/], 0))
							{
								fVar16 = (SYSTEM::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(Local_513[iVar6 /*5*/], 1)) / ENTITY::GET_ENTITY_SPEED(Local_525[iLocal_317 /*7*/]));
								fVar17 = (SYSTEM::VDIST(vVar3, ENTITY::GET_ENTITY_COORDS(Local_513[iVar6 /*5*/], 1)) / ENTITY::GET_ENTITY_SPEED(Local_525[iLocal_318 /*7*/]));
								if (fVar16 < 2f)
								{
									bVar8 = true;
								}
								else if (fVar17 < 3f)
								{
									if (fLocal_302 > 0.7f)
									{
										bVar8 = true;
									}
								}
								bVar7 = true;
							}
						}
						if (bVar8)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_513[iVar6 /*5*/], false);
							ENTITY::SET_ENTITY_COLLISION(Local_513[iVar6 /*5*/], true, 0);
							if (iVar6 == 0)
							{
								AI::TASK_PLAY_ANIM(Local_513[iVar6 /*5*/], sLocal_420, &cVar14, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar6 == 1)
							{
								AI::TASK_PLAY_ANIM(Local_513[iVar6 /*5*/], sLocal_420, &cVar14, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar6 == 2)
							{
								AI::TASK_PLAY_ANIM(Local_513[iVar6 /*5*/], sLocal_420, &cVar14, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							else if (iVar6 == 3)
							{
								AI::TASK_PLAY_ANIM(Local_513[iVar6 /*5*/], sLocal_420, &cVar14, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							}
							Local_513[iVar6 /*5*/].f_2++;
						}
					}
					else if (Local_513[iVar6 /*5*/].f_2 == 2)
					{
						if (PED::IS_PED_RAGDOLL(Local_513[iVar6 /*5*/]))
						{
							Local_513[iVar6 /*5*/].f_2 = 100;
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_513[iVar6 /*5*/], sLocal_420, &cVar14, 3) || ENTITY::GET_ENTITY_SPEED(Local_513[iVar6 /*5*/]) < 0.1f)
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_513[iVar6 /*5*/], 1), vVar2) < 100f)
							{
								Local_513[iVar6 /*5*/].f_2 = 100;
							}
						}
					}
					else if (Local_513[iVar6 /*5*/].f_2 == 100)
					{
						if (AI::GET_SCRIPT_TASK_STATUS(Local_513[iVar6 /*5*/], 1805844857) != 1)
						{
							AI::TASK_SMART_FLEE_PED(Local_513[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_513[iVar6 /*5*/], 1);
						}
					}
				}
				else if (Local_588[2 /*10*/] == Local_513[iVar6 /*5*/])
				{
					func_462(&Local_588, 2);
				}
				else if (Local_588[3 /*10*/] == Local_513[iVar6 /*5*/])
				{
					func_462(&Local_588, 3);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_513[iVar6 /*5*/]))
				{
					if ((fLocal_301 > 64000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !bVar1)
					{
						if (!PED::IS_PED_INJURED(Local_513[iVar6 /*5*/]))
						{
							AI::TASK_SMART_FLEE_PED(Local_513[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_513[iVar6 /*5*/], 1);
						}
						func_57(&(Local_513[iVar6 /*5*/]), 0);
						bVar1 = true;
					}
				}
				else if (iVar6 == 0)
				{
					if (iLocal_584 == 4)
					{
						STREAMING::REMOVE_ANIM_DICT(sLocal_420);
					}
				}
			}
			iVar6++;
		}
		if (iVar9 && !iLocal_300[0])
		{
			if (!func_329(&Local_527, 1))
			{
				if (!PED::IS_PED_INJURED(Local_588[2 /*10*/]) && !PED::IS_PED_INJURED(Local_588[3 /*10*/]))
				{
					if (func_318(&Local_588, "ARM1AUD", "ARM1_EXTRAS2", "ARM1_EXTRAS2_1", 7, 0, 0))
					{
						UNK1::_0x293220DA1B46CEBC(2.5f, 4.5f, 3);
						iLocal_300[0] = 1;
					}
				}
			}
		}
		bVar7 = false;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < Local_514)
		{
			if (Local_514[iVar6 /*5*/].f_2 == 0)
			{
				if (fLocal_301 < 55000f)
				{
					STREAMING::REQUEST_MODEL(iVar15);
					STREAMING::REQUEST_ANIM_DICT(sLocal_420);
					if ((STREAMING::HAS_MODEL_LOADED(iVar15) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_420)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							StringCopy(&cVar13, "smallgroup_loop_f_a", 64);
						}
						else if (iVar6 == 1)
						{
							StringCopy(&cVar13, "smallgroup_loop_m_b", 64);
						}
						vVar11 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_420, &cVar13, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0, 2) };
						vVar12 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_420, &cVar13, -1139.247f, -524.062f, 32.021f, 0f, 0f, 20f, 0f, 2) };
						Local_514[iVar6 /*5*/] = PED::CREATE_PED(26, iVar15, vVar11, vVar12.z, 1, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_514[iVar6 /*5*/], vVar11, 0, 0, 1);
						AI::TASK_PLAY_ANIM(Local_514[iVar6 /*5*/], sLocal_420, &cVar13, 1000f, -8f, -1, 9, 0f, 0, 0, 0);
						ENTITY::FREEZE_ENTITY_POSITION(Local_514[iVar6 /*5*/], true);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_514[iVar6 /*5*/], 1);
						if (iVar6 == 1)
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar15);
						}
						PED::SET_PED_COMPONENT_VARIATION(Local_514[iVar6 /*5*/], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_514[iVar6 /*5*/], 3, 0, 0, 0);
						if ((iVar6 % 2) == 0)
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_514[iVar6 /*5*/], 0, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_514[iVar6 /*5*/], 5, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_514[iVar6 /*5*/], 0, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_514[iVar6 /*5*/], 5, 0, 0, 0);
						}
						Local_514[iVar6 /*5*/].f_2 = 1;
						Local_514[iVar6 /*5*/].f_3 = 0;
						bVar0 = true;
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(Local_514[iVar6 /*5*/]))
				{
					if (iVar6 == 0)
					{
						StringCopy(&cVar14, "smallgroup_flee_f_a", 64);
					}
					else if (iVar6 == 1)
					{
						StringCopy(&cVar14, "smallgroup_flee_m_b", 64);
					}
					if (Local_514[iVar6 /*5*/].f_2 == 1)
					{
						if (!bVar7 && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_525[iLocal_317 /*7*/], 0))
						{
							fVar18 = (SYSTEM::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(Local_514[iVar6 /*5*/], 1)) / ENTITY::GET_ENTITY_SPEED(Local_525[iLocal_317 /*7*/]));
							bVar8 = fVar18 < 1.8f;
							bVar7 = true;
						}
						if (bVar8)
						{
							ENTITY::FREEZE_ENTITY_POSITION(Local_514[iVar6 /*5*/], false);
							AI::TASK_PLAY_ANIM(Local_514[iVar6 /*5*/], sLocal_420, &cVar14, 8f, -8f, -1, 8, 0.05f, 0, 0, 0);
							Local_514[iVar6 /*5*/].f_2++;
						}
					}
					else if (Local_514[iVar6 /*5*/].f_2 == 2)
					{
						if (PED::IS_PED_RAGDOLL(Local_514[iVar6 /*5*/]))
						{
							Local_514[iVar6 /*5*/].f_2 = 100;
						}
						else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_514[iVar6 /*5*/], sLocal_420, &cVar14, 3))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_514[iVar6 /*5*/], 1), vVar2) < 100f)
							{
								Local_513[iVar6 /*5*/].f_2 = 100;
							}
						}
						else
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(Local_514[iVar6 /*5*/], sLocal_420, &cVar14, 0.95f);
						}
					}
					else if (Local_513[iVar6 /*5*/].f_2 == 100)
					{
						if (AI::GET_SCRIPT_TASK_STATUS(Local_514[iVar6 /*5*/], 1805844857) != 1)
						{
							AI::TASK_SMART_FLEE_PED(Local_514[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(Local_514[iVar6 /*5*/], 1);
						}
					}
				}
				if ((ENTITY::DOES_ENTITY_EXIST(Local_514[iVar6 /*5*/]) && (fLocal_301 > 64000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && !bVar1)
				{
					if (!PED::IS_PED_INJURED(Local_514[iVar6 /*5*/]))
					{
						AI::TASK_SMART_FLEE_PED(Local_514[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(Local_514[iVar6 /*5*/], 1);
					}
					func_57(&(Local_514[iVar6 /*5*/]), 0);
					bVar1 = true;
				}
			}
			iVar6++;
		}
	}
	STATS::STAT_GET_INT(joaat("sp0_kills"), &iVar19, -1);
	STATS::STAT_GET_INT(joaat("sp1_kills"), &iVar20, -1);
	STATS::STAT_GET_INT(joaat("sp2_kills"), &iVar21, -1);
	iVar22 = ((iVar19 + iVar20) + iVar21);
	if (!iLocal_271 && Local_513[0 /*5*/].f_2 > 0)
	{
		if (iVar22 > iLocal_357)
		{
			PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &iVar23, -1);
			iVar6 = 0;
			while (iVar6 < iVar23)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar23[iVar6]))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar23[iVar6]) == iVar15)
					{
						if (PED::IS_PED_INJURED(iVar23[iVar6]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar23[iVar6], 0), ENTITY::GET_ENTITY_COORDS(Local_525[iLocal_317 /*7*/], 0)) < 100f)
							{
								func_393(6);
								iLocal_271 = 1;
							}
						}
						else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar23[iVar6], PLAYER::PLAYER_PED_ID(), 1))
						{
							func_393(6);
							iLocal_271 = 1;
						}
					}
				}
				iVar6++;
			}
		}
		iVar24 = 0;
		while (iVar24 < SCRIPT::GET_NUMBER_OF_EVENTS(0))
		{
			iVar26 = SCRIPT::GET_EVENT_AT_INDEX(0, iVar24);
			if (iVar26 == 139)
			{
				SCRIPT::GET_EVENT_DATA(0, iVar24, &iVar25, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar25))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar25) == iVar15)
					{
						func_393(6);
						iLocal_271 = 1;
					}
				}
			}
			iVar24++;
		}
	}
	iLocal_357 = iVar22;
	if (fLocal_301 < 20000f)
	{
		Local_524[0 /*5*/].f_2 = 0;
		Local_524[1 /*5*/].f_2 = 0;
	}
	else if (fLocal_301 > 43000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_524)
		{
			switch (Local_524[iVar6 /*5*/].f_2)
			{
				case 0:
					if (iVar6 == 0)
					{
						vVar27 = { -1048.134f, -476.2388f, 35.805f };
						fVar28 = 316.5925f;
					}
					else
					{
						vVar27 = { -1210.121f, -570.0335f, 26.3435f };
						fVar28 = 295.8782f;
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), vVar27) < 40000f)
					{
						STREAMING::REQUEST_MODEL(iLocal_488);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_488) && !bVar0)
						{
							Local_524[iVar6 /*5*/] = PED::CREATE_PED(26, iLocal_488, vVar27, fVar28, 1, true);
							AI::TASK_LOOK_AT_ENTITY(Local_524[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_524[iVar6 /*5*/], 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_488);
							Local_524[iVar6 /*5*/].f_2++;
							bVar0 = true;
						}
					}
					break;
				
				case 1:
					bVar29 = false;
					if (!PED::IS_PED_INJURED(Local_524[iVar6 /*5*/]))
					{
						if (iVar6 == 0)
						{
							if (!PED::IS_PED_INJURED(Local_505))
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_524[iVar6 /*5*/], 1)) < 900f || (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_505, 1)) < 900f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_524[iVar6 /*5*/], 1), ENTITY::GET_ENTITY_COORDS(Local_505, 1)) < 100f))
								{
									bVar29 = true;
								}
							}
						}
						else
						{
							bVar29 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_524[iVar6 /*5*/], 1)) < 6400f;
						}
						if (bVar29)
						{
							func_268(Local_524[iVar6 /*5*/], "FIGHT", 6);
							Local_524[iVar6 /*5*/].f_2++;
						}
					}
					break;
				
				case 2:
					if (!PED::IS_PED_INJURED(Local_524[iVar6 /*5*/]))
					{
						if ((!PED::IS_PED_IN_COMBAT(Local_524[iVar6 /*5*/], 0) && AI::GET_SCRIPT_TASK_STATUS(Local_524[iVar6 /*5*/], 780511057) != 1) && AI::GET_SCRIPT_TASK_STATUS(Local_524[iVar6 /*5*/], 242628503) != 1)
						{
							AI::TASK_COMBAT_PED(Local_524[iVar6 /*5*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(Local_524[iVar6 /*5*/], 1);
						}
					}
					break;
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_524[iVar6 /*5*/]))
			{
				if (PED::IS_PED_INJURED(Local_524[iVar6 /*5*/]))
				{
					func_57(&(Local_524[iVar6 /*5*/]), 0);
				}
				else if (fLocal_301 > 66000f)
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_524[iVar6 /*5*/], 1)) > 10000f)
					{
						func_57(&(Local_524[iVar6 /*5*/]), 0);
					}
				}
			}
			iVar6++;
		}
	}
	if (fLocal_301 < 60000f)
	{
		iVar6 = 0;
		while (iVar6 < Local_520)
		{
			Local_520[iVar6 /*7*/].f_1 = 0;
			iVar6++;
		}
	}
	else
	{
		iVar30 = joaat("a_c_seagull");
		sVar31 = "creatures@gull@move";
		iVar6 = 0;
		while (iVar6 < Local_520)
		{
			if (Local_520[iVar6 /*7*/].f_1 == 0)
			{
				if (fLocal_301 < 72000f)
				{
					STREAMING::REQUEST_MODEL(iVar30);
					STREAMING::REQUEST_ANIM_DICT(sVar31);
					if ((STREAMING::HAS_MODEL_LOADED(iVar30) && STREAMING::HAS_ANIM_DICT_LOADED(sVar31)) && !bVar0)
					{
						if (iVar6 == 0)
						{
							Local_520[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.3756f, -730.0198f, -1161.135f) + Vector(-0.15f, 0f, 0f), 278.8218f, 1, true);
						}
						else if (iVar6 == 1)
						{
							Local_520[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.4617f, -728.611f, -1160.762f) + Vector(-0.15f, 0f, 0f), 322.6699f, 1, true);
						}
						else if (iVar6 == 2)
						{
							Local_520[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.5456f, -727.3837f, -1162.735f) + Vector(-0.15f, 0f, 0f), 32.0168f, 1, true);
						}
						else if (iVar6 == 3)
						{
							Local_520[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.3279f, -730.7355f, -1160.644f) + Vector(-0.15f, 0f, 0f), 152.0615f, 1, true);
						}
						else if (iVar6 == 4)
						{
							Local_520[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.4121f, -730.381f, -1155.033f) + Vector(-0.15f, 0f, 0f), 352.3865f, 1, true);
						}
						else if (iVar6 == 5)
						{
							Local_520[iVar6 /*7*/] = PED::CREATE_PED(26, iVar30, Vector(19.7718f, -723.8991f, -1152.808f) + Vector(-0.15f, 0f, 0f), 25.9012f, 1, true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar30);
						}
						AI::TASK_PLAY_ANIM(Local_520[iVar6 /*7*/], sVar31, "idle", 8f, -8f, -1, 9, 0f, 0, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_520[iVar6 /*7*/], 1);
						PED::SET_PED_CAN_RAGDOLL(Local_520[iVar6 /*7*/], 0);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_520[iVar6 /*7*/], true);
						ENTITY::FREEZE_ENTITY_POSITION(Local_520[iVar6 /*7*/], true);
						ENTITY::SET_ENTITY_COLLISION(Local_520[iVar6 /*7*/], false, 0);
						Local_520[iVar6 /*7*/].f_1 = 1;
						Local_520[iVar6 /*7*/].f_6 = 0f;
						bVar0 = true;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_520[iVar6 /*7*/]))
			{
				if (!PED::IS_PED_INJURED(Local_520[iVar6 /*7*/]))
				{
					switch (Local_520[iVar6 /*7*/].f_1)
					{
						case 1:
							if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ARM_1_BIRDS", 0, -1))
							{
								vVar32 = { ENTITY::GET_ENTITY_COORDS(Local_520[iVar6 /*7*/], 1) };
								if (SYSTEM::VDIST2(vVar2, vVar32) < 900f || (SYSTEM::VDIST2(vVar3, vVar32) < 900f && fLocal_302 > 0.7f))
								{
									if (iVar6 == 0)
									{
										AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Birds", Local_520[iVar6 /*7*/], "ARM_1_SOUNDSET", 0, 0);
										if (SYSTEM::VDIST2(vVar2, vVar32) < 2500f)
										{
											UNK1::_0x293220DA1B46CEBC(2f, 2f, 3);
										}
									}
									Local_520[iVar6 /*7*/].f_2 = GAMEPLAY::GET_GAME_TIMER();
									Local_520[iVar6 /*7*/].f_1++;
								}
							}
							break;
						
						case 2:
							if ((GAMEPLAY::GET_GAME_TIMER() - Local_520[iVar6 /*7*/].f_2) > 500)
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_520[iVar6 /*7*/], false);
								ENTITY::SET_ENTITY_COLLISION(Local_520[iVar6 /*7*/], true, 0);
								Local_520[iVar6 /*7*/].f_3 = { func_421(ENTITY::GET_ENTITY_ROTATION(Local_520[iVar6 /*7*/], 2) + Vector(0f, 0f, 45f)) };
								Local_520[iVar6 /*7*/].f_6 = (Local_520[iVar6 /*7*/].f_6 + ((14f - Local_520[iVar6 /*7*/].f_6) * 0.5f));
								ENTITY::SET_ENTITY_VELOCITY(Local_520[iVar6 /*7*/], Local_520[iVar6 /*7*/].f_3 * Vector(Local_520[iVar6 /*7*/].f_6, Local_520[iVar6 /*7*/].f_6, Local_520[iVar6 /*7*/].f_6));
								AI::TASK_PLAY_ANIM(Local_520[iVar6 /*7*/], sVar31, "flapping", 4f, -8f, -1, 9, 0f, 0, 0, 0);
								Local_520[iVar6 /*7*/].f_1++;
							}
							break;
						
						case 3:
							Local_520[iVar6 /*7*/].f_6 = (Local_520[iVar6 /*7*/].f_6 + ((14f - Local_520[iVar6 /*7*/].f_6) * 0.5f));
							ENTITY::SET_ENTITY_VELOCITY(Local_520[iVar6 /*7*/], Local_520[iVar6 /*7*/].f_3 * Vector(Local_520[iVar6 /*7*/].f_6, Local_520[iVar6 /*7*/].f_6, Local_520[iVar6 /*7*/].f_6));
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_520[iVar6 /*7*/], sVar31, "flapping", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(Local_520[iVar6 /*7*/], sVar31, "flapping", 4f);
								Local_520[iVar6 /*7*/].f_1++;
							}
							break;
						
						case 4:
							Local_520[iVar6 /*7*/].f_6 = (Local_520[iVar6 /*7*/].f_6 + ((14f - Local_520[iVar6 /*7*/].f_6) * 0.5f));
							ENTITY::SET_ENTITY_VELOCITY(Local_520[iVar6 /*7*/], Local_520[iVar6 /*7*/].f_3 * Vector(Local_520[iVar6 /*7*/].f_6, Local_520[iVar6 /*7*/].f_6, Local_520[iVar6 /*7*/].f_6));
							break;
						}
				}
				if ((fLocal_301 > 82000f || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !bVar1)
				{
					func_57(&(Local_520[iVar6 /*7*/]), 0);
					bVar1 = true;
				}
			}
			else if (iVar6 == 0)
			{
				STREAMING::REMOVE_ANIM_DICT(sVar31);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("ARM_1_BIRDS");
			}
			iVar6++;
		}
	}
	if (fLocal_301 < 20000f)
	{
		vLocal_521.z = 0;
	}
	else if (fLocal_301 > 120000f)
	{
		switch (vLocal_521.z)
		{
			case 0:
				STREAMING::REQUEST_MODEL(iLocal_487);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_487) && !bVar0)
				{
					vLocal_521.x = PED::CREATE_PED(26, iLocal_487, -73.6282f, -676.848f, 32.9306f, 69.2552f, 1, true);
					ENTITY::FREEZE_ENTITY_POSITION(vLocal_521.x, true);
					AI::TASK_STAND_STILL(vLocal_521.x, -1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(vLocal_521.x, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_487);
					vLocal_521.z++;
					bVar0 = true;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(vLocal_521.x))
				{
					if (ENTITY::IS_ENTITY_STATIC(vLocal_521.x))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(vLocal_521.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 2500f)
						{
							ENTITY::FREEZE_ENTITY_POSITION(vLocal_521.x, false);
						}
					}
					else if ((fLocal_301 < 144600f && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(vLocal_521.x, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < 25f) || fLocal_301 > 145600f)
					{
						vLocal_521.z++;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(vLocal_521.x))
				{
					if (!PED::IS_PED_IN_COMBAT(vLocal_521.x, 0) && AI::GET_SCRIPT_TASK_STATUS(vLocal_521.x, 780511057) != 1)
					{
						func_268(vLocal_521.x, "FIGHT", 24);
						AI::TASK_COMBAT_PED(vLocal_521.x, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				break;
		}
		if (vLocal_521.z > 0)
		{
			if (PED::IS_PED_INJURED(vLocal_521.x))
			{
				func_57(&vLocal_521, 0);
			}
		}
	}
	if (iLocal_217[14] == joaat("stockade"))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_224[14], 0))
		{
			if (!ENTITY::IS_ENTITY_STATIC(iLocal_224[14]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_224[14], true);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_224[14], 0);
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_462))
	{
		if (SYSTEM::VDIST2(vVar2, -7.1741f, -658.6362f, 33.8238f) < 10000f)
		{
			func_461(-7.1741f, -658.6362f, 33.8238f, 0f, 0f, 4.5837f, 0);
		}
	}
}

int func_461(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_462))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_vault_shutter"));
		if (!bParam2)
		{
			if (iLocal_473 == 0)
			{
				iLocal_473 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-7.9f, -662.2f, 34.7f, "dt1_03_carpark");
			}
			else
			{
				INTERIOR::_LOAD_INTERIOR(iLocal_473);
			}
		}
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_vault_shutter")))
		{
			if (!bParam2)
			{
				if (iLocal_473 != 0)
				{
					if (INTERIOR::IS_INTERIOR_READY(iLocal_473))
					{
						iLocal_462 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_vault_shutter"), vParam0, 1, true, 0);
						ENTITY::SET_ENTITY_ROTATION(iLocal_462, vParam1, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_462, true);
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_462, iLocal_473, -565398557);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_vault_shutter"));
						return 1;
					}
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
