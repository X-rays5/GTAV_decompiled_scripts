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
	var uLocal_23 = -1;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 1000;
	var uLocal_31 = 1000;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 4;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 4;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 4;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 4;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 4;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 4;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	struct<20> Local_93 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<2> Local_127 = { 0, 0 } ;
	int iLocal_129 = 0;
	int iLocal_130[3] = { 0, 0, 0 };
	int iLocal_134 = 0;
	int iLocal_135[2] = { 0, 0 };
	struct<14> Local_138[10];
	struct<14> Local_279[10];
	struct<16> Local_420[8];
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552[3] = { 0, 0, 0 };
	struct<4> Local_556[5];
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	var uLocal_588[2] = { 0, 0 };
	var uLocal_591[2] = { 0, 0 };
	int iLocal_594[4] = { 0, 0, 0, 0 };
	int iLocal_599[3] = { 0, 0, 0 };
	int iLocal_603[1] = { 0 };
	int iLocal_605 = 0;
	int iLocal_606[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633[3] = { 0, 0, 0 };
	var uLocal_637[2] = { 0, 0 };
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642[1] = { 0 };
	var uLocal_644[3] = { 0, 0, 0 };
	int iLocal_648 = 0;
	var uLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	var uLocal_652[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 21;
	var uLocal_681 = 6;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	int iLocal_685[29] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_715[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_726[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_745[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_759[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_766[1] = { 0 };
	int iLocal_768[2] = { 0, 0 };
	int iLocal_771[1] = { 0 };
	int iLocal_773 = 0;
	bool bLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	bool bLocal_779 = 0;
	bool bLocal_780[3] = { 0, 0, 0 };
	int iLocal_784[3] = { 0, 0, 0 };
	int iLocal_788[3] = { 0, 0, 0 };
	bool bLocal_792[3] = { 0, 0, 0 };
	int iLocal_796[3] = { 0, 0, 0 };
	bool bLocal_800[3] = { 0, 0, 0 };
	int iLocal_804[3] = { 0, 0, 0 };
	int iLocal_808[3] = { 0, 0, 0 };
	int iLocal_812 = 0;
	bool bLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	bool bLocal_822 = 0;
	bool bLocal_823 = 0;
	int iLocal_824 = 0;
	bool bLocal_825 = 0;
	bool bLocal_826 = 0;
	bool bLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	bool bLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	bool bLocal_835 = 0;
	bool bLocal_836 = 0;
	int iLocal_837 = 0;
	bool bLocal_838 = 0;
	int iLocal_839 = 0;
	bool bLocal_840 = 0;
	bool bLocal_841 = 0;
	bool bLocal_842 = 0;
	bool bLocal_843 = 0;
	int iLocal_844 = 0;
	bool bLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	bool bLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856[2] = { 0, 0 };
	int iLocal_859 = 0;
	int iLocal_860 = 0;
	bool bLocal_861 = 0;
	int iLocal_862 = 0;
	bool bLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	bool bLocal_867 = 0;
	bool bLocal_868 = 0;
	bool bLocal_869 = 0;
	bool bLocal_870 = 0;
	bool bLocal_871 = 0;
	int iLocal_872 = 0;
	bool bLocal_873 = 0;
	bool bLocal_874 = 0;
	int iLocal_875 = 0;
	bool bLocal_876 = 0;
	bool bLocal_877 = 0;
	bool bLocal_878 = 0;
	bool bLocal_879 = 0;
	bool bLocal_880 = 0;
	int iLocal_881 = 0;
	bool bLocal_882 = 0;
	int iLocal_883[1] = { 0 };
	bool bLocal_885 = 0;
	bool bLocal_886 = 0;
	bool bLocal_887 = 0;
	bool bLocal_888 = 0;
	int iLocal_889 = 0;
	bool bLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	bool bLocal_895 = 0;
	int iLocal_896 = 0;
	bool bLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	bool bLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	bool bLocal_903 = 0;
	bool bLocal_904 = 0;
	bool bLocal_905 = 0;
	bool bLocal_906 = 0;
	bool bLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	bool bLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	bool bLocal_917 = 0;
	int iLocal_918 = 0;
	bool bLocal_919 = 0;
	bool bLocal_920 = 0;
	bool bLocal_921 = 0;
	int iLocal_922 = 0;
	bool bLocal_923 = 0;
	int iLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	bool bLocal_934 = 0;
	bool bLocal_935 = 0;
	bool bLocal_936 = 0;
	bool bLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946 = 0;
	struct<3> Local_947[1];
	struct<3> Local_951[1];
	struct<3> Local_955[3];
	struct<3> Local_965[3];
	struct<3> Local_975 = { 0, 0, 0 } ;
	struct<3> Local_978 = { 0, 0, 0 } ;
	struct<3> Local_981[1];
	struct<3> Local_985[3];
	struct<3> Local_995 = { 0, 0, 0 } ;
	struct<3> Local_998[3];
	struct<3> Local_1008[3];
	struct<3> Local_1018 = { 0, 0, 0 } ;
	float fLocal_1021 = 0f;
	float fLocal_1022 = 0f;
	float fLocal_1023 = 0f;
	float fLocal_1024 = 0f;
	float fLocal_1025 = 0f;
	float fLocal_1026 = 0f;
	var uLocal_1027[1] = { 0 };
	var uLocal_1029[1] = { 0 };
	var uLocal_1031[3] = { 0, 0, 0 };
	var uLocal_1035[3] = { 0, 0, 0 };
	float fLocal_1039 = 0f;
	float fLocal_1040 = 0f;
	float fLocal_1041 = 0f;
	float fLocal_1042 = 0f;
	float fLocal_1043[3] = { 0f, 0f, 0f };
	float fLocal_1047[3] = { 0f, 0f, 0f };
	float fLocal_1051[3] = { 0f, 0f, 0f };
	float fLocal_1055 = 0f;
	int iLocal_1056 = 0;
	int iLocal_1057 = 0;
	int iLocal_1058 = 0;
	int iLocal_1059 = 0;
	int iLocal_1060 = 0;
	int iLocal_1061 = 0;
	int iLocal_1062 = 0;
	int iLocal_1063 = 0;
	int iLocal_1064[3] = { 0, 0, 0 };
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1087 = 0;
	int iLocal_1088 = 0;
	var uLocal_1089 = 0;
	int iLocal_1090[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1101 = 0;
	int iLocal_1102 = 0;
	int iLocal_1103 = 0;
	int iLocal_1104 = 0;
	int iLocal_1105 = 0;
	int iLocal_1106 = 0;
	int iLocal_1107 = 0;
	var uLocal_1108[3] = { 0, 0, 0 };
	int iLocal_1112[3] = { 0, 0, 0 };
	int iLocal_1116 = 0;
	int iLocal_1117 = 0;
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	int iLocal_1120 = 0;
	int iLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	var uLocal_1124[1] = { 0 };
	var uLocal_1126[3] = { 0, 0, 0 };
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	var uLocal_1135 = 0;
	int iLocal_1136 = 0;
	int iLocal_1137 = 0;
	int iLocal_1138 = 0;
	int iLocal_1139 = 0;
	int iLocal_1140 = 0;
	int iLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 16;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	struct<6> Local_1329 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_1335[48] = "";
	int iLocal_1341 = 0;
	int iLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 2;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 2;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 20;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = -1;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 1065353216;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = -1;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 1065353216;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = -1;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 1065353216;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = -1;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 1065353216;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = -1;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 1065353216;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = -1;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 1065353216;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = -1;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 1065353216;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = -1;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 1065353216;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = -1;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 1065353216;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = -1;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 1065353216;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = -1;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 1065353216;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = -1;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 1065353216;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = -1;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 1065353216;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = -1;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 1065353216;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = -1;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 1065353216;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = -1;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 1065353216;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = -1;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 1065353216;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = -1;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 1065353216;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = -1;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 1065353216;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = -1;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 1065353216;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 16;
	var uLocal_2494 = 0;
	var uLocal_2495 = -1082130432;
	var uLocal_2496 = 0;
	var uLocal_2497 = -1082130432;
	var uLocal_2498 = 0;
	var uLocal_2499 = -1082130432;
	var uLocal_2500 = 0;
	var uLocal_2501 = -1082130432;
	var uLocal_2502 = 0;
	var uLocal_2503 = -1082130432;
	var uLocal_2504 = 0;
	var uLocal_2505 = -1082130432;
	var uLocal_2506 = 0;
	var uLocal_2507 = -1082130432;
	var uLocal_2508 = 0;
	var uLocal_2509 = -1082130432;
	var uLocal_2510 = 0;
	var uLocal_2511 = -1082130432;
	var uLocal_2512 = 0;
	var uLocal_2513 = -1082130432;
	var uLocal_2514 = 0;
	var uLocal_2515 = -1082130432;
	var uLocal_2516 = 0;
	var uLocal_2517 = -1082130432;
	var uLocal_2518 = 0;
	var uLocal_2519 = -1082130432;
	var uLocal_2520 = 0;
	var uLocal_2521 = -1082130432;
	var uLocal_2522 = 0;
	var uLocal_2523 = -1082130432;
	var uLocal_2524 = 0;
	var uLocal_2525 = -1082130432;
	var uLocal_2526 = 16;
	var uLocal_2527 = 0;
	var uLocal_2528 = -1082130432;
	var uLocal_2529 = 0;
	var uLocal_2530 = -1082130432;
	var uLocal_2531 = 0;
	var uLocal_2532 = -1082130432;
	var uLocal_2533 = 0;
	var uLocal_2534 = -1082130432;
	var uLocal_2535 = 0;
	var uLocal_2536 = -1082130432;
	var uLocal_2537 = 0;
	var uLocal_2538 = -1082130432;
	var uLocal_2539 = 0;
	var uLocal_2540 = -1082130432;
	var uLocal_2541 = 0;
	var uLocal_2542 = -1082130432;
	var uLocal_2543 = 0;
	var uLocal_2544 = -1082130432;
	var uLocal_2545 = 0;
	var uLocal_2546 = -1082130432;
	var uLocal_2547 = 0;
	var uLocal_2548 = -1082130432;
	var uLocal_2549 = 0;
	var uLocal_2550 = -1082130432;
	var uLocal_2551 = 0;
	var uLocal_2552 = -1082130432;
	var uLocal_2553 = 0;
	var uLocal_2554 = -1082130432;
	var uLocal_2555 = 0;
	var uLocal_2556 = -1082130432;
	var uLocal_2557 = 0;
	var uLocal_2558 = -1082130432;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = -1082130432;
	var uLocal_2576 = -1082130432;
	var uLocal_2577 = 1;
	var uLocal_2578 = 1;
	var uLocal_2579 = 1;
	var uLocal_2580 = -1;
	var uLocal_2581 = -1;
	var uLocal_2582 = -1;
	struct<2> Local_2583 = { 0, 0 } ;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 2;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 2;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 20;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = -1;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 1065353216;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = -1;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 1065353216;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = -1;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 1065353216;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = -1;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 1065353216;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = -1;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 1065353216;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = -1;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 1065353216;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = -1;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 1065353216;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = -1;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 1065353216;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = -1;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 1065353216;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = -1;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 1065353216;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = -1;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 1065353216;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = -1;
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
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 1065353216;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = -1;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 1065353216;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = -1;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
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
	var uLocal_3368 = 1065353216;
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
	var uLocal_3395 = -1;
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
	var uLocal_3425 = 1065353216;
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
	var uLocal_3452 = -1;
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
	var uLocal_3482 = 1065353216;
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
	var uLocal_3509 = -1;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 1065353216;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 0;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = -1;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 1065353216;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = -1;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 1065353216;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = -1;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 1065353216;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 16;
	var uLocal_3735 = 0;
	var uLocal_3736 = -1082130432;
	var uLocal_3737 = 0;
	var uLocal_3738 = -1082130432;
	var uLocal_3739 = 0;
	var uLocal_3740 = -1082130432;
	var uLocal_3741 = 0;
	var uLocal_3742 = -1082130432;
	var uLocal_3743 = 0;
	var uLocal_3744 = -1082130432;
	var uLocal_3745 = 0;
	var uLocal_3746 = -1082130432;
	var uLocal_3747 = 0;
	var uLocal_3748 = -1082130432;
	var uLocal_3749 = 0;
	var uLocal_3750 = -1082130432;
	var uLocal_3751 = 0;
	var uLocal_3752 = -1082130432;
	var uLocal_3753 = 0;
	var uLocal_3754 = -1082130432;
	var uLocal_3755 = 0;
	var uLocal_3756 = -1082130432;
	var uLocal_3757 = 0;
	var uLocal_3758 = -1082130432;
	var uLocal_3759 = 0;
	var uLocal_3760 = -1082130432;
	var uLocal_3761 = 0;
	var uLocal_3762 = -1082130432;
	var uLocal_3763 = 0;
	var uLocal_3764 = -1082130432;
	var uLocal_3765 = 0;
	var uLocal_3766 = -1082130432;
	var uLocal_3767 = 16;
	var uLocal_3768 = 0;
	var uLocal_3769 = -1082130432;
	var uLocal_3770 = 0;
	var uLocal_3771 = -1082130432;
	var uLocal_3772 = 0;
	var uLocal_3773 = -1082130432;
	var uLocal_3774 = 0;
	var uLocal_3775 = -1082130432;
	var uLocal_3776 = 0;
	var uLocal_3777 = -1082130432;
	var uLocal_3778 = 0;
	var uLocal_3779 = -1082130432;
	var uLocal_3780 = 0;
	var uLocal_3781 = -1082130432;
	var uLocal_3782 = 0;
	var uLocal_3783 = -1082130432;
	var uLocal_3784 = 0;
	var uLocal_3785 = -1082130432;
	var uLocal_3786 = 0;
	var uLocal_3787 = -1082130432;
	var uLocal_3788 = 0;
	var uLocal_3789 = -1082130432;
	var uLocal_3790 = 0;
	var uLocal_3791 = -1082130432;
	var uLocal_3792 = 0;
	var uLocal_3793 = -1082130432;
	var uLocal_3794 = 0;
	var uLocal_3795 = -1082130432;
	var uLocal_3796 = 0;
	var uLocal_3797 = -1082130432;
	var uLocal_3798 = 0;
	var uLocal_3799 = -1082130432;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = -1082130432;
	var uLocal_3817 = -1082130432;
	var uLocal_3818 = 1;
	var uLocal_3819 = 1;
	var uLocal_3820 = 1;
	var uLocal_3821 = -1;
	var uLocal_3822 = -1;
	var uLocal_3823 = -1;
	struct<2> Local_3824 = { 0, 0 } ;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 2;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 2;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 20;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = -1;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 1065353216;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = -1;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 1065353216;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = -1;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 1065353216;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = -1;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 1065353216;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = -1;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 1065353216;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = -1;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 1065353216;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
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
	var uLocal_4180 = -1;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 1065353216;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = -1;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 1065353216;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = -1;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 1065353216;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = -1;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 1065353216;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = -1;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 1065353216;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = -1;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 1065353216;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = -1;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 1065353216;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = -1;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 1065353216;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = -1;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 1065353216;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = -1;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 1065353216;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = -1;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 1065353216;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = -1;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 0;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 1065353216;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = -1;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 1065353216;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = -1;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 1065353216;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 16;
	var uLocal_4976 = 0;
	var uLocal_4977 = -1082130432;
	var uLocal_4978 = 0;
	var uLocal_4979 = -1082130432;
	var uLocal_4980 = 0;
	var uLocal_4981 = -1082130432;
	var uLocal_4982 = 0;
	var uLocal_4983 = -1082130432;
	var uLocal_4984 = 0;
	var uLocal_4985 = -1082130432;
	var uLocal_4986 = 0;
	var uLocal_4987 = -1082130432;
	var uLocal_4988 = 0;
	var uLocal_4989 = -1082130432;
	var uLocal_4990 = 0;
	var uLocal_4991 = -1082130432;
	var uLocal_4992 = 0;
	var uLocal_4993 = -1082130432;
	var uLocal_4994 = 0;
	var uLocal_4995 = -1082130432;
	var uLocal_4996 = 0;
	var uLocal_4997 = -1082130432;
	var uLocal_4998 = 0;
	var uLocal_4999 = -1082130432;
	var uLocal_5000 = 0;
	var uLocal_5001 = -1082130432;
	var uLocal_5002 = 0;
	var uLocal_5003 = -1082130432;
	var uLocal_5004 = 0;
	var uLocal_5005 = -1082130432;
	var uLocal_5006 = 0;
	var uLocal_5007 = -1082130432;
	var uLocal_5008 = 16;
	var uLocal_5009 = 0;
	var uLocal_5010 = -1082130432;
	var uLocal_5011 = 0;
	var uLocal_5012 = -1082130432;
	var uLocal_5013 = 0;
	var uLocal_5014 = -1082130432;
	var uLocal_5015 = 0;
	var uLocal_5016 = -1082130432;
	var uLocal_5017 = 0;
	var uLocal_5018 = -1082130432;
	var uLocal_5019 = 0;
	var uLocal_5020 = -1082130432;
	var uLocal_5021 = 0;
	var uLocal_5022 = -1082130432;
	var uLocal_5023 = 0;
	var uLocal_5024 = -1082130432;
	var uLocal_5025 = 0;
	var uLocal_5026 = -1082130432;
	var uLocal_5027 = 0;
	var uLocal_5028 = -1082130432;
	var uLocal_5029 = 0;
	var uLocal_5030 = -1082130432;
	var uLocal_5031 = 0;
	var uLocal_5032 = -1082130432;
	var uLocal_5033 = 0;
	var uLocal_5034 = -1082130432;
	var uLocal_5035 = 0;
	var uLocal_5036 = -1082130432;
	var uLocal_5037 = 0;
	var uLocal_5038 = -1082130432;
	var uLocal_5039 = 0;
	var uLocal_5040 = -1082130432;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = -1082130432;
	var uLocal_5058 = -1082130432;
	var uLocal_5059 = 1;
	var uLocal_5060 = 1;
	var uLocal_5061 = 1;
	var uLocal_5062 = -1;
	var uLocal_5063 = -1;
	var uLocal_5064 = -1;
	bool bLocal_5065 = 0;
	bool bLocal_5066 = 0;
	int iLocal_5067 = 0;
	float fLocal_5068 = 0f;
	float fLocal_5069 = 0f;
	int iLocal_5070 = 0;
	struct<3> Local_5071 = { 0, 0, 0 } ;
	struct<3> Local_5074 = { 0, 0, 0 } ;
	float fLocal_5077 = 0f;
	float fLocal_5078 = 0f;
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
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	fLocal_40 = 1f;
	iLocal_585 = 786601;
	iLocal_1116 = unk_0x5E54B0823F46079E();
	fLocal_5068 = 0f;
	fLocal_5069 = 0f;
	Local_5071 = { 0.05f, 0.2f, 0.5f };
	Local_5074 = { 0f, 0f, 0f };
	fLocal_5077 = 0.05f;
	fLocal_5078 = 1.31f;
	unk_0x227BB9ED71ECB6E8(1);
	if (unk_0xED06FD5709A59F02(3))
	{
		func_1069();
		func_1062();
	}
	iLocal_817 = iLocal_817;
	uLocal_1155 = uLocal_1155;
	while (true)
	{
		unk_0xAEF7C45DAFB8E9B0("SaveMichaelAndTrevorP2", 0);
		if (func_1051())
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				func_1049(0);
				func_1046();
				func_1041();
				func_1038();
				func_1036();
				switch (iLocal_43)
				{
					case 0:
						func_1032();
						break;
					
					case 1:
						func_1025();
						break;
					
					case 3:
						func_993();
						break;
					
					case 2:
						func_889();
						break;
					
					case 4:
						func_824();
						break;
					
					case 5:
						func_285();
						break;
					
					case 6:
						func_1();
						break;
					}
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
	unk_0x17513DA51251A563();
	if (!bLocal_774)
	{
		if (!iLocal_819)
		{
			if (unk_0x578C4EF320340AF7() >= iLocal_1062 + 10000)
			{
				iLocal_819 = func_282("FINC1_TGD", 0, 0, 0);
			}
		}
	}
	else
	{
		iLocal_819 = 1;
	}
	if (!iLocal_775)
	{
		func_280("fin_ext_p1", func_281(17), 100f, 120f);
		if (unk_0x06BC339A53519E4E())
		{
			unk_0x931CABC5DE105C79("Devin", 0, 0, 1, joaat("cs_devin"));
			unk_0x931CABC5DE105C79("Devin", 8, 0, 0, joaat("cs_devin"));
			unk_0x931CABC5DE105C79("Devin", 10, 1, 0, joaat("cs_devin"));
			unk_0x931CABC5DE105C79("Devin", 9, 1, 0, joaat("cs_devin"));
			unk_0x931CABC5DE105C79("Devin", 6, 0, 0, joaat("cs_devin"));
			unk_0x931CABC5DE105C79("Devin", 4, 4, 0, joaat("cs_devin"));
			unk_0x931CABC5DE105C79("Devin", 3, 5, 0, joaat("cs_devin"));
			unk_0x931CABC5DE105C79("Devin", 11, 0, 0, joaat("cs_devin"));
		}
		if (!bLocal_934)
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
			{
				if (unk_0xE236CECA003D63B9(iLocal_594[3]))
				{
					bLocal_934 = func_279("FINC2_DEVINS_CAR_RADIO");
				}
			}
		}
		if (!iLocal_832)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_594[1]))
			{
				if (unk_0xA59F96B50B97E63C(iLocal_594[1], 0) || !unk_0xA59F96B50B97E63C(iLocal_594[1], 0))
				{
					if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_594[1], 300f, 300f, 300f, 0, 0, 0))
					{
						unk_0xE730EAF558C97567(&(iLocal_594[1]));
						func_278(6);
						iLocal_832 = 1;
					}
				}
			}
		}
		if (!iLocal_778)
		{
			if (func_269(1, 0, 1))
			{
				if (iLocal_926)
				{
					if (unk_0x578C4EF320340AF7() >= iLocal_1144 || (unk_0x578C4EF320340AF7() >= iLocal_1118 && iLocal_927))
					{
						if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
						{
							unk_0x2DB2D4C3CB88500D(-1, "FINALE_C2_DEVIN_INSIDE_TRUNK_MASTER", iLocal_594[3], 0, 0, 0);
						}
						if (iLocal_927 && unk_0x578C4EF320340AF7() < iLocal_1144)
						{
							iLocal_927 = 0;
						}
						else
						{
							iLocal_927 = 0;
							iLocal_926 = 0;
						}
					}
				}
				if (bLocal_910)
				{
				}
				else
				{
					if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), -1576.909f, 5159.752f, 18.79768f, 100f, 100f, 25f, 0, 1, 0))
					{
						bLocal_910 = func_282("FINC1_DEVARR", 0, 0, 0);
					}
					switch (iLocal_577)
					{
						case 0:
							if (unk_0x578C4EF320340AF7() >= iLocal_1117)
							{
								if (func_282("FINC1_DEVWAK", 0, 0, 0))
								{
									iLocal_926 = 1;
									iLocal_1144 = unk_0x578C4EF320340AF7() + 8200;
									iLocal_577 = 1;
									iLocal_1117 = unk_0x578C4EF320340AF7() + 7000;
								}
							}
							break;
						
						case 1:
							if (unk_0x578C4EF320340AF7() >= iLocal_1117)
							{
								if (func_282("FINC1_DHIDDN", 0, 0, 0))
								{
									iLocal_577 = 2;
									iLocal_1117 = unk_0x578C4EF320340AF7() + 4000;
								}
							}
							break;
						
						case 2:
							if (unk_0x578C4EF320340AF7() <= iLocal_1117)
							{
								if (func_282("FINC2_SHUTUP", 0, 0, 0))
								{
									iLocal_926 = 1;
									iLocal_1144 = unk_0x578C4EF320340AF7() + 9000;
									iLocal_577 = 3;
									iLocal_1117 = unk_0x578C4EF320340AF7() + 20000;
								}
							}
							else
							{
								iLocal_926 = 1;
								iLocal_1144 = unk_0x578C4EF320340AF7() + 9000;
								iLocal_577 = 3;
								iLocal_1117 = unk_0x578C4EF320340AF7() + 20000;
							}
							break;
						
						case 3:
							if (unk_0x578C4EF320340AF7() >= iLocal_1117)
							{
								if (func_282("FINC1_DEVTAK", 0, 0, 0))
								{
									iLocal_577 = 4;
								}
							}
							break;
						
						case 4:
							if (iLocal_820)
							{
								if (func_254())
								{
									iLocal_820 = 0;
								}
							}
							if (unk_0x578C4EF320340AF7() >= iLocal_1117)
							{
								if (func_282("FINC1_DEAD", 0, 0, 0))
								{
									iLocal_926 = 1;
									iLocal_1144 = unk_0x578C4EF320340AF7() + 3500;
									iLocal_577 = 5;
									iLocal_1117 = unk_0x578C4EF320340AF7() + 8000;
								}
							}
							break;
						
						case 5:
							if (unk_0x578C4EF320340AF7() >= iLocal_1117)
							{
								iLocal_577 = 6;
							}
							break;
						
						case 6:
							if (func_282("FINC1_BOOT", 0, 0, 0))
							{
								iLocal_577 = 7;
							}
							break;
						
						case 7:
							if (func_282("FINC2_SHUTUP", 0, 0, 0))
							{
								iLocal_1117 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(20000, 30000));
								iLocal_926 = 1;
								iLocal_927 = 1;
								switch (unk_0x344C570D6F8700DF(0, 6))
								{
									case 0:
										iVar1 = -3000;
										break;
									
									case 1:
										iVar1 = -2500;
										break;
									
									case 2:
										iVar1 = -2000;
										break;
									
									case 3:
										iVar1 = -1500;
										break;
									
									case 4:
										iVar1 = -1000;
										break;
									
									case 5:
										iVar1 = 500;
										break;
								}
								iLocal_1144 = (iLocal_1117 + iVar1);
								iLocal_1118 = (iLocal_1144 - unk_0x344C570D6F8700DF(10000, 15000));
								iLocal_577 = 5;
							}
							break;
						}
				}
				if (!unk_0x8F678487EEBD8CE4(uLocal_630))
				{
					unk_0xBE1CA603598C1441(5f, 10f, 4);
					func_252();
					func_251(0, 1, 1, 0);
					uLocal_630 = func_248(func_281(17), 1);
				}
				if (!bLocal_774)
				{
					if (!bLocal_779)
					{
						bLocal_779 = func_246("FC2_GORES", 1, 0);
					}
				}
				if (func_244())
				{
					if ((unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)) && unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), func_281(17), 6f, 6f, 2f, 1, 1, 0)) && iVar0 == 0)
					{
						unk_0x52090984B5C8A3E4(iLocal_594[3], 1, 1, 1, 1, 1, 0, 0, 0);
						func_243();
						func_252();
						func_241();
						iLocal_1060 = unk_0x578C4EF320340AF7();
						iLocal_778 = 1;
					}
				}
			}
			else if (iLocal_577 >= 5)
			{
				iLocal_577 = 5;
				if (unk_0x578C4EF320340AF7() >= iLocal_1117)
				{
					iLocal_1117 = unk_0x578C4EF320340AF7() + 5000;
				}
			}
			iVar2 = unk_0x4F5F2FB7AE0EB7AB(iLocal_594[3]);
			if (iLocal_577 >= 2)
			{
				if (!iLocal_911)
				{
					if (iVar2 < iLocal_1140)
					{
						if (unk_0x578C4EF320340AF7() >= iLocal_1139)
						{
							iLocal_1139 = unk_0x578C4EF320340AF7() + 800;
							iLocal_911 = 1;
						}
					}
					iLocal_1140 = iVar2;
				}
				else if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_594[3], 0))
				{
					if (func_282("FINC1_DEVCRA", 0, 0, 0))
					{
						iLocal_911 = 0;
						iLocal_1140 = iVar2;
						iLocal_1139 = unk_0x578C4EF320340AF7() + 12000;
					}
					else if (unk_0x578C4EF320340AF7() >= iLocal_1139)
					{
						iLocal_1140 = iVar2;
						iLocal_911 = 0;
					}
				}
				else
				{
					iLocal_1140 = iVar2;
					iLocal_911 = 0;
				}
			}
			else
			{
				iLocal_1140 = iVar2;
				iLocal_911 = 0;
			}
		}
		else
		{
			func_243();
			if (func_239(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 10f, 1, 1056964608, 0, 1, 0))
			{
				if (unk_0x578C4EF320340AF7() >= iLocal_1060 + 1000)
				{
					if (!func_238())
					{
						if (func_244())
						{
							unk_0xBE1CA603598C1441(10f, 5f, 4);
							iLocal_775 = 1;
						}
					}
				}
			}
		}
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<20> Var9;
	struct<21> Var31;
	struct<21> Var53;
	struct<20> Var75;
	struct<21> Var97;
	struct<21> Var119;
	struct<20> Var141;
	struct<21> Var163;
	struct<21> Var185;
	var uVar207;
	int iVar208;
	var uVar209;
	var uVar210;
	struct<3> Var211;
	struct<3> Var214;
	
	iVar0 = func_237();
	iVar1 = func_236();
	iVar2 = func_235();
	unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
	switch (iLocal_48)
	{
		case 0:
			func_233(1, 1, 1, 0, 1, 0, 1000, 1);
			unk_0x340AC4B1822C84FC(0f);
			unk_0xF41832EEBB4BEB88(0f);
			unk_0x43CB3F95A180AEB7(0f);
			unk_0x0E1FAD07764B5A99(0f);
			unk_0xBBC8FD4DA8036503(0f);
			unk_0x36B9BE40CA378FDE(0f);
			unk_0x1E63BA825094AB84(0f);
			unk_0x377BE44C47081F8C(0f);
			unk_0xBE3F979D06335858(0f);
			unk_0x23E48C407562E54D(0f);
			unk_0xC84E4FCDFE431B1D(0f);
			unk_0xDDDC68DEAB4F29FC(0.1f);
			func_231(15, 1, 8000);
			unk_0x4B95FBE1005DCF18(0.6f);
			unk_0x10A31C8383235C8F(0);
			unk_0x62AC0FC5A4A3B3DC(0);
			unk_0x21723EF7B2FCC4CC("FIN1_RADIO_FADE");
			Global_95398 = 0;
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
			unk_0x555EE41D7C7078E6(-1577.772f, 5157.833f, 18.7777f, 5f, 1, 0, 0, 0);
			unk_0x801B883D25479F23(-1577.772f, 5157.833f, 18.7777f, 12f, 0);
			unk_0xCFF81C0C8D63E62E(-1577.772f, 5157.833f, 18.7777f, 12f);
			unk_0x6D5673CA7E01D619(-1577.772f, 5157.833f, 18.7777f, 12f);
			unk_0x773B9DEB93E81B2F(-1577.772f, 5157.833f, 18.7777f, 120f, 0);
			unk_0xF27E737981AFB47D(-1577.772f, 5157.833f, 18.7777f, 120f, 0, 0, 0, 0, 0, 0);
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
			{
				unk_0x03D382CB0B44E2FC(iLocal_594[3], -1577.772f, 5157.833f, 18.7777f, 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(iLocal_594[3], 3.2f);
				unk_0xB11D151E210D4FAC(iLocal_594[3], 1084227584);
				unk_0xC160551F55D6365A(iLocal_594[3], 0, 0, 0);
				unk_0x316E0389ADF56E20(iLocal_594[3], 0f);
			}
			iLocal_1059 = unk_0x578C4EF320340AF7();
			if (unk_0x03DB5C6AABF8DA46())
			{
				unk_0xFD45D90342D2A0CD(800);
			}
			iLocal_48 = 1;
			break;
		
		case 1:
			switch (iLocal_129)
			{
				case 0:
					unk_0x168FCB2CD6F9B3F1(0f);
					unk_0x223E264962CEB86E(0f, 0f);
					func_280("fin_ext_p1", func_281(17), 100f, 120f);
					if (unk_0x03DB5C6AABF8DA46())
					{
						unk_0xFD45D90342D2A0CD(800);
					}
					if (unk_0x578C4EF320340AF7() >= iLocal_1059 + 8500)
					{
						if (func_203(27, &uLocal_673, 1, 0, 1, 1, 0))
						{
							while (!func_202())
							{
								unk_0x168FCB2CD6F9B3F1(0f);
								unk_0x223E264962CEB86E(0f, 0f);
								SYSTEM::WAIT(0);
							}
							func_81(0, 0);
							func_81(2, 0);
							func_81(1, 0);
							if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
							{
								unk_0x289D342D7C2DA52A(iLocal_594[3], 2);
								unk_0xFA3AB7AE2A01375E(iLocal_594[3], "Trevor_Cliff_Car", 0, 0, 0);
							}
							if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
							{
								unk_0xFA3AB7AE2A01375E(iVar1, "Trevor", 0, 0, 0);
							}
							if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
							{
								unk_0xFA3AB7AE2A01375E(iVar0, "Michael", 0, 0, 0);
							}
							else
							{
								unk_0xFA3AB7AE2A01375E(iVar0, "Michael", 2, func_74(0), 0);
							}
							if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
							{
								unk_0xFA3AB7AE2A01375E(iVar2, "Franklin", 0, 0, 0);
							}
							else
							{
								unk_0xFA3AB7AE2A01375E(iVar2, "Franklin", 2, func_74(1), 0);
							}
							unk_0xFA3AB7AE2A01375E(iLocal_586, "Devin", 2, joaat("cs_devin"), 0);
							unk_0x182DD1CBC93CF936(4);
							unk_0x6EEEEDB625F825CC(2048);
							unk_0x0310C14371244B31(0, 0, 0, 0);
							iLocal_129 = 1;
						}
					}
					break;
				
				case 1:
					if (!iLocal_777)
					{
						if (unk_0x3EBB66F936A3436E())
						{
							func_61(&uLocal_673, 0, 0, 2000, 1, 1, 0, 1);
							func_43();
							if (bLocal_774)
							{
								if (unk_0x03DB5C6AABF8DA46())
								{
									unk_0xFD45D90342D2A0CD(800);
								}
							}
							else if (unk_0x03DB5C6AABF8DA46())
							{
								unk_0xFD45D90342D2A0CD(800);
							}
							func_81(2, 0);
							func_42(10);
							unk_0x555EE41D7C7078E6(func_281(17), 12f, 1, 0, 0, 0);
							if (unk_0x80FF6C016CDB0FAF(iLocal_594[2], 0))
							{
								unk_0x7C3ECA5C7ACE0DDB(iLocal_594[2], 0, 0, 0f);
							}
							func_41(iLocal_594[3]);
							unk_0x52090984B5C8A3E4(iLocal_594[3], 0, 0, 0, 0, 0, 0, 0, 0);
							iLocal_777 = 1;
						}
					}
					if (!unk_0xAE06B9E39EBDE049(iLocal_586))
					{
						if (unk_0xAE06B9E39EBDE049(unk_0x0057F696C72889AD("Devin", 0)))
						{
							iLocal_586 = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("Devin", 0));
						}
					}
					if (!unk_0xAE06B9E39EBDE049(iLocal_49[0]))
					{
						if (unk_0xAE06B9E39EBDE049(unk_0x0057F696C72889AD("Michael", 0)))
						{
							iLocal_49[0] = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("Michael", 0));
						}
					}
					if (!unk_0xAE06B9E39EBDE049(iLocal_49[1]))
					{
						if (unk_0xAE06B9E39EBDE049(unk_0x0057F696C72889AD("Franklin", 0)))
						{
							iLocal_49[1] = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("Franklin", 0));
						}
					}
					if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
					{
						if (unk_0x10447A1CD8175FC0("Trevor", 0))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
							{
								func_39(iVar1, 2, &Var3, &Var6, 0f);
								unk_0xF8A652CE310FFC53(iVar1, iLocal_594[3], unk_0x0724529FC474C803(iLocal_594[3], "seat_dside_f"), Var3, Var6, 0, 0, 0, 0, 2, 1);
								Var9.f_4 = 1065353216;
								Var9.f_5 = 1065353216;
								Var9.f_9 = 1065353216;
								Var9.f_10 = 1065353216;
								Var9.f_14 = 1065353216;
								Var9.f_15 = 1065353216;
								Var9.f_17 = 1040187392;
								Var9.f_18 = 1040187392;
								Var9.f_19 = -1;
								Var31.f_4 = 1065353216;
								Var31.f_5 = 1065353216;
								Var31.f_9 = 1065353216;
								Var31.f_10 = 1065353216;
								Var31.f_14 = 1065353216;
								Var31.f_15 = 1065353216;
								Var31.f_17 = 1040187392;
								Var31.f_18 = 1040187392;
								Var31.f_19 = -1;
								Var31 = 1;
								Var31.f_2 = func_38(2);
								Var31.f_1 = func_37(9);
								Var31.f_3 = 0f;
								Var31.f_4 = 0f;
								Var31.f_20 = 1;
								unk_0x7EBB1C2626479390(iVar1, &Var31, &Var9, &Var9, 0f, 0f);
								Var53.f_4 = 1065353216;
								Var53.f_5 = 1065353216;
								Var53.f_9 = 1065353216;
								Var53.f_10 = 1065353216;
								Var53.f_14 = 1065353216;
								Var53.f_15 = 1065353216;
								Var53.f_17 = 1040187392;
								Var53.f_18 = 1040187392;
								Var53.f_19 = -1;
								Var53 = 1;
								Var53.f_2 = "PushCar_waitIdle_additive_T";
								Var53.f_1 = func_37(9);
								Var53.f_3 = 0f;
								Var53.f_4 = 1f;
								Var53.f_20 = 289;
								unk_0x7EBB1C2626479390(iVar1, &Var53, &Var9, &Var9, 0f, 0f);
								unk_0x1322CA891C5DF18A(iVar1, 0, 0);
							}
						}
						if (unk_0x10447A1CD8175FC0("Michael", 0))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
							{
								func_39(iVar0, 0, &Var3, &Var6, 0f);
								unk_0xF8A652CE310FFC53(iVar0, iLocal_594[3], unk_0x0724529FC474C803(iLocal_594[3], "seat_dside_f"), Var3, Var6, 0, 0, 0, 0, 2, 1);
								Var75.f_4 = 1065353216;
								Var75.f_5 = 1065353216;
								Var75.f_9 = 1065353216;
								Var75.f_10 = 1065353216;
								Var75.f_14 = 1065353216;
								Var75.f_15 = 1065353216;
								Var75.f_17 = 1040187392;
								Var75.f_18 = 1040187392;
								Var75.f_19 = -1;
								Var97.f_4 = 1065353216;
								Var97.f_5 = 1065353216;
								Var97.f_9 = 1065353216;
								Var97.f_10 = 1065353216;
								Var97.f_14 = 1065353216;
								Var97.f_15 = 1065353216;
								Var97.f_17 = 1040187392;
								Var97.f_18 = 1040187392;
								Var97.f_19 = -1;
								Var97 = 1;
								Var97.f_2 = func_38(0);
								Var97.f_1 = func_37(9);
								Var97.f_3 = 0f;
								Var97.f_4 = 0f;
								Var97.f_20 = 1;
								unk_0x7EBB1C2626479390(iVar0, &Var97, &Var75, &Var75, 0f, 0f);
								Var119.f_4 = 1065353216;
								Var119.f_5 = 1065353216;
								Var119.f_9 = 1065353216;
								Var119.f_10 = 1065353216;
								Var119.f_14 = 1065353216;
								Var119.f_15 = 1065353216;
								Var119.f_17 = 1040187392;
								Var119.f_18 = 1040187392;
								Var119.f_19 = -1;
								Var119 = 1;
								Var119.f_2 = "PushCar_waitIdle_additive_M";
								Var119.f_1 = func_37(9);
								Var119.f_3 = 0f;
								Var119.f_4 = 1f;
								Var119.f_20 = 289;
								unk_0x7EBB1C2626479390(iVar0, &Var119, &Var75, &Var75, 0f, 0f);
								unk_0x1322CA891C5DF18A(iVar0, 0, 0);
							}
						}
						if (unk_0x10447A1CD8175FC0("Franklin", 0))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
							{
								func_39(iVar2, 1, &Var3, &Var6, 0f);
								unk_0xF8A652CE310FFC53(iVar2, iLocal_594[3], unk_0x0724529FC474C803(iLocal_594[3], "seat_dside_f"), Var3, Var6, 0, 0, 0, 0, 2, 1);
								Var141.f_4 = 1065353216;
								Var141.f_5 = 1065353216;
								Var141.f_9 = 1065353216;
								Var141.f_10 = 1065353216;
								Var141.f_14 = 1065353216;
								Var141.f_15 = 1065353216;
								Var141.f_17 = 1040187392;
								Var141.f_18 = 1040187392;
								Var141.f_19 = -1;
								Var163.f_4 = 1065353216;
								Var163.f_5 = 1065353216;
								Var163.f_9 = 1065353216;
								Var163.f_10 = 1065353216;
								Var163.f_14 = 1065353216;
								Var163.f_15 = 1065353216;
								Var163.f_17 = 1040187392;
								Var163.f_18 = 1040187392;
								Var163.f_19 = -1;
								Var163 = 1;
								Var163.f_2 = func_38(1);
								Var163.f_1 = func_37(9);
								Var163.f_3 = 0f;
								Var163.f_4 = 0f;
								Var163.f_20 = 1;
								unk_0x7EBB1C2626479390(iVar2, &Var163, &Var141, &Var141, 0f, 0f);
								Var185.f_4 = 1065353216;
								Var185.f_5 = 1065353216;
								Var185.f_9 = 1065353216;
								Var185.f_10 = 1065353216;
								Var185.f_14 = 1065353216;
								Var185.f_15 = 1065353216;
								Var185.f_17 = 1040187392;
								Var185.f_18 = 1040187392;
								Var185.f_19 = -1;
								Var185 = 1;
								Var185.f_2 = "PushCar_waitIdle_additive_F";
								Var185.f_1 = func_37(9);
								Var185.f_3 = 0f;
								Var185.f_4 = 1f;
								Var185.f_20 = 289;
								unk_0x7EBB1C2626479390(iVar2, &Var185, &Var141, &Var141, 0f, 0f);
								unk_0x1322CA891C5DF18A(iVar2, 0, 0);
							}
						}
						if (unk_0x10447A1CD8175FC0("Trevor_Cliff_Car", 0))
						{
							unk_0x7CC9C12947A9030C(iLocal_594[3], 5, 1);
							unk_0xB11D151E210D4FAC(iLocal_594[3], 1084227584);
							unk_0x2DB2D4C3CB88500D(iLocal_1116, "CAR_WHEELS", iLocal_594[3], "FINALE_C2_SOUNDS", 0, 0);
						}
					}
					if (unk_0x10447A1CD8175FC0("Michaels_car", 0))
					{
					}
					if (unk_0x10447A1CD8175FC0("Franklin_Bike", 0))
					{
					}
					if (unk_0x10447A1CD8175FC0("Devin", 0))
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_586))
						{
							unk_0x586DDC617E714637(&iLocal_586);
						}
					}
					if (unk_0x59B0C38F9A3B22DB(0))
					{
						unk_0x62BA5ABF1BBE6186();
						unk_0xCD03E1D801B3278E(1);
						func_36();
						func_35("FC2_PUSHHLP");
						func_246("FC2_KILLDEV", 1, 0);
						func_33(11);
						unk_0x04DAD6EE29755E9A(6);
						if (unk_0xB531EC5EF2D2E6DB())
						{
							unk_0xFD45D90342D2A0CD(800);
						}
						iLocal_47 = 0;
						iLocal_1059 = unk_0x578C4EF320340AF7();
						iLocal_1144 = unk_0x578C4EF320340AF7() + 2000;
						func_32(0, 0, 1, 0);
						iLocal_129 = 2;
					}
					break;
				
				case 2:
					unk_0x2B6C81DF4CD1093C(0);
					func_31(&uVar207, &iVar208, &uVar209, &uVar210, 0);
					if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
					{
						Var211 = { func_30() };
						Local_978 = { Local_978 + Var211 - Local_978 * FtoV((5f * unk_0x9E3DAF75EFC49F5B())) };
						Local_978.f_2 = 20.3f;
						unk_0x8A3898631CCEC253(uLocal_648, Local_978);
						Var214 = { unk_0x3E4D3CCC220BDFB1(iLocal_594[3], 1) };
						if ((iVar208 < -100 && !unk_0xC1F43F8D0D5EB664(0)) || ((unk_0xB9C0D9B37277621D(0, 32) && unk_0xC1F43F8D0D5EB664(0)) && Var214.x > -1588.87f))
						{
							if (!iLocal_916)
							{
								if (unk_0x578C4EF320340AF7() >= iLocal_1142)
								{
									unk_0x2DB2D4C3CB88500D(-1, "Car_Push_Flex", iLocal_594[3], "FINALE_C2_SOUNDS", 0, 0);
									switch (unk_0x344C570D6F8700DF(0, 3))
									{
										case 0:
											if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
											{
												unk_0x798BC6477B831DCB(unk_0x9B0761B4C3EB8BC7(), 23, 0f, 0);
											}
											break;
										
										case 1:
											if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
											{
												unk_0x798BC6477B831DCB(iLocal_49[0], 23, 0f, 0);
											}
											break;
										
										case 2:
											if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[2]))
											{
												unk_0x798BC6477B831DCB(iLocal_49[2], 23, 0f, 0);
											}
											break;
									}
									iLocal_1142 = unk_0x578C4EF320340AF7() + 1500;
								}
								iLocal_916 = 1;
							}
							fLocal_1021 = (fLocal_1021 + (1.2f * SYSTEM::TIMESTEP()));
							if (fLocal_1021 > 14f)
							{
								fLocal_1021 = 14f;
							}
							fLocal_1025 = (fLocal_1025 + (1f * SYSTEM::TIMESTEP()));
							if (fLocal_1025 > 1f)
							{
								fLocal_1025 = 1f;
							}
							unk_0x8B77B020136E915A(iLocal_594[3], 0, 0f, fLocal_1021, 0f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
						}
						else
						{
							iLocal_916 = 0;
							fLocal_1021 = (fLocal_1021 - (1.5f * SYSTEM::TIMESTEP()));
							if (fLocal_1021 < 9f)
							{
								fLocal_1021 = 9f;
							}
							fLocal_1025 = (fLocal_1025 - (1f * SYSTEM::TIMESTEP()));
							if (fLocal_1025 < 0f)
							{
								fLocal_1025 = 0f;
							}
						}
						if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
						{
							unk_0x850FFB005E320A7B(iVar0, fLocal_1025, 0, 0);
						}
						if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
						{
							unk_0x850FFB005E320A7B(iVar1, fLocal_1025, 0, 0);
						}
						if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
						{
							unk_0x850FFB005E320A7B(iVar2, fLocal_1025, 0, 0);
						}
						if (unk_0x578C4EF320340AF7() >= iLocal_1144)
						{
							unk_0x2DB2D4C3CB88500D(-1, "FINALE_C2_DEVIN_INSIDE_TRUNK_MASTER", iLocal_594[3], 0, 0, 0);
							iLocal_1144 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4000, 8000));
						}
						if (!unk_0x3EBB66F936A3436E())
						{
							func_280("fin_ext_p2", -1584.7f, 5163.71f, 18.56f, 100f, 120f);
						}
						if (unk_0x578C4EF320340AF7() >= iLocal_1059 + 1000)
						{
							if (Var214.x < -1588.87f)
							{
								if (func_202())
								{
									if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
									{
										unk_0xFA3AB7AE2A01375E(iLocal_594[3], "Trevor_Cliff_Car", 0, 0, 0);
									}
									if (unk_0x80FF6C016CDB0FAF(iLocal_594[2], 0))
									{
										if (unk_0x36FE6D3220816ADA(iLocal_594[2]) == joaat("tailgater"))
										{
											unk_0xFA3AB7AE2A01375E(iLocal_594[2], "Michaels_car", 0, 0, 0);
										}
									}
									if (unk_0x80FF6C016CDB0FAF(iLocal_594[0], 0))
									{
										if (unk_0x36FE6D3220816ADA(iLocal_594[0]) == joaat("bagger"))
										{
											unk_0xFA3AB7AE2A01375E(iLocal_594[0], "Franklin_Bike", 0, 0, 0);
										}
									}
									if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
									{
										unk_0x1F8106DB8796859F(iVar1, 1, 1);
										unk_0xFA3AB7AE2A01375E(iVar1, "Trevor", 0, 0, 0);
									}
									if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
									{
										unk_0x1F8106DB8796859F(iVar0, 1, 1);
										unk_0xFA3AB7AE2A01375E(iVar0, "Michael", 0, 0, 0);
									}
									if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
									{
										unk_0x1F8106DB8796859F(iVar2, 1, 1);
										unk_0xFA3AB7AE2A01375E(iVar2, "Franklin", 0, 0, 0);
									}
									unk_0xC5E5600D1CF5CEF9(iLocal_1116);
									unk_0xD289B55B6AADBA10(1);
									iLocal_1059 = unk_0x578C4EF320340AF7();
									iLocal_776 = 0;
									iLocal_777 = 0;
									unk_0xBE1CA603598C1441(5f, 0f, 4);
									unk_0x182DD1CBC93CF936(4);
									unk_0x6EEEEDB625F825CC(2048);
									unk_0x0310C14371244B31(0, 0, 0, 0);
									unk_0xBAA4D421B8B8A744("CREDIT", 0);
									iLocal_129 = 3;
								}
							}
						}
					}
					else
					{
						unk_0xBAA4D421B8B8A744("CREDIT", 0);
						func_28();
					}
					break;
				
				case 3:
					if (unk_0xB531EC5EF2D2E6DB())
					{
						iLocal_776 = 1;
					}
					if (!iLocal_777)
					{
						if (unk_0x3EBB66F936A3436E())
						{
							func_42(11);
							if (unk_0x03DB5C6AABF8DA46())
							{
								unk_0xFD45D90342D2A0CD(800);
							}
							iLocal_777 = 1;
						}
					}
					if (!Global_95398)
					{
						if (unk_0x9BEEC39E5B3F1C3C() >= 71400)
						{
							unk_0xDA6953162D7DF5E4(1);
							unk_0x8F125D76F29885E2(1);
							unk_0x759283FEF4AB96B3(1);
							unk_0x08F33B91E190227C("RADIO_01_CLASS_ROCK");
							unk_0x9EF1F01F70231865("RADIO_01_CLASS_ROCK", "END_CREDITS_SAVE_MICHAEL_TREVOR", 1);
							unk_0x779660A9E5364C4D(2, 18, 1);
							Global_95398 = 1;
						}
					}
					else
					{
						unk_0x779660A9E5364C4D(2, 18, 1);
					}
					if (!bLocal_936)
					{
						if (unk_0x9BEEC39E5B3F1C3C() >= 90583)
						{
							func_26();
							if (unk_0xF5EE205091CE6DB2(0))
							{
								unk_0x62BA5ABF1BBE6186();
								func_25();
							}
						}
					}
					if (!bLocal_906)
					{
						if (unk_0x9BEEC39E5B3F1C3C() >= 95600)
						{
							func_10(5, 0);
							bLocal_906 = true;
						}
					}
					if (unk_0x10447A1CD8175FC0("Trevor", 0))
					{
					}
					if (unk_0x59B0C38F9A3B22DB(0))
					{
						unk_0x62BA5ABF1BBE6186();
						func_28();
					}
					break;
				
				case 4:
					func_26();
					if (unk_0x578C4EF320340AF7() >= (iLocal_1151 + 45000))
					{
						unk_0x1D40553EDD51A1B8(5000);
						while (!unk_0x03DB5C6AABF8DA46())
						{
							SYSTEM::WAIT(0);
						}
						func_3();
					}
					break;
			}
			break;
		
		case 2:
			break;
	}
}

void func_3()
{
	func_9(264, 1, 0);
	if (!bLocal_906)
	{
		func_10(5, 0);
	}
	Global_95399 = 2;
	if (func_8(0))
	{
		Global_61719 = 1;
		func_7(1, 1);
	}
	func_4(1, 0);
	if (func_8(0))
	{
		Global_61717 = 0;
	}
	func_1062();
}

void func_4(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61719)
	{
		Global_61719 = iParam1;
	}
	if (bParam0)
	{
		if ((func_8(0) && Global_77079.f_1 == 1) && func_6(Global_77079))
		{
		}
		else
		{
			Global_61717 = 1;
		}
	}
	if (Global_111858.f_9081 || func_8(0))
	{
		iVar0 = func_5();
		iVar1 = Global_89707[iVar0 /*5*/];
		uVar2 = Global_77102.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111858.f_9081)
			{
			}
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 4);
		unk_0xBE20AB8238688965(&Global_77081, 1);
		Global_77097 = uVar2;
		Global_77098 = unk_0x578C4EF320340AF7();
	}
}

int func_5()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_6(int iParam0)
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

void func_7(int iParam0, int iParam1)
{
	Global_77101 = iParam1;
	if (Global_61711)
	{
		return;
	}
	if (Global_61738)
	{
		Global_61738 = 0;
		return;
	}
	if (unk_0x7B70881748D166CD(joaat("mission_stat_watcher")) > 0)
	{
		if (Global_61711)
		{
		}
		Global_61737 = iParam0;
		Global_61711 = 1;
		Global_61722 = 1;
	}
}

bool func_8(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_9(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73812)
	{
		if (Global_73813[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_73813[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_73813[iVar0 /*9*/].f_1 = (Global_73813[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_73813[iVar0 /*9*/] != -1)
	{
		if (Global_61942[Global_73813[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_73813[iVar0 /*9*/].f_1 > 1)
			{
				Global_73813[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_73813[iVar0 /*9*/].f_1 < 0)
			{
				Global_73813[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

int func_10(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_98955.f_20, 17))
	{
		return 0;
	}
	return func_11(iParam0, iParam1);
}

int func_11(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_12(iParam0, iParam1);
}

int func_12(int iParam0, int iParam1)
{
	if (func_24(14) && !func_23(iParam0))
	{
		return 0;
	}
	if (unk_0x027BA2E902FAC118(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31217 != 0 && !Global_76833)
	{
		return 0;
	}
	if (func_22(&Global_4271324))
	{
		if (func_20(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_13(&Global_4271324, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x1C382E0E92F57545(iParam0))
		{
			return 0;
		}
		if (unk_0x027BA2E902FAC118(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_13(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_23(iParam1))
	{
		return 0;
	}
	if (func_20(uParam0, iParam1))
	{
		return 0;
	}
	if (func_19(uParam0) < 0f)
	{
		func_18(uParam0, 0);
	}
	func_16(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_14(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_14(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_24(14) && !func_23(iParam1))
	{
		return 0;
	}
	if (func_20(uParam0, iParam1))
	{
		return 0;
	}
	if (func_19(uParam0) < 0f)
	{
		func_18(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_15(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_16(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_17(uParam0, iVar0);
		iVar0++;
	}
	func_18(uParam0, (Global_4271323 - 0.5f));
}

void func_17(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_18(var uParam0, float fParam1)
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

float func_19(var uParam0)
{
	return uParam0->f_80;
}

bool func_20(var uParam0, int iParam1)
{
	return func_21(uParam0, iParam1) != -1;
}

int func_21(var uParam0, int iParam1)
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

bool func_22(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_23(int iParam0)
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

bool func_24(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_25()
{
	unk_0x4619F6EDF0CF5B52(1);
	unk_0x5C7BCF843A51F72E(0);
	unk_0x17E478571720218F("END_CREDITS_SCENE");
	unk_0xB41F0F02EFE4C880(0);
	bLocal_936 = true;
}

void func_26()
{
	unk_0x0037AEC7A79CCCB4();
	func_27();
}

void func_27()
{
	Global_22411.f_134 = 1;
}

void func_28()
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x1F8106DB8796859F(unk_0x9B0761B4C3EB8BC7(), 1, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_49[iVar0]))
		{
			unk_0x586DDC617E714637(&(iLocal_49[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_586))
	{
		unk_0x586DDC617E714637(&iLocal_586);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_594)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_594[iVar0]))
		{
			unk_0x03A2522C845CFAC6(&(iLocal_594[iVar0]));
		}
		iVar0++;
	}
	if (iLocal_776)
	{
	}
	func_29(&uLocal_648);
	unk_0x8A3898631CCEC253(uLocal_648, -1573.803f, 5160.573f, 20.7951f);
	unk_0xBF92D2A60C7C686E(uLocal_648, 5.998f, -0.0062f, 83.9225f, 2);
	unk_0xD64C2E5B5BA2D347(uLocal_648, 40f);
	func_29(&uLocal_649);
	unk_0x8A3898631CCEC253(uLocal_649, -1573.803f, 5160.573f, 20.7951f);
	unk_0xBF92D2A60C7C686E(uLocal_649, 5.998f, -0.0062f, 83.9225f, 2);
	unk_0xD64C2E5B5BA2D347(uLocal_649, 40f);
	unk_0x2311A669433389E8(uLocal_649, "HAND_SHAKE", 0.15f);
	unk_0xF674D9B2033F5F86(uLocal_649, uLocal_648, 2000, 1, 1);
	iLocal_1151 = unk_0x578C4EF320340AF7();
	iLocal_129 = 4;
	if (!bLocal_936)
	{
		while (!unk_0xF5EE205091CE6DB2(0))
		{
			SYSTEM::WAIT(0);
		}
		func_25();
	}
	if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
	{
		unk_0xFD45D90342D2A0CD(800);
	}
}

void func_29(var uParam0)
{
	if (unk_0x40397A9A17EEC1C5(uLocal_649))
	{
		unk_0xB8B0F7C8C1548C5B(uLocal_649, 0);
	}
	if (unk_0x40397A9A17EEC1C5(*uParam0))
	{
		unk_0xB8B0F7C8C1548C5B(*uParam0, 0);
	}
	if (!unk_0x40397A9A17EEC1C5(*uParam0))
	{
		*uParam0 = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", 1);
	}
}

Vector3 func_30()
{
	struct<3> Var0;
	
	if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
	{
		Var0 = { 0.9f, (-4.3f + (fLocal_1025 / 3f)), 0.8f };
		return unk_0x7EC595B99EA7C4B1(iLocal_594[3], Var0);
	}
	return 0f, 0f, 0f;
}

void func_31(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = SYSTEM::FLOOR((unk_0xAAC78749C4BB5219(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((unk_0xAAC78749C4BB5219(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((unk_0xAAC78749C4BB5219(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((unk_0xAAC78749C4BB5219(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((unk_0x9A36B66CB7B51691(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((unk_0x9A36B66CB7B51691(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((unk_0x9A36B66CB7B51691(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((unk_0x9A36B66CB7B51691(2, 221) * 127f));
		}
	}
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && iParam2)
		{
			unk_0x6D883C27212BF370(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

var func_33(int iParam0)
{
	return unk_0x17E478571720218F(func_34(iParam0));
}

char* func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "FINALE_FRANKLIN_DRIVE";
			break;
		
		case 1:
			return "FINALE_FRANKLIN_ON_FOOT";
			break;
		
		case 2:
			return "FINALE_FRANKLIN_KILL_CHENG";
			break;
		
		case 3:
			return "FINALE_MICHAEL_DRIVE";
			break;
		
		case 4:
			return "FINALE_MICHAEL_ON_FOOT";
			break;
		
		case 5:
			return "FINALE_MICHAEL_KILL_STRETCH";
			break;
		
		case 6:
			return "FINALE_TREVOR_DRIVE";
			break;
		
		case 7:
			return "FINALE_TREVOR_ON_FOOT";
			break;
		
		case 8:
			return "FINALE_TREVOR_KILL_STEVE";
			break;
		
		case 9:
			return "FINALE_DRIVE_TO_DEVIN";
			break;
		
		case 10:
			return "FINALE_DRIVE_TO_OCEAN";
			break;
		
		case 11:
			return "FINALE_PUSH_CAR";
			break;
		
		case 12:
			return "FINALE_FRANKLIN_ESCAPE_TRIADS";
			break;
		
		case 13:
			return "FINALE_MICHAEL_KILL_BALLAS";
			break;
		
		case 14:
			return "FINALE_MICHAEL_ENEMY_CAR_ARRIVES";
			break;
		
		case 15:
			return "FINALE_TREVOR_FOCUS_ON_WHEEL";
			break;
		
		case 16:
			return "FINALE_TREVOR_WATCH_STEVE_CAMERA";
			break;
		
		case 17:
			return "FINALE_TREVOR_KILL_CAM";
			break;
		
		case 18:
			return "FINALE_DEVINS_HOUSE_OVERVIEW";
			break;
		
		case 19:
			return "FINALE_KIDNAP_DEVIN_STEALTH";
			break;
		
		case 20:
			return "FINALE_KIDNAP_DEVIN_ALERT";
			break;
	}
	return "";
}

void func_35(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, 1, -1);
}

void func_36()
{
	if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
	{
		func_29(&uLocal_648);
		Local_978 = { func_30() };
		Local_978.f_2 = 20.3f;
		unk_0x8A3898631CCEC253(uLocal_648, Local_978);
		unk_0xBF92D2A60C7C686E(uLocal_648, -8.7f, 0f, 110.3f, 2);
		unk_0xD64C2E5B5BA2D347(uLocal_648, 41.5f);
		unk_0x2311A669433389E8(uLocal_648, "HAND_SHAKE", 0.3f);
		unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
	}
}

char* func_37(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MISSFINALE_C2IG_1";
			break;
		
		case 3:
			return "MISSFINALE_C2MCS_1";
			break;
		
		case 1:
			return "MISSFINALE_C2IG_2";
			break;
		
		case 2:
			return "MISSFINALE_C2IG_4";
			break;
		
		case 4:
			return "MISSFINALE_C2STEVE_CAMERAMAN_DEATH";
			break;
		
		case 5:
			return "MISSFINALE_C2IG_5";
			break;
		
		case 6:
			return "MISSFINALE_C2IG_7_ALT1";
			break;
		
		case 7:
			return "MISSFINALE_C2MCS_2_B";
			break;
		
		case 8:
			return "MISSFINALE_C2IG_8";
			break;
		
		case 9:
			return "MISSFINALE_C2IG_11";
			break;
		
		case 10:
			return "reaction@gunfire@intro_v1";
			break;
		
		case 11:
			return "reaction@gunfire@runs_v1";
			break;
		
		case 12:
			return "MISSFINALE_C2CAPTURE_DEVIN";
			break;
	}
	return "invalid!";
}

char* func_38(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "PushCar_offCliff_T";
			break;
		
		case 0:
			return "PushCar_offCliff_M";
			break;
		
		case 1:
			return "PushCar_offCliff_F";
			break;
	}
	return "error";
}

void func_39(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4)
{
	float fVar0;
	
	if (fParam4 >= 0f)
	{
		fVar0 = fParam4;
	}
	else
	{
		fVar0 = func_40(iParam0, iParam1);
	}
	*uParam2 = { unk_0xD7D25254A712E758(func_37(9), func_38(iParam1), 0f, 0f, 0f, 0f, 0f, 0f, fVar0, 2) };
	*uParam3 = { unk_0xD78F5800B90C4843(func_37(9), func_38(iParam1), 0f, 0f, 0f, 0f, 0f, 0f, fVar0, 2) };
}

float func_40(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = func_38(iParam1);
	if (unk_0x9934470AA0A08B57(iParam0, func_37(9), sVar0, 3))
	{
		return unk_0x4C06B15B376AA145(iParam0, func_37(9), sVar0);
	}
	return 0f;
}

void func_41(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (unk_0x0922C2E075A5F18C(iParam0))
			{
				unk_0x604DFEB2836FB51B(iParam0);
				unk_0x697DA7132EE43ABC(iParam0, unk_0x4F5F2FB7AE0EB7AB(iParam0) + 200, 0);
				unk_0x0FC504FAF5EB94FB(iParam0, (unk_0xDAD5E5518E960CD1(iParam0) + 200f));
				unk_0x4A9F6CA267EF14FE(iParam0, (unk_0x6167DCEE85C18365(iParam0) + 200f));
				unk_0xCFF81C0C8D63E62E(unk_0x3E4D3CCC220BDFB1(iParam0, 1), 5f);
				unk_0x555EE41D7C7078E6(unk_0x3E4D3CCC220BDFB1(iParam0, 1), 2.5f, 1, 0, 0, 0);
			}
		}
	}
}

void func_42(int iParam0)
{
	unk_0xFA07F8BEBDAAFBA8(func_34(iParam0));
}

void func_43()
{
	func_251(1, 1, 1, 0);
	func_53(1, 1, 1, 0, 0, 0, 0);
	func_44();
}

void func_44()
{
	func_45(1);
	unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		func_52();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_51(0))
		{
			func_46(0);
		}
	}
	else if (Global_19681.f_1 == 1)
	{
		if (!Global_19681.f_1 == 0)
		{
			Global_19681.f_1 = 3;
		}
	}
}

void func_46(int iParam0)
{
	if (func_50())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_49())
		{
			func_48(1, 1);
		}
		else
		{
			func_48(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(0);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_47())
	{
		Global_19681.f_1 = 3;
	}
}

int func_47()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_48(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_51(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

bool func_49()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_50()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_51(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
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
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_52()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_53(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_60(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(0);
			}
			if (!func_47())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_32(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_60(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_32(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_58(unk_0x460153A63B9477BC())) && !func_55(unk_0x460153A63B9477BC(), 0)) && !func_54()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_58(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Global_76831 = 0;
	}
}

bool func_54()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

bool func_55(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_56(-1, 0) == 8;
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

int func_56(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_57();
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

int func_57()
{
	return Global_1312763;
}

int func_58(int iParam0)
{
	if (func_55(iParam0, 0))
	{
		return 1;
	}
	if (func_59())
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

bool func_59()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

void func_60(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 13);
	}
}

void func_61(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	
	if (iParam4 == 1)
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()), 64);
	}
	if (!unk_0x3EBB66F936A3436E())
	{
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), !bParam1, 0);
	}
	if (bParam7)
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x9EB88E485EDFD7EB(unk_0x9B0761B4C3EB8BC7(), 1);
		}
	}
	if (!bParam1 && iParam6)
	{
		unk_0x47012CDD5C524D7B(0, 0, 3, 0);
	}
	else
	{
		unk_0x3ED9330214992278(bParam1, bParam2, iParam3, 1, 0, 0);
	}
	if (bParam1)
	{
		unk_0xD289B55B6AADBA10(1);
	}
	else
	{
		if (unk_0x40397A9A17EEC1C5(uParam0->f_4))
		{
			if (unk_0xC516FEEB950FFD58(uParam0->f_4))
			{
				unk_0x856549C07003344B(uParam0->f_4, 0);
			}
			unk_0xB8B0F7C8C1548C5B(uParam0->f_4, 1);
		}
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 1, 0);
		}
		iVar0 = unk_0xA5D3CD332CD10EE9();
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			unk_0x80250B8368A4E611(iVar0, 1, 0);
		}
		unk_0x9128BA5F998AA176("TIME_LAPSE");
		if (unk_0x306BF588BD8151E8("TOD_SHIFT_SCENE"))
		{
			unk_0xC5E5600D1CF5CEF9(uParam0->f_10);
			unk_0x9128BA5F998AA176("TIME_LAPSE");
			unk_0xFA07F8BEBDAAFBA8("TOD_SHIFT_SCENE");
		}
	}
	func_53(bParam1, 1, 0, 0, 0, 0, 0);
	func_73();
	if (!bParam1 && iParam5)
	{
		if (uParam0->f_5)
		{
			unk_0x538D71DCD2FF3072(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x538D71DCD2FF3072(uParam0->f_8, 0, 0);
		}
	}
	if (!bParam1)
	{
		if (unk_0x03DB5C6AABF8DA46())
		{
			unk_0xFD45D90342D2A0CD(250);
		}
	}
	if (!bParam1)
	{
		if (Global_111858.f_32745.f_4801 != -15)
		{
			Global_111858.f_32745.f_4801 = func_62();
		}
	}
}

var func_62()
{
	var uVar0;
	
	func_72(&uVar0, unk_0x1D3A3697182AD8B3());
	func_71(&uVar0, unk_0x81F2E25F8C019191());
	func_70(&uVar0, unk_0x1F596C965B00E290());
	func_65(&uVar0, unk_0x371CFD525753F70C());
	func_64(&uVar0, unk_0xF225116F449A5CC6());
	func_63(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_63(var uParam0, int iParam1)
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

void func_64(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_65(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_69(*uParam0);
	iVar1 = func_67(*uParam0);
	if (iParam1 < 1 || iParam1 > func_66(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_66(int iParam0, int iParam1)
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

int func_67(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_68(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_68(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_69(int iParam0)
{
	return iParam0 & 15;
}

void func_70(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_71(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_72(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_73()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		unk_0xB6B2734989D2EBCB(Global_111858.f_14137[iVar0 /*104*/].f_16);
		iVar0++;
	}
}

int func_74(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_80(0);
			break;
		
		case 1:
			return func_80(1);
			break;
		
		case 2:
			return func_80(2);
			break;
		
		case 3:
			return func_78(29);
			break;
		
		case 4:
			return func_75(0, 0);
			break;
		
		case 5:
			return func_75(1, 2);
			break;
		
		case 6:
			return func_75(2, 0);
			break;
		
		case 7:
			return joaat("tornado");
			break;
		
		case 8:
			return func_78(35);
			break;
		
		case 9:
			return func_78(21);
			break;
		
		case 10:
			return joaat("g_m_m_chigoon_02");
			break;
		
		case 11:
			return joaat("washington");
			break;
		
		case 12:
			return joaat("cavalcade");
			break;
		
		case 13:
			return joaat("felon");
			break;
		
		case 14:
			return joaat("cs_stevehains");
			break;
		
		case 15:
			return joaat("s_m_y_grip_01");
			break;
		
		case 16:
			return joaat("a_f_y_hipster_04");
			break;
		
		case 17:
			return joaat("prop_v_cam_01");
			break;
		
		case 18:
			return func_78(37);
			break;
		
		case 19:
			return joaat("g_m_y_ballaorig_01");
			break;
		
		case 20:
			return joaat("s_m_y_cop_01");
			break;
		
		case 21:
			return joaat("s_m_y_blackops_01");
			break;
		
		case 22:
			return joaat("prop_phone_ing_02");
			break;
		
		case 23:
			return joaat("prop_bskball_01");
			break;
		
		case 24:
			return joaat("prop_ld_ferris_wheel");
			break;
		
		case 25:
			return joaat("prop_ferris_car_01");
			break;
		
		case 26:
			return joaat("p_devin_box_01_s");
			break;
		
		case 27:
			return joaat("prop_devin_box_dummy_01");
			break;
		
		case 28:
			return joaat("prop_cs_tablet");
			break;
	}
	return 0;
}

int func_75(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_77(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_76(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_76(int iParam0, var uParam1, int iParam2)
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

bool func_77(int iParam0)
{
	return iParam0 < 3;
}

int func_78(int iParam0)
{
	if (!func_77(iParam0))
	{
		return func_79(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_79(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_80(int iParam0)
{
	if (func_77(iParam0))
	{
		return func_79(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_81(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
			iVar1 = 112;
			break;
		
		case 1:
			iVar1 = 158;
			break;
		
		case 2:
			iVar1 = 154;
			break;
	}
	if (func_199() == iParam0)
	{
		iVar0 = unk_0x9B0761B4C3EB8BC7();
	}
	else
	{
		iVar0 = iLocal_49[func_198(iParam0)];
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
	{
		if (bParam1)
		{
			func_174(iVar0, 14, iVar1, 1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		else
		{
			func_82(iVar0, 14, iVar1);
		}
	}
}

int func_82(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar19;
	int iVar20;
	var uVar21;
	var uVar31;
	int iVar48;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	Global_76647[1 /*14*/] = { func_106(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_97(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { func_93(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_82(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar21 = { func_87(iVar0, iParam2) };
		iVar19 = 0;
		while (iVar19 <= 8)
		{
			if (!func_82(iParam0, 14, uVar21[iVar19]))
			{
				iVar20 = 0;
			}
			iVar19++;
		}
		return iVar20;
	}
	else if (iParam1 == 14)
	{
		unk_0x4FCABD4082A6C808(iParam0, Global_76647[1 /*14*/].f_12);
	}
	else
	{
		uVar31 = { func_93(iVar0, 0) };
		Global_76647[1 /*14*/] = { func_106(iVar0, iParam1, uVar31[iParam1], -1) };
		if (unk_0xD6A0115FA2F3F0EC(iParam0, func_86(iParam1)) > 0 && unk_0x7CF1CA3F6DB5685F(iParam0, func_86(iParam1), Global_76647[1 /*14*/].f_3) > 0)
		{
			unk_0x45F588C0DD767737(iParam0, func_86(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, 0);
		}
	}
	if (func_85(iParam0, iVar0, &iVar48, 0))
	{
		func_174(iParam0, 2, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (func_83(iParam0, iVar0, &iVar48))
	{
		func_174(iParam0, 1, iVar48, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	return 1;
}

int func_83(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_84(iParam1);
	if (Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_97(iParam0, Global_111858.f_2359.f_539[iVar0 /*65*/].f_64, Global_111858.f_2359.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_62;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 = -99;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_84(int iParam0)
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

int func_85(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_84(iParam1);
	if (Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_97(iParam0, Global_111858.f_2359.f_539[iVar0 /*65*/].f_61, Global_111858.f_2359.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_59;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 = -99;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
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

struct<10> func_87(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_92(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_92(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_92(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_92(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_92(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_92(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_92(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_92(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_92(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_92(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_92(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_92(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_92(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_92(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_92(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_92(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_92(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_92(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_92(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_92(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_92(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_92(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_92(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_92(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_92(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_92(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_92(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_92(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_92(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_92(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_92(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_92(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_92(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_92(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_92(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_92(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_92(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_92(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_92(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_92(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_92(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_92(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_88(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x6208B91ED335678E(iParam2, &Var1);
		if (!unk_0x14AC70FD8926649E(Var1))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0xC35D62D0F96C6D07(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_89(iParam1, Var16.x, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

int func_89(int iParam0, int iParam1, int iParam2, int iParam3)
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
			return (func_91(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x21A524CB091C80DE(iParam3, 7, -1, 0, -1, func_86(iParam2));
		iVar1 = unk_0x96E2929292A4DB77(iParam1);
		if (iVar1 != -1)
		{
			return (func_90(iParam0, func_86(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_90(int iParam0, int iParam1)
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

int func_91(int iParam0)
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

void func_92(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<17> func_93(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_111858.f_9081.f_99.f_58[120])
					{
						func_96(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_96(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[0], Global_111858.f_2359.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_96(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_96(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_96(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_96(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_96(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_96(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_96(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_96(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_96(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_96(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_96(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_96(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_96(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_96(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_96(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_96(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_96(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_96(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_96(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_96(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_96(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_96(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_96(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_96(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_96(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[1], Global_111858.f_2359.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_96(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_96(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_96(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_96(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_96(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_96(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_96(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_96(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_96(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_96(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_96(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_96(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_96(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_96(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_96(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_96(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_96(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_96(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_96(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_96(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, Global_111858.f_2359.f_539.f_196[2], Global_111858.f_2359.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_96(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_96(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_96(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_96(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_96(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_96(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_96(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_96(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_96(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_96(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_96(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_96(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_96(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_96(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_96(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_96(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_96(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_96(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_96(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_96(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_96(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_96(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_96(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_96(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_96(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_96(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_96(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_96(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_96(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_96(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_96(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_96(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_96(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_96(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_96(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_96(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_96(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_96(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_96(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_96(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_96(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_96(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_96(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_96(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_96(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_96(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_96(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_96(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_94(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_94(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	struct<2> Var19;
	int iVar36;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x04222560EC9A383D(iVar0, 0);
	unk_0xB11622B138AA8874((iParam2 - iParam3), &Var1);
	if (!unk_0x14AC70FD8926649E(Var1))
	{
		iVar36 = 0;
		while (iVar36 < Var1.f_4)
		{
			if (unk_0xCFA068E582501862(Var1.f_1, iVar36, &Var16))
			{
				if ((Var16.x != 0 && Var16.x != -1) && Var16.x != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						unk_0x1C2EE47D7054A42C(&Var19);
						unk_0x2209D2FE26AA9212(Var16.x, &Var19);
						if (Var16.x != Var19.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (Var16.f_2 == 10 && uParam0->f_16)
					{
						(*uParam0)[func_95(Var16.f_2)] = Var16.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_95(Var16.f_2)] = func_89(iParam1, Var16.x, func_95(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*uParam0)[func_95(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar36++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_95(int iParam0)
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

void func_96(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_97(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar22;
	int iVar32;
	var uVar33;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	Global_76647[1 /*14*/] = { func_106(iVar0, iParam1, iParam2, -1) };
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_93(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_97(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar22 = { func_87(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_97(iParam0, 14, uVar22[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_76647[2 /*14*/] = { func_106(iVar0, 14, iVar4, -1) };
									if (Global_76647[2 /*14*/].f_12 == iVar3)
									{
										if (func_97(iParam0, 14, iVar4))
										{
											if (!func_100(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_76647[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_98(iParam0, iVar2);
						Global_76647[2 /*14*/] = { func_106(iVar0, iVar2, iVar1, -1) };
						if (!func_100(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_76647[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar33 = { func_87(iVar0, iParam2) };
		iVar32 = 0;
		while (iVar32 <= 8)
		{
			if (!func_97(iParam0, 14, uVar33[iVar32]))
			{
				return 0;
			}
			iVar32++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xA98E0435012EAF07(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_3 && (unk_0x77A103B794FA7737(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_4 || Global_76647[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_76647[1 /*14*/].f_3 == unk_0x3FB4D40A857CEA77(iParam0, func_86(iParam1)) && Global_76647[1 /*14*/].f_4 == unk_0x79AFA009D186C4FB(iParam0, func_86(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return -99;
	}
	iVar0 = func_86(iParam1);
	iVar1 = unk_0x3FB4D40A857CEA77(iParam0, iVar0);
	iVar2 = unk_0x79AFA009D186C4FB(iParam0, iVar0);
	return func_99(iParam0, iVar1, iVar2, iParam1);
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_86(iParam3);
	iVar1 = unk_0xD6A0115FA2F3F0EC(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0x7CF1CA3F6DB5685F(iParam0, iVar0, iVar3);
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

int func_100(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_87(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_105(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_104(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_103(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_101(iParam0, iParam2, iParam3, -1))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_104(iParam0, iParam2, iParam3, -1))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_103(iParam0, iParam2, iParam3, -1))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_101(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_104(iParam0, iParam2, iParam3, -1))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_103(iParam0, iParam2, iParam3, -1))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_101(iParam0, iParam2, iParam3, -1))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_102(iParam0, iParam2, 14, 3);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 1) || unk_0x4D0432E34C5996D9(func_102(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_102(iParam0, iParam2, 1, 3);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(func_102(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_102(iParam0, iParam2, 14, 4);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 1) || unk_0x4D0432E34C5996D9(func_102(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_102(iParam0, iParam2, 1, 4);
						}
						return (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(func_102(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_102(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	struct<2> Var19;
	int iVar36;
	int iVar37;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0x8BC52CDFCD2A4534(&Var0);
		iVar17 = (iParam1 - func_91(iParam0));
		if (iVar17 < 0)
		{
			return -1;
		}
		iVar18 = unk_0x21A524CB091C80DE(iParam3, 7, -1, 1, -1, -1);
		if (iVar18 <= iVar17)
		{
			return -1;
		}
		unk_0xD2FB5DC35CA67C53(iVar17, &Var0);
		return Var0.f_1;
	}
	else
	{
		unk_0x1C2EE47D7054A42C(&Var19);
		iVar36 = (iParam1 - func_90(iParam0, func_86(iParam2)));
		if (iVar36 < 0)
		{
			return -1;
		}
		if ((iParam0 == Global_76769.f_26[iParam2] && iParam1 == Global_76769[iParam2]) && Global_76769.f_13[iParam2] != 0)
		{
			return Global_76769.f_13[iParam2];
		}
		iVar37 = unk_0x21A524CB091C80DE(iParam3, 7, -1, 0, -1, func_86(iParam2));
		if (iVar37 <= iVar36)
		{
			return -1;
		}
		unk_0x627AC3AC8991672C(iVar36, &Var19);
		Global_76769.f_13[iParam2] = Var19.f_1;
		Global_76769[iParam2] = iParam1;
		Global_76769.f_26[iParam2] = iParam0;
		return Var19.f_1;
	}
	return -1;
}

int func_103(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_102(iParam0, iParam2, 1, 3);
					}
					if (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_102(iParam0, iParam2, 1, 4);
					}
					if (unk_0x4D0432E34C5996D9(iParam3, joaat("HAT"), 0) || unk_0x4D0432E34C5996D9(iParam3, joaat("HAIR_SHRINK"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_104(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_102(iParam0, iParam2, 14, 3);
					}
					return unk_0x4D0432E34C5996D9(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == -1)
					{
						iParam3 = func_102(iParam0, iParam2, 14, 4);
					}
					return unk_0x4D0432E34C5996D9(iParam3, joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_105(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<14> func_106(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_173();
	if (iParam0 == joaat("player_zero"))
	{
		func_155(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_136(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_107(iParam1, iParam2);
	}
	return Global_76647[0 /*14*/];
}

void func_107(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_135(iParam1);
			break;
		
		case 2:
			func_134(iParam1);
			break;
		
		case 3:
			func_131(iParam1);
			break;
		
		case 4:
			func_130(iParam1);
			break;
		
		case 6:
			func_129(iParam1);
			break;
		
		case 5:
			func_128(iParam1);
			break;
		
		case 8:
			func_127(iParam1);
			break;
		
		case 9:
			func_126(iParam1);
			break;
		
		case 10:
			func_125(iParam1);
			break;
		
		case 1:
			func_124(iParam1);
			break;
		
		case 7:
			func_123(iParam1);
			break;
		
		case 11:
			func_122(iParam1);
			break;
		
		case 12:
			func_121(iParam1);
			break;
		
		case 13:
			func_120(iParam1);
			break;
		
		case 14:
			func_108(iParam1);
			break;
	}
}

void func_108(int iParam0)
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
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 54;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 59;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 79;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 169;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 49;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 52;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 63;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar6 = 26;
			iVar7 = 10;
			iVar1 = 18;
			iVar8 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar6 = 26;
			iVar7 = 11;
			iVar1 = 20;
			iVar8 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar6 = 26;
			iVar7 = 12;
			iVar1 = 24;
			iVar8 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar6 = 26;
			iVar7 = 13;
			iVar1 = 22;
			iVar8 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar6 = 26;
			iVar7 = 14;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar6 = 26;
			iVar7 = 15;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 155, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_109(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_118(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x856D5567211886A2(sParam3) != unk_0x856D5567211886A2("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 5);
		}
		unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 6);
		if (func_24(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x4D0432E34C5996D9(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_116(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_116(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_116(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_116(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_116(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xD2459066EA58CE43(&(uParam0->f_6), 2);
			}
			if (!func_116(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		unk_0xBE20AB8238688965(&(uParam0->f_6), 5);
		if (func_115(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
		}
		if (func_115(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
		if (!func_115(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xBE20AB8238688965(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_24(14))
			{
				return;
			}
			iVar0 = func_112(func_114(iParam1, uParam0->f_2), Global_76644, 0);
			if (unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			}
			iVar0 = func_112(func_111(iParam1, uParam0->f_2), Global_76644, 0);
			if (unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
			{
				unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
			}
			if (func_110(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_112(iVar1, Global_76644, 0);
				if (!unk_0xCE990E643CD9D0E5(iVar0, uParam0->f_1))
				{
					unk_0xBE20AB8238688965(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_6), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_6), 2);
		}
	}
}

bool func_110(int iParam0, int iParam1, var uParam2)
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

int func_111(int iParam0, int iParam1)
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

int func_112(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2551832[iParam0 /*3*/][func_113(iParam1)];
		if (unk_0xD2F202166691EDB2(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_113(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_57();
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

int func_114(int iParam0, int iParam1)
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

int func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xBE20AB8238688965(&(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xD2459066EA58CE43(&(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0xCE990E643CD9D0E5(Global_111858.f_2359[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_116(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76644;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_117(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_112(iVar2, iVar0, 0);
		return unk_0xCE990E643CD9D0E5(iVar3, iVar1);
	}
	return 0;
}

bool func_117(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 11771;
	if ((bParam4 && Global_4268238) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
					case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
						*uParam2 = 935;
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
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
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
					case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
						*uParam2 = 971;
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
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
					case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
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
		if (Global_4268238)
		{
			iVar0 = unk_0x52E48CCEEE1A6F7C(iParam0);
		}
		else
		{
			iVar0 = unk_0x9C343CBA5B2E3744(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x52E48CCEEE1A6F7C(iParam0);
	}
	else
	{
		iVar0 = unk_0x9C343CBA5B2E3744(iParam0);
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
					*uParam2 = 1760;
					break;
				
				case 1:
					*uParam2 = 1761;
					break;
				
				case 2:
					*uParam2 = 1762;
					break;
				
				case 3:
					*uParam2 = 1763;
					break;
				
				case 4:
					*uParam2 = 1764;
					break;
				
				case 5:
					*uParam2 = 1765;
					break;
				
				case 6:
					*uParam2 = 1772;
					break;
				
				case 7:
					*uParam2 = 1773;
					break;
				
				case 8:
					*uParam2 = 1774;
					break;
				
				case 9:
					*uParam2 = 1775;
					break;
				
				case 10:
					*uParam2 = 1776;
					break;
				
				case 11:
					*uParam2 = 1777;
					break;
				
				case 12:
					*uParam2 = 1778;
					break;
				
				case 13:
					*uParam2 = 1786;
					break;
				
				case 14:
					*uParam2 = 1787;
					break;
				
				case 15:
					*uParam2 = 1888;
					break;
				
				case 16:
					*uParam2 = 1889;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1934;
					break;
				
				case 19:
					*uParam2 = 1935;
					break;
				
				case 20:
					*uParam2 = 1936;
					break;
				
				case 21:
					*uParam2 = 1937;
					break;
				
				case 22:
					*uParam2 = 1938;
					break;
				
				case 23:
					*uParam2 = 2042;
					break;
				
				case 24:
					*uParam2 = 2043;
					break;
				
				case 25:
					*uParam2 = 2069;
					break;
				
				case 26:
					*uParam2 = 2070;
					break;
				
				case 27:
					*uParam2 = 2071;
					break;
				
				case 28:
					*uParam2 = 2072;
					break;
				
				case 29:
					*uParam2 = 2073;
					break;
				
				case 30:
					*uParam2 = 2074;
					break;
				
				case 31:
					*uParam2 = 2075;
					break;
				
				case 32:
					*uParam2 = 2076;
					break;
				
				case 33:
					*uParam2 = 2077;
					break;
				
				case 34:
					*uParam2 = 2078;
					break;
				
				case 35:
					*uParam2 = 2325;
					break;
				
				case 36:
					*uParam2 = 2326;
					break;
				
				case 37:
					*uParam2 = 2390;
					break;
				
				case 38:
					*uParam2 = 2391;
					break;
				
				case 39:
					*uParam2 = 2392;
					break;
				
				case 40:
					*uParam2 = 2393;
					break;
				
				case 41:
					*uParam2 = 2452;
					break;
				
				case 42:
					*uParam2 = 2453;
					break;
				
				case 43:
					*uParam2 = 2454;
					break;
				
				case 44:
					*uParam2 = 2455;
					break;
				
				case 45:
					*uParam2 = 2456;
					break;
				
				case 46:
					*uParam2 = 2457;
					break;
				
				case 47:
					*uParam2 = 2458;
					break;
				
				case 48:
					*uParam2 = 2459;
					break;
				
				case 49:
					*uParam2 = 2460;
					break;
				
				case 50:
					*uParam2 = 2461;
					break;
				
				case 51:
					*uParam2 = 2590;
					break;
				
				case 52:
					*uParam2 = 2591;
					break;
				
				case 53:
					*uParam2 = 2592;
					break;
				
				case 54:
					*uParam2 = 2593;
					break;
				
				case 55:
					*uParam2 = 2594;
					break;
				
				case 56:
					*uParam2 = 2595;
					break;
				
				case 57:
					*uParam2 = 2596;
					break;
				
				case 58:
					*uParam2 = 2597;
					break;
				
				case 59:
					*uParam2 = 2598;
					break;
				
				case 60:
					*uParam2 = 2599;
					break;
				
				case 61:
					*uParam2 = 2600;
					break;
				
				case 62:
					*uParam2 = 3197;
					break;
				
				case 63:
					*uParam2 = 3198;
					break;
				
				case 64:
					*uParam2 = 3199;
					break;
				
				case 65:
					*uParam2 = 3200;
					break;
				
				case 66:
					*uParam2 = 3201;
					break;
				
				case 67:
					*uParam2 = 3202;
					break;
				
				case 68:
					*uParam2 = 3670;
					break;
				
				case 69:
					*uParam2 = 3671;
					break;
				
				case 70:
					*uParam2 = 3672;
					break;
				
				case 71:
					*uParam2 = 3673;
					break;
				
				case 72:
					*uParam2 = 3674;
					break;
				
				case 73:
					*uParam2 = 3675;
					break;
				
				case 74:
					*uParam2 = 3676;
					break;
				
				case 75:
					*uParam2 = 3677;
					break;
				
				case 76:
					*uParam2 = 3678;
					break;
				
				case 77:
					*uParam2 = 3679;
					break;
				
				case 78:
					*uParam2 = 3793;
					break;
				
				case joaat("MPSV_LP0_31"):
					*uParam2 = 3794;
					break;
				
				case 80:
					*uParam2 = 3795;
					break;
				
				case 81:
					*uParam2 = 3796;
					break;
				
				case 82:
					*uParam2 = 3797;
					break;
				
				case 83:
					*uParam2 = 3798;
					break;
				
				case 84:
					*uParam2 = 3799;
					break;
				
				case 85:
					*uParam2 = 3800;
					break;
				
				case 86:
					*uParam2 = 3903;
					break;
				
				case 87:
					*uParam2 = 3904;
					break;
				
				case 88:
					*uParam2 = 3905;
					break;
				
				case 89:
					*uParam2 = 5338;
					break;
				
				case 90:
					*uParam2 = 5339;
					break;
				
				case 91:
					*uParam2 = 5340;
					break;
				
				case 92:
					*uParam2 = 5341;
					break;
				
				case 93:
					*uParam2 = 5342;
					break;
				
				case 94:
					*uParam2 = 5343;
					break;
				
				case 95:
					*uParam2 = 5344;
					break;
				
				case 96:
					*uParam2 = 5345;
					break;
				
				case 97:
					*uParam2 = 5346;
					break;
				
				case 98:
					*uParam2 = 5347;
					break;
				
				case 99:
					*uParam2 = 5348;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5349;
					break;
				
				case 101:
					*uParam2 = 5395;
					break;
				
				case 102:
					*uParam2 = 5396;
					break;
				
				case 103:
					*uParam2 = 5397;
					break;
				
				case 104:
					*uParam2 = 5398;
					break;
				
				case 105:
					*uParam2 = 5399;
					break;
				
				case 106:
					*uParam2 = 5400;
					break;
				
				case 107:
					*uParam2 = 5401;
					break;
				
				case 108:
					*uParam2 = 5402;
					break;
				
				case 109:
					*uParam2 = 5403;
					break;
				
				case 110:
					*uParam2 = 5404;
					break;
				
				case 111:
					*uParam2 = 5405;
					break;
				
				case 112:
					*uParam2 = 5406;
					break;
				
				case 113:
					*uParam2 = 5407;
					break;
				
				case 114:
					*uParam2 = 5408;
					break;
				
				case 115:
					*uParam2 = 5409;
					break;
				
				case 116:
					*uParam2 = 5410;
					break;
				
				case 117:
					*uParam2 = 5411;
					break;
				
				case 118:
					*uParam2 = 5412;
					break;
				
				case 119:
					*uParam2 = 5413;
					break;
				
				case 120:
					*uParam2 = 5414;
					break;
				
				case 121:
					*uParam2 = 5415;
					break;
				
				case 122:
					*uParam2 = 5416;
					break;
				
				case 123:
					*uParam2 = 5417;
					break;
				
				case 124:
					*uParam2 = 6123;
					break;
				
				case 125:
					*uParam2 = 6124;
					break;
				
				case 126:
					*uParam2 = 6125;
					break;
				
				case 127:
					*uParam2 = 6126;
					break;
				
				case 128:
					*uParam2 = 6127;
					break;
				
				case 129:
					*uParam2 = 6128;
					break;
				
				case 130:
					*uParam2 = 6129;
					break;
				
				case 131:
					*uParam2 = 6130;
					break;
				
				case 132:
					*uParam2 = 6131;
					break;
				
				case 133:
					*uParam2 = 6132;
					break;
				
				case 134:
					*uParam2 = 6133;
					break;
				
				case 135:
					*uParam2 = 6134;
					break;
				
				case 136:
					*uParam2 = 6135;
					break;
				
				case 137:
					*uParam2 = 6136;
					break;
				
				case 138:
					*uParam2 = 6137;
					break;
				
				case 139:
					*uParam2 = 6436;
					break;
				
				case 140:
					*uParam2 = 6437;
					break;
				
				case 141:
					*uParam2 = 6438;
					break;
				
				case 142:
					*uParam2 = 6439;
					break;
				
				case 143:
					*uParam2 = 6440;
					break;
				
				case 144:
					*uParam2 = 6441;
					break;
				
				case 145:
					*uParam2 = 6442;
					break;
				
				case 146:
					*uParam2 = 6443;
					break;
				
				case 147:
					*uParam2 = 6444;
					break;
				
				case 148:
					*uParam2 = 6445;
					break;
				
				case 149:
					*uParam2 = 6446;
					break;
				
				case 150:
					*uParam2 = 6447;
					break;
				
				case 151:
					*uParam2 = 6448;
					break;
				
				case 152:
					*uParam2 = 6449;
					break;
				
				case 153:
					*uParam2 = 6450;
					break;
				
				case 154:
					*uParam2 = 7267;
					break;
				
				case 155:
					*uParam2 = 7268;
					break;
				
				case 156:
					*uParam2 = 7269;
					break;
				
				case 157:
					*uParam2 = 7270;
					break;
				
				case 158:
					*uParam2 = 7271;
					break;
				
				case 159:
					*uParam2 = 7272;
					break;
				
				case 160:
					*uParam2 = 7273;
					break;
				
				case 161:
					*uParam2 = 7880;
					break;
				
				case 162:
					*uParam2 = 7881;
					break;
				
				case 163:
					*uParam2 = 7882;
					break;
				
				case 164:
					*uParam2 = 7883;
					break;
				
				case 165:
					*uParam2 = 7884;
					break;
				
				case 166:
					*uParam2 = 7885;
					break;
				
				case 167:
					*uParam2 = 7886;
					break;
				
				case 168:
					*uParam2 = 7887;
					break;
				
				case 169:
					*uParam2 = 7888;
					break;
				
				case 170:
					*uParam2 = 7889;
					break;
				
				case 171:
					*uParam2 = 7890;
					break;
				
				case 172:
					*uParam2 = 7891;
					break;
				
				case 173:
					*uParam2 = 7892;
					break;
				
				case 174:
					*uParam2 = 7893;
					break;
				
				case 175:
					*uParam2 = 7894;
					break;
				
				case 176:
					*uParam2 = 8300;
					break;
				
				case 177:
					*uParam2 = 8301;
					break;
				
				case 178:
					*uParam2 = 8302;
					break;
				
				case 179:
					*uParam2 = 8303;
					break;
				
				case 180:
					*uParam2 = 8304;
					break;
				
				case 181:
					*uParam2 = 8305;
					break;
				
				case 182:
					*uParam2 = 8306;
					break;
				
				case 183:
					*uParam2 = 8307;
					break;
				
				case 184:
					*uParam2 = 8308;
					break;
				
				case 185:
					*uParam2 = 8309;
					break;
				
				case 186:
					*uParam2 = 8310;
					break;
				
				case 187:
					*uParam2 = 8311;
					break;
				
				case 188:
					*uParam2 = 8312;
					break;
				
				case 189:
					*uParam2 = 8313;
					break;
				
				case 190:
					*uParam2 = 8314;
					break;
				
				case 191:
					*uParam2 = 8315;
					break;
				
				case 192:
					*uParam2 = 8316;
					break;
				
				case 193:
					*uParam2 = 8317;
					break;
				
				case 194:
					*uParam2 = 8318;
					break;
				
				case 195:
					*uParam2 = 8319;
					break;
				
				case 196:
					*uParam2 = 8320;
					break;
				
				case 197:
					*uParam2 = 8321;
					break;
				
				case 198:
					*uParam2 = 8322;
					break;
				
				case 199:
					*uParam2 = 8323;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8324;
					break;
				
				case 201:
					*uParam2 = 8937;
					break;
				
				case 202:
					*uParam2 = 8938;
					break;
				
				case 203:
					*uParam2 = 8939;
					break;
				
				case 204:
					*uParam2 = 8940;
					break;
				
				case 205:
					*uParam2 = 8941;
					break;
				
				case 206:
					*uParam2 = 9420;
					break;
				
				case 207:
					*uParam2 = 9421;
					break;
				
				case 208:
					*uParam2 = 9422;
					break;
				
				case 209:
					*uParam2 = 9423;
					break;
				
				case 210:
					*uParam2 = 9424;
					break;
				
				case 211:
					*uParam2 = 9425;
					break;
				
				case 212:
					*uParam2 = 9426;
					break;
				
				case 213:
					*uParam2 = 9427;
					break;
				
				case 214:
					*uParam2 = 9428;
					break;
				
				case 215:
					*uParam2 = 9429;
					break;
				
				case 216:
					*uParam2 = 9430;
					break;
				
				case 217:
					*uParam2 = 9431;
					break;
				
				case 218:
					*uParam2 = 9432;
					break;
				
				case 219:
					*uParam2 = 9433;
					break;
				
				case 220:
					*uParam2 = 9434;
					break;
				
				case 221:
					*uParam2 = 9435;
					break;
				
				case 222:
					*uParam2 = 9436;
					break;
				
				case 223:
					*uParam2 = 9437;
					break;
				
				case 224:
					*uParam2 = 9438;
					break;
				
				case 225:
					*uParam2 = 9439;
					break;
				
				case 226:
					*uParam2 = 9440;
					break;
				
				case 227:
					*uParam2 = 9441;
					break;
				
				case 228:
					*uParam2 = 9442;
					break;
				
				case 229:
					*uParam2 = 9443;
					break;
				
				case 230:
					*uParam2 = 9444;
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1766;
					break;
				
				case 1:
					*uParam2 = 1767;
					break;
				
				case 2:
					*uParam2 = 1768;
					break;
				
				case 3:
					*uParam2 = 1769;
					break;
				
				case 4:
					*uParam2 = 1770;
					break;
				
				case 5:
					*uParam2 = 1771;
					break;
				
				case 6:
					*uParam2 = 1779;
					break;
				
				case 7:
					*uParam2 = 1780;
					break;
				
				case 8:
					*uParam2 = 1781;
					break;
				
				case 9:
					*uParam2 = 1782;
					break;
				
				case 10:
					*uParam2 = 1783;
					break;
				
				case 11:
					*uParam2 = 1784;
					break;
				
				case 12:
					*uParam2 = 1785;
					break;
				
				case 13:
					*uParam2 = 1788;
					break;
				
				case 14:
					*uParam2 = 1789;
					break;
				
				case 15:
					*uParam2 = 1890;
					break;
				
				case 16:
					*uParam2 = 1891;
					break;
				
				case 17:
					*uParam2 = 1921;
					break;
				
				case 18:
					*uParam2 = 1939;
					break;
				
				case 19:
					*uParam2 = 1940;
					break;
				
				case 20:
					*uParam2 = 1941;
					break;
				
				case 21:
					*uParam2 = 1942;
					break;
				
				case 22:
					*uParam2 = 1943;
					break;
				
				case 23:
					*uParam2 = 2044;
					break;
				
				case 24:
					*uParam2 = 2045;
					break;
				
				case 25:
					*uParam2 = 2079;
					break;
				
				case 26:
					*uParam2 = 2080;
					break;
				
				case 27:
					*uParam2 = 2081;
					break;
				
				case 28:
					*uParam2 = 2082;
					break;
				
				case 29:
					*uParam2 = 2083;
					break;
				
				case 30:
					*uParam2 = 2084;
					break;
				
				case 31:
					*uParam2 = 2085;
					break;
				
				case 32:
					*uParam2 = 2086;
					break;
				
				case 33:
					*uParam2 = 2087;
					break;
				
				case 34:
					*uParam2 = 2088;
					break;
				
				case 35:
					*uParam2 = 2327;
					break;
				
				case 36:
					*uParam2 = 2328;
					break;
				
				case 37:
					*uParam2 = 2394;
					break;
				
				case 38:
					*uParam2 = 2395;
					break;
				
				case 39:
					*uParam2 = 2396;
					break;
				
				case 40:
					*uParam2 = 2397;
					break;
				
				case 41:
					*uParam2 = 2462;
					break;
				
				case 42:
					*uParam2 = 2463;
					break;
				
				case 43:
					*uParam2 = 2464;
					break;
				
				case 44:
					*uParam2 = 2465;
					break;
				
				case 45:
					*uParam2 = 2466;
					break;
				
				case 46:
					*uParam2 = 2467;
					break;
				
				case 47:
					*uParam2 = 2468;
					break;
				
				case 48:
					*uParam2 = 2469;
					break;
				
				case 49:
					*uParam2 = 2470;
					break;
				
				case 50:
					*uParam2 = 2471;
					break;
				
				case 51:
					*uParam2 = 2601;
					break;
				
				case 52:
					*uParam2 = 2602;
					break;
				
				case 53:
					*uParam2 = 2603;
					break;
				
				case 54:
					*uParam2 = 2604;
					break;
				
				case 55:
					*uParam2 = 2605;
					break;
				
				case 56:
					*uParam2 = 2606;
					break;
				
				case 57:
					*uParam2 = 2607;
					break;
				
				case 58:
					*uParam2 = 2608;
					break;
				
				case 59:
					*uParam2 = 2609;
					break;
				
				case 60:
					*uParam2 = 2610;
					break;
				
				case 61:
					*uParam2 = 2611;
					break;
				
				case 62:
					*uParam2 = 3203;
					break;
				
				case 63:
					*uParam2 = 3204;
					break;
				
				case 64:
					*uParam2 = 3205;
					break;
				
				case 65:
					*uParam2 = 3206;
					break;
				
				case 66:
					*uParam2 = 3207;
					break;
				
				case 67:
					*uParam2 = 3208;
					break;
				
				case 68:
					*uParam2 = 3680;
					break;
				
				case 69:
					*uParam2 = 3681;
					break;
				
				case 70:
					*uParam2 = 3682;
					break;
				
				case 71:
					*uParam2 = 3683;
					break;
				
				case 72:
					*uParam2 = 3684;
					break;
				
				case 73:
					*uParam2 = 3685;
					break;
				
				case 74:
					*uParam2 = 3686;
					break;
				
				case 75:
					*uParam2 = 3687;
					break;
				
				case 76:
					*uParam2 = 3688;
					break;
				
				case 77:
					*uParam2 = 3689;
					break;
				
				case 78:
					*uParam2 = 3801;
					break;
				
				case joaat("MPSV_LP0_31"):
					*uParam2 = 3802;
					break;
				
				case 80:
					*uParam2 = 3803;
					break;
				
				case 81:
					*uParam2 = 3804;
					break;
				
				case 82:
					*uParam2 = 3805;
					break;
				
				case 83:
					*uParam2 = 3806;
					break;
				
				case 84:
					*uParam2 = 3807;
					break;
				
				case 85:
					*uParam2 = 3808;
					break;
				
				case 86:
					*uParam2 = 3906;
					break;
				
				case 87:
					*uParam2 = 3907;
					break;
				
				case 88:
					*uParam2 = 3908;
					break;
				
				case 89:
					*uParam2 = 5350;
					break;
				
				case 90:
					*uParam2 = 5351;
					break;
				
				case 91:
					*uParam2 = 5352;
					break;
				
				case 92:
					*uParam2 = 5353;
					break;
				
				case 93:
					*uParam2 = 5354;
					break;
				
				case 94:
					*uParam2 = 5355;
					break;
				
				case 95:
					*uParam2 = 5356;
					break;
				
				case 96:
					*uParam2 = 5357;
					break;
				
				case 97:
					*uParam2 = 5358;
					break;
				
				case 98:
					*uParam2 = 5359;
					break;
				
				case 99:
					*uParam2 = 5360;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 100:
					*uParam2 = 5361;
					break;
				
				case 101:
					*uParam2 = 5418;
					break;
				
				case 102:
					*uParam2 = 5419;
					break;
				
				case 103:
					*uParam2 = 5420;
					break;
				
				case 104:
					*uParam2 = 5421;
					break;
				
				case 105:
					*uParam2 = 5422;
					break;
				
				case 106:
					*uParam2 = 5423;
					break;
				
				case 107:
					*uParam2 = 5424;
					break;
				
				case 108:
					*uParam2 = 5425;
					break;
				
				case 109:
					*uParam2 = 5426;
					break;
				
				case 110:
					*uParam2 = 5427;
					break;
				
				case 111:
					*uParam2 = 5428;
					break;
				
				case 112:
					*uParam2 = 5429;
					break;
				
				case 113:
					*uParam2 = 5430;
					break;
				
				case 114:
					*uParam2 = 5431;
					break;
				
				case 115:
					*uParam2 = 5432;
					break;
				
				case 116:
					*uParam2 = 5433;
					break;
				
				case 117:
					*uParam2 = 5434;
					break;
				
				case 118:
					*uParam2 = 5435;
					break;
				
				case 119:
					*uParam2 = 5436;
					break;
				
				case 120:
					*uParam2 = 5437;
					break;
				
				case 121:
					*uParam2 = 5438;
					break;
				
				case 122:
					*uParam2 = 5439;
					break;
				
				case 123:
					*uParam2 = 5440;
					break;
				
				case 124:
					*uParam2 = 6138;
					break;
				
				case 125:
					*uParam2 = 6139;
					break;
				
				case 126:
					*uParam2 = 6140;
					break;
				
				case 127:
					*uParam2 = 6141;
					break;
				
				case 128:
					*uParam2 = 6142;
					break;
				
				case 129:
					*uParam2 = 6143;
					break;
				
				case 130:
					*uParam2 = 6144;
					break;
				
				case 131:
					*uParam2 = 6145;
					break;
				
				case 132:
					*uParam2 = 6146;
					break;
				
				case 133:
					*uParam2 = 6147;
					break;
				
				case 134:
					*uParam2 = 6148;
					break;
				
				case 135:
					*uParam2 = 6149;
					break;
				
				case 136:
					*uParam2 = 6150;
					break;
				
				case 137:
					*uParam2 = 6151;
					break;
				
				case 138:
					*uParam2 = 6152;
					break;
				
				case 139:
					*uParam2 = 6451;
					break;
				
				case 140:
					*uParam2 = 6452;
					break;
				
				case 141:
					*uParam2 = 6453;
					break;
				
				case 142:
					*uParam2 = 6454;
					break;
				
				case 143:
					*uParam2 = 6455;
					break;
				
				case 144:
					*uParam2 = 6456;
					break;
				
				case 145:
					*uParam2 = 6457;
					break;
				
				case 146:
					*uParam2 = 6458;
					break;
				
				case 147:
					*uParam2 = 6459;
					break;
				
				case 148:
					*uParam2 = 6460;
					break;
				
				case 149:
					*uParam2 = 6461;
					break;
				
				case 150:
					*uParam2 = 6462;
					break;
				
				case 151:
					*uParam2 = 6463;
					break;
				
				case 152:
					*uParam2 = 6464;
					break;
				
				case 153:
					*uParam2 = 6465;
					break;
				
				case 154:
					*uParam2 = 7274;
					break;
				
				case 155:
					*uParam2 = 7275;
					break;
				
				case 156:
					*uParam2 = 7276;
					break;
				
				case 157:
					*uParam2 = 7277;
					break;
				
				case 158:
					*uParam2 = 7278;
					break;
				
				case 159:
					*uParam2 = 7279;
					break;
				
				case 160:
					*uParam2 = 7280;
					break;
				
				case 161:
					*uParam2 = 7895;
					break;
				
				case 162:
					*uParam2 = 7896;
					break;
				
				case 163:
					*uParam2 = 7897;
					break;
				
				case 164:
					*uParam2 = 7898;
					break;
				
				case 165:
					*uParam2 = 7899;
					break;
				
				case 166:
					*uParam2 = 7900;
					break;
				
				case 167:
					*uParam2 = 7901;
					break;
				
				case 168:
					*uParam2 = 7902;
					break;
				
				case 169:
					*uParam2 = 7903;
					break;
				
				case 170:
					*uParam2 = 7904;
					break;
				
				case 171:
					*uParam2 = 7905;
					break;
				
				case 172:
					*uParam2 = 7906;
					break;
				
				case 173:
					*uParam2 = 7907;
					break;
				
				case 174:
					*uParam2 = 7908;
					break;
				
				case 175:
					*uParam2 = 7909;
					break;
				
				case 176:
					*uParam2 = 8325;
					break;
				
				case 177:
					*uParam2 = 8326;
					break;
				
				case 178:
					*uParam2 = 8327;
					break;
				
				case 179:
					*uParam2 = 8328;
					break;
				
				case 180:
					*uParam2 = 8329;
					break;
				
				case 181:
					*uParam2 = 8330;
					break;
				
				case 182:
					*uParam2 = 8331;
					break;
				
				case 183:
					*uParam2 = 8332;
					break;
				
				case 184:
					*uParam2 = 8333;
					break;
				
				case 185:
					*uParam2 = 8334;
					break;
				
				case 186:
					*uParam2 = 8335;
					break;
				
				case 187:
					*uParam2 = 8336;
					break;
				
				case 188:
					*uParam2 = 8337;
					break;
				
				case 189:
					*uParam2 = 8338;
					break;
				
				case 190:
					*uParam2 = 8339;
					break;
				
				case 191:
					*uParam2 = 8340;
					break;
				
				case 192:
					*uParam2 = 8341;
					break;
				
				case 193:
					*uParam2 = 8342;
					break;
				
				case 194:
					*uParam2 = 8343;
					break;
				
				case 195:
					*uParam2 = 8344;
					break;
				
				case 196:
					*uParam2 = 8345;
					break;
				
				case 197:
					*uParam2 = 8346;
					break;
				
				case 198:
					*uParam2 = 8347;
					break;
				
				case 199:
					*uParam2 = 8348;
					break;
			}
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 200:
					*uParam2 = 8349;
					break;
				
				case 201:
					*uParam2 = 8942;
					break;
				
				case 202:
					*uParam2 = 8943;
					break;
				
				case 203:
					*uParam2 = 8944;
					break;
				
				case 204:
					*uParam2 = 8945;
					break;
				
				case 205:
					*uParam2 = 8946;
					break;
				
				case 206:
					*uParam2 = 9445;
					break;
				
				case 207:
					*uParam2 = 9446;
					break;
				
				case 208:
					*uParam2 = 9447;
					break;
				
				case 209:
					*uParam2 = 9448;
					break;
				
				case 210:
					*uParam2 = 9449;
					break;
				
				case 211:
					*uParam2 = 9450;
					break;
				
				case 212:
					*uParam2 = 9451;
					break;
				
				case 213:
					*uParam2 = 9452;
					break;
				
				case 214:
					*uParam2 = 9453;
					break;
				
				case 215:
					*uParam2 = 9454;
					break;
				
				case 216:
					*uParam2 = 9455;
					break;
				
				case 217:
					*uParam2 = 9456;
					break;
				
				case 218:
					*uParam2 = 9457;
					break;
				
				case 219:
					*uParam2 = 9458;
					break;
				
				case 220:
					*uParam2 = 9459;
					break;
				
				case 221:
					*uParam2 = 9460;
					break;
				
				case 222:
					*uParam2 = 9461;
					break;
				
				case 223:
					*uParam2 = 9462;
					break;
				
				case 224:
					*uParam2 = 9463;
					break;
				
				case 225:
					*uParam2 = 9464;
					break;
				
				case 226:
					*uParam2 = 9465;
					break;
				
				case 227:
					*uParam2 = 9466;
					break;
				
				case 228:
					*uParam2 = 9467;
					break;
				
				case 229:
					*uParam2 = 9468;
					break;
				
				case 230:
					*uParam2 = 9469;
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 11771;
}

int func_118(int iParam0)
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

void func_119(int iParam0, int iParam1, int iParam2, int iParam3)
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
	uVar1 = Global_76647[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar17 = (iParam1 - iParam2);
		if (iVar17 >= 0)
		{
			iVar18 = unk_0x04222560EC9A383D(uVar1, 0);
			if (iVar18 > iVar17)
			{
				unk_0xB11622B138AA8874(iVar17, &Var2);
				Global_2621444 = Var2.f_1;
				Global_2621445 = Var2;
				func_109(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_109(&(Global_76647[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x8BC52CDFCD2A4534(&Var19);
		iVar37 = (iParam1 - iParam2);
		if (iVar37 >= 0)
		{
			iVar38 = unk_0x21A524CB091C80DE(iVar1, 7, -1, 1, -1, -1);
			if (iVar38 > iVar37)
			{
				unk_0xD2FB5DC35CA67C53(iVar37, &Var19);
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
				func_109(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, unk_0x4D0432E34C5996D9(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		unk_0x1C2EE47D7054A42C(&Var39);
		if (iParam3 != -1 && Global_76814)
		{
			unk_0x2209D2FE26AA9212(iParam3, &Var39);
			Global_2621444 = Var39.f_1;
			Global_2621445 = Var39;
			func_109(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x4D0432E34C5996D9(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
			return;
		}
		iVar56 = (iParam1 - iParam2);
		if (iVar56 >= 0)
		{
			iVar57 = unk_0x21A524CB091C80DE(iVar1, 7, -1, 0, -1, func_86(iParam0));
			if (iVar57 > iVar56)
			{
				unk_0x627AC3AC8991672C(iVar56, &Var39);
				Global_2621444 = Var39.f_1;
				Global_2621445 = Var39;
				func_109(&(Global_76647[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, unk_0x4D0432E34C5996D9(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 != 0);
				return;
			}
		}
	}
}

void func_120(int iParam0)
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
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_121(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_122(int iParam0)
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
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_123(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_124(int iParam0)
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
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_125(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		default:
			func_119(iVar10, iParam0, 33, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_126(int iParam0)
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
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_119(iVar10, iParam0, 17, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_127(int iParam0)
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
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 18, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_128(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_129(int iParam0)
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
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_119(iVar10, iParam0, 84, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_130(int iParam0)
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
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		default:
			func_119(iVar10, iParam0, 104, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_131(int iParam0)
{
	if (iParam0 < 136)
	{
		func_133(iParam0);
	}
	else
	{
		func_132(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_119(3, iParam0, 242, -1);
	}
}

void func_132(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar6 = 25;
			iVar7 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar6 = 25;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar6 = 25;
			iVar7 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar6 = 25;
			iVar7 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar6 = 26;
			iVar7 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar6 = 26;
			iVar7 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar6 = 26;
			iVar7 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar6 = 26;
			iVar7 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar6 = 26;
			iVar7 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar6 = 26;
			iVar7 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar6 = 26;
			iVar7 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar6 = 26;
			iVar7 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar6 = 26;
			iVar7 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar6 = 27;
			iVar7 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_133(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_134(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_135(int iParam0)
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
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_119(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_136(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_154(iParam1);
			break;
		
		case 2:
			func_153(iParam1);
			break;
		
		case 3:
			func_149(iParam1);
			break;
		
		case 4:
			func_148(iParam1);
			break;
		
		case 6:
			func_147(iParam1);
			break;
		
		case 5:
			func_146(iParam1);
			break;
		
		case 8:
			func_145(iParam1);
			break;
		
		case 9:
			func_144(iParam1);
			break;
		
		case 10:
			func_143(iParam1);
			break;
		
		case 1:
			func_142(iParam1);
			break;
		
		case 7:
			func_141(iParam1);
			break;
		
		case 11:
			func_140(iParam1);
			break;
		
		case 12:
			func_139(iParam1);
			break;
		
		case 13:
			func_138(iParam1);
			break;
		
		case 14:
			func_137(iParam1);
			break;
	}
}

void func_137(int iParam0)
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
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 4590;
			iVar8 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 4100;
			iVar8 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 3850;
			iVar8 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 1850;
			iVar8 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5250;
			iVar8 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 5050;
			iVar8 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 2500;
			iVar8 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 1950;
			iVar8 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 3900;
			iVar8 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 3550;
			iVar8 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 4500;
			iVar8 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 2700;
			iVar8 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3100;
			iVar8 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2950;
			iVar8 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 75;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 130;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 112;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 118;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 125;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 128;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 139;
			iVar8 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 149;
			iVar8 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 138;
			iVar8 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 198;
			iVar8 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 200;
			iVar8 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 208;
			iVar8 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 210;
			iVar8 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 190;
			iVar8 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 140;
			iVar8 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 145;
			iVar8 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 150;
			iVar8 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 168;
			iVar8 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 178;
			iVar8 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 160;
			iVar8 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 32;
			iVar8 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 38;
			iVar8 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 42;
			iVar8 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 45;
			iVar8 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 48;
			iVar8 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 25;
			iVar8 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 28;
			iVar8 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 30;
			iVar8 = 0;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 35;
			iVar8 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 175, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_138(int iParam0)
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
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 9, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_139(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 47, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_140(int iParam0)
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
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_119(iVar10, iParam0, 63, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_141(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_142(int iParam0)
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
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_143(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_144(int iParam0)
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
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 12, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_145(int iParam0)
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
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 77, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_146(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_147(int iParam0)
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
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_119(iVar10, iParam0, 134, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_148(int iParam0)
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
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 16;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar6 = 22;
			iVar7 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar6 = 22;
			iVar7 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar6 = 22;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar6 = 22;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar6 = 22;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar6 = 22;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar6 = 22;
			iVar7 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar6 = 22;
			iVar7 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_119(iVar10, iParam0, 117, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_149(int iParam0)
{
	if (iParam0 < 107)
	{
		func_152(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_151(iParam0);
	}
	else
	{
		func_150(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_119(3, iParam0, 318, -1);
	}
}

void func_150(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar6 = 24;
			iVar7 = 10;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar6 = 24;
			iVar7 = 11;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar6 = 24;
			iVar7 = 12;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar6 = 24;
			iVar7 = 13;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar6 = 24;
			iVar7 = 14;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar6 = 24;
			iVar7 = 15;
			iVar1 = 2200;
			iVar9 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar9 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar6 = 27;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar6 = 27;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar6 = 27;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar6 = 27;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar6 = 27;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar6 = 29;
			iVar7 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar6 = 29;
			iVar7 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar6 = 29;
			iVar7 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar6 = 29;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar6 = 29;
			iVar7 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar6 = 29;
			iVar7 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar6 = 29;
			iVar7 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar6 = 29;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar6 = 29;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar6 = 29;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar6 = 29;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar6 = 29;
			iVar7 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar6 = 30;
			iVar7 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar6 = 30;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar6 = 30;
			iVar7 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar6 = 30;
			iVar7 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar6 = 30;
			iVar7 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar6 = 30;
			iVar7 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar6 = 30;
			iVar7 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar6 = 30;
			iVar7 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar6 = 30;
			iVar7 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar6 = 30;
			iVar7 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar6 = 30;
			iVar7 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar6 = 31;
			iVar7 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar6 = 31;
			iVar7 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar6 = 31;
			iVar7 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar6 = 31;
			iVar7 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar6 = 31;
			iVar7 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_151(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar6 = 17;
			iVar7 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar6 = 17;
			iVar7 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar6 = 17;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar6 = 17;
			iVar7 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar6 = 17;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar6 = 17;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar6 = 17;
			iVar7 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar6 = 17;
			iVar7 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar9 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar9 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar9 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 480;
			iVar9 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 520;
			iVar9 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 440;
			iVar9 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 3100;
			iVar9 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 2800;
			iVar9 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 2500;
			iVar9 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3000;
			iVar9 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_152(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 3;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 4;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 5;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 20;
			iVar9 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 23;
			iVar9 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 26;
			iVar9 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 24;
			iVar9 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 28;
			iVar9 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 25;
			iVar9 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 22;
			iVar9 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 27;
			iVar9 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 29;
			iVar9 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar9 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1270;
			iVar9 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 1090;
			iVar9 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 1120;
			iVar9 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 1290;
			iVar9 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 1590;
			iVar9 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 1320;
			iVar9 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 38;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_153(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar9 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar9 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar9 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar9 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar9 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar9 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar9 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar9 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar9 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar9 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar9 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar9 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar9 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 21, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_154(int iParam0)
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
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		default:
			func_119(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_155(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_172(iParam1);
			break;
		
		case 2:
			func_171(iParam1);
			break;
		
		case 3:
			func_168(iParam1);
			break;
		
		case 4:
			func_167(iParam1);
			break;
		
		case 6:
			func_166(iParam1);
			break;
		
		case 5:
			func_165(iParam1);
			break;
		
		case 8:
			func_164(iParam1);
			break;
		
		case 9:
			func_163(iParam1);
			break;
		
		case 10:
			func_162(iParam1);
			break;
		
		case 1:
			func_161(iParam1);
			break;
		
		case 7:
			func_160(iParam1);
			break;
		
		case 11:
			func_159(iParam1);
			break;
		
		case 12:
			func_158(iParam1);
			break;
		
		case 13:
			func_157(iParam1);
			break;
		
		case 14:
			func_156(iParam1);
			break;
	}
}

void func_156(int iParam0)
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
	iVar10 = 14;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 320;
			iVar8 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar8 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar8 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 270;
			iVar8 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 350;
			iVar8 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 450;
			iVar8 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 50;
			iVar8 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 99;
			iVar8 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar8 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar8 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar8 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar8 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar8 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 45;
			iVar8 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			iVar8 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 58;
			iVar8 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 56;
			iVar8 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 60;
			iVar8 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 62;
			iVar8 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 68;
			iVar8 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 72;
			iVar8 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 70;
			iVar8 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 74;
			iVar8 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 78;
			iVar8 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 82;
			iVar8 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			iVar8 = 10;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar8 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 69;
			iVar8 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar8 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 170;
			iVar8 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 180;
			iVar8 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 195;
			iVar8 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 235;
			iVar8 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			iVar8 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 250;
			iVar8 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 275;
			iVar8 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 280;
			iVar8 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 295;
			iVar8 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 179;
			iVar8 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 159;
			iVar8 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 165;
			iVar8 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 155;
			iVar8 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 175;
			iVar8 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 185;
			iVar8 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 189;
			iVar8 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 225;
			iVar8 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 100;
			iVar8 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			iVar8 = 2;
			break;
		
		default:
			func_119(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_157(int iParam0)
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
	iVar10 = 13;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 10, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_158(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 53, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_159(int iParam0)
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
	iVar10 = 11;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 45, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_160(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 1, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_161(int iParam0)
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
	iVar10 = 1;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 5, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_162(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			break;
		
		default:
			func_119(iVar10, iParam0, 48, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_163(int iParam0)
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
	iVar10 = 9;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 20, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_164(int iParam0)
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
	iVar10 = 8;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 20;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 21;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 22;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 23;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 24, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_165(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		default:
			func_119(iVar10, iParam0, 14, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_166(int iParam0)
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
	iVar10 = 6;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 7;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar6 = 18;
			iVar7 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar6 = 18;
			iVar7 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar6 = 18;
			iVar7 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar6 = 18;
			iVar7 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar6 = 18;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar6 = 18;
			iVar7 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar6 = 18;
			iVar7 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar6 = 18;
			iVar7 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar6 = 19;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar6 = 19;
			iVar7 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar6 = 19;
			iVar7 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar6 = 19;
			iVar7 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar6 = 19;
			iVar7 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar6 = 19;
			iVar7 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar6 = 19;
			iVar7 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar6 = 19;
			iVar7 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar6 = 19;
			iVar7 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar6 = 19;
			iVar7 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar6 = 19;
			iVar7 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_119(iVar10, iParam0, 99, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_167(int iParam0)
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
	iVar10 = 4;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 8;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 14;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar6 = 16;
			iVar7 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar6 = 16;
			iVar7 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar6 = 16;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar6 = 16;
			iVar7 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar6 = 16;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar6 = 16;
			iVar7 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar6 = 16;
			iVar7 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar6 = 16;
			iVar7 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 17;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 15;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 19;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 24;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 25;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 26;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar6 = 27;
			iVar7 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar6 = 28;
			iVar7 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar6 = 28;
			iVar7 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar6 = 28;
			iVar7 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar6 = 28;
			iVar7 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar6 = 28;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar6 = 28;
			iVar7 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar6 = 28;
			iVar7 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar6 = 28;
			iVar7 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar6 = 28;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar6 = 28;
			iVar7 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar6 = 28;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar6 = 28;
			iVar7 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar6 = 28;
			iVar7 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 29;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 113, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_168(int iParam0)
{
	if (iParam0 < 60)
	{
		func_170(iParam0);
	}
	else
	{
		func_169(iParam0);
	}
	if (Global_76647[0 /*14*/].f_2 == -1)
	{
		func_119(3, iParam0, 181, -1);
	}
}

void func_169(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 9;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 10;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 11;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 13;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 15;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 20;
			break;
		
		case joaat("MPSV_LP0_31"):
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 18;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar6 = 19;
			iVar7 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar6 = 19;
			iVar7 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar6 = 19;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar6 = 19;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar6 = 19;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar6 = 20;
			iVar7 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar6 = 20;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar6 = 20;
			iVar7 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar6 = 20;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar6 = 20;
			iVar7 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar6 = 20;
			iVar7 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar6 = 20;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar6 = 20;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar6 = 20;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar6 = 20;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar6 = 20;
			iVar7 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar6 = 20;
			iVar7 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar6 = 20;
			iVar7 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar6 = 20;
			iVar7 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar6 = 20;
			iVar7 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar6 = 20;
			iVar7 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar6 = 21;
			iVar7 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar6 = 21;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar6 = 21;
			iVar7 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar6 = 21;
			iVar7 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar6 = 21;
			iVar7 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar6 = 21;
			iVar7 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar6 = 21;
			iVar7 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar6 = 21;
			iVar7 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar6 = 21;
			iVar7 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar6 = 21;
			iVar7 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar6 = 21;
			iVar7 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar6 = 21;
			iVar7 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar6 = 21;
			iVar7 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar6 = 21;
			iVar7 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar6 = 21;
			iVar7 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar6 = 21;
			iVar7 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar6 = 22;
			iVar7 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar6 = 22;
			iVar7 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar6 = 22;
			iVar7 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar6 = 22;
			iVar7 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar6 = 22;
			iVar7 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar6 = 22;
			iVar7 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar6 = 23;
			iVar7 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar6 = 23;
			iVar7 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar6 = 23;
			iVar7 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar6 = 23;
			iVar7 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar6 = 23;
			iVar7 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar6 = 23;
			iVar7 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar6 = 23;
			iVar7 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar6 = 23;
			iVar7 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar6 = 23;
			iVar7 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar6 = 23;
			iVar7 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar6 = 23;
			iVar7 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar6 = 23;
			iVar7 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar6 = 23;
			iVar7 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar6 = 23;
			iVar7 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar6 = 23;
			iVar7 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar6 = 23;
			iVar7 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar6 = 24;
			iVar7 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar6 = 24;
			iVar7 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar6 = 24;
			iVar7 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar6 = 24;
			iVar7 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar6 = 24;
			iVar7 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar6 = 24;
			iVar7 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar6 = 24;
			iVar7 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar6 = 24;
			iVar7 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar6 = 24;
			iVar7 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar6 = 24;
			iVar7 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar6 = 25;
			iVar7 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar6 = 25;
			iVar7 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar6 = 25;
			iVar7 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar6 = 25;
			iVar7 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar6 = 25;
			iVar7 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar6 = 25;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar6 = 25;
			iVar7 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar6 = 25;
			iVar7 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar6 = 26;
			iVar7 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 27;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar6 = 28;
			iVar7 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar6 = 28;
			iVar7 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar6 = 28;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar6 = 29;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar6 = 30;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar6 = 30;
			iVar7 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar6 = 31;
			iVar7 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar6 = 31;
			iVar7 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar6 = 31;
			iVar7 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar6 = 31;
			iVar7 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_170(int iParam0)
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
	iVar10 = 3;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 1;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 3;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 6;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_171(int iParam0)
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
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		default:
			func_119(iVar10, iParam0, 6, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_172(int iParam0)
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
	iVar10 = 0;
	Global_76647[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar6 = 0;
			iVar7 = 6;
			break;
		
		default:
			func_119(iVar10, iParam0, 7, -1);
			return;
			break;
	}
	func_109(&(Global_76647[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_173()
{
	Global_76647[0 /*14*/].f_1 = -1;
	Global_76647[0 /*14*/].f_2 = -1;
	Global_76647[0 /*14*/].f_5 = -1;
	Global_76647[0 /*14*/].f_3 = -1;
	Global_76647[0 /*14*/].f_4 = -1;
	Global_76647[0 /*14*/].f_7 = 0;
	Global_76647[0 /*14*/].f_6 = 0;
	Global_76647[0 /*14*/].f_13 = -1;
	Global_76647[0 /*14*/].f_12 = 0;
	Global_76647[0 /*14*/] = 0;
	StringCopy(&(Global_76647[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_174(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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
	var uVar11;
	var uVar28;
	var uVar38;
	struct<14> Var55;
	var uVar69;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_76645++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = unk_0x36FE6D3220816ADA(iParam0);
	if (iParam5 == 0)
	{
		Global_76647[1 /*14*/] = { func_106(iVar10, iParam1, iParam2, -1) };
		if (!func_197(iParam3))
		{
			Global_76645 = (Global_76645 - 1);
			return 0;
		}
		func_194(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_98(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = func_98(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = func_193(iParam0, 1);
			if (!func_104(iVar10, 14, iVar7, -1))
			{
				iVar7 = -99;
			}
			iVar8 = func_193(iParam0, 0);
			if (!func_103(iVar10, 14, iVar8, -1) && !func_101(iVar10, 14, iVar8, -1))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_193(iParam0, 2);
			}
		}
		unk_0x6BD562D713BA3F70(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_76690 };
		}
		else
		{
			uVar11 = { func_93(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_76647[1 /*14*/] = { func_106(iVar10, iVar0, uVar11[iVar0], -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar28 = 9;
						if (iParam5 == 1)
						{
							uVar28 = { Global_76707 };
						}
						else
						{
							uVar28 = { func_87(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_76647[1 /*14*/] = { func_106(iVar10, 14, uVar28[iVar1], -1) };
							func_188(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
							func_194(14);
							if (Global_76645 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_180(iParam0, iVar10, 14, uVar28[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_174(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_179(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							unk_0x45F588C0DD767737(iParam0, func_86(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_86(iVar0)));
						}
						else
						{
							unk_0x45F588C0DD767737(iParam0, func_86(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
						}
						func_194(iVar0);
						if (Global_76645 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_180(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_174(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76647[1 /*14*/] = { func_106(iVar10, iVar0, func_178(iParam0, iVar0, -1), -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_85(iParam0, iVar10, &iVar4, 1))
							{
								func_174(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar38 = { func_93(iVar10, 0) };
						func_174(iParam0, iVar0, uVar38[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var55 = { func_106(iVar10, 8, iVar5, -1) };
			if (iVar5 != -99)
			{
				if (func_100(iVar10, iParam2, 8, iVar5, &uVar11, &Var55))
				{
					func_174(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_106(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (func_100(iVar10, iParam2, 9, iVar6, &uVar11, &Var55))
				{
					func_174(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_106(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (func_100(iVar10, iParam2, 14, iVar7, &uVar11, &Var55))
				{
					func_174(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_106(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (func_100(iVar10, iParam2, 14, iVar8, &uVar11, &Var55))
				{
					func_174(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var55 = { func_106(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (func_100(iVar10, iParam2, 14, iVar9, &uVar11, &Var55))
				{
					func_174(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar69 = { func_87(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76647[1 /*14*/] = { func_106(iVar10, 14, uVar69[iVar1], -1) };
			func_188(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
			func_194(14);
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_180(iParam0, iVar10, 14, uVar69[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_174(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_188(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
		func_194(iParam1);
		if (Global_76645 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_180(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_174(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			unk_0x45F588C0DD767737(iParam0, func_86(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_86(iParam1)));
		}
		else
		{
			unk_0x45F588C0DD767737(iParam0, func_86(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
		}
		if (Global_76645 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_180(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_174(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_175(iVar10, iParam1, iParam2);
		}
	}
	if (Global_76645 == 1)
	{
		if (func_85(iParam0, iVar10, &iVar4, 0))
		{
			func_174(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_83(iParam0, iVar10, &iVar4))
		{
			func_174(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_76645 = (Global_76645 - 1);
	return 1;
}

void func_175(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_177(iParam0, 12, iVar0))
	{
		if (func_176(iParam0, iParam1, iParam2))
		{
			iVar1 = func_84(iParam0);
			if (iParam1 == 3)
			{
				Global_111858.f_2359.f_539.f_196[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_111858.f_2359.f_539.f_200[iVar1] = iParam2;
			}
		}
	}
}

int func_176(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_177(int iParam0, int iParam1, int iParam2)
{
	Global_76647[1 /*14*/] = { func_106(iParam0, iParam1, iParam2, -1) };
	return unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 2);
}

int func_178(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_97(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_97(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_193(iParam0, iParam2);
			}
		}
		else
		{
			return func_98(iParam0, iParam1);
		}
	}
	return -99;
}

int func_179(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_84(iParam0);
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 = iParam2;
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_61 = iParam1;
		return 1;
	}
	return 0;
}

int func_180(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_98(uParam0, 1);
				iVar0 = func_187(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_98(uParam0, 2);
				iVar0 = func_187(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_179(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_186(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_185(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_184(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_184(uParam0, 3, 135, 150))
									{
										iVar0 = func_183(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("MPSV_LP0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_184(uParam0, 3, 209, 222))
									{
										iVar0 = func_183(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_184(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_183(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_183(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_183(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_183(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_184(uParam0, 3, 176, 191) && !func_184(uParam0, 3, 227, 242))
									{
										iVar0 = func_183(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_98(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_98(uParam0, 11);
								iVar5 = func_182(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_98(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_181(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_98(uParam0, 8);
								iVar8 = func_98(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_182(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_182(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_98(uParam0, 11);
								iVar0 = func_182(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != -99)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != -99)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != -99)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_183(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_183(iParam0, 11, 25, 40);
			}
			if (iParam2 == -99)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return -99;
}

int func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_177(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -99;
}

int func_184(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_98(uParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_185(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = -99;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_186(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = func_84(iParam0);
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 = iParam2;
		Global_111858.f_2359.f_539[iVar0 /*65*/].f_64 = iParam1;
		return 1;
	}
	return 0;
}

int func_187(int iParam0, int iParam1, int iParam2)
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

void func_188(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam2 == -1)
	{
		unk_0x4FCABD4082A6C808(iParam0, iParam1);
		if (iParam1 == 0)
		{
			unk_0x694113444F21E39F(iParam0, 34, 0);
			unk_0x694113444F21E39F(iParam0, 36, 0);
		}
	}
	else
	{
		unk_0x78024EFD31A7FAD4(iParam0, iParam1, iParam2, iParam3, unk_0x25DDB354A40FFCDB());
		if (iParam1 == 0)
		{
			iVar0 = func_190(iParam0, iParam2, iParam3, iParam1);
			if (func_189(unk_0x36FE6D3220816ADA(iParam0), 14, iVar0, unk_0xEAF476EEF924D2C9(iParam0, 0, iParam2, iParam3)))
			{
				unk_0x694113444F21E39F(iParam0, 34, 1);
				unk_0x694113444F21E39F(iParam0, 36, 1);
			}
			else
			{
				unk_0x694113444F21E39F(iParam0, 34, 0);
				unk_0x694113444F21E39F(iParam0, 36, 0);
			}
		}
	}
}

int func_189(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_102(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4D0432E34C5996D9(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == -1)
					{
						iParam3 = func_102(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x4D0432E34C5996D9(iParam3, joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_190(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_192(iParam3);
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	iVar1 = unk_0xEAF476EEF924D2C9(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_89(unk_0x36FE6D3220816ADA(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_89(unk_0x36FE6D3220816ADA(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0x99134D420E2DAA74(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x2CB217E5FD6878E9(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_191(iParam0, iParam3));
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
	return func_192(iParam3);
}

int func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(uParam0);
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

int func_192(int iParam0)
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

int func_193(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5AEB5DDFFAD43CA5(uParam0))
	{
		return -99;
	}
	iVar0 = unk_0xA98E0435012EAF07(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_192(iParam1);
	}
	iVar1 = unk_0x77A103B794FA7737(iParam0, iParam1);
	return func_190(iParam0, iVar0, iVar1, iParam1);
}

void func_194(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1) && !unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6))
	{
		func_115(iParam0, Global_76647[1 /*14*/].f_5, Global_76647[1 /*14*/].f_2, 2, Global_76647[1 /*14*/].f_1, 1, 0);
	}
	if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1) && unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_195(Global_2621444, 2, 1, 1, -1);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_195(Global_2621444, 2, 1, 1, -1);
		}
		else
		{
			func_195(Global_2621444, 2, 1, 1, -1);
		}
	}
}

void func_195(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_76644;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_117(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_112(iVar2, iVar0, 0);
		unk_0xBE20AB8238688965(&iVar3, iVar1);
		func_196(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_196(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_113(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_197(int iParam0)
{
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_198(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

int func_199()
{
	func_200();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_200()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_80(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_201(unk_0x9B0761B4C3EB8BC7());
			if (func_77(iVar0) && (!func_24(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_77(Global_111858.f_2359.f_539.f_4321))
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

int func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_80(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

bool func_202()
{
	bool bVar0;
	
	bVar0 = unk_0x9893D61ACB9FB52A();
	if (!Global_76832)
	{
		if (!bVar0)
		{
			Global_76832 = 1;
		}
	}
	return bVar0;
}

bool func_203(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<2> Var0;
	
	func_230(iParam0, &Var0);
	func_229(iParam0, &Var0, &(Var0.f_1));
	return func_204(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_204(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((func_8(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			unk_0x538D71DCD2FF3072(uParam0->f_7, 0, 0);
		}
		else
		{
			unk_0x538D71DCD2FF3072(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !func_227(uParam0->f_8, uParam0->f_7))
			{
				if (unk_0x39F82CCA08464EF6("TIME_LAPSE", 0, -1))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	unk_0xA86915034F55A3BF();
	unk_0x4CB4237D8858ADA6(7);
	unk_0x168FCB2CD6F9B3F1(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			unk_0xB8B0F7C8C1548C5B(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x68C2E3309DCAD71E("DEFAULT_SPLINE_CAMERA", 0);
			unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xD64C2E5B5BA2D347(uParam0->f_4, uParam1->f_14);
			unk_0x856549C07003344B(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 0, 0);
				}
				iVar0 = unk_0xA5D3CD332CD10EE9();
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (!unk_0x1758275D343D5BA3(iVar0))
					{
						unk_0x4F3C4F457D44BB0F(iVar0, 1, 0);
					}
					unk_0x80250B8368A4E611(iVar0, 0, 0);
				}
			}
			fVar1 = unk_0xE04DEAE1560BE3EA(uParam0->f_4);
			unk_0xAC7524206430AF81();
			unk_0x6AC14D21E841B9C4(uParam1->f_2, fVar1, 0);
			unk_0x6D5673CA7E01D619(uParam1->f_2, fVar1);
			unk_0x57B4EC087C9D7478(uParam1->f_2, fVar1);
			if (bParam3)
			{
				unk_0x555EE41D7C7078E6(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			func_226(&(uParam0->f_1), 0, 0, 0, unk_0x371CFD525753F70C(), unk_0xF225116F449A5CC6(), unk_0x2E48CFA70ABFC06A());
			func_61(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!func_227(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				unk_0xB8B0F7C8C1548C5B(uParam0->f_4, 0);
				uParam0->f_4 = unk_0x68C2E3309DCAD71E("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				unk_0xD64C2E5B5BA2D347(uParam0->f_4, uParam1->f_14);
				unk_0x856549C07003344B(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 0, 0);
					}
					iVar2 = unk_0xA5D3CD332CD10EE9();
					if (unk_0xAE06B9E39EBDE049(iVar2))
					{
						if (!unk_0x1758275D343D5BA3(iVar2))
						{
							unk_0x4F3C4F457D44BB0F(iVar2, 1, 0);
						}
						unk_0x80250B8368A4E611(iVar2, 0, 0);
					}
				}
				fVar3 = unk_0xE04DEAE1560BE3EA(uParam0->f_4);
				unk_0xAC7524206430AF81();
				unk_0x6AC14D21E841B9C4(uParam1->f_2, fVar3, 0);
				unk_0x6D5673CA7E01D619(uParam1->f_2, fVar3);
				unk_0x57B4EC087C9D7478(uParam1->f_2, fVar3);
				if (bParam3)
				{
					unk_0x555EE41D7C7078E6(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				func_226(&(uParam0->f_1), 0, 0, 8, unk_0x371CFD525753F70C(), unk_0xF225116F449A5CC6(), unk_0x2E48CFA70ABFC06A());
				func_61(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				unk_0x9128BA5F998AA176("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			unk_0xB8B0F7C8C1548C5B(uParam0->f_4, 0);
			uParam0->f_4 = unk_0x68C2E3309DCAD71E("DEFAULT_SPLINE_CAMERA", 0);
			unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			unk_0xD64C2E5B5BA2D347(uParam0->f_4, uParam1->f_14);
			unk_0xC4CE0C19E774153E(uParam0->f_4, 3);
			unk_0x856549C07003344B(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					unk_0x80250B8368A4E611(unk_0x9B0761B4C3EB8BC7(), 0, 0);
				}
				iVar4 = unk_0xA5D3CD332CD10EE9();
				if (unk_0xAE06B9E39EBDE049(iVar4))
				{
					if (!unk_0x1758275D343D5BA3(iVar4))
					{
						unk_0x4F3C4F457D44BB0F(iVar4, 1, 0);
					}
					unk_0x80250B8368A4E611(iVar4, 0, 0);
				}
			}
			fVar5 = unk_0xE04DEAE1560BE3EA(uParam0->f_4);
			unk_0xAC7524206430AF81();
			unk_0x6AC14D21E841B9C4(uParam1->f_2, fVar5, 0);
			unk_0x6D5673CA7E01D619(uParam1->f_2, fVar5);
			unk_0x57B4EC087C9D7478(uParam1->f_2, fVar5);
			if (bParam3)
			{
				unk_0x555EE41D7C7078E6(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			func_226(&(uParam0->f_1), 0, 0, 0, unk_0x371CFD525753F70C(), unk_0xF225116F449A5CC6(), unk_0x2E48CFA70ABFC06A());
			func_61(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			unk_0x9128BA5F998AA176("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			unk_0x555EE41D7C7078E6(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (func_207(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = unk_0x578C4EF320340AF7();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = unk_0x68C2E3309DCAD71E("DEFAULT_SPLINE_CAMERA", 0);
					unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					unk_0xD64C2E5B5BA2D347(uParam0->f_4, uParam1->f_14);
					unk_0xC4CE0C19E774153E(uParam0->f_4, 3);
					unk_0x856549C07003344B(uParam0->f_4, 1);
					uParam0->f_9 = unk_0x578C4EF320340AF7();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (func_207(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = unk_0x578C4EF320340AF7();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = unk_0x68C2E3309DCAD71E("DEFAULT_SPLINE_CAMERA", 0);
				unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				unk_0x7D871998E68E375E(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				unk_0xD64C2E5B5BA2D347(uParam0->f_4, uParam1->f_14);
				unk_0xC4CE0C19E774153E(uParam0->f_4, 3);
				unk_0x856549C07003344B(uParam0->f_4, 1);
				uParam0->f_9 = unk_0x578C4EF320340AF7();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (func_205(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x5DA78AD6801A0523())
				{
					unk_0x1D40553EDD51A1B8(250);
				}
				if (!unk_0x03DB5C6AABF8DA46())
				{
					unk_0xA86915034F55A3BF();
					unk_0x4CB4237D8858ADA6(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					func_207(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			unk_0x555EE41D7C7078E6(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (unk_0x40397A9A17EEC1C5(uParam0->f_4) && unk_0xC70648DE87CC1919(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = unk_0x578C4EF320340AF7();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (func_205(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!unk_0x5DA78AD6801A0523())
				{
					unk_0x1D40553EDD51A1B8(250);
				}
				if (!unk_0x03DB5C6AABF8DA46())
				{
					unk_0xA86915034F55A3BF();
					unk_0x4CB4237D8858ADA6(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			unk_0x555EE41D7C7078E6(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > unk_0x578C4EF320340AF7())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}

int func_205(int iParam0)
{
	if (unk_0x87F0CB19476706C3())
	{
		if ((unk_0x578C4EF320340AF7() - Global_28) > iParam0)
		{
			Global_27 = unk_0x578C4EF320340AF7();
		}
		Global_28 = unk_0x578C4EF320340AF7();
		if ((unk_0x578C4EF320340AF7() - Global_27) > iParam0)
		{
			if (func_206())
			{
				Global_27 = unk_0x578C4EF320340AF7();
				return 1;
			}
		}
	}
	return 0;
}

int func_206()
{
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (unk_0x1BD7199394D7F19A(0, 18) || unk_0x1BD7199394D7F19A(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_62();
			iVar5 = func_62();
			func_70(&iVar5, iParam0);
			func_71(&iVar5, iParam1);
			func_72(&iVar5, 0);
			if (func_224(*uParam4, iVar5))
			{
				func_223(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_221(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_11 = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_214((SYSTEM::TO_FLOAT(uParam4->f_11) / 3600f));
			if (bParam7)
			{
				unk_0x4B95FBE1005DCF18(0.6f);
				unk_0x10A31C8383235C8F(0);
				unk_0x62AC0FC5A4A3B3DC(0);
			}
			func_213();
			uParam4->f_10 = unk_0x5E54B0823F46079E();
			unk_0xC4CC25B68A91D144(uParam4->f_10, "TIME_LAPSE_MASTER", 0, 1);
			unk_0x17E478571720218F("TOD_SHIFT_SCENE");
			func_73();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((unk_0x40397A9A17EEC1C5(uParam4->f_4) && unk_0xC70648DE87CC1919(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (unk_0x40397A9A17EEC1C5(uParam4->f_4) && unk_0xC70648DE87CC1919(uParam4->f_4))
				{
					fVar0 = unk_0x34348C88CCFE84A9(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (unk_0x856D5567211886A2(sParam2) != 0)
						{
							unk_0xC2CB0559CFDC9B5A(sParam2, fParam8);
						}
						if (unk_0x856D5567211886A2(sParam3) != 0)
						{
							unk_0x35FD78BCBA8B49F9();
							unk_0x374E5C911B2C14DB(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_223(&iVar5, uParam4->f_11, 0, 0, 0, 0, 0);
				unk_0x538D71DCD2FF3072(func_212(iVar5), func_211(iVar5), func_210(iVar5));
				if (bParam7)
				{
					unk_0x86A985A804621EB7();
				}
				unk_0xC5E5600D1CF5CEF9(uParam4->f_10);
				unk_0x9128BA5F998AA176("TIME_LAPSE");
				if (bParam7)
				{
					unk_0x62AC0FC5A4A3B3DC(1);
					unk_0x10A31C8383235C8F(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_209(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_11) * fVar12));
			iVar5 = *uParam4;
			func_223(&iVar5, iVar4, 0, 0, 0, 0, 0);
			unk_0x538D71DCD2FF3072(func_212(iVar5), func_211(iVar5), func_210(iVar5));
			if (func_208(iVar5) != unk_0x371CFD525753F70C())
			{
				unk_0x56CAF1649CC0C45B(func_208(iVar5), func_69(iVar5), func_67(iVar5));
			}
			func_26();
			unk_0x04DAD6EE29755E9A(6);
			break;
	}
	return 0;
}

int func_208(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

float func_209(float fParam0, float fParam1, float fParam2)
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

int func_210(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_211(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_212(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_213()
{
	int iVar0;
	
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	if (!unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 0;
	}
	unk_0xE096849E490C2EC2(iVar0, "OFF");
	return 1;
}

void func_214(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_220(&(Global_111858.f_18099.f_175[iVar0 /*19*/].f_5)))
		{
			func_215(&(Global_111858.f_18099.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_220(&(Global_111858.f_18099.f_362[iVar1 /*3*/])))
		{
			func_215(&(Global_111858.f_18099.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x553F30BE4A085845();
}

void func_215(var uParam0, float fParam1)
{
	if (func_220(uParam0))
	{
		func_216(uParam0, (func_218(uParam0) + fParam1));
	}
}

void func_216(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_217(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(uParam0, 1);
	unk_0xD2459066EA58CE43(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_217(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar2 = unk_0x6CAAB7E78B5D978A();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(unk_0x578C4EF320340AF7()) / 1000f);
}

float func_218(var uParam0)
{
	if (func_220(uParam0))
	{
		if (func_219(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_217(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_219(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

bool func_220(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_221(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_224(iParam0, iParam1))
	{
		iVar0 = func_69(iParam1);
		iVar1 = func_67(iParam0);
		iVar2 = (func_67(iParam0) - func_67(iParam1));
		iVar3 = (func_69(iParam0) - func_69(iParam1));
		iVar4 = (func_208(iParam0) - func_208(iParam1));
		iVar5 = (func_212(iParam0) - func_212(iParam1));
		iVar6 = (func_211(iParam0) - func_211(iParam1));
		iVar7 = (func_210(iParam0) - func_210(iParam1));
	}
	else
	{
		iVar0 = func_69(iParam0);
		iVar1 = func_67(iParam1);
		iVar2 = (func_67(iParam1) - func_67(iParam0));
		iVar3 = (func_69(iParam1) - func_69(iParam0));
		iVar4 = (func_208(iParam1) - func_208(iParam0));
		iVar5 = (func_212(iParam1) - func_212(iParam0));
		iVar6 = (func_211(iParam1) - func_211(iParam0));
		iVar7 = (func_210(iParam1) - func_210(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_66(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_222(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_222(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_67(*iParam0);
	iVar1 = func_69(*iParam0);
	iVar2 = func_208(*iParam0);
	iVar3 = func_212(*iParam0);
	iVar4 = func_211(*iParam0);
	iVar5 = func_210(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_66(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_66(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_226(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_224(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_225(iParam1) || !func_225(iParam0))
	{
		return 1;
	}
	iVar0 = func_67(iParam0);
	iVar1 = func_67(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_69(iParam0);
	iVar1 = func_69(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_208(iParam0);
	iVar1 = func_208(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	iVar1 = func_212(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_211(iParam0);
	iVar1 = func_211(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	iVar1 = func_210(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_210(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_211(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_212(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_67(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_69(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_208(iParam0);
	if (iVar5 < 1 || iVar5 > func_66(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_72(uParam0, iParam1);
	func_71(uParam0, iParam2);
	func_70(uParam0, iParam3);
	func_64(uParam0, iParam5);
	func_65(uParam0, iParam4);
	func_63(uParam0, iParam6);
}

bool func_227(int iParam0, int iParam1)
{
	return func_228(unk_0x1F596C965B00E290(), iParam0, iParam1);
}

int func_228(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_229(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_89743[iParam0 /*34*/].f_14;
			*uParam2 = Global_89743[iParam0 /*34*/].f_13;
			break;
	}
}

void func_230(int iParam0, var uParam1)
{
	uParam1->f_17 = -1;
	switch (iParam0)
	{
		case 1:
		case 2:
			uParam1->f_2 = { -58.1338f, -1115.653f, 25.8856f };
			uParam1->f_5 = { 18.4907f, 0f, 3.566f };
			uParam1->f_8 = { -58.3857f, -1115.083f, 26.0824f };
			uParam1->f_11 = { 18.4907f, 0f, 2.0628f };
			uParam1->f_14 = 40.0256f;
			uParam1->f_15 = 4000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 17:
		case 18:
			uParam1->f_2 = { -830.1f, 171.4f, 71.5f };
			uParam1->f_5 = { 17.5f, 0f, -76f };
			uParam1->f_8 = { -829.5f, 171.6f, 71.7f };
			uParam1->f_11 = { 17.9f, 0f, -75.4f };
			uParam1->f_14 = 47.9931f;
			uParam1->f_15 = 6600;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 21:
		case 22:
			uParam1->f_2 = { -776.5807f, 181.1033f, 72.2059f };
			uParam1->f_5 = { 11.8135f, 0f, 95.7275f };
			uParam1->f_8 = { -776.8288f, 181.0926f, 72.2551f };
			uParam1->f_11 = { 11.8134f, 0f, 95.7284f };
			uParam1->f_14 = 46.7255f;
			uParam1->f_15 = 5500;
			uParam1->f_16 = 0;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			break;
		
		case 20:
			switch (func_199())
			{
				case 0:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
				
				case 2:
					uParam1->f_2 = { -846.3013f, 186.777f, 72.0316f };
					uParam1->f_5 = { 4.202026f, 0f, -111.2882f };
					uParam1->f_8 = { -846.1907f, 186.7339f, 72.0403f };
					uParam1->f_11 = { 4.202f, 0f, -111.2882f };
					uParam1->f_14 = 47f;
					uParam1->f_15 = 5500;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 40:
			uParam1->f_2 = { -8.0845f, -1450.367f, 36.8585f };
			uParam1->f_5 = { 13.3776f, 0f, 4.513f };
			uParam1->f_8 = { -9.0519f, -1450.444f, 36.8585f };
			uParam1->f_11 = { 13.3776f, 0f, 4.513f };
			uParam1->f_14 = 39.9659f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 27:
			uParam1->f_2 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_5 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_8 = { -1576.132f, 5160.888f, 24.1175f };
			uParam1->f_11 = { 4.8389f, -0.011f, 92.1057f };
			uParam1->f_14 = 40f;
			uParam1->f_15 = 7200;
			uParam1->f_16 = 0;
			break;
		
		case 43:
			uParam1->f_2 = { -7.205f, -1471.656f, 31.1614f };
			uParam1->f_5 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_8 = { -7.2909f, -1471.232f, 31.2546f };
			uParam1->f_11 = { 9.3776f, 0f, 11.4737f };
			uParam1->f_14 = 38.5265f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 61:
			uParam1->f_2 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_5 = { 5.6441f, 0f, -138.7474f };
			uParam1->f_8 = { -1060.658f, -464.0052f, 44.994f };
			uParam1->f_11 = { 4.8242f, 0f, -118.3167f };
			uParam1->f_14 = 37f;
			uParam1->f_15 = 5000;
			uParam1->f_16 = 0;
			break;
		
		case 91:
		case 93:
			uParam1->f_2 = { 1406.112f, 3590.231f, 34.4113f };
			uParam1->f_5 = { 17.5005f, 0f, 55.9579f };
			uParam1->f_8 = { 1405.673f, 3590.525f, 34.4113f };
			uParam1->f_11 = { 18.4979f, 0f, 55.9579f };
			uParam1->f_14 = 56.3199f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 69:
		case 86:
		case 90:
			uParam1->f_2 = { 739.1493f, -990.3961f, 29.85194f };
			uParam1->f_5 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_8 = { 738.4197f, -989.6462f, 30.17581f };
			uParam1->f_11 = { 17.19917f, 0f, 44.21184f };
			uParam1->f_14 = 47.56362f;
			uParam1->f_15 = 6000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 0;
			break;
		
		case 70:
			uParam1->f_2 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_5 = { -0.2f, 0f, -169.6f };
			uParam1->f_8 = { 2503.9f, -288.8f, 112.8f };
			uParam1->f_11 = { -0.2f, 0f, -169.6f };
			uParam1->f_14 = 47.6f;
			uParam1->f_15 = 5000;
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
			uParam1->f_16 = 1;
			break;
		
		case 45:
			uParam1->f_2 = { -458.5666f, 1010.097f, 316.3736f };
			uParam1->f_5 = { 14.47186f, 0f, -18.28884f };
			uParam1->f_8 = { -457.3f, 1011.6f, 316.9f };
			uParam1->f_11 = { 14.5f, 0f, -18.5f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 49:
			uParam1->f_2 = { -723.9982f, -155.7184f, 38.12362f };
			uParam1->f_5 = { 30.12048f, 0f, -99.11243f };
			uParam1->f_8 = { -722.4385f, -155.7817f, 37.4443f };
			uParam1->f_11 = { 2.0429f, 0f, -101.5132f };
			uParam1->f_14 = 45f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 9:
			switch (func_199())
			{
				case 2:
					uParam1->f_2 = { 416.3221f, -960.2586f, 30.6696f };
					uParam1->f_5 = { 21.5747f, 0f, -135.2969f };
					uParam1->f_8 = { 416.8894f, -960.832f, 30.9887f };
					uParam1->f_11 = { 21.9916f, 0f, -135.2969f };
					uParam1->f_14 = 47.1057f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
				
				case 1:
					uParam1->f_2 = { 1393.363f, -2052.581f, 65.4054f };
					uParam1->f_5 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_8 = { 1393.456f, -2052.656f, 68.146f };
					uParam1->f_11 = { 2.5107f, 0f, 51.1167f };
					uParam1->f_14 = 35.9859f;
					uParam1->f_15 = 6000;
					uParam1->f_16 = 0;
					break;
			}
			break;
		
		case 30:
			uParam1->f_2 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_5 = { 61.9f, 0f, -63.8f };
			uParam1->f_8 = { 59.3f, -751.7f, 46.8f };
			uParam1->f_11 = { 61.9f, 0f, -63.8f };
			uParam1->f_14 = 46.6f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 39:
			uParam1->f_2 = { 3841.93f, 4464.658f, 2.6587f };
			uParam1->f_5 = { 8.4859f, 0.0024f, 143.0775f };
			uParam1->f_8 = { 3842.54f, 4464.184f, 2.6587f };
			uParam1->f_11 = { 8.4859f, 0.0024f, 142.0089f };
			uParam1->f_14 = 34.1544f;
			uParam1->f_15 = 3000;
			uParam1->f_16 = 0;
			break;
		
		case 71:
			uParam1->f_2 = { -1193.1f, -1525.3f, 4.4f };
			uParam1->f_5 = { 9.4f, 0f, -78.8f };
			uParam1->f_8 = { -1192.2f, -1525.1f, 4.4f };
			uParam1->f_11 = { 9.4f, 0f, -78.5f };
			uParam1->f_14 = 30.4f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 74:
			uParam1->f_2 = { -24.2f, -2417.6f, 7.8f };
			uParam1->f_5 = { 10.4f, 0f, 80.4f };
			uParam1->f_8 = { -23.8f, -2414.8f, 7.8f };
			uParam1->f_11 = { 10.4f, 0f, 81.4f };
			uParam1->f_14 = 48.1095f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 84:
		case 85:
		case 65:
			uParam1->f_2 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_5 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_8 = { 146.9733f, -1310.644f, 30.85177f };
			uParam1->f_11 = { 16.26885f, -2.1E-05f, 45.00475f };
			uParam1->f_14 = 39.4027f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 62:
		case 15:
		case 16:
			uParam1->f_2 = { 1998.215f, 3816.983f, 33.0117f };
			uParam1->f_5 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_8 = { 1997.154f, 3817.004f, 33.1215f };
			uParam1->f_11 = { 5.9088f, 0f, 89.1989f };
			uParam1->f_14 = 36.8186f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			if (iParam0 == 62)
			{
				if (func_199() != 2)
				{
					uParam1->f_2 = { 0f, 0f, 0f };
					uParam1->f_5 = { 0f, 0f, 0f };
					uParam1->f_8 = { 0f, 0f, 0f };
					uParam1->f_11 = { 0f, 0f, 0f };
					uParam1->f_14 = -1f;
					uParam1->f_15 = -1;
					uParam1->f_16 = 0;
				}
			}
			break;
		
		case 63:
			uParam1->f_2 = { 1576f, 3363.9f, 55.5f };
			uParam1->f_5 = { 0.5f, 0f, -123.8f };
			uParam1->f_8 = { 1575.2f, 3364.4f, 49.2f };
			uParam1->f_11 = { -4.3f, 0f, -124.1f };
			uParam1->f_14 = 50f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 64:
			uParam1->f_2 = { 1566f, 3378.8f, 42.8f };
			uParam1->f_5 = { -2.4f, 0f, -126.3f };
			uParam1->f_8 = { 1567.6f, 3376.9f, 45f };
			uParam1->f_11 = { 1.6f, 0f, -124.6f };
			uParam1->f_14 = 34.7f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 24:
			uParam1->f_2 = { 1339.573f, -2550.873f, 56.28254f };
			uParam1->f_5 = { -2.348373f, -2.1E-05f, 159.736f };
			uParam1->f_8 = { 1334.491f, -2549.345f, 47.69109f };
			uParam1->f_11 = { 2.789334f, -2.1E-05f, -156.4397f };
			uParam1->f_14 = 25.66f;
			uParam1->f_15 = 8000;
			uParam1->f_16 = 0;
			break;
		
		case 25:
			uParam1->f_2 = { 2383.651f, 2624.787f, 46.9527f };
			uParam1->f_5 = { 14.6191f, 0f, 64.366f };
			uParam1->f_8 = { 2383.929f, 2622.802f, 47.2707f };
			uParam1->f_11 = { 33.17714f, -0.13073f, 12.31436f };
			uParam1->f_14 = 35.31843f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 26:
			uParam1->f_2 = { 1755.519f, -1474.981f, 126.1743f };
			uParam1->f_5 = { 4.5341f, 0f, 89.6405f };
			uParam1->f_8 = { 1772.26f, -1475.085f, 125.9465f };
			uParam1->f_11 = { 5.8327f, 0f, 89.6405f };
			uParam1->f_14 = 32.7f;
			uParam1->f_15 = 6500;
			uParam1->f_16 = 0;
			break;
		
		case 3:
			uParam1->f_2 = { -1514.257f, -947.7281f, 15.0253f };
			uParam1->f_5 = { -3.5807f, -0.0001f, -46.3209f };
			uParam1->f_8 = { -1512.601f, -949.2796f, 14.8827f };
			uParam1->f_11 = { -4.7682f, -0.0001f, -34.1393f };
			uParam1->f_14 = 29.9555f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 4:
			uParam1->f_2 = { -698.2578f, -934.4238f, 31.6909f };
			uParam1->f_5 = { -22.0467f, 0f, 32.1888f };
			uParam1->f_8 = { -697.8695f, -935.0406f, 31.9861f };
			uParam1->f_11 = { -20.6093f, 0f, 32.1888f };
			uParam1->f_14 = 30f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 5:
			uParam1->f_2 = { 221.8613f, -830.6434f, 45.3154f };
			uParam1->f_5 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_8 = { 227.5233f, -832.8285f, 45.3154f };
			uParam1->f_11 = { -13.9263f, 0f, 140.7092f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 6:
			uParam1->f_2 = { -23.3747f, -120.3161f, 64.139f };
			uParam1->f_5 = { -5.7232f, 0f, 5.1015f };
			uParam1->f_8 = { -22.5824f, -122.52f, 64.139f };
			uParam1->f_11 = { -5.7232f, 0f, 6.6362f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		case 7:
			uParam1->f_2 = { 803.5977f, -1075.869f, 37.1981f };
			uParam1->f_5 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_8 = { 803.5977f, -1075.869f, 32.7981f };
			uParam1->f_11 = { -10.7685f, 0f, -38.1705f };
			uParam1->f_14 = 35f;
			uParam1->f_15 = 6000;
			uParam1->f_16 = 0;
			break;
		
		default:
			uParam1->f_2 = { 0f, 0f, 0f };
			uParam1->f_5 = { 0f, 0f, 0f };
			uParam1->f_8 = { 0f, 0f, 0f };
			uParam1->f_11 = { 0f, 0f, 0f };
			uParam1->f_14 = -1f;
			uParam1->f_15 = -1;
			uParam1->f_16 = 0;
			break;
	}
	if (unk_0x856D5567211886A2("RAIN") == unk_0x1084EB270BFBE92B())
	{
		if (unk_0x7BCC91F3C1CF24E8(&(uParam1->f_18)))
		{
			StringCopy(&(uParam1->f_18), "EXTRASUNNY", 16);
		}
		if (unk_0x7BCC91F3C1CF24E8(&(uParam1->f_22)))
		{
			StringCopy(&(uParam1->f_22), "cirrocumulus", 16);
		}
	}
}

void func_231(int iParam0, bool bParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	int iVar8;
	
	func_232(iParam0, &Var0, &Var3, &uVar6);
	func_29(&uLocal_648);
	unk_0xB45ED6E24D0ECB31(uLocal_648);
	unk_0x61A1DBB09F568406(uLocal_648);
	unk_0x8A3898631CCEC253(uLocal_648, Var0);
	unk_0xBF92D2A60C7C686E(uLocal_648, Var3, 2);
	unk_0xD64C2E5B5BA2D347(uLocal_648, uVar6);
	if (iParam0 != 11)
	{
		iVar7 = 1;
		iVar8 = 1;
	}
	else
	{
		iVar7 = 0;
		iVar8 = 0;
	}
	if (bParam1)
	{
		func_232(iParam0 + 1, &Var0, &Var3, &fVar6);
		func_29(&uLocal_649);
		unk_0x8A3898631CCEC253(uLocal_649, Var0);
		unk_0xBF92D2A60C7C686E(uLocal_649, Var3, 2);
		unk_0xD64C2E5B5BA2D347(uLocal_649, fVar6);
		unk_0xF674D9B2033F5F86(uLocal_649, uLocal_648, iParam2, iVar7, iVar8);
	}
	if (iParam0 == 9 || iParam0 == 11)
	{
		unk_0x2311A669433389E8(uLocal_648, "HAND_SHAKE", 0.3f);
	}
	unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
}

void func_232(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1049.7f, -2017.96f, 51.39f };
			*uParam2 = { 9.71f, 0f, 98.15f };
			*uParam3 = 20.049f;
			break;
		
		case 8:
			*uParam1 = { -204.37f, -1507.27f, 32.29f };
			*uParam2 = { -11.68f, 0f, -145.99f };
			*uParam3 = 50f;
			break;
		
		case 1:
			*uParam1 = { -1662.64f, -1130.31f, 43.65f };
			*uParam2 = { -5.97f, 0f, 147.26f };
			*uParam3 = 46.848f;
			break;
		
		case 2:
			*uParam1 = { -3004.91f, 105.2f, 20.73f };
			*uParam2 = { -17.32f, 0f, 141.87f };
			*uParam3 = 50f;
			break;
		
		case 3:
			*uParam1 = { -207.51f, -1487.31f, 31.75f };
			*uParam2 = { -5.94f, 0f, -167.82f };
			*uParam3 = 34f;
			break;
		
		case 4:
			*uParam1 = { -2652.32f, 1779.98f, 193.98f };
			*uParam2 = { -17.4f, 0f, -20.84f };
			*uParam3 = 35.217f;
			break;
		
		case 9:
			*uParam1 = { -2711.9f, 1910.3f, 175.9f };
			*uParam2 = { -1.4f, 0f, -102.8f };
			*uParam3 = 37.3f;
			break;
		
		case 10:
			*uParam1 = { -2710.6f, 1908.8f, 175.8f };
			*uParam2 = { -1.8f, 0f, -102.2f };
			*uParam3 = 37.3f;
			break;
		
		case 11:
			*uParam1 = { -2636f, 1881.8f, 160.1f };
			*uParam2 = { 1.9f, 0f, 137.1f };
			*uParam3 = 29.5f;
			break;
		
		case 12:
			*uParam1 = { -2636.4f, 1881.4f, 160.2f };
			*uParam2 = { 1.9f, 0f, 137.1f };
			*uParam3 = 29.5f;
			break;
		
		case 13:
			*uParam1 = { -2647.9f, 1870.5f, 159.8f };
			*uParam2 = { 8.3f, 0f, -63.4f };
			*uParam3 = 37.5f;
			break;
		
		case 14:
			*uParam1 = { -2648.1f, 1870.4f, 159.7f };
			*uParam2 = { 8.3f, 0f, -63.4f };
			*uParam3 = 37.5f;
			break;
		
		case 5:
			*uParam1 = { -2650.38f, 1863.76f, 160.21f };
			*uParam2 = { -1.2f, 0f, -7.92f };
			*uParam3 = 35.217f;
			break;
		
		case 15:
			*uParam1 = { -1570.94f, 5159f, 20.71f };
			*uParam2 = { 0.93f, 0f, 86.76f };
			*uParam3 = 40f;
			break;
		
		case 16:
			*uParam1 = { -1576.132f, 5160.888f, 24.1175f };
			*uParam2 = { 4.8389f, -0.011f, 92.1057f };
			*uParam3 = 40f;
			break;
		
		case 7:
			*uParam1 = { -1662.34f, -1123.84f, 43.28f };
			*uParam2 = { -3.22f, 0f, 28.53f };
			*uParam3 = 33.32f;
			break;
	}
}

void func_233(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	func_251(bParam2, 1, 1, 0);
	func_53(bParam0, 1, 1, 0, 0, 0, 0);
	if (bParam0)
	{
		func_44();
		unk_0x8CFF639CEFF5CF16(0);
		unk_0x644F1D0C5427A242(0);
		iLocal_1058 = unk_0x578C4EF320340AF7();
	}
	else
	{
		if (bParam1)
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
			unk_0x8CFF639CEFF5CF16(1);
			unk_0x644F1D0C5427A242(1);
			func_45(0);
			unk_0x3ED9330214992278(false, iParam3, iParam6, 1, 0, 0);
			if (unk_0x40397A9A17EEC1C5(uLocal_650))
			{
				unk_0xB8B0F7C8C1548C5B(uLocal_650, 0);
			}
			func_234(&uLocal_648);
			func_234(&uLocal_649);
			if (bParam7)
			{
				unk_0x4C4FC7841A5FB983(0f);
			}
		}
		else if (bParam5)
		{
			unk_0x8CFF639CEFF5CF16(1);
			unk_0x644F1D0C5427A242(1);
		}
		iLocal_775 = 0;
		iLocal_776 = 0;
		iLocal_777 = 0;
		iLocal_778 = 0;
		iLocal_48 = 0;
		if (bParam4)
		{
			if (unk_0x03DB5C6AABF8DA46())
			{
				unk_0xFD45D90342D2A0CD(800);
			}
		}
	}
}

void func_234(var uParam0)
{
	if (unk_0x40397A9A17EEC1C5(*uParam0))
	{
		unk_0xB8B0F7C8C1548C5B(*uParam0, 0);
	}
}

int func_235()
{
	if (func_199() == 1)
	{
		return unk_0x9B0761B4C3EB8BC7();
	}
	return iLocal_49[1];
}

int func_236()
{
	if (func_199() == 2)
	{
		return unk_0x9B0761B4C3EB8BC7();
	}
	return iLocal_49[2];
}

int func_237()
{
	if (func_199() == 0)
	{
		return unk_0x9B0761B4C3EB8BC7();
	}
	return iLocal_49[0];
}

int func_238()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x779660A9E5364C4D(0, 71, 1);
	unk_0x779660A9E5364C4D(0, 72, 1);
	unk_0x779660A9E5364C4D(0, 76, 1);
	unk_0x779660A9E5364C4D(0, 73, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	if (bParam5)
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
	unk_0x779660A9E5364C4D(0, 80, 1);
	if (!bParam6)
	{
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
	}
	unk_0x779660A9E5364C4D(0, 74, 1);
	unk_0x779660A9E5364C4D(0, 86, 1);
	unk_0x779660A9E5364C4D(0, 81, 1);
	unk_0x779660A9E5364C4D(0, 82, 1);
	unk_0x779660A9E5364C4D(0, 138, 1);
	unk_0x779660A9E5364C4D(0, 136, 1);
	unk_0x779660A9E5364C4D(0, 114, 1);
	unk_0x779660A9E5364C4D(0, 107, 1);
	unk_0x779660A9E5364C4D(0, 110, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 87, 1);
	unk_0x779660A9E5364C4D(0, 88, 1);
	unk_0x779660A9E5364C4D(0, 113, 1);
	unk_0x779660A9E5364C4D(0, 115, 1);
	unk_0x779660A9E5364C4D(0, 116, 1);
	unk_0x779660A9E5364C4D(0, 117, 1);
	unk_0x779660A9E5364C4D(0, 118, 1);
	unk_0x779660A9E5364C4D(0, 119, 1);
	unk_0x779660A9E5364C4D(0, 352, 1);
	unk_0x779660A9E5364C4D(0, 131, 1);
	unk_0x779660A9E5364C4D(0, 132, 1);
	unk_0x779660A9E5364C4D(0, 123, 1);
	unk_0x779660A9E5364C4D(0, 126, 1);
	unk_0x779660A9E5364C4D(0, 129, 1);
	unk_0x779660A9E5364C4D(0, 130, 1);
	unk_0x779660A9E5364C4D(0, 133, 1);
	unk_0x779660A9E5364C4D(0, 134, 1);
	unk_0xB78DC40D63D4FBA3();
	func_240(iParam0);
	if ((unk_0x578C4EF320340AF7() - Global_29) > 500)
	{
		unk_0xD4C86DEC93F19FB0(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x578C4EF320340AF7();
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_240(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xAADB7E66E4BD2B67(iParam0))
		{
			if (unk_0xC1067169688057A8(iParam0))
			{
				unk_0x348DC18FDCA78997(iParam0, 0);
			}
		}
	}
}

void func_241()
{
	Global_19871 = 0;
	func_242();
}

void func_242()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(0);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(1);
		Global_21005 = 6;
		return;
	}
}

void func_243()
{
	unk_0x34FEEAC2548C3789(0f);
	unk_0x53797676AD34A9AA(0);
	unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
	unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
}

int func_244()
{
	if ((iLocal_42 == 0 && Local_127.f_1 == 0) && !func_245())
	{
		return 1;
	}
	return 0;
}

bool func_245()
{
	return Global_99007.f_352 > 0;
}

int func_246(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 || !unk_0x2F80DB5A41D045E6())
	{
		if ((iParam2 || !func_238()) || !unk_0x67F1A5C89249817A())
		{
			if (func_244())
			{
				func_247(sParam0, 7500, 1);
				return 1;
			}
		}
	}
	return 0;
}

void func_247(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x823A1D66E6A4D141(iParam1, 1);
}

int func_248(struct<3> Param0, int iParam3)
{
	if (func_244())
	{
		return func_249(Param0, iParam3);
	}
	return 0;
}

var func_249(struct<3> Param0, var uParam3)
{
	var uVar0;
	
	uVar0 = unk_0x6820C712C1DD618A(Param0);
	unk_0xFA81E0FBD7F5ACA0(uVar0, func_250(unk_0x25DDB354A40FFCDB(), 1f, 1f));
	unk_0x72BEFB9451782F60(uVar0, uParam3);
	return uVar0;
}

float func_250(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_251(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam0)
	{
		func_241();
	}
	if (bParam1)
	{
		if (!func_238() || (bParam0 && !bParam3))
		{
			unk_0xB80B2936A29B2666();
		}
		unk_0x9A4CFC4DC9164DEB();
	}
	if (bParam2)
	{
		if (unk_0x578C4EF320340AF7() >= iLocal_1063 + 1000)
		{
			unk_0xD289B55B6AADBA10(1);
			iLocal_1063 = unk_0x578C4EF320340AF7();
		}
	}
}

void func_252()
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(uLocal_630))
	{
		unk_0x93370FA10F15BE44(&uLocal_630);
	}
	if (unk_0x8F678487EEBD8CE4(uLocal_631))
	{
		unk_0x93370FA10F15BE44(&uLocal_631);
	}
	if (unk_0x8F678487EEBD8CE4(uLocal_632))
	{
		unk_0x93370FA10F15BE44(&uLocal_632);
	}
	if (unk_0x8F678487EEBD8CE4(uLocal_640))
	{
		unk_0x93370FA10F15BE44(&uLocal_640);
	}
	if (unk_0x8F678487EEBD8CE4(uLocal_641))
	{
		unk_0x93370FA10F15BE44(&uLocal_641);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_633[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_633[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_637[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_637[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_253(&(Local_138[iVar0 /*14*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_253(&(Local_279[iVar0 /*14*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_253(&(Local_420[iVar0 /*16*/].f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_642[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_642[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x8F678487EEBD8CE4(uLocal_644[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(uLocal_644[iVar0]));
		}
		iVar0++;
	}
}

void func_253(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		unk_0x93370FA10F15BE44(uParam0);
		bVar0 = true;
	}
	if (unk_0x8F678487EEBD8CE4(uParam0->f_1))
	{
		unk_0x93370FA10F15BE44(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xAE06B9E39EBDE049(uParam0->f_7))
	{
		if (!unk_0xA59F96B50B97E63C(uParam0->f_7, 0))
		{
			if (unk_0xD2160441D64A7913(uParam0->f_7))
			{
				unk_0x40144464F4EFCB95(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_254()
{
	if (iLocal_820)
	{
		if (func_244())
		{
			if (func_255(&uLocal_1156, "FINC1AU", &Local_1329, &cLocal_1335, 8, 0, 0))
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

bool func_255(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_268(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 1;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_256(sParam2, iParam4, 0);
}

int func_256(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xBE4122AC23440E7D(0);
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
					func_242();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			return 0;
		}
		if (func_267(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_266();
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
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam2)
			{
				func_265();
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
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_264())
				{
					return 0;
				}
				if (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC()))
					{
						return 0;
					}
					if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
					{
						return 0;
					}
				}
			}
			if (func_47())
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
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_263();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_262();
		func_257();
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
		func_242();
	}
	return 0;
}

void func_257()
{
	if (!func_258())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_258()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_261())
	{
		return 0;
	}
	if (func_259(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

bool func_259(int iParam0)
{
	return func_260(iParam0, 20);
}

bool func_260(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_261()
{
	return -1;
}

void func_262()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(0);
	Global_21005 = 1;
}

void func_263()
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
	unk_0xD2459066EA58CE43(&Global_7552, 16);
}

int func_264()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5BFE1F305D18843B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
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

void func_265()
{
	if (func_24(14))
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
		Global_19681 = func_199();
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

void func_266()
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

bool func_267(int iParam0, int iParam1)
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
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_268(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_269(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	char* sVar9;
	
	iVar1 = func_199();
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	bVar6 = true;
	bVar7 = true;
	bVar8 = false;
	switch (func_199())
	{
		case 0:
			iVar0 = 2;
			break;
		
		case 1:
			iVar0 = 0;
			break;
		
		case 2:
			if (iLocal_43 == 6)
			{
				iVar0 = 3;
			}
			else
			{
				iVar0 = 1;
			}
			break;
	}
	if (bParam1)
	{
		bVar5 = false;
	}
	if (bParam0)
	{
		if (unk_0x80FF6C016CDB0FAF(iLocal_594[iVar0], 0))
		{
			if (bParam1)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar2]))
				{
					if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[iVar2], iLocal_594[iVar0], 0))
					{
						bVar4 = false;
					}
				}
			}
			if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_594[iVar0], 0))
			{
				bVar3 = false;
			}
		}
		else
		{
			bVar7 = false;
		}
	}
	if (bParam2)
	{
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
		{
			bVar6 = false;
		}
	}
	if (bVar7)
	{
		if (bVar5)
		{
			if (bVar3)
			{
				if (iLocal_1064[iVar1] < 2)
				{
					iLocal_1064[iVar1] = 2;
				}
				if (bVar4)
				{
					if (bVar6)
					{
						bVar8 = true;
						if (!func_245())
						{
							iLocal_821 = 0;
							bLocal_822 = false;
							return 1;
						}
					}
					else
					{
						if (!iLocal_821)
						{
							func_252();
							iLocal_821 = 1;
						}
						else
						{
							func_276();
						}
						if (!bLocal_822)
						{
							bLocal_822 = func_246("LOSE_WANTED", 1, 0);
							unk_0x40ECEB892E6BDDDB(1, 1);
							unk_0x40ECEB892E6BDDDB(7, 1);
							unk_0x5CD631BB88EEE1D1(1);
						}
					}
				}
			}
			else
			{
				if (!unk_0x8F678487EEBD8CE4(uLocal_631))
				{
					func_251(0, 1, 0, 0);
					func_252();
					if (iLocal_1064[iVar1] == 0 || iLocal_1064[iVar1] == 2)
					{
						iLocal_818 = 1;
					}
					uLocal_631 = func_273(iLocal_594[iVar0], 0);
				}
				if (iLocal_818)
				{
					switch (iLocal_1064[iVar1])
					{
						case 0:
							switch (iVar0)
							{
								case 0:
									sVar9 = "CMN_GENGETINBK";
									break;
								
								case 2:
									sVar9 = "CMN_MGETIN";
									break;
								
								case 1:
									sVar9 = "CMN_TGETIN";
									break;
								
								case 3:
									sVar9 = "FC2_GODCAR1";
									break;
							}
							break;
						
						case 2:
							switch (iVar0)
							{
								case 0:
									sVar9 = "CMN_GENGETBCKBK";
									break;
								
								case 2:
									sVar9 = "CMN_MGETBCK";
									break;
								
								case 1:
									sVar9 = "CMN_TGETBCK";
									break;
								
								case 3:
									sVar9 = "FC2_GODCAR2";
									break;
							}
							break;
					}
					if (iLocal_819 || iLocal_43 != 6)
					{
						if (func_246(sVar9, 1, 0))
						{
							iLocal_818 = 0;
							iLocal_1064[iVar1]++;
						}
					}
				}
			}
		}
	}
	if (!bVar5)
	{
	}
	if (!bVar8)
	{
		if (!iLocal_820)
		{
			if (func_270())
			{
				func_241();
			}
		}
	}
	return 0;
}

int func_270()
{
	struct<6> Var0;
	
	if (func_238())
	{
		Var0 = { func_272() };
		if (unk_0xF005CCA4263DF67F(&Var0, "FINC1_DEVTAK"))
		{
			iLocal_820 = 1;
			Local_1329 = { Var0 };
			cLocal_1335 = { func_271() };
			return 1;
		}
	}
	return 0;
}

struct<6> func_271()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		iVar6 = unk_0x68CB238A579603D3();
		iVar6 = (iVar6 + Global_22015);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x3030AE9FCF1BC243(&(Global_19873[iVar7 /*6*/])))
			{
				return Global_19873[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x3030AE9FCF1BC243(&(Global_19873[iVar8 /*6*/])))
					{
						return Global_19873[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_19873[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_272()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		return Global_20624;
	}
	return Var0;
}

int func_273(int iParam0, bool bParam1)
{
	if (func_244())
	{
		return func_274(iParam0, bParam1, 0);
	}
	return 0;
}

int func_274(int iParam0, bool bParam1, bool bParam2)
{
	return func_275(iParam0, !bParam1, bParam2);
}

int func_275(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_250(unk_0x25DDB354A40FFCDB(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3060C53EAE54BBE7(uVar0, bParam1);
		}
		else
		{
			unk_0xECC9A00CF1181EC2(uVar0, 2);
		}
	}
	else if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_250(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(uVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(uVar0, func_250(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_276()
{
	if (unk_0x8F678487EEBD8CE4(uLocal_631))
	{
		unk_0x93370FA10F15BE44(&uLocal_631);
	}
	if (((((((((func_277("CMN_GENGETINBK", 0, 0) || func_277("CMN_MGETIN", 0, 0)) || func_277("CMN_TGETIN", 0, 0)) || func_277("FC2_GODCAR1", 0, 0)) || func_277("CMN_GENGETIN", 0, 0)) || func_277("CMN_GENGETBCKBK", 0, 0)) || func_277("CMN_MGETBCK", 0, 0)) || func_277("CMN_TGETBCK", 0, 0)) || func_277("FC2_GODCAR2", 0, 0)) || func_277("CMN_GENGETBCK", 0, 0))
	{
		func_251(1, 1, 0, 0);
	}
}

bool func_277(char* sParam0, int iParam1, int iParam2)
{
	unk_0xCD7691F7F3015C57(sParam0);
	if (iParam1 == 1)
	{
		unk_0x6A826E35A3096ED0(iParam2);
	}
	return unk_0x5E0AC8AED85CE7CB();
}

void func_278(int iParam0)
{
	int iVar0;
	
	if (iLocal_685[iParam0])
	{
		iVar0 = func_74(iParam0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			unk_0x74528AC0906CBABE(iVar0);
		}
		iLocal_685[iParam0] = 0;
	}
}

bool func_279(char* sParam0)
{
	return unk_0x21723EF7B2FCC4CC(sParam0);
}

void func_280(char* sParam0, struct<3> Param1, float fParam4, float fParam5)
{
	switch (iLocal_47)
	{
		case 0:
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Param1, fParam4, fParam4, fParam4, 0, 1, 0))
			{
				unk_0x85D9FC15836825C1(sParam0, 8);
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (unk_0x9893D61ACB9FB52A())
			{
				iLocal_47 = 2;
			}
			break;
		
		case 2:
			if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Param1, fParam5, fParam5, fParam5, 0, 1, 0))
			{
				unk_0xA389D93286499741();
				iLocal_47 = 0;
			}
			break;
	}
}

Vector3 func_281(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1020.931f, -2038.863f, 29.85838f;
			break;
		
		case 1:
			return 1112.35f, -2003.9f, 34.44f;
			break;
		
		case 2:
			return 1114.1f, -2003.12f, 34.44f;
			break;
		
		case 3:
			return 1022.91f, -2041.58f, 30.01f;
			break;
		
		case 4:
			return 974.3848f, -2081.01f, 29.98432f;
			break;
		
		case 5:
			return 989.6733f, -2076.105f, 30.06461f;
			break;
		
		case 6:
			return -2997.288f, 93.6371f, 10.6077f;
			break;
		
		case 7:
			return -1602.93f, -1021.84f, 12.07f;
			break;
		
		case 8:
			return -2550.93f, 1912.22f, 167.96f;
			break;
		
		case 9:
			return -2637.536f, 1599.746f, 124.2257f;
			break;
		
		case 10:
			return -205.444f, -1489.52f, 30.9925f;
			break;
		
		case 11:
			return -2581.06f, 1930.49f, 166.3f;
			break;
		
		case 12:
			return -1608.71f, -1061.97f, 12.02f;
			break;
		
		case 13:
			return -210.93f, -1492.2f, 30.26f;
			break;
		
		case 14:
			return -1613.36f, -1010.51f, 12.04f;
			break;
		
		case 15:
			return -3008.57f, 109.54f, 12.07f;
			break;
		
		case 16:
			return -2555.514f, 1912.511f, 167.8971f;
			break;
		
		case 17:
			return -1576.47f, 5153.91f, 18.97f;
			break;
		
		case 18:
			return -1663.97f, -1120.88f, 41.7839f;
			break;
		
		case 19:
			return -2645.99f, 1871.412f, 159.1515f;
			break;
		
		case 20:
			return -1663.97f, -1126.7f, 30.7f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_282(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<2> Var0;
	
	if ((iParam1 || !unk_0x2F80DB5A41D045E6()) || !unk_0x67F1A5C89249817A())
	{
		if (!func_238())
		{
			if (func_244())
			{
				if (iParam2 == 0)
				{
					return func_284(&uLocal_1156, "FINC1AU", sParam0, 8, 0, 0, 0);
				}
				else
				{
					StringCopy(&Var0, sParam0, 16);
					StringConCat(&Var0, "_", 16);
					StringIntConCat(&Var0, iParam2, 16);
					if (!bParam3)
					{
						return func_283(&uLocal_1156, "FINC1AU", sParam0, &Var0, 8, 0, 0);
					}
					else
					{
						return func_255(&uLocal_1156, "FINC1AU", sParam0, &Var0, 8, 0, 0);
					}
				}
			}
		}
	}
	return 0;
}

int func_283(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_268(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 1;
	Global_21998 = 0;
	Global_22002 = 0;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_256(sParam2, iParam4, 0);
}

int func_284(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_268(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_256(sParam2, iParam3, 0);
}

void func_285()
{
	int iVar0;
	bool bVar1;
	
	unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
	if (!iLocal_775)
	{
		func_808();
		if (!iLocal_872)
		{
			if (unk_0xD79BDB7193E12293(unk_0x9B0761B4C3EB8BC7(), -2654.7f, 1861.9f, 159.304f, -2602.7f, 1925.2f, 168.7f, 0, 1, 0) || unk_0xD79BDB7193E12293(unk_0x9B0761B4C3EB8BC7(), -2604.207f, 1859.182f, 164.8042f, -2598.302f, 1905.657f, 168.7f, 0, 1, 0))
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(Local_420[iVar0 /*16*/]))
					{
						unk_0x54E3EF0852DA2CA4(Local_420[iVar0 /*16*/], 0);
						unk_0x6673CC701BC8E9C1(Local_420[iVar0 /*16*/], 57, 0);
					}
					iVar0++;
				}
				iLocal_872 = 1;
			}
		}
		if (!bLocal_868)
		{
			if (!bLocal_869)
			{
				bLocal_869 = func_246("FC2_KIDDEV", 1, 0);
			}
		}
		else if (!bLocal_871)
		{
			bVar1 = false;
			if (bLocal_917)
			{
				if ((unk_0x5AEB5DDFFAD43CA5(Local_420[iLocal_942 /*16*/]) || bLocal_919) || unk_0x578C4EF320340AF7() >= iLocal_944 + 1200)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				if (func_277("FC2_KIDDEV", 0, 0))
				{
					func_251(0, 1, 0, 0);
				}
				bLocal_871 = func_246("FC2_KILLGUA", 1, 0);
			}
		}
		else if (!bLocal_870)
		{
			if (iLocal_1120 == 0)
			{
				bLocal_870 = func_246("FC2_KIDDEV", 1, 0);
			}
		}
		if (!bLocal_903)
		{
			if (bLocal_868)
			{
				func_42(19);
				func_33(20);
				bLocal_903 = func_279("FINC2_ALERTED");
			}
		}
		else if (!bLocal_904)
		{
			if (iLocal_1120 == 0)
			{
				bLocal_904 = func_279("FINC2_ALL_DEAD");
			}
		}
		if (bLocal_868)
		{
			if (iLocal_1120 > 0)
			{
				if (unk_0x344C570D6F8700DF(0, 2) == 0)
				{
					func_807("FINC1_TRECOM", 10000, 16000);
				}
				else
				{
					func_807("FINC1_DEVIN", 10000, 16000);
				}
			}
		}
		if (!bLocal_917)
		{
			if (iLocal_922 || bLocal_868)
			{
				if (func_277("FC2_KIDDEV", 0, 0))
				{
					func_251(0, 1, 0, 0);
				}
			}
			if (!unk_0x2F80DB5A41D045E6() && !func_238())
			{
				if (iLocal_922 || bLocal_868)
				{
					if (iLocal_942 < 0)
					{
						iLocal_942 = func_806();
					}
					if (iLocal_942 >= 0)
					{
						if (!unk_0x5AEB5DDFFAD43CA5(Local_420[iLocal_942 /*16*/]))
						{
							func_805(&uLocal_1156, 7, Local_420[iLocal_942 /*16*/], "MERRYGUARD2", 0, 1);
							iLocal_944 = unk_0x578C4EF320340AF7();
							bLocal_917 = true;
						}
					}
				}
			}
		}
		else if (!bLocal_919)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(Local_420[iLocal_942 /*16*/]))
			{
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), Local_420[iLocal_942 /*16*/], 27f, 27f, 5f, 0, 1, 0))
				{
					if (!bLocal_923)
					{
						bLocal_919 = func_282("FINC1_MW2", 0, 0, 0);
					}
					else
					{
						bLocal_919 = func_282("FINC1_MW5", 0, 0, 0);
					}
					iLocal_945 = unk_0x578C4EF320340AF7();
				}
			}
		}
		else if (!bLocal_920)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(Local_420[iLocal_942 /*16*/]))
			{
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), Local_420[iLocal_942 /*16*/], 27f, 27f, 5f, 0, 1, 0))
				{
					if (unk_0x578C4EF320340AF7() >= iLocal_945 + 8000)
					{
						if (!bLocal_923)
						{
							bLocal_920 = func_282("FINC1_MW3", 0, 0, 0);
						}
						else
						{
							bLocal_920 = func_282("FINC1_MW6", 0, 0, 0);
						}
					}
				}
			}
		}
		if (bLocal_868)
		{
			if (!iLocal_918)
			{
				if (bLocal_917)
				{
					if (unk_0x578C4EF320340AF7() >= (iLocal_944 + 45000) || iLocal_1120 < 4)
					{
						if (unk_0x5AEB5DDFFAD43CA5(Local_420[iLocal_942 /*16*/]))
						{
							if (!unk_0x2F80DB5A41D045E6() && !func_238())
							{
								iLocal_943 = func_806();
								if (iLocal_943 >= 0)
								{
									func_805(&uLocal_1156, 7, Local_420[iLocal_943 /*16*/], "MERRYGUARD2", 0, 1);
									iLocal_918 = 1;
								}
							}
						}
					}
				}
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(Local_420[iLocal_943 /*16*/]))
			{
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), Local_420[iLocal_943 /*16*/], 27f, 27f, 5f, 0, 1, 0))
				{
					if (!bLocal_921)
					{
						if (!bLocal_923)
						{
							bLocal_921 = func_282("FINC1_MW6", 0, 0, 0);
						}
						else
						{
							bLocal_921 = func_282("FINC1_MW3", 0, 0, 0);
						}
					}
				}
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_586))
		{
			if (iLocal_1120 == 0)
			{
				func_280("fin_c2_mcs_5", -2648.757f, 1872.554f, 159.1507f, 50f, 75f);
				if (unk_0x06BC339A53519E4E())
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_586))
					{
						unk_0x18309CE9F0E2CADF("Devin", iLocal_586, 0);
						unk_0x931CABC5DE105C79("Devin", 8, 0, 0, joaat("cs_devin"));
					}
				}
				if (!iLocal_778)
				{
					if ((unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_586, 3.5f, 3.5f, 2.5f, 0, 1, 0) && iLocal_579 == 2) && !unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 256);
						iLocal_778 = 1;
					}
				}
				else if (!func_238())
				{
					if (func_202())
					{
						iLocal_775 = 1;
					}
				}
			}
		}
	}
	else
	{
		func_286();
	}
}

void func_286()
{
	int iVar0;
	
	switch (iLocal_48)
	{
		case 0:
			func_804(14, 1, 1);
			func_804(15, 1, 1);
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0xFA3AB7AE2A01375E(unk_0x9B0761B4C3EB8BC7(), "Trevor", 0, 0, 0);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_586))
			{
				unk_0xFA3AB7AE2A01375E(iLocal_586, "DEVIN", 0, 0, 0);
			}
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
			{
			}
			else if (unk_0xAE06B9E39EBDE049(iLocal_594[3]))
			{
				unk_0x03A2522C845CFAC6(&(iLocal_594[3]));
				unk_0x555EE41D7C7078E6(func_281(11), 5f, 1, 0, 0, 0);
				func_723(6, 3, func_281(11), -106.61f, 1, 1, 0, 1, 0);
			}
			unk_0xFA3AB7AE2A01375E(iLocal_594[3], "TORNADO", 0, 0, 32);
			if (unk_0xAE06B9E39EBDE049(iLocal_627))
			{
				unk_0xFA3AB7AE2A01375E(iLocal_627, "p_devin_box_01_s", 0, 0, 0);
			}
			func_279("FINC2_WE_GOT_HIM");
			func_42(19);
			func_42(20);
			unk_0x6EEEEDB625F825CC(2048);
			iLocal_940 = 0;
			unk_0x182DD1CBC93CF936(4);
			iLocal_1059 = unk_0x578C4EF320340AF7();
			iLocal_48 = 1;
			break;
		
		case 1:
			if (!iLocal_777)
			{
				if (unk_0x3EBB66F936A3436E())
				{
					func_715(-2550.604f, 1909.273f, 167.0294f, -2558.108f, 1912.693f, 172.8753f, 0.7f, -2551.91f, 1909.08f, 168.88f, 57.85f, func_722(), 1, 0, 1, 0, 0);
					if (unk_0xAE06B9E39EBDE049(iLocal_628))
					{
						unk_0x315F7D8C33F0AB37(&iLocal_628);
					}
					func_43();
					unk_0x555EE41D7C7078E6(-2649.059f, 1872.454f, 159.7203f, 8f, 1, 0, 0, 0);
					unk_0x801B883D25479F23(-2649.059f, 1872.454f, 159.7203f, 12f, 0);
					unk_0xCFF81C0C8D63E62E(-2649.059f, 1872.454f, 159.7203f, 12f);
					unk_0x6D5673CA7E01D619(-2649.059f, 1872.454f, 159.7203f, 12f);
					if (unk_0x03DB5C6AABF8DA46())
					{
						unk_0xFD45D90342D2A0CD(800);
					}
					iLocal_777 = 1;
				}
			}
			if (!iLocal_940)
			{
				if (unk_0x1075BD5031B0682E() == 4)
				{
					if (unk_0x9BEEC39E5B3F1C3C() >= (unk_0xAF4B2E7CA8CD84D3() - 300))
					{
						unk_0x0A794A8277A63161("CamPushInNeutral", 0, 0);
						unk_0xC4CC25B68A91D144(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_940 = 1;
					}
				}
			}
			if (unk_0x10447A1CD8175FC0("Tornado", 0))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
				{
					func_714(iLocal_594[3]);
					bLocal_905 = true;
				}
			}
			else if (!bLocal_905)
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
				{
					unk_0x3CAC08422838160A(iLocal_594[3], 1, 1, 1);
				}
			}
			if (unk_0x10447A1CD8175FC0("Trevor", 0))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
				{
					unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[3], -1);
				}
			}
			if (unk_0x10447A1CD8175FC0("Devin", 0))
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_586))
				{
					unk_0x586DDC617E714637(&iLocal_586);
				}
			}
			if (unk_0x59B0C38F9A3B22DB(0))
			{
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (unk_0xAE06B9E39EBDE049(Local_420[iVar0 /*16*/]))
					{
						if (unk_0x5AEB5DDFFAD43CA5(Local_420[iVar0 /*16*/]))
						{
							unk_0x2481907DEE6B85EA(&(Local_420[iVar0 /*16*/]));
						}
						else
						{
							unk_0x586DDC617E714637(&(Local_420[iVar0 /*16*/]));
						}
					}
					iVar0++;
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_627))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_627);
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_628))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_628);
				}
				unk_0x62BA5ABF1BBE6186();
				func_233(0, 1, 1, 0, 1, 0, 1000, 1);
				func_287(6, 0, 1, 1, 0, 1, 1, 1);
			}
			break;
		
		case 2:
			break;
	}
}

void func_287(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7)
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (bParam1 && iParam0 == 0)
	{
		func_713();
	}
	if (bParam1 && !bParam4)
	{
		switch (iParam0)
		{
			case 0:
				switch (func_199())
				{
					case 1:
						if (iLocal_860)
						{
							Var0 = { func_712(1) - Vector(2f, 0f, 0f) };
							fVar3 = func_711(1);
						}
						else
						{
							Var0 = { func_281(3) };
							fVar3 = 144.89f;
						}
						break;
					
					case 0:
						if (iLocal_860)
						{
							Var0 = { func_712(0) - Vector(2f, 0f, 0f) };
							fVar3 = func_711(0);
						}
						else
						{
							Var0 = { func_281(5) };
							fVar3 = 88.6f;
						}
						break;
					
					case 2:
						if (iLocal_860)
						{
							Var0 = { func_712(2) - Vector(2f, 0f, 0f) };
							fVar3 = func_711(2);
						}
						else
						{
							Var0 = { func_281(4) };
							fVar3 = 86.1f;
						}
						break;
				}
				break;
			
			case 3:
				Var0 = { func_281(6) };
				fVar3 = 139.04f;
				break;
			
			case 1:
				Var0 = { func_281(7) };
				fVar3 = 226.07f;
				break;
			
			case 2:
				Var0 = { func_281(10) };
				fVar3 = 139.38f;
				break;
			
			case 4:
				Var0 = { func_281(9) };
				fVar3 = -24.33f;
				break;
			
			case 5:
				Var0 = { -2553.772f, 1911.678f, 167.9453f };
				fVar3 = 62.4f;
				break;
			
			case 6:
				if (!bLocal_774)
				{
					Var0 = { func_281(11) };
					fVar3 = -106.61f;
				}
				else
				{
					Var0 = { func_281(17) };
					fVar3 = 9.1f;
				}
				break;
		}
		func_710();
		if (bParam5)
		{
			unk_0x555EE41D7C7078E6(Var0, 10000f, 1, 0, 0, 0);
		}
		SYSTEM::WAIT(0);
		unk_0xA0E8E405D991233C("extrasunny");
		if (func_709() && !iLocal_899)
		{
			func_708(Var0, fVar3, 1, 0);
		}
		else
		{
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), Var0, 1, 0, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), fVar3);
		}
	}
	if (bParam4)
	{
		if (!func_709())
		{
			if (!unk_0xAE06B9E39EBDE049(iLocal_594[0]))
			{
				iLocal_930 = 1;
			}
		}
	}
	if (bParam6)
	{
		func_706(iParam0, !bParam4, 0);
		func_702(iParam0, !bParam4, 0);
		func_698(iParam0, !bParam4, 0);
		func_694(iParam0, !bParam4, 0);
		func_690(iParam0, !bParam4, 0);
		func_686(iParam0, !bParam4, 0);
		func_682(iParam0, !bParam4, 0);
		func_678(iParam0, !bParam4, 0);
	}
	if (bParam4)
	{
		while (((((((!func_677() || !func_675()) || !func_673()) || !func_672()) || !func_671()) || !func_670()) || !func_668()) || !func_667())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (bParam1)
	{
		bVar4 = false;
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		bVar8 = false;
		bVar4 = true;
		bVar5 = true;
		bVar6 = true;
		if (func_709() && !Global_93132)
		{
			if (func_666())
			{
				bVar7 = true;
				func_664();
				switch (iParam0)
				{
					case 1:
					case 4:
					case 5:
						bVar5 = false;
						break;
					
					case 3:
						bVar4 = false;
						break;
					
					case 2:
						bVar6 = false;
						break;
					}
				}
		}
		if (iParam0 < 4)
		{
			if (bVar4)
			{
				if (!Global_95394[1])
				{
					func_663(5);
				}
			}
			if (bVar6)
			{
				if (!Global_95394[0])
				{
					func_663(4);
				}
			}
			if (!Global_95394[1])
			{
				func_663(1);
			}
			if (!Global_95394[0])
			{
				func_663(0);
			}
		}
		if (bVar5)
		{
			func_663(6);
		}
		func_663(2);
		if (!bParam4)
		{
			func_662();
		}
		while (!func_677())
		{
			SYSTEM::WAIT(0);
		}
		if (bVar7)
		{
			while (!func_661())
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bVar8)
		{
			while (!func_651())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	func_650(1);
	unk_0xA389D93286499741();
	iLocal_47 = 0;
	func_648(iParam0);
	if (bParam1)
	{
		func_252();
	}
	if (iParam0 == 3)
	{
		unk_0x49530A7462821D76(0f);
	}
	func_647(&uLocal_21, 0);
	func_646(&uLocal_21);
	func_644(&uLocal_21, 0, 0);
	func_251((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	if (bParam1)
	{
		iVar9 = 0;
		while (iVar9 < 3)
		{
			iLocal_130[iVar9] = 0;
			iVar9++;
		}
	}
	unk_0x0C0DE28672975DC3("AllowScriptedSpeechInSlowMo", 0);
	if (bParam1)
	{
		if (iParam0 != 0 || !iLocal_860)
		{
			iVar10 = func_643(iParam0);
			iVar11 = func_198(iVar10);
			if (func_199() != iVar10)
			{
				while (!func_642(&(iLocal_49[iVar11]), iVar10, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7()), 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_637(&iLocal_49, iVar11))
				{
					SYSTEM::WAIT(0);
				}
				while (!func_596(&iLocal_49, 1, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				iVar9 = 0;
				while (iVar9 < 3)
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_49[iVar9]))
					{
						unk_0x586DDC617E714637(&(iLocal_49[iVar9]));
					}
					iVar9++;
				}
			}
		}
	}
	if (bParam1)
	{
		if (bParam1)
		{
			iVar9 = 0;
			while (iVar9 <= 9)
			{
				func_595(&uLocal_1156, iVar9);
				iVar9++;
			}
		}
		if (!iLocal_860)
		{
			unk_0x1AC76C279318C67F(func_594(1), func_593(1));
		}
		switch (func_199())
		{
			case 0:
				func_805(&uLocal_1156, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
				break;
			
			case 2:
				func_805(&uLocal_1156, 1, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
				break;
			
			case 1:
				func_805(&uLocal_1156, 2, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
				break;
		}
		iLocal_49.f_6 = func_198(func_643(iParam0));
		if (!bParam4)
		{
			iLocal_594[0] = 0;
			iLocal_594[2] = 0;
			iLocal_594[1] = 0;
		}
		if (!bParam4)
		{
			if (unk_0x2489BECD123A725B(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x9EB88E485EDFD7EB(unk_0x9B0761B4C3EB8BC7(), 1);
			}
		}
		func_384(iParam0, bParam4);
		func_383(unk_0x9B0761B4C3EB8BC7(), func_643(iParam0), iParam0);
		if (bParam4)
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[0], 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_594[0], 0))
				{
				}
			}
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[1], 0) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[2]))
			{
				if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[2], iLocal_594[1], 0))
				{
					unk_0x13A4BD6CC31F7B8F(iLocal_49[2], iLocal_594[1], -1);
				}
			}
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[2], 0) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
			{
				if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[0], iLocal_594[2], 0))
				{
					unk_0x13A4BD6CC31F7B8F(iLocal_49[0], iLocal_594[2], -1);
				}
			}
		}
		if (bParam1)
		{
			if (!bParam4)
			{
				func_662();
			}
			while (!unk_0x51E339346E2220A4(unk_0x9B0761B4C3EB8BC7()))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (bParam1)
	{
		if ((iParam0 == 3 || iParam0 == 2) || iParam0 == 1)
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
			iLocal_859 = 1;
		}
		else
		{
			iLocal_859 = 0;
		}
	}
	else
	{
		iLocal_859 = 0;
	}
	if (bParam3)
	{
		unk_0x3ED9330214992278(false, false, 3000, 1, 0, 0);
	}
	switch (iParam0)
	{
		case 0:
			if (bParam4)
			{
				func_81(0, 1);
				func_81(2, 1);
				func_81(1, 1);
			}
			if (bParam1)
			{
				func_382();
				func_381();
				bLocal_838 = false;
				iLocal_839 = 0;
				bLocal_840 = false;
				bLocal_841 = false;
				iLocal_1145 = -1;
			}
			else
			{
				func_379(1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_279("FINC2_STEVE_START");
				iLocal_881 = 1;
				iLocal_788[2] = 1;
				iLocal_814 = 0;
				func_381();
				bLocal_851 = false;
				iLocal_852 = 0;
				iLocal_850 = 1;
			}
			else
			{
				iLocal_881 = 0;
				iLocal_784[2] = 1;
			}
			func_805(&uLocal_1156, 8, 0, "LESTER", 0, 1);
			func_33(8);
			func_378();
			func_376();
			break;
		
		case 3:
			func_279("FINC2_CHENG_START");
			if (bParam1)
			{
				iLocal_929 = 1;
				iLocal_816 = 0;
				bLocal_831 = false;
			}
			else
			{
				iLocal_784[1] = 1;
			}
			func_33(2);
			func_376();
			break;
		
		case 2:
			func_279("FINC2_STRETCH_START");
			if (bParam1)
			{
				iLocal_928 = 1;
				bLocal_863 = true;
				iLocal_815 = 0;
			}
			else
			{
				iLocal_784[0] = 1;
			}
			if (!iLocal_815)
			{
				iLocal_550 = 0;
			}
			func_375();
			func_33(5);
			func_376();
			func_374(10000);
			break;
		
		case 4:
			func_373(&iLocal_49);
			if (bParam1)
			{
				iLocal_1064[2] = 2;
			}
			else if (unk_0x80FF6C016CDB0FAF(iLocal_594[1], 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_594[1], 0))
				{
					iLocal_1064[2] = 2;
				}
				else
				{
					iLocal_1064[2] = 0;
				}
			}
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[1], 0))
			{
				if (unk_0x3AF46A926C830E50(iLocal_594[1]))
				{
					unk_0xD90A910C8C028796(iLocal_594[1]);
				}
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_367();
				func_279("FINC2_OUTSIDE_DEVINS");
				func_33(19);
			}
			break;
		
		case 6:
			func_804(14, 1, 1);
			func_804(15, 1, 1);
			unk_0x1AC76C279318C67F(-2553.461f, 1814.888f, 127.7201f, -2481.379f, 1859.365f, 194.8958f);
			func_595(&uLocal_1156, 8);
			func_805(&uLocal_1156, 7, 0, "DEVIN", 0, 1);
			if (unk_0x80FF6C016CDB0FAF(iLocal_594[3], 0))
			{
				unk_0x5DC21979EC6C531F(iLocal_594[3], 1);
			}
			iLocal_1117 = (unk_0x578C4EF320340AF7() + 45000);
			break;
	}
	if (bParam1)
	{
		func_81(0, 1);
		func_81(2, 1);
		func_81(1, 1);
	}
	func_365();
	if (iParam0 == 3 || iParam0 == 2)
	{
		unk_0x34FEEAC2548C3789(0.1f);
		unk_0x53797676AD34A9AA(5);
		unk_0x40ECEB892E6BDDDB(5, 0);
		unk_0x40ECEB892E6BDDDB(3, 0);
		unk_0x40ECEB892E6BDDDB(1, 0);
		unk_0x40ECEB892E6BDDDB(7, 0);
	}
	else if (iParam0 == 5)
	{
		unk_0x34FEEAC2548C3789(0f);
		unk_0x53797676AD34A9AA(0);
		unk_0x40ECEB892E6BDDDB(5, 0);
		unk_0x40ECEB892E6BDDDB(3, 0);
		unk_0x40ECEB892E6BDDDB(1, 0);
		unk_0x40ECEB892E6BDDDB(7, 0);
	}
	else
	{
		unk_0x34FEEAC2548C3789(1f);
		unk_0x53797676AD34A9AA(5);
		unk_0x40ECEB892E6BDDDB(5, 1);
		unk_0x40ECEB892E6BDDDB(3, 1);
		unk_0x40ECEB892E6BDDDB(1, 1);
		unk_0x40ECEB892E6BDDDB(7, 1);
	}
	unk_0x5CD631BB88EEE1D1(0);
	if (bParam1)
	{
		while (unk_0x5DA78AD6801A0523())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_899)
		{
			if (func_709())
			{
				if (func_364())
				{
					switch (iParam0)
					{
						case 0:
							switch (func_199())
							{
								case 0:
									iVar12 = iLocal_594[2];
									break;
								
								case 1:
									iVar12 = iLocal_594[0];
									break;
								
								case 2:
									iVar12 = iLocal_594[1];
									break;
							}
							break;
						
						case 3:
							iVar12 = iLocal_594[0];
							break;
						
						case 2:
							iVar12 = iLocal_594[2];
							break;
						
						case 1:
						case 4:
							iVar12 = iLocal_594[1];
							break;
						
						case 6:
							iVar12 = iLocal_594[3];
							break;
					}
					iVar13 = 1;
					iVar14 = -1;
					func_362(iVar12, iVar14, iVar13);
					iLocal_899 = 1;
				}
			}
		}
		if (bParam1)
		{
			if (!bParam4)
			{
				unk_0x4C4FC7841A5FB983(0f);
			}
			if (iParam0 == 4)
			{
				if (bParam1)
				{
					SYSTEM::WAIT(0);
					if (unk_0x80FF6C016CDB0FAF(iLocal_594[1], 0))
					{
						unk_0x316E0389ADF56E20(iLocal_594[1], 20f);
					}
				}
			}
			else if (iParam0 == 0)
			{
				if (!bParam4)
				{
					if (iLocal_860)
					{
						switch (func_199())
						{
							case 2:
								if (unk_0x80FF6C016CDB0FAF(iLocal_594[1], 0))
								{
									unk_0x316E0389ADF56E20(iLocal_594[1], 20f);
								}
								break;
							
							case 0:
								if (unk_0x80FF6C016CDB0FAF(iLocal_594[2], 0))
								{
									unk_0x316E0389ADF56E20(iLocal_594[2], 20f);
								}
								break;
							
							case 1:
								if (unk_0x80FF6C016CDB0FAF(iLocal_594[0], 0))
								{
									unk_0x316E0389ADF56E20(iLocal_594[0], 20f);
								}
								break;
							}
					}
					if (func_199() == 1)
					{
						SYSTEM::WAIT(1000);
					}
				}
			}
		}
		if (iParam0 == 1)
		{
			if (bParam1)
			{
				if (!iLocal_814)
				{
					unk_0x4C4FC7841A5FB983(-80f);
				}
			}
		}
		else if (iParam0 == 2)
		{
			if (!iLocal_815)
			{
				unk_0x4C4FC7841A5FB983(35f);
				unk_0x7965943E39128B42(-10f, 1065353216);
			}
		}
		else if (iParam0 == 3)
		{
			if (!iLocal_816)
			{
				unk_0xF27E737981AFB47D(-2984.577f, 443.1154f, 14.05719f, 10000f, 1, 0, 0, 0, 0, 0);
				unk_0x49530A7462821D76(0f);
				unk_0x4C4FC7841A5FB983(-12f);
				unk_0x7965943E39128B42(-10f, 1065353216);
			}
		}
		if (iLocal_930)
		{
			func_361(iLocal_594[0]);
			unk_0x131ED02492676000("veh@bike@police@front@base");
			while (!unk_0xC614DDE265D18415("veh@bike@police@front@base"))
			{
				SYSTEM::WAIT(0);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x756D74A3EF0AB788(unk_0x9B0761B4C3EB8BC7(), "veh@bike@police@front@base", "still", 1000f, -2f, 1000, 0, 0, 0, 0, 0);
				unk_0x1322CA891C5DF18A(unk_0x9B0761B4C3EB8BC7(), 0, 0);
			}
			SYSTEM::WAIT(0);
			unk_0x9F7ADA6298BEF7E5(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1));
			unk_0x4C4FC7841A5FB983(0f);
			unk_0x7965943E39128B42(0f, 1065353216);
			unk_0x1082C25039B168F8("veh@bike@police@front@base");
			iLocal_930 = 0;
		}
	}
	iParam7 = iParam7;
	iVar15 = 0;
	iVar16 = 0;
	if (iParam0 >= 6)
	{
		iVar15 = 1;
	}
	if (((iParam0 == 1 || iParam0 == 2) || iParam0 == 3) || iParam0 == 0)
	{
		iVar16 = 1;
	}
	iLocal_1056 = iLocal_1056;
	if (func_360(iParam0))
	{
		func_288(iParam0, func_359(iParam0), iVar15, iVar16, 0, 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_1056 = 0;
		}
	}
	iLocal_1062 = unk_0x578C4EF320340AF7();
	iLocal_43 = iParam0;
}

void func_288(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!unk_0xF005CCA4263DF67F("FinaleC2", unk_0x6C5C6B207AA78253()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_98992)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_98992)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_358(1);
		if (iParam0 <= Global_98992)
		{
		}
		iVar1 = func_356(unk_0x6C5C6B207AA78253(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_111858.f_9081.f_330[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_354(iVar1);
			cVar3 = { Global_89743[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_111858.f_9081.f_99.f_205[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			unk_0xB932BB0105405712(&cVar3, uVar2, Global_98992, iParam0);
		}
		else
		{
			iVar5 = func_349(unk_0x6C5C6B207AA78253(), 1);
			if (iVar5 != -1)
			{
				Global_111858.f_18570[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_348(iVar5)}, 4);
				unk_0xB932BB0105405712(&uVar6, 0, Global_98992, iParam0);
			}
			else
			{
				iVar10 = func_347(&(Global_98955.f_3));
				if (iVar10 > -1)
				{
					Global_111858.f_24982.f_4[iVar10] = 0;
				}
			}
		}
		Global_93133 = iParam2;
		Global_98992 = iParam0;
		func_289(iParam0, sParam1, iParam4, iParam5);
		if (unk_0xF005CCA4263DF67F(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_98992)
	{
	}
}

void func_289(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_290(&Global_105407, unk_0x6C5C6B207AA78253(), iParam0, uParam1, iParam3, iParam2);
}

void func_290(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_199();
	uParam0->f_1 = func_62();
	unk_0x012D8A79244042A4(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		func_320(&(uParam0->f_2884), 0);
		func_319(unk_0x9B0761B4C3EB8BC7());
		func_312(unk_0x9B0761B4C3EB8BC7(), 0);
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_111858.f_2359.f_539.f_294[iVar1];
		if (iVar1 == func_311())
		{
			func_307(unk_0x9B0761B4C3EB8BC7(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_98680[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_98680[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_98680[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_98680[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_98680[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_98680[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_98680[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_98680[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_98680[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_98680[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_812[iVar1 /*477*/][iVar0 /*5*/] = { Global_111858.f_2359.f_539.f_298[iVar1 /*477*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 51)
		{
			uParam0->f_812[iVar1 /*477*/].f_221[iVar0 /*5*/] = { Global_111858.f_2359.f_539.f_298[iVar1 /*477*/].f_221[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD2F202166691EDB2(joaat("SP0_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD2F202166691EDB2(joaat("SP1_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/][0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/][1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_ADDON_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_5[0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_ADDON_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_5[1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_ADDON_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_5[2]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_ADDON_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_5[3]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_ADDON_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_5[4]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_0"), &(uParam0->f_2244[iVar1 /*32*/].f_16[0]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_1"), &(uParam0->f_2244[iVar1 /*32*/].f_16[1]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_2"), &(uParam0->f_2244[iVar1 /*32*/].f_16[2]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_3"), &(uParam0->f_2244[iVar1 /*32*/].f_16[3]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_4"), &(uParam0->f_2244[iVar1 /*32*/].f_16[4]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_5"), &(uParam0->f_2244[iVar1 /*32*/].f_16[5]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_6"), &(uParam0->f_2244[iVar1 /*32*/].f_16[6]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_7"), &(uParam0->f_2244[iVar1 /*32*/].f_16[7]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_8"), &(uParam0->f_2244[iVar1 /*32*/].f_16[8]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_9"), &(uParam0->f_2244[iVar1 /*32*/].f_16[9]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_10"), &(uParam0->f_2244[iVar1 /*32*/].f_16[10]), -1);
				unk_0xD2F202166691EDB2(joaat("SP2_WEAP_TINT_PURCH_11"), &(uParam0->f_2244[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_111858.f_20560.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_58891[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = { Global_111858.f_2359.f_539.f_2407[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = { Global_111858.f_2359.f_539.f_2407[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2838[iVar1 /*15*/][iVar0] = Global_111858.f_2359.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_5[iVar0] = Global_111858.f_2359.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2838[iVar1 /*15*/].f_10[iVar0] = Global_111858.f_2359.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_2345[iVar1 /*164*/][iVar0] = Global_111858.f_2359[iVar1 /*164*/][iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_4[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_8[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_12[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_16[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_20[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_24[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_28[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_32[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_36[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_40[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_44[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_48[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_52[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_56[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_60[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_64[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_68[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_72[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_76[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_80[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_84[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_88[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_92[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_96[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_100[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_104[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_108[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_112[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_116[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_120[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_124[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_128[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_132[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_136[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_140[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_144[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_148[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_152[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_156[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_2345[iVar1 /*164*/].f_160[iVar0] = Global_111858.f_2359[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	unk_0xD2F202166691EDB2(joaat("SP0_SPECIAL_ABILITY"), &(uParam0->f_2341[0]), -1);
	unk_0xD2F202166691EDB2(joaat("SP1_SPECIAL_ABILITY"), &(uParam0->f_2341[1]), -1);
	unk_0xD2F202166691EDB2(joaat("SP2_SPECIAL_ABILITY"), &(uParam0->f_2341[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_292(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	func_291(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_291(var uParam0)
{
	*uParam0 = Global_94804;
	uParam0->f_1 = Global_94805;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_292(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = unk_0x9B0761B4C3EB8BC7();
	}
	if (unk_0xAE06B9E39EBDE049(iParam2))
	{
		uParam1->f_5 = func_201(iParam2);
	}
	if (func_304(iParam2, &iVar0, iParam3, iParam5))
	{
		func_293(uParam0, uParam1, iVar0, iParam4);
	}
	else if (unk_0xAE06B9E39EBDE049(iVar0))
	{
		if (!unk_0xA59F96B50B97E63C(iVar0, 0))
		{
			if (unk_0x68AEFA37A65085FD(iVar0, joaat("skylift")) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iVar0, 0))
			{
				func_293(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_293(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (unk_0x80FF6C016CDB0FAF(iParam2, 0))
	{
		func_295(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_294(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_294(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_98955.f_22[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_295(var uParam0, int iParam1, int iParam2)
{
	func_299(iParam1, &(uParam0->f_12));
	uParam0->f_7 = func_298(iParam1, 145, 0);
	uParam0->f_11 = func_297(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_10)
		{
			uParam0->f_10 = func_296(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
		uParam0->f_6 = unk_0xEF7858F25585F853(iParam1);
		uParam0->f_3 = { unk_0x97C0B1E5FCD8E08A(iParam1) };
		if (unk_0x1037B9D45CE6B788(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_76559 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_296(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[iVar0]))
		{
			if (iParam0 == Global_75654.f_484[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_297(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 145;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			if (Global_96286[iVar0] == iParam0)
			{
				return Global_96296[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_298(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			if (Global_96286[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_96296[iVar0])
				{
					if (iParam2 == 0 || unk_0x36FE6D3220816ADA(iParam0) == func_75(iParam1, iParam2))
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

void func_299(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		func_303(uParam1);
		uParam1->f_66 = unk_0x36FE6D3220816ADA(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x6984AA4EC2FF9734(iParam0), 16);
		*uParam1 = unk_0x999BFF5D72C9701A(iParam0);
		unk_0x255499E0D27A1780(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7E545979AF9FCA10(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA681FAA57125DB66(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA3DDFC0A00C22ED3(iParam0);
		uParam1->f_67 = unk_0x16628A9DDE9875CC(iParam0);
		uParam1->f_69 = unk_0x74BE6BA308A7B62F(iParam0);
		uParam1->f_70 = unk_0xB9FAC5FDE6272EE5(iParam0);
		unk_0x7984C9503C733252(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEC53ED0C29BA8483(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8CC64DFDB61877EA(iParam0, 2))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 28);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 3))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 29);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 30);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 1))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_302(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			uParam1->f_68 = unk_0x4B3B9AC15296615C(iParam0);
		}
		if (unk_0xF9C3E2B9AA9E2294(uParam1->f_66))
		{
			if (unk_0xCA87E17B66918D00(iParam0))
			{
				switch (unk_0x38EAEB8EE9D858CF(iParam0))
				{
					case 3:
					case 0:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xBE20AB8238688965(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x5EF4A66EF7630445(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 9);
		}
		if (unk_0x93846124A64E7DEC(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 10);
		}
		if (unk_0xB41668EFA7045047(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 13);
			unk_0x2CB46B57EB6A7F5D(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3FE1C23F43A4E29E(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 12);
		}
		func_301(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xAACD889100BCBCFA(iParam0, iVar0 + 1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_300(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x62B133F8490E0B2E(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 11);
		}
		if (unk_0x871819940BD2E434(iParam0, "IgnoredByQuickSave") && unk_0x84E72BB19D4FDE12(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 27);
		}
	}
}

int func_300(int iParam0)
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

int func_301(int iParam0, var uParam1, var uParam2)
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
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				switch (unk_0x0523E2B914021FFF(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x7F8B14CBFB9813E5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_302(int iParam0)
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

void func_303(var uParam0)
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

int func_304(int iParam0, var uParam1, int iParam2, int iParam3)
{
	char* sVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			if (iParam0 == unk_0x9B0761B4C3EB8BC7())
			{
				*uParam1 = unk_0xA5D3CD332CD10EE9();
			}
			else
			{
				*uParam1 = unk_0xA5D5B1042E8F47BD(iParam0, 1);
			}
			if (unk_0xAE06B9E39EBDE049(*uParam1))
			{
				if (unk_0x80FF6C016CDB0FAF(*uParam1, 0))
				{
					if (iParam2 == 0 || unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(*uParam1, 1), unk_0x3E4D3CCC220BDFB1(iParam0, 1), 1) < 100f)
					{
						if (unk_0x68AEFA37A65085FD(*uParam1, joaat("taxi")))
						{
							if (unk_0x10D3F7E169A49C44(*uParam1, -1, 0) != iParam0 && unk_0x10D3F7E169A49C44(*uParam1, -1, 0) != 0)
							{
								return 0;
							}
						}
						if (func_305(*uParam1, func_199(), 1))
						{
							sVar0 = unk_0x6C5C6B207AA78253();
							if (!unk_0xF005CCA4263DF67F(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!unk_0x47DBF174A0CB9D55(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (unk_0x871819940BD2E434(*uParam1, "IgnoredByQuickSave"))
							{
								if (unk_0x84E72BB19D4FDE12(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (unk_0x68AEFA37A65085FD(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_305(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_306(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iVar9], 0))
		{
			if (unk_0x1362F9BE8812B12C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_307(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_201(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_310(iParam0, iVar1, &(uParam1->f_13[iVar1]), uParam1[iVar1], &(uParam1->f_26[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_309(iParam0, iVar1, &(uParam1->f_39[iVar1]), &(uParam1->f_49[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_77(iVar0))
		{
			uParam1->f_59 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_111858.f_2359.f_539[iVar0 /*65*/].f_64;
		}
		else if (unk_0x25DDB354A40FFCDB() && unk_0x36FE6D3220816ADA(iParam0) == unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_308(161, iParam3))
			{
				uParam1->f_59 = func_112(2052, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_112(752, iParam3, 0);
			}
			uParam1->f_60 = func_112(753, iParam3, 0);
			uParam1->f_61 = func_112(754, iParam3, 0);
		}
		if (unk_0x25DDB354A40FFCDB() && iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			if (func_308(161, iParam3))
			{
				uParam1->f_59 = func_112(2052, iParam3, 0);
			}
			else
			{
				uParam1->f_59 = func_112(752, iParam3, 0);
			}
		}
	}
}

int func_308(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_113(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_309(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	iVar0 = func_201(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0xA98E0435012EAF07(iParam0, iParam1);
		*uParam3 = unk_0x77A103B794FA7737(iParam0, iParam1);
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
				if (unk_0x2489BECD123A725B(iParam0) && unk_0x36A2658DF0E6FA5B(iParam0) != -1)
				{
					*uParam2 = unk_0x36A2658DF0E6FA5B(iParam0);
					*uParam3 = unk_0x4D85ED5F576DB434(iParam0);
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

void func_310(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = func_201(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = unk_0x3FB4D40A857CEA77(iParam0, iParam1);
		*uParam3 = unk_0x79AFA009D186C4FB(iParam0, iParam1);
		*uParam4 = unk_0xABAC9462CD887571(iParam0, iParam1);
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

int func_311()
{
	func_200();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_312(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_201(iParam0);
	if (func_77(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			func_313(iParam0, &(Global_111858.f_2359.f_539.f_298[iVar0 /*477*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_111858.f_2359.f_539.f_1730[iVar2 /*4*/][iVar0] = unk_0x74D9DA32014F46E1(iVar2);
				if (bParam1)
				{
					iVar1 = unk_0x6229CCADB7BCDADA();
					if (Global_111858.f_2359.f_539.f_1730[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_111858.f_2359.f_539.f_1763 = iVar2;
					}
				}
				iVar2++;
			}
			unk_0x80A60743EEF71865(unk_0x460153A63B9477BC(), &uVar3);
			if (iVar0 == 0)
			{
				STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), iVar3, 1);
			}
		}
	}
}

void func_313(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;
	int iVar10;
	struct<2> Var11;
	struct<4> Var50;
	int iVar72;
	int iVar73;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_318(iVar0);
			if (iVar3 != 0)
			{
				Var4 = unk_0x285D770154CF7612(iParam0, func_318(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = unk_0x35DEEA1DC27CF0A2(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = unk_0xC524D460B9FE4A6A(iParam0, Var4);
					Var4.f_4 = unk_0xE5457310A14F8FFC(iParam0, Var4);
					if (Var4.f_1 == -1)
					{
						if (!unk_0x0EBD989162AEAFA1(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_316(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (unk_0x0BCEF4D1482DACD2(iParam0, Var4, iVar2))
						{
							unk_0xBE20AB8238688965(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_316(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50)
		{
			uParam1->f_221[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar10 = unk_0x705B1F36F9880DD4();
		iVar9 = 0;
		while (iVar9 < iVar10)
		{
			if ((unk_0xC517E2708E06CD75(iVar9, &Var11) && !func_315(Var11.f_1)) && iVar72 < 51)
			{
				if (!unk_0x14AC70FD8926649E(Var11))
				{
					Var4 = Var11.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = unk_0x35DEEA1DC27CF0A2(iParam0, Var4);
					if (unk_0x15D88F65956DC2F6(iParam0, Var4, 0))
					{
						Var4.f_3 = unk_0xC524D460B9FE4A6A(iParam0, Var4);
						Var4.f_4 = unk_0xE5457310A14F8FFC(iParam0, Var4);
					}
					if (Var4.f_1 == -1)
					{
						if (!unk_0x0EBD989162AEAFA1(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_221[iVar72 /*5*/].f_1 = Var4.f_1;
					iVar73 = 0;
					iVar1 = 0;
					while (iVar1 < unk_0xE57085BC4B6B2D60(iVar9))
					{
						if (unk_0xCCE94EFAFE5A3D71(iVar9, iVar1, &Var50))
						{
							if (!func_314(Var50.f_3))
							{
								if (unk_0x0BCEF4D1482DACD2(iParam0, Var4, Var50.f_3))
								{
									unk_0xBE20AB8238688965(&(Var4.f_2), iVar73);
								}
								iVar73++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!unk_0x15D88F65956DC2F6(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_221[iVar72 /*5*/] = { Var4 };
				iVar72++;
			}
			iVar9++;
		}
	}
}

int func_314(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_315(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case 1470379660:
			case -1658906650:
			case 94989220:
				return 1;
				break;
			}
	}
	return 0;
}

int func_316(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var43;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_317(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x4C70B0C3D1E97438(iVar1))
					{
						if (unk_0xF4545E3991F419DA(iVar1, iVar2, &Var43))
						{
							if (!func_314(Var43.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var43.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_317(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5D2674C71F97E2ED();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x53C7411361231D87(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_318(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_319(int iParam0)
{
	int iVar0;
	
	iVar0 = func_201(iParam0);
	if (func_77(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		Global_111858.f_2359.f_539.f_294[iVar0] = unk_0x90F6D247913C41F9(iParam0);
	}
}

void func_320(var uParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	
	*uParam0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
	uParam0->f_3 = unk_0xEF7858F25585F853(unk_0x9B0761B4C3EB8BC7());
	uParam0->f_5 = unk_0x5B5B4E37C1CCA675(unk_0x9B0761B4C3EB8BC7());
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		uParam0->f_4 = unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (unk_0x7B70881748D166CD(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (unk_0xCE990E643CD9D0E5(Global_77081, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (unk_0xCE990E643CD9D0E5(Global_77081, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (unk_0xCE990E643CD9D0E5(Global_77081, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (unk_0xCE990E643CD9D0E5(Global_77081, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xC519B5898C2310B1(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_324(&iVar0))
		{
			if (func_322(iVar0, &Var1, &uVar4))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar4;
			}
		}
		else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar5 = func_199();
			if (iVar5 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_321(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_321(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xECF201F09142F9D9(Param0))
	{
		iVar0 = unk_0xC519B5898C2310B1(Param4, sParam3);
		if (!unk_0x0B1B45E748AD48BA(iVar0))
		{
			return 0;
		}
		iVar1 = unk_0x73E8970C02384D59(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_322(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_323(*uParam1, 0f, 0f, 0f, 0);
}

bool func_323(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_324(var uParam0)
{
	if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_346())
		{
			*uParam0 = func_330(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0), 6, -1, 0, 1, -1);
			if (func_329(*uParam0) && !func_325(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_325(int iParam0)
{
	return func_326(iParam0, 0, 1);
}

int func_326(int iParam0, int iParam1, bool bParam2)
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
		if (func_328() == 0)
		{
			return unk_0xCE990E643CD9D0E5(func_112(func_327(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_327(int iParam0)
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

int func_328()
{
	return Global_30968;
}

int func_329(int iParam0)
{
	return func_326(iParam0, 5, 1);
}

int func_330(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 53)
	{
		if (iParam3 == 6 || iParam3 == func_345(iVar0))
		{
			if (!bParam5 || func_344(iVar0))
			{
				fVar1 = unk_0x272784C60C397DB6(Param0, func_331(iVar0, 0), 1);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_331(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_341(Global_101058);
			break;
		
		case 46:
			if (Global_1590519 != func_261())
			{
				if (func_340(Global_1590519))
				{
					return func_333(2, 2);
				}
				else if (func_332(Global_1590519))
				{
					return func_333(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696916;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_332(int iParam0)
{
	if (iParam0 != func_261())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_333(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590519 != func_261())
	{
		if (iParam1 == 3)
		{
			if (func_334(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[Global_1590519 /*883*/].f_274.f_259, 4))
			{
				if (func_334(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Global_1590682[Global_1590519 /*883*/].f_274.f_259, 5))
			{
				if (func_334(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_334(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_339(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_339(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_337(iParam0) };
	}
	else
	{
		Var12 = { func_336(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_335(Var18, -Var0.f_3.f_2) };
	Var18 = { func_335(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x1BAE5C94E38E44FE(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_335(struct<3> Param0, float fParam3)
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

struct<6> func_336(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_337(int iParam0)
{
	return func_338(iParam0);
}

struct<6> func_338(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_339(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_340(int iParam0)
{
	if (iParam0 != func_261())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 3) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 4)) || unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_341(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_342() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_342()
{
	return func_343(unk_0x460153A63B9477BC());
}

var func_343(int iParam0)
{
	return unk_0x039D1DD18D3EA3F3(Global_2425869[iParam0 /*443*/].f_314.f_3, 28, 31);
}

int func_344(int iParam0)
{
	return func_326(iParam0, 0, 0);
}

int func_345(int iParam0)
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

bool func_346()
{
	return Global_99007.f_351 > 0;
}

int func_347(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F("BailBond1", sParam0))
	{
		return 0;
	}
	else if (unk_0xF005CCA4263DF67F("BailBond2", sParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F("BailBond3", sParam0))
	{
		return 2;
	}
	else if (unk_0xF005CCA4263DF67F("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_348(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_349(char* sParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar33;
	int iVar34;
	
	iVar33 = unk_0x856D5567211886A2(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63)
	{
		iVar0 = iVar34;
		func_350(iVar0, &sVar1);
		if (unk_0x856D5567211886A2(sVar1) == iVar33)
		{
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

void func_350(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_351(uParam1, "Abigail1", func_353(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 1:
			func_351(uParam1, "Abigail2", func_353(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 2:
			func_351(uParam1, "Barry1", func_353(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 3:
			func_351(uParam1, "Barry2", func_353(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_352(iParam0), 1, 1);
			break;
		
		case 4:
			func_351(uParam1, "Barry3", func_353(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 5:
			func_351(uParam1, "Barry3A", func_353(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 6:
			func_351(uParam1, "Barry3C", func_353(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 7:
			func_351(uParam1, "Barry4", func_353(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_352(iParam0), 0, 0);
			break;
		
		case 8:
			func_351(uParam1, "Dreyfuss1", func_353(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 9:
			func_351(uParam1, "Epsilon1", func_353(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 10:
			func_351(uParam1, "Epsilon2", func_353(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 11:
			func_351(uParam1, "Epsilon3", func_353(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 12:
			func_351(uParam1, "Epsilon4", func_353(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 13:
			func_351(uParam1, "Epsilon5", func_353(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 14:
			func_351(uParam1, "Epsilon6", func_353(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 15:
			func_351(uParam1, "Epsilon7", func_353(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 16:
			func_351(uParam1, "Epsilon8", func_353(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 17:
			func_351(uParam1, "Extreme1", func_353(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 18:
			func_351(uParam1, "Extreme2", func_353(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 19:
			func_351(uParam1, "Extreme3", func_353(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 20:
			func_351(uParam1, "Extreme4", func_353(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 21:
			func_351(uParam1, "Fanatic1", func_353(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_352(iParam0), 1, 0);
			break;
		
		case 22:
			func_351(uParam1, "Fanatic2", func_353(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_352(iParam0), 1, 0);
			break;
		
		case 23:
			func_351(uParam1, "Fanatic3", func_353(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_352(iParam0), 0, 1);
			break;
		
		case 24:
			func_351(uParam1, "Hao1", func_353(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_352(iParam0), 0, 1);
			break;
		
		case 25:
			func_351(uParam1, "Hunting1", func_353(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 26:
			func_351(uParam1, "Hunting2", func_353(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 27:
			func_351(uParam1, "Josh1", func_353(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 28:
			func_351(uParam1, "Josh2", func_353(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_352(iParam0), 1, 1);
			break;
		
		case 29:
			func_351(uParam1, "Josh3", func_353(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_352(iParam0), 1, 1);
			break;
		
		case 30:
			func_351(uParam1, "Josh4", func_353(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 31:
			func_351(uParam1, "Maude1", func_353(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 32:
			func_351(uParam1, "Minute1", func_353(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 33:
			func_351(uParam1, "Minute2", func_353(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 34:
			func_351(uParam1, "Minute3", func_353(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 35:
			func_351(uParam1, "MrsPhilips1", func_353(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 36:
			func_351(uParam1, "MrsPhilips2", func_353(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 37:
			func_351(uParam1, "Nigel1", func_353(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 38:
			func_351(uParam1, "Nigel1A", func_353(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_352(iParam0), 1, 1);
			break;
		
		case 39:
			func_351(uParam1, "Nigel1B", func_353(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_352(iParam0), 1, 1);
			break;
		
		case 40:
			func_351(uParam1, "Nigel1C", func_353(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_352(iParam0), 1, 1);
			break;
		
		case 41:
			func_351(uParam1, "Nigel1D", func_353(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_352(iParam0), 1, 1);
			break;
		
		case 42:
			func_351(uParam1, "Nigel2", func_353(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_352(iParam0), 1, 1);
			break;
		
		case 43:
			func_351(uParam1, "Nigel3", func_353(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_352(iParam0), 1, 1);
			break;
		
		case 44:
			func_351(uParam1, "Omega1", func_353(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 45:
			func_351(uParam1, "Omega2", func_353(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 46:
			func_351(uParam1, "Paparazzo1", func_353(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 47:
			func_351(uParam1, "Paparazzo2", func_353(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 48:
			func_351(uParam1, "Paparazzo3", func_353(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 49:
			func_351(uParam1, "Paparazzo3A", func_353(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 50:
			func_351(uParam1, "Paparazzo3B", func_353(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 51:
			func_351(uParam1, "Paparazzo4", func_353(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 52:
			func_351(uParam1, "Rampage1", func_353(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 54:
			func_351(uParam1, "Rampage3", func_353(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 55:
			func_351(uParam1, "Rampage4", func_353(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 56:
			func_351(uParam1, "Rampage5", func_353(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_352(iParam0), 0, 0);
			break;
		
		case 53:
			func_351(uParam1, "Rampage2", func_353(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_352(iParam0), 1, 0);
			break;
		
		case 57:
			func_351(uParam1, "TheLastOne", func_353(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 58:
			func_351(uParam1, "Tonya1", func_353(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 59:
			func_351(uParam1, "Tonya2", func_353(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 60:
			func_351(uParam1, "Tonya3", func_353(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 61:
			func_351(uParam1, "Tonya4", func_353(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		case 62:
			func_351(uParam1, "Tonya5", func_353(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_352(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_351(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_353(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_348(iParam0) };
	if (unk_0x7BCC91F3C1CF24E8(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_355(Global_111858.f_9081.f_99.f_205[10]);
			break;
		
		case 74:
		case 75:
			return func_355(Global_111858.f_9081.f_99.f_205[8]);
			break;
		
		case 84:
		case 85:
			return func_355(Global_111858.f_9081.f_99.f_205[11]);
			break;
		
		case 90:
			return func_355(Global_111858.f_9081.f_99.f_205[7]);
			break;
		
		case 93:
			return func_355(Global_111858.f_9081.f_99.f_205[9]);
			break;
	}
	return 0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_356(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x856D5567211886A2(sParam0);
	iVar1 = func_357(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_357(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_89743[iVar0 /*34*/].f_6 == iParam0)
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

void func_358(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58899[iVar0 /*3*/][0] = Global_111858.f_20560[iVar0];
		Global_58899.f_31[iVar0 /*3*/][0] = Global_111858.f_20560.f_11[iVar0];
		Global_58899.f_62[iVar0 /*3*/][0] = Global_111858.f_20560.f_22[iVar0];
		Global_58899.f_93[iVar0 /*3*/][0] = Global_111858.f_20560.f_33[iVar0];
		Global_58899.f_124[iVar0 /*3*/][0] = Global_111858.f_20560.f_44[iVar0];
		Global_58899.f_155[iVar0 /*3*/][0] = Global_111858.f_20560.f_55[iVar0];
		Global_58899.f_186[iVar0 /*3*/][0] = Global_111858.f_20560.f_66[iVar0];
		Global_58899.f_217[iVar0 /*3*/][0] = Global_111858.f_20560.f_77[iVar0];
		Global_58899.f_248[iVar0 /*3*/][0] = Global_111858.f_20560.f_88[iVar0];
		if (!bParam0)
		{
			Global_58899[iVar0 /*3*/][1] = Global_111858.f_20560[iVar0];
			Global_58899.f_31[iVar0 /*3*/][1] = Global_111858.f_20560.f_11[iVar0];
			Global_58899.f_62[iVar0 /*3*/][1] = Global_111858.f_20560.f_22[iVar0];
			Global_58899.f_93[iVar0 /*3*/][1] = Global_111858.f_20560.f_33[iVar0];
			Global_58899.f_124[iVar0 /*3*/][1] = Global_111858.f_20560.f_44[iVar0];
			Global_58899.f_155[iVar0 /*3*/][1] = Global_111858.f_20560.f_55[iVar0];
			Global_58899.f_186[iVar0 /*3*/][1] = Global_111858.f_20560.f_66[iVar0];
			Global_58899.f_217[iVar0 /*3*/][1] = Global_111858.f_20560.f_77[iVar0];
			Global_58899.f_248[iVar0 /*3*/][1] = Global_111858.f_20560.f_88[iVar0];
		}
		iVar0++;
	}
}

char* func_359(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Get to the hits";
			break;
		
		case 1:
			return "Trevor kill Steve";
			break;
		
		case 2:
			return "Michael kill Stretch";
			break;
		
		case 3:
			return "Franklin kill Cheng";
			break;
		
		case 4:
			return "Get to Devin's house";
			break;
		
		case 5:
			return "Kidnap Devin";
			break;
		
		case 6:
			return "Get to the cliff";
			break;
	}
	return "invalid";
}

int func_360(int iParam0)
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
			return 1;
			break;
	}
	return 0;
}

void func_361(int iParam0)
{
	if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iParam0)))
	{
		if (unk_0xA98E0435012EAF07(unk_0x9B0761B4C3EB8BC7(), 0) == -1)
		{
			unk_0xB28186F95B71B19D(unk_0x9B0761B4C3EB8BC7(), 0, 4096, -1);
		}
	}
}

void func_362(int iParam0, int iParam1, int iParam2)
{
	if (func_709() && func_364())
	{
		while (Global_98950 != 6)
		{
			SYSTEM::WAIT(0);
		}
		unk_0x73D73FA241EA4AB7(0);
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x17C709475B6CA386(unk_0x9B0761B4C3EB8BC7());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xAE06B9E39EBDE049(iParam0))
				{
					if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam0, 0))
						{
							unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iParam0, iParam1);
							unk_0x7965943E39128B42(0f, 1065353216);
							unk_0x4C4FC7841A5FB983(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
			}
		}
		unk_0x8249F4DC11CAA13C();
		func_363(0);
	}
}

void func_363(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&(Global_98955.f_20), 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_98955.f_20), 13);
	}
}

bool func_364()
{
	return unk_0xCE990E643CD9D0E5(Global_98955.f_20, 13);
}

void func_365()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iVar1 = iVar0;
		func_366(&iLocal_49, iVar1, 0);
		iVar0++;
	}
}

void func_366(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 != 4)
	{
		uParam0->f_8[iParam1] = iParam2;
	}
}

void func_367()
{
	func_370();
	func_368(1);
	func_723(4, 3, func_281(11), -106.61f, 1, 1, 0, 1, 0);
}

void func_368(bool bParam0)
{
	struct<3> Var0;
	float fVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar8 = 0;
	while (iVar8 < 8)
	{
		iVar6 = iVar8;
		if (!unk_0xAE06B9E39EBDE049(Local_420[iVar8 /*16*/]) || !bParam0)
		{
			bVar4 = false;
			iVar5 = 1;
			switch (iVar6)
			{
				case 0:
					iVar7 = 4;
					Var0 = { -2601.214f, 1931.047f, 166.2949f };
					fVar3 = 96.6f;
					iVar5 = 0;
					break;
				
				case 1:
					iVar7 = 5;
					Var0 = { -2584.213f, 1917.431f, 166.2966f };
					fVar3 = 0.4f;
					bVar4 = true;
					break;
				
				case 2:
					iVar7 = 4;
					Var0 = { -2568.892f, 1887.707f, 162.6965f };
					fVar3 = 143.3f;
					bVar4 = true;
					break;
				
				case 3:
					iVar7 = 4;
					Var0 = { -2600.317f, 1860.213f, 166.3041f };
					fVar3 = 128.8f;
					bVar4 = true;
					break;
				
				case 4:
					iVar7 = 5;
					Var0 = { -2626.87f, 1876.525f, 162.4264f };
					fVar3 = -160.1f;
					bVar4 = true;
					break;
				
				case 5:
					iVar7 = 4;
					Var0 = { -2606.689f, 1923.907f, 166.3839f };
					fVar3 = 4.7f;
					bVar4 = true;
					break;
				
				case 6:
					iVar7 = 4;
					Var0 = { -2624.308f, 1901.764f, 162.4265f };
					fVar3 = 40.6f;
					bVar4 = true;
					break;
				
				case 7:
					iVar7 = 4;
					Var0 = { -2613.511f, 1870.655f, 166.3036f };
					fVar3 = 127.4f;
					bVar4 = true;
					break;
			}
			if (bParam0)
			{
				Local_420[iVar8 /*16*/] = unk_0xB3116B49FE00E2F1(26, func_74(21), Var0, fVar3, 1, 1);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(Local_420[iVar8 /*16*/]))
			{
				unk_0x9B94F6169B0DAEFD(Local_420[iVar8 /*16*/]);
				unk_0x03D382CB0B44E2FC(Local_420[iVar8 /*16*/], Var0, 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(Local_420[iVar8 /*16*/], fVar3);
			}
			if (bParam0)
			{
				unk_0x4E65320BC9AD521C(Local_420[iVar8 /*16*/], 1);
				unk_0xDAE36360F0F8C1ED(Local_420[iVar8 /*16*/], 1);
				unk_0xCBA6B2B569DCAFD8(Local_420[iVar8 /*16*/], 1);
				unk_0x44EEDB6E2FB6904F(Local_420[iVar8 /*16*/], 1);
				unk_0xD3D9D7C84656DAE5(Local_420[iVar8 /*16*/], iLocal_1322);
				unk_0x92BD213E6A0E666B(Local_420[iVar8 /*16*/], func_369(iVar7), -1, iVar5, 1);
				unk_0x694113444F21E39F(Local_420[iVar8 /*16*/], 249, 1);
				unk_0x694113444F21E39F(Local_420[iVar8 /*16*/], 42, 1);
				unk_0x694113444F21E39F(Local_420[iVar8 /*16*/], 188, 1);
				unk_0x6C08F93084C348FC(Local_420[iVar8 /*16*/], 30f);
				unk_0x2D5FBCB5F3775D68(Local_420[iVar8 /*16*/]);
				unk_0xEDBD99D0CBB76A54(Local_420[iVar8 /*16*/], 0);
				unk_0xB9E43564464D9DC1(Local_420[iVar8 /*16*/]);
				unk_0x3D7F49DF8C5586D8(Local_420[iVar8 /*16*/], Var0, 8f, 0, 0);
				unk_0xF94DFEAE3DD1EE7E(Local_420[iVar8 /*16*/], 15);
				unk_0xD0C464B4E09878D6(Local_420[iVar8 /*16*/], "FINALE_MERRYWEATHER_GROUP", 0);
			}
			Local_420[iVar8 /*16*/].f_9 = 0;
			Local_420[iVar8 /*16*/].f_10 = 0;
			Local_420[iVar8 /*16*/].f_14 = -1;
			Local_420[iVar8 /*16*/].f_15 = 0f;
			if (!bVar4)
			{
				Local_420[iVar8 /*16*/].f_11 = 0;
			}
			else
			{
				Local_420[iVar8 /*16*/].f_11 = 1;
			}
			Local_420[iVar8 /*16*/].f_12 = 0;
			switch (iVar6)
			{
				case 0:
					unk_0x3964C1CAAE858CB1(Local_420[iVar8 /*16*/], "WORLD_HUMAN_SMOKING", -1, 0);
					break;
				}
		}
		iVar8++;
	}
	bLocal_919 = false;
	bLocal_920 = false;
	bLocal_921 = false;
	bLocal_917 = false;
	iLocal_918 = 0;
	if (unk_0x344C570D6F8700DF(0, 2) == 0)
	{
		bLocal_923 = true;
	}
	else
	{
		bLocal_923 = false;
	}
	iLocal_922 = 0;
	iLocal_942 = -1;
	iLocal_943 = -1;
	bLocal_874 = false;
	iLocal_1146 = -1;
	bLocal_868 = false;
	iLocal_1121 = 0;
}

int func_369(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_heavysniper");
			break;
		
		case 1:
			return joaat("weapon_pistol");
			break;
		
		case 2:
			return joaat("weapon_microsmg");
			break;
		
		case 3:
			return joaat("weapon_stickybomb");
			break;
		
		case 4:
			return joaat("weapon_carbinerifle");
			break;
		
		case 5:
			return joaat("weapon_pumpshotgun");
			break;
	}
	return joaat("weapon_unarmed");
}

void func_370()
{
	if (!unk_0xAE06B9E39EBDE049(iLocal_586))
	{
		func_371(&iLocal_586, 29, -2644.449f, 1872.912f, 159.1516f, -75.3f, 0);
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_627))
	{
		iLocal_627 = unk_0x79CC07752E7432A1(func_74(26), -2649.078f, 1872.52f, 159.1507f, 1, 1, 0);
		unk_0xE922BAA80E8F9324(iLocal_627, 120.81f);
		unk_0x1CCBC799127EA27B(iLocal_627, 250);
		unk_0x6A8F948698B360B4(iLocal_627, 1);
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_628))
	{
		iLocal_628 = unk_0x79CC07752E7432A1(func_74(27), -2649.468f, 1872.29f, 159.0007f, 1, 1, 0);
		unk_0xC82085403E46A869(iLocal_628, 65f, 0f, 120.81f, 2, 1);
		unk_0x6A8F948698B360B4(iLocal_628, 1);
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_629))
	{
		iLocal_629 = unk_0x79CC07752E7432A1(func_74(28), -2644f, 1872f, 160f, 1, 1, 0);
	}
	uLocal_1135 = unk_0xF341A134A5B8D4F6(-2645.961f, 1872.599f, 159.153f, 0f, 0f, 102.44f, 2);
	unk_0x81493F39713559B1(uLocal_1135, 1);
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_586))
	{
		unk_0x4E65320BC9AD521C(iLocal_586, 1);
		unk_0xDAE36360F0F8C1ED(iLocal_586, 1);
		unk_0xCBA6B2B569DCAFD8(iLocal_586, 1);
		unk_0x44EEDB6E2FB6904F(iLocal_586, 1);
		unk_0x45F588C0DD767737(iLocal_586, 0, 0, 0, 0);
		unk_0x45F588C0DD767737(iLocal_586, 8, 3, 0, 0);
		unk_0x45F588C0DD767737(iLocal_586, 10, 1, 0, 0);
		unk_0x45F588C0DD767737(iLocal_586, 9, 0, 0, 0);
		unk_0x45F588C0DD767737(iLocal_586, 6, 0, 0, 0);
		unk_0x45F588C0DD767737(iLocal_586, 4, 4, 0, 0);
		unk_0x45F588C0DD767737(iLocal_586, 3, 5, 0, 0);
		unk_0x45F588C0DD767737(iLocal_586, 11, 0, 0, 0);
		unk_0xDFDB9C533700BC17(iLocal_586, uLocal_1135, func_37(12), "LOUNGE_LOOP_DEV", 1000f, -8f, 1, 0, 1148846080, 0);
		unk_0x1FEB07A1AF22700F(iLocal_627, uLocal_1135, "LOUNGE_LOOP_BOX", func_37(12), 1000f, 1090519040, 0, 1148846080);
		unk_0x1FEB07A1AF22700F(iLocal_629, uLocal_1135, "LOUNGE_LOOP_TAB", func_37(12), 1000f, 1090519040, 0, 1148846080);
		unk_0x694113444F21E39F(iLocal_586, 227, 1);
		func_805(&uLocal_1156, 8, iLocal_586, "DEVIN", 0, 1);
		iLocal_579 = 0;
		iLocal_908 = 0;
		iLocal_909 = 0;
		iLocal_584 = 0;
	}
}

int func_371(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	int iVar0;
	
	if (!func_77(iParam1))
	{
		iVar0 = func_78(iParam1);
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			if (unk_0xAE06B9E39EBDE049(*iParam0))
			{
				unk_0x586DDC617E714637(iParam0);
			}
			*iParam0 = unk_0xB3116B49FE00E2F1(26, iVar0, Param2, fParam5, 0, 0);
			unk_0x6D2F52D05ED0E1F6(*iParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (unk_0x3FB4D40A857CEA77(*iParam0, 3) == 0)
				{
					unk_0x45F588C0DD767737(*iParam0, 5, 2, 0, 0);
				}
			}
			func_372(*iParam0, iParam1);
			if (bParam6)
			{
				unk_0x74528AC0906CBABE(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_372(var uParam0, int iParam1)
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
	Global_94789[(iVar0 - 3)] = uParam0;
	return 1;
}

void func_373(var uParam0)
{
	uParam0->f_43 = 0;
}

void func_374(int iParam0)
{
	if (iParam0 >= 0)
	{
		iLocal_1061 = (unk_0x578C4EF320340AF7() + iParam0);
	}
	else
	{
		iLocal_1061 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(7000, 12000));
	}
}

void func_375()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), func_369(1), 0))
		{
			unk_0x92BD213E6A0E666B(unk_0x9B0761B4C3EB8BC7(), func_369(1), 32, 0, 0);
		}
		else if (unk_0x35DEEA1DC27CF0A2(unk_0x9B0761B4C3EB8BC7(), func_369(1)) < 32)
		{
			unk_0xAF29EC41E82C599C(unk_0x9B0761B4C3EB8BC7(), func_369(1), 32, 0);
		}
	}
}

void func_376()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		iVar2 = func_198(iVar1);
		if (Global_95394[iVar1])
		{
			iLocal_552[iVar1] = 1;
			iLocal_49.f_18[iVar2] = 1;
		}
		else
		{
			iLocal_1112[iVar0] = (func_377(iVar0) - 1);
			iLocal_808[iVar0] = 0;
			iLocal_552[iVar1] = 0;
			iLocal_49.f_18[iVar2] = 0;
		}
		iVar0++;
	}
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 9;
			break;
		
		case 1:
			return 11;
			break;
		
		case 0:
			return 3;
			break;
	}
	return 0;
}

void func_378()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), func_369(0), 0))
		{
			unk_0x92BD213E6A0E666B(unk_0x9B0761B4C3EB8BC7(), func_369(0), 20, 0, 0);
		}
		else if (unk_0x35DEEA1DC27CF0A2(unk_0x9B0761B4C3EB8BC7(), func_369(0)) < 20)
		{
			unk_0xAF29EC41E82C599C(unk_0x9B0761B4C3EB8BC7(), func_369(0), 20, 0);
		}
	}
}

void func_379(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
		{
			iVar1 = 1;
			func_380(iLocal_49[iVar0], iVar1);
		}
		iVar0++;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (bParam0)
		{
			unk_0xDAE36360F0F8C1ED(unk_0x9B0761B4C3EB8BC7(), 0);
			unk_0x52090984B5C8A3E4(unk_0x9B0761B4C3EB8BC7(), 0, 0, 0, 0, 0, 0, 0, 0);
			unk_0x7D94335094269330(unk_0x9B0761B4C3EB8BC7(), 1);
		}
		unk_0xBF0DD7DAFAF15103(unk_0x9B0761B4C3EB8BC7(), 1);
		unk_0x911BA6A7B46C75BA(unk_0x9B0761B4C3EB8BC7(), 0);
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 211, 0);
		if (iLocal_43 < 0)
		{
			unk_0x3A6EAFD8FE032E2E(unk_0x9B0761B4C3EB8BC7(), 200);
			unk_0x697DA7132EE43ABC(unk_0x9B0761B4C3EB8BC7(), 200, 0);
		}
	}
}

void func_380(int iParam0, int iParam1)
{
	unk_0x4E65320BC9AD521C(iParam0, 1);
	unk_0xD3D9D7C84656DAE5(iParam0, 1862763509);
	unk_0x0DC39BE87E4C5599(iParam0, 0);
	unk_0xCBA6B2B569DCAFD8(iParam0, 1);
	unk_0xDAE36360F0F8C1ED(iParam0, iParam1);
	unk_0x4F3C4F457D44BB0F(iParam0, 1, 1);
	unk_0x389E871B0B67CCCC(iParam0, 0);
	unk_0x694113444F21E39F(iParam0, 188, 1);
	unk_0x694113444F21E39F(iParam0, 208, 1);
	unk_0x911BA6A7B46C75BA(iParam0, 3);
	unk_0xBF0DD7DAFAF15103(iParam0, 0);
	unk_0x642738D0DCA36EBA(iParam0, 1);
	unk_0x3A6EAFD8FE032E2E(iParam0, 10000);
	unk_0x697DA7132EE43ABC(iParam0, 10000, 0);
}

void func_381()
{
	fLocal_1022 = 0f;
	fLocal_1023 = 0f;
	iLocal_850 = 0;
	iLocal_893 = 0;
}

void func_382()
{
}

void func_383(int iParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				func_174(iParam0, 12, 27, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				break;
			
			case 2:
				func_174(iParam0, 12, 46, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				break;
			}
	}
}

void func_384(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	
	switch (iParam0)
	{
		case 0:
			if (iLocal_860)
			{
				if (func_199() == 1)
				{
					Var0 = { func_712(1) };
					fVar9 = func_711(1);
				}
				else
				{
					Var0 = { func_592(1) };
					fVar9 = 0f;
				}
			}
			else
			{
				Var0 = { func_281(3) };
				fVar9 = 144.89f;
			}
			if (iLocal_860)
			{
				if (func_199() == 0)
				{
					Var3 = { func_712(0) };
					fVar10 = func_711(0);
				}
				else
				{
					Var3 = { func_592(0) };
					fVar10 = 0f;
				}
			}
			else
			{
				Var3 = { func_592(0) };
				fVar10 = 0f;
			}
			if (iLocal_860)
			{
				if (func_199() == 2)
				{
					Var6 = { func_712(2) };
					fVar11 = func_711(2);
				}
				else
				{
					Var6 = { func_592(2) };
					fVar11 = 0f;
				}
			}
			else
			{
				Var6 = { func_592(2) };
				fVar11 = 0f;
			}
			if (!Global_95394[1])
			{
				func_723(iParam0, 0, Var0, fVar9, 0, 1, 0, 0, !iLocal_860);
				if (func_199() != 1)
				{
					unk_0x6A8F948698B360B4(iLocal_594[0], 1);
				}
			}
			if (!Global_95394[0])
			{
				func_723(iParam0, 2, Var3, fVar10, 0, 1, 0, 1, 1);
				if (func_199() != 0)
				{
					unk_0x6A8F948698B360B4(iLocal_594[2], 1);
				}
			}
			func_723(iParam0, 1, Var6, fVar11, 0, 1, 0, 1, 1);
			if (func_199() != 2)
			{
				unk_0x6A8F948698B360B4(iLocal_594[1], 1);
			}
			break;
		
		case 1:
		case 3:
		case 2:
			if (!Global_95394[1])
			{
				if (iParam0 == 3)
				{
					func_723(iParam0, 0, func_281(6), 139.04f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_723(iParam0, 0, func_592(1), 0f, 0, 1, 0, 1, 1);
					unk_0x6A8F948698B360B4(iLocal_594[0], 1);
				}
			}
			if (!Global_95394[0])
			{
				if (iParam0 == 2)
				{
					func_723(iParam0, 2, func_281(10), 139.38f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_723(iParam0, 2, func_592(0), 0f, 0, 1, 0, 1, 1);
					unk_0x6A8F948698B360B4(iLocal_594[2], 1);
				}
			}
			if (!Global_95394[2])
			{
				if (iParam0 == 1)
				{
					func_723(iParam0, 1, func_281(7), 226.07f, 0, 1, 0, 1, 1);
				}
				else
				{
					func_723(iParam0, 1, func_592(2), 0f, 0, 1, 0, 1, 1);
					unk_0x6A8F948698B360B4(iLocal_594[1], 1);
				}
			}
			else
			{
				func_723(iParam0, 1, func_592(2), 226.07f, 0, 1, 0, 1, 1);
				unk_0x6A8F948698B360B4(iLocal_594[1], 1);
			}
			break;
		
		case 4:
			func_723(iParam0, 1, func_281(9), -24.33f, 0, 1, 0, 1, 1);
			break;
		
		case 5:
			func_723(iParam0, 1, func_281(8), 71.08f, 0, 1, 0, 1, 1);
			break;
		
		case 6:
			func_723(iParam0, 1, func_281(8), 71.08f, 0, 0, 0, 1, 1);
			if (!bLocal_774)
			{
				func_723(iParam0, 3, func_281(11), -106.61f, 1, 1, 0, 1, 1);
			}
			else
			{
				func_723(iParam0, 3, func_281(17), 9.1f, 1, 1, 0, 1, 1);
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			switch (func_199())
			{
				case 1:
					if (!Global_95394[0])
					{
						func_386(0, iParam0, 0f, 0f, 0f, 0f, iLocal_594[2], -1, 0);
					}
					else
					{
						func_805(&uLocal_1156, 0, 0, "MICHAEL", 0, 1);
					}
					if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_594[0], 0))
					{
						unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), 1, 0, 0, 1);
						unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[0], -1);
					}
					func_386(2, iParam0, 0f, 0f, 0f, 0f, iLocal_594[1], -1, 0);
					func_385();
					if (!bParam1)
					{
						func_361(iLocal_594[0]);
					}
					break;
				
				case 0:
					unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[2], -1);
					if (!Global_95394[1])
					{
						func_386(1, iParam0, 0f, 0f, 0f, 0f, iLocal_594[0], -1, 0);
					}
					else
					{
						func_805(&uLocal_1156, 2, 0, "FRANKLIN", 0, 1);
					}
					func_386(2, iParam0, 0f, 0f, 0f, 0f, iLocal_594[1], -1, 0);
					func_385();
					if (!bParam1)
					{
						func_361(iLocal_594[2]);
					}
					break;
				
				case 2:
					if (!Global_95394[0])
					{
						func_386(0, iParam0, 0f, 0f, 0f, 0f, iLocal_594[2], -1, 0);
					}
					else
					{
						func_805(&uLocal_1156, 0, 0, "MICHAEL", 0, 1);
					}
					unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[1], -1);
					if (!Global_95394[1])
					{
						func_386(1, iParam0, 0f, 0f, 0f, 0f, iLocal_594[0], -1, 0);
					}
					else
					{
						func_805(&uLocal_1156, 2, 0, "FRANKLIN", 0, 1);
					}
					func_385();
					if (!bParam1)
					{
						func_361(iLocal_594[1]);
					}
					break;
			}
			break;
		
		case 1:
			unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[1], -1);
			if (!Global_95394[0])
			{
				func_386(0, iParam0, 0f, 0f, 0f, 0f, iLocal_594[2], -1, 0);
			}
			else
			{
				func_805(&uLocal_1156, 0, 0, "MICHAEL", 0, 1);
			}
			if (!Global_95394[1])
			{
				func_386(1, iParam0, 0f, 0f, 0f, 0f, iLocal_594[0], -1, 0);
			}
			else
			{
				func_805(&uLocal_1156, 2, 0, "FRANKLIN", 0, 1);
			}
			func_385();
			func_361(iLocal_594[1]);
			break;
		
		case 2:
			unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[2], -1);
			if (!Global_95394[1])
			{
				func_386(1, iParam0, 0f, 0f, 0f, 0f, iLocal_594[0], -1, 0);
			}
			else
			{
				func_805(&uLocal_1156, 2, 0, "FRANKLIN", 0, 1);
			}
			func_386(2, iParam0, 0f, 0f, 0f, 0f, iLocal_594[1], -1, 0);
			func_385();
			func_361(iLocal_594[2]);
			break;
		
		case 3:
			unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[0], -1);
			if (!Global_95394[0])
			{
				func_386(0, iParam0, 0f, 0f, 0f, 0f, iLocal_594[2], -1, 0);
			}
			else
			{
				func_805(&uLocal_1156, 0, 0, "MICHAEL", 0, 1);
			}
			func_386(2, iParam0, 0f, 0f, 0f, 0f, iLocal_594[1], -1, 0);
			func_385();
			func_361(iLocal_594[0]);
			break;
		
		case 4:
			unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[1], -1);
			func_361(iLocal_594[1]);
			break;
		
		case 5:
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), -2553.961f, 1910.755f, 167.9142f, 1, 0, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 57.3f);
			func_361(iLocal_594[1]);
			break;
		
		case 6:
			unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_594[3], -1);
			break;
	}
}

void func_385()
{
	int iVar0;
	
	iVar0 = func_235();
	if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
	{
		if (!unk_0x2489BECD123A725B(iVar0))
		{
			unk_0x5CE854F55362A814(iVar0, 6, 1);
			unk_0xE466EB4D51A2C51A(iVar0, 0);
		}
	}
}

void func_386(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = func_198(iParam0);
	if (!unk_0xAE06B9E39EBDE049(iLocal_49[iVar0]))
	{
		if (!unk_0xA59F96B50B97E63C(iParam6, 0))
		{
			while (!func_387(&(iLocal_49[iVar0]), iParam0, iParam6, iParam7, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_642(&(iLocal_49[iVar0]), iParam0, Param2, fParam5, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		if (bParam8)
		{
			bVar1 = false;
			while (!bVar1)
			{
				SYSTEM::WAIT(0);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
				{
					if (unk_0x51E339346E2220A4(iLocal_49[iVar0]))
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
	{
		iVar2 = 0;
		iVar2 = 1;
		func_380(iLocal_49[iVar0], iVar2);
		switch (iParam0)
		{
			case 0:
				func_805(&uLocal_1156, 0, iLocal_49[iVar0], "MICHAEL", 0, 1);
				break;
			
			case 2:
				func_805(&uLocal_1156, 1, iLocal_49[iVar0], "TREVOR", 0, 1);
				break;
			
			case 1:
				func_805(&uLocal_1156, 2, iLocal_49[iVar0], "FRANKLIN", 0, 1);
				break;
		}
		func_383(iLocal_49[iVar0], iParam0, iParam1);
	}
}

int func_387(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	
	if (func_77(iParam1))
	{
		iVar0 = func_80(iParam1);
		unk_0x78FCB2E22C41B9D5(iVar0);
		if (unk_0x7D167B9A0CCDA347(iVar0))
		{
			if (unk_0xAE06B9E39EBDE049(*uParam0))
			{
				unk_0x586DDC617E714637(uParam0);
			}
			if (unk_0xAE06B9E39EBDE049(iParam2) && unk_0x80FF6C016CDB0FAF(iParam2, 0))
			{
				*iParam0 = unk_0x6A7A2C83BD302BA4(iParam2, 26, iVar0, uParam3, 1, 1);
				func_591(*iParam0, iParam1, bParam5);
				unk_0x60E0A015C7679945(*iParam0, 0, 0);
				func_584(*iParam0);
				func_573(*iParam0, 1, 0);
				func_572(*iParam0);
				func_569(*iParam0);
				func_389(*iParam0, bParam6);
				func_388(*iParam0);
				if (bParam4)
				{
					unk_0x74528AC0906CBABE(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_388(int iParam0)
{
	int iVar0;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96324[iVar0]) && Global_96324[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xAE06B9E39EBDE049(Global_96324[iVar0]))
		{
			Global_96324[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_389(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_201(iParam0);
	if (func_568(iVar0))
	{
		func_567(iVar0, 0);
		func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_393(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_391(iParam0))
		{
			func_567(iVar0, 0);
			func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_393(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_111858.f_9081.f_99.f_58[120] && !Global_111858.f_9081.f_99.f_58[122])
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_111858.f_9081.f_99.f_58[121] = 1;
				return 1;
			}
			if (Global_111858.f_9081.f_99.f_58[123])
			{
				Global_111858.f_9081.f_99.f_58[123] = 0;
				if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
				{
					if (func_97(iParam0, 3, 169))
					{
						func_174(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_97(iParam0, 12, 6))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 12, 17))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 17))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 20))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 20))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 21))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 21))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 22))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 22))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 11))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 12, 10))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 12, 50))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 14, 59))
			{
				func_174(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_97(iParam0, 8, 22))
			{
				func_174(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_97(iParam0, 12, 14))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_97(iParam0, 12, 13))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 13))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 14))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 14))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 15))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 15))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 4))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 12, 3))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 14, 82))
			{
				func_174(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_97(iParam0, 8, 76))
			{
				func_174(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_97(iParam0, 12, 1))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_97(iParam0, 12, 12))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 12, 15))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_97(iParam0, 3, 71))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 17))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 17))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 18))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 18))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 19))
			{
				if (!func_390(unk_0x36FE6D3220816ADA(iParam0), 12, 19))
				{
					func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_97(iParam0, 12, 7))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 12, 6))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_97(iParam0, 14, 88))
			{
				func_174(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_97(iParam0, 8, 17))
			{
				func_174(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_97(iParam0, 12, 11))
			{
				func_174(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_390(int iParam0, int iParam1, int iParam2)
{
	Global_76647[1 /*14*/] = { func_106(iParam0, iParam1, iParam2, -1) };
	return unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1);
}

bool func_391(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x36FE6D3220816ADA(iParam0);
	iVar0 = func_98(iParam0, 4);
	return func_392(iVar1, 4, iVar0);
}

int func_392(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_393(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_201(iParam0);
		if (func_77(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_178(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					func_566(iVar0);
					func_400(iParam0, &(Global_111858.f_2359.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			func_307(iParam0, &Var2, 1, -1);
			Global_98680[iVar0 /*65*/] = { Var2 };
			if (iParam0 == unk_0x9B0761B4C3EB8BC7())
			{
				func_395();
			}
			if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) != unk_0x856D5567211886A2("clothes_shop_sp") || (unk_0x7B70881748D166CD(joaat("lester1")) == 0 && unk_0x7B70881748D166CD(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_24(0) && !func_24(1)) && !func_24(2)) && !func_24(3)) && !func_24(4)) && !func_24(9)) && !func_24(10)))
				{
					Global_111858.f_2359.f_539[iVar0 /*65*/] = { Var2 };
					Global_111858.f_2359.f_539.f_2391[iVar0] = func_394(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111858.f_2359.f_539.f_204[iVar67 /*4*/][iVar0] = func_98(iParam0, func_95(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_111858.f_2359.f_539.f_204[iVar67 /*4*/][iVar0] = func_98(iParam0, func_95(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_111858.f_9081.f_99.f_58[121])
						{
							Global_111858.f_9081.f_99.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_394(int iParam0)
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = unk_0xD6A0115FA2F3F0EC(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + unk_0x7CF1CA3F6DB5685F(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = unk_0x99134D420E2DAA74(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + unk_0x2CB217E5FD6878E9(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_395()
{
	struct<50> Var0;
	
	if ((unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) || !func_77(func_199())) || !func_397())
	{
		return;
	}
	Var0 = 12;
	Var0.f_13 = 12;
	Var0.f_26 = 12;
	Var0.f_39 = 9;
	Var0.f_49 = 9;
	func_307(unk_0x9B0761B4C3EB8BC7(), &Var0, 1, -1);
	func_396(1306, Var0[0], -1, 1);
	func_396(1307, Var0[1], -1, 1);
	func_396(1308, Var0[2], -1, 1);
	func_396(1309, Var0[3], -1, 1);
	func_396(1310, Var0[4], -1, 1);
	func_396(1311, Var0[5], -1, 1);
	func_396(1312, Var0[6], -1, 1);
	func_396(1313, Var0[7], -1, 1);
	func_396(1314, Var0[8], -1, 1);
	func_396(1315, Var0[9], -1, 1);
	func_396(1316, Var0[10], -1, 1);
	func_396(1317, Var0[11], -1, 1);
	func_396(1318, Var0.f_13[0], -1, 1);
	func_396(1319, Var0.f_13[1], -1, 1);
	func_396(1320, Var0.f_13[2], -1, 1);
	func_396(1321, Var0.f_13[3], -1, 1);
	func_396(1322, Var0.f_13[4], -1, 1);
	func_396(1323, Var0.f_13[5], -1, 1);
	func_396(1324, Var0.f_13[6], -1, 1);
	func_396(1325, Var0.f_13[7], -1, 1);
	func_396(1326, Var0.f_13[8], -1, 1);
	func_396(1327, Var0.f_13[9], -1, 1);
	func_396(1328, Var0.f_13[10], -1, 1);
	func_396(1329, Var0.f_13[11], -1, 1);
	func_396(1330, Var0.f_26[0], -1, 1);
	func_396(1331, Var0.f_26[1], -1, 1);
	func_396(1332, Var0.f_26[2], -1, 1);
	func_396(1333, Var0.f_26[3], -1, 1);
	func_396(1334, Var0.f_26[4], -1, 1);
	func_396(1335, Var0.f_26[5], -1, 1);
	func_396(1336, Var0.f_26[6], -1, 1);
	func_396(1337, Var0.f_26[7], -1, 1);
	func_396(1338, Var0.f_26[8], -1, 1);
	func_396(1339, Var0.f_26[9], -1, 1);
	func_396(1340, Var0.f_26[10], -1, 1);
	func_396(1341, Var0.f_26[11], -1, 1);
	func_396(1342, Var0.f_39[0], -1, 1);
	func_396(1343, Var0.f_39[1], -1, 1);
	func_396(1344, Var0.f_39[2], -1, 1);
	func_396(1345, Var0.f_39[3], -1, 1);
	func_396(1346, Var0.f_39[4], -1, 1);
	func_396(1347, Var0.f_39[5], -1, 1);
	func_396(1348, Var0.f_39[6], -1, 1);
	func_396(1349, Var0.f_39[7], -1, 1);
	func_396(1350, Var0.f_39[8], -1, 1);
	func_396(1351, Var0.f_49[0], -1, 1);
	func_396(1352, Var0.f_49[1], -1, 1);
	func_396(1353, Var0.f_49[2], -1, 1);
	func_396(1354, Var0.f_49[3], -1, 1);
	func_396(1355, Var0.f_49[4], -1, 1);
	func_396(1356, Var0.f_49[5], -1, 1);
	func_396(1357, Var0.f_49[6], -1, 1);
	func_396(1358, Var0.f_49[7], -1, 1);
	func_396(1359, Var0.f_49[8], -1, 1);
	func_396(1360, func_199(), -1, 1);
	unk_0xBD9D9E72ABB288E4(joaat("CLO_STORED_INITIAL"), 1, 1);
	Global_111858.f_2359.f_539.f_4315 = 1;
}

var func_396(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_57();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x169039D5869899DA((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x33259517529FA9DD((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x7F2F9520C57D9D66((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xCCD6EB3D51BA0D9E((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0x9972E0F3B8651981(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_397()
{
	if (func_399() && func_398(0))
	{
		return 1;
	}
	return 0;
}

var func_398(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_399()
{
	return func_398(func_57() + 1);
}

void func_400(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0) || iParam5)
	{
		iVar0 = func_201(iParam0);
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_13[iVar3] != 0 && uParam1->f_13[iVar3] >= unk_0xD6A0115FA2F3F0EC(iParam0, iVar3))
					{
						uParam1->f_13[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= unk_0x7CF1CA3F6DB5685F(iParam0, iVar3, uParam1->f_13[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				unk_0x45F588C0DD767737(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
				{
					if (uParam1->f_39[iVar3] >= unk_0x99134D420E2DAA74(iParam0, iVar3))
					{
						uParam1->f_39[iVar3] = -1;
					}
					else if (uParam1->f_49[iVar3] >= unk_0x2CB217E5FD6878E9(iParam0, iVar3, uParam1->f_39[iVar3]))
					{
						uParam1->f_49[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				unk_0x78024EFD31A7FAD4(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				unk_0x4FCABD4082A6C808(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_77(iVar0))
		{
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (func_85(iParam0, iVar1, &iVar2, 0))
			{
				func_174(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_111858.f_2359.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_83(iParam0, iVar1, &iVar2))
			{
				func_174(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (unk_0x25DDB354A40FFCDB() && unk_0x36FE6D3220816ADA(iParam0) == unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			bVar4 = func_564(iParam0);
			func_196(753, uParam1->f_60, Global_76644, 1, 0);
			func_196(754, uParam1->f_61, Global_76644, 1, 0);
			iVar5 = func_99(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			if (iVar5 != -99)
			{
				iVar6 = -99;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_562(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_560(iVar5);
				}
				if (iVar6 != -99 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_403(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_99(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_403(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_190(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_403(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_76644, bVar4, 0, 0);
			}
		}
		if (unk_0x25DDB354A40FFCDB() && iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			iVar9 = uParam1->f_59;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_562(iVar9);
			}
			else
			{
				iVar9 = func_560(iVar9);
			}
			func_196(752, iVar9, Global_76644, 1, 0);
			func_196(2052, iVar9, Global_76644, 1, 0);
			func_401(161, 1, -1, 1);
		}
		if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
		{
			iVar10 = unk_0x21A69BE7599CD8B7(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1));
			iVar11 = unk_0xEAF476EEF924D2C9(iParam0, 1, unk_0xA98E0435012EAF07(iParam0, 1), unk_0x77A103B794FA7737(iParam0, 1));
			if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0") || iVar10 == joaat("DLC_MP_ARENA_F_BERD_13_0"))
			{
				if (!unk_0x4D0432E34C5996D9(iVar11, joaat("ARENA_DRAW_0"), 1))
				{
					unk_0x8BC52CDFCD2A4534(&Var12);
					if (iVar10 == joaat("DLC_MP_ARENA_M_BERD_13_0"))
					{
						unk_0xD2FB5DC35CA67C53(joaat("DLC_MP_ARENA_M_PEYES_0_0"), &Var12);
					}
					else
					{
						unk_0xD2FB5DC35CA67C53(joaat("DLC_MP_ARENA_F_PEYES_0_0"), &Var12);
					}
					unk_0x78024EFD31A7FAD4(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar11, joaat("ARENA_DRAW_0"), 1))
			{
				unk_0x4FCABD4082A6C808(iParam0, 1);
			}
		}
	}
}

void func_401(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_402())
	{
		iVar0 = Global_2587834[iParam0 /*3*/][func_113(iParam2)];
		if (iVar0 != 0)
		{
			unk_0xBD9D9E72ABB288E4(iVar0, iParam1, iParam3);
		}
	}
}

int func_402()
{
	return 1;
	return 0;
}

int func_403(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
		Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
		if (!func_197(iParam3))
		{
			Global_76645 = (Global_76645 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_76645 > 1)
		{
		}
		else
		{
			func_525(iVar5, iParam1, iParam2, 1);
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
			uVar15 = { func_93(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_76647[1 /*14*/] = { func_527(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x45F588C0DD767737(iParam0, func_86(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_86(iVar0)));
					}
					else
					{
						unk_0x45F588C0DD767737(iParam0, func_86(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
					}
					if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
					{
						func_525(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_76647[1 /*14*/] = { func_527(iVar5, iVar0, uVar15[iVar0], -1) };
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
								uVar32 = { func_87(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_76647[1 /*14*/] = { func_527(iVar5, 14, uVar32[iVar1], -1) };
								func_188(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
								if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
								{
									func_525(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0x45F588C0DD767737(iParam0, func_86(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_86(iVar0)));
								}
								else
								{
									unk_0x45F588C0DD767737(iParam0, func_86(iVar0), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_403(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
							{
								func_525(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_76647[1 /*14*/] = { func_527(iVar5, iVar0, func_524(iParam0, iVar0, -1), -1) };
				if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 3))
				{
					uVar42 = { func_93(iVar5, 0) };
					func_403(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x45F588C0DD767737(iParam0, 1, unk_0x3FB4D40A857CEA77(iParam0, 1), unk_0x79AFA009D186C4FB(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_523();
			if (iVar59 != -1)
			{
				func_520(iVar59, 0, iParam10);
			}
			func_518(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_87(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_76647[1 /*14*/] = { func_527(iVar5, 14, uVar60[iVar1], -1) };
			func_188(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
			if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
			{
				func_525(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_76645 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_516(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_403(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_188(iParam0, Global_76647[1 /*14*/].f_12, Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4);
		if (unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 1))
		{
			func_525(iVar5, iParam1, iParam2, 1);
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
					func_403(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_76647[1 /*14*/].f_12 == 0)
		{
			func_510(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_516(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_403(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_516(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_403(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_86(iParam1);
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
				iVar75 = func_98(iParam0, 11);
				iVar76 = func_98(iParam0, 8);
				iVar77 = func_98(iParam0, 4);
				iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
				if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar74 = func_102(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar74 = func_102(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_ROBE"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("MORPH_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("GORKA_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_98(iParam0, 8);
					}
				}
				iVar78 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
				if (unk_0x4D0432E34C5996D9(iVar78, joaat("GLOVES"), 0))
				{
					iVar79 = func_509(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_516(iParam0, iVar5, 11, iVar75, 3, 0);
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
							iVar74 = func_102(iVar5, iParam2, 11, 4);
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
							if (func_508(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x4D0432E34C5996D9(func_102(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar75 = func_98(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_102(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0))
					{
						iVar81 = func_506(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
						if (iVar81 != -99)
						{
							func_403(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_505(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_102(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_102(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_505(iVar5, iVar75, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && (unk_0x4D0432E34C5996D9(iVar74, joaat("VEST"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && ((((((((unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_5"), 0) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_11"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar74, -872449705, 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("APART_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar74, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar82 = func_504(iParam0, iParam2);
							iVar83 = func_506(iVar5, iVar75, iParam2, unk_0x79AFA009D186C4FB(iParam0, 11));
							if (iVar83 != -99)
							{
								func_403(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								func_403(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar84 = func_503(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_527(iVar5, 11, iVar84, -1) };
									iVar83 = func_506(iVar5, iVar84, iParam2, Global_76647[1 /*14*/].f_4);
									iVar85 = func_102(iVar5, iParam2, 11, 3);
									if ((iVar83 == -99 || unk_0x4D0432E34C5996D9(iVar85, joaat("BIKER_VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar85, 1170568373, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_102(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_403(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_76647[1 /*14*/] = { func_527(iVar5, 11, iVar75, -1) };
						iVar86 = Global_76647[1 /*14*/].f_3;
						Global_76647[1 /*14*/] = { func_527(iVar5, 11, iParam2, -1) };
						iVar87 = Global_76647[1 /*14*/].f_3;
						if (iVar86 != iVar87)
						{
							iVar89 = func_504(iParam0, iParam2);
							Global_76647[1 /*14*/] = { func_527(iVar5, 8, iVar76, -1) };
							iVar88 = Global_76647[1 /*14*/].f_4;
							iVar90 = func_502(iVar5, iVar76, iVar88);
							if (iVar89 != -99 && (iParam0 == unk_0x9B0761B4C3EB8BC7() || iParam0 == Global_4268543))
							{
								iVar91 = iVar89;
							}
							else if (iVar90 == -99)
							{
								iVar91 = iVar76;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar92 = func_102(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_501(iVar92) == 6) || unk_0x4D0432E34C5996D9(iVar92, joaat("BIKER_VEST"), 0))
									{
										iVar90 = func_503(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_527(iVar5, 11, iVar90, -1) };
										iVar91 = func_506(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar76 == 32 || iVar76 == 33) || iVar76 == 119))
								{
									if (!unk_0x4D0432E34C5996D9(func_102(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar90 = func_503(iVar5, 11, -1);
										Global_76647[1 /*14*/] = { func_527(iVar5, 11, iVar90, -1) };
										iVar91 = func_506(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
									}
								}
								iVar93 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar93 = func_102(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar93 = func_102(iVar5, iVar76, 8, 4);
								}
								if (unk_0x4D0432E34C5996D9(iVar93, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar90 = func_503(iVar5, 11, -1);
									Global_76647[1 /*14*/] = { func_527(iVar5, 11, iVar90, -1) };
									iVar91 = func_506(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar91 = func_506(iVar5, iVar90, iParam2, iVar88);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_102(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_500(iVar5, func_98(iParam0, 4), iVar90))
										{
											iVar91 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x4D0432E34C5996D9(func_102(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_500(iVar5, func_98(iParam0, 4), iVar90))
										{
											iVar91 = 48;
										}
									}
								}
							}
							if (iVar91 != -99)
							{
								func_403(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar90 = func_503(iVar5, 11, -1);
								Global_76647[1 /*14*/] = { func_527(iVar5, 11, iVar90, -1) };
								iVar91 = func_506(iVar5, iVar90, iParam2, Global_76647[1 /*14*/].f_4);
								if (iVar91 == -99)
								{
									iVar91 = 240;
								}
								func_403(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_403(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_497(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x45F588C0DD767737(iParam0, 10, 0, 0, unk_0xABAC9462CD887571(iParam0, 10));
				}
			}
			func_518(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_509(iVar5, func_524(iParam0, 8, -1), iParam2, func_524(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_112(2152, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_112(2159, iParam10, 0);
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
						iVar94 = func_562(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar94 = func_560(iParam2);
					}
					if (iVar94 != -99 && iParam2 != iVar94)
					{
						iParam2 = iVar94;
					}
				}
				func_446(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar95 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar95, joaat("GLOVES"), 0))
			{
				iVar96 = func_98(iParam0, 11);
				iVar97 = func_98(iParam0, 4);
				iVar98 = func_509(iVar5, iParam2, iVar96, iVar97);
				if (iVar98 == -99)
				{
					iVar98 = func_516(iParam0, iVar5, 11, iVar96, 3, 0);
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
						iVar99 = func_102(iVar5, iParam2, 11, 4);
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
						if (func_508(iVar5, iVar98, iVar100) == iVar95)
						{
							iVar11 = iVar100;
							iVar12 = unk_0x79AFA009D186C4FB(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
			func_518(iParam0, iParam1, iParam2, iParam6, 0);
			iVar101 = func_98(iParam0, 11);
			if (func_505(iVar5, iVar101, -1))
			{
				iVar102 = func_502(iVar5, iParam2, Global_76647[1 /*14*/].f_4);
				func_497(iVar5, iVar102);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_509(iVar5, iParam2, func_98(iParam0, 11), func_98(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar103 = func_98(iParam0, 7);
				if (!func_443(iVar5, iVar103, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x45F588C0DD767737(iParam0, func_86(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar104 = func_112(2099, iParam10, 0);
				iVar105 = func_112(2100, iParam10, 0);
				iVar106 = func_112(2101, iParam10, 0);
				uVar107 = func_442(135, iParam10);
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
				func_426(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar109 = func_98(iParam0, 11);
			iVar110 = func_98(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_102(iVar5, iVar109, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_500(iVar5, iParam2, func_502(iVar5, iVar110, 0)))
					{
						func_403(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(func_102(iVar5, iVar109, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_500(iVar5, iParam2, func_502(iVar5, iVar110, 0)))
					{
						func_403(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_76647[1 /*14*/] = { func_527(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_509(iVar5, func_98(iParam0, 8), func_98(iParam0, 11), iParam2);
			}
			iVar111 = unk_0x21A69BE7599CD8B7(iParam0, 3, unk_0x3FB4D40A857CEA77(iParam0, 3), 0);
			if (unk_0x4D0432E34C5996D9(iVar111, joaat("GLOVES"), 0))
			{
				iVar112 = func_509(iVar5, iVar110, iVar109, iParam2);
				if (iVar112 == -99)
				{
					iVar112 = func_516(iParam0, iVar5, 11, iVar109, 3, 0);
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
						iVar113 = func_102(iVar5, iParam2, 11, 4);
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
						if (func_508(iVar5, iVar112, iVar114) == iVar111)
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
			unk_0x45F588C0DD767737(iParam0, func_86(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, unk_0xABAC9462CD887571(iParam0, func_86(iParam1)));
		}
		else
		{
			unk_0x45F588C0DD767737(iParam0, func_86(iParam1), Global_76647[1 /*14*/].f_3, Global_76647[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_76645 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_516(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_403(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_509(iVar5, iVar3, func_98(iParam0, 11), func_98(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_516(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_403(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_425(iParam0))
				{
					iVar115 = func_423(iParam0, iVar5, iParam1, iParam2);
					if (iVar115 > 0)
					{
						iVar115 = (iVar115 + unk_0x79AFA009D186C4FB(iParam0, 9));
						if (!func_422(iParam0, 9, iVar115))
						{
							func_403(iParam0, 9, iVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_403(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
					if (unk_0x4D0432E34C5996D9(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_403(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar116 = func_112(2041, -1, 0);
				if (unk_0x3FB4D40A857CEA77(iParam0, 5) != 0)
				{
					unk_0x45F588C0DD767737(iParam0, 5, func_416(iParam0, iVar116), func_415(iParam0, iVar116), func_414(iParam0, iVar116));
				}
				if (iParam0 == unk_0x9B0761B4C3EB8BC7())
				{
					unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_416(unk_0x9B0761B4C3EB8BC7(), iVar116), func_415(unk_0x9B0761B4C3EB8BC7(), iVar116), 0);
					unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_414(unk_0x9B0761B4C3EB8BC7(), iVar116));
					func_413(unk_0x460153A63B9477BC(), iVar116);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x4D0432E34C5996D9(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_403(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar117 = func_524(iParam0, 4, -1);
					iVar118 = iParam2;
				}
				else
				{
					iVar117 = iParam2;
					iVar118 = func_524(iParam0, 11, -1);
				}
				if (func_412(iVar5, 11, iVar118, -1))
				{
					if (!func_411(iVar5, 4, iVar117, -1))
					{
						if (func_410(iVar5, 4, iVar117, &uVar119))
						{
							func_403(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_411(iVar5, 4, iVar117, -1))
				{
					if (func_409(iVar5, 4, iVar117, &uVar119))
					{
						func_403(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				iVar126 = func_98(iParam0, 4);
				iVar127 = func_98(iParam0, 6);
				if (func_408(iVar5, iVar122))
				{
					if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_407(iVar5, iVar126, iVar122))
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
										iVar127 = func_89(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_403(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_89(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_403(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_406(iVar5, iVar127, iVar125))
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
										iVar126 = func_89(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_403(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_89(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_403(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
				if (func_408(iVar5, iVar125))
				{
					if (unk_0x4D0432E34C5996D9(iVar125, joaat("ALT_LEGS"), 0) != func_406(iVar5, iVar127, iVar125))
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
										iVar126 = func_89(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_403(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_89(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_403(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x4D0432E34C5996D9(iVar122, joaat("ALT_FEET"), 0) != func_407(iVar5, iVar126, iVar122))
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
										iVar127 = func_89(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_403(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_89(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_403(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_510(iParam0);
				iVar133 = unk_0x3FB4D40A857CEA77(iParam0, 1);
				iVar134 = unk_0x79AFA009D186C4FB(iParam0, 1);
				iVar135 = unk_0x21A69BE7599CD8B7(iParam0, 1, iVar133, iVar134);
				if (unk_0x4D0432E34C5996D9(iVar135, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_516(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_403(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_516(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_403(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_404(iParam0, &uVar4))
		{
			func_403(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_403(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_403(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_403(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar136 = func_508(iVar5, func_524(iParam0, 3, -1), iVar11);
		if (iVar136 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_89(iVar5, iVar136, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_89(iVar5, iVar136, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_403(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_76645 = (Global_76645 - 1);
	return 1;
}

int func_404(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_524(unk_0x9B0761B4C3EB8BC7(), 2, -1);
	if (func_112(753, Global_76644, 0) != -99 && func_397())
	{
		if (func_405() == 4)
		{
			return 1;
		}
		if (func_112(753, Global_76644, 0) == 0 && func_112(754, Global_76644, 0) == 0)
		{
			if (func_308(161, Global_76644))
			{
				if (func_112(2052, Global_76644, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_112(752, Global_76644, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_112(753, Global_76644, 0);
		iVar1 = func_112(754, Global_76644, 0);
		if (!func_422(iParam0, iVar1, iVar0))
		{
			if (func_308(161, Global_76644))
			{
				*uParam1 = func_112(2052, Global_76644, 0);
			}
			else
			{
				*uParam1 = func_112(752, Global_76644, 0);
			}
			func_196(753, -99, Global_76644, 1, 0);
			func_196(754, 2, Global_76644, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_405()
{
	return Global_1312829;
}

int func_406(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_102(iParam0, iParam1, 6, 3);
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
				iVar0 = func_102(iParam0, iParam1, 6, 4);
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

int func_407(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_102(iParam0, iParam1, 4, 3);
				iVar1 = func_501(iVar0);
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
					case joaat("DLC_MP_BEACH_M_LOWR0_5"):
					case joaat("DLC_MP_BEACH_M_LOWR0_6"):
					case joaat("DLC_MP_BEACH_M_LOWR0_7"):
					case joaat("DLC_MP_BEACH_M_LOWR0_8"):
					case joaat("DLC_MP_BEACH_M_LOWR0_9"):
					case joaat("DLC_MP_BEACH_M_LOWR0_10"):
					case joaat("DLC_MP_BEACH_M_LOWR0_11"):
					case joaat("DLC_MP_BEACH_M_LOWR1_0"):
					case joaat("DLC_MP_BEACH_M_LOWR1_1"):
					case joaat("DLC_MP_BEACH_M_LOWR1_2"):
					case joaat("DLC_MP_BEACH_M_LOWR1_3"):
					case joaat("DLC_MP_BEACH_M_LOWR1_4"):
					case joaat("DLC_MP_BEACH_M_LOWR1_5"):
					case joaat("DLC_MP_BEACH_M_LOWR1_6"):
					case joaat("DLC_MP_BEACH_M_LOWR1_7"):
					case joaat("DLC_MP_BEACH_M_LOWR1_8"):
					case joaat("DLC_MP_BEACH_M_LOWR1_9"):
					case joaat("DLC_MP_BEACH_M_LOWR1_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_0"):
					case joaat("DLC_MP_BEACH_M_LOWR2_1"):
					case joaat("DLC_MP_BEACH_M_LOWR2_2"):
					case joaat("DLC_MP_BEACH_M_LOWR2_3"):
					case joaat("DLC_MP_BEACH_M_LOWR2_4"):
					case joaat("DLC_MP_BEACH_M_LOWR2_5"):
					case joaat("DLC_MP_BEACH_M_LOWR2_6"):
					case joaat("DLC_MP_BEACH_M_LOWR2_7"):
					case joaat("DLC_MP_BEACH_M_LOWR2_8"):
					case joaat("DLC_MP_BEACH_M_LOWR2_9"):
					case joaat("DLC_MP_BEACH_M_LOWR2_10"):
					case joaat("DLC_MP_BEACH_M_LOWR2_11"):
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case -92983136:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case -448105673:
					case -611098679:
					case -1111088081:
					case -1406369540:
					case -1912159043:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case -2129094253:
					case -421370587:
					case -675363106:
					case joaat("DLC_MP_VWD_M_LEGS_2_0"):
					case joaat("DLC_MP_VWD_M_LEGS_2_1"):
					case joaat("DLC_MP_VWD_M_LEGS_2_2"):
					case joaat("DLC_MP_VWD_M_LEGS_2_3"):
					case joaat("DLC_MP_VWD_M_LEGS_2_4"):
					case joaat("DLC_MP_VWD_M_LEGS_2_5"):
					case joaat("DLC_MP_VWD_M_LEGS_2_6"):
					case joaat("DLC_MP_VWD_M_LEGS_2_7"):
					case joaat("DLC_MP_VWD_M_LEGS_2_8"):
					case joaat("DLC_MP_VWD_M_LEGS_2_9"):
					case joaat("DLC_MP_VWD_M_LEGS_2_10"):
						iVar2 = 0;
						break;
				}
				if (((unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BATTLE_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x4D0432E34C5996D9(iVar0, 1137160120, 0))
				{
					if (unk_0x4D0432E34C5996D9(iParam2, -2005216901, 0))
					{
						iVar2 = 0;
					}
					else
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_102(iParam0, iParam1, 4, 4);
				iVar1 = func_501(iVar0);
			}
			if (unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar0, 1137160120, 0))
				{
					if (unk_0x4D0432E34C5996D9(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((unk_0x4D0432E34C5996D9(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam2, joaat("BIKER_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("BIKER_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar0, -430330349, 0)) || unk_0x4D0432E34C5996D9(iVar0, -1103045158, 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("APART_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("DUNGAREES"), 0)) || unk_0x4D0432E34C5996D9(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x4D0432E34C5996D9(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x4D0432E34C5996D9(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x4D0432E34C5996D9(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_409(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_102(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x164989BEE998606B(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x4D0432E34C5996D9(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_89(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_410(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_102(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0x164989BEE998606B(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x4D0432E34C5996D9(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_89(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_411(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_102(iParam0, iParam2, 4, 4);
						}
						if (unk_0x4D0432E34C5996D9(iParam3, joaat("DRESS_LEGS"), 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_412(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == -1)
						{
							iParam3 = func_102(iParam0, iParam2, 11, 4);
						}
						return unk_0x4D0432E34C5996D9(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_413(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x32ECE704AD6A4E0B(iParam0);
	}
}

int func_414(int iParam0, int iParam1)
{
	return 0;
}

int func_415(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_416(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x3FB4D40A857CEA77(iParam0, 9) != false;
	iVar1 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	iVar2 = unk_0x21A69BE7599CD8B7(iParam0, 11, unk_0x3FB4D40A857CEA77(iParam0, 11), unk_0x79AFA009D186C4FB(iParam0, 11));
	iVar3 = unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4));
	if ((((!bVar0 == Global_76808 || !iParam1 == Global_76809) || !iVar1 == Global_76810) || !iVar2 == Global_76811) || !iVar3 == Global_76812)
	{
		Global_76808 = bVar0;
		Global_76809 = iParam1;
		Global_76810 = iVar1;
		Global_76811 = iVar2;
		Global_76812 = iVar3;
		Global_76813 = func_417(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 76)
				{
					Global_76813 = 80;
				}
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 78;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 78;
				}
			}
		}
	}
	return Global_76813;
}

int func_417(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x3FB4D40A857CEA77(iParam0, 11);
	if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x36FE6D3220816ADA(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	if (unk_0x4D0432E34C5996D9(iVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if ((unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8)) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		return func_421(iParam0, iParam1);
	}
	if (func_420(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x21A69BE7599CD8B7(iParam0, 11, iVar0, unk_0x79AFA009D186C4FB(iParam0, 11));
		if (unk_0x4D0432E34C5996D9(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_419(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_501(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_501(iVar5);
						break;
					}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_418(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_501(iVar5);
					break;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_421(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, -1086258388, 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_421(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return func_421(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return func_421(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_421(iParam0, iParam1) + 15;
				}
				else
				{
					return func_421(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return func_421(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_421(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return func_421(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1);
			}
			else
			{
				return func_421(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_421(iParam0, iParam1) + 15;
			}
			else
			{
				return func_421(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_501(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_418(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_419(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_420(int iParam0)
{
	if (unk_0x4D0432E34C5996D9(unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_421(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

int func_422(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar25;
	int iVar35;
	var uVar36;
	int iVar46;
	int iVar47;
	var uVar48;
	var uVar49;
	int iVar50;
	struct<5> Var51;
	var uVar68;
	
	if (unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	Global_76647[1 /*14*/] = { func_527(iVar0, iParam1, iParam2, -1) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_93(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_422(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar25 = { func_87(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_422(iParam0, 14, uVar25[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_76647[2 /*14*/] = { func_527(iVar0, 14, iVar6, -1) };
									if (Global_76647[2 /*14*/].f_12 == iVar5)
									{
										if (func_422(iParam0, 14, iVar6))
										{
											if (!func_100(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_76647[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_98(iParam0, iVar4);
						Global_76647[2 /*14*/] = { func_527(iVar0, iVar4, iVar1, -1) };
						if (!func_100(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_76647[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != joaat("0")) && uVar8.f_16)
		{
			if (func_112(1758, Global_76644, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar36 = { func_87(iVar0, iParam2) };
		iVar35 = 0;
		while (iVar35 <= 8)
		{
			if (!func_422(iParam0, 14, uVar36[iVar35]))
			{
				return 0;
			}
			iVar35++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xA98E0435012EAF07(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_3 && (unk_0x77A103B794FA7737(iParam0, Global_76647[1 /*14*/].f_12) == Global_76647[1 /*14*/].f_4 || Global_76647[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
		if (((Global_76647[1 /*14*/].f_12 == 0 && unk_0xCE990E643CD9D0E5(Global_76647[1 /*14*/].f_6, 6)) && unk_0x4D0432E34C5996D9(Global_2621444, joaat("HELMET"), 1)) && unk_0xA45BF7AC8135700A(Global_2621444) > 0)
		{
			iVar50 = unk_0xA45BF7AC8135700A(Global_2621444);
			iVar46 = 0;
			while (iVar46 < iVar50)
			{
				unk_0xCEF761DD8AA53871(Global_2621444, iVar46, &iVar47, &uVar48, &uVar49);
				if (iVar47 != 0 && iVar47 != joaat("0"))
				{
					unk_0x8BC52CDFCD2A4534(&Var51);
					unk_0x033BD1CDBF721494(iVar47, &Var51);
					if (Var51.f_3 == unk_0xA98E0435012EAF07(iParam0, Global_76647[1 /*14*/].f_12) && Var51.f_4 == unk_0x77A103B794FA7737(iParam0, Global_76647[1 /*14*/].f_12))
					{
						return 1;
					}
				}
				iVar46++;
			}
		}
	}
	else
	{
		if (Global_76647[1 /*14*/].f_3 == unk_0x3FB4D40A857CEA77(iParam0, func_86(iParam1)) && Global_76647[1 /*14*/].f_4 == unk_0x79AFA009D186C4FB(iParam0, func_86(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_76646++;
			if (Global_76646 == 1)
			{
				if (func_412(iVar0, 11, func_98(iParam0, 11), -1))
				{
					if (func_410(iVar0, 4, iParam2, &uVar68))
					{
						return func_422(iParam0, 4, uVar68);
					}
				}
				else if (func_409(iVar0, 4, iParam2, &uVar68))
				{
					return func_422(iParam0, 4, uVar68);
				}
			}
			Global_76646 = (Global_76646 - 1);
		}
	}
	return 0;
}

int func_423(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar10;
	int iVar11;
	
	if (func_420(iParam0))
	{
		return -99;
	}
	if (func_424(iParam0))
	{
		return -99;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_102(iParam1, iParam3, 11, 3);
				if (iVar0 != -1)
				{
					iVar1 = unk_0x164989BEE998606B(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						unk_0x0CB8E5A136C709DC(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != joaat("0"))
							{
								return func_89(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return -99;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_102(iParam1, iParam3, 11, 4);
				if (iVar6 != -1)
				{
					iVar7 = unk_0x164989BEE998606B(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						unk_0x0CB8E5A136C709DC(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != joaat("0"))
							{
								return func_89(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return -99;
			}
		}
	}
	return -99;
}

int func_424(int iParam0)
{
	if (unk_0x4D0432E34C5996D9(unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8)), joaat("X17_DRAW_6"), 0))
	{
		return 1;
	}
	return 0;
}

int func_425(int iParam0)
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = unk_0x36FE6D3220816ADA(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_426(int iParam0, int iParam1)
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
	iVar10 = func_112(2096, iParam1, 0);
	iVar11 = func_112(2097, iParam1, 0);
	iVar12 = func_112(2098, iParam1, 0);
	iVar13 = func_112(2099, iParam1, 0);
	iVar14 = func_112(2100, iParam1, 0);
	iVar15 = func_112(2101, iParam1, 0);
	fVar16 = func_442(134, iParam1);
	fVar17 = func_442(135, iParam1);
	fVar18 = func_442(136, iParam1);
	bVar19 = func_308(160, iParam1);
	if (((((((((Var0 != iVar10 || Var0.f_1 != iVar11) || Var0.f_2 != iVar12) || Var0.f_3 != iVar13) || Var0.f_4 != iVar14) || Var0.f_5 != iVar15) || Var0.f_6 != fVar16) || Var0.f_7 != fVar17) || Var0.f_8 != fVar18) || Var0.f_9 != bVar19)
	{
		unk_0x5B5751111E879A6F(iParam0, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, fVar16, fVar17, fVar18, bVar19);
		iVar20 = func_112(2102, iParam1, 0);
		if (iVar20 > 0)
		{
			func_427(iParam0, iParam1, 0);
		}
	}
}

void func_427(int iParam0, int iParam1, bool bParam2)
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
	var uVar10;
	var uVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_441(iVar1);
		if (!bParam2)
		{
			fVar3 = func_442(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_440(iVar2, iParam1);
		}
		unk_0x69D0D9BA8F4533D8(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_439(iVar4);
		iVar6 = func_438(iVar5);
		iVar7 = func_437(iVar5);
		if (iVar6 != -1 && iVar7 != -1)
		{
			if (!bParam2)
			{
				uVar10 = func_434(iVar6, iParam1, -1);
				uVar11 = func_442(iVar7, iParam1);
			}
			else
			{
				uVar10 = func_433(iVar6, iParam1);
				uVar11 = func_440(iVar7, iParam1);
			}
			unk_0xE5E78CECD32206A8(iParam0, iVar5, uVar10, uVar11);
			iVar8 = func_432(iVar5);
			iVar9 = func_431(iVar5);
			if (iVar8 != -1)
			{
				if (!bParam2)
				{
					iVar13 = func_112(iVar8, iParam1, 0);
					iVar14 = func_112(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_430(iVar8, iParam1);
					iVar14 = func_430(iVar9, iParam1);
				}
				func_429(iVar13, &uVar12, &uVar15);
				unk_0x522472ED486C5BFE(iParam0, iVar5, uVar15, uVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_428(&iParam0, iParam1, bParam2);
}

void func_428(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_442(157, iParam1);
	}
	else
	{
		fVar0 = func_440(157, iParam1);
	}
	if (*iParam0 == unk_0x9B0761B4C3EB8BC7())
	{
	}
	unk_0x0C5A9B65B745AF78(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_429(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_430(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2551832[iParam0 /*3*/][func_113(iParam1)];
	if (unk_0xB759F48CD364B4FE(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_431(int iParam0)
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

int func_432(int iParam0)
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

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_57();
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

int func_434(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_57();
	}
	iVar0 = 0;
	iVar1 = func_436(iParam0, iParam1);
	uVar2 = func_435(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x84F15E111A2161E1(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_435(int iParam0)
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

int func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_57();
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

int func_437(int iParam0)
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

int func_438(int iParam0)
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

int func_439(int iParam0)
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

float func_440(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587146[iParam0 /*3*/][func_113(iParam1)];
	if (unk_0x04DDD94898CB0D4F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_441(int iParam0)
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

float func_442(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587146[iParam0 /*3*/][func_113(iParam1)];
	if (unk_0xB734B6962B239811(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0f;
}

int func_443(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
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
	struct<7> Var21;
	int iVar38;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = -1;
		iVar2 = -1;
		if (Global_4268255 == iParam1)
		{
			iVar2 = Global_4268254;
			iVar1 = Global_4268253;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_102(iParam0, iParam1, 7, 3);
			iVar1 = func_501(iVar2);
			Global_4268255 = iParam1;
			Global_4268254 = iVar2;
			Global_4268253 = iVar1;
		}
		iVar3 = -1;
		iVar4 = -1;
		if (Global_4268258 == iParam3)
		{
			iVar4 = Global_4268257;
			iVar3 = Global_4268256;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_102(iParam0, iParam3, 11, 3);
			iVar3 = func_501(iVar4);
			Global_4268258 = iParam3;
			Global_4268257 = iVar4;
			Global_4268256 = iVar3;
		}
		iVar5 = -1;
		iVar6 = -1;
		if (Global_4268261 == iParam4)
		{
			iVar6 = Global_4268260;
			iVar5 = Global_4268259;
		}
		else if (iParam4 >= 241)
		{
			iVar6 = func_102(iParam0, iParam4, 8, 3);
			iVar5 = func_501(iVar6);
			Global_4268261 = iParam4;
			Global_4268260 = iVar6;
			Global_4268259 = iVar5;
		}
		iVar7 = -1;
		iVar8 = -1;
		if (Global_4268264 == iParam10)
		{
			iVar8 = Global_4268263;
			iVar7 = Global_4268262;
		}
		else if (iParam10 >= 26)
		{
			iVar8 = func_102(iParam0, iParam10, 1, 3);
			iVar7 = func_501(iVar8);
			Global_4268264 = iParam10;
			Global_4268263 = iVar8;
			Global_4268262 = iVar7;
		}
		if (iParam3 != -99)
		{
			if ((unk_0x4D0432E34C5996D9(iVar4, joaat("MORPH_SUIT"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("SCUBA_GEAR"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("GORKA_SUIT"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (iParam10 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar8, joaat("HEADSCARF"), 0) && !unk_0x4D0432E34C5996D9(iVar8, joaat("SMUG_DRAW_6"), 0))
			{
				if (iParam1 != 0)
				{
					return 0;
				}
			}
		}
		if (unk_0x4D0432E34C5996D9(iVar2, 1930035188, 0))
		{
			if (func_505(iParam0, iParam3, -1))
			{
				return 0;
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("PILOT_SUIT"), 0))
			{
				if (iParam1 != 0 && !(iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("PILOT_SUIT"), 0)))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar2, joaat("EPSILON_CHAIN"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar4, joaat("ARENA_DRAW_0"), 0))
				{
					return 0;
				}
			}
		}
		else if (iParam4 != -99)
		{
			if (unk_0x4D0432E34C5996D9(iVar2, joaat("EPSILON_CHAIN_ALT"), 0))
			{
				if (iParam4 == 240)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (unk_0x4D0432E34C5996D9(iVar2, -120244486, 0))
		{
			if (iParam9 != -99)
			{
				iVar9 = -1;
				if (iParam9 >= 327)
				{
					iVar9 = func_102(iParam0, iParam9, 14, 3);
				}
				if (((iParam9 >= 27 && iParam9 <= 34) || (iParam9 >= 75 && iParam9 <= 82)) || (iParam9 >= 107 && iParam9 <= 114))
				{
					return 0;
				}
				switch (iVar9)
				{
					case 1411612772:
					case 1399488226:
					case 1103092621:
					case 798340921:
					case 495850282:
					case -1972900644:
					case 2016102499:
					case 1719477511:
					case 288210625:
					case -882756821:
					case -1242625979:
					case -1358792084:
					case joaat("DLC_MP_EXEC_M_PHEAD_1_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_0"):
					case joaat("DLC_MP_BEACH_M_HEAD0_1"):
					case joaat("DLC_MP_BEACH_M_HEAD0_2"):
					case joaat("DLC_MP_BEACH_M_HEAD0_3"):
					case joaat("DLC_MP_BEACH_M_HEAD0_4"):
					case joaat("DLC_MP_BEACH_M_HEAD0_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_0"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_1"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_2"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_3"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_4"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_5"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_6"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_7"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_8"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_9"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_10"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_11"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_12"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_13"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_14"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_15"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_16"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_17"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_18"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_19"):
					case joaat("DLC_MP_STUNT_M_PHEAD_10_20"):
					case joaat("DLC_MP_GR_M_PHEAD_7_0"):
					case joaat("DLC_MP_GR_M_PHEAD_7_1"):
					case joaat("DLC_MP_GR_M_PHEAD_7_2"):
					case joaat("DLC_MP_GR_M_PHEAD_7_3"):
					case joaat("DLC_MP_GR_M_PHEAD_7_4"):
					case joaat("DLC_MP_GR_M_PHEAD_7_5"):
					case joaat("DLC_MP_GR_M_PHEAD_7_6"):
					case joaat("DLC_MP_GR_M_PHEAD_7_7"):
					case joaat("DLC_MP_GR_M_PHEAD_7_8"):
					case joaat("DLC_MP_GR_M_PHEAD_7_9"):
					case joaat("DLC_MP_GR_M_PHEAD_7_10"):
						return 0;
						break;
					}
			}
			if (iParam10 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar8, joaat("HEADSCARF"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("SCARF"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar2, joaat("JACKET_SCARF"), 0))
				{
					if (((((((((((((((((((((((((((((((((((((((((unk_0x4D0432E34C5996D9(iVar4, joaat("BLOCK_SCARFS"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_24"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
					else if (func_445(iParam0, iParam3))
					{
					}
					else
					{
						return 0;
					}
				}
				else if (unk_0x4D0432E34C5996D9(iVar4, joaat("BLOCK_SCARFS"), 0))
				{
					return 0;
				}
				else if (func_445(iParam0, iParam3))
				{
					return 0;
				}
				else if (unk_0x4D0432E34C5996D9(iVar2, -120244486, 0))
				{
					if (((((((((((((iParam3 >= 188 && iParam3 <= 203) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 12) || iVar3 == 14) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("AIR_DRAW_0"), 0))
					{
						return 0;
					}
				}
				if (iParam10 != -99)
				{
					if (unk_0x4D0432E34C5996D9(iVar8, joaat("HEADSCARF"), 0))
					{
						return 0;
					}
				}
			}
			if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("LUXE_SCARF"), 0))
			{
				if (((unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_1"), 0))
				{
				}
				else
				{
					return 0;
				}
			}
		}
		if ((iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("SCARF"), 0)) || (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("BIG_CHAIN"), 0)))
		{
			if (iParam11 != -99)
			{
				iVar10 = -1;
				if (iParam11 >= 256)
				{
					iVar10 = func_102(iParam0, iParam11, 4, 3);
				}
				if (unk_0x4D0432E34C5996D9(iVar10, joaat("DUNGAREES"), 0))
				{
					return 0;
				}
			}
		}
		if (iParam3 != -99)
		{
			if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("BEAD_NECKLACE"), 0))
			{
				if (unk_0x4D0432E34C5996D9(iVar4, joaat("SWEAT_VEST"), 0) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_20"), 0))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("CHAIN"), 0))
		{
			if (iParam3 != -99)
			{
				if (unk_0x4D0432E34C5996D9(iVar2, joaat("BIG_CHAIN"), 0))
				{
					if ((iParam3 >= 96 && iParam3 <= 107) || iVar3 == 6)
					{
						return 0;
					}
				}
				if (iParam3 == 236)
				{
					if (unk_0x4D0432E34C5996D9(iVar2, joaat("ALT_CHAIN"), 0))
					{
						return 0;
					}
				}
				else if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam3 >= 172 && iParam3 <= 187) || (iParam3 >= 188 && iParam3 <= 203)) || (iParam3 >= 204 && iParam3 <= 219)) || (iParam3 >= 220 && iParam3 <= 235)) || iVar3 == 11) || iVar3 == 12) || iVar3 == 13) || iVar3 == 14) || unk_0x4D0432E34C5996D9(iVar4, joaat("BLOCK_CHAINS"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("TUX_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("PILOT_SUIT"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("COMBAT_TOP"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("XMAS2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -1086258388, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SCRUFFY_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_9"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_10"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_12"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_13"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_14"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("HEIST_DRAW_16"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LUXE_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW_DRAW_7"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SILK_PYJAMAS"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("SMOKING_JACKET"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -826135203, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JAN_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_4"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("LOW2_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_15"), 0)) || unk_0x4D0432E34C5996D9(iVar4, -102825006, 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_19"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_20"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("APART_DRAW_21"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("JACKET_ONLY"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_0"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_2"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_3"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_5"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_6"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("STUNT_DRAW_8"), 0)) || unk_0x4D0432E34C5996D9(iVar4, joaat("AIR_DRAW_0"), 0))
				{
					return 0;
				}
				else if (!unk_0x4D0432E34C5996D9(iVar2, joaat("ALT_CHAIN"), 0))
				{
					return 0;
				}
			}
			else if (iParam4 != -99)
			{
				if ((((((((((((((((iParam4 >= 48 && iParam4 <= 63) || (iParam4 >= 64 && iParam4 <= 79)) || (iParam4 >= 96 && iParam4 <= 111)) || (iParam4 >= 112 && iParam4 <= 127)) || (iParam4 >= 192 && iParam4 <= 207)) || (iParam4 >= 208 && iParam4 <= 223)) || iVar5 == 3) || iVar5 == 4) || iVar5 == 6) || iVar5 == 7) || iVar5 == 12) || iVar5 == 13) || unk_0x4D0432E34C5996D9(iVar6, joaat("TUX_VEST"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("BLOCK_CHAINS"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("STUNT_DRAW_1"), 0)) || unk_0x4D0432E34C5996D9(iVar6, joaat("STUNT_DRAW_2"), 0))
				{
					return 0;
				}
			}
		}
		if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("BIG_CHAIN"), 0))
		{
			if (iParam8 != -99)
			{
				return 0;
			}
		}
		if (iVar2 != -1 && unk_0x4D0432E34C5996D9(iVar2, joaat("PILOT_SUIT"), 0))
		{