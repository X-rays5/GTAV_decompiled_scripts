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
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	float fLocal_91 = 0f;
	int iLocal_92[5] = { 0, 0, 0, 0, 0 };
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 8;
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
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 8;
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
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	float fLocal_163 = 0f;
	float fLocal_164 = 0f;
	float fLocal_165 = 0f;
	float fLocal_166 = 0f;
	var uLocal_167 = 0;
	int iLocal_168[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
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
	struct<59> Local_223 = { 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	struct<550> Local_284 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 1443296302, 1, -1, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, -1, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 20, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, 0, 0, 1084227584, -1, 12, 1067030938, 0, 0, 0, 0, 12, 9, 1092616192, 1092616192, 1065353216, 1065353216, 1084227584, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 4, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 5, 1, -1, 2, 0, 0, 0, 0, -1, -1, 1, 0, 0, 0, 0, 0, -1, -1, 1, 0, 0 } ;
	struct<472> Local_834 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	struct<20> Local_1308 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_1328[7];
	struct<21> Local_1469[7];
	struct<24> Local_1617 = { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_1641 = 0;
	var uLocal_1642 = 5;
	var uLocal_1643 = -1;
	var uLocal_1644 = 3;
	var uLocal_1645 = -1;
	var uLocal_1646 = 0;
	var uLocal_1647 = -1;
	var uLocal_1648 = 0;
	var uLocal_1649 = -1;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = -1;
	var uLocal_1657 = 3;
	var uLocal_1658 = -1;
	var uLocal_1659 = 0;
	var uLocal_1660 = -1;
	var uLocal_1661 = 0;
	var uLocal_1662 = -1;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = -1;
	var uLocal_1670 = 3;
	var uLocal_1671 = -1;
	var uLocal_1672 = 0;
	var uLocal_1673 = -1;
	var uLocal_1674 = 0;
	var uLocal_1675 = -1;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = -1;
	var uLocal_1683 = 3;
	var uLocal_1684 = -1;
	var uLocal_1685 = 0;
	var uLocal_1686 = -1;
	var uLocal_1687 = 0;
	var uLocal_1688 = -1;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = -1;
	var uLocal_1696 = 3;
	var uLocal_1697 = -1;
	var uLocal_1698 = 0;
	var uLocal_1699 = -1;
	var uLocal_1700 = 0;
	var uLocal_1701 = -1;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708[1] = { 0 };
	struct<7> Local_1710 = { 1, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = -1;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725[1] = { 0 };
	struct<2> Local_1727[1];
	struct<2> Local_1730 = { 0, 0 } ;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	struct<6> Local_1734 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	struct<8> Local_1742 = { 0, -1, -1, 0, 0, 0, 0, 0 } ;
	int iLocal_1750 = 0;
	struct<2> Local_1751 = { -1, -1 } ;
	struct<11> Local_1753 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432 } ;
	int iLocal_1764[1] = { -1 };
	var uLocal_1766 = 1;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770[1] = { -1 };
	struct<4> Local_1772[1];
	int iLocal_1777 = -1;
	struct<8> Local_1778 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_1786 = 0;
	int iLocal_1787 = 20;
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
	var uLocal_1808 = 20;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
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
	struct<2> Local_1831 = { 0, -1 } ;
	int iLocal_1833 = 0;
	bool bLocal_1834 = 0;
	bool bLocal_1835 = 0;
	bool bLocal_1836 = 0;
	var uLocal_1837 = 0;
	int iLocal_1838 = 0;
	int iLocal_1839 = 0;
	int iLocal_1840 = 0;
	int iLocal_1841 = 0;
	struct<3> Local_1842 = { 0, 0, 0 } ;
	int iLocal_1845 = 0;
	int iLocal_1846 = 0;
	bool bLocal_1847 = 0;
	bool bLocal_1848 = 0;
	struct<2> Local_1849 = { -1, -1 } ;
	int iLocal_1851 = 0;
	int iLocal_1852 = 0;
	var uLocal_1853 = 3;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	int iLocal_1857 = 0;
	int iLocal_1858 = 0;
	var uLocal_1859 = 0;
	int iLocal_1860 = 0;
	int iLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	int iLocal_1864 = 0;
	var uLocal_1865 = 1;
	var uLocal_1866 = 0;
	float fLocal_1867 = 0f;
	float fLocal_1868 = 0f;
	float fLocal_1869 = 0f;
	float fLocal_1870 = 0f;
	float fLocal_1871 = 0f;
	int iLocal_1872 = 0;
	int iLocal_1873[1] = { 0 };
	var uLocal_1875[1] = { 0 };
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	struct<16> Local_1882 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<226> Local_1898 = { 0, 0, 1, 0, 1, 0, 0, 1, 2, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, -1, 1, 0, 0, 0, 0, 0, 1, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 } ;
	var uLocal_2124 = 0;
	struct<38> Local_2125[8];
	struct<5> Local_2430 = { 0, 0, 0, 0, 0 } ;
	var uLocal_2435 = 0;
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
	iLocal_1857 = -1;
	iLocal_1858 = -1;
	iLocal_1861 = -1;
	fLocal_1867 = -1f;
	fLocal_1868 = 99999f;
	fLocal_1869 = 99999f;
	fLocal_1870 = 99999f;
	fLocal_1871 = 999999f;
	StringCopy(&Local_1882, unk_0x471C98FD94C0A5FD(), 64);
	Local_1882 = { Local_1882 };
	Local_1308 = { Local_1308 };
	func_3397(0);
	if (unk_0x02BFF15CAA701972())
	{
		if (bLocal_1834)
		{
			if (!func_3345(ScriptParam_0))
			{
				func_3283(0, 1);
				func_3202();
			}
		}
		else
		{
			func_3202();
		}
	}
	else
	{
		func_3283(0, 1);
		func_3202();
	}
	func_3200(&(Local_1898.f_198));
	func_3101();
	while (true)
	{
		func_3100();
		if (func_3093())
		{
			func_3283(0, 1);
			func_3202();
		}
		if (func_3084())
		{
			func_3283(0, 1);
			func_3202();
		}
		if (Local_834.f_91.f_4 != 0)
		{
			Call_Loc(Local_834.f_91.f_4);
			if (StackVal)
			{
				func_3283(0, 1);
				func_3202();
			}
		}
		func_3397(1);
		switch (func_3083())
		{
			case 0:
				switch (func_3082())
				{
					case 1:
						if (func_2853())
						{
							func_2852(1);
						}
						break;
					
					case 2:
					case 3:
						func_2852(3);
						break;
				}
				break;
			
			case 1:
				func_2809();
				func_2083();
				func_2082();
				if (func_3082() != 1)
				{
					func_2077();
					if (Local_834.f_91.f_5 != 0)
					{
						Call_Loc(Local_834.f_91.f_5);
					}
					func_2852(func_3082());
				}
				break;
			
			case 2:
				func_2809();
				func_2082();
				func_1125();
				if (func_3082() > 2)
				{
					func_3283(func_1124(11), 0);
					func_2852(3);
				}
				break;
			
			case 3:
				func_3202();
				break;
		}
		if (bLocal_1836)
		{
			switch (func_3082())
			{
				case 0:
					if (func_462())
					{
						func_461(1);
					}
					break;
				
				case 1:
					if (func_460() == 0)
					{
						func_8();
					}
					else
					{
						func_461(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_461(3);
					}
					break;
				
				case 3:
					func_3202();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_1617.f_22++;
	if (Local_1617.f_22 >= Local_284.f_38)
	{
		Local_1617.f_22 = 0;
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
	return func_4(&(Local_1898.f_84), iParam0);
}

bool func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
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
	return func_4(&(Local_1898.f_2.f_5[iParam0 /*3*/]), iParam1);
}

int func_7()
{
	return Local_284.f_19;
}

void func_8()
{
	func_459();
	if (Local_834.f_3 != 0)
	{
		Call_Loc(Local_834.f_3);
	}
	func_403();
	func_141();
	func_122();
	func_35();
	func_29();
	func_28();
	func_27();
	func_24();
	func_16();
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
	if (!bLocal_1836)
	{
		return;
	}
	Local_1898.f_78 = iParam0;
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
	switch (func_15())
	{
		case 3:
			return !func_14(1);
		
		default:
	}
	return 1;
}

bool func_14(int iParam0)
{
	return func_4(&uLocal_1865, iParam0);
}

int func_15()
{
	return Local_1898.f_118;
}

void func_16()
{
	if (func_23() == -1)
	{
		return;
	}
	if (Local_834.f_72 == 0)
	{
		return;
	}
	Call_Loc(Local_834.f_72);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_834.f_72.f_1 != 0)
	{
		Call_Loc(Local_834.f_72.f_1);
		if (StackVal)
		{
			func_22(&(Local_1898.f_102), 0, 0);
			func_20(5);
		}
	}
	if (!func_19(&(Local_1898.f_102)))
	{
		func_18(&(Local_1898.f_102), 0, 0);
	}
	else if (func_19(&(Local_1898.f_102)))
	{
		if (func_17(&(Local_1898.f_102), func_23(), 0))
		{
			func_10(1);
		}
	}
}

int func_17(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_18(uParam0, bParam2, 0);
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

void func_18(var uParam0, bool bParam1, bool bParam2)
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

bool func_19(var uParam0)
{
	return uParam0->f_1;
}

void func_20(int iParam0)
{
	if (func_21(&(Local_1898.f_84), iParam0))
	{
	}
}

int func_21(var uParam0, var uParam1)
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

void func_22(var uParam0, bool bParam1, bool bParam2)
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

int func_23()
{
	if (Local_284.f_463 != -1)
	{
		return Local_284.f_463 * 60 * 1000;
	}
	return Local_284.f_463;
}

void func_24()
{
	int iVar0;
	
	if (func_26() == -1)
	{
		func_25(0);
		Call_Loc(Local_1328[func_26() /*20*/].f_17);
		return;
	}
	while ((func_26() < iLocal_1851 && iVar0 < Local_1328[func_26() /*20*/].f_19) && Local_1328[func_26() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_1328[func_26() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			Call_Loc(Local_1328[func_26() /*20*/].f_18);
			Local_1898.f_82 = func_26();
			func_25(Local_1328[func_26() /*20*/].f_1[iVar0 /*3*/]);
			unk_0x191DDA30577F440A(&(Local_1898.f_83), func_26());
			Call_Loc(Local_1328[func_26() /*20*/].f_17);
			return;
		}
		iVar0++;
	}
}

void func_25(int iParam0)
{
	if (!bLocal_1836)
	{
		return;
	}
	Local_1898.f_81 = iParam0;
}

int func_26()
{
	return Local_1898.f_81;
}

void func_27()
{
	Call_Loc(Local_834.f_446);
	if (StackVal)
	{
		if (!func_19(&(Local_1898.f_223)))
		{
			Call_Loc(Local_834.f_446.f_1);
			if (StackVal)
			{
				func_18(&(Local_1898.f_223), 0, 0);
			}
		}
		else
		{
			Stack.Push(&(Local_1898.f_223));
			Call_Loc(Local_834.f_446.f_5);
			if (func_17(StackVal, StackVal, 0))
			{
			}
		}
	}
}

void func_28()
{
}

void func_29()
{
	if (!func_34())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_30(&(Local_1898.f_63), &(Local_1898.f_63.f_3)))
		{
			func_20(2);
		}
	}
}

int func_30(var uParam0, var uParam1)
{
	int iVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	while (iVar3 < 1)
	{
		if (func_33(iVar3))
		{
			iVar0[iVar2] = iVar3;
			iVar2++;
		}
		iVar3++;
	}
	if (iVar2 < func_7())
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < func_7())
	{
		if (func_32())
		{
			if (iVar3 > 0)
			{
				(*uParam0)[iVar3] = (*uParam0)[(iVar3 - 1)];
			}
			else
			{
				iVar4 = unk_0xB36B8558948EA7A8(0, iVar2);
				(*uParam0)[iVar3] = iVar0[iVar4];
				if (iVar0[iVar4] < 32)
				{
					unk_0x191DDA30577F440A(uParam1, iVar0[iVar4]);
				}
				if (iVar3 < (func_7() - 1))
				{
					func_31(&(iVar0[iVar4]), &(iVar0[(iVar2 - 1)]));
					iVar2 = (iVar2 - 1);
				}
			}
			iVar3++;
			return 1;
		}

void func_31(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_32()
{
	return 0;
}

int func_33(int iParam0)
{
	return 0;
}

int func_34()
{
	return 0;
}

void func_35()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	while (iVar5 < Local_284.f_38)
	{
		func_120(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_834.f_139.f_145 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_834.f_139.f_145);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_119(iVar5, 6);
				}
				else if (bVar3)
				{
					func_119(iVar5, 6);
				}
				else if (func_118(iVar5, iVar0))
				{
					func_119(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_117(iVar5))
				{
					func_119(iVar5, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_116(iVar5))
					{
						func_119(iVar5, 2);
					}
				}
				else
				{
					func_115(&(Local_1898.f_26[iVar5 /*22*/]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_111(iVar5))
					{
						if (func_67(iVar5))
						{
							func_119(iVar5, 3);
							func_66(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (func_65(iVar5, iVar0))
					{
						func_119(iVar5, 6);
						break;
					}
					if (!bVar3)
					{
						func_45(iVar5);
						func_40(iVar5, iVar0, 1);
						if (func_39(iVar5))
						{
							func_119(iVar5, 4);
						}
					}
				}
				break;
			
			case 6:
				func_38(iVar5, 8);
				if (bVar2)
				{
					if (func_65(iVar5, iVar0))
					{
						break;
					}
					if (func_39(iVar5))
					{
						func_119(iVar5, 4);
					}
				}
				if (func_37(iVar5))
				{
					func_115(&(Local_1898.f_26[iVar5 /*22*/]));
					func_119(iVar5, 1);
				}
				if (func_460() == 0)
				{
					if (func_36(iVar5, 0))
					{
						func_10(9);
					}
				}
				break;
			
			case 4:
				if (!func_36(iVar5, 14) && !unk_0xDC89C3FDCADCA32F(iVar0))
				{
					func_38(iVar5, 26);
					func_119(iVar5, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_1617.f_22;
	func_120(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_40(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_36(int iParam0, int iParam1)
{
	return func_4(&(Local_284.f_38.f_1[iParam0 /*21*/]), iParam1);
}

int func_37(int iParam0)
{
	if (func_460() != 0)
	{
		return 0;
	}
	if (func_36(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_139.f_134);
		return StackVal;
	}
	return 0;
}

void func_38(int iParam0, int iParam1)
{
	if (func_21(&(Local_1898.f_26[iParam0 /*22*/].f_3), iParam1))
	{
	}
}

int func_39(int iParam0)
{
	if (Local_834.f_139.f_133 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_139.f_133);
		return StackVal;
	}
	return 0;
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_44(iParam0);
	if (func_43(iParam0) == -1)
	{
		func_42(iParam0, 0);
		if (Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_8 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_8);
		}
		return;
	}
	if (func_41(Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_11);
	}
	while ((func_43(iParam0) < Local_1617.f_23[iVar0 /*67*/] && iVar1 < Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_12) && Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_9);
			}
			func_42(iParam0, Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_1[iVar1 /*2*/]);
			if (Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_1617.f_23[iVar0 /*67*/].f_1[func_43(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar1++;
	}
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

void func_42(int iParam0, int iParam1)
{
	if (!bLocal_1836)
	{
		return;
	}
	Local_1898.f_26[iParam0 /*22*/].f_2 = iParam1;
}

int func_43(int iParam0)
{
	return Local_1898.f_26[iParam0 /*22*/].f_2;
}

int func_44(int iParam0)
{
	if (Local_834.f_139.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_139.f_1);
		return StackVal;
	}
	return 0;
}

void func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_63(iParam0))
	{
		return;
	}
	iVar0 = Local_284.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < Local_1617[iParam0 /*19*/].f_16)
	{
		if (Local_1617[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1617[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				unk_0x191DDA30577F440A(&(Local_1898.f_62), iVar0);
				if (Local_834.f_139.f_137 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(iVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_834.f_139.f_137);
				}
				func_46(iParam0);
			}
		}
		iVar1++;
	}
}

void func_46(int iParam0)
{
	if (func_62(28))
	{
		return;
	}
	if (unk_0x159BC3DDA80D71AC(Local_1898.f_26[iParam0 /*22*/]))
	{
		if (func_61(unk_0x8A437068C87289B7(Local_1898.f_26[iParam0 /*22*/])))
		{
			func_47(func_59(), 1, 0);
		}
	}
}

void func_47(int iParam0, int iParam1, int iParam2)
{
	if (func_57(1))
	{
		func_49(Local_1849, func_50(1), iParam0, iParam1, iParam2);
	}
	else
	{
		func_49(Local_1849, func_48(iLocal_1838), iParam0, iParam1, iParam2);
	}
}

int func_48(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0x191DDA30577F440A(&uVar0, iParam0);
	}
	return uVar0;
}

void func_49(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
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

int func_50(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_57(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar3 = unk_0xC502CD39B4994F3A(iVar1);
			if (func_11(iVar3, 0, 0))
			{
				if (func_55())
				{
					if (func_53(iVar3, unk_0x1146A9AE09CE2B14(), bParam0))
					{
						unk_0x191DDA30577F440A(&uVar0, iVar3);
					}
				}
				else
				{
					iVar2 = func_52();
					if (iVar2 != func_51())
					{
						if (func_53(iVar3, iVar2, bParam0))
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

int func_51()
{
	return -1;
}

int func_52()
{
	return Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
}

int func_53(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_51())
	{
		if (!bParam2)
		{
			if (func_54(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630816[iParam0 /*597*/].f_11 != func_51())
		{
			return iParam1 == Global_1630816[iParam0 /*597*/].f_11;
		}
	}
	return 0;
}

int func_54(int iParam0, int iParam1)
{
	if (iParam1 != func_51())
	{
		if (iParam0 != func_51())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 != func_51())
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

bool func_55()
{
	return func_56(unk_0x1146A9AE09CE2B14());
}

int func_56(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_51())
		{
			return Global_1630816[iParam0 /*597*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_57(bool bParam0)
{
	return func_58(unk_0x1146A9AE09CE2B14(), bParam0);
}

bool func_58(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_56(iParam0))
		{
			return 0;
		}
	}
	return Global_1630816[iParam0 /*597*/].f_11 != func_51();
}

int func_59()
{
	int iVar0;
	
	iVar0 = func_60();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_60()
{
	Call_Loc(Local_834.f_55);
	return StackVal;
}

int func_61(int iParam0)
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

bool func_62(int iParam0)
{
	return func_4(&(Local_284.f_16), iParam0);
}

bool func_63(int iParam0)
{
	return func_64(Local_284.f_38.f_1[iParam0 /*21*/].f_14);
}

bool func_64(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Local_1898.f_62, iParam0);
}

int func_65(int iParam0, int iParam1)
{
	Stack.Push(Local_834.f_139.f_154 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_834.f_139.f_154);
	if (StackVal && StackVal)
	{
		if (Local_834.f_139.f_153 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_139.f_153);
		}
		func_115(&(Local_1898.f_26[iParam0 /*22*/]));
		return 1;
	}
	return 0;
}

void func_66(int iParam0)
{
}

int func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	func_110(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_139.f_139);
	iVar0 = StackVal;
	if (func_109(iVar0))
	{
		iVar1 = Local_284.f_38.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (func_108(Local_1898.f_49[iVar1 /*6*/]))
			{
				if (func_107(&(Local_1898.f_26[iParam0 /*22*/]), Local_1898.f_49[iVar1 /*6*/], 26, iVar0, Local_284.f_38.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_88(iParam0);
					unk_0x824F744352C8BC82(iVar0);
					func_87();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_139.f_140);
			Var2 = { StackVal, StackVal, StackVal };
			if (!func_86(Var2))
			{
				if (!func_84(iParam0) || func_69(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_1898.f_26[iParam0 /*22*/]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(Var2);
					Stack.Push(iParam0);
					Call_Loc(Local_834.f_139.f_141);
					if (func_68(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_88(iParam0);
						func_87();
						unk_0x824F744352C8BC82(iVar0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2, struct<3> Param3, var uParam6, bool bParam7, int iParam8, int iParam9)
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

int func_69(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
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
		if (func_78(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405077.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_70(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405077.f_2++;
	return 1;
}

int func_70(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
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
				if (unk_0x0BABEFEA577FCFA4(func_75(unk_0x1146A9AE09CE2B14()), Param0, 1) <= (fVar2 + fParam3))
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
			if (!func_72(iVar1, 0) && unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x1146A9AE09CE2B14()))
				{
					if ((func_71(iVar1) || !bParam10) && !Global_2426865[iVar1 /*449*/].f_268)
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
								if (unk_0x0BABEFEA577FCFA4(func_75(iVar1), Param0, 1) <= (fVar2 + fParam3))
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
							if (unk_0x0BABEFEA577FCFA4(func_75(iVar1), Param0, 1) <= (fVar2 + fParam3))
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

int func_71(int iParam0)
{
	if (unk_0xDC89C3FDCADCA32F(unk_0xD56332194D622ECE(iParam0)) || Global_2426865[iParam0 /*449*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_72(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		bVar0 = func_73(-1, 0) == 8;
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_74();
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

int func_74()
{
	return Global_1312763;
}

Vector3 func_75(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_77() && Global_1590908[iVar0 /*874*/].f_844) && !func_86(Global_1590908[iVar0 /*874*/].f_845))
	{
		return Global_1590908[iVar0 /*874*/].f_845;
	}
	return func_76(iParam0);
}

Vector3 func_76(int iParam0)
{
	return unk_0xD6E677FAD7521410(unk_0xD56332194D622ECE(iParam0), 0);
}

bool func_77()
{
	return Global_2453009.f_19;
}

int func_78(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
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
					if (!bParam7 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam9) && bParam6) && func_79(iVar1))
							{
							}
							else if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
							{
								if (unk_0x0BABEFEA577FCFA4(func_76(iVar1), Param0, 1) < fParam3)
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

int func_79(int iParam0)
{
	if (func_83(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	Global_2518253 = { func_82(iParam0) };
	if (unk_0x9B050CE2036A4DAD(&Global_2518253))
	{
		return 1;
	}
	if (func_80(unk_0x1146A9AE09CE2B14(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_81(iParam0);
	if (!iVar0 == func_51())
	{
		if (iVar0 == func_81(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 != func_51())
	{
		return Global_1630816[iParam0 /*597*/].f_11;
	}
	return func_51();
}

struct<13> func_82(int iParam0)
{
	struct<13> Var0;
	
	unk_0x483D665D1287B547(iParam0, &Var0, 13);
	return Var0;
}

int func_83(int iParam0, int iParam1)
{
	if (unk_0x29712F962253A7EB())
	{
		Global_2518253 = { func_82(iParam0) };
		Global_2518266 = { func_82(iParam1) };
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

int func_84(int iParam0)
{
	if (func_36(iParam0, 10) && func_85(iParam0, 8))
	{
		return 1;
	}
	return 0;
}

bool func_85(int iParam0, int iParam1)
{
	return func_4(&(Local_1898.f_26[iParam0 /*22*/].f_3), iParam1);
}

int func_86(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_87()
{
	if (Local_1898.f_95 != -1)
	{
		Local_1898.f_108 = { 0f, 0f, 0f };
		Local_1898.f_117 = 0f;
		iLocal_1860 = 0;
		Local_1898.f_80 = -1;
		Local_1898.f_95 = -1;
	}
}

void func_88(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0x8A437068C87289B7(Local_1898.f_26[iParam0 /*22*/]);
	bVar1 = func_85(iParam0, 19);
	func_103(iParam0, iVar0);
	if (bVar1)
	{
		func_101(iParam0, iVar0);
	}
	else
	{
		func_94(iParam0, iVar0);
	}
	if (Local_834.f_139.f_143 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_834.f_139.f_143);
	}
	if (func_36(iParam0, 5))
	{
		if (!unk_0xC49311A2A500FF09(iVar0, 0))
		{
			unk_0xA2C015B68CE01357(iVar0, true);
		}
		unk_0xC595907BB71C921D(iVar0, 101, 0);
		func_89(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_89(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (Local_284.f_38.f_1[iParam1 /*21*/].f_8 != -1)
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
			func_92(Var6, &Var9, &Var12, 0);
			unk_0xF79020AE00268B91(Var9, Var12, 300, 1, joaat("weapon_heavysniper"), 0, 0, 0, 80f);
			if (bParam3)
			{
				unk_0x7B28A83A0D3DD0F9(iParam0, 227, bParam2);
			}
			unk_0x7B28A83A0D3DD0F9(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_90(iParam0, -1, 0);
		}
	}
}

void func_90(int iParam0, int iParam1, bool bParam2)
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
			func_91(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_91(iVar0, iParam0);
	}
}

void func_91(int iParam0, var uParam1)
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

void func_92(struct<3> Param0, var uParam3, var uParam4, bool bParam5)
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
		if (func_93())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = unk_0xB36B8558948EA7A8(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (func_93())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = unk_0xB36B8558948EA7A8(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_93())
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

int func_93()
{
	if (unk_0x234B68AC2E35ED5A(unk_0xB36B8558948EA7A8(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_94(int iParam0, int iParam1)
{
	unk_0xBE91B077ADADE97F(iParam1, 1);
	unk_0x504B26425DFF773C(iParam1, 1);
	unk_0x8D8037621076DC86(iParam1, 0);
	if (func_36(iParam0, 6))
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
	unk_0xEA480A62F5D29812(iParam1, Local_284.f_38.f_1[iParam0 /*21*/].f_15);
	unk_0x095503B9F1CAC814(iParam1, func_100());
	unk_0xF8207455457B967E(iParam1, func_99(iParam0));
	unk_0xA1217FA3D209873F(iParam1, func_98());
	unk_0xA415F00D0E0DFBCE(iParam1, 24, 0);
	unk_0xF8E5239A2E6E0754(iParam1, func_97());
	unk_0xC595907BB71C921D(iParam1, func_97(), 0);
	unk_0xB8FD45B9686D7177(iParam1, 1);
	func_95(iParam0, iParam1);
}

void func_95(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_284.f_38.f_1[iParam0 /*21*/].f_20 != -1f)
	{
		unk_0xD478F2D087D53713(iParam1, unk_0xD6E677FAD7521410(iParam1, 0), Local_284.f_38.f_1[iParam0 /*21*/].f_20, 0, 0);
		return;
	}
	iVar0 = Local_284.f_38.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = Local_284.f_38.f_23[iVar0 /*5*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_96(iVar2, 4))
			{
				unk_0xFEF60EAEB2A1B906(iParam1, Local_284.f_484.f_1[iVar2 /*9*/].f_2, Local_284.f_484.f_1[iVar2 /*9*/].f_5, Local_284.f_484.f_1[iVar2 /*9*/].f_8, 0, 0);
			}
		}
		iVar1++;
	}
}

bool func_96(int iParam0, int iParam1)
{
	return func_4(&(Local_284.f_484.f_1[iParam0 /*9*/]), iParam1);
}

int func_97()
{
	switch (Local_1898.f_79)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		default:
	}
	return 200;
}

int func_98()
{
	switch (Local_1898.f_79)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		default:
	}
	return 60;
}

int func_99(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_139.f_142);
	Stack.Push(StackVal == joaat("weapon_rpg"));
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_139.f_142);
	if (StackVal || StackVal == joaat("weapon_railgun"))
	{
		return 2;
	}
	switch (Local_1898.f_79)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		default:
	}
	return 10;
}

int func_100()
{
	switch (Local_1898.f_79)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		default:
	}
	return 1;
}

void func_101(int iParam0, int iParam1)
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
	unk_0xF8207455457B967E(iParam1, func_99(iParam0));
	unk_0xA1217FA3D209873F(iParam1, func_98());
	unk_0xF8E5239A2E6E0754(iParam1, func_97());
	unk_0xC595907BB71C921D(iParam1, func_97(), 0);
	unk_0x095503B9F1CAC814(iParam1, func_100());
	if (func_102(iParam0))
	{
		unk_0xA415F00D0E0DFBCE(iParam1, 52, 1);
		unk_0xA415F00D0E0DFBCE(iParam1, 53, 1);
	}
}

int func_102(int iParam0)
{
	if (func_36(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_106(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(unk_0xD93F965CFAC1D06A(Local_1898.f_26[iParam0 /*22*/]), 1);
	}
	if (!func_61(iParam1))
	{
		unk_0x7B28A83A0D3DD0F9(iParam1, 324, true);
	}
	if (Local_284.f_38.f_1[iParam0 /*21*/].f_2 == joaat("mp_g_m_pros_01"))
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
	if (Local_284.f_38.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_38(iParam0, 2);
		unk_0xC5DE9743D6DA2C15(iParam1);
		unk_0x8B58E7AC53EED9F1(iParam1, 1);
		unk_0x46EDFC827DC67D89(iParam1, 1, 1);
	}
	if (func_36(iParam0, 11))
	{
		unk_0xFC4706297CB9D7D2(iParam1, 1, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_139.f_142);
	iVar0 = StackVal;
	if (iVar0 != 0)
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			unk_0x6A021CF02A47AF78(iParam1, 1);
		}
		else
		{
			unk_0xD82D50E4AC0D46B9(iParam1, iVar0, 9999999, func_105(iParam0), 1);
		}
	}
	unk_0x7BC3A9305442B7FD(iParam1, 1);
	unk_0x2BDB866C1791F9D7(iParam1, 1);
	unk_0x087B9DEC55AB5B29(iParam1, Local_284.f_38.f_1[iParam0 /*21*/].f_17);
	unk_0xACF48634C49FCE07(iParam1, Local_284.f_38.f_1[iParam0 /*21*/].f_18);
	unk_0x91B8E16D0EB126A5(iParam1, Local_284.f_38.f_1[iParam0 /*21*/].f_19);
	iVar1 = func_104(iParam0);
	if (iVar1 != joaat("COP"))
	{
		unk_0x2271ED1E65FB75EE(iParam1, iVar1);
	}
}

var func_104(int iParam0)
{
	return Local_284.f_38.f_23[Local_284.f_38.f_1[iParam0 /*21*/].f_14 /*5*/];
}

int func_105(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_139.f_2);
	Stack.Push(!unk_0xAB6A270F84A8781E(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_139.f_2);
	if (StackVal && unk_0xDA654EB115F9FF7D(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_85(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

int func_106(int iParam0)
{
	if (func_62(22))
	{
		return 1;
	}
	return 0;
}

int func_107(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, bool bParam5, int iParam6, int iParam7)
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
	*uParam0 = unk_0x818C6D67AB3F266B(unk_0x42F3C85A00B4FC7B(unk_0x854C404AEB476240(uParam1), iParam2, iParam3, uParam4, iParam6, bParam5));
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

int func_108(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		unk_0x1AA7FA4BBD799B88(uParam0);
		return unk_0xB364346471C3B028(uParam0);
	}
	return 0;
}

bool func_109(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x16E516CA9C88FF48(iParam0);
	return unk_0xA9C0BBFB9CBB66F1(iParam0);
}

void func_110(int iParam0, var uParam1)
{
	if (Local_1898.f_95 == -1)
	{
		Local_1898.f_80 = iParam0;
		Local_1898.f_95 = uParam1;
	}
}

int func_111(int iParam0)
{
	if (!func_114(0, iParam0))
	{
		return 0;
	}
	if (Local_284.f_38.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (!func_112(Local_1898.f_49[Local_284.f_38.f_1[iParam0 /*21*/].f_8 /*6*/]))
		{
			return 0;
		}
	}
	return 1;
}

int func_112(var uParam0)
{
	if (unk_0xB7D6400C89373777(uParam0))
	{
		return !func_113(unk_0x854C404AEB476240(uParam0));
	}
	return 0;
}

int func_113(int iParam0)
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

int func_114(int iParam0, int iParam1)
{
	if (Local_1898.f_80 == -1)
	{
		return 1;
	}
	if (Local_1898.f_80 == iParam0)
	{
		if (Local_1898.f_95 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_115(var uParam0)
{
	var uVar0;
	
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x75E3AAA7D01DEDC8(&uVar0);
	}
}

int func_116(int iParam0)
{
	return 1;
}

int func_117(int iParam0)
{
	if (Local_834.f_139.f_138 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_139.f_138);
		return StackVal;
	}
	return 1;
}

int func_118(int iParam0, int iParam1)
{
	return 0;
}

void func_119(int iParam0, int iParam1)
{
	if (!bLocal_1836)
	{
		return;
	}
	Local_1898.f_26[iParam0 /*22*/].f_1 = iParam1;
}

void func_120(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_121(iParam0);
	*bParam1 = unk_0x159BC3DDA80D71AC(Local_1898.f_26[iParam0 /*22*/]);
	if (*bParam1)
	{
		*iParam3 = unk_0x8A437068C87289B7(Local_1898.f_26[iParam0 /*22*/]);
		*bParam2 = unk_0xECEC7528A52B4EE8(*iParam3);
	}
}

int func_121(int iParam0)
{
	return Local_1898.f_26[iParam0 /*22*/].f_1;
}

void func_122()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < Local_284.f_84)
	{
		bVar3 = unk_0x159BC3DDA80D71AC(Local_1898.f_56[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = unk_0xD93F965CFAC1D06A(Local_1898.f_56[iVar4 /*5*/]);
			bVar2 = unk_0xE50EB54E0F21BED0(iVar0, 0);
			if (Local_834.f_343.f_33 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_834.f_343.f_33);
			}
		}
		if (func_140(iVar4) > 1 && func_140(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_139(iVar4, 3);
				}
				else if (func_138(iVar4))
				{
					func_139(iVar4, 3);
				}
			}
			else
			{
				func_139(iVar4, 3);
			}
		}
		func_134(iVar4, iVar0);
		switch (func_140(iVar4))
		{
			case 0:
				if (func_133(iVar4))
				{
					func_139(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_132(iVar4)) && func_123(iVar4))
				{
					func_139(iVar4, 2);
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

int func_123(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!unk_0x159BC3DDA80D71AC(Local_1898.f_56[iParam0 /*5*/]))
	{
		Var1 = { func_131(iParam0) };
		Var4 = { func_130(iParam0) };
		if (func_86(Var1))
		{
			return 0;
		}
		iVar7 = Local_284.f_84.f_1[iParam0 /*12*/].f_3;
		if (!func_109(iVar7))
		{
			return 0;
		}
		if (func_128(&(Local_1898.f_56[iParam0 /*5*/]), iVar7, Var1, 1, 1, 1, func_129(iParam0, 22), 1, 0, 0))
		{
			iVar0 = unk_0xBD11ACD80727BD31(Local_1898.f_56[iParam0 /*5*/]);
			unk_0xBDDCDEC7B6205897(iVar0, Var4, 2, 1);
			func_124(iParam0, iVar0);
			unk_0x824F744352C8BC82(iVar7);
		}
	}
	if (unk_0x159BC3DDA80D71AC(Local_1898.f_56[iParam0 /*5*/]))
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0, int iParam1)
{
	var uVar0;
	var uVar6;
	
	unk_0xE3DD1DA290B04CCE(unk_0xBD11ACD80727BD31(Local_1898.f_56[iParam0 /*5*/]), 300);
	unk_0x3A653D4F5FA4B665(iParam1, func_129(iParam0, 17), func_129(iParam0, 18), func_129(iParam0, 19), func_129(iParam0, 20), func_129(iParam0, 21), 0, 0, 0);
	func_126(iParam0, 0);
	if (func_129(iParam0, 32))
	{
		unk_0x8F160110753EB17B(iParam1, true);
		unk_0x4603196EEEA2355C(iParam1, false, 0);
		unk_0xA2C015B68CE01357(iParam1, true);
		unk_0x3CBE9F07524C242D(iParam1, false, 0);
	}
	if (!func_129(iParam0, 1))
	{
		unk_0xAFD4554ABD55837D(unk_0xBD11ACD80727BD31(Local_1898.f_56[iParam0 /*5*/]));
	}
	if (func_129(iParam0, 2))
	{
		unk_0x49783353F325DA92(Local_1898.f_56[iParam0 /*5*/], 1, 1);
		unk_0x0C0EE4235CEF6BEB(Local_1898.f_56[iParam0 /*5*/], 1);
		unk_0xD6CC8E0FECE4BC9E(iParam1, 1, 1);
	}
	if (func_129(iParam0, 3))
	{
		unk_0x3CBE9F07524C242D(iParam1, false, 0);
	}
	if (func_129(iParam0, 4))
	{
		unk_0xA74E37218BD2AF3E(iParam1, 1);
	}
	if (func_129(iParam0, 5))
	{
		unk_0x1D43372AC14C8C87(iParam1, 0);
	}
	if (func_129(iParam0, 6))
	{
		unk_0x0B87A8220B73252D(iParam1, 1);
	}
	if (func_129(iParam0, 7))
	{
		unk_0xBC5268D1B5C5B73B(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, 0, 0, 0, 0, 1);
	}
	if (func_129(iParam0, 15))
	{
		unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(Local_1898.f_56[iParam0 /*5*/]), 1200);
	}
	if (func_129(iParam0, 8))
	{
		unk_0xA2C015B68CE01357(iParam1, true);
	}
	if (func_129(iParam0, 9))
	{
		unk_0x577BE43A512C41FE(unk_0xBD11ACD80727BD31(Local_1898.f_56[iParam0 /*5*/]), 1);
	}
	if (func_129(iParam0, 16))
	{
		unk_0x78CDDD1E6367978D(iParam1, func_131(iParam0), 1, 0, 0, 1);
	}
	if (func_129(iParam0, 10))
	{
		unk_0x8F160110753EB17B(iParam1, true);
	}
	if (func_129(iParam0, 11))
	{
		unk_0x75DE023B2CB7B528(iParam1, 1);
	}
	if (func_125(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(iParam1, 1);
	}
	if (func_129(iParam0, 13))
	{
		unk_0x4603196EEEA2355C(iParam1, false, 0);
	}
	if (func_129(iParam0, 14))
	{
		Stack.Push(Local_834.f_343.f_22 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar6);
		Call_Loc(Local_834.f_343.f_22);
		if (StackVal && StackVal)
		{
			unk_0xDD0CBE69BF0D526F(&uVar0, iParam1);
			unk_0xCDF87F9AAD28040F(&uVar0, 1);
			unk_0xCC0AF533DD744245(&uVar0, &uVar6);
		}
	}
	if (Local_834.f_343.f_30 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_834.f_343.f_30);
	}
}

int func_125(int iParam0)
{
	if (func_129(iParam0, 12))
	{
		return 1;
	}
	if (func_62(22))
	{
		return 1;
	}
	return 0;
}

void func_126(int iParam0, int iParam1)
{
	if (func_127(&(Local_1898.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_127(var uParam0, var uParam1)
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

int func_128(var uParam0, int iParam1, struct<3> Param2, bool bParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
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

bool func_129(int iParam0, int iParam1)
{
	return func_4(&(Local_284.f_84.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_130(int iParam0)
{
	struct<3> Var0;
	
	if (Local_834.f_343.f_35 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_343.f_35);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_86(Var0))
	{
		Var0 = { Local_284.f_84.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_131(int iParam0)
{
	struct<3> Var0;
	
	if (Local_834.f_343.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_343.f_34);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_86(Var0))
	{
		Var0 = { Local_284.f_84.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_132(int iParam0)
{
	return 1;
}

int func_133(int iParam0)
{
	if (Local_834.f_343.f_21 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_343.f_21);
		return StackVal;
	}
	return 1;
}

void func_134(int iParam0, int iParam1)
{
	if (Local_284.f_84.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_140(iParam0) > 1 && func_140(iParam0) < 3)
	{
		if (func_136(iParam0, iParam1))
		{
			func_135(iParam0, 8);
		}
		else
		{
			func_126(iParam0, 8);
		}
	}
}

void func_135(int iParam0, int iParam1)
{
	if (func_21(&(Local_1898.f_56[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_136(int iParam0, int iParam1)
{
	if (unk_0x419E13582192CFEA(iParam1))
	{
	}
	return func_137(iParam0, 8);
}

bool func_137(int iParam0, int iParam1)
{
	return func_4(&(Local_1898.f_56[iParam0 /*5*/].f_2), iParam1);
}

int func_138(int iParam0)
{
	if (Local_834.f_343.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_343.f_24);
		return StackVal;
	}
	return 0;
}

void func_139(int iParam0, int iParam1)
{
	Local_1898.f_56[iParam0 /*5*/].f_1 = iParam1;
}

int func_140(int iParam0)
{
	return Local_1898.f_56[iParam0 /*5*/].f_1;
}

void func_141()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_284.f_67)
	{
		bVar5 = unk_0x159BC3DDA80D71AC(Local_1898.f_49[iVar0 /*6*/]);
		if (bVar5)
		{
			iVar2 = unk_0x854C404AEB476240(Local_1898.f_49[iVar0 /*6*/]);
			bVar4 = func_112(Local_1898.f_49[iVar0 /*6*/]);
			bVar6 = func_401(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_398(iVar0, 2);
			}
		}
		if (func_397(iVar0) > 2)
		{
			if (func_397(iVar0) != 5 && func_397(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_396(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_396(iVar0, 5);
				}
				else if (func_395(iVar0, iVar2))
				{
					func_396(iVar0, 5);
				}
			}
		}
		if (Local_834.f_294.f_41 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_834.f_294.f_41);
		}
		func_391(iVar0, iVar2);
		switch (func_397(iVar0))
		{
			case 0:
				if (func_390(iVar0))
				{
					func_396(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar5)
				{
					if (func_389(iVar0))
					{
						func_396(iVar0, 2);
					}
				}
				else
				{
					func_115(&(Local_1898.f_49[iVar0 /*6*/]));
				}
				break;
			
			case 2:
				if (!bVar3)
				{
					if (func_388(iVar0))
					{
						if (func_150(iVar0))
						{
							func_396(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar5)
				{
					if (func_149(iVar0, iVar2))
					{
						func_396(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_148(iVar0, iVar2);
						}
						break;
					
					case 5:
						if (func_147(iVar0, 0))
						{
							func_10(10);
						}
						if (bVar5)
						{
							if (func_149(iVar0, iVar2))
							{
							}
							else
							{
								if (func_147(iVar0, 23))
								{
									if (bVar5)
									{
										func_115(&(Local_1898.f_49[iVar0 /*6*/]));
									}
								}
								if (func_146(iVar0))
								{
									func_115(&(Local_1898.f_49[iVar0 /*6*/]));
									func_396(iVar0, 1);
								}
								break;
							
							case 3:
								break;
							
							case 6:
								if (bVar5 && func_144(iVar0, iVar2))
								{
									func_115(&(Local_1898.f_49[iVar0 /*6*/]));
								}
								break;
							
							case 7:
								break;
						}
						if (bVar6)
						{
							func_143(iVar0, 13);
						}
						else
						{
							func_142(iVar0, 13);
						}
					}
					iVar0++;
				}

void func_142(int iParam0, int iParam1)
{
	if (func_127(&(Local_1898.f_49[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

void func_143(int iParam0, int iParam1)
{
	if (func_21(&(Local_1898.f_49[iParam0 /*6*/].f_2), iParam1))
	{
	}
}

int func_144(int iParam0, int iParam1)
{
	if (func_147(iParam0, 23) || func_145(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_834.f_294.f_47 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_834.f_294.f_47);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

bool func_145(int iParam0, int iParam1)
{
	return func_4(&(Local_1898.f_49[iParam0 /*6*/].f_2), iParam1);
}

int func_146(int iParam0)
{
	if (func_460() != 0)
	{
		return 0;
	}
	if (func_147(iParam0, 13))
	{
		if (Local_834.f_294.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_294.f_30);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_147(int iParam0, int iParam1)
{
	return func_4(&(Local_284.f_67.f_1[iParam0 /*14*/]), iParam1);
}

void func_148(int iParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (iParam0 != Local_284.f_67.f_16)
	{
		return;
	}
	Var0 = { unk_0xD6E677FAD7521410(iParam1, 0) };
	fVar3 = 500f;
	if (func_86(Local_1898.f_114))
	{
		Local_1898.f_114 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_1898.f_114) > (550f * 550f))
	{
		if (Local_1898.f_99 != -1)
		{
			unk_0x559B06B6D67877B4(Local_1898.f_99, 0);
		}
		Local_1898.f_114 = { Var0 };
		Local_1898.f_99 = unk_0xE5A1E4E094971D4D(Local_1898.f_114, fVar3, 1f, 0.02f, 0, 1);
	}
}

int func_149(int iParam0, int iParam1)
{
	Stack.Push(Local_834.f_294.f_47 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_834.f_294.f_47);
	if (StackVal && StackVal)
	{
		func_115(&(Local_1898.f_49[iParam0 /*6*/]));
		return 1;
	}
	return 0;
}

int func_150(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_110(1, iParam0);
	iVar0 = Local_284.f_67.f_1[iParam0 /*14*/].f_3;
	if (!func_109(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_86(Local_1898.f_108))
	{
		if (func_145(iParam0, 15))
		{
		}
		else if (func_147(iParam0, 17))
		{
			if (!func_262(iParam0, &(Local_1898.f_108), &(Local_1898.f_117)))
			{
				bVar1 = false;
			}
		}
		else if (func_147(iParam0, 25))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_1898.f_108));
			Stack.Push(&(Local_1898.f_117));
			Call_Loc(Local_834.f_294.f_33);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_147(iParam0, 18))
		{
			if (!func_258(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_147(iParam0, 19))
		{
			if (!func_252(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_1898.f_108 = { Local_284.f_67.f_1[iParam0 /*14*/].f_4 };
			Local_1898.f_117 = Local_284.f_67.f_1[iParam0 /*14*/].f_7;
		}
	}
	if (bVar1)
	{
		if (!func_147(iParam0, 30))
		{
			func_231(Local_1898.f_108, 30f, 0);
			unk_0x6AF7EE4DD9F8B944(Local_1898.f_108, 30f, 0, 0, 0, 1);
		}
		if (func_228(&(Local_1898.f_49[iParam0 /*6*/]), iVar0, Local_1898.f_108, Local_1898.f_117, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			iVar2 = unk_0x854C404AEB476240(Local_1898.f_49[iParam0 /*6*/]);
			func_151(iParam0, iVar2);
			func_87();
			return 1;
		}
	}
	return 0;
}

void func_151(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6471F4759775FCA4(iParam1);
	if (!func_162(iParam0, iParam1))
	{
		func_161(iParam0, iParam1);
	}
	if (func_160(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(iParam1, 1);
	}
	unk_0x8F160110753EB17B(iParam1, func_147(iParam0, 10));
	unk_0xBB18EA5F1620FF5F(iParam1, func_147(iParam0, 3));
	unk_0x5E3D11E1DC5FBF4D(iParam1, func_147(iParam0, 3));
	unk_0x0201EE6F15BD3F23(iParam1, func_147(iParam0, 5));
	if (unk_0x8C6BE3ED9638F314(iVar0))
	{
		unk_0x2310A8F9421EBF43(iParam1);
	}
	if (func_147(iParam0, 4))
	{
		unk_0x5C052A30B9FCA449(iParam1, 7);
	}
	if (func_147(iParam0, 25))
	{
		unk_0xDB8D6815E13996A9(iParam1, Local_1898.f_108, 0, 0, 1);
	}
	if (func_147(iParam0, 8))
	{
		unk_0x70B2AB1977EB9053(iParam1, 2, 2);
		unk_0x70B2AB1977EB9053(iParam1, 3, 2);
		unk_0x639C36116F049ECB(iParam1, 0);
	}
	if (func_147(iParam0, 28))
	{
		unk_0x49783353F325DA92(Local_1898.f_49[iParam0 /*6*/], 1, 1);
		unk_0xD6CC8E0FECE4BC9E(iParam1, 1, 1);
	}
	if (func_145(iParam0, 14))
	{
		unk_0xC595907BB71C921D(iParam1, 1000, 0);
		unk_0xED4E91A1FC7ABBF6(iParam1, 0);
		unk_0xAC2B08493719B297(iParam1, 1);
		unk_0x3CCFC106A6738860(iParam1, 0);
		if (func_159(iParam0, iVar0))
		{
			unk_0x1F7ED1C13023483B(iParam1, 0);
			unk_0x47DE5E87A1AC7CBD(iParam1, func_158(iParam0, iVar0));
		}
		if (unk_0x48E10529AEAE00F9(iVar0))
		{
			unk_0x510B8B2F51ECC627(iParam1, 0);
			unk_0xA5D39CB3073E83F4(iParam1, 0f);
		}
		func_156(iParam1, iVar0);
		func_155(iParam1, 1);
		unk_0x84418AD4000B0403(iParam1, 0);
		unk_0x78683FED1CF3DDE3(iParam1, func_147(iParam0, 7), 0);
		func_154(iParam0, iParam1);
	}
	if (func_147(iParam0, 11))
	{
		unk_0xA2C015B68CE01357(iParam1, true);
	}
	if (func_147(iParam0, 32))
	{
		unk_0xC55DA02D18D77322(iParam1, 3);
		unk_0xA3FD819B07AA6542(iParam1, 1);
	}
	if (func_147(iParam0, 33))
	{
		unk_0xE3F32DF0088B1EA4(iParam1, 1);
	}
	if (func_145(iParam0, 15))
	{
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
	if (func_145(iParam0, 15) || func_147(iParam0, 19))
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
	func_152(iParam1);
	unk_0xEE46C75CC4278490(Local_1898.f_49[iParam0 /*6*/], 1);
	if (Local_834.f_294.f_38 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_834.f_294.f_38);
	}
}

void func_152(int iParam0)
{
	int iVar0;
	
	func_153(iParam0);
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

void func_153(int iParam0)
{
	if (unk_0x8BA4AD00568AB5FC("Not_Allow_As_Saved_Veh", 3))
	{
		if (!unk_0x5B38E054B758C032(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			unk_0x6C9577C090944B92(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

void func_154(int iParam0, int iParam1)
{
	if (unk_0x8BA4AD00568AB5FC("FMCVehicle", 2))
	{
		unk_0x674364FB1963C598(iParam1, "FMCVehicle", 1);
	}
}

void func_155(int iParam0, bool bParam1)
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

void func_156(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			unk_0x87F4BEB993196F12(iParam0, 0);
			break;
	}
	func_157(iParam0);
}

void func_157(int iParam0)
{
	if (!Global_262145.f_4684)
	{
		unk_0x040C47F5DFA52DB2(iParam0, 0);
	}
}

float func_158(int iParam0, int iParam1)
{
	if (Local_834.f_294.f_32 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_294.f_32);
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

bool func_159(int iParam0, int iParam1)
{
	return func_158(iParam0, iParam1) != 1f;
}

int func_160(int iParam0)
{
	if (func_62(22))
	{
		return 1;
	}
	return 0;
}

void func_161(int iParam0, int iParam1)
{
	if (Local_284.f_67.f_1[iParam0 /*14*/].f_8 != -1)
	{
		unk_0xC612552622E74D36(iParam1, Local_284.f_67.f_1[iParam0 /*14*/].f_8, Local_284.f_67.f_1[iParam0 /*14*/].f_8);
		unk_0xA2FEFE3BBCD9FB23(iParam1, Local_284.f_67.f_1[iParam0 /*14*/].f_8, Local_284.f_67.f_1[iParam0 /*14*/].f_8);
	}
}

int func_162(var uParam0, int iParam1)
{
	struct<101> Var0;
	
	if (Local_834.f_294.f_39 != 0)
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
		Call_Loc(Local_834.f_294.f_39);
		if (StackVal)
		{
			func_163(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

void func_163(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if ((unk_0x02BFF15CAA701972() && unk_0xA6BE8F025C6B653F(iParam0)) || !unk_0x02BFF15CAA701972())
		{
			if (unk_0x1146A9AE09CE2B14() != func_51())
			{
				uParam1->f_100 = unk_0x1146A9AE09CE2B14();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_215(iParam0, uParam1, bParam2, bParam3);
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
			if (func_214(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			unk_0xD5C0F2C0C23EEEBE(iParam0, uParam1->f_80);
			unk_0x2835492575BEB0E6(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				unk_0x78EF6BDFD91C7D7F(iParam0, uParam1->f_99);
			}
			if (func_213(iParam0))
			{
				func_207(iParam0, func_210(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (unk_0xFEFC4CE79A79BEE5(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				unk_0x912E56FD8DB2CADC(iParam0, uParam1->f_98);
			}
			if (unk_0x234B68AC2E35ED5A(uParam1->f_95, 0))
			{
				func_178(iParam0, &(uParam1->f_81));
			}
			if ((!func_169(4) && !bParam4) && !unk_0xE45310E861787FC2())
			{
				func_166(iParam0);
			}
			if (func_165(unk_0x6471F4759775FCA4(iParam0)))
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
						if (func_164(uParam1->f_81) && unk_0x9B4A5ABBC2942C51(&(uParam1->f_81)))
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

bool func_164(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x3699D36B67CC8836(&uParam0, 13);
}

int func_165(int iParam0)
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

void func_166(int iParam0)
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
				func_167(Var0);
			}
		}
	}
}

void func_167(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.x = 1146815758;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = Param0.x;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	unk_0xA5C82A39FF8ED272(1, &Var0, 5, func_168(1, 1));
}

int func_168(int iParam0, bool bParam1)
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
				else if (!func_72(iVar2, 0))
				{
					unk_0x191DDA30577F440A(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_169(int iParam0)
{
	int iVar0;
	
	if (func_177())
	{
		iVar0 = 0;
		while (iVar0 < 56)
		{
			if (func_176(iVar0) == iParam0)
			{
				if (func_170(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_170(int iParam0)
{
	return func_171(iParam0, 6, 1);
}

int func_171(int iParam0, int iParam1, bool bParam2)
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
		if (func_175() == 0)
		{
			return unk_0x234B68AC2E35ED5A(func_172(func_174(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x234B68AC2E35ED5A(Global_112293.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 != 12074)
	{
		if (iParam2 == 0)
		{
		}
		uVar0 = Global_2555716[iParam0 /*3*/][func_173(iParam1)];
		if (unk_0xD885BEFA31A18D47(uVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_173(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_74();
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

int func_174(int iParam0)
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

int func_175()
{
	return Global_31345;
}

int func_176(int iParam0)
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

bool func_177()
{
	return Global_99422.f_364 > 0;
}

int func_178(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_188(iParam0, uParam1))
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
		if (!func_186(iParam0))
		{
			iVar1 = unk_0x817F41864B424C70(uParam1);
			if (func_181(&iParam0, iVar1))
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
	else if (func_179(iParam0))
	{
	}
	return 0;
}

int func_179(int iParam0)
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
				func_180(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_180(int iParam0)
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

int func_181(int iParam0, int iParam1)
{
	func_185();
	if (Global_1312485.f_18 != 0 || unk_0x3114795AF6B2812D(*iParam0))
	{
		Global_1683856.f_11 = unk_0x35B66DA5A0E5ABE2(*iParam0);
		if (Global_1683856.f_11 < 0f)
		{
			Global_1683856.f_11 = 0f;
		}
	}
	func_183(*iParam0, &Global_1683856, &(Global_1683856.f_1), &(Global_1683856.f_4), &(Global_1683856.f_7), &(Global_1683856.f_10));
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
		if (func_182(iParam0, iParam1, Global_1683856, Global_1683856.f_1, Global_1683856.f_4, Global_1683856.f_7, Global_1683856.f_10, 0, Global_1683856.f_13))
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
		if (((Global_1683856.f_23 == 0 && func_182(iParam0, iParam1, Global_1683856, Global_1683856.f_1, Global_1683856.f_4, Global_1683856.f_7, Global_1683856.f_10, 0, Global_1683856.f_13)) || Global_1683856.f_23 != 0) && ((Global_1683856.f_24 == 0 && func_182(iParam0, iParam1, Global_1683856, Global_1683856.f_14, Global_1683856.f_17, Global_1683856.f_20, Global_1683856.f_10, 1, Global_1683856.f_13)) || Global_1683856.f_24 != 0))
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

bool func_182(var uParam0, int iParam1, var uParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, var uParam12, int iParam13, var uParam14)
{
	return unk_0x45381F1E5E17264C(*uParam0, unk_0xD56332194D622ECE(iParam1), uParam2, Param3, Param6, Param9, uParam12, iParam13, uParam14);
}

int func_183(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x419E13582192CFEA(iParam0) || !unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		return 0;
	}
	*uParam1 = unk_0xED5AD56E2C551D1E(iParam0, "chassis_dummy");
	if (((!func_184(Global_1683882, 0f, 0f, 0f, 0) && !func_184(Global_1683885, 0f, 0f, 0f, 0)) && !func_184(Global_1683888, 0f, 0f, 0f, 0)) && !Global_1683891 == 0f)
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

bool func_184(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_185()
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

int func_186(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
	{
		if (unk_0x88CF23F322C9687A(iParam0, 0) || func_187(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_187(int iParam0)
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

int func_188(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0x3699D36B67CC8836(uParam1, 13) && unk_0x9B4A5ABBC2942C51(uParam1))
	{
		iVar0 = unk_0x817F41864B424C70(uParam1);
	}
	else
	{
		iVar0 = func_51();
	}
	bVar1 = false;
	if (iVar0 == unk_0x1146A9AE09CE2B14())
	{
		if (func_199(15, 0))
		{
			bVar1 = true;
		}
		else if (func_195(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(unk_0x419E13582192CFEA(iParam0) && !unk_0xE50EB54E0F21BED0(iParam0, 0)) || !unk_0xA6BE8F025C6B653F(iParam0)) || !unk_0x68E0E843A17D2933(0, -1, 1)) || !((unk_0x3699D36B67CC8836(uParam1, 13) && unk_0x29712F962253A7EB()) && unk_0xDA1611E46AAEA71B(uParam1))) || iVar0 == func_51()) || !func_11(iVar0, 0, 0)) || !bVar1) || func_189(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_189(int iParam0)
{
	if (!unk_0x02BFF15CAA701972())
	{
		return 1;
	}
	if (func_191(unk_0x1146A9AE09CE2B14()) == 3)
	{
		if (func_190(iParam0) != -1)
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

int func_190(int iParam0)
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

int func_191(int iParam0)
{
	if (func_194(iParam0) == 233)
	{
		return func_192(iParam0);
	}
	return -1;
}

int func_192(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_182;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_33 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_33;
	}
	return -1;
}

bool func_195(bool bParam0)
{
	return func_196(unk_0x1146A9AE09CE2B14(), bParam0);
}

int func_196(int iParam0, bool bParam1)
{
	return func_197(iParam0, bParam1, 1);
}

int func_197(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_51())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_198(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630816[iParam0 /*597*/].f_11;
	if (iVar0 != func_51() && Global_1630816[iVar0 /*597*/].f_11.f_425 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0, int iParam1)
{
	if (iParam0 != func_51())
	{
		if (Global_1630816[iParam0 /*597*/].f_11 != func_51())
		{
			if (Global_1630816[iParam0 /*597*/].f_11 == iParam0 && Global_1630816[iParam0 /*597*/].f_11.f_425 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_199(int iParam0, bool bParam1)
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
	if (func_204(unk_0x1146A9AE09CE2B14()))
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
	iVar0 = func_201(iParam0);
	iVar1 = iParam0;
	return unk_0x234B68AC2E35ED5A(iVar0, func_200(iVar1));
}

int func_200(int iParam0)
{
	return (iParam0 % 32);
}

int func_201(int iParam0)
{
	int iVar0;
	
	iVar0 = func_172(func_202(iParam0), -1, 0);
	return iVar0;
}

int func_202(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_203(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_203(int iParam0)
{
	return (iParam0 / 32);
}

int func_204(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_205(iParam0) && Global_2426865[iParam0 /*449*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
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

void func_207(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_209(iParam1);
	func_208(iVar1, &uVar0);
	unk_0x78EF6BDFD91C7D7F(iParam0, uVar0);
}

bool func_208(int iParam0, var uParam1)
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

int func_209(int iParam0)
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

int func_210(int iParam0, int iParam1, int iParam2)
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
	if ((unk_0x02BFF15CAA701972() && func_211()) && Global_1314058)
	{
		if ((iParam0 == Global_1314059 && iParam1 == Global_1314060) && iParam2 == Global_1314061)
		{
			return 13;
		}
	}
	return 0;
}

int func_211()
{
	struct<13> Var0;
	
	if (unk_0x5B99D5C0DE301BD3())
	{
		if ((unk_0x0B4295B1608BB934() && unk_0xB2EC8B4970766623()) && unk_0x678E959F60C0DB94())
		{
			Var0 = { func_212() };
			if (unk_0x29712F962253A7EB() && unk_0xDA1611E46AAEA71B(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_212()
{
	struct<13> Var0;
	
	unk_0x738A74C5899697B7(&Var0, 13);
	return Var0;
}

int func_213(int iParam0)
{
	switch (unk_0x6471F4759775FCA4(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_214(int iParam0, var uParam1)
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

void func_215(int iParam0, var uParam1, bool bParam2, bool bParam3)
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
		if (!func_226(iParam0))
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
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_225(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_225(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_225(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_225(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_225(iVar2)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_225(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_225(iVar3)))
				{
				}
				else
				{
					unk_0x191DDA30577F440A(&(uParam1->f_77), func_225(iVar3));
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
					if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_225(iVar4)))
					{
					}
					else
					{
						unk_0x191DDA30577F440A(&(uParam1->f_77), func_225(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_225(4)))
			{
			}
			else
			{
				unk_0x191DDA30577F440A(&(uParam1->f_77), func_225(4));
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
			unk_0x191DDA30577F440A(&(uParam1->f_77), func_225(1));
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
		if (((unk_0x234B68AC2E35ED5A(uParam1->f_77, 15) || func_224(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_223())
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
		if (uParam1->f_65 == -1 && !func_222(uParam1->f_66))
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
						func_221(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_221(iParam0, uParam1->f_69);
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
			func_216(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xE267416B80E7921F(uParam1->f_66) && !unk_0x8D367F0B53916265(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0x234B68AC2E35ED5A(uParam1->f_77, func_225(iVar5 + 1)))
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

int func_216(int iParam0, var uParam1, var uParam2)
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
	if (func_220(unk_0x6471F4759775FCA4(*iParam0), 1) && unk_0xB51972B58BF40F96(*iParam0, 24) != func_219(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6895CB0D4F2E7CDC(*iParam0, 24, func_219(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_218(iParam0);
	if (func_217(*iParam0))
	{
		unk_0xAC2B08493719B297(*iParam0, 1);
		unk_0xD4DF29F3D7B97053(*iParam0, 1);
	}
	return 1;
}

int func_217(int iParam0)
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

void func_218(var uParam0)
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

int func_219(int iParam0, int iParam1)
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

int func_220(int iParam0, int iParam1)
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

void func_221(int iParam0, var uParam1)
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

int func_222(int iParam0)
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

bool func_223()
{
	return unk_0x14FA206D9CE730A9(-1691188696);
}

int func_224(int iParam0)
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

int func_225(int iParam0)
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

int func_226(int iParam0)
{
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		if (!func_227(unk_0x1146A9AE09CE2B14(), -1))
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
	if (func_191(unk_0x1146A9AE09CE2B14()) == 3)
	{
		if (unk_0x419E13582192CFEA(iParam0) && unk_0xBFCE58B2B3249999(iParam0, 0))
		{
			if (func_190(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_227(int iParam0, int iParam1)
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

int func_228(var uParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
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
	iVar1 = unk_0x170478CC84C8AE2F(iParam1, Param2, fParam5, iParam7, iParam6, iParam14);
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
			func_229(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_229(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_230(unk_0x1146A9AE09CE2B14(), Param0, iParam4) > -1)
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

int func_230(int iParam0, struct<3> Param1, int iParam4)
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

void func_231(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_248(&(Global_76066.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x0BABEFEA577FCFA4(Param0, Global_76066.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_232(iVar0);
			}
		}
		iVar0++;
	}
}

void func_232(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_248(&(Global_76066.f_555[0 /*21*/]), iParam0))
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
			if (((((iParam0 == 24 && func_247(iParam0, 0)) && Global_76975.f_66 == 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] != 0) && Global_112293.f_32747.f_1958[Global_76066.f_555[0 /*21*/].f_14] > 3) && (!func_236(0, Global_76066.f_555[0 /*21*/].f_12) || !func_236(1, Global_76066.f_555[0 /*21*/].f_12)))
			{
				func_235(&(Global_112293.f_32747.f_69[Global_76066.f_555[0 /*21*/].f_14 /*78*/]), &Global_76975);
				Global_77053 = Global_112293.f_32747.f_5591;
			}
			func_233(iParam0, 0);
		}
	}
}

void func_233(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_247(iParam0, 0))
		{
			func_234(iParam0, 1, 0);
			func_234(iParam0, 2, 0);
			func_234(iParam0, 3, 0);
			func_234(iParam0, 4, 0);
			func_234(iParam0, 0, 1);
			Global_76066[iParam0] = 1;
		}
	}
	else
	{
		func_234(iParam0, 0, 0);
	}
}

void func_234(int iParam0, int iParam1, bool bParam2)
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

void func_235(var uParam0, var uParam1)
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

int func_236(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_246(&(Global_112293.f_32747.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_237(Global_112293.f_32747.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_237(int iParam0, bool bParam1)
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
		if (!func_245())
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
		if ((((!func_244() && !func_243()) && !func_242()) && !func_241()) && !func_245())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x2322DD4FBF5E4E2F() || unk_0x3640D836D145B814()) || unk_0xE22116C6D321FECA())
		{
		}
		else if (!func_242())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_240(iParam0))
		{
			return 0;
		}
	}
	if (!func_238(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_239())
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

int func_239()
{
	if (unk_0x3640D836D145B814())
	{
		return unk_0x57FB3D94D590E8BC();
	}
	return 0;
}

int func_240(int iParam0)
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

int func_241()
{
	return 0;
}

int func_242()
{
	return 1;
}

int func_243()
{
	return 1;
}

int func_244()
{
	if (unk_0x14FA206D9CE730A9(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_245()
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

int func_246(var uParam0)
{
	return *uParam0;
}

bool func_247(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_112293.f_32747[iParam0], iParam1);
}

int func_248(var uParam0, int iParam1)
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
			uParam0->f_4 = func_249(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_249(0, 1);
			uParam0->f_12 = 0;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_249(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_249(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_249(1, 1);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_249(1, 2);
			uParam0->f_12 = 1;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 19);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_249(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_249(2, 1);
			uParam0->f_12 = 2;
			unk_0x191DDA30577F440A(&(uParam0->f_9), 20);
			unk_0x191DDA30577F440A(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_249(2, 1);
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
			if (func_245())
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
			if (func_245())
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
		if (!func_184(Global_112293.f_32747.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
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
		if (!func_184(Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x234B68AC2E35ED5A(uParam0->f_9, 20))
	{
		if (!func_184(Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112293.f_2361.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112293.f_2361.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_249(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_251(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_250(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_250(int iParam0, var uParam1, int iParam2)
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

bool func_251(int iParam0)
{
	return iParam0 < 3;
}

int func_252(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (func_255(iParam0, &Var4, &Var1, &uVar0))
	{
		if (func_254(iParam0, Var4, Var1, uVar0))
		{
			Local_1898.f_108 = { Var4 };
			Local_1898.f_117 = func_253(Var4, Var1);
			return 1;
		}
	}
	return 0;
}

float func_253(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return unk_0x832AD84AA258AE80((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_254(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;
	
	if (!func_69(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
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

int func_255(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_145(iParam0, 15))
	{
	}
	else
	{
		*uParam2 = { Local_284.f_67.f_1[iParam0 /*14*/].f_4 };
	}
	*uParam1 = { func_257(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_1860) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_1860) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_256());
	iLocal_1860++;
	if (iLocal_1860 >= 12)
	{
		iLocal_1860 = 0;
	}
	return 1;
}

float func_256()
{
	return 60f;
}

Vector3 func_257(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
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

int func_258(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	var uVar10;
	
	if (func_260(iParam0, &Var1, &Var4, &uVar10, &uVar0))
	{
		if (unk_0xDB6FBA5468510E93(Var4, Var1, uVar10, &Var7))
		{
			if (func_259(iParam0, Var7, Var4, uVar0))
			{
				Local_1898.f_108 = { Var7 };
				Local_1898.f_117 = func_253(Var7, Var4);
				return 1;
			}
		}
	}
	return 0;
}

int func_259(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (Local_834.f_294.f_37 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_834.f_294.f_37);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!func_69(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_145(iParam0, 15))
	{
	}
	else if (Local_834.f_294.f_35 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_294.f_35);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_294.f_35);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_284.f_67.f_1[iParam0 /*14*/].f_4 };
		*uParam2 = { Local_284.f_67.f_1[iParam0 /*14*/].f_4 };
	}
	if (iLocal_1860 > 0)
	{
		func_261(uParam1);
	}
	if (Local_834.f_294.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_294.f_36);
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

void func_261(var uParam0)
{
	if (iLocal_1860 < 5)
	{
		switch (iLocal_1860)
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
		iLocal_1860 = 0;
	}
	iLocal_1860++;
}

bool func_262(int iParam0, var uParam1, var uParam2)
{
	struct<35> Var0;
	
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_294.f_34);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_263(Local_284.f_67.f_1[iParam0 /*14*/].f_4, Local_284.f_67.f_1[iParam0 /*14*/].f_4, Local_284.f_67.f_1[iParam0 /*14*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_263(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
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
	if (!func_385())
	{
		return 0;
	}
	if (func_384() && !Global_2405077.f_679 == unk_0x2053F6ACFD4ED4BC())
	{
		if (!Global_2405077.f_675 == 0)
		{
			Global_2405077.f_675 = 0;
			func_383();
			func_382();
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_674)
	{
		if (!Global_2405077.f_675 == 0)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) < func_381(0))
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
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_678) > func_381(1))
			{
				Global_2405077.f_675 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_375(Param0))
		{
			if (func_374(&Param0, 1))
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
		func_373();
		func_383();
		if (!uParam10->f_27 || (((((((func_372(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2544210.f_924) && !Global_2544210.f_913) && !Global_2544210.f_921) && !Global_2544210.f_925) && !Global_2544210.f_933) && !Global_2544210.f_945))
		{
			func_353(Param0, iParam6);
		}
		if (func_339(Param0))
		{
			func_353(Param0, iParam6);
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
				if (((uParam10->f_3 && func_69(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_337(Param0, *uParam9, iParam6, unk_0x1146A9AE09CE2B14(), 0))
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
					func_283(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var5);
				}
				func_281(Global_2405077.f_682, Global_2405077.f_685, iParam6, &(Global_2405077.f_672));
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
							if (func_280(Global_2405077.f_682, Global_2405077.f_685, iParam6, 1, 1036831949))
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
						func_278(Global_2405077.f_682, 0);
						func_277(-1);
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
				func_277(-1);
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
								if (func_276(Global_2405077.f_682, Global_2405077.f_685, iParam6, unk_0x1146A9AE09CE2B14(), 0) || func_265(Global_2405077.f_682, Global_2405077.f_685, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_278(Global_2405077.f_682, 0);
									func_277(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_278(Global_2405077.f_682, 0);
								func_277(-1);
							}
						}
					}
					else
					{
						func_277(-1);
					}
				}
				else
				{
					func_277(1);
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
			func_283(&(Global_2405077.f_682), &(Global_2405077.f_685), &Var66);
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
		func_264(1);
		return 1;
	}
	return 0;
}

void func_264(bool bParam0)
{
	Global_2405077.f_675 = 0;
	func_373();
	func_383();
	if (bParam0)
	{
		func_382();
	}
}

int func_265(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
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
					if (!bParam8 || (!unk_0xECEC7528A52B4EE8(unk_0xD56332194D622ECE(iVar1)) && func_71(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) != unk_0x7C3E030BC3ED6671(iVar1))) || unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1)
						{
							if (((unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()) == -1 && iParam10) && bParam7) && func_79(iVar1))
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
										if (func_275(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_266(func_76(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_266(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_274(iParam7, 1008981770))
	{
		func_267(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_267(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_273(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_268(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x0BCA9ADE67DF9DD8((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x0BCA9ADE67DF9DD8((Var6.x - Var3.x));
}

void func_268(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x3F1DFD4C1BC6827A(iParam0))
	{
		unk_0xC78A38E5FBC66080(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_271(iParam0);
		if (iVar0 != 0)
		{
			func_269(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
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

void func_269(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_270(iParam0, &Global_1315836);
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

void func_270(int iParam0, var uParam1)
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

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_272(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_273(var uParam0, struct<3> Param1)
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

float func_274(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_268(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.x * 0.5f) * (Var6.x * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_275(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_266(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_267(Param0, fParam3, iParam4, &Global_1713901, &(Global_1713901.f_3), &(Global_1713901.f_6), 1036831949);
	func_267(Param5, fParam8, iParam9, &(Global_1713901.f_7), &(Global_1713901.f_10), &(Global_1713901.f_13), 1036831949);
	if (unk_0x55D9593FF40BF91B(Global_1713901, Global_1713901.f_3, Global_1713901.f_6, Global_1713901.f_7, Global_1713901.f_10, Global_1713901.f_13))
	{
		return 1;
	}
	return 0;
}

int func_276(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
					if (func_266(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_266(func_76(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2418033.f_261[iVar0])
			{
				if (func_266(Global_2418033.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_11(iVar1, 0, 0))
			{
				if (unk_0x419E13582192CFEA(unk_0xD56332194D622ECE(iVar1)))
				{
					if (func_266(func_76(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_277(int iParam0)
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

void func_278(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_279(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2405077.f_2735[iParam3 /*3*/] };
		Global_2405077.f_2735[iParam3 /*3*/] = { Param0 };
		func_278(Var0, iParam3 + 1);
	}
}

int func_279(struct<3> Param0, float fParam3)
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

int func_280(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
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
		func_383();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405077.f_686[iVar7] == -1 && unk_0x443E2CA72E118E64())
			{
				func_267(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
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

void func_281(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	struct<8> Var0;
	
	*uParam5 = func_282(&Param0, &uParam3, &iParam4);
	Var0 = 1926582096;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	unk_0xA5C82A39FF8ED272(1, &Var0, 8, func_168(1, 1));
}

int func_282(var uParam0, var uParam1, var uParam2)
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

void func_283(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2405077.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_332(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
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
	while (func_284(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_284(var uParam0, var uParam1, var uParam2)
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
		if (func_328(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_323(uParam0, 1))
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
	if (func_271(uParam2->f_34) != 0)
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
					if (!func_316(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_313(Var1))
									{
										Var1 = { func_308(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_307(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_303(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_323(&Var1, 0)) || uParam2->f_48 == 0)
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
																		if ((uParam2->f_12 && !func_302(Var1, fVar4, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_328(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
																					if (!func_301(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_69(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_69(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_265(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
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
																								iVar24 = func_293(Var1, uParam2->f_54, &fVar25);
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
																													func_292(Var1, fVar4, iVar16);
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
																									if (func_303(Var1, uParam2))
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
							func_290(0, uParam2);
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
						func_289(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, iVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
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
						if (func_328(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_323(&Var31, bVar35))
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
				func_285(&Global_1312061, uParam0, uParam1, *uParam0);
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

void func_285(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_286(*(uParam0[iVar2 /*4*/]), 5f, unk_0x1146A9AE09CE2B14(), 0, 0))
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

int func_286(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_288(Param0, fParam3, iParam4, iParam5, 0) || func_287(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_287(struct<3> Param0, int iParam3, int iParam4)
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
					if (func_266(Param0, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
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

int func_288(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
					else if (SYSTEM::VDIST(func_76(iVar1), Param0) < 1f)
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
					if (SYSTEM::VDIST(func_76(iVar1), Param0) < 1f)
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

void func_289(int iParam0, struct<3> Param1, int iParam4, var uParam5, float fParam6, var uParam7, int iParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = unk_0xB36B8558948EA7A8((1 + iParam0), (40 + iParam0));
		unk_0x87BE0E4947F798AC(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12);
		*uParam5 = { func_308(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, iParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
		if (!func_313(*uParam5))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_290(int iParam0, var uParam1)
{
	if (!func_303(Global_2412555[iParam0 /*3*/], uParam1))
	{
		Global_2412555.f_162 = (Global_2412555.f_162 - 1);
		func_291(iParam0);
		if (Global_2412555.f_162 > Global_2412555.f_163)
		{
			func_290(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_290(iParam0 + 1, uParam1);
	}
}

void func_291(int iParam0)
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

void func_292(struct<3> Param0, float fParam3, int iParam4)
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
			func_292(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_293(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_294(iVar5))
		{
			Var1 = { func_76(iVar5) };
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

int func_294(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		if (!func_299(iParam0))
		{
			if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iParam0))
			{
				if (!unk_0x7C3E030BC3ED6671(iParam0) == unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
				{
					if (func_296(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_295(unk_0x7C3E030BC3ED6671(iParam0), unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()), 0))
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
					if (!func_296(unk_0x1146A9AE09CE2B14(), 1, 0))
					{
						if (!func_79(iParam0))
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

int func_295(int iParam0, int iParam1, int iParam2)
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

int func_296(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_297(iParam0))
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

bool func_297(int iParam0)
{
	return func_298(iParam0);
}

bool func_298(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_11.f_1, 0);
}

int func_299(int iParam0)
{
	if (func_72(iParam0, 0))
	{
		return 1;
	}
	if (func_300())
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

bool func_300()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 3);
}

int func_301(struct<3> Param0, float fParam3, int iParam4)
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
		if (func_275(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
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
		if (func_275(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_302(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_276(Param0, fParam3, iParam4, iParam5, iParam6) || func_337(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_303(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_306(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_304(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
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

int func_304(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_305(&Param3, &Param6);
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

void func_305(var uParam0, var uParam1)
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

bool func_306(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_307(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_296(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (Global_4718592.f_32298 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4718592.f_32298)
			{
				if (Global_4718592.f_32299[iVar0 /*121*/].f_7 != 0)
				{
					if (func_266(Param0, Global_4718592.f_32299[iVar0 /*121*/], Global_4718592.f_32299[iVar0 /*121*/].f_6, Global_4718592.f_32299[iVar0 /*121*/].f_7, fParam3))
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
					if (func_266(Param0, Global_4718592.f_5742[iVar0 /*346*/], Global_4718592.f_5742[iVar0 /*346*/].f_3, Global_4718592.f_5742[iVar0 /*346*/].f_15, 0.5f))
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
					if (func_266(Param0, Global_4718592.f_70989[iVar0 /*392*/], Global_4718592.f_70989[iVar0 /*392*/].f_3, Global_4718592.f_70989[iVar0 /*392*/].f_12, 0.5f))
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
					if (func_266(Param0, unk_0xD6E677FAD7521410(Global_969056.f_233[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_233[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_233[iVar0]), 0.5f))
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
					if (func_266(Param0, unk_0xD6E677FAD7521410(Global_969056.f_119[iVar0], 1), unk_0xA8D713A937F31250(Global_969056.f_119[iVar0]), unk_0x6471F4759775FCA4(Global_969056.f_119[iVar0]), 0.5f))
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

Vector3 func_308(struct<3> Param0, var uParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
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
			if (!func_311(Param0, *uParam3, Param6))
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
			if (unk_0xE267416B80E7921F(iParam11) && func_310(Param0))
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
					fVar14 = func_309(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_309(iParam11, 1.5f);
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
		if (!func_311(Param0, *uParam3, Param6))
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
					fVar14 = func_309(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_309(iParam11, 1.5f);
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

float func_309(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_268(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_310(struct<3> Param0)
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

int func_311(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_273(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_312(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_312(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.x * Param3.x) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_313(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_315(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2412262[iVar1])
	{
		if (func_314(Param0, &(Global_2411559[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2412262[8])
	{
		if (func_314(Param0, &(Global_2411559[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_314(struct<3> Param0, var uParam3)
{
	return unk_0x09C4C80EA1D5B2F7(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_315(struct<2> Param0, var uParam2)
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

int func_316(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_322(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x644B8DBA4F69BB73(0.01f, 360f);
			func_321(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 0, fVar4);
			if (func_317(Var1, &uVar0) || func_322(Var1))
			{
				Var1 = { *uParam0 };
				func_321(&Var1, Global_2405077.f_592, Global_2405077.f_595, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_317(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_320())
	{
		return 0;
	}
	iVar1 = func_319();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405077.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_318(Param0, &(Global_2405077.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_318(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_306(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405077.f_2733) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_304(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
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

int func_319()
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

bool func_320()
{
	return Global_1683970.f_502;
}

void func_321(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_273(&Var0, 0f, 0f, unk_0x644B8DBA4F69BB73(0f, 360f));
		}
		else
		{
			func_273(&Var0, 0f, 0f, fParam7);
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

int func_322(struct<3> Param0)
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

bool func_323(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405077.f_26.f_18)
	{
		switch (Global_2405077.f_26.f_17)
		{
			case 0:
				if (func_306(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_304(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, 0, 0))
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
				*uParam0 = { func_324(*uParam0, Global_2405077.f_26.f_10, Global_2405077.f_26.f_13, Global_2405077.f_26.f_16, Global_2405077.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_324(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_321(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_327(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_325(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0x9FB743331EC18DF4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_306(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_304(Var1, Param3, Param6, 0, 0))
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

void func_325(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_326(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(unk_0x6EE46314283D3C7D(Var0.x, Var0.f_1, Var3.x, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_312(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_312(Var6, Var3) >= 0f)
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
		Var6 = { func_326(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_326(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(unk_0x6EE46314283D3C7D(Var26.x, Var26.f_1, Var29.x, Var29.f_1)));
		if (!bParam9)
		{
			if (func_312(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_312(Var6, Var29) >= 0f)
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

Vector3 func_326(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.x) - (Param0.x * Param3.f_2)), ((Param0.x * Param3.f_1) - (Param0.f_1 * Param3.x));
}

void func_327(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_328(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_375(Param0))
	{
		if (func_331(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_329(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_279(*uParam3, 1056964608))
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
				func_321(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_329(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_317(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_330(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_317(Var2, &uVar1) || func_322(Var2))
			{
				Var2 = { *uParam0 };
				func_330(&Var2, &(Global_2405077.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_330(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_324(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_324(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_324(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_321(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405077.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_327(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_325(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_331(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
				if (func_318(*uParam0, &(Global_2410002[iVar0 /*17*/]), 1008981770, bParam4, 0))
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
							func_330(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_331(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_330(&Var1, &(Global_2410002[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_332(var uParam0, var uParam1, var uParam2)
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
			if (func_328(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_323(uParam0, 1))
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
			func_335(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_334();
		}
		else
		{
			func_333();
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
							if ((uParam2->f_12 && !func_302(Var3, fVar6, uParam2->f_34, unk_0x1146A9AE09CE2B14(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_328(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_301(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_69(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_69(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_265(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
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
													iVar13 = func_293(Var3, uParam2->f_54, &fVar14);
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
																		func_292(Var3, fVar6, iVar7);
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
					func_290(0, uParam2);
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

void func_333()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2405077.f_1753)
	{
		Global_2405077.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_334()
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

void func_335(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405077.f_1753)
	{
		uVar1 = func_336(Param0, fVar0, &fVar0);
		Global_2405077.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_336(struct<3> Param0, float fParam3, float fParam4)
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

int func_337(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
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
				if (func_338(Param0, iParam4, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_275(Param0, fParam3, iParam4, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2418033.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
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

int func_338(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_274(iParam3, 1008981770);
	fVar1 = func_274(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_339(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2544210.f_924 && func_340(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_340(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam3 = -1;
	iVar2 = func_352(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_341(iVar1))
			{
				if (func_352(Global_1683970.f_516[iVar0 /*3*/], 0) == iVar2)
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

int func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_351(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_266 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_51())
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
	if (func_350(unk_0x1146A9AE09CE2B14(), 0) || (func_347(unk_0x1146A9AE09CE2B14()) && func_206(func_346(unk_0x1146A9AE09CE2B14())) == 12))
	{
		return 1;
	}
	if (func_345(unk_0x1146A9AE09CE2B14()) || (func_347(unk_0x1146A9AE09CE2B14()) && func_206(func_346(unk_0x1146A9AE09CE2B14())) == 8))
	{
		return 1;
	}
	if (func_344(unk_0x1146A9AE09CE2B14()) || (func_347(unk_0x1146A9AE09CE2B14()) && func_206(func_346(unk_0x1146A9AE09CE2B14())) == 5))
	{
		return 1;
	}
	if (func_343(unk_0x1146A9AE09CE2B14()) || (func_347(unk_0x1146A9AE09CE2B14()) && func_206(func_346(unk_0x1146A9AE09CE2B14())) == 10))
	{
		return 1;
	}
	if (func_342(unk_0x1146A9AE09CE2B14()) || (func_347(unk_0x1146A9AE09CE2B14()) && func_206(func_346(unk_0x1146A9AE09CE2B14())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_342(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_343(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_344(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_51())
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_345(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_51())
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	if (iParam0 != func_51() && func_11(iParam0, 1, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_319.f_16;
	}
	return -1;
}

int func_347(int iParam0)
{
	if (iParam0 != func_51() && func_11(iParam0, 1, 1))
	{
		if (func_349(iParam0) && !func_348(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (iParam0 != func_51() && func_11(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 4);
	}
	return 0;
}

int func_349(int iParam0)
{
	if (iParam0 != func_51() && func_11(iParam0, 1, 1))
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 3);
	}
	return 0;
}

int func_350(int iParam0, bool bParam1)
{
	var uVar0;
	
	if (bParam1)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			uVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
			if (unk_0x6471F4759775FCA4(uVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_51())
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
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

int func_352(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2410002[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_318(Param0, &(Global_2410002[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_353(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2405077.f_45.f_318)
	{
		return;
	}
	if (!func_371())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_370(Param0);
		if (iVar1 > -1)
		{
			func_382();
			switch (iVar1)
			{
				case 0:
					func_369(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_369(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_369(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_369(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_369(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_369(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_369(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_369(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_369(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_369(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_369(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_369(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_369(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_369(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_369(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_369(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_369(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_369(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_369(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_369(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_369(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_369(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_369(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_369(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_369(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_369(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_369(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_369(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_369(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_369(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_369(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_369(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_369(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_369(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_369(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_369(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_369(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_369(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_369(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_369(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_369(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_369(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_369(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_369(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_369(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_369(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_369(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_369(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_369(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_369(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_369(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_369(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_369(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_367(78);
					break;
				
				case 11:
					func_367(79);
					break;
				
				case 12:
					func_367(82);
					break;
				
				case 13:
					func_367(81);
					break;
				
				case 14:
					func_367(73);
					break;
				
				case 15:
					func_369(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_369(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_369(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_369(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_367(75);
					break;
				
				case 17:
					func_367(76);
					break;
				
				case 18:
					func_367(77);
					break;
				
				case 19:
					func_369(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_369(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_369(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_369(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_367(80);
					break;
				
				case 21:
				case 25:
					func_367(87);
					break;
				
				case 22:
				case 26:
					func_367(88);
					break;
				
				case 23:
				case 27:
					func_367(89);
					break;
				
				case 24:
				case 28:
					func_367(90);
					break;
				
				case 29:
				case 30:
					if (func_366(iParam3))
					{
						func_367(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29);
					}
					break;
				
				case 31:
					func_369(-352.53f, -1836.742f, 21.924f, 274.8f);
					func_369(-336.412f, -1837.341f, 22.497f, 264.6f);
					func_369(-320.707f, -1840.342f, 23.195f, 257.4f);
					func_369(-304.646f, -1843.295f, 24.219f, 261.599f);
					func_369(-288.991f, -1844.123f, 25.228f, 269.599f);
					func_369(-273.031f, -1842.69f, 26.27f, 278.199f);
					func_369(-361.271f, -1814.526f, 21.63f, 96.399f);
					func_369(-343.939f, -1813.331f, 22.368f, 87.999f);
					func_369(-326.881f, -1814.914f, 23.106f, 78.799f);
					func_369(-310.941f, -1818.223f, 23.957f, 78.799f);
					func_369(-294.16f, -1820.207f, 25.092f, 89.199f);
					func_369(-277.392f, -1819.237f, 26.283f, 100.199f);
					func_369(-257.213f, -1838.977f, 27.318f, 285.799f);
					func_369(-261.286f, -1815.615f, 27.439f, 110.399f);
					func_369(-246.086f, -1808.691f, 28.576f, 117.398f);
					func_369(-231.901f, -1800.767f, 28.619f, 119.398f);
					func_369(-199.77f, -1989.34f, 26.62f, 180.997f);
					func_369(-201.159f, -1971.41f, 26.62f, 190.798f);
					func_369(-205.571f, -1954.537f, 26.62f, 199.998f);
					func_369(-197.879f, -1940.822f, 26.62f, 114.998f);
					func_369(-141.311f, -1967.41f, 21.805f, 91.997f);
					func_369(-141.145f, -1977.861f, 21.813f, 91.997f);
					func_369(-140.565f, -1988.289f, 21.815f, 91.997f);
					func_369(-145.045f, -2032.168f, 21.956f, 73.597f);
					func_369(-147.923f, -2041.781f, 21.956f, 73.597f);
					func_369(-185.791f, -1948.005f, 26.62f, 18.596f);
					func_369(-181.155f, -1965.422f, 26.62f, 8.196f);
					func_369(-179.172f, -1984.332f, 26.62f, 1.396f);
					func_369(-225.88f, -1824.637f, 28.897f, 299.596f);
					func_369(-211.722f, -1816.401f, 28.859f, 300.796f);
					func_369(-217.99f, -1792.624f, 28.649f, 119.196f);
					func_369(-203.828f, -1784.264f, 28.678f, 119.996f);
					func_369(-194.254f, -2018.756f, 26.62f, 75f);
					func_369(-186.956f, -2031.369f, 26.62f, 338f);
					func_369(-194.916f, -2047.94f, 26.62f, 329.8f);
					func_369(-205.565f, -2064.553f, 26.62f, 320.2f);
					func_369(-218.606f, -2077.97f, 26.62f, 311.2f);
					func_369(-233.372f, -2089.601f, 26.62f, 304f);
					func_369(-207.822f, -2002.11f, 26.62f, 173.799f);
					func_369(-207.567f, -2027.579f, 26.62f, 158.599f);
					func_369(-215.235f, -2042.272f, 26.62f, 148.999f);
					func_369(-227.643f, -2058.498f, 26.62f, 138.799f);
					func_369(-242.977f, -2071.452f, 26.62f, 125.798f);
					func_369(-256.624f, -2087.982f, 26.62f, 204.198f);
					func_369(-249.549f, -2098.767f, 26.62f, 294.198f);
					func_369(-228.998f, -2048.889f, 26.62f, 141.198f);
					func_369(-176.963f, -2009.239f, 24.519f, 261.597f);
					func_369(-195.128f, -1806.447f, 28.814f, 299.997f);
					func_369(-180.02f, -1797.414f, 28.797f, 299.997f);
					func_369(-165.796f, -1787.672f, 28.788f, 304.597f);
					func_369(-188.124f, -1774.765f, 28.711f, 123.197f);
					func_369(-417.428f, -1836.374f, 19.238f, 121.797f);
					func_369(-430.967f, -1844.844f, 18.468f, 121.797f);
					func_369(-444.94f, -1853.739f, 17.786f, 121.797f);
					break;
			}
		}
		else if (func_363(Param0, &iVar2, &iVar6) || (func_340(Param0, &(iVar2[0])) && (unk_0x48E10529AEAE00F9(iParam3) || unk_0xE267416B80E7921F(iParam3))))
		{
			func_382();
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
				if (!iVar6[iVar0] && func_362(iVar2[iVar0], -1))
				{
					if (func_366(iParam3))
					{
						func_367(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_361(unk_0x7D2B9E6A64637269()) || func_360(unk_0x7D2B9E6A64637269())) && unk_0x48E10529AEAE00F9(iParam3)) || unk_0xE267416B80E7921F(iParam3))
					{
						if (func_359(iParam3))
						{
							func_358(iVar2[iVar0]);
						}
						else if (func_357(iParam3))
						{
							func_356(iVar2[iVar0]);
							func_358(iVar2[iVar0]);
						}
						else
						{
							func_356(iVar2[iVar0]);
							func_358(iVar2[iVar0]);
						}
					}
					else
					{
						func_354(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_367(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_354(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_369(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_369(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_369(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_369(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_369(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_369(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_369(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_369(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_369(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_369(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_369(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_369(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_369(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_369(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_369(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_369(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_369(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_369(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_369(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_369(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_369(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_369(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_369(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_369(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_369(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_369(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_369(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_369(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_369(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_369(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_369(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_369(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_369(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_369(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_369(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_369(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_369(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_369(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_369(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_369(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_369(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_369(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_369(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_369(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_369(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_369(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_369(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_369(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_369(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_369(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_369(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_369(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_369(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_369(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_369(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_369(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_369(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_369(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_369(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_369(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_369(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_369(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_369(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_369(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_369(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_369(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_369(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_369(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_369(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_369(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_369(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_369(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_369(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_369(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_369(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_369(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_369(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_369(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_369(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_369(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_369(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_369(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_369(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_369(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_369(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_369(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_369(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_369(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_369(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_369(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_369(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_369(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_369(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_369(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_369(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_369(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_369(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_369(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_369(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_369(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_369(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_369(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_369(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_369(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_369(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_369(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_369(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_369(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_369(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_369(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_369(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_369(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_369(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_369(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_369(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_369(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_369(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_369(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_369(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_369(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_369(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_369(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_369(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_369(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_369(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_369(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_369(142.7427f, -2536.147f, 5f, 205.0002f);
			func_369(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_369(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_369(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_369(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_369(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_369(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_369(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_369(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_369(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_369(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_369(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_369(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_369(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_369(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_369(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_369(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_369(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_369(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_369(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_369(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_369(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_369(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_369(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_369(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_369(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_369(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_369(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_369(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_369(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_369(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_369(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_369(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_369(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_369(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_369(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_369(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_369(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_369(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_369(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_369(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_369(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_369(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_369(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_369(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_369(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_369(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_369(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_369(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_369(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_369(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_369(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_369(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_369(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_369(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_369(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_369(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_369(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_369(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_369(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_369(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_369(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_369(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_369(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_369(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_369(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_369(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_369(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_369(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_369(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_369(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_369(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_369(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_369(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_369(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_369(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_369(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_369(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_369(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_369(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_369(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_369(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_369(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_369(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_369(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_369(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_369(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_369(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_369(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_369(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_369(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_369(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_369(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_369(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_369(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_369(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_369(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_369(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_369(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_369(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_369(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_369(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_369(-1823.414f, 3092.762f, 31.843f, 330f);
			func_369(-1819.045f, 3100.435f, 31.845f, 330f);
			func_369(-1833.313f, 3075.722f, 31.838f, 330f);
			func_369(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_369(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_369(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_369(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_369(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_369(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_369(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_369(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_369(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_369(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_369(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_369(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_369(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_369(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_369(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_369(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_369(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_369(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_369(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_369(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_369(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_369(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_369(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_369(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_369(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_369(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_369(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_369(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_369(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_369(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_369(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_369(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_369(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_369(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_369(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_369(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_369(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_369(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_369(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_369(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_369(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_369(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_369(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_369(1231.279f, 2910.881f, 43.3085f, 12f);
				func_369(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_369(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_369(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_369(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_369(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_369(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_369(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_369(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_369(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_369(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_369(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_369(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_369(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_369(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_369(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_369(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_369(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_369(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_369(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_369(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_369(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_369(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_369(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_369(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_369(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_369(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_369(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_369(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_369(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_369(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_369(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_369(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_369(3.855f, 2672.388f, 78.437f, 319.2f);
				func_369(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_369(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_369(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_369(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_369(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_369(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_369(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_369(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_369(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_369(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_369(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_369(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_369(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_369(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_369(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_369(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_369(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_369(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_369(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_369(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_369(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_369(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_369(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_369(102.851f, 2688.009f, 51.732f, 224f);
				func_369(109.815f, 2681.012f, 51.112f, 224f);
				func_369(116.355f, 2674.26f, 50.529f, 224f);
				func_369(125.138f, 2665.98f, 49.8f, 224f);
				func_369(132.228f, 2659.865f, 49.26f, 228.4f);
				func_369(139.354f, 2653.536f, 48.737f, 228.4f);
				func_369(88.512f, 2702.995f, 53.042f, 224.199f);
				func_369(81.565f, 2710.357f, 53.67f, 224.199f);
				func_369(75.156f, 2716.981f, 54.223f, 224.199f);
				func_369(68.442f, 2723.806f, 54.775f, 226.199f);
				func_369(61.449f, 2730.606f, 55.308f, 226.199f);
				func_369(53.702f, 2738.167f, 55.855f, 226.199f);
				func_369(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_369(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_369(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_369(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_369(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_369(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_369(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_369(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_369(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_369(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_369(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_369(2714.633f, 3918.283f, 42.938f, 16f);
				func_369(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_369(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_369(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_369(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_369(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_369(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_369(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_369(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_369(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_369(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_369(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_369(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_369(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_369(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_369(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_369(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_369(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_369(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_369(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_369(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_369(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_369(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_369(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_369(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_369(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_369(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_369(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_369(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_369(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_369(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_369(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_369(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_369(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_369(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_369(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_369(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_369(3374.923f, 5520.177f, 20.3207f, 86f);
				func_369(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_369(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_369(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_369(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_369(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_369(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_369(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_369(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_369(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_369(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_369(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_369(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_369(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_369(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_369(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_369(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_369(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_369(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_369(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_369(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_369(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_369(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_369(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_369(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_369(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_369(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(43.848f, 6845.657f, 13.379f, 247.2f);
				func_369(50.379f, 6861.146f, 15.105f, 247.2f);
				func_369(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_369(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_369(55.806f, 6875.081f, 14.824f, 247.2f);
				func_369(11.616f, 6877.079f, 11.466f, 247.2f);
				func_369(18.954f, 6891.633f, 11.37f, 247.2f);
				func_369(26.68f, 6907.587f, 11.869f, 247.2f);
				func_369(7.479f, 6907.895f, 12.024f, 247.2f);
				func_369(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_369(35.591f, 6836.608f, 13.288f, 274.4f);
				func_369(36.028f, 6830.135f, 13.801f, 270.8f);
				func_369(35.114f, 6823.884f, 14.527f, 260.8f);
				func_369(48.779f, 6838.693f, 14.337f, 273.6f);
				func_369(56.738f, 6821.8f, 15.244f, 244.8f);
				func_369(48.377f, 6825.895f, 14.656f, 249.8f);
				func_369(49.11f, 6831.439f, 13.991f, 274.8f);
				func_369(53.544f, 6818.275f, 16.342f, 243f);
				func_369(46.162f, 6821.945f, 15.483f, 249.8f);
				func_369(60.129f, 6836.8f, 15.605f, 269.6f);
				func_369(40.88f, 6802.952f, 20.113f, 242.6f);
				func_369(48.203f, 6799.134f, 20.897f, 244.4f);
				func_369(70.449f, 6809.271f, 16.846f, 243f);
				func_369(61.436f, 6814.266f, 16.71f, 244.2f);
				func_369(56.142f, 6793.458f, 19.806f, 242.6f);
				func_369(65.759f, 6791.12f, 18.433f, 276.4f);
				func_369(77.305f, 6805.391f, 18.558f, 245.6f);
				func_369(85.893f, 6800.243f, 18.535f, 249.8f);
				func_369(56.85f, 6780.582f, 18.822f, 297.999f);
				func_369(65.636f, 6784.669f, 18.789f, 293.799f);
				func_369(74.121f, 6788.498f, 18.739f, 293.799f);
				func_369(97.779f, 6796.32f, 19.02f, 276.799f);
				func_369(106.76f, 6796.983f, 18.914f, 272.599f);
				func_369(112.387f, 6802.858f, 18.994f, 210.599f);
				func_369(117.58f, 6802.644f, 18.663f, 209.399f);
				func_369(122.481f, 6802.693f, 18.468f, 209.399f);
				func_369(127.182f, 6802.686f, 18.218f, 209.399f);
				func_369(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_369(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_369(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_369(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_369(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_369(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_369(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_369(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_369(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_369(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_369(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_369(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_369(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_369(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_369(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_369(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_369(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_369(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_369(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_369(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_369(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_369(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_369(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_369(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_369(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_369(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_369(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_369(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_369(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_369(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_369(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_369(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_369(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_369(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_369(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_369(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_369(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_369(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_369(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_369(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_369(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_369(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_369(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_369(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_369(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_369(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_369(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_369(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_369(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_369(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_369(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_369(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_369(30.027f, 3292.351f, 38.604f, 140.199f);
				func_369(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_369(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_369(23.897f, 3283.152f, 39.381f, 145.399f);
				func_369(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_369(18.723f, 3274.025f, 40.054f, 155.799f);
				func_369(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_369(36.958f, 3298.847f, 38.001f, 127.799f);
				func_369(54.165f, 3311.582f, 36.517f, 303.799f);
				func_369(61.607f, 3317.105f, 35.916f, 306.999f);
				func_369(68.994f, 3323.129f, 35.364f, 308.199f);
				func_369(76.266f, 3329.467f, 34.805f, 311.399f);
				func_369(82.757f, 3335.915f, 34.344f, 316.598f);
				func_369(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_369(14.664f, 3263.688f, 40.931f, 160.398f);
				func_369(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_369(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_369(89.575f, 3343.311f, 33.932f, 318.398f);
				func_369(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_369(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_369(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_369(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_369(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_369(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_369(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_369(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_369(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_369(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_369(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_369(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_369(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_369(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_369(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_369(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_369(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_369(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_369(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_369(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_369(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_369(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_369(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_369(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_369(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_369(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_369(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_369(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_369(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_369(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_369(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_369(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_369(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_369(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_369(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_369(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_369(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_369(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_369(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_369(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_369(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_369(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_59 == 0)
			{
				func_369(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_369(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_369(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_369(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_369(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_369(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_369(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_369(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_369(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_369(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_369(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_369(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_369(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_369(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_369(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_369(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_369(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_369(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_369(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_369(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_369(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_369(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_369(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_369(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_369(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_369(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_369(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_369(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_369(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_369(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_369(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_369(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_369(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_369(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_369(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_369(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_369(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_369(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_355(896.357f, -3.23695f, 77.7645f, 147.3987f, iParam1, 0);
			func_355(899.759f, -5.54885f, 77.7645f, 147.3987f, iParam1, 0);
			func_355(903.021f, -7.62495f, 77.7645f, 147.3987f, iParam1, 0);
			func_355(906.474f, -9.70314f, 77.7645f, 147.3987f, iParam1, 0);
			func_355(909.884f, -11.888f, 77.7645f, 147.3987f, iParam1, 0);
			func_355(913.209f, -14.0965f, 77.7645f, 147.3987f, iParam1, 0);
			func_355(879.578f, 7.26725f, 77.7646f, 147.3987f, iParam1, 0);
			func_355(876.642f, 9.05555f, 77.7646f, 147.3987f, iParam1, 0);
			func_355(873.534f, 10.8622f, 77.7646f, 147.3987f, iParam1, 0);
			func_355(869.685f, -7.55887f, 77.7646f, 237.3985f, iParam1, 0);
			func_355(867.866f, -10.464f, 77.7646f, 237.3985f, iParam1, 0);
			func_355(866.077f, -13.4579f, 77.7646f, 237.3985f, iParam1, 0);
			func_355(864.322f, -16.4335f, 77.7646f, 237.3985f, iParam1, 0);
			func_355(862.534f, -19.2652f, 77.7644f, 237.3985f, iParam1, 0);
			func_355(887.524f, -18.7251f, 77.7647f, 237.3985f, iParam1, 0);
			func_355(885.594f, -21.7041f, 77.7647f, 237.3985f, iParam1, 0);
			func_355(883.691f, -24.7685f, 77.7647f, 237.3985f, iParam1, 0);
			func_355(881.827f, -27.7084f, 77.7644f, 237.3985f, iParam1, 0);
			func_355(880.013f, -30.5612f, 77.7644f, 237.3985f, iParam1, 0);
			func_355(884.931f, -17.2169f, 77.7646f, 57.5983f, iParam1, 0);
			func_355(883.043f, -20.1063f, 77.7646f, 57.5983f, iParam1, 0);
			func_355(881.118f, -22.9962f, 77.7644f, 57.5983f, iParam1, 0);
			func_355(879.345f, -25.9389f, 77.7644f, 57.5983f, iParam1, 0);
			func_355(877.631f, -28.8543f, 77.7644f, 57.5983f, iParam1, 0);
			func_355(903.231f, -28.6965f, 77.7647f, 57.5983f, iParam1, 0);
			func_355(901.368f, -31.6316f, 77.7647f, 57.5983f, iParam1, 0);
			func_355(899.552f, -34.4844f, 77.7647f, 57.5983f, iParam1, 0);
			func_355(897.669f, -37.4419f, 77.7647f, 57.5983f, iParam1, 0);
			func_355(895.831f, -40.3309f, 77.7647f, 57.5983f, iParam1, 0);
			func_355(932.842f, -25.6631f, 77.7647f, 147.798f, iParam1, 0);
			func_355(935.693f, -27.516f, 77.7647f, 147.798f, iParam1, 0);
			func_355(938.593f, -29.5809f, 77.7647f, 147.798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_355(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_268(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0.5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { unk_0x26C2ACB261895E70(Param0, fParam3, Var7) };
		func_369(Var10, fParam3);
	}
	else
	{
		func_369(Param0, fParam3);
	}
}

void func_356(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_369(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_369(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_369(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_369(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_369(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_369(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_369(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_369(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_369(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_369(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_369(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_369(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_369(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_369(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_369(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_369(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_369(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_369(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_369(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_369(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_369(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_369(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_369(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_369(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_369(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_369(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_369(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_369(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_369(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_369(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_369(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_369(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_369(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_369(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_369(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_369(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_369(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_369(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_369(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_369(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_369(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_369(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_369(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_369(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_369(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_369(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_369(-1356.991f, -3242.228f, 12.945f, 330f);
			func_369(-1369.313f, -3234.758f, 12.945f, 330f);
			func_369(-1381.751f, -3227.408f, 12.945f, 330f);
			func_369(-1394.302f, -3220.021f, 12.945f, 330f);
			func_369(-1354.339f, -3223.129f, 12.945f, 330f);
			func_369(-1366.302f, -3215.809f, 12.945f, 330f);
			func_369(-1378.492f, -3208.645f, 12.945f, 330f);
			func_369(-1350.322f, -3203.405f, 12.945f, 330f);
			func_369(-1362.684f, -3196.451f, 12.945f, 330f);
			func_369(-1347.089f, -3182.69f, 12.945f, 330f);
			func_369(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_369(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_369(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_369(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_369(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_369(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_369(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_369(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_369(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_369(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_369(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_369(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_369(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_369(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_369(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_369(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_369(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_369(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_369(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_369(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_369(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_369(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_369(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_369(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_369(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_369(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_369(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_369(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_369(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_369(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_369(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_369(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_369(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_369(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_369(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_369(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_369(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_369(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_369(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_369(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_369(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_369(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_369(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_369(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_369(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_369(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_369(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_369(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_369(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_369(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_369(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_369(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_369(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_369(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_369(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_369(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_369(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_369(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_369(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_369(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_369(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_369(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_369(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_369(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_369(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_369(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_369(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_369(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_369(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_369(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_369(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_369(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_369(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_369(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_369(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_369(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_369(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_369(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_369(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_369(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_369(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_369(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_369(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_369(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_369(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_369(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_369(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_369(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_369(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_369(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_369(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_369(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_369(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_369(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_369(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_369(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_369(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_369(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_369(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_369(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_369(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_369(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_369(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_369(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_369(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_369(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_369(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_369(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_369(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_369(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_369(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_369(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_369(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_369(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_369(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_369(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_369(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_369(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_369(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_369(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_369(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_369(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_369(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_369(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_369(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_369(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_369(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_369(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_369(-2484.323f, 3249.294f, 31.828f, 151f);
			func_369(-2495.313f, 3255.746f, 31.828f, 151f);
			func_369(-2472.644f, 3242.684f, 31.828f, 151f);
			func_369(-2506.313f, 3262.27f, 31.823f, 151f);
			func_369(-2461.494f, 3235.93f, 31.828f, 151f);
			func_369(-2505.602f, 3238.049f, 31.828f, 151f);
			func_369(-2481.937f, 3224.8f, 31.828f, 151f);
			func_369(-2516.813f, 3244.266f, 31.823f, 151f);
			func_369(-2470.03f, 3217.899f, 31.828f, 151f);
			func_369(-2493.933f, 3231.308f, 31.828f, 151f);
			func_369(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_369(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_369(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_369(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_369(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_369(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_369(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_369(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_369(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_369(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_369(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_369(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_369(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_369(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_369(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_369(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_369(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_369(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_369(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_369(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_369(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_369(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_369(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_369(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_369(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_369(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_369(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_369(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_369(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_369(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_369(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_369(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_369(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_369(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_369(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_369(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_357(int iParam0)
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

void func_358(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_369(-947.712f, -3367.704f, 12.944f, 60f);
			func_369(-904.692f, -3293.072f, 12.944f, 60f);
			func_369(-863.71f, -3221.978f, 12.944f, 60f);
			func_369(-966.418f, -3162.773f, 12.944f, 60f);
			func_369(-1007.435f, -3233.93f, 12.944f, 60f);
			func_369(-1050.455f, -3308.559f, 12.944f, 60f);
			func_369(-1145.673f, -3253.456f, 12.944f, 60f);
			func_369(-1098.386f, -3181.428f, 12.944f, 60f);
			func_369(-1060.474f, -3108.903f, 12.944f, 60f);
			func_369(-1155.391f, -3053.632f, 12.944f, 60f);
			func_369(-1196.114f, -3125.146f, 12.948f, 60f);
			func_369(-1235.552f, -3201.86f, 12.944f, 60f);
			func_369(-1344.446f, -3139.177f, 12.944f, 60f);
			func_369(-1301.308f, -3064.341f, 12.944f, 60f);
			func_369(-1260.135f, -2992.912f, 12.944f, 60f);
			func_369(-1364.244f, -2932.9f, 12.98f, 60f);
			func_369(-1405.284f, -3004.108f, 12.96f, 60f);
			func_369(-1448.29f, -3078.72f, 12.95f, 60f);
			func_369(-1535.732f, -3028.318f, 12.945f, 60f);
			func_369(-1492.639f, -2953.558f, 12.945f, 60f);
			func_369(-1451.506f, -2882.2f, 12.944f, 60f);
			func_369(-1553.927f, -2823.12f, 13.002f, 60f);
			func_369(-1595.097f, -2894.571f, 12.944f, 60f);
			func_369(-1637.836f, -2968.714f, 12.945f, 60f);
			func_369(-1740.971f, -2911.484f, 12.944f, 330f);
			func_369(-1696.293f, -2833.978f, 12.944f, 330f);
			func_369(-1651.502f, -2756.273f, 12.945f, 330f);
			func_369(-1588.258f, -2647.575f, 12.944f, 330f);
			func_369(-1536.862f, -2681.378f, 12.945f, 330f);
			func_369(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_369(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_369(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_369(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_369(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_369(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_369(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_369(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_369(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_369(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_369(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_369(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_369(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_369(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_369(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_369(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_369(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_369(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_369(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_369(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_369(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_369(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_369(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_369(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_369(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_369(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_369(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_369(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_369(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_369(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_369(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_359(int iParam0)
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

int func_360(int iParam0)
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

int func_361(int iParam0)
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

int func_362(int iParam0, int iParam1)
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

int func_363(struct<2> Param0, var uParam2, var uParam3, var uParam4)
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
			if (func_341(iVar0))
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
			if (func_364(iVar0))
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

int func_364(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_365(iParam0);
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_273 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11;
	if (iVar1 != func_51())
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

int func_365(int iParam0)
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

int func_366(int iParam0)
{
	if ((unk_0x69AF387D1A91914C(iParam0) || unk_0x3DA0AF866B552ECB(iParam0)) || unk_0x2F040F7AF0534E16(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_367(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_369(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_369(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_369(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_369(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_369(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_369(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_369(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_369(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_369(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_369(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_369(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_369(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_369(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_369(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_369(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_369(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_369(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_369(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_369(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_369(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_369(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_369(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_369(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_369(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_369(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_369(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_369(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_369(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_369(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_369(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_369(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_369(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_369(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_369(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_369(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_369(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_368())
			{
				func_369(-1608.297f, -556.875f, 33.406f, 310f);
				func_369(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_369(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_369(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_369(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_369(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_369(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_369(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_369(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_369(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_369(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_369(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_368())
			{
				func_369(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_369(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_369(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_369(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_369(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_369(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_369(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_369(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_369(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_369(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_369(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_369(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_368())
			{
				func_369(-102.737f, -597.379f, 35.053f, 160.999f);
				func_369(-97.793f, -589.568f, 35.082f, 134.799f);
				func_369(-110.357f, -619.402f, 35.055f, 160.599f);
				func_369(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_369(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_369(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_369(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_369(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_369(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_369(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_369(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_369(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_368())
			{
				func_369(-59.349f, -779.238f, 43.134f, 228.398f);
				func_369(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_369(-65.212f, -772.66f, 43.151f, 219.398f);
				func_369(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_369(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_369(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_369(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_369(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_369(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_369(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_369(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_369(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_369(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_369(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_369(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_369(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_369(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_369(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_369(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_369(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_369(-1464.5f, -927.9f, 9f, 296.7991f);
			func_369(-1466f, -926.1f, 9f, 296.7991f);
			func_369(-1467.9f, -924.7f, 9f, 296.7991f);
			func_369(-1469.7f, -923.7f, 9f, 296.7991f);
			func_369(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_369(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_369(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_369(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_369(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_369(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_369(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_369(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_369(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_369(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_369(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_369(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_369(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_369(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_369(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_369(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_369(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_369(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_369(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_369(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_369(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_369(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_369(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_369(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_369(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_369(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_369(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_369(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_369(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_369(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_369(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_369(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_369(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_369(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_369(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_369(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_369(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_369(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_369(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_369(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_369(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_369(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_369(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_369(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_369(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_369(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_369(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_369(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_369(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_369(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_369(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_369(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_369(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_369(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_369(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_369(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_369(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_369(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_369(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_369(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_369(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_369(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_369(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_369(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_369(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_369(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_369(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_369(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_369(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_369(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_369(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_369(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_369(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_369(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_369(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_369(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_369(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_369(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_369(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_369(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_369(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_369(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_369(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_369(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_368()
{
	return Global_2453009.f_17;
}

void func_369(struct<3> Param0, float fParam3)
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

int func_370(struct<3> Param0)
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
		if (func_314(Param0, &(Global_2412316[iVar0 /*7*/])))
		{
			Global_2405077.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405077.f_2905 = -1;
	return -1;
}

int func_371()
{
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_13, 0) && !Global_2453903.f_6343)
	{
		return 0;
	}
	return 0;
}

int func_372(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
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
			if (func_341(iVar0))
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

void func_373()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405077.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_374(var uParam0, bool bParam1)
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
		if (func_314(Var1, &(Global_2412272[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_325(&Var1, Global_2412272[iVar0 /*7*/], Global_2412272[iVar0 /*7*/].f_3, Global_2412272[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_375(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405077.f_514 && !Global_2405077.f_515)
	{
		if (!Global_2405077.f_45.f_316)
		{
			if (!func_379(unk_0x1146A9AE09CE2B14(), 1))
			{
				return 1;
			}
			if (!func_378(Param0, 1008981770))
			{
				if (!func_331(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_331(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_377(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_376(&(Global_2405077.f_45[iVar0 /*12*/])) };
					if (!func_331(&Var1, 0, 0, 0, 1))
					{
						if (!func_331(&Param0, 0, 0, 0, 1))
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

Vector3 func_376(var uParam0)
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

int func_377(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_318(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_378(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405077.f_45[iVar0 /*12*/].f_9)
		{
			if (func_318(Param0, &(Global_2405077.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_379(int iParam0, bool bParam1)
{
	if (func_175() != 0)
	{
		return func_380(iParam0) != 0;
	}
	return func_296(iParam0, bParam1, 0);
}

int func_380(int iParam0)
{
	if (func_11(iParam0, 0, 1))
	{
		return Global_2426865[iParam0 /*449*/].f_1;
	}
	return 0;
}

int func_381(bool bParam0)
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

void func_382()
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

void func_383()
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

int func_384()
{
	if (!Global_2405077.f_605 == 0 && unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_610) < func_381(0))
	{
		return 1;
	}
	return 0;
}

int func_385()
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
	if (!func_387(unk_0x1146A9AE09CE2B14()) && !func_386())
	{
		return 0;
	}
	return 1;
}

bool func_386()
{
	return Global_1312878;
}

int func_387(int iParam0)
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

int func_388(int iParam0)
{
	if (!func_114(1, iParam0))
	{
		return 0;
	}
	if (unk_0xB0339D553BD19B75(iLocal_1838))
	{
		return 0;
	}
	return 1;
}

int func_389(int iParam0)
{
	return 1;
}

int func_390(int iParam0)
{
	if (Local_834.f_294.f_21 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_294.f_21);
		return StackVal;
	}
	return 1;
}

void func_391(int iParam0, int iParam1)
{
	if (Local_284.f_67.f_1[iParam0 /*14*/].f_9 == -1)
	{
		return;
	}
	if (func_397(iParam0) > 2 && func_397(iParam0) < 5)
	{
		if (func_392(iParam0, iParam1))
		{
			func_143(iParam0, 2);
		}
		else
		{
			func_142(iParam0, 2);
		}
	}
}

bool func_392(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x419E13582192CFEA(iParam1))
	{
		iVar0 = func_394(iParam1);
		if (iVar0 != func_51() && unk_0xFCC26BA7572E9F1F(iVar0))
		{
			iVar1 = unk_0x4645C707A0067CB6(iVar0);
			return func_393(iVar1, 2);
		}
	}
	return func_145(iParam0, 2);
}

bool func_393(int iParam0, int iParam1)
{
	return func_4(&(Local_2125[iParam0 /*38*/].f_1), iParam1);
}

int func_394(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xBFCE58B2B3249999(iParam0, 0) && !unk_0x9B73EB6255D4AE81(iParam0, -1, 0))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (!unk_0xECEC7528A52B4EE8(iVar0))
		{
			iVar1 = unk_0xCB567ED25393C1DF(iVar0);
			if (iVar1 != func_51() && func_11(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return func_51();
}

int func_395(int iParam0, int iParam1)
{
	return 0;
}

void func_396(int iParam0, int iParam1)
{
	Local_1898.f_49[iParam0 /*6*/].f_1 = iParam1;
}

int func_397(int iParam0)
{
	return Local_1898.f_49[iParam0 /*6*/].f_1;
}

int func_398(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_400())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_19)
	{
		if (iParam0 == func_399(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_399(int iParam0)
{
	return Local_1898.f_2.f_11[iParam0];
}

int func_400()
{
	return Local_284.f_19.f_5[0 /*13*/].f_11;
}

int func_401(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_402(iParam0, (iVar0 - 1), bParam6, iParam7);
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
						if (((!unk_0xECEC7528A52B4EE8(iVar2) && iVar3 != func_51()) && func_11(iVar3, 1, 1)) || iParam8)
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

int func_402(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_403()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		func_422(iVar0);
		func_417(iVar0);
		iVar0++;
	}
	func_412();
	func_404();
}

void func_404()
{
	struct<20> Var0;
	
	if (!func_3(8))
	{
		if (func_7() > 0 && Local_1753 > 0)
		{
			if (func_1124(53))
			{
				Var0 = { func_411(func_12()) };
				if (func_405(func_12(), Local_1898.f_198, &Var0))
				{
					func_20(8);
				}
			}
		}
	}
}

int func_405(int iParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_410(Param1))
	{
		return 0;
	}
	if (iParam0 == func_51())
	{
		return 0;
	}
	if (*uParam4 > 18)
	{
		return 0;
	}
	iVar0 = func_409(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam4)
		{
			if ((*uParam4)[iVar1] != 0)
			{
				iVar2 = func_408(iVar0, (*uParam4)[iVar1]);
				if (iVar2 != -1)
				{
					if (!func_407(Param1, Global_2419497.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/]))
					{
						if (!func_19(&(Global_1689734.f_4953)) || func_17(&(Global_1689734.f_4953), 10000, 0))
						{
							func_22(&(Global_1689734.f_4953), 0, 0);
							func_406(iParam0, Param1, uParam4);
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

void func_406(int iParam0, struct<3> Param1, var uParam4)
{
	struct<26> Var0;
	int iVar26;
	int iVar27;
	
	if (!func_410(Param1))
	{
		return;
	}
	if (*uParam4 > 18)
	{
		return;
	}
	if (*uParam4 <= 0)
	{
		return;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_6 = 18;
	Var0 = -609583028;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam0;
	Var0.f_3 = { Param1 };
	Var0.f_25 = *uParam4;
	iVar26 = 0;
	while (iVar26 < *uParam4)
	{
		Var0.f_6[iVar26] = (*uParam4)[iVar26];
		iVar26++;
	}
	iVar27 = func_168(1, 1);
	if (!iVar27 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 26, iVar27);
	}
}

int func_407(struct<3> Param0, struct<3> Param3)
{
	if (!func_410(Param0))
	{
		return 0;
	}
	if (Param0.x == Param3.x && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2419497.f_199.f_962[iParam0 /*75*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_409(int iParam0)
{
	int iVar0;
	
	if (func_11(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2419497.f_199.f_962[iVar0 /*75*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_410(struct<3> Param0)
{
	if (Param0.x == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<20> func_411(int iParam0)
{
	struct<20> Var0;
	int iVar20;
	int iVar21;
	
	Var0 = 18;
	Var0.f_19 = 0;
	if (!func_56(iParam0))
	{
		return Var0;
	}
	if (func_11(iParam0, 0, 1))
	{
		iVar20 = 0;
		while (iVar20 < 10)
		{
			if (Global_2419497.f_199.f_962[iVar20 /*75*/] == iParam0)
			{
				iVar21 = 0;
				while (iVar21 < 18)
				{
					if (Global_2419497.f_199.f_962[iVar20 /*75*/].f_1[iVar21] != 0 && !func_410(Global_2419497.f_199.f_962[iVar20 /*75*/].f_20[iVar21 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2419497.f_199.f_962[iVar20 /*75*/].f_1[iVar21];
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

void func_412()
{
	if (Local_284.f_19 <= 0)
	{
		return;
	}
	if (!func_416())
	{
		return;
	}
	Stack.Push(Local_834.f_100.f_34 != 0);
	Call_Loc(Local_834.f_100.f_34);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_415())
	{
		if (func_414())
		{
			func_10(5);
		}
	}
	else if (func_413())
	{
		func_10(5);
	}
}

int func_413()
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

int func_414()
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

bool func_415()
{
	return func_62(0);
}

int func_416()
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

void func_417(int iParam0)
{
	if (func_6(iParam0, 29) && func_420(iParam0))
	{
		if (func_419(iParam0))
		{
			func_418(iParam0, 29);
		}
	}
}

void func_418(int iParam0, int iParam1)
{
	if (func_127(&(Local_1898.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_419(int iParam0)
{
	int iVar0;
	
	if (func_420(iParam0))
	{
		iVar0 = func_399(iParam0);
		return (Local_1898.f_49[iVar0 /*6*/].f_1 == 5 || func_6(iParam0, 0));
	}
	return 1;
}

bool func_420(int iParam0)
{
	return (func_421(iParam0) && func_400() == 2);
}

bool func_421(int iParam0)
{
	return Local_1898.f_2.f_11[iParam0] != -1;
}

void func_422(int iParam0)
{
	if (Local_284.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_21);
		if (StackVal)
		{
			if (!func_6(iParam0, 6))
			{
				if (func_109(Local_284.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (unk_0x52E3A18EDFF7ADA2(1))
					{
						if (func_424(iParam0))
						{
							func_423(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_423(int iParam0, int iParam1)
{
	if (func_21(&(Local_1898.f_2.f_5[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_424(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	if (!unk_0xB7D6400C89373777(Local_1898.f_2[iParam0]))
	{
		Var0 = { func_456(iParam0) };
		fVar3 = Local_284.f_19.f_5[iParam0 /*13*/].f_6;
		Var4 = { Local_284.f_19.f_5[iParam0 /*13*/].f_7 };
		if (func_86(Var0))
		{
			return 0;
		}
		Local_1898.f_2[iParam0] = unk_0x99A6768052B30AE8(unk_0x61A4FE6962D74E54(func_455(iParam0), Var0, !func_454(iParam0, 0), Local_284.f_19.f_5[iParam0 /*13*/].f_2));
		unk_0xCD37A28258D70638(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), fVar3);
		if (!func_86(Var4))
		{
			unk_0xBDDCDEC7B6205897(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), Var4, 2, 1);
		}
		func_448(iParam0, Var0);
		if (Local_834.f_100.f_28 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_100.f_28);
		}
	}
	if (Local_1898.f_2.f_20 != func_447())
	{
		Local_1898.f_2.f_20 = func_447();
	}
	if (unk_0xB7D6400C89373777(Local_1898.f_2[iParam0]))
	{
		if (func_426(&(Local_1898.f_2.f_15[iParam0 /*2*/]), func_446(iParam0), iParam0, Local_1898.f_2.f_20, Local_1898.f_198, func_445(iParam0), func_444(iParam0)))
		{
			func_425(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), Local_1898.f_2.f_15[iParam0 /*2*/].f_1);
			Local_1898.f_2.f_13[iParam0] = unk_0x666C16A4ED8F3098();
			return 1;
		}
	}
	return 0;
}

void func_425(int iParam0, int iParam1)
{
	if (unk_0x8BA4AD00568AB5FC("FMDeliverableID", 3))
	{
		unk_0x6C9577C090944B92(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_426(var uParam0, int iParam1, int iParam2, int iParam3, struct<3> Param4, var uParam7, var uParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar7;
	
	if (iParam1 == func_51())
	{
		return 0;
	}
	if (!func_407(Param4, Global_1689734.f_4955))
	{
		if ((unk_0x2053F6ACFD4ED4BC() - Global_1689734.f_4955.f_4) <= 90 || (func_19(&(Global_1689734.f_4780)) && !func_17(&(Global_1689734.f_4780), 1500, 0)))
		{
			return 0;
		}
		else
		{
			func_442();
			func_441(Param4);
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
			iVar2 = func_439(unk_0x1146A9AE09CE2B14(), iVar0);
			if (func_438(iVar2))
			{
				unk_0x191DDA30577F440A(&(Global_1689734.f_4955.f_3), iVar0);
			}
			iVar0++;
		}
	}
	uVar3 = func_437(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar3;
	if (func_436(*uParam0))
	{
		Var4 = { func_434(*uParam0) };
		if ((Global_1689734.f_4955.f_4 == unk_0x2053F6ACFD4ED4BC() || func_433(*uParam0) != iParam3) || !func_407(Param4, Var4))
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
			func_428(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1689734.f_4960[iParam2] == -1)
	{
		Global_1689734.f_4960[iParam2] = uVar3;
	}
	if (!func_19(&(Global_1689734.f_4780)) || func_17(&(Global_1689734.f_4780), 1500, 0))
	{
		bVar7 = true;
		func_22(&(Global_1689734.f_4780), 0, 0);
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
		func_427(*uParam0, iParam3, uParam7, Param4, uParam8);
		Global_1689734.f_4782 = unk_0x2053F6ACFD4ED4BC();
	}
	return 0;
}

void func_427(struct<2> Param0, int iParam2, var uParam3, struct<3> Param4, var uParam7)
{
	struct<10> Var0;
	int iVar10;
	
	if (!func_410(Param4))
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
	iVar10 = func_168(1, 1);
	if (!iVar10 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Var0, 10, iVar10);
	}
}

void func_428(struct<2> Param0, char* sParam2)
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
		bVar1 = func_432(Param0);
		bVar2 = func_436(Param0);
		uVar3 = func_433(Param0);
		iVar4 = func_431(Param0);
		uVar5 = func_429(Param0);
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

int func_429(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_430(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

int func_430(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_431(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_430(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_432(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0 != func_51());
}

int func_433(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_430(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2419497.f_199.f_1[iVar0 /*15*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_434(struct<2> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_435(Param0);
	if (iVar0 < 0 || iVar0 >= 64)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_2 = -1000;
		return Var1;
	}
	return Global_2419497.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_435(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (func_430(Param0, Global_2419497.f_199.f_1[iVar0 /*15*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_436(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2419497.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_430(Global_2419497.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_437(int iParam0, int iParam1)
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
			return func_439(iParam0, iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_438(int iParam0)
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

int func_439(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_440(iParam0);
	return (iVar0 + iParam1);
}

int func_440(int iParam0)
{
	return unk_0x15173FB88ABC94F9(unk_0xF04DBC0AC5A2AB23(iParam0));
}

void func_441(struct<3> Param0)
{
	Global_1689734.f_4955 = { Param0 };
}

void func_442()
{
	Global_1689734.f_4955.f_3 = 0;
	Global_1689734.f_4955.f_4 = 0;
	Global_1689734.f_4955 = { func_443() };
}

Vector3 func_443()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

int func_444(int iParam0)
{
	return 0;
}

int func_445(int iParam0)
{
	return 1;
}

int func_446(int iParam0)
{
	return func_12();
}

int func_447()
{
	return 23;
}

void func_448(int iParam0, struct<3> Param1)
{
	if (func_421(iParam0))
	{
		func_423(iParam0, 29);
		if (iParam0 != func_453(func_399(iParam0)))
		{
			func_423(iParam0, 40);
		}
	}
	else if (!func_454(iParam0, 7))
	{
		func_423(iParam0, 39);
	}
	unk_0xFEDD7E9148CF3B3E(Local_1898.f_2[iParam0], 1);
	unk_0x83E421E5A4A2A512(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1200);
	unk_0xC595907BB71C921D(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 50, 0);
	unk_0x8F160110753EB17B(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), true);
	unk_0x3A653D4F5FA4B665(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), true, true, false, true, true, 1, 1, 0);
	unk_0x46EDFC827DC67D89(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), 1, 1);
	unk_0x8B58E7AC53EED9F1(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), true);
	unk_0xDF9412D4FA5AA434(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1);
	unk_0x0E0A6D38926C4DD2(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1);
	if (func_452())
	{
		unk_0x3FB57058E287267D(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1);
	}
	if (func_451(iParam0))
	{
		unk_0xA2C015B68CE01357(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), true);
	}
	else
	{
		func_423(iParam0, 28);
	}
	if (!func_454(iParam0, 1))
	{
		unk_0xAFD4554ABD55837D(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]));
	}
	if (func_454(iParam0, 2))
	{
		unk_0x78CDDD1E6367978D(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), Param1, 1, 0, 0, 1);
	}
	if (func_454(iParam0, 3))
	{
		unk_0xC5DE9743D6DA2C15(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]));
		unk_0x3B3F13C4C5844979(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1);
	}
	if (func_454(iParam0, 4))
	{
		unk_0x0B87A8220B73252D(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), 1);
	}
	if ((func_454(iParam0, 6) || func_454(iParam0, 7)) || func_421(iParam0))
	{
		unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), false, 0);
	}
	if (Local_284.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_423(iParam0, 23);
	}
	if (func_450(iParam0))
	{
		unk_0x6DA4D1FB7DCE9FD8(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), 1);
	}
	if (func_454(iParam0, 9) || Local_834.f_100.f_36 != 0)
	{
		func_449(iParam0, 1, 0);
	}
}

void func_449(int iParam0, int iParam1, int iParam2)
{
	unk_0x61918AA39871DD2B(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), iParam1, iParam2);
}

int func_450(int iParam0)
{
	if (func_454(iParam0, 8))
	{
		return 1;
	}
	if (func_62(22))
	{
		return 1;
	}
	return 0;
}

bool func_451(int iParam0)
{
	if (func_6(iParam0, 29))
	{
		return 0;
	}
	return !func_454(iParam0, 5);
}

int func_452()
{
	return 0;
}

int func_453(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_284.f_19)
	{
		if (Local_1898.f_2.f_11[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_454(int iParam0, int iParam1)
{
	return func_4(&(Local_284.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_455(int iParam0)
{
	if (Local_834.f_100.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_26);
		return StackVal;
	}
	return 68603185;
}

Vector3 func_456(int iParam0)
{
	if (func_458(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_25);
		return StackVal, StackVal, StackVal;
	}
	else if (func_420(iParam0))
	{
		return Local_284.f_67.f_1[func_399(iParam0) /*14*/].f_4 + func_457(iParam0, Local_284.f_67.f_1[func_399(iParam0) /*14*/].f_3);
	}
	return Local_284.f_19.f_5[iParam0 /*13*/].f_3;
}

Vector3 func_457(int iParam0, int iParam1)
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

bool func_458(var uParam0)
{
	struct<3> Var0;
	
	if (Local_834.f_100.f_25 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_834.f_100.f_25);
	Var0 = { StackVal, StackVal, StackVal };
	return !func_86(Var0);
}

void func_459()
{
}

int func_460()
{
	return Local_1898.f_78;
}

void func_461(int iParam0)
{
	Local_1898.f_77 = iParam0;
}

int func_462()
{
	int iVar0;
	
	if (!func_1120(func_1123(), func_1121()))
	{
		return 0;
	}
	if (!func_476())
	{
		return 0;
	}
	func_475();
	func_472();
	Local_1898.f_89 = unk_0x5478C744B6AAC199(func_471(), -1, 0);
	func_470();
	func_468();
	func_467();
	func_465();
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_1898.f_63[iVar0] = -1;
		iVar0++;
	}
	Local_1898.f_93 = unk_0xB36B8558948EA7A8(0, 99999999);
	unk_0x9FCD56F864077E14(&(Local_1898.f_86), &(Local_1898.f_87));
	Global_1630816[iLocal_1838 /*597*/].f_524 = Local_1898.f_86;
	Global_1630816[iLocal_1838 /*597*/].f_525 = Local_1898.f_87;
	func_464();
	if (!func_463())
	{
		return 0;
	}
	Call_Loc(Local_834.f_1);
	return StackVal;
}

int func_463()
{
	return 1;
}

void func_464()
{
	if (Local_1898.f_94 == -1)
	{
		Local_1898.f_94 = unk_0x666C16A4ED8F3098();
	}
}

void func_465()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_284.f_38)
	{
		Local_1898.f_26[iVar0 /*22*/].f_15 = func_466(iVar0);
		iVar0++;
	}
}

int func_466(int iParam0)
{
	if (Local_284.f_38.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_284.f_38));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_284.f_38));
		}
	}
	return unk_0xB36B8558948EA7A8(0, Local_284.f_38.f_1[iParam0 /*21*/].f_16);
}

void func_467()
{
	Local_1898.f_79 = 2;
}

void func_468()
{
	int iVar0;
	
	if (func_469())
	{
		if (func_30(&(Local_1898.f_2.f_11), &(Local_1898.f_63.f_3)))
		{
			func_20(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_284.f_19)
		{
			Local_1898.f_2.f_11[iVar0] = Local_284.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

int func_469()
{
	return 0;
}

void func_470()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < Local_284.f_19)
	{
		iVar3 = Local_284.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_284.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_143(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_284.f_38)
	{
		iVar2 = Local_284.f_38.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_145(iVar2, 15))
		{
			func_38(iVar1, 19);
		}
		iVar5 = 0;
		while (iVar5 < Local_284.f_495)
		{
			if (Local_284.f_495.f_1[iVar5 /*10*/] == iVar1)
			{
				func_38(iVar1, 21);
			}
			iVar5++;
		}
		iVar1++;
	}
}

char* func_471()
{
	switch (Global_2465851)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_472()
{
	Local_1898.f_88 = func_473() + 1;
	Global_1630816[iLocal_1838 /*597*/].f_11.f_388 = Local_1898.f_88;
}

int func_473()
{
	if (func_52() == func_51())
	{
		return 0;
	}
	return func_474(func_52());
}

int func_474(int iParam0)
{
	if (func_81(iParam0) == func_51())
	{
		return 0;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_19;
}

void func_475()
{
}

int func_476()
{
	func_1119();
	func_489();
	if (!func_477())
	{
		return 0;
	}
	Stack.Push(Local_834 != 0);
	Call_Loc(Local_834);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_477()
{
	if (func_1124(12))
	{
		return 1;
	}
	if (!func_488())
	{
		return 0;
	}
	func_485();
	func_480();
	func_479();
	if (Local_834.f_11 != 0)
	{
		Call_Loc(Local_834.f_11);
	}
	func_478(12);
	return 1;
}

void func_478(int iParam0)
{
	if (func_21(&uLocal_1853, iParam0))
	{
	}
}

void func_479()
{
}

void func_480()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_471)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_19)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (-1 != Local_284.f_19.f_5[iVar0 /*13*/].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_38)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (-1 != Local_284.f_38.f_1[iVar0 /*21*/].f_8)
		{
		}
		if (-1 != Local_284.f_38.f_1[iVar0 /*21*/].f_8)
		{
		}
		func_484(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_67)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_483(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_84)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_482(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_495)
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
		if (!func_86(Local_284.f_532[iVar0 /*8*/]))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_284.f_484)
	{
		func_481(iVar0);
		iVar0++;
	}
}

void func_481(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_96(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_482(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 33)
	{
		if (func_129(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_483(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		if (func_147(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_484(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (func_36(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_485()
{
	var uVar0;
	var uVar1;
	
	uVar0 = uVar0;
	uVar1 = uVar1;
	func_487(Local_284.f_19, 1, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	func_487(Local_284.f_38, 1, "data.Ped.iCount", "MAX_NUM_PEDS");
	func_487(Local_284.f_67, 1, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
	func_487(Local_284.f_84, 1, "data.Prop.iCount", "MAX_NUM_PROPS");
	func_487(Local_284.f_495, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	func_487(Local_284.f_484, 1, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	func_487(Local_284.f_471, 1, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
	func_487(func_486(), 1, "GET_NUM_PED_GROUPS", "MAX_NUM_PED_GROUPS");
}

int func_486()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_284.f_38)
	{
		if (Local_284.f_38.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_284.f_38.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

void func_487(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (iParam0 <= iParam1)
	{
	}
}

int func_488()
{
	return 1;
}

void func_489()
{
	if (func_1124(21))
	{
		return;
	}
	func_490();
	func_478(21);
}

void func_490()
{
	switch (func_15())
	{
		case 0:
			func_1081();
			break;
		
		case 3:
			func_850();
			break;
		
		case 1:
			func_744();
			break;
		
		case 2:
			func_491();
			break;
	}
}

void func_491()
{
	Local_834.f_11 = 196056;
	Local_834.f_70.f_1 = 196022;
	Local_834.f_446.f_6 = 195994;
	Local_834.f_446.f_4 = 195972;
	Local_834.f_453.f_8 = 195963;
	Local_834.f_453.f_10 = 195856;
	Local_834.f_453.f_4 = 195808;
	Local_834.f_453.f_6 = 195726;
	Local_834.f_453.f_7 = 195690;
	Local_834.f_453.f_1 = 195629;
	Local_834.f_453.f_2 = 195615;
	Local_834.f_453.f_5 = 195564;
	Local_834.f_394 = 195496;
	Local_834.f_394.f_1 = 195336;
	Local_834.f_394.f_2 = 194740;
	Local_834 = 194731;
	Local_834.f_2 = 194687;
	Local_834.f_1 = 194618;
	Local_834.f_465 = 194602;
	Local_834.f_465.f_1 = 194561;
	Local_834.f_3.f_1 = 186716;
	Local_834.f_8 = 186686;
	Local_834.f_13.f_27 = 186672;
	Local_834.f_91 = 186653;
	Local_834.f_91.f_5 = 139539;
	Local_834.f_91.f_4 = 139431;
	Local_834.f_46 = 139399;
	Local_834.f_46.f_2 = 139367;
	Local_834.f_46.f_1 = 139329;
	Local_834.f_9 = 138999;
	Local_834.f_9.f_1 = 133290;
}

void func_492()
{
	func_526(0, 20, 138642);
	func_525(0, 1, 1);
	func_522(0, 138485);
	func_526(1, 43, 137464);
	func_510(1, 2, 137438);
	func_504(1, 137221);
	func_526(2, 44, 137464);
	func_525(2, 3, 3);
	func_526(3, 45, 137464);
	func_503(3, 4);
	func_504(3, 133436);
	func_526(4, 20, 137464);
	func_525(4, 5, 5);
	func_526(5, 46, 133428);
}

void func_493()
{
}

void func_494()
{
	if (!unk_0x234B68AC2E35ED5A(Global_2453903.f_3075.f_257, 1) && func_172(9879, -1, 0) < 3)
	{
		func_502("TSA_HT_H2_START", -1);
		func_498(9879, -1);
		unk_0x191DDA30577F440A(&(Global_2453903.f_3075.f_257), 1);
	}
	func_495(iLocal_1845, 0);
}

void func_495(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_14(6))
		{
			unk_0x45EC8BA85459EF82(iParam0, 1);
			func_497(6);
		}
	}
	else if (func_14(6))
	{
		unk_0x45EC8BA85459EF82(iParam0, 0);
		func_496(6);
	}
}

void func_496(int iParam0)
{
	if (func_127(&uLocal_1865, iParam0))
	{
	}
}

void func_497(int iParam0)
{
	if (func_21(&uLocal_1865, iParam0))
	{
	}
}

void func_498(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_172(iParam0, func_173(iParam1), 0);
	iVar0++;
	if (!func_501(iParam0))
	{
		func_500(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_499(iParam0, iVar0, iParam1, 1);
	}
}

void func_499(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2555716[iParam0 /*3*/][func_173(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1390455[func_173(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1390461[func_173(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1390467[func_173(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1390473[func_173(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1390479[func_173(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1390425[func_173(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1390431[func_173(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1390437[func_173(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1390443[func_173(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1390449[func_173(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1390395[func_173(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1390401[func_173(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1390407[func_173(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1390413[func_173(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1390419[func_173(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1390485[func_173(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1390491[func_173(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1390497[func_173(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1390503[func_173(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1390509[func_173(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1390515[func_173(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1390521[func_173(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1390527[func_173(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1390533[func_173(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2595335[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2595335[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2595335[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2595335[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2595490[func_173(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1390539[func_173(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1390545[func_173(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1390551[func_173(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1390557[func_173(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1390563[func_173(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1390569[func_173(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2595411[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2595411[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2595411[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2595411[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2595411[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2595493[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2595493[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2595493[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2595493[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2595493[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2595509[0 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2595509[1 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2595509[2 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2595509[3 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2595509[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2595411[5 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2595335[4 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2595525[func_173(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2595534[func_173(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2595528[func_173(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2595537[func_173(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2595531[func_173(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2595540[func_173(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2595543[func_173(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2595411[6 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2595335[5 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2595411[7 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2595335[6 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2595411[8 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2595335[7 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2595411[9 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2595335[8 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2595411[10 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2595335[9 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2595411[11 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2595335[10 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2595411[12 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2595335[11 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2595411[13 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2595335[12 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2595411[14 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2595335[13 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2595411[15 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2595335[14 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2595411[16 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2595335[15 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2595411[17 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2595335[16 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2595335[17 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2595335[18 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2595335[19 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2595335[20 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2595546[func_173(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2595549[func_173(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2595552[func_173(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2595555[func_173(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2595558[func_173(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2595561[func_173(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2595564[func_173(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2595567[func_173(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2595570[func_173(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2595573[func_173(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2595576[func_173(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2595579[func_173(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2595582[func_173(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2595585[func_173(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2595335[21 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2595411[23 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2595335[22 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2595411[24 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2595335[23 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2595335[24 /*3*/][func_173(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_500(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2555716[iParam0 /*3*/][func_173(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, iParam1, iParam3);
	}
}

int func_501(int iParam0)
{
	if (Global_1390376)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10441:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
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
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
				return 1;
				break;
			}
	}
	return 0;
}

void func_502(char* sParam0, int iParam1)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 0, 1, iParam1);
}

void func_503(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1469[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_1469[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1469[iParam0 /*21*/].f_19++;
}

void func_504(int iParam0, int iParam1)
{
	Local_1469[iParam0 /*21*/].f_17 = iParam1;
}

void func_505()
{
	if (func_509())
	{
		func_507(func_168(0, 1));
	}
	func_506(0);
}

void func_506(int iParam0)
{
	Global_1689702 = iParam0;
}

void func_507(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_508(iParam0, 0);
}

void func_508(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = -1;
	Var0.x = -1991911139;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam0);
}

bool func_509()
{
	return func_12() == unk_0x1146A9AE09CE2B14();
}

void func_510(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1469[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_1469[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1469[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_1469[iParam0 /*21*/].f_19++;
}

bool func_511()
{
	return func_512() >= 2;
}

int func_512()
{
	return func_26();
}

void func_513()
{
	if (func_521())
	{
		func_514();
	}
}

void func_514()
{
	if (!func_520())
	{
		return;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return;
	}
	func_515();
}

void func_515()
{
	func_517();
	func_516(0);
}

void func_516(bool bParam0)
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

void func_517()
{
	if (!func_519())
	{
	}
	if (func_520())
	{
		unk_0xEB16010DBE2A2950(&(Global_1312603.f_12));
		func_518();
		unk_0xEDA1E269A9237146();
	}
}

void func_518()
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

int func_519()
{
	if (!func_520())
	{
		return 0;
	}
	unk_0x40542ED8EFC7D2D7(&(Global_1312603.f_12));
	func_518();
	return unk_0xB4BAEA083E2652CB();
}

int func_520()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_521()
{
	if (!func_520())
	{
		return 0;
	}
	if (!unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == Global_1312603.f_9)
	{
		return 0;
	}
	return 1;
}

void func_522(int iParam0, int iParam1)
{
	Local_1469[iParam0 /*21*/].f_18 = iParam1;
}

void func_523()
{
	func_524(0);
	func_497(8);
}

void func_524(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_47), iParam0);
}

void func_525(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = Local_1469[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_1469[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1469[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_1469[iParam0 /*21*/].f_19++;
}

void func_526(int iParam0, int iParam1, int iParam2)
{
	Local_1469[iParam0 /*21*/] = iParam1;
	Local_1469[iParam0 /*21*/].f_20 = iParam2;
	iLocal_1852++;
}

void func_527()
{
	if (func_19(&(Local_1898.f_118.f_9)))
	{
		func_513();
	}
	else
	{
		func_528("TSA_H2H_OT_WAIT", 0);
	}
}

void func_528(char* sParam0, bool bParam1)
{
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return;
	}
	if (unk_0xCF7E9D7EE2349689(sParam0) > 23)
	{
		return;
	}
	if (func_532(sParam0))
	{
		return;
	}
	func_515();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_531();
	func_530(bParam1);
	func_529();
}

void func_529()
{
	unk_0x191DDA30577F440A(&(Global_1312603.f_59), 1);
}

void func_530(bool bParam0)
{
	if (bParam0)
	{
		unk_0x191DDA30577F440A(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xC664C0067EEAB8D1(&(Global_1312603.f_59), 0);
}

void func_531()
{
	Global_1312603.f_10 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), 86400000);
	Global_1312603.f_11 = unk_0x551F46B3C7DFB654();
}

bool func_532(char* sParam0)
{
	if (!func_520())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_533(sParam0);
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_12));
}

bool func_533(char* sParam0)
{
	if (!func_520())
	{
		return 0;
	}
	if (unk_0xAB6A270F84A8781E(sParam0))
	{
		return 0;
	}
	return unk_0x15173FB88ABC94F9(sParam0) == unk_0x15173FB88ABC94F9(&(Global_1312603.f_16));
}

void func_534()
{
	func_541(0, 20);
	func_538(0, 1, 139256);
	func_541(1, 43);
	func_538(1, 2, 139167);
	func_541(2, 44);
	func_536(2, 3);
	func_541(3, 45);
	func_538(3, 4, 139095);
	func_541(4, 20);
	func_538(4, 5, 139095);
	func_541(5, 46);
}

bool func_535()
{
	return func_3(19);
}

void func_536(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1328[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_1328[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1328[iParam0 /*20*/].f_19++;
}

bool func_537()
{
	return func_3(20);
}

void func_538(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1328[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_1328[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1328[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_1328[iParam0 /*20*/].f_19++;
}

int func_539()
{
	if (func_540())
	{
		return func_17(&(Local_1898.f_118.f_9), 10000, 0);
	}
	return 0;
}

bool func_540()
{
	return unk_0xAB0F784335D14AC3() >= 2;
}

void func_541(int iParam0, int iParam1)
{
	Local_1328[iParam0 /*20*/] = iParam1;
	iLocal_1851++;
}

var func_542()
{
	if (Local_1898.f_118.f_17 == iLocal_1841)
	{
		return Global_262145.f_31141;
	}
	return Global_262145.f_31142;
}

int func_543()
{
	if (Local_1898.f_118.f_17 != iLocal_1841)
	{
		return Global_262145.f_30652;
	}
	return 0;
}

int func_544()
{
	if (Local_1898.f_118.f_17 == iLocal_1841)
	{
		return Global_262145.f_30651;
	}
	return 0;
}

int func_545()
{
	if (func_512() != 0)
	{
		return 0;
	}
	return func_546(2);
}

bool func_546(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAB0F784335D14AC3() <= iParam0)
	{
		return 0;
	}
	iVar0 = 2147483647;
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		iVar2 = unk_0x6750311806FF130A(iVar1);
		if (unk_0xF46EDF82CA845956(iVar2))
		{
			if (iVar1 < iVar0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	return iLocal_1840 == iVar0;
}

void func_547()
{
	func_478(74);
	func_622(192);
	func_548(18, -1, -1, -1);
	func_548(7, -1, -1, -1);
	if (Local_1898.f_118.f_17 == iLocal_1841)
	{
		func_548(23, 1, 2, -1);
	}
	else
	{
		func_548(23, 2, 2, -1);
	}
}

void func_548(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (!func_621(iParam0))
	{
		return;
	}
	iVar0 = func_620(iParam0, iParam1, iParam2);
	if (iVar0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_617(32249, -1, -1))
			{
				func_616(32249, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 1:
			if (!func_617(32250, -1, -1))
			{
				func_616(32250, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 2:
			if (!func_617(32251, -1, -1))
			{
				func_616(32251, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 3:
			if (!func_617(32252, -1, -1))
			{
				func_616(32252, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 4:
			if (!func_617(32253, -1, -1))
			{
				func_616(32253, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 5:
			if (!func_617(32254, -1, -1))
			{
				func_616(32254, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 6:
			if (!func_617(32255, -1, -1))
			{
				func_616(32255, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 7:
			if (!func_617(32256, -1, -1))
			{
				func_616(32256, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 8:
			if (!func_617(32257, -1, -1))
			{
				func_616(32257, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 9:
			if (!func_617(32258, -1, -1))
			{
				func_616(32258, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 10:
			if (func_617(32249, -1, -1))
			{
				if (!func_617(32259, -1, -1))
				{
					func_616(32259, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 11:
			if (func_617(32250, -1, -1))
			{
				if (!func_617(32260, -1, -1))
				{
					func_616(32260, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 12:
			if (func_617(32251, -1, -1))
			{
				if (!func_617(32261, -1, -1))
				{
					func_616(32261, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 13:
			if (func_617(32252, -1, -1))
			{
				if (!func_617(32262, -1, -1))
				{
					func_616(32262, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 14:
			if (func_617(32253, -1, -1))
			{
				if (!func_617(32263, -1, -1))
				{
					func_616(32263, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 15:
			if (!func_617(32264, -1, -1))
			{
				func_616(32264, 1, -1, 1);
				func_549(iVar0, iParam0, iParam3);
			}
			break;
		
		case 16:
			if (func_617(32254, -1, -1))
			{
				if (!func_617(32265, -1, -1))
				{
					func_616(32265, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 17:
			if (func_617(32255, -1, -1))
			{
				if (!func_617(32266, -1, -1))
				{
					func_616(32266, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 18:
			if (func_617(32256, -1, -1))
			{
				if (!func_617(32267, -1, -1))
				{
					func_616(32267, 1, -1, 1);
					func_549(iVar0, iParam0, iParam3);
				}
			}
			break;
		
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			func_549(iVar0, iParam0, iParam3);
			break;
		
		case 24:
		case 25:
		case 26:
			func_549(iVar0, iParam0, iParam3);
			break;
		
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			func_549(iVar0, iParam0, iParam3);
			break;
	}
}

void func_549(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if ((((iParam0 <= 0 || unk_0x1146A9AE09CE2B14() == func_51()) || Global_262145.f_30563) || func_615() >= func_613()) || !func_612(unk_0x1146A9AE09CE2B14()))
	{
		return;
	}
	iVar0 = func_615();
	iVar1 = func_609(iVar0);
	iVar2 = (iVar0 + iParam0);
	iVar3 = func_613();
	if (iVar2 > iVar3)
	{
		iVar2 = iVar3;
	}
	bVar4 = false;
	iVar5 = func_609(iVar2);
	if (iVar5 > iVar1)
	{
		bVar4 = true;
	}
	func_500(9833, iVar2, -1, 1, 0);
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461.f_1 = iVar2;
	Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461.f_2 = iVar5;
	func_601(iParam0, iVar5, bVar4, iParam1, uParam2);
	func_600(107, iVar5, -1);
	if (bVar4)
	{
		func_550(iVar1, iVar5);
	}
}

void func_550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0 + 1;
	while (iVar0 <= iParam1)
	{
		func_599(&iVar1, &iVar2, iVar0);
		if (func_595(iVar1))
		{
			func_594(iVar1);
			func_575(iVar1, 1);
			func_574(iVar1);
		}
		if (func_595(iVar2))
		{
			func_594(iVar2);
			func_575(iVar2, 1);
			func_574(iVar2);
		}
		func_561(iVar0);
		func_556("CCR_INC_TCK", iVar0, 1);
		iVar0++;
	}
	func_551();
}

void func_551()
{
	int iVar0;
	
	iVar0 = func_553(30513, -1, -1);
	if (!Global_1703134 && iVar0 < 3)
	{
		if (!unk_0xE8FFE38E2BA32BD6())
		{
			unk_0xC664C0067EEAB8D1(&(Global_1683970.f_9), 1);
			func_552(30513, iVar0 + 1, -1, 1);
			Global_1703134 = 1;
			func_502("CCR_INC_HT", -1);
		}
		else if (!unk_0x234B68AC2E35ED5A(Global_1683970.f_9, 1))
		{
			unk_0x191DDA30577F440A(&(Global_1683970.f_9), 1);
		}
	}
}

var func_552(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == -1)
	{
		iParam2 = func_74();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
		iVar1 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
		iVar1 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam2, "_SU20PSTAT_INT");
		iVar1 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam2, "_HISLANDPSTAT_INT");
		iVar1 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam2, "_TUNERPSTAT_INT");
		iVar1 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD99D30290D6BDAC2(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_553(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar0 = 0;
	iVar1 = func_555(iParam0, iParam1);
	uVar2 = func_554(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x167E0AAAC47615D0(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_554(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x5A0258255BDE2FB1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x5A0258255BDE2FB1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x5A0258255BDE2FB1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x5A0258255BDE2FB1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x5A0258255BDE2FB1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x5A0258255BDE2FB1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x5A0258255BDE2FB1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x5A0258255BDE2FB1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x5A0258255BDE2FB1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x5A0258255BDE2FB1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x5A0258255BDE2FB1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x5A0258255BDE2FB1((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0x5A0258255BDE2FB1((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0x5A0258255BDE2FB1((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x5A0258255BDE2FB1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x5A0258255BDE2FB1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0x5A0258255BDE2FB1((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - unk_0x5A0258255BDE2FB1((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - unk_0x5A0258255BDE2FB1((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - unk_0x5A0258255BDE2FB1((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = ((iParam0 - 25538) - unk_0x5A0258255BDE2FB1((iParam0 - 25538)) * 8) * 8;
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = ((iParam0 - 27258) - unk_0x5A0258255BDE2FB1((iParam0 - 27258)) * 8) * 8;
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = ((iParam0 - 28483) - unk_0x5A0258255BDE2FB1((iParam0 - 28483)) * 8) * 8;
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = ((iParam0 - 30483) - unk_0x5A0258255BDE2FB1((iParam0 - 30483)) * 8) * 8;
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = ((iParam0 - 30707) - unk_0x5A0258255BDE2FB1((iParam0 - 30707)) * 8) * 8;
	}
	return iVar0;
}

int func_555(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x7DAFCA3E4EC9113B((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x83F92F0DDD94A22D((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	else if (iParam0 >= 25538 && iParam0 < 26810)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
	}
	else if (iParam0 >= 27258 && iParam0 < 28098)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
	}
	else if (iParam0 >= 28483 && iParam0 < 30227)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 28483), 0, 1, iParam1, "_SU20PSTAT_INT");
	}
	else if (iParam0 >= 30483 && iParam0 < 30515)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30483), 0, 1, iParam1, "_HISLANDPSTAT_INT");
	}
	else if (iParam0 >= 30707 && iParam0 < 31707)
	{
		iVar0 = unk_0x6B2DB28D6D5448A2((iParam0 - 30707), 0, 1, iParam1, "_TUNERPSTAT_INT");
	}
	return iVar0;
}

int func_556(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	unk_0x38CD3C04C877C35F(iParam1);
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	if (bParam2)
	{
		func_557(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	else
	{
		func_557(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_557(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_560() || !unk_0xE45310E861787FC2()) || !func_72(unk_0x1146A9AE09CE2B14(), 0))
	{
		return;
	}
	iVar0 = func_558(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1678174.f_5[iVar0 /*53*/] = iParam0;
		Global_1678174.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1678174.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1678174.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1678174.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1678174.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1678174.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1678174.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_558(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1678174 - 1))
	{
		if (iParam0 > Global_1678174.f_5[iVar0 /*53*/].f_1)
		{
			func_559(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1678174++;
	if (Global_1678174 > 5)
	{
		Global_1678174 = 5;
		return Global_1678174;
	}
	return (Global_1678174 - 1);
}

void func_559(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1678174.f_5[iVar0 /*53*/] = { Global_1678174.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_560()
{
	return unk_0x14FA206D9CE730A9(-1762644250);
}

void func_561(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_573(iParam0);
	if (iVar0 != -1)
	{
		if (func_239())
		{
			func_562(1669058563, iVar0, &uVar1, 0, 0, 0);
		}
		else
		{
			unk_0xBC6227792A188E2E(iVar0);
		}
	}
}

void func_562(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_239())
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
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_563(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_563(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1752851493:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_27873)
			{
				func_563(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
			func_563(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_563(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_239())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x4D51377BFFA53BFA(func_74()) || unk_0xD699DB7515D82955())
		{
			Global_4267008 = 1;
			return 0;
		}
		if (Global_2464661)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4267009 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4265506[iVar2 /*85*/].f_66.f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x9FAA2C7154E262DA(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xDA727DD48FB63842(iVar4))
		{
			*uParam0 = func_570(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4265506[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4265506[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4266993 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4267007 = 1;
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4267010 = iParam4;
			Global_4267012 = iParam3;
			Global_4267013 = 1;
			Global_4267011 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_569(1, iParam4);
			Global_4267007 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_564(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_564(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x191DDA30577F440A(&(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_565(iParam0);
	}
}

void func_565(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_239())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_568(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2BC717FE20953774();
			}
		}
		else if (!bVar0)
		{
			unk_0x9046783C7B581580(Global_4265506[iParam0 /*85*/].f_66);
		}
		func_566(&(Global_4265506[iParam0 /*85*/]));
	}
}

void func_566(var uParam0)
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
	func_567(&(uParam0->f_14));
	func_567(&(uParam0->f_14.f_13));
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

void func_567(var uParam0)
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

int func_568(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4265506[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_569(int iParam0, var uParam1)
{
	Global_2465846 = uParam1;
	Global_2465845 = iParam0;
}

int func_570(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4265506[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_239())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4265506[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4265506[iVar0 /*85*/].f_66.f_1 = uParam5;
			Global_4265506[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4265506[iVar0 /*85*/].f_66.f_4 = uParam2;
			Global_4265506[iVar0 /*85*/].f_66.f_7 = uParam3;
			Global_4265506[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4265506[iVar0 /*85*/].f_66 = iParam0;
			Global_4265506[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4265506[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4265506[iVar0 /*85*/].f_66.f_10 = uParam7;
			Global_4265506[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4265506[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4265506[iVar0 /*85*/].f_66.f_14 = unk_0x2053F6ACFD4ED4BC();
			Global_4265506[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4266993 = 0;
			if (bParam6)
			{
				Global_4265506[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_571(Global_4265506[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_571(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = -384079069;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_48(Var0.f_1);
	if ((Global_262145.f_23756 && !Global_262145.f_23757) && !Global_262145.f_23758)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_572();
		unk_0xA5C82A39FF8ED272(1, &Var0, 36, iVar36);
	}
}

void func_572()
{
	unk_0xA7988ABD4140D469("AM_ARENA_SHP");
}

int func_573(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == Global_262145.f_31097)
	{
		iVar0 = Global_262145.f_31092;
	}
	else if (iParam0 >= Global_262145.f_31095 + 1 && iParam0 <= Global_262145.f_31096)
	{
		iVar0 = Global_262145.f_31091;
	}
	else if (iParam0 >= Global_262145.f_31094 + 1 && iParam0 <= Global_262145.f_31095)
	{
		iVar0 = Global_262145.f_31090;
	}
	else if (iParam0 >= Global_262145.f_31093 + 1 && iParam0 <= Global_262145.f_31094)
	{
		iVar0 = Global_262145.f_31089;
	}
	else if (iParam0 >= 2 && iParam0 <= Global_262145.f_31093)
	{
		iVar0 = Global_262145.f_31088;
	}
	return iVar0;
}

void func_574(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 1);
			break;
		
		case 18:
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 2);
			break;
		
		case 30:
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 3);
			break;
		
		case 36:
			unk_0x191DDA30577F440A(&(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_461), 4);
			break;
	}
}

void func_575(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_593(iParam0);
	if (!func_592(iVar0))
	{
		return;
	}
	bVar1 = !func_590();
	sVar2 = "";
	switch (iVar0)
	{
		case 7:
			iVar4 = unk_0xB36B8558948EA7A8(0, 2);
			iVar3 = 14;
			if (iVar4 == 1)
			{
				iVar3 = 15;
			}
			func_587(iVar3);
			if (bParam1)
			{
				sVar2 = func_584(iParam0, bVar1, iVar4, 0);
				if (!unk_0xAB6A270F84A8781E(sVar2))
				{
					func_583("CCR_UNL_VD", sVar2, 0, 0, 0);
				}
			}
			break;
		
		case 1:
			iVar5 = 0;
			if (func_576(&iVar5))
			{
				if (bParam1)
				{
					sVar2 = func_584(iParam0, bVar1, -1, iVar5);
					if (!unk_0xAB6A270F84A8781E(sVar2))
					{
						func_583("CCR_UNL_TP", sVar2, 0, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			if (iParam0 == 12)
			{
				unk_0x191DDA30577F440A(&(Global_1683970.f_9), 16);
				func_502("CCR_INC_FA", -1);
			}
			break;
		
		case 2:
			if (iParam0 == 6)
			{
				unk_0x191DDA30577F440A(&(Global_1683970.f_9), 15);
				unk_0x191DDA30577F440A(&(Global_1683970.f_9), 18);
			}
			break;
		
		case 4:
			if (iParam0 == 24)
			{
				unk_0x191DDA30577F440A(&(Global_1683970.f_9), 17);
				unk_0x191DDA30577F440A(&(Global_1683970.f_9), 19);
			}
			break;
	}
}

int func_576(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[15];
	bool bVar18;
	int iVar19;
	int iVar20[15];
	int iVar36;
	int iVar37;
	
	bVar18 = true;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = func_582(iVar0);
		uVar2[iVar0] = func_580(iVar1);
		if (!uVar2[iVar0])
		{
			bVar18 = false;
		}
		iVar0++;
	}
	if (bVar18)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		iVar1 = func_582(iVar0);
		if (!func_579(iVar1))
		{
			if (!func_578())
			{
				iVar36 = 0;
			}
			else
			{
				iVar36 = 1;
			}
		}
		else
		{
			iVar36 = 1;
		}
		if (!uVar2[iVar0] && iVar36)
		{
			iVar20[iVar0] = iVar19;
			iVar19++;
		}
		else
		{
			iVar20[iVar0] = -1;
		}
		iVar0++;
	}
	iVar37 = unk_0xB36B8558948EA7A8(0, iVar19);
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (iVar20[iVar0] > -1 && iVar20[iVar0] == iVar37)
		{
			iVar1 = func_582(iVar0);
			func_577(iVar1);
			if (func_240(iVar1))
			{
				*iParam0 = iVar1;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_577(int iParam0)
{
	switch (iParam0)
	{
		case -1858654120:
			func_616(31810, 1, -1, 1);
			break;
		
		case -1726022652:
			func_616(31811, 1, -1, 1);
			break;
		
		case -1582061455:
			func_616(31812, 1, -1, 1);
			break;
		
		case -1540373595:
			func_616(31813, 1, -1, 1);
			break;
		
		case 1755697647:
			func_616(31814, 1, -1, 1);
			break;
		
		case 1304459735:
			func_616(31815, 1, -1, 1);
			break;
		
		case -1193912403:
			func_616(31816, 1, -1, 1);
			break;
		
		case 1377217886:
			func_616(31817, 1, -1, 1);
			break;
		
		case 426742808:
			func_616(31818, 1, -1, 1);
			break;
		
		case -1507230520:
			func_616(31819, 1, -1, 1);
			break;
		
		case -452604007:
			func_616(31820, 1, -1, 1);
			break;
		
		case 579912970:
			func_616(31821, 1, -1, 1);
			break;
		
		case -291021213:
			func_616(31822, 1, -1, 1);
			break;
		
		case 736672010:
			func_616(31823, 1, -1, 1);
			break;
		
		case 1416471345:
			func_616(31824, 1, -1, 1);
			break;
		
		default:
			break;
	}
}

int func_578()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 15)
	{
		iVar0 = func_582(iVar2);
		if (func_579(iVar0))
		{
			bVar1 = func_580(iVar0);
			if (!bVar1)
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 2038480341:
		case -1244461404:
		case -452604007:
		case -1858654120:
		case 579912970:
		case -1193912403:
		case 1377217886:
		case -1582061455:
		case -1507230520:
		case 736672010:
			return 1;
			break;
	}
	return 0;
}

int func_580(int iParam0)
{
	if (!Global_77248)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2038480341:
			return func_612(unk_0x1146A9AE09CE2B14());
		
		case -1244461404:
			return func_581(unk_0x1146A9AE09CE2B14());
		
		case -1858654120:
			return func_617(31810, -1, -1);
		
		case -1726022652:
			return func_617(31811, -1, -1);
		
		case -1582061455:
			return func_617(31812, -1, -1);
		
		case -1540373595:
			return func_617(31813, -1, -1);
		
		case 1755697647:
			return func_617(31814, -1, -1);
		
		case 1304459735:
			return func_617(31815, -1, -1);
		
		case -1193912403:
			return func_617(31816, -1, -1);
		
		case 1377217886:
			return func_617(31817, -1, -1);
		
		case 426742808:
			return func_617(31818, -1, -1);
		
		case -1507230520:
			return func_617(31819, -1, -1);
		
		case -452604007:
			return func_617(31820, -1, -1);
		
		case 579912970:
			return func_617(31821, -1, -1);
		
		case -291021213:
			return func_617(31822, -1, -1);
		
		case 736672010:
			return func_617(31823, -1, -1);
		
		case 1416471345:
			return func_617(31824, -1, -1);
		
		default:
	}
	return 0;
}

int func_581(int iParam0)
{
	if (iParam0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1713915[iParam0 /*27*/].f_1, 0);
	}
	return 0;
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -291021213;
		
		case 1:
			return -452604007;
		
		case 2:
			return -1540373595;
		
		case 3:
			return -1858654120;
		
		case 4:
			return 579912970;
		
		case 5:
			return -1193912403;
		
		case 6:
			return 1377217886;
		
		case 7:
			return 1755697647;
		
		case 8:
			return 426742808;
		
		case 9:
			return -1582061455;
		
		case 10:
			return -1507230520;
		
		case 11:
			return 736672010;
		
		case 12:
			return 1416471345;
		
		case 13:
			return 1304459735;
		
		case 14:
			return -1726022652;
		
		default:
	}
	return 0;
}

int func_583(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	if (!iParam2 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0xB2A9BDF905DC5A51(iParam3);
	}
	unk_0x1896EC0B030A48A2(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0x02B23FCAC192C764(0, 1);
	}
	else
	{
		Global_2518253 = { func_82(unk_0x1146A9AE09CE2B14()) };
		if (unk_0xEDDAF8F99F371228(&Global_2518183, 35, &Global_2518253))
		{
			iVar1 = 0;
			if (unk_0xDA654EB115F9FF7D(&(Global_2518183.f_22), "Leader") && Global_2518183.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2518183.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x05F3E4A6F62A5ACD(iVar2, unk_0xD30CB36AEC29F5CC(&Global_2518183, 35), &(Global_2518183.f_17), Global_2518183.f_30, iVar1, 0, Global_2518183, unk_0xF04DBC0AC5A2AB23(unk_0x1146A9AE09CE2B14()), Global_1314059, Global_1314060, Global_1314061);
		}
		else
		{
			iVar0 = unk_0x02B23FCAC192C764(0, 1);
		}
	}
	func_557(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

char* func_584(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 1:
			return func_586(iParam3);
		
		case 2:
			return func_585(bParam1, "CLO_TRM_PH_1_9", "CLO_TRF_PH_1_9");
		
		case 3:
			return func_585(bParam1, "CLO_TRM_F_1_12", "CLO_TRF_F_1_12");
		
		case 4:
			return func_585(bParam1, "CLO_TRM_U_11_6", "CLO_TRF_U_11_6");
		
		case 5:
			return func_586(iParam3);
		
		case 6:
			return "CCR_UNL_PS";
		
		case 7:
			return func_585(bParam1, "CLO_TRM_U_7_3", "CLO_TRF_U_7_3");
		
		case 8:
			return "SMOD5_WHL_21";
		
		case 9:
			return func_585(bParam1, "CLO_TRM_U_16_8", "CLO_TRF_U_15_8");
		
		case 10:
			return func_585(bParam1, "CLO_TRM_U_15_20", "CLO_TRF_U_14_20");
		
		case 11:
			return func_586(iParam3);
		
		case 12:
			return "CCR_UNL_QF";
		
		case 13:
			return func_585(bParam1, "CLO_TRM_U_8_3", "CLO_TRF_U_8_3");
		
		case 14:
			return "EUROS_LIV11";
		
		case 15:
			return func_585(bParam1, "CLO_TRM_D_16_0", "CLO_TRF_D_16_0");
		
		case 16:
			return func_585(bParam1, "CLO_TRM_U_9_10", "CLO_TRF_U_9_10");
		
		case 17:
			return func_586(iParam3);
		
		case 18:
			return "CCR_UNL_DV";
		
		case 19:
			return func_585(bParam1, "CLO_TRM_U_17_11", "CLO_TRF_U_16_11");
		
		case 20:
			return "FUTO2_LIV11";
		
		case 21:
			return func_585(bParam1, "CLO_TRM_PH_1_10", "CLO_TRF_PH_1_10");
		
		case 22:
			return func_585(bParam1, "CLO_TRM_F_1_4", "CLO_TRF_F_1_4");
		
		case 23:
			return func_586(iParam3);
		
		case 24:
			return "CCR_UNL_PT";
		
		case 25:
			return func_585(bParam1, "CLO_TRM_U_11_16", "CLO_TRF_U_11_16");
		
		case 26:
			return "SMOD5_WHL_22";
		
		case 27:
			return func_585(bParam1, "CLO_TRM_U_7_2", "CLO_TRF_U_7_2");
		
		case 28:
			return func_585(bParam1, "CLO_TRM_U_16_9", "CLO_TRF_U_15_9");
		
		case 29:
			return func_586(iParam3);
		
		case 30:
			return "CCR_UNL_ST";
		
		case 31:
			return func_585(bParam1, "CLO_TRM_U_15_19", "CLO_TRF_U_14_19");
		
		case 32:
			return "RT3000_LIV11";
		
		case 33:
			return func_585(bParam1, "CLO_TRM_U_8_2", "CLO_TRF_U_8_2");
		
		case 34:
			return func_585(bParam1, "CLO_TRM_D_11_0", "CLO_TRF_D_11_0");
		
		case 35:
			return func_586(iParam3);
		
		case 36:
			return "CCR_UNL_WM";
		
		case 37:
			return func_585(bParam1, "CLO_TRM_U_9_12", "CLO_TRF_U_9_12");
		
		case 38:
			return "JEST4_LIVERY11";
		
		case 39:
			return func_585(bParam1, "CLO_TRM_O_R3", "CLO_TRF_O_R3");
		
		case 40:
			return func_585(bParam1, "CLO_TRM_U_17_8", "CLO_TRF_U_16_8");
		
		case 41:
			return func_586(iParam3);
		
		case 42:
			return func_585(bParam1, "CLO_TRM_PH_1_12", "CLO_TRF_PH_1_12");
		
		case 43:
			return "SMOD5_WHL_23";
		
		case 44:
			return func_585(bParam1, "CLO_TRM_F_1_3", "CLO_TRF_F_1_3");
		
		case 45:
			return func_585(bParam1, "CLO_TRM_U_11_5", "CLO_TRF_U_11_5");
		
		case 46:
			return func_586(iParam3);
		
		case 47:
			return func_585(bParam1, "CLO_TRM_U_7_15", "CLO_TRF_U_7_15");
		
		case 48:
			return "ZR350_LIV11";
		
		case 49:
			return func_585(bParam1, "CLO_TRM_U_16_1", "CLO_TRF_U_15_1");
		
		case 50:
			return func_585(bParam1, "CLO_TRM_U_15_0", "CLO_TRF_U_14_0");
		
		case 51:
			return func_586(iParam3);
		
		case 52:
			return func_585(bParam1, "CLO_TRM_U_8_15", "CLO_TRF_U_8_15");
		
		case 53:
			return "WARR2_LIV11";
		
		case 54:
			return func_585(bParam1, "CLO_TRM_D_13_0", "CLO_TRF_D_13_0");
		
		case 55:
			return func_585(bParam1, "CLO_TRM_U_9_7", "CLO_TRF_U_9_7");
		
		case 56:
			return func_586(iParam3);
		
		case 57:
			return func_585(bParam1, "CLO_TRM_O_R2", "CLO_TRF_O_R2");
		
		case 58:
			return func_585(bParam1, "CLO_TRM_U_17_5", "CLO_TRF_U_16_5");
		
		case 59:
			return "SMOD5_WHL_24";
		
		case 60:
			return func_585(bParam1, "CLO_TRM_PH_1_7", "CLO_TRF_PH_1_7");
		
		case 61:
			return func_585(bParam1, "CLO_TRM_F_1_18", "CLO_TRF_F_1_18");
		
		case 62:
			return func_586(iParam3);
		
		case 63:
			return func_585(bParam1, "CLO_TRM_O_R4", "CLO_TRF_O_R4");
		
		case 64:
			return func_585(bParam1, "CLO_TRM_U_11_15", "CLO_TRF_U_11_15");
		
		case 65:
			return "CALICO_LIVERY11";
		
		case 66:
			return func_585(bParam1, "CLO_TRM_U_7_14", "CLO_TRF_U_7_14");
		
		case 67:
			return func_585(bParam1, "CLO_TRM_U_16_3", "CLO_TRF_U_15_3");
		
		case 68:
			return func_586(iParam3);
		
		case 69:
			return func_585(bParam1, "CLO_TRM_O_R5", "CLO_TRF_O_R5");
		
		case 70:
			return func_585(bParam1, "CLO_TRM_U_15_3", "CLO_TRF_U_14_3");
		
		case 71:
			return "REMUS_LIV11";
		
		case 72:
			return func_585(bParam1, "CLO_TRM_U_8_14", "CLO_TRF_U_8_14");
		
		case 73:
			return func_585(bParam1, "CLO_TRM_D_12_0", "CLO_TRF_D_12_0");
		
		case 74:
			return func_586(iParam3);
		
		case 75:
			return func_585(bParam1, "CLO_TRM_O_R1", "CLO_TRF_O_R1");
		
		case 76:
			return func_585(bParam1, "CLO_TRM_U_9_6", "CLO_TRF_U_9_6");
		
		case 77:
			return "SMOD5_WHL_25";
		
		case 78:
			return func_585(bParam1, "CLO_TRM_U_17_9", "CLO_TRF_U_16_9");
		
		case joaat("mpsv_lp0_31"):
			return func_585(bParam1, "CLO_TRM_PH_1_13", "CLO_TRF_PH_1_13");
		
		case 80:
			return func_586(iParam3);
		
		case 81:
			return func_585(bParam1, "CLO_TRM_O_R6", "CLO_TRF_O_R6");
		
		case 82:
			return func_585(bParam1, "CLO_TRM_F_1_19", "CLO_TRF_F_1_19");
		
		case 83:
			return "DOM8_LIV11";
		
		case 84:
			return func_585(bParam1, "CLO_TRM_U_11_19", "CLO_TRF_U_11_19");
		
		case 85:
			return func_585(bParam1, "CLO_TRM_U_7_8", "CLO_TRF_U_7_8");
		
		case 86:
			return func_586(iParam3);
		
		case 87:
			return func_585(bParam1, "CLO_TRM_O_R7", "CLO_TRF_O_R7");
		
		case 88:
			return func_585(bParam1, "CLO_TRM_U_16_0", "CLO_TRF_U_15_0");
		
		case 89:
			return "TGAIT2_LIV11";
		
		case 90:
			return func_585(bParam1, "CLO_TRM_U_15_4", "CLO_TRF_U_14_4");
		
		case 91:
			return func_585(bParam1, "CLO_TRM_U_8_8", "CLO_TRF_U_8_8");
		
		case 92:
			return "SMOD5_WHL_26";
		
		case 93:
			return func_585(bParam1, "CLO_TRM_D_10_0", "CLO_TRF_D_10_0");
		
		case 94:
			return "EUROS_LIV12";
		
		case 95:
			return func_585(bParam1, "CLO_TRM_U_9_3", "CLO_TRF_U_9_3");
		
		case 96:
			return func_585(bParam1, "CLO_TRM_U_17_2", "CLO_TRF_U_16_2");
		
		case 97:
			return "SMOD5_WHL_27";
		
		case 98:
			return func_585(bParam1, "CLO_TRM_PH_1_3", "CLO_TRF_PH_1_3");
		
		case 99:
			return "FUTO2_LIV12";
		
		case 100:
			return func_585(bParam1, "CLO_TRM_F_1_15", "CLO_TRF_F_1_15");
		
		case 101:
			return func_585(bParam1, "CLO_TRM_U_11_9", "CLO_TRF_U_11_9");
		
		case 102:
			return "SMOD5_WHL_28";
		
		case 103:
			return func_585(bParam1, "CLO_TRM_U_7_9", "CLO_TRF_U_7_9");
		
		case 104:
			return "RT3000_LIV12";
		
		case 105:
			return func_585(bParam1, "CLO_TRM_U_16_2", "CLO_TRF_U_15_2");
		
		case 106:
			return func_585(bParam1, "CLO_TRM_U_15_2", "CLO_TRF_U_14_2");
		
		case 107:
			return "SMOD5_WHL_29";
		
		case 108:
			return func_585(bParam1, "CLO_TRM_U_8_9", "CLO_TRF_U_8_9");
		
		case 109:
			return "JEST4_LIVERY12";
		
		case 110:
			return func_585(bParam1, "CLO_TRM_D_15_0", "CLO_TRF_D_15_0");
		
		case 111:
			return func_585(bParam1, "CLO_TRM_U_9_13", "CLO_TRF_U_9_13");
		
		case 112:
			return "SMOD5_WHL_30";
		
		default:
	}
	switch (iParam0)
	{
		case 113:
			return func_585(bParam1, "CLO_TRM_U_17_1", "CLO_TRF_U_16_1");
		
		case 114:
			return "ZR350_LIV12";
		
		case 115:
			return func_585(bParam1, "CLO_TRM_PH_1_4", "CLO_TRF_PH_1_4");
		
		case 116:
			return func_585(bParam1, "CLO_TRM_F_1_23", "CLO_TRF_F_1_23");
		
		case 117:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 118:
			return func_585(bParam1, "CLO_TRM_U_11_20", "CLO_TRF_U_11_20");
		
		case 119:
			return "WARR2_LIV12";
		
		case 120:
			return func_585(bParam1, "CLO_TRM_U_7_13", "CLO_TRF_U_7_13");
		
		case 121:
			return "CALICO_LIVERY12";
		
		case 122:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 123:
			return func_585(bParam1, "CLO_TRM_U_16_5", "CLO_TRF_U_15_5");
		
		case 124:
			return "REMUS_LIV12";
		
		case 125:
			return func_585(bParam1, "CLO_TRM_U_15_5", "CLO_TRF_U_14_5");
		
		case 126:
			return "DOM8_LIV12";
		
		case 127:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 128:
			return func_585(bParam1, "CLO_TRM_U_8_13", "CLO_TRF_U_8_13");
		
		case 129:
			return "TGAIT2_LIV12";
		
		case 130:
			return func_585(bParam1, "CLO_TRM_D_14_0", "CLO_TRF_D_14_0");
		
		case 131:
			return "EUROS_LIV13";
		
		case 132:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 133:
			return func_585(bParam1, "CLO_TRM_U_9_8", "CLO_TRF_U_9_8");
		
		case 134:
			return "FUTO2_LIV13";
		
		case 135:
			return func_585(bParam1, "CLO_TRM_U_17_4", "CLO_TRF_U_16_4");
		
		case 136:
			return "RT3000_LIV13";
		
		case 137:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 138:
			return func_585(bParam1, "CLO_TRM_PH_1_5", "CLO_TRF_PH_1_5");
		
		case 139:
			return "JEST4_LIVERY13";
		
		case 140:
			return func_585(bParam1, "CLO_TRM_F_1_20", "CLO_TRF_F_1_20");
		
		case 141:
			return "ZR350_LIV13";
		
		case 142:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 143:
			return func_585(bParam1, "CLO_TRM_U_11_10", "CLO_TRF_U_11_10");
		
		case 144:
			return "WARR2_LIV13";
		
		case 145:
			return func_585(bParam1, "CLO_TRM_U_7_12", "CLO_TRF_U_7_12");
		
		case 146:
			return "CALICO_LIVERY13";
		
		case 147:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 148:
			return func_585(bParam1, "CLO_TRM_U_16_4", "CLO_TRF_U_15_4");
		
		case 149:
			return "REMUS_LIV13";
		
		case 150:
			return func_585(bParam1, "CLO_TRM_U_15_8", "CLO_TRF_U_14_8");
		
		case 151:
			return "DOM8_LIV13";
		
		case 152:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 153:
			return func_585(bParam1, "CLO_TRM_U_8_12", "CLO_TRF_U_8_12");
		
		case 154:
			return "TGAIT2_LIV13";
		
		case 155:
			return func_585(bParam1, "CLO_TRM_D_9_0", "CLO_TRF_D_9_0");
		
		case 156:
			return "EUROS_LIV14";
		
		case 157:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 158:
			return func_585(bParam1, "CLO_TRM_U_9_9", "CLO_TRF_U_9_9");
		
		case 159:
			return "FUTO2_LIV14";
		
		case 160:
			return func_585(bParam1, "CLO_TRM_U_17_6", "CLO_TRF_U_16_6");
		
		case 161:
			return "RT3000_LIV14";
		
		case 162:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 163:
			return func_585(bParam1, "CLO_TRM_PH_1_6", "CLO_TRF_PH_1_6");
		
		case 164:
			return "JEST4_LIVERY14";
		
		case 165:
			return func_585(bParam1, "CLO_TRM_F_1_13", "CLO_TRF_F_1_13");
		
		case 166:
			return "ZR350_LIV14";
		
		case 167:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 168:
			return func_585(bParam1, "CLO_TRM_U_11_14", "CLO_TRF_U_11_14");
		
		case 169:
			return "WARR2_LIV14";
		
		case 170:
			return func_585(bParam1, "CLO_TRM_U_7_4", "CLO_TRF_U_7_4");
		
		case 171:
			return "CALICO_LIVERY14";
		
		case 172:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 173:
			return func_585(bParam1, "CLO_TRM_U_16_6", "CLO_TRF_U_15_6");
		
		case 174:
			return "REMUS_LIV14";
		
		case 175:
			return func_585(bParam1, "CLO_TRM_U_15_7", "CLO_TRF_U_14_7");
		
		case 176:
			return "DOM8_LIV14";
		
		case 177:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 178:
			return func_585(bParam1, "CLO_TRM_U_8_4", "CLO_TRF_U_8_4");
		
		case 179:
			return "TGAIT2_LIV14";
		
		case 180:
			return func_585(bParam1, "CLO_TRM_U_9_5", "CLO_TRF_U_9_5");
		
		case 181:
			return "EUROS_LIV15";
		
		case 182:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 183:
			return func_585(bParam1, "CLO_TRM_U_17_3", "CLO_TRF_U_16_3");
		
		case 184:
			return "FUTO2_LIV15";
		
		case 185:
			return func_585(bParam1, "CLO_TRM_PH_1_8", "CLO_TRF_PH_1_8");
		
		case 186:
			return "RT3000_LIV15";
		
		case 187:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 188:
			return func_585(bParam1, "CLO_TRM_F_1_14", "CLO_TRF_F_1_14");
		
		case 189:
			return "JEST4_LIVERY15";
		
		case 190:
			return func_585(bParam1, "CLO_TRM_U_11_17", "CLO_TRF_U_11_17");
		
		case 191:
			return "ZR350_LIV15";
		
		case 192:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 193:
			return func_585(bParam1, "CLO_TRM_U_7_5", "CLO_TRF_U_7_5");
		
		case 194:
			return "WARR2_LIV15";
		
		case 195:
			return func_585(bParam1, "CLO_TRM_U_15_15", "CLO_TRF_U_14_15");
		
		case 196:
			return "CALICO_LIVERY15";
		
		case 197:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 198:
			return func_585(bParam1, "CLO_TRM_U_8_5", "CLO_TRF_U_8_5");
		
		case 199:
			return "REMUS_LIV15";
		
		case 200:
			return func_585(bParam1, "CLO_TRM_U_9_4", "CLO_TRF_U_9_4");
		
		case 201:
			return "DOM8_LIV15";
		
		case 202:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 203:
			return func_585(bParam1, "CLO_TRM_U_17_10", "CLO_TRF_U_16_10");
		
		case 204:
			return "TGAIT2_LIV15";
		
		case 205:
			return func_585(bParam1, "CLO_TRM_PH_1_11", "CLO_TRF_PH_1_11");
		
		case 206:
			return func_585(bParam1, "CLO_TRM_F_1_8", "CLO_TRF_F_1_8");
		
		case 207:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 208:
			return func_585(bParam1, "CLO_TRM_U_11_13", "CLO_TRF_U_11_13");
		
		case 209:
			return func_585(bParam1, "CLO_TRM_U_7_10", "CLO_TRF_U_7_10");
		
		case 210:
			return func_585(bParam1, "CLO_TRM_U_15_9", "CLO_TRF_U_14_9");
		
		case 211:
			return func_585(bParam1, "CLO_TRM_U_8_10", "CLO_TRF_U_8_10");
		
		case 212:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		default:
	}
	switch (iParam0)
	{
		case 213:
			return func_585(bParam1, "CLO_TRM_U_9_1", "CLO_TRF_U_9_1");
		
		case 214:
			return func_585(bParam1, "CLO_TRM_U_17_7", "CLO_TRF_U_16_7");
		
		case 215:
			return func_585(bParam1, "CLO_TRM_F_1_1", "CLO_TRF_F_1_1");
		
		case 216:
			return func_585(bParam1, "CLO_TRM_U_11_18", "CLO_TRF_U_11_18");
		
		case 217:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 218:
			return func_585(bParam1, "CLO_TRM_U_7_11", "CLO_TRF_U_7_11");
		
		case 219:
			return func_585(bParam1, "CLO_TRM_U_15_12", "CLO_TRF_U_14_12");
		
		case 220:
			return func_585(bParam1, "CLO_TRM_U_8_11", "CLO_TRF_U_8_11");
		
		case 221:
			return func_585(bParam1, "CLO_TRM_U_9_0", "CLO_TRF_U_9_0");
		
		case 222:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 223:
			return func_585(bParam1, "CLO_TRM_F_1_0", "CLO_TRF_F_1_0");
		
		case 224:
			return func_585(bParam1, "CLO_TRM_U_11_1", "CLO_TRF_U_11_1");
		
		case 225:
			return func_585(bParam1, "CLO_TRM_U_7_1", "CLO_TRF_U_7_1");
		
		case 226:
			return func_585(bParam1, "CLO_TRM_U_15_10", "CLO_TRF_U_14_10");
		
		case 227:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 228:
			return func_585(bParam1, "CLO_TRM_U_8_1", "CLO_TRF_U_8_1");
		
		case 229:
			return func_585(bParam1, "CLO_TRM_U_9_11", "CLO_TRF_U_9_11");
		
		case 230:
			return func_585(bParam1, "CLO_TRM_F_1_2", "CLO_TRF_F_1_2");
		
		case 231:
			return func_585(bParam1, "CLO_TRM_U_11_7", "CLO_TRF_U_11_7");
		
		case 232:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 233:
			return func_585(bParam1, "CLO_TRM_U_7_0", "CLO_TRF_U_7_0");
		
		case 234:
			return func_585(bParam1, "CLO_TRM_U_15_6", "CLO_TRF_U_14_6");
		
		case 235:
			return func_585(bParam1, "CLO_TRM_U_8_0", "CLO_TRF_U_8_0");
		
		case 236:
			return func_585(bParam1, "CLO_TRM_U_9_14", "CLO_TRF_U_9_14");
		
		case 237:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 238:
			return func_585(bParam1, "CLO_TRM_F_1_5", "CLO_TRF_F_1_5");
		
		case 239:
			return func_585(bParam1, "CLO_TRM_U_11_2", "CLO_TRF_U_11_2");
		
		case 240:
			return func_585(bParam1, "CLO_TRM_U_7_6", "CLO_TRF_U_7_6");
		
		case 241:
			return func_585(bParam1, "CLO_TRM_U_15_13", "CLO_TRF_U_14_13");
		
		case 242:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 243:
			return func_585(bParam1, "CLO_TRM_U_8_6", "CLO_TRF_U_8_6");
		
		case 244:
			return func_585(bParam1, "CLO_TRM_F_1_22", "CLO_TRF_F_1_22");
		
		case 245:
			return func_585(bParam1, "CLO_TRM_U_11_8", "CLO_TRF_U_11_8");
		
		case 246:
			return func_585(bParam1, "CLO_TRM_U_15_16", "CLO_TRF_U_14_16");
		
		case 247:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 248:
			return func_585(bParam1, "CLO_TRM_F_1_21", "CLO_TRF_F_1_21");
		
		case 249:
			return func_585(bParam1, "CLO_TRM_U_11_3", "CLO_TRF_U_11_3");
		
		case 250:
			return func_585(bParam1, "CLO_TRM_U_15_17", "CLO_TRF_U_14_17");
		
		case 251:
			return func_585(bParam1, "CLO_TRM_F_1_7", "CLO_TRF_F_1_7");
		
		case 252:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 253:
			return func_585(bParam1, "CLO_TRM_U_11_11", "CLO_TRF_U_11_11");
		
		case 254:
			return func_585(bParam1, "CLO_TRM_U_15_18", "CLO_TRF_U_14_18");
		
		case 255:
			return func_585(bParam1, "CLO_TRM_F_1_6", "CLO_TRF_F_1_6");
		
		case 256:
			return func_585(bParam1, "CLO_TRM_U_11_4", "CLO_TRF_U_11_4");
		
		case 257:
			return func_585(bParam1, "CLO_TRM_U_15_14", "CLO_TRF_U_14_14");
		
		case 258:
			return func_585(bParam1, "CLO_TRM_F_1_11", "CLO_TRF_F_1_11");
		
		case 259:
			return func_585(bParam1, "CLO_TRM_U_15_11", "CLO_TRF_U_14_11");
		
		case 260:
			return func_585(bParam1, "CLO_TRM_F_1_17", "CLO_TRF_F_1_17");
		
		case 261:
			return func_585(bParam1, "CLO_TRM_F_1_16", "CLO_TRF_F_1_16");
		
		case 262:
			return func_585(bParam1, "CLO_TRM_F_1_10", "CLO_TRF_F_1_10");
		
		case 263:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 264:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 265:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 266:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 267:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 268:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 269:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 270:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 271:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 272:
			return func_585(bParam1, "CLO_TRM_F_1_9", "CLO_TRF_F_1_9");
		
		default:
	}
	switch (iParam0)
	{
		case 273:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 274:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 275:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 276:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 277:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 278:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 279:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 280:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 281:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 282:
			return func_585(bParam1, "CLO_TRM_PH_1_2", "CLO_TRF_PH_1_2");
		
		case 283:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 284:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 285:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 286:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 287:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 288:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 289:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 290:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 291:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 292:
			return func_585(bParam1, "CLO_TRM_U_15_1", "CLO_TRF_U_14_1");
		
		case 293:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 294:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 295:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 296:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 297:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 298:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 299:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 300:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 301:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 302:
			return func_585(bParam1, "CLO_TRM_U_7_7", "CLO_TRF_U_7_7");
		
		case 303:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 304:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 305:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 306:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 307:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 308:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 309:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 310:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 311:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 312:
			return func_585(bParam1, "CLO_TRM_U_9_2", "CLO_TRF_U_9_2");
		
		default:
	}
	switch (iParam0)
	{
		case 313:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 314:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 315:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 316:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 317:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 318:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 319:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 320:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 321:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 322:
			return func_585(bParam1, "CLO_TRM_U_11_12", "CLO_TRF_U_11_12");
		
		case 323:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 324:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 325:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 326:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 327:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 328:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 329:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 330:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 331:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 332:
			return func_585(bParam1, "CLO_TRM_U_17_7", "CLO_TRF_U_16_7");
		
		case 333:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 334:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 335:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 336:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 337:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 338:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 339:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 340:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 341:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 342:
			return func_585(bParam1, "CLO_TRM_U_8_7", "CLO_TRF_U_8_7");
		
		case 343:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 344:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 345:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 346:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 347:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 348:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 349:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 350:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 351:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 352:
			return func_585(bParam1, "CLO_TRM_U_16_7", "CLO_TRF_U_15_7");
		
		case 353:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 354:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 355:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 356:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 357:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 358:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 359:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 360:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 361:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 362:
			return func_585(bParam1, "CLO_TRM_D_8_0", "CLO_TRF_D_8_0");
		
		case 363:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 364:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 365:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 366:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 367:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 368:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 369:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 370:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 371:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 372:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 373:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 374:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 375:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 376:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 377:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 378:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 379:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 380:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 381:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 382:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 383:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 384:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 385:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 386:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 387:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 388:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 389:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 390:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 391:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 392:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 393:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 394:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 395:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 396:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 397:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 398:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 399:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 400:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 401:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 402:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 403:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 404:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 405:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 406:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 407:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 408:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 409:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 410:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 411:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 412:
			return func_585(iParam2 == 0, "LGM_NAME", "SSS_NAME");
		
		case 413:
			return func_585(bParam1, "CLO_TRM_O_R8", "CLO_TRF_O_R8");
		
		default:
	}
	return "";
}

char* func_585(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

char* func_586(int iParam0)
{
	switch (iParam0)
	{
		case -291021213:
			return "SULTAN3";
		
		case -452604007:
			return "RT3000";
		
		case -1540373595:
			return "VECTRE";
		
		case -1858654120:
			return "ZR350";
		
		case 579912970:
			return "WARRENER2";
		
		case -1193912403:
			return "CALICO";
		
		case 1377217886:
			return "REMUS";
		
		case 1755697647:
			return "CYPHER";
		
		case 426742808:
			return "DOMINATOR7";
		
		case -1582061455:
			return "JESTER4";
		
		case -1507230520:
			return "FUTO2";
		
		case 736672010:
			return "DOMINATOR8";
		
		case 1416471345:
			return "PREVION";
		
		case 1304459735:
			return "GROWLER";
		
		case -1726022652:
			return "COMET6";
		
		case 2038480341:
			return "EUROS";
		
		default:
	}
	return "";
}

void func_587(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	
	if (iParam0 == 8)
	{
		func_616(129, 1, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_616(135, 1, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_616(136, 1, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_616(137, 1, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x666C16A4ED8F3098();
		func_500(8271, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		iVar1 = unk_0x666C16A4ED8F3098();
		func_500(8272, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		iVar2 = unk_0x666C16A4ED8F3098();
		func_500(8273, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		iVar3 = unk_0x666C16A4ED8F3098();
		func_500(8274, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		iVar4 = unk_0x666C16A4ED8F3098();
		func_500(8275, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		iVar5 = unk_0x666C16A4ED8F3098();
		func_500(8276, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!unk_0x02BFF15CAA701972())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0))
		{
			bVar6 = true;
			unk_0x191DDA30577F440A(&(Global_112293.f_20562.f_471), iParam0);
		}
	}
	else if (!unk_0x234B68AC2E35ED5A(Global_112293.f_20562.f_471, iParam0) || !unk_0x234B68AC2E35ED5A(Global_2097152[func_589() /*5557*/].f_675.f_10, iParam0))
	{
		bVar6 = true;
		unk_0x191DDA30577F440A(&(Global_112293.f_20562.f_471), iParam0);
		unk_0x191DDA30577F440A(&(Global_2097152[func_589() /*5557*/].f_675.f_10), iParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		unk_0xAD97A7EDCF347FBB("COUP_STR");
		unk_0x1896EC0B030A48A2(func_588(iParam0));
		unk_0x1664AA1696810AD6(&cVar7, &cVar7, 1, 0, "", 0);
	}
}

char* func_588(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_589()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_590()
{
	return func_591(unk_0x1146A9AE09CE2B14());
}

int func_591(int iParam0)
{
	if (unk_0x6471F4759775FCA4(unk_0xD56332194D622ECE(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_592(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 8);
}

int func_593(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 3:
			return 0;
		
		case 4:
			return 0;
		
		case 5:
			return 1;
		
		case 6:
			return 2;
		
		case 7:
			return 0;
		
		case 8:
			return 5;
		
		case 9:
			return 0;
		
		case 10:
			return 0;
		
		case 11:
			return 1;
		
		case 12:
			return 3;
		
		case 13:
			return 0;
		
		case 14:
			return 6;
		
		case 15:
			return 0;
		
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 18:
			return 3;
		
		case 19:
			return 0;
		
		case 20:
			return 6;
		
		case 21:
			return 0;
		
		case 22:
			return 0;
		
		case 23:
			return 1;
		
		case 24:
			return 4;
		
		case 25:
			return 0;
		
		case 26:
			return 5;
		
		case 27:
			return 0;
		
		case 28:
			return 0;
		
		case 29:
			return 1;
		
		case 30:
			return 3;
		
		case 31:
			return 0;
		
		case 32:
			return 6;
		
		case 33:
			return 0;
		
		case 34:
			return 0;
		
		case 35:
			return 1;
		
		case 36:
			return 3;
		
		case 37:
			return 0;
		
		case 38:
			return 6;
		
		case 39:
			return 0;
		
		case 40:
			return 0;
		
		case 41:
			return 1;
		
		case 42:
			return 0;
		
		case 43:
			return 5;
		
		case 44:
			return 0;
		
		case 45:
			return 0;
		
		case 46:
			return 1;
		
		case 47:
			return 0;
		
		case 48:
			return 6;
		
		case 49:
			return 0;
		
		case 50:
			return 0;
		
		case 51:
			return 1;
		
		case 52:
			return 0;
		
		case 53:
			return 6;
		
		case 54:
			return 0;
		
		case 55:
			return 0;
		
		case 56:
			return 1;
		
		case 57:
			return 0;
		
		case 58:
			return 0;
		
		case 59:
			return 5;
		
		case 60:
			return 0;
		
		case 61:
			return 0;
		
		case 62:
			return 1;
		
		case 63:
			return 0;
		
		case 64:
			return 0;
		
		case 65:
			return 6;
		
		case 66:
			return 0;
		
		case 67:
			return 0;
		
		case 68:
			return 1;
		
		case 69:
			return 0;
		
		case 70:
			return 0;
		
		case 71:
			return 6;
		
		case 72:
			return 0;
		
		case 73:
			return 0;
		
		case 74:
			return 1;
		
		case 75:
			return 0;
		
		case 76:
			return 0;
		
		case 77:
			return 5;
		
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 0;
		
		case 80:
			return 1;
		
		case 81:
			return 0;
		
		case 82:
			return 0;
		
		case 83:
			return 6;
		
		case 84:
			return 0;
		
		case 85:
			return 0;
		
		case 86:
			return 1;
		
		case 87:
			return 0;
		
		case 88:
			return 0;
		
		case 89:
			return 6;
		
		case 90:
			return 0;
		
		case 91:
			return 0;
		
		case 92:
			return 5;
		
		case 93:
			return 0;
		
		case 94:
			return 6;
		
		case 95:
			return 0;
		
		case 96:
			return 0;
		
		case 97:
			return 5;
		
		case 98:
			return 0;
		
		case 99:
			return 6;
		
		case 100:
			return 0;
		
		case 101:
			return 0;
		
		case 102:
			return 5;
		
		case 103:
			return 0;
		
		case 104:
			return 6;
		
		case 105:
			return 0;
		
		case 106:
			return 0;
		
		case 107:
			return 5;
		
		case 108:
			return 0;
		
		case 109:
			return 6;
		
		case 110:
			return 0;
		
		case 111:
			return 0;
		
		case 112:
			return 5;
		
		default:
	}
	switch (iParam0)
	{
		case 113:
			return 0;
		
		case 114:
			return 6;
		
		case 115:
			return 0;
		
		case 116:
			return 0;
		
		case 117:
			return 7;
		
		case 118:
			return 0;
		
		case 119:
			return 6;
		
		case 120:
			return 0;
		
		case 121:
			return 6;
		
		case 122:
			return 7;
		
		case 123:
			return 0;
		
		case 124:
			return 6;
		
		case 125:
			return 0;
		
		case 126:
			return 6;
		
		case 127:
			return 7;
		
		case 128:
			return 0;
		
		case 129:
			return 6;
		
		case 130:
			return 0;
		
		case 131:
			return 6;
		
		case 132:
			return 7;
		
		case 133:
			return 0;
		
		case 134:
			return 6;
		
		case 135:
			return 0;
		
		case 136:
			return 6;
		
		case 137:
			return 7;
		
		case 138:
			return 0;
		
		case 139:
			return 6;
		
		case 140:
			return 0;
		
		case 141:
			return 6;
		
		case 142:
			return 7;
		
		case 143:
			return 0;
		
		case 144:
			return 6;
		
		case 145:
			return 0;
		
		case 146:
			return 6;
		
		case 147:
			return 7;
		
		case 148:
			return 0;
		
		case 149:
			return 6;
		
		case 150:
			return 0;
		
		case 151:
			return 6;
		
		case 152:
			return 7;
		
		case 153:
			return 0;
		
		case 154:
			return 6;
		
		case 155:
			return 0;
		
		case 156:
			return 6;
		
		case 157:
			return 7;
		
		case 158:
			return 0;
		
		case 159:
			return 6;
		
		case 160:
			return 0;
		
		case 161:
			return 6;
		
		case 162:
			return 7;
		
		case 163:
			return 0;
		
		case 164:
			return 6;
		
		case 165:
			return 0;
		
		case 166:
			return 6;
		
		case 167:
			return 7;
		
		case 168:
			return 0;
		
		case 169:
			return 6;
		
		case 170:
			return 0;
		
		case 171:
			return 6;
		
		case 172:
			return 7;
		
		case 173:
			return 0;
		
		case 174:
			return 6;
		
		case 175:
			return 0;
		
		case 176:
			return 6;
		
		case 177:
			return 7;
		
		case 178:
			return 0;
		
		case 179:
			return 6;
		
		case 180:
			return 0;
		
		case 181:
			return 6;
		
		case 182:
			return 7;
		
		case 183:
			return 0;
		
		case 184:
			return 6;
		
		case 185:
			return 0;
		
		case 186:
			return 6;
		
		case 187:
			return 7;
		
		case 188:
			return 0;
		
		case 189:
			return 6;
		
		case 190:
			return 0;
		
		case 191:
			return 6;
		
		case 192:
			return 7;
		
		case 193:
			return 0;
		
		case 194:
			return 6;
		
		case 195:
			return 0;
		
		case 196:
			return 6;
		
		case 197:
			return 7;
		
		case 198:
			return 0;
		
		case 199:
			return 6;
		
		case 200:
			return 0;
		
		case 201:
			return 6;
		
		case 202:
			return 7;
		
		case 203:
			return 0;
		
		case 204:
			return 6;
		
		case 205:
			return 0;
		
		case 206:
			return 0;
		
		case 207:
			return 7;
		
		case 208:
			return 0;
		
		case 209:
			return 0;
		
		case 210:
			return 0;
		
		case 211:
			return 0;
		
		case 212:
			return 7;
		
		default:
	}
	switch (iParam0)
	{
		case 213:
			return 0;
		
		case 214:
			return 0;
		
		case 215:
			return 0;
		
		case 216:
			return 0;
		
		case 217:
			return 7;
		
		case 218:
			return 0;
		
		case 219:
			return 0;
		
		case 220:
			return 0;
		
		case 221:
			return 0;
		
		case 222:
			return 7;
		
		case 223:
			return 0;
		
		case 224:
			return 0;
		
		case 225:
			return 0;
		
		case 226:
			return 0;
		
		case 227:
			return 7;
		
		case 228:
			return 0;
		
		case 229:
			return 0;
		
		case 230:
			return 0;
		
		case 231:
			return 0;
		
		case 232:
			return 7;
		
		case 233:
			return 0;
		
		case 234:
			return 0;
		
		case 235:
			return 0;
		
		case 236:
			return 0;
		
		case 237:
			return 7;
		
		case 238:
			return 0;
		
		case 239:
			return 0;
		
		case 240:
			return 0;
		
		case 241:
			return 0;
		
		case 242:
			return 7;
		
		case 243:
			return 0;
		
		case 244:
			return 0;
		
		case 245:
			return 0;
		
		case 246:
			return 0;
		
		case 247:
			return 7;
		
		case 248:
			return 0;
		
		case 249:
			return 0;
		
		case 250:
			return 0;
		
		case 251:
			return 0;
		
		case 252:
			return 7;
		
		case 253:
			return 0;
		
		case 254:
			return 0;
		
		case 255:
			return 0;
		
		case 256:
			return 0;
		
		case 257:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 0;
		
		case 260:
			return 0;
		
		case 261:
			return 0;
		
		case 262:
			return 0;
		
		case 263:
			return 7;
		
		case 264:
			return 7;
		
		case 265:
			return 7;
		
		case 266:
			return 7;
		
		case 267:
			return 7;
		
		case 268:
			return 7;
		
		case 269:
			return 7;
		
		case 270:
			return 7;
		
		case 271:
			return 7;
		
		case 272:
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case 273:
			return 7;
		
		case 274:
			return 7;
		
		case 275:
			return 7;
		
		case 276:
			return 7;
		
		case 277:
			return 7;
		
		case 278:
			return 7;
		
		case 279:
			return 7;
		
		case 280:
			return 7;
		
		case 281:
			return 7;
		
		case 282:
			return 0;
		
		case 283:
			return 7;
		
		case 284:
			return 7;
		
		case 285:
			return 7;
		
		case 286:
			return 7;
		
		case 287:
			return 7;
		
		case 288:
			return 7;
		
		case 289:
			return 7;
		
		case 290:
			return 7;
		
		case 291:
			return 7;
		
		case 292:
			return 0;
		
		case 293:
			return 7;
		
		case 294:
			return 7;
		
		case 295:
			return 7;
		
		case 296:
			return 7;
		
		case 297:
			return 7;
		
		case 298:
			return 7;
		
		case 299:
			return 7;
		
		case 300:
			return 7;
		
		case 301:
			return 7;
		
		case 302:
			return 0;
		
		case 303:
			return 7;
		
		case 304:
			return 7;
		
		case 305:
			return 7;
		
		case 306:
			return 7;
		
		case 307:
			return 7;
		
		case 308:
			return 7;
		
		case 309:
			return 7;
		
		case 310:
			return 7;
		
		case 311:
			return 7;
		
		case 312:
			return 0;
		
		default:
	}
	switch (iParam0)
	{
		case 313:
			return 7;
		
		case 314:
			return 7;
		
		case 315:
			return 7;
		
		case 316:
			return 7;
		
		case 317:
			return 7;
		
		case 318:
			return 7;
		
		case 319:
			return 7;
		
		case 320:
			return 7;
		
		case 321:
			return 7;
		
		case 322:
			return 0;
		
		case 323:
			return 7;
		
		case 324:
			return 7;
		
		case 325:
			return 7;
		
		case 326:
			return 7;
		
		case 327:
			return 7;
		
		case 328:
			return 7;
		
		case 329:
			return 7;
		
		case 330:
			return 7;
		
		case 331:
			return 7;
		
		case 332:
			return 0;
		
		case 333:
			return 7;
		
		case 334:
			return 7;
		
		case 335:
			return 7;
		
		case 336:
			return 7;
		
		case 337:
			return 7;
		
		case 338:
			return 7;
		
		case 339:
			return 7;
		
		case 340:
			return 7;
		
		case 341:
			return 7;
		
		case 342:
			return 0;
		
		case 343:
			return 7;
		
		case 344:
			return 7;
		
		case 345:
			return 7;
		
		case 346:
			return 7;
		
		case 347:
			return 7;
		
		case 348:
			return 7;
		
		case 349:
			return 7;
		
		case 350:
			return 7;
		
		case 351:
			return 7;
		
		case 352:
			return 0;
		
		case 353:
			return 7;
		
		case 354:
			return 7;
		
		case 355:
			return 7;
		
		case 356:
			return 7;
		
		case 357:
			return 7;
		
		case 358:
			return 7;
		
		case 359:
			return 7;
		
		case 360:
			return 7;
		
		case 361:
			return 7;
		
		case 362:
			return 0;
		
		case 363:
			return 7;
		
		case 364:
			return 7;
		
		case 365:
			return 7;
		
		case 366:
			return 7;
		
		case 367:
			return 7;
		
		case 368:
			return 7;
		
		case 369:
			return 7;
		
		case 370:
			return 7;
		
		case 371:
			return 7;
		
		case 372:
			return 7;
		
		case 373:
			return 7;
		
		case 374:
			return 7;
		
		case 375:
			return 7;
		
		case 376:
			return 7;
		
		case 377:
			return 7;
		
		case 378:
			return 7;
		
		case 379:
			return 7;
		
		case 380:
			return 7;
		
		case 381:
			return 7;
		
		case 382:
			return 7;
		
		case 383:
			return 7;
		
		case 384:
			return 7;
		
		case 385:
			return 7;
		
		case 386:
			return 7;
		
		case 387:
			return 7;
		
		case 388:
			return 7;
		
		case 389:
			return 7;
		
		case 390:
			return 7;
		
		case 391:
			return 7;
		
		case 392:
			return 7;
		
		case 393:
			return 7;
		
		case 394:
			return 7;
		
		case 395:
			return 7;
		
		case 396:
			return 7;
		
		case 397:
			return 7;
		
		case 398:
			return 7;
		
		case 399:
			return 7;
		
		case 400:
			return 7;
		
		case 401:
			return 7;
		
		case 402:
			return 7;
		
		case 403:
			return 7;
		
		case 404:
			return 7;
		
		case 405:
			return 7;
		
		case 406:
			return 7;
		
		case 407:
			return 7;
		
		case 408:
			return 7;
		
		case 409:
			return 7;
		
		case 410:
			return 7;
		
		case 411:
			return 7;
		
		case 412:
			return 7;
		
		case 413:
			return 0;
		
		default:
	}
	return -1;
}

void func_594(int iParam0)
{
	int iVar0;
	char* sVar1;
	bool bVar2;
	char* sVar3;
	
	iVar0 = func_593(iParam0);
	if (!func_592(iVar0))
	{
		return;
	}
	sVar1 = "";
	switch (iVar0)
	{
		case 0:
			sVar1 = "CCR_UNL_CLTH";
			break;
		
		case 1:
			sVar1 = "";
			break;
		
		case 2:
			sVar1 = "CCR_UNL_RC";
			break;
		
		case 3:
			sVar1 = "CCR_UNL_FA";
			break;
		
		case 4:
			sVar1 = "CCR_UNL_FT";
			break;
		
		case 5:
			sVar1 = "CCR_UNL_WS";
			break;
		
		case 6:
			sVar1 = "CCR_UNL_LIV";
			break;
		
		case 7:
			sVar1 = "";
			break;
	}
	bVar2 = !func_590();
	sVar3 = func_584(iParam0, bVar2, -1, 0);
	if (!unk_0xAB6A270F84A8781E(sVar1) && !unk_0xAB6A270F84A8781E(sVar3))
	{
		func_583(sVar1, sVar3, 0, 0, 0);
	}
}

int func_595(int iParam0)
{
	int iVar0;
	
	if (!func_598(iParam0))
	{
		return 0;
	}
	if (func_597(iParam0))
	{
		return 0;
	}
	iVar0 = func_596(iParam0);
	if (iVar0 == 513)
	{
		return 0;
	}
	func_616(iVar0, 1, -1, 1);
	return 1;
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 31825;
		
		case 2:
			return 31826;
		
		case 3:
			return 31827;
		
		case 4:
			return 31828;
		
		case 5:
			return 31829;
		
		case 6:
			return 31829;
		
		case 7:
			return 31830;
		
		case 8:
			return 31831;
		
		case 9:
			return 31832;
		
		case 10:
			return 31833;
		
		case 11:
			return 31834;
		
		case 12:
			return 31834;
		
		case 13:
			return 31835;
		
		case 14:
			return 31836;
		
		case 15:
			return 31837;
		
		case 16:
			return 31838;
		
		case 17:
			return 31839;
		
		case 18:
			return 31839;
		
		case 19:
			return 31840;
		
		case 20:
			return 31841;
		
		case 21:
			return 31842;
		
		case 22:
			return 31843;
		
		case 23:
			return 31844;
		
		case 24:
			return 31844;
		
		case 25:
			return 31845;
		
		case 26:
			return 31846;
		
		case 27:
			return 31847;
		
		case 28:
			return 31848;
		
		case 29:
			return 31849;
		
		case 30:
			return 31849;
		
		case 31:
			return 31850;
		
		case 32:
			return 31851;
		
		case 33:
			return 31852;
		
		case 34:
			return 31853;
		
		case 35:
			return 31854;
		
		case 36:
			return 31854;
		
		case 37:
			return 31855;
		
		case 38:
			return 31856;
		
		case 39:
			return 31857;
		
		case 40:
			return 31858;
		
		case 41:
			return 31859;
		
		case 42:
			return 31860;
		
		case 43:
			return 31861;
		
		case 44:
			return 31862;
		
		case 45:
			return 31863;
		
		case 46:
			return 31864;
		
		case 47:
			return 31865;
		
		case 48:
			return 31866;
		
		case 49:
			return 31867;
		
		case 50:
			return 31868;
		
		case 51:
			return 31869;
		
		case 52:
			return 31870;
		
		case 53:
			return 31871;
		
		case 54:
			return 31872;
		
		case 55:
			return 31873;
		
		case 56:
			return 31874;
		
		case 57:
			return 31874;
		
		case 58:
			return 31875;
		
		case 59:
			return 31876;
		
		case 60:
			return 31877;
		
		case 61:
			return 31878;
		
		case 62:
			return 31879;
		
		case 63:
			return 31879;
		
		case 64:
			return 31880;
		
		case 65:
			return 31881;
		
		case 66:
			return 31882;
		
		case 67:
			return 31883;
		
		case 68:
			return 31884;
		
		case 69:
			return 31884;
		
		case 70:
			return 31885;
		
		case 71:
			return 31886;
		
		case 72:
			return 31887;
		
		case 73:
			return 31888;
		
		case 74:
			return 31889;
		
		case 75:
			return 31889;
		
		case 76:
			return 31890;
		
		case 77:
			return 31891;
		
		case 78:
			return 31892;
		
		case joaat("mpsv_lp0_31"):
			return 31893;
		
		case 80:
			return 31894;
		
		case 81:
			return 31894;
		
		case 82:
			return 31895;
		
		case 83:
			return 31896;
		
		case 84:
			return 31897;
		
		case 85:
			return 31898;
		
		case 86:
			return 31899;
		
		case 87:
			return 31899;
		
		case 88:
			return 31900;
		
		case 89:
			return 31901;
		
		case 90:
			return 31902;
		
		case 91:
			return 31903;
		
		case 92:
			return 31904;
		
		case 93:
			return 31905;
		
		case 94:
			return 31906;
		
		case 95:
			return 31907;
		
		case 96:
			return 31908;
		
		case 97:
			return 31909;
		
		case 98:
			return 31910;
		
		case 99:
			return 31911;
		
		case 100:
			return 31912;
		
		case 101:
			return 31913;
		
		case 102:
			return 31914;
		
		case 103:
			return 31915;
		
		case 104:
			return 31916;
		
		case 105:
			return 31917;
		
		case 106:
			return 31918;
		
		case 107:
			return 31919;
		
		case 108:
			return 31920;
		
		case 109:
			return 31921;
		
		case 110:
			return 31922;
		
		case 111:
			return 31923;
		
		case 112:
			return 31924;
		
		default:
	}
	switch (iParam0)
	{
		case 113:
			return 31925;
		
		case 114:
			return 31926;
		
		case 115:
			return 31927;
		
		case 116:
			return 31928;
		
		case 117:
			return 31929;
		
		case 118:
			return 31930;
		
		case 119:
			return 31931;
		
		case 120:
			return 31932;
		
		case 121:
			return 31933;
		
		case 122:
			return 31934;
		
		case 123:
			return 31935;
		
		case 124:
			return 31936;
		
		case 125:
			return 31937;
		
		case 126:
			return 31938;
		
		case 127:
			return 31939;
		
		case 128:
			return 31940;
		
		case 129:
			return 31941;
		
		case 130:
			return 31942;
		
		case 131:
			return 31943;
		
		case 132:
			return 31944;
		
		case 133:
			return 31945;
		
		case 134:
			return 31946;
		
		case 135:
			return 31947;
		
		case 136:
			return 31948;
		
		case 137:
			return 31949;
		
		case 138:
			return 31950;
		
		case 139:
			return 31951;
		
		case 140:
			return 31952;
		
		case 141:
			return 31953;
		
		case 142:
			return 31954;
		
		case 143:
			return 31955;
		
		case 144:
			return 31956;
		
		case 145:
			return 31957;
		
		case 146:
			return 31958;
		
		case 147:
			return 31959;
		
		case 148:
			return 31960;
		
		case 149:
			return 31961;
		
		case 150:
			return 31962;
		
		case 151:
			return 31963;
		
		case 152:
			return 31964;
		
		case 153:
			return 31965;
		
		case 154:
			return 31966;
		
		case 155:
			return 31967;
		
		case 156:
			return 31968;
		
		case 157:
			return 31969;
		
		case 158:
			return 31970;
		
		case 159:
			return 31971;
		
		case 160:
			return 31972;
		
		case 161:
			return 31973;
		
		case 162:
			return 31974;
		
		case 163:
			return 31975;
		
		case 164:
			return 31976;
		
		case 165:
			return 31977;
		
		case 166:
			return 31978;
		
		case 167:
			return 31979;
		
		case 168:
			return 31980;
		
		case 169:
			return 31981;
		
		case 170:
			return 31982;
		
		case 171:
			return 31983;
		
		case 172:
			return 31984;
		
		case 173:
			return 31985;
		
		case 174:
			return 31986;
		
		case 175:
			return 31987;
		
		case 176:
			return 31988;
		
		case 177:
			return 31989;
		
		case 178:
			return 31990;
		
		case 179:
			return 31991;
		
		case 180:
			return 31992;
		
		case 181:
			return 31993;
		
		case 182:
			return 31994;
		
		case 183:
			return 31995;
		
		case 184:
			return 31996;
		
		case 185:
			return 31997;
		
		case 186:
			return 31998;
		
		case 187:
			return 31999;
		
		case 188:
			return 32000;
		
		case 189:
			return 32001;
		
		case 190:
			return 32002;
		
		case 191:
			return 32003;
		
		case 192:
			return 32004;
		
		case 193:
			return 32005;
		
		case 194:
			return 32006;
		
		case 195:
			return 32007;
		
		case 196:
			return 32008;
		
		case 197:
			return 32009;
		
		case 198:
			return 32010;
		
		case 199:
			return 32011;
		
		case 200:
			return 32012;
		
		case 201:
			return 32013;
		
		case 202:
			return 32014;
		
		case 203:
			return 32015;
		
		case 204:
			return 32016;
		
		case 205:
			return 32017;
		
		case 206:
			return 32018;
		
		case 207:
			return 32019;
		
		case 208:
			return 32020;
		
		case 209:
			return 32021;
		
		case 210:
			return 32022;
		
		case 211:
			return 32023;
		
		case 212:
			return 32024;
		
		default:
	}
	switch (iParam0)
	{
		case 213:
			return 32025;
		
		case 214:
			return 32026;
		
		case 215:
			return 32027;
		
		case 216:
			return 32028;
		
		case 217:
			return 32029;
		
		case 218:
			return 32030;
		
		case 219:
			return 32031;
		
		case 220:
			return 32032;
		
		case 221:
			return 32033;
		
		case 222:
			return 32034;
		
		case 223:
			return 32035;
		
		case 224:
			return 32036;
		
		case 225:
			return 32037;
		
		case 226:
			return 32038;
		
		case 227:
			return 32039;
		
		case 228:
			return 32040;
		
		case 229:
			return 32041;
		
		case 230:
			return 32042;
		
		case 231:
			return 32043;
		
		case 232:
			return 32044;
		
		case 233:
			return 32045;
		
		case 234:
			return 32046;
		
		case 235:
			return 32047;
		
		case 236:
			return 32048;
		
		case 237:
			return 32049;
		
		case 238:
			return 32050;
		
		case 239:
			return 32051;
		
		case 240:
			return 32052;
		
		case 241:
			return 32053;
		
		case 242:
			return 32054;
		
		case 243:
			return 32055;
		
		case 244:
			return 32056;
		
		case 245:
			return 32057;
		
		case 246:
			return 32058;
		
		case 247:
			return 32059;
		
		case 248:
			return 32060;
		
		case 249:
			return 32061;
		
		case 250:
			return 32062;
		
		case 251:
			return 32063;
		
		case 252:
			return 32064;
		
		case 253:
			return 32065;
		
		case 254:
			return 32066;
		
		case 255:
			return 32067;
		
		case 256:
			return 32068;
		
		case 257:
			return 32069;
		
		case 258:
			return 32070;
		
		case 259:
			return 32071;
		
		case 260:
			return 32072;
		
		case 261:
			return 32073;
		
		case 262:
			return 32074;
		
		case 263:
			return 32075;
		
		case 264:
			return 32076;
		
		case 265:
			return 32077;
		
		case 266:
			return 32078;
		
		case 267:
			return 32079;
		
		case 268:
			return 32080;
		
		case 269:
			return 32081;
		
		case 270:
			return 32082;
		
		case 271:
			return 32083;
		
		case 272:
			return 32084;
		
		default:
	}
	switch (iParam0)
	{
		case 273:
			return 32085;
		
		case 274:
			return 32086;
		
		case 275:
			return 32087;
		
		case 276:
			return 32088;
		
		case 277:
			return 32089;
		
		case 278:
			return 32090;
		
		case 279:
			return 32091;
		
		case 280:
			return 32092;
		
		case 281:
			return 32093;
		
		case 282:
			return 32094;
		
		case 283:
			return 32095;
		
		case 284:
			return 32096;
		
		case 285:
			return 32097;
		
		case 286:
			return 32098;
		
		case 287:
			return 32099;
		
		case 288:
			return 32100;
		
		case 289:
			return 32101;
		
		case 290:
			return 32102;
		
		case 291:
			return 32103;
		
		case 292:
			return 32104;
		
		case 293:
			return 32105;
		
		case 294:
			return 32106;
		
		case 295:
			return 32107;
		
		case 296:
			return 32108;
		
		case 297:
			return 32109;
		
		case 298:
			return 32110;
		
		case 299:
			return 32111;
		
		case 300:
			return 32112;
		
		case 301:
			return 32113;
		
		case 302:
			return 32114;
		
		case 303:
			return 32115;
		
		case 304:
			return 32116;
		
		case 305:
			return 32117;
		
		case 306:
			return 32118;
		
		case 307:
			return 32119;
		
		case 308:
			return 32120;
		
		case 309:
			return 32121;
		
		case 310:
			return 32122;
		
		case 311:
			return 32123;
		
		case 312:
			return 32124;
		
		default:
	}
	switch (iParam0)
	{
		case 313:
			return 32125;
		
		case 314:
			return 32126;
		
		case 315:
			return 32127;
		
		case 316:
			return 32128;
		
		case 317:
			return 32129;
		
		case 318:
			return 32130;
		
		case 319:
			return 32131;
		
		case 320:
			return 32132;
		
		case 321:
			return 32133;
		
		case 322:
			return 32134;
		
		case 323:
			return 32135;
		
		case 324:
			return 32136;
		
		case 325:
			return 32137;
		
		case 326:
			return 32138;
		
		case 327:
			return 32139;
		
		case 328:
			return 32140;
		
		case 329:
			return 32141;
		
		case 330:
			return 32142;
		
		case 331:
			return 32143;
		
		case 332:
			return 32144;
		
		case 333:
			return 32145;
		
		case 334:
			return 32146;
		
		case 335:
			return 32147;
		
		case 336:
			return 32148;
		
		case 337:
			return 32149;
		
		case 338:
			return 32150;
		
		case 339:
			return 32151;
		
		case 340:
			return 32152;
		
		case 341:
			return 32153;
		
		case 342:
			return 32154;
		
		case 343:
			return 32155;
		
		case 344:
			return 32156;
		
		case 345:
			return 32157;
		
		case 346:
			return 32158;
		
		case 347:
			return 32159;
		
		case 348:
			return 32160;
		
		case 349:
			return 32161;
		
		case 350:
			return 32162;
		
		case 351:
			return 32163;
		
		case 352:
			return 32164;
		
		case 353:
			return 32165;
		
		case 354:
			return 32166;
		
		case 355:
			return 32167;
		
		case 356:
			return 32168;
		
		case 357:
			return 32169;
		
		case 358:
			return 32170;
		
		case 359:
			return 32171;
		
		case 360:
			return 32172;
		
		case 361:
			return 32173;
		
		case 362:
			return 32174;
		
		case 363:
			return 32175;
		
		case 364:
			return 32176;
		
		case 365:
			return 32177;
		
		case 366:
			return 32178;
		
		case 367:
			return 32179;
		
		case 368:
			return 32180;
		
		case 369:
			return 32181;
		
		case 370:
			return 32182;
		
		case 371:
			return 32183;
		
		case 372:
			return 32184;
		
		case 373:
			return 32185;
		
		case 374:
			return 32186;
		
		case 375:
			return 32187;
		
		case 376:
			return 32188;
		
		case 377:
			return 32189;
		
		case 378:
			return 32190;
		
		case 379:
			return 32191;
		
		case 380:
			return 32192;
		
		case 381:
			return 32193;
		
		case 382:
			return 32194;
		
		case 383:
			return 32195;
		
		case 384:
			return 32196;
		
		case 385:
			return 32197;
		
		case 386:
			return 32198;
		
		case 387:
			return 32199;
		
		case 388:
			return 32200;
		
		case 389:
			return 32201;
		
		case 390:
			return 32202;
		
		case 391:
			return 32203;
		
		case 392:
			return 32204;
		
		case 393:
			return 32205;
		
		case 394:
			return 32206;
		
		case 395:
			return 32207;
		
		case 396:
			return 32208;
		
		case 397:
			return 32209;
		
		case 398:
			return 32210;
		
		case 399:
			return 32211;
		
		case 400:
			return 32212;
		
		case 401:
			return 32213;
		
		case 402:
			return 32214;
		
		case 403:
			return 32215;
		
		case 404:
			return 32216;
		
		case 405:
			return 32217;
		
		case 406:
			return 32218;
		
		case 407:
			return 32219;
		
		case 408:
			return 32220;
		
		case 409:
			return 32221;
		
		case 410:
			return 32222;
		
		case 411:
			return 32223;
		
		case 412:
			return 32224;
		
		case 413:
			return 32224;
		
		default:
	}
	return 513;
}

int func_597(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return Global_262145.f_31126;
		
		case 18:
			return Global_262145.f_31127;
		
		case 30:
			return Global_262145.f_31128;
		
		case 36:
			return Global_262145.f_31129;
		
		default:
	}
	return 0;
}

bool func_598(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 414);
}

void func_599(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	switch (iParam2)
	{
		case 1:
			*uParam0 = 1;
			break;
		
		case 2:
			*uParam0 = 2;
			break;
		
		case 3:
			*uParam0 = 3;
			break;
		
		case 4:
			*uParam0 = 4;
			break;
		
		case 5:
			*uParam0 = 5;
			*uParam1 = 6;
			break;
		
		case 6:
			*uParam0 = 7;
			break;
		
		case 7:
			*uParam0 = 8;
			break;
		
		case 8:
			*uParam0 = 9;
			break;
		
		case 9:
			*uParam0 = 10;
			break;
		
		case 10:
			*uParam0 = 11;
			*uParam1 = 12;
			break;
		
		case 11:
			*uParam0 = 13;
			break;
		
		case 12:
			*uParam0 = 14;
			break;
		
		case 13:
			*uParam0 = 15;
			break;
		
		case 14:
			*uParam0 = 16;
			break;
		
		case 15:
			*uParam0 = 17;
			*uParam1 = 18;
			break;
		
		case 16:
			*uParam0 = 19;
			break;
		
		case 17:
			*uParam0 = 20;
			break;
		
		case 18:
			*uParam0 = 21;
			break;
		
		case 19:
			*uParam0 = 22;
			break;
		
		case 20:
			*uParam0 = 23;
			*uParam1 = 24;
			break;
		
		case 21:
			*uParam0 = 25;
			break;
		
		case 22:
			*uParam0 = 26;
			break;
		
		case 23:
			*uParam0 = 27;
			break;
		
		case 24:
			*uParam0 = 28;
			break;
		
		case 25:
			*uParam0 = 29;
			*uParam1 = 30;
			break;
		
		case 26:
			*uParam0 = 31;
			break;
		
		case 27:
			*uParam0 = 32;
			break;
		
		case 28:
			*uParam0 = 33;
			break;
		
		case 29:
			*uParam0 = 34;
			break;
		
		case 30:
			*uParam0 = 35;
			*uParam1 = 36;
			break;
		
		case 31:
			*uParam0 = 37;
			break;
		
		case 32:
			*uParam0 = 38;
			break;
		
		case 33:
			*uParam0 = 39;
			break;
		
		case 34:
			*uParam0 = 40;
			break;
		
		case 35:
			*uParam0 = 41;
			break;
		
		case 36:
			*uParam0 = 42;
			break;
		
		case 37:
			*uParam0 = 43;
			break;
		
		case 38:
			*uParam0 = 44;
			break;
		
		case 39:
			*uParam0 = 45;
			break;
		
		case 40:
			*uParam0 = 46;
			break;
		
		case 41:
			*uParam0 = 47;
			break;
		
		case 42:
			*uParam0 = 48;
			break;
		
		case 43:
			*uParam0 = 49;
			break;
		
		case 44:
			*uParam0 = 50;
			break;
		
		case 45:
			*uParam0 = 51;
			break;
		
		case 46:
			*uParam0 = 52;
			break;
		
		case 47:
			*uParam0 = 53;
			break;
		
		case 48:
			*uParam0 = 54;
			break;
		
		case 49:
			*uParam0 = 55;
			break;
		
		case 50:
			*uParam0 = 56;
			*uParam1 = 57;
			break;
		
		case 51:
			*uParam0 = 58;
			break;
		
		case 52:
			*uParam0 = 59;
			break;
		
		case 53:
			*uParam0 = 60;
			break;
		
		case 54:
			*uParam0 = 61;
			break;
		
		case 55:
			*uParam0 = 62;
			*uParam1 = 63;
			break;
		
		case 56:
			*uParam0 = 64;
			break;
		
		case 57:
			*uParam0 = 65;
			break;
		
		case 58:
			*uParam0 = 66;
			break;
		
		case 59:
			*uParam0 = 67;
			break;
		
		case 60:
			*uParam0 = 68;
			*uParam1 = 69;
			break;
		
		case 61:
			*uParam0 = 70;
			break;
		
		case 62:
			*uParam0 = 71;
			break;
		
		case 63:
			*uParam0 = 72;
			break;
		
		case 64:
			*uParam0 = 73;
			break;
		
		case 65:
			*uParam0 = 74;
			*uParam1 = 75;
			break;
		
		case 66:
			*uParam0 = 76;
			break;
		
		case 67:
			*uParam0 = 77;
			break;
		
		case 68:
			*uParam0 = 78;
			break;
		
		case 69:
			*uParam0 = 79;
			break;
		
		case 70:
			*uParam0 = 80;
			*uParam1 = 81;
			break;
		
		case 71:
			*uParam0 = 82;
			break;
		
		case 72:
			*uParam0 = 83;
			break;
		
		case 73:
			*uParam0 = 84;
			break;
		
		case 74:
			*uParam0 = 85;
			break;
		
		case 75:
			*uParam0 = 86;
			*uParam1 = 87;
			break;
		
		case 76:
			*uParam0 = 88;
			break;
		
		case 77:
			*uParam0 = 89;
			break;
		
		case 78:
			*uParam0 = 90;
			break;
		
		case joaat("mpsv_lp0_31"):
			*uParam0 = 91;
			break;
		
		case 80:
			*uParam0 = 92;
			break;
		
		case 81:
			*uParam0 = 93;
			break;
		
		case 82:
			*uParam0 = 94;
			break;
		
		case 83:
			*uParam0 = 95;
			break;
		
		case 84:
			*uParam0 = 96;
			break;
		
		case 85:
			*uParam0 = 97;
			break;
		
		case 86:
			*uParam0 = 98;
			break;
		
		case 87:
			*uParam0 = 99;
			break;
		
		case 88:
			*uParam0 = 100;
			break;
		
		case 89:
			*uParam0 = 101;
			break;
		
		case 90:
			*uParam0 = 102;
			break;
		
		case 91:
			*uParam0 = 103;
			break;
		
		case 92:
			*uParam0 = 104;
			break;
		
		case 93:
			*uParam0 = 105;
			break;
		
		case 94:
			*uParam0 = 106;
			break;
		
		case 95:
			*uParam0 = 107;
			break;
		
		case 96:
			*uParam0 = 108;
			break;
		
		case 97:
			*uParam0 = 109;
			break;
		
		case 98:
			*uParam0 = 110;
			break;
		
		case 99:
			*uParam0 = 111;
			break;
		
		case 100:
			*uParam0 = 112;
			break;
	}
	switch (iParam2)
	{
		case 101:
			*uParam0 = 113;
			break;
		
		case 102:
			*uParam0 = 114;
			break;
		
		case 103:
			*uParam0 = 115;
			break;
		
		case 104:
			*uParam0 = 116;
			break;
		
		case 105:
			*uParam0 = 117;
			break;
		
		case 106:
			*uParam0 = 118;
			break;
		
		case 107:
			*uParam0 = 119;
			break;
		
		case 108:
			*uParam0 = 120;
			break;
		
		case 109:
			*uParam0 = 121;
			break;
		
		case 110:
			*uParam0 = 122;
			break;
		
		case 111:
			*uParam0 = 123;
			break;
		
		case 112:
			*uParam0 = 124;
			break;
		
		case 113:
			*uParam0 = 125;
			break;
		
		case 114:
			*uParam0 = 126;
			break;
		
		case 115:
			*uParam0 = 127;
			break;
		
		case 116:
			*uParam0 = 128;
			break;
		
		case 117:
			*uParam0 = 129;
			break;
		
		case 118:
			*uParam0 = 130;
			break;
		
		case 119:
			*uParam0 = 131;
			break;
		
		case 120:
			*uParam0 = 132;
			break;
		
		case 121:
			*uParam0 = 133;
			break;
		
		case 122:
			*uParam0 = 134;
			break;
		
		case 123:
			*uParam0 = 135;
			break;
		
		case 124:
			*uParam0 = 136;
			break;
		
		case 125:
			*uParam0 = 137;
			break;
		
		case 126:
			*uParam0 = 138;
			break;
		
		case 127:
			*uParam0 = 139;
			break;
		
		case 128:
			*uParam0 = 140;
			break;
		
		case 129:
			*uParam0 = 141;
			break;
		
		case 130:
			*uParam0 = 142;
			break;
		
		case 131:
			*uParam0 = 143;
			break;
		
		case 132:
			*uParam0 = 144;
			break;
		
		case 133:
			*uParam0 = 145;
			break;
		
		case 134:
			*uParam0 = 146;
			break;
		
		case 135:
			*uParam0 = 147;
			break;
		
		case 136:
			*uParam0 = 148;
			break;
		
		case 137:
			*uParam0 = 149;
			break;
		
		case 138:
			*uParam0 = 150;
			break;
		
		case 139:
			*uParam0 = 151;
			break;
		
		case 140:
			*uParam0 = 152;
			break;
		
		case 141:
			*uParam0 = 153;
			break;
		
		case 142:
			*uParam0 = 154;
			break;
		
		case 143:
			*uParam0 = 155;
			break;
		
		case 144:
			*uParam0 = 156;
			break;
		
		case 145:
			*uParam0 = 157;
			break;
		
		case 146:
			*uParam0 = 158;
			break;
		
		case 147:
			*uParam0 = 159;
			break;
		
		case 148:
			*uParam0 = 160;
			break;
		
		case 149:
			*uParam0 = 161;
			break;
		
		case 150:
			*uParam0 = 162;
			break;
		
		case 151:
			*uParam0 = 163;
			break;
		
		case 152:
			*uParam0 = 164;
			break;
		
		case 153:
			*uParam0 = 165;
			break;
		
		case 154:
			*uParam0 = 166;
			break;
		
		case 155:
			*uParam0 = 167;
			break;
		
		case 156:
			*uParam0 = 168;
			break;
		
		case 157:
			*uParam0 = 169;
			break;
		
		case 158:
			*uParam0 = 170;
			break;
		
		case 159:
			*uParam0 = 171;
			break;
		
		case 160:
			*uParam0 = 172;
			break;
		
		case 161:
			*uParam0 = 173;
			break;
		
		case 162:
			*uParam0 = 174;
			break;
		
		case 163:
			*uParam0 = 175;
			break;
		
		case 164:
			*uParam0 = 176;
			break;
		
		case 165:
			*uParam0 = 177;
			break;
		
		case 166:
			*uParam0 = 178;
			break;
		
		case 167:
			*uParam0 = 179;
			break;
		
		case 168:
			*uParam0 = 180;
			break;
		
		case 169:
			*uParam0 = 181;
			break;
		
		case 170:
			*uParam0 = 182;
			break;
		
		case 171:
			*uParam0 = 183;
			break;
		
		case 172:
			*uParam0 = 184;
			break;
		
		case 173:
			*uParam0 = 185;
			break;
		
		case 174:
			*uParam0 = 186;
			break;
		
		case 175:
			*uParam0 = 187;
			break;
		
		case 176:
			*uParam0 = 188;
			break;
		
		case 177:
			*uParam0 = 189;
			break;
		
		case 178:
			*uParam0 = 190;
			break;
		
		case 179:
			*uParam0 = 191;
			break;
		
		case 180:
			*uParam0 = 192;
			break;
		
		case 181:
			*uParam0 = 193;
			break;
		
		case 182:
			*uParam0 = 194;
			break;
		
		case 183:
			*uParam0 = 195;
			break;
		
		case 184:
			*uParam0 = 196;
			break;
		
		case 185:
			*uParam0 = 197;
			break;
		
		case 186:
			*uParam0 = 198;
			break;
		
		case 187:
			*uParam0 = 199;
			break;
		
		case 188:
			*uParam0 = 200;
			break;
		
		case 189:
			*uParam0 = 201;
			break;
		
		case 190:
			*uParam0 = 202;
			break;
		
		case 191:
			*uParam0 = 203;
			break;
		
		case 192:
			*uParam0 = 204;
			break;
		
		case 193:
			*uParam0 = 205;
			break;
		
		case 194:
			*uParam0 = 206;
			break;
		
		case 195:
			*uParam0 = 207;
			break;
		
		case 196:
			*uParam0 = 208;
			break;
		
		case 197:
			*uParam0 = 209;
			break;
		
		case 198:
			*uParam0 = 210;
			break;
		
		case 199:
			*uParam0 = 211;
			break;
		
		case 200:
			*uParam0 = 212;
			break;
	}
	switch (iParam2)
	{
		case 201:
			*uParam0 = 213;
			break;
		
		case 202:
			*uParam0 = 214;
			break;
		
		case 203:
			*uParam0 = 215;
			break;
		
		case 204:
			*uParam0 = 216;
			break;
		
		case 205:
			*uParam0 = 217;
			break;
		
		case 206:
			*uParam0 = 218;
			break;
		
		case 207:
			*uParam0 = 219;
			break;
		
		case 208:
			*uParam0 = 220;
			break;
		
		case 209:
			*uParam0 = 221;
			break;
		
		case 210:
			*uParam0 = 222;
			break;
		
		case 211:
			*uParam0 = 223;
			break;
		
		case 212:
			*uParam0 = 224;
			break;
		
		case 213:
			*uParam0 = 225;
			break;
		
		case 214:
			*uParam0 = 226;
			break;
		
		case 215:
			*uParam0 = 227;
			break;
		
		case 216:
			*uParam0 = 228;
			break;
		
		case 217:
			*uParam0 = 229;
			break;
		
		case 218:
			*uParam0 = 230;
			break;
		
		case 219:
			*uParam0 = 231;
			break;
		
		case 220:
			*uParam0 = 232;
			break;
		
		case 221:
			*uParam0 = 233;
			break;
		
		case 222:
			*uParam0 = 234;
			break;
		
		case 223:
			*uParam0 = 235;
			break;
		
		case 224:
			*uParam0 = 236;
			break;
		
		case 225:
			*uParam0 = 237;
			break;
		
		case 226:
			*uParam0 = 238;
			break;
		
		case 227:
			*uParam0 = 239;
			break;
		
		case 228:
			*uParam0 = 240;
			break;
		
		case 229:
			*uParam0 = 241;
			break;
		
		case 230:
			*uParam0 = 242;
			break;
		
		case 231:
			*uParam0 = 243;
			break;
		
		case 232:
			*uParam0 = 244;
			break;
		
		case 233:
			*uParam0 = 245;
			break;
		
		case 234:
			*uParam0 = 246;
			break;
		
		case 235:
			*uParam0 = 247;
			break;
		
		case 236:
			*uParam0 = 248;
			break;
		
		case 237:
			*uParam0 = 249;
			break;
		
		case 238:
			*uParam0 = 250;
			break;
		
		case 239:
			*uParam0 = 251;
			break;
		
		case 240:
			*uParam0 = 252;
			break;
		
		case 241:
			*uParam0 = 253;
			break;
		
		case 242:
			*uParam0 = 254;
			break;
		
		case 243:
			*uParam0 = 255;
			break;
		
		case 244:
			*uParam0 = 256;
			break;
		
		case 245:
			*uParam0 = 257;
			break;
		
		case 246:
			*uParam0 = 258;
			break;
		
		case 247:
			*uParam0 = 259;
			break;
		
		case 248:
			*uParam0 = 260;
			break;
		
		case 249:
			*uParam0 = 261;
			break;
		
		case 250:
			*uParam0 = 262;
			break;
		
		case 255:
			*uParam0 = 263;
			break;
		
		case 260:
			*uParam0 = 264;
			break;
		
		case 265:
			*uParam0 = 265;
			break;
		
		case 270:
			*uParam0 = 266;
			break;
		
		case 275:
			*uParam0 = 267;
			break;
		
		case 280:
			*uParam0 = 268;
			break;
		
		case 285:
			*uParam0 = 269;
			break;
		
		case 290:
			*uParam0 = 270;
			break;
		
		case 295:
			*uParam0 = 271;
			break;
		
		case 300:
			*uParam0 = 272;
			break;
	}
	switch (iParam2)
	{
		case 305:
			*uParam0 = 273;
			break;
		
		case 310:
			*uParam0 = 274;
			break;
		
		case 315:
			*uParam0 = 275;
			break;
		
		case 320:
			*uParam0 = 276;
			break;
		
		case 325:
			*uParam0 = 277;
			break;
		
		case 330:
			*uParam0 = 278;
			break;
		
		case 335:
			*uParam0 = 279;
			break;
		
		case 340:
			*uParam0 = 280;
			break;
		
		case 345:
			*uParam0 = 281;
			break;
		
		case 350:
			*uParam0 = 282;
			break;
		
		case 355:
			*uParam0 = 283;
			break;
		
		case 360:
			*uParam0 = 284;
			break;
		
		case 365:
			*uParam0 = 285;
			break;
		
		case 370:
			*uParam0 = 286;
			break;
		
		case 375:
			*uParam0 = 287;
			break;
		
		case 380:
			*uParam0 = 288;
			break;
		
		case 385:
			*uParam0 = 289;
			break;
		
		case 390:
			*uParam0 = 290;
			break;
		
		case 395:
			*uParam0 = 291;
			break;
		
		case 400:
			*uParam0 = 292;
			break;
		
		case 405:
			*uParam0 = 293;
			break;
		
		case 410:
			*uParam0 = 294;
			break;
		
		case 415:
			*uParam0 = 295;
			break;
		
		case 420:
			*uParam0 = 296;
			break;
		
		case 425:
			*uParam0 = 297;
			break;
		
		case 430:
			*uParam0 = 298;
			break;
		
		case 435:
			*uParam0 = 299;
			break;
		
		case 440:
			*uParam0 = 300;
			break;
		
		case 445:
			*uParam0 = 301;
			break;
		
		case 450:
			*uParam0 = 302;
			break;
		
		case 455:
			*uParam0 = 303;
			break;
		
		case 460:
			*uParam0 = 304;
			break;
		
		case 465:
			*uParam0 = 305;
			break;
		
		case 470:
			*uParam0 = 306;
			break;
		
		case 475:
			*uParam0 = 307;
			break;
		
		case 480:
			*uParam0 = 308;
			break;
		
		case 485:
			*uParam0 = 309;
			break;
		
		case 490:
			*uParam0 = 310;
			break;
		
		case 495:
			*uParam0 = 311;
			break;
		
		case 500:
			*uParam0 = 312;
			break;
	}
	switch (iParam2)
	{
		case 505:
			*uParam0 = 313;
			break;
		
		case 510:
			*uParam0 = 314;
			break;
		
		case 515:
			*uParam0 = 315;
			break;
		
		case 520:
			*uParam0 = 316;
			break;
		
		case 525:
			*uParam0 = 317;
			break;
		
		case 530:
			*uParam0 = 318;
			break;
		
		case 535:
			*uParam0 = 319;
			break;
		
		case 540:
			*uParam0 = 320;
			break;
		
		case 545:
			*uParam0 = 321;
			break;
		
		case 550:
			*uParam0 = 322;
			break;
		
		case 555:
			*uParam0 = 323;
			break;
		
		case 560:
			*uParam0 = 324;
			break;
		
		case 565:
			*uParam0 = 325;
			break;
		
		case 570:
			*uParam0 = 326;
			break;
		
		case 575:
			*uParam0 = 327;
			break;
		
		case 580:
			*uParam0 = 328;
			break;
		
		case 585:
			*uParam0 = 329;
			break;
		
		case 590:
			*uParam0 = 330;
			break;
		
		case 595:
			*uParam0 = 331;
			break;
		
		case 600:
			*uParam0 = 332;
			break;
		
		case 605:
			*uParam0 = 333;
			break;
		
		case 610:
			*uParam0 = 334;
			break;
		
		case 615:
			*uParam0 = 335;
			break;
		
		case 620:
			*uParam0 = 336;
			break;
		
		case 625:
			*uParam0 = 337;
			break;
		
		case 630:
			*uParam0 = 338;
			break;
		
		case 635:
			*uParam0 = 339;
			break;
		
		case 640:
			*uParam0 = 340;
			break;
		
		case 645:
			*uParam0 = 341;
			break;
		
		case 650:
			*uParam0 = 342;
			break;
		
		case 655:
			*uParam0 = 343;
			break;
		
		case 660:
			*uParam0 = 344;
			break;
		
		case 665:
			*uParam0 = 345;
			break;
		
		case 670:
			*uParam0 = 346;
			break;
		
		case 675:
			*uParam0 = 347;
			break;
		
		case 680:
			*uParam0 = 348;
			break;
		
		case 685:
			*uParam0 = 349;
			break;
		
		case 690:
			*uParam0 = 350;
			break;
		
		case 695:
			*uParam0 = 351;
			break;
		
		case 700:
			*uParam0 = 352;
			break;
		
		case 705:
			*uParam0 = 353;
			break;
		
		case 710:
			*uParam0 = 354;
			break;
		
		case 715:
			*uParam0 = 355;
			break;
		
		case 720:
			*uParam0 = 356;
			break;
		
		case 725:
			*uParam0 = 357;
			break;
		
		case 730:
			*uParam0 = 358;
			break;
		
		case 735:
			*uParam0 = 359;
			break;
		
		case 740:
			*uParam0 = 360;
			break;
		
		case 745:
			*uParam0 = 361;
			break;
		
		case 750:
			*uParam0 = 362;
			break;
		
		case 755:
			*uParam0 = 363;
			break;
		
		case 760:
			*uParam0 = 364;
			break;
		
		case 765:
			*uParam0 = 365;
			break;
		
		case 770:
			*uParam0 = 366;
			break;
		
		case 775:
			*uParam0 = 367;
			break;
		
		case 780:
			*uParam0 = 368;
			break;
		
		case 785:
			*uParam0 = 369;
			break;
		
		case 790:
			*uParam0 = 370;
			break;
		
		case 795:
			*uParam0 = 371;
			break;
		
		case 800:
			*uParam0 = 372;
			break;
		
		case 805:
			*uParam0 = 373;
			break;
		
		case 810:
			*uParam0 = 374;
			break;
		
		case 815:
			*uParam0 = 375;
			break;
		
		case 820:
			*uParam0 = 376;
			break;
		
		case 825:
			*uParam0 = 377;
			break;
		
		case 830:
			*uParam0 = 378;
			break;
		
		case 835:
			*uParam0 = 379;
			break;
		
		case 840:
			*uParam0 = 380;
			break;
		
		case 845:
			*uParam0 = 381;
			break;
		
		case 850:
			*uParam0 = 382;
			break;
		
		case 855:
			*uParam0 = 383;
			break;
		
		case 860:
			*uParam0 = 384;
			break;
		
		case 865:
			*uParam0 = 385;
			break;
		
		case 870:
			*uParam0 = 386;
			break;
		
		case 875:
			*uParam0 = 387;
			break;
		
		case 880:
			*uParam0 = 388;
			break;
		
		case 885:
			*uParam0 = 389;
			break;
		
		case 890:
			*uParam0 = 390;
			break;
		
		case 895:
			*uParam0 = 391;
			break;
		
		case 900:
			*uParam0 = 392;
			break;
		
		case 905:
			*uParam0 = 393;
			break;
		
		case 910:
			*uParam0 = 394;
			break;
		
		case 915:
			*uParam0 = 395;
			break;
		
		case 920:
			*uParam0 = 396;
			break;
		
		case 925:
			*uParam0 = 397;
			break;
		
		case 930:
			*uParam0 = 398;
			break;
		
		case 935:
			*uParam0 = 399;
			break;
		
		case 940:
			*uParam0 = 400;
			break;
		
		case 945:
			*uParam0 = 401;
			break;
		
		case 950:
			*uParam0 = 402;
			break;
		
		case 955:
			*uParam0 = 403;
			break;
		
		case 960:
			*uParam0 = 404;
			break;
		
		case 965:
			*uParam0 = 405;
			break;
		
		case 970:
			*uParam0 = 406;
			break;
		
		case 975:
			*uParam0 = 407;
			break;
		
		case 980:
			*uParam0 = 408;
			break;
		
		case 985:
			*uParam0 = 409;
			break;
		
		case 990:
			*uParam0 = 410;
			break;
		
		case 995:
			*uParam0 = 411;
			break;
		
		case 1000:
			*uParam0 = 412;
			*uParam1 = 413;
			break;
	}
}

void func_600(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2594365[iParam0 /*3*/][func_173(iParam2)];
	unk_0xAC4FD27671081628(iVar0, iParam1, 1);
}

void func_601(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<9> Var0;
	
	Var0 = func_608(func_52());
	Var0.f_1 = func_607(func_52());
	Var0.f_2 = func_603(iParam3);
	Var0.f_3 = func_602(iParam3);
	Var0.f_4 = iParam0;
	Var0.f_5 = uParam4;
	Var0.f_7 = iParam1;
	Var0.f_8 = iParam2;
	switch (iParam3)
	{
		case 24:
			Var0.f_6 = 7;
			break;
		
		case 25:
			Var0.f_6 = 14;
			break;
		
		case 26:
			Var0.f_6 = 30;
			break;
		
		default:
			Var0.f_6 = -1;
			break;
	}
	unk_0xFF14D6FEEC507BBE(&Var0);
}

int func_602(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -1266014249;
			break;
		
		case 1:
			iVar0 = 2091706301;
			break;
		
		case 2:
			iVar0 = -2039125155;
			break;
		
		case 3:
			iVar0 = 1291931399;
			break;
		
		case 4:
			iVar0 = 133342785;
			break;
		
		case 5:
			iVar0 = 2095721718;
			break;
		
		case 6:
			iVar0 = 754095229;
			break;
		
		case 7:
			iVar0 = -1833207774;
			break;
		
		case 8:
			iVar0 = -1266395441;
			break;
		
		case 9:
			iVar0 = 822911410;
			break;
		
		case 10:
			iVar0 = 1933323559;
			break;
		
		case 11:
			iVar0 = -1572440453;
			break;
		
		case 12:
			iVar0 = 144494192;
			break;
		
		case 13:
			iVar0 = 285462835;
			break;
		
		case 14:
			iVar0 = 1575988716;
			break;
		
		case 15:
			iVar0 = 1333235958;
			break;
		
		case 16:
			iVar0 = -2007722693;
			break;
		
		case 17:
			iVar0 = -657463068;
			break;
		
		case 18:
			iVar0 = -2033414814;
			break;
		
		case 19:
			iVar0 = 663759342;
			break;
		
		case 20:
			iVar0 = 452601691;
			break;
		
		case 21:
			iVar0 = -1908829608;
			break;
		
		case 22:
			iVar0 = -663198868;
			break;
		
		case 23:
			iVar0 = 846436668;
			break;
		
		case 24:
			iVar0 = -1348286410;
			break;
		
		case 25:
			iVar0 = 865206748;
			break;
		
		case 26:
			iVar0 = 353183058;
			break;
		
		case 27:
			iVar0 = 2126913071;
			break;
		
		case 28:
			iVar0 = -1887187680;
			break;
		
		case 29:
			iVar0 = -1625256047;
			break;
		
		case 30:
			iVar0 = 2016614022;
			break;
		
		case 31:
			iVar0 = 304806486;
			break;
	}
	return iVar0;
}

int func_603(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
		case 10:
		case 11:
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
			iVar0 = func_604();
			break;
	}
	return iVar0;
}

int func_604()
{
	if (func_606() == -1 || func_605() == -1)
	{
		return -1;
	}
	return (func_606() + func_605());
}

int func_605()
{
	if (Global_1681722.f_3 != 0)
	{
		return Global_1681722.f_3;
	}
	return -1;
}

int func_606()
{
	if (Global_1681722.f_2 != 0)
	{
		return Global_1681722.f_2;
	}
	return -1;
}

int func_607(int iParam0)
{
	if (iParam0 == func_51())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[1];
}

int func_608(int iParam0)
{
	if (iParam0 == func_51())
	{
		return -1;
	}
	return Global_1630816[iParam0 /*597*/].f_11.f_8[0];
}

int func_609(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	
	iVar0 = func_611(199);
	if (iParam0 < 100)
	{
		return 1;
	}
	else if (iParam0 > iVar0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam0) - SYSTEM::TO_FLOAT(iVar0));
		iVar2 = SYSTEM::FLOOR((fVar1 / SYSTEM::TO_FLOAT(Global_262145.f_30562)));
		return (199 + iVar2);
	}
	fVar3 = (SYSTEM::TO_FLOAT(Global_262145.f_30561) / 2f);
	fVar4 = (-(fVar3 * 3f) + fVar3);
	fVar5 = fVar3;
	fVar6 = ((-(fVar3 * 3f) + fVar4) + 100f);
	fVar7 = ((-3f * fVar4) - 100f);
	fVar7 = (IntToFloat(iParam0) - fVar7);
	return SYSTEM::FLOOR(func_610(-fVar5, -fVar6, fVar7, 1));
}

float func_610(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	if (bParam3)
	{
		return ((-fParam1 - SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
	}
	return ((-fParam1 + SYSTEM::SQRT(((fParam1 * fParam1) - ((4f * fParam0) * fParam2)))) / (2f * fParam0));
}

int func_611(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = (SYSTEM::TO_FLOAT(Global_262145.f_30561) / 2f);
	return SYSTEM::ROUND((((fVar0 * 100f) - 100f) + ((fVar0 - 3f) * ((fVar1 * (fVar0 - 3f)) + fVar1))));
}

int func_612(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_452.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == unk_0x1146A9AE09CE2B14())
		{
			return func_172(9630, -1, 0) != 0;
		}
	}
	return 0;
}

int func_613()
{
	return (func_614(1001) - 1);
}

int func_614(int iParam0)
{
	if (iParam0 <= 1)
	{
		return 0;
	}
	else if (iParam0 >= 200)
	{
		return (((iParam0 - 199) * Global_262145.f_30562) + func_611(199));
	}
	return func_611(iParam0);
}

int func_615()
{
	return func_172(9833, -1, 0);
}

int func_616(int iParam0, int iParam1, int iParam2, int iParam3)
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
	int iVar26;
	
	if (iParam2 == -1)
	{
		iParam2 = func_74();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar25, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar26 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam2, "_TUNERPSTAT_BOOL");
		iVar1 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
		iVar0 = unk_0x10788D224B2A2D63(iVar26, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_617(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar1 = func_619(iParam0, iParam1);
	uVar2 = func_618(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xE51D1C588E8D869E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_618(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x5002208C5710DBEB((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x5002208C5710DBEB((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x5002208C5710DBEB((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x5002208C5710DBEB((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x5002208C5710DBEB((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x5002208C5710DBEB((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x5002208C5710DBEB((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x5002208C5710DBEB((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x5002208C5710DBEB((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x5002208C5710DBEB((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x5002208C5710DBEB((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x5002208C5710DBEB((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x5002208C5710DBEB((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x5002208C5710DBEB((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x5002208C5710DBEB((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x5002208C5710DBEB((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x5002208C5710DBEB((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x5002208C5710DBEB((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x5002208C5710DBEB((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x5002208C5710DBEB((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x5002208C5710DBEB((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x5002208C5710DBEB((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x5002208C5710DBEB((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x5002208C5710DBEB((iParam0 - 30515)) * 64);
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = ((iParam0 - 31707) - unk_0x5002208C5710DBEB((iParam0 - 31707)) * 64);
	}
	return iVar0;
}

int func_619(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_74();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0xACDC64E5D157EC08((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x20CEBFA2EEC4CA42((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	else if (iParam0 >= 31707 && iParam0 < 32283)
	{
		iVar0 = unk_0x783924BA309D8E09((iParam0 - 31707), 0, 1, iParam1, "_TUNERPSTAT_BOOL");
	}
	return iVar0;
}

int func_620(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_30999) * Global_262145.f_31098));
			break;
		
		case 1:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31010) * Global_262145.f_31099));
			break;
		
		case 2:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31012) * Global_262145.f_31100));
			break;
		
		case 3:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31031) * Global_262145.f_31101));
			break;
		
		case 4:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31033) * Global_262145.f_31102));
			break;
		
		case 5:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31029) * Global_262145.f_31103));
			break;
		
		case 6:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31014) * Global_262145.f_31104));
			break;
		
		case 7:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31025) * Global_262145.f_31105));
			break;
		
		case 8:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31038) * Global_262145.f_31106));
			break;
		
		case 9:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31037) * Global_262145.f_31107));
			break;
		
		case 10:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31000) * Global_262145.f_31108));
			break;
		
		case 11:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31011) * Global_262145.f_31109));
			break;
		
		case 12:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31013) * Global_262145.f_31110));
			break;
		
		case 13:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31032) * Global_262145.f_31111));
			break;
		
		case 14:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31035) * Global_262145.f_31112));
			break;
		
		case 15:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31034) * Global_262145.f_31113));
			break;
		
		case 16:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31030) * Global_262145.f_31114));
			break;
		
		case 17:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31015) * Global_262145.f_31115));
			break;
		
		case 18:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31026) * Global_262145.f_31116));
			break;
		
		case 19:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31001) * Global_262145.f_31117));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31005) * Global_262145.f_31117));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31008) * Global_262145.f_31117));
					}
					break;
				
				case 2:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31002) * Global_262145.f_31117));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31006) * Global_262145.f_31117));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31009) * Global_262145.f_31117));
					}
					break;
				
				case 3:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31003) * Global_262145.f_31117));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31007) * Global_262145.f_31117));
					}
					break;
				
				case 4:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31004) * Global_262145.f_31117));
					}
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 1:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31044) * Global_262145.f_31118));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31052) * Global_262145.f_31118));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31056) * Global_262145.f_31118));
					}
					break;
				
				case 2:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31045) * Global_262145.f_31118));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31053) * Global_262145.f_31118));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31057) * Global_262145.f_31118));
					}
					break;
				
				case 3:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31046) * Global_262145.f_31118));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31054) * Global_262145.f_31118));
					}
					break;
				
				case 4:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31047) * Global_262145.f_31118));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31055) * Global_262145.f_31118));
					}
					break;
				
				case 5:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31048) * Global_262145.f_31118));
					}
					break;
				
				case 6:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31049) * Global_262145.f_31118));
					}
					break;
				
				case 7:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31050) * Global_262145.f_31118));
					}
					break;
				
				case 8:
					if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31051) * Global_262145.f_31118));
					}
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 1:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31058) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31074) * Global_262145.f_31119));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31082) * Global_262145.f_31119));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31086) * Global_262145.f_31119));
					}
					break;
				
				case 2:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31059) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31075) * Global_262145.f_31119));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31083) * Global_262145.f_31119));
					}
					else if (iParam2 >= 1 && iParam2 <= 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31087) * Global_262145.f_31119));
					}
					break;
				
				case 3:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31060) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31076) * Global_262145.f_31119));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31084) * Global_262145.f_31119));
					}
					break;
				
				case 4:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31061) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31077) * Global_262145.f_31119));
					}
					else if (iParam2 >= 3 && iParam2 <= 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31085) * Global_262145.f_31119));
					}
					break;
				
				case 5:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31062) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31078) * Global_262145.f_31119));
					}
					break;
				
				case 6:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31063) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31079) * Global_262145.f_31119));
					}
					break;
				
				case 7:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31064) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31080) * Global_262145.f_31119));
					}
					break;
				
				case 8:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31065) * Global_262145.f_31119));
					}
					else if (iParam2 >= 5 && iParam2 <= 8)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31081) * Global_262145.f_31119));
					}
					break;
				
				case 9:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31066) * Global_262145.f_31119));
					}
					break;
				
				case 10:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31067) * Global_262145.f_31119));
					}
					break;
				
				case 11:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31068) * Global_262145.f_31119));
					}
					break;
				
				case 12:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31069) * Global_262145.f_31119));
					}
					break;
				
				case 13:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31070) * Global_262145.f_31119));
					}
					break;
				
				case 14:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31071) * Global_262145.f_31119));
					}
					break;
				
				case 15:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31072) * Global_262145.f_31119));
					}
					break;
				
				case 16:
					if (iParam2 >= 9 && iParam2 <= 16)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31073) * Global_262145.f_31119));
					}
					break;
			}
			break;
		
		case 22:
			switch (iParam1)
			{
				case 1:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31016) * Global_262145.f_31120));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31020) * Global_262145.f_31120));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31023) * Global_262145.f_31120));
					}
					break;
				
				case 2:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31017) * Global_262145.f_31120));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31021) * Global_262145.f_31120));
					}
					else if (iParam2 == 2)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31024) * Global_262145.f_31120));
					}
					break;
				
				case 3:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31018) * Global_262145.f_31120));
					}
					else if (iParam2 == 3)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31022) * Global_262145.f_31120));
					}
					break;
				
				case 4:
					if (iParam2 == 4)
					{
						iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31019) * Global_262145.f_31120));
					}
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 1:
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31027) * Global_262145.f_31121));
					break;
				
				case 2:
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31028) * Global_262145.f_31121));
					break;
			}
			break;
		
		case 24:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31040) * Global_262145.f_31122));
			break;
		
		case 25:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31041) * Global_262145.f_31122));
			break;
		
		case 26:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31042) * Global_262145.f_31122));
			break;
		
		case 27:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31039) * Global_262145.f_31123));
			break;
		
		case 28:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31036) * Global_262145.f_31124));
			break;
		
		case 29:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31134) * Global_262145.f_31136));
			break;
		
		case 30:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31135) * Global_262145.f_31137));
			break;
		
		case 31:
			iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_31043) * Global_262145.f_31125));
			break;
	}
	return iVar0;
}

bool func_621(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 32);
}

void func_622(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8742)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_589() /*5557*/].f_675.f_4237[iVar0 /*3*/] == iParam0)
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

bool func_623()
{
	return Local_1898.f_118.f_17 == iLocal_1841;
}

bool func_624()
{
	return func_512() >= 1;
}

void func_625()
{
	func_506(0);
	if (func_509())
	{
		func_507(func_168(0, 1));
	}
}

void func_626()
{
	func_711();
	func_700();
	if (func_699(iLocal_1841, 1))
	{
		if (unk_0xAB0F784335D14AC3() == 2 || func_697() >= 2)
		{
			func_507(func_168(0, 1));
			func_696(1);
		}
	}
	switch (func_697())
	{
		case 0:
			func_694(&(Local_1898.f_118.f_9), 10000);
			break;
		
		case 1:
			func_683();
			func_682();
			func_654();
			break;
		
		case 2:
			func_683();
			func_682();
			break;
	}
	func_648();
	func_627();
}

void func_627()
{
	if (!func_647())
	{
		return;
	}
	if (func_646())
	{
		func_628(func_637());
	}
}

void func_628(int iParam0)
{
	int iVar0;
	
	func_631(iParam0);
	iVar0 = func_630(iParam0);
	if (iVar0 == 1)
	{
		func_556("TSA_TIC_INVSNTs", iVar0, 0);
	}
	else
	{
		func_556("TSA_TIC_INVSNT", iVar0, 0);
	}
	func_629(&(Local_223.f_47));
}

void func_629(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_630(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (unk_0x234B68AC2E35ED5A(iParam0, iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_631(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	iVar0 = -1;
	iVar1 = -1;
	if (func_193(unk_0x1146A9AE09CE2B14(), 0))
	{
		iVar0 = func_194(unk_0x1146A9AE09CE2B14());
		iVar1 = func_192(unk_0x1146A9AE09CE2B14());
	}
	else
	{
		iVar0 = func_635(unk_0x1146A9AE09CE2B14());
		iVar1 = func_634();
	}
	iVar2 = func_633(iVar0, iVar1);
	if (iVar2 != -1)
	{
		func_632(iParam0, iVar2);
	}
}

void func_632(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	if (iParam0 == 0)
	{
		return;
	}
	Var0.f_2 = -1;
	Var0.x = 912402177;
	Var0.f_1 = unk_0x1146A9AE09CE2B14();
	Var0.f_2 = iParam1;
	unk_0xA5C82A39FF8ED272(1, &Var0, 3, iParam0);
}

int func_633(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 276:
			switch (iParam1)
			{
				case 1:
					return 0;
				
				case 2:
					return 1;
				
				case 3:
					return 2;
				
				default:
			}
			break;
	}
	return -1;
}

int func_634()
{
	return Global_2544210.f_5191.f_342;
}

int func_635(int iParam0)
{
	if (func_636(iParam0, 0))
	{
		return Global_1630816[iParam0 /*597*/].f_11.f_32;
	}
	return -1;
}

int func_636(int iParam0, int iParam1)
{
	if (Global_1630816[iParam0 /*597*/].f_11.f_32 != -1 || (iParam1 && Global_1630816[iParam0 /*597*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

int func_637()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = unk_0xC502CD39B4994F3A(iVar2);
		if ((iVar1 != iLocal_1838 && func_644(iVar1)) && func_638(iVar1))
		{
			unk_0x191DDA30577F440A(&uVar0, iVar2);
		}
		iVar2++;
	}
	return uVar0;
}

int func_638(int iParam0)
{
	if (!func_643(iParam0))
	{
		return 0;
	}
	if (!func_641(iLocal_1838, iParam0, 1))
	{
		return 0;
	}
	if (func_640(iParam0) != 1)
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iParam0), 0))
	{
		if (!func_639(unk_0xD56332194D622ECE(iParam0), unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iParam0), 0), -1))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_639(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0) && !unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		if (unk_0x2C10A11A684CFE96(iParam0, iParam1))
		{
			if (unk_0x27FC1B0077581B37(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_640(int iParam0)
{
	return unk_0xC844146213F10F48(Global_2426865[iParam0 /*449*/].f_319.f_3, 28, 31);
}

int func_641(int iParam0, int iParam1, bool bParam2)
{
	if (func_642(iParam0) && func_642(iParam1))
	{
		if (Global_2426865[iParam0 /*449*/].f_319.f_6 == Global_2426865[iParam1 /*449*/].f_319.f_6)
		{
			if (bParam2)
			{
				return Global_2418033.f_903.f_1[iParam0] == Global_2418033.f_903.f_1[iParam1];
			}
			return 1;
		}
	}
	return 0;
}

int func_642(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
		else if ((Global_1312902 && iParam0 == unk_0x1146A9AE09CE2B14()) && func_11(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_643(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_644(int iParam0)
{
	if (!func_11(iParam0, 1, 1))
	{
		return 0;
	}
	if (func_193(iParam0, 1))
	{
		return 0;
	}
	if (func_645(iParam0))
	{
		return 0;
	}
	if (func_72(iParam0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_645(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_58 != func_51();
}

int func_646()
{
	if (!func_17(&(Local_223.f_47), Global_262145.f_30653, 0))
	{
		return 0;
	}
	return 1;
}

int func_647()
{
	if (func_12() != iLocal_1838)
	{
		return 0;
	}
	switch (func_697())
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

void func_648()
{
	int iVar0;
	struct<21> Var1;
	int iVar57;
	int iVar58;
	
	Var1.f_20 = 20;
	iVar58 = 0;
	while (iVar58 < unk_0x1131A9F5A725F45A(1))
	{
		iVar0 = unk_0x5F0847A02025CAB5(1, iVar58);
		switch (iVar0)
		{
			case 153:
				if (!unk_0x53858F1E03A88AE1(1, iVar58, &Var1, 56))
				{
					return;
				}
				iVar57 = 0;
				while (iVar57 < Var1.f_19)
				{
					if (Var1.f_20[iVar57] == unk_0x62D18D65FE22FF39())
					{
						func_650(func_653(), &Var1);
					}
					iVar57++;
				}
				break;
			
			case 154:
				if (!unk_0x53858F1E03A88AE1(1, iVar58, &Var1, 56))
				{
					return;
				}
				iVar57 = 0;
				while (iVar57 < Var1.f_19)
				{
					if (Var1.f_20[iVar57] == unk_0x62D18D65FE22FF39())
					{
						func_650(func_649(), &Var1);
					}
					iVar57++;
				}
				break;
		}
		iVar58++;
	}
}

char* func_649()
{
	switch (func_15())
	{
		case 1:
			return "TSA_TIC_CD_LFT";
		
		case 2:
			return "TSA_TIC_HH_LFT";
		
		case 3:
			return "TSA_TIC_SR_LFT";
		
		default:
	}
	return "";
}

int func_650(char* sParam0, char* sParam1)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	unk_0xA91D83F2CC1345A6(func_651(sParam1));
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	func_557(15, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

var func_651(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_652(&cVar0);
}

var func_652(char[4] cParam0)
{
	return cParam0;
}

char* func_653()
{
	switch (func_15())
	{
		case 1:
			return "TSA_TIC_CD_JND";
		
		case 2:
			return "TSA_TIC_HH_JND";
		
		case 3:
			return "TSA_TIC_SR_JND";
		
		default:
	}
	return "";
}

void func_654()
{
	if (!func_393(iLocal_1841, 23))
	{
		if (!func_1124(73))
		{
			if (func_681(2500))
			{
				if (func_666(func_678(), func_677(), 1, 1, 0, 0, 1, 0, 1, 0, 0))
				{
					func_664(2500);
					func_478(73);
				}
			}
		}
		else if (func_656())
		{
			func_655(23);
		}
	}
}

void func_655(int iParam0)
{
	if (func_21(&(Local_2125[iLocal_1840 /*38*/].f_1), iParam0))
	{
	}
}

int func_656()
{
	func_683();
	func_682();
	unk_0x66647E28E2119755(1);
	unk_0xB034D63F2AC698FB(0, 0, 1065353216);
	if (!func_19(&(Local_2430.f_2)))
	{
		func_662();
	}
	else if (func_17(&(Local_2430.f_2), func_661(), 0))
	{
		if (func_657())
		{
			return 1;
		}
	}
	return 0;
}

int func_657()
{
	if (!func_19(&(Local_2430.f_4)))
	{
		func_659();
		unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
		func_18(&(Local_2430.f_4), 0, 0);
	}
	else if (!unk_0x257CAD90873BF327(Local_2430.f_1) || func_17(&(Local_2430.f_4), func_658() + 1000, 0))
	{
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

int func_658()
{
	return 5000;
}

void func_659()
{
	unk_0xFE1DEC9C5734D0C0(Local_2430, 0);
	unk_0xFE1DEC9C5734D0C0(Local_2430.f_1, 0);
	Local_2430 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x7508AE96782B0441(Local_2430, unk_0x9E695CE384C77EF0(iLocal_1845, -1.6f, -1.5f, func_660()));
	unk_0x5C062C9AFC66C513(Local_2430, iLocal_1845, 0f, 0f, 0f, 1);
	unk_0xEF20E9A7B745D17A(Local_2430, unk_0xF66C9C93DD6D9095());
	Local_2430.f_1 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x7508AE96782B0441(Local_2430.f_1, unk_0xEE77BC5A16EEF2B4());
	unk_0xBD833AA6EB59C81B(Local_2430.f_1, unk_0x25D8B90D7AB16D2F(2), 2);
	unk_0xEF20E9A7B745D17A(Local_2430.f_1, unk_0xF66C9C93DD6D9095());
	unk_0x6FA8221C9D2ECB46(Local_2430, 1);
	unk_0x32279DAB93C9A9FA(Local_2430.f_1, Local_2430, 5000, 3, 1);
	unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
	unk_0x9C9EC7CC88D050FA(Local_2430, "HAND_SHAKE", 0.3f);
}

float func_660()
{
	float fVar0;
	var uVar1;
	struct<3> Var4;
	
	if (iLocal_1846 != 0)
	{
		func_268(iLocal_1846, &uVar1, &Var4, 1086324736, 1080033280, 1077936128);
		fVar0 = Var4.f_2;
	}
	else
	{
		fVar0 = 0.5f;
	}
	return fVar0;
}

int func_661()
{
	return 6000;
}

void func_662()
{
	int iVar0;
	int iVar1;
	
	unk_0xFE1DEC9C5734D0C0(Local_2430, 0);
	unk_0xFE1DEC9C5734D0C0(Local_2430.f_1, 0);
	iVar1 = 3;
	iVar0 = unk_0xB36B8558948EA7A8(0, iVar1);
	if (!unk_0x0E8572B08CEB6A11(Local_2430))
	{
		Local_2430 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	if (!unk_0x0E8572B08CEB6A11(Local_2430.f_1))
	{
		Local_2430.f_1 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
	}
	unk_0x612434A5544F5847(Local_2430, iLocal_1839, func_663(1, iVar0, 1), 1);
	unk_0x5C062C9AFC66C513(Local_2430, iLocal_1839, func_663(1, iVar0, 0), 1);
	unk_0x612434A5544F5847(Local_2430.f_1, iLocal_1839, func_663(2, iVar0, 1), 1);
	unk_0x5C062C9AFC66C513(Local_2430.f_1, iLocal_1839, func_663(2, iVar0, 0), 1);
	unk_0xEF20E9A7B745D17A(Local_2430, 34.9554f);
	unk_0xEF20E9A7B745D17A(Local_2430.f_1, 34.9554f);
	unk_0x6FA8221C9D2ECB46(Local_2430, 1);
	unk_0x32279DAB93C9A9FA(Local_2430.f_1, Local_2430, func_661(), 0, 1);
	unk_0x9C9EC7CC88D050FA(Local_2430, "HAND_SHAKE", 0.3f);
	unk_0x9C9EC7CC88D050FA(Local_2430.f_1, "HAND_SHAKE", 0.3f);
	unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
	func_629(&(Local_2430.f_2));
	func_18(&(Local_2430.f_2), 0, 0);
}

Vector3 func_663(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == 1)
	{
		if (iParam1 == 0)
		{
			if (bParam2)
			{
				return 1.3015f, 5.2783f, 0.0878f;
			}
			else
			{
				return 0.5597f, 2.3777f, 0.2789f;
			}
		}
		else if (iParam1 == 1)
		{
			if (bParam2)
			{
				return 2.7647f, 4.4739f, 0.6398f;
			}
			else
			{
				return 0.9114f, 2.115f, 0.6153f;
			}
		}
		else if (bParam2)
		{
			return -1.7122f, 6.1183f, 0.8633f;
		}
		else
		{
			return 1.9024f, 2.8556f, 1.2344f;
		}
	}
	else if (iParam1 == 0)
	{
		if (bParam2)
		{
			return -0.5811f, 4.4837f, 0.7696f;
		}
		else
		{
			return 0.4665f, 1.676f, 0.6287f;
		}
	}
	else if (iParam1 == 1)
	{
		if (bParam2)
		{
			return -1.3625f, 4.5793f, 0.6336f;
		}
		else
		{
			return 0.0291f, 1.9218f, 0.6077f;
		}
	}
	else if (bParam2)
	{
		return 1.3784f, 6.1317f, 0.8623f;
	}
	else
	{
		return 0.0428f, 2.4647f, 0.6911f;
	}
	return 0f, 0f, 0f;
}

int func_664(int iParam0)
{
	func_665(40);
	if (!unk_0xE0A6F16F546C8274())
	{
		if (!unk_0x07BE48DF95787FCB())
		{
			unk_0x6E1E3A5B1F9AB95B(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_665(int iParam0)
{
	if (func_127(&uLocal_1853, iParam0))
	{
	}
}

int func_666(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_22531.f_6 = 1;
	if (Global_2441237.f_1351 && Global_2441237.f_1359)
	{
		func_673(0, bParam9);
		return 1;
	}
	if (unk_0xF471787D45ADC2C1() && !bParam9)
	{
		if (Global_2441237.f_1351)
		{
			func_673(0, bParam9);
		}
		return 0;
	}
	if ((unk_0xCE84F8AB9BD41C13() && !bParam9) && !unk_0x7A4185C9A76C12B2())
	{
		return 0;
	}
	if (!func_386())
	{
		if (func_672(unk_0x1146A9AE09CE2B14(), 1, 0) && !(func_671() || func_670()))
		{
			if (((bParam9 && func_11(unk_0x1146A9AE09CE2B14(), 1, 0)) && unk_0xF471787D45ADC2C1()) && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 1)
			{
			}
			else if (func_669() == 28)
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2441237.f_1351 && !bParam11)
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		if ((unk_0x0BCA9ADE67DF9DD8((Var1.x - Param0.x)) < 0.2f && unk_0x0BCA9ADE67DF9DD8((Var1.f_1 - Param0.f_1)) < 0.2f) && unk_0x0BCA9ADE67DF9DD8((Var1.f_2 - Param0.f_2)) < 1.2f)
		{
			fVar4 = (fParam3 - unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (unk_0x0BCA9ADE67DF9DD8(fVar4) < 1f)
			{
				Global_2441237.f_1351 = 0;
				Global_2441237.f_1352 = 0;
				if (unk_0x7A4185C9A76C12B2())
				{
					unk_0x9065E9E298F1BC11();
				}
				return 1;
			}
		}
	}
	if (((!Param0.x == Global_2441237.f_1353 || !Param0.f_1 == Global_2441237.f_1353.f_1) || !Param0.f_2 == Global_2441237.f_1353.f_2) || !fParam3 == Global_2441237.f_1356)
	{
		if (Global_2441237.f_1351 == 1)
		{
			if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2441237.f_1357) < func_381(0))
			{
				return 0;
			}
			unk_0x9065E9E298F1BC11();
			Global_2441237.f_1352 = 1;
		}
		else
		{
			Global_2441237.f_1352 = 0;
		}
		Global_2441237.f_1353 = { Param0 };
		Global_2441237.f_1356 = fParam3;
		Global_2441237.f_1351 = 0;
	}
	if (bParam4)
	{
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
			if (unk_0x419E13582192CFEA(iVar0) && unk_0x6471F4759775FCA4(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2441237.f_1351 && !unk_0x7A4185C9A76C12B2())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		bParam7 = bParam7;
		if (bParam7)
		{
		}
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
		{
			if (!unk_0x234B68AC2E35ED5A(Global_99422.f_1378[44], 16))
			{
				func_668(0);
			}
			if (!unk_0x4EB3ECD73955E6CC(unk_0x7D2B9E6A64637269(), &(Global_2405077.f_501)))
			{
				Global_2405077.f_501 = 0;
			}
		}
		if (bParam4)
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
				if (unk_0x83E7671FB1B0EA3F(iVar0))
				{
					Global_2441237.f_1358 = 0;
				}
			}
		}
		if (Global_2441237.f_1358 > -1)
		{
			Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1351 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
						if (unk_0xA6BE8F025C6B653F(iVar0))
						{
							unk_0x78CDDD1E6367978D(iVar0, Param0, 0, 1, 1, 1);
							unk_0xCD37A28258D70638(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								unk_0xBDDCDEC7B6205897(iVar0, fParam12, 0f, fParam3, 2, 1);
							}
						}
						else
						{
							unk_0x13F856602366FE17(iVar0);
						}
					}
					else
					{
						unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 0, 0, 0, 1);
						unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam3);
					}
				}
				else
				{
					unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Param0, 0, 0, 0, 1);
					unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam3);
				}
				func_673(bParam6, bParam9);
				return 1;
			}
			else
			{
				unk_0x961F6202C2192265();
				unk_0xBD99B1A905B5473C(unk_0x1146A9AE09CE2B14(), Param0, fParam3, bParam4, iParam10, 0);
			}
			Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1351 = 1;
		}
	}
	if (Global_2441237.f_1351)
	{
		Global_22531.f_6 = 1;
		Global_2441237.f_1357 = unk_0x551F46B3C7DFB654();
		if (Global_2441237.f_1358 > -1)
		{
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
			}
			if (func_667(&(Global_2441237.f_1358), Param0, fParam3, iVar0))
			{
				func_673(bParam6, bParam9);
				return 1;
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0), Global_2441237.f_1353) < 2f)
				{
					if (unk_0x7A4185C9A76C12B2())
					{
						unk_0x9065E9E298F1BC11();
					}
					func_673(bParam6, bParam9);
					return 1;
				}
			}
			if (!unk_0x7A4185C9A76C12B2())
			{
				if (fParam12 != 0f)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar0 = unk_0xDA8C680C9B8BFAAF(unk_0x7D2B9E6A64637269());
						unk_0xBDDCDEC7B6205897(iVar0, fParam12, 0f, fParam3, 2, 1);
						Global_2441237.f_1359 = 1;
						return 0;
					}
				}
				func_673(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

int func_667(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (unk_0x419E13582192CFEA(Global_2441237.f_1360) && !unk_0xE50EB54E0F21BED0(Global_2441237.f_1360, 0))
	{
		unk_0x13F856602366FE17(Global_2441237.f_1360);
	}
	switch (*uParam0)
	{
		case 0:
			Global_2441237.f_1360 = iParam5;
			unk_0x13F856602366FE17(Global_2441237.f_1360);
			if (unk_0xA6BE8F025C6B653F(Global_2441237.f_1360))
			{
				if (!unk_0xE50EB54E0F21BED0(Global_2441237.f_1360, 0))
				{
					unk_0xCD37A28258D70638(Global_2441237.f_1360, fParam4);
					unk_0x78CDDD1E6367978D(Global_2441237.f_1360, Param1, 0, 1, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_668(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_2405077.f_2689;
	if ((unk_0x38684A9B76A50D6A() && Global_2405077.f_2687 == 0) && iParam0 == 0)
	{
		iVar0 = 255;
	}
	if (!iVar0 == Global_2405077.f_2686)
	{
		if (!unk_0x1275587246A96F24())
		{
			Global_2405077.f_2686 = iVar0;
		}
	}
}

int func_669()
{
	return Global_1312836;
}

bool func_670()
{
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 12)) && Global_1702509 == 8);
}

bool func_671()
{
	return (unk_0x234B68AC2E35ED5A(Global_4456448.f_30, 12) && unk_0x234B68AC2E35ED5A(Global_1702510, 0));
}

int func_672(int iParam0, bool bParam1, int iParam2)
{
	if (Global_2426865[iParam0 /*449*/].f_231 == 99)
	{
		if ((iParam2 && Global_2426865[iParam0 /*449*/].f_234 == 0) || iParam2 == 0)
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (Global_2426865[iParam0 /*449*/].f_231 == 13)
		{
			return 0;
		}
	}
	return 1;
}

void func_673(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		unk_0x3A13FD2813C8251F(0f, 1065353216);
		unk_0xDF23DCD7A3E1B7A5(0f);
	}
	if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
	{
		unk_0x6E88C3DDF38550FA(unk_0x7D2B9E6A64637269());
	}
	if (!bParam1)
	{
		unk_0x961F6202C2192265();
	}
	if (unk_0x7A4185C9A76C12B2())
	{
		unk_0x9065E9E298F1BC11();
	}
	func_676();
	if (!unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 14) && !func_675())
	{
		func_674();
	}
}

void func_674()
{
	Global_2553486.f_88 = 1;
}

int func_675()
{
	if (!unk_0xE45310E861787FC2() && !func_386())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_4456448.f_139630[0 /*24*/].f_17, 0))
	{
		return 1;
	}
	return 0;
}

void func_676()
{
	struct<3> Var0;
	
	Global_2441237.f_1351 = 0;
	Global_2441237.f_1352 = 0;
	Global_2441237.f_1353 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2441237.f_1358 = -1;
	Global_2441237.f_1359 = 0;
	Global_2405077.f_2690 = { Var0 };
}

float func_677()
{
	return 270f;
}

Vector3 func_678()
{
	switch (func_680())
	{
		case 2:
			if (func_679(iLocal_1840))
			{
				return -2127f, 1152.253f, 24.6659f;
			}
			return -2127f, 1144.98f, 24.6659f;
		
		case 3:
			if (func_679(iLocal_1840))
			{
				return -2127f, 1078.99f, 24.663f;
			}
			return -2127f, 1069.415f, 24.686f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_679(int iParam0)
{
	if ((iParam0 % 2) == 0)
	{
		return 1;
	}
	return 0;
}

int func_680()
{
	return Local_1898.f_118.f_1;
}

int func_681(int iParam0)
{
	func_478(40);
	if (!unk_0x8B6A925F148E0E94())
	{
		if (!unk_0x4E38E404B98F3D9A())
		{
			unk_0x8BA9BCDD56AA7115(iParam0);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_682()
{
	if (iLocal_1846 == 0)
	{
		return;
	}
	unk_0x66647E28E2119755(0);
	unk_0x681AE3DAF3A73058(0, 1, 1);
	unk_0x681AE3DAF3A73058(0, 2, 1);
	unk_0x681AE3DAF3A73058(0, 26, 1);
	unk_0x681AE3DAF3A73058(0, 79, 1);
	unk_0x681AE3DAF3A73058(0, 286, 1);
	unk_0x681AE3DAF3A73058(0, 287, 1);
	unk_0x681AE3DAF3A73058(0, 86, 1);
	unk_0x681AE3DAF3A73058(0, 65, 1);
	unk_0x681AE3DAF3A73058(0, 101, 1);
	unk_0x681AE3DAF3A73058(0, 81, 1);
	unk_0x681AE3DAF3A73058(0, 82, 1);
	unk_0x681AE3DAF3A73058(0, 71, 1);
	unk_0x681AE3DAF3A73058(0, 0, 1);
	unk_0x42350E6CB2FD2E74();
	switch (iLocal_1846)
	{
		case joaat("blazer5"):
			unk_0x366E7F593105797F(0, 101, 1);
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
			unk_0x366E7F593105797F(0, 357, 1);
			unk_0x366E7F593105797F(0, 101, 1);
			break;
	}
	unk_0x366E7F593105797F(0, 80, 1);
	unk_0x366E7F593105797F(0, 351, 1);
	func_495(iLocal_1845, 1);
}

void func_683()
{
	func_691();
	unk_0xAF98B1BA240CE3DB();
	func_684(0);
}

void func_684(int iParam0)
{
	if (func_690())
	{
		return;
	}
	if (!Global_19798.f_1 == 1)
	{
		if (func_689(0))
		{
			func_685(iParam0);
		}
		unk_0x191DDA30577F440A(&Global_7669, 2);
	}
}

void func_685(int iParam0)
{
	if (func_690())
	{
		return;
	}
	if (Global_19984)
	{
		if (func_688())
		{
			func_687(1, 1);
		}
		else
		{
			func_687(0, 0);
		}
	}
	if (Global_19798.f_1 == 10 || Global_19798.f_1 == 9)
	{
		unk_0x191DDA30577F440A(&Global_7669, 16);
	}
	if (unk_0x8820F6FCD373F9F7())
	{
		unk_0x75B41F5020877259(0);
	}
	Global_21125 = 5;
	if (iParam0 == 1)
	{
		unk_0x191DDA30577F440A(&Global_7668, 30);
	}
	else
	{
		unk_0xC664C0067EEAB8D1(&Global_7668, 30);
	}
	if (!func_686())
	{
		Global_19798.f_1 = 3;
	}
}

int func_686()
{
	if (Global_19798.f_1 == 1 || Global_19798.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_687(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_689(0))
		{
			Global_19984 = 1;
			if (bParam1)
			{
				unk_0x3AEC124A3999B3D1(&Global_19735);
			}
			Global_19726 = { Global_19744[Global_19743 /*3*/] };
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
	else if (Global_19984 == 1)
	{
		Global_19984 = 0;
		Global_19726 = { Global_19751[Global_19743 /*3*/] };
		if (bParam1)
		{
			unk_0xA48FA5CE681A5230(Global_19735);
		}
		else
		{
			unk_0xA48FA5CE681A5230(Global_19726);
		}
	}
}

bool func_688()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 5);
}

int func_689(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19798.f_1 > 3)
		{
			if (unk_0x234B68AC2E35ED5A(Global_7668, 14))
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
	if (unk_0x636F1F53CC61D2C9(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19798.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_690()
{
	return unk_0x234B68AC2E35ED5A(Global_1695733, 19);
}

void func_691()
{
	func_693();
	func_692(6, -1);
	func_692(7, -1);
	func_692(3, -1);
	func_692(1, -1);
	func_692(2, -1);
	func_692(11, -1);
	func_692(13, -1);
	func_692(14, -1);
	func_692(16, -1);
}

void func_692(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1379108.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1379108.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_693()
{
	Global_2544210.f_4598 = 0;
}

void func_694(var uParam0, int iParam1)
{
	if (unk_0x234B68AC2E35ED5A(Local_223.f_54, 0))
	{
		return;
	}
	if (!func_19(uParam0))
	{
		return;
	}
	if (func_695(*uParam0, (iParam1 - 5000), 0))
	{
		unk_0x9B0169E27978C1A2(-1, "5s", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
		unk_0x191DDA30577F440A(&(Local_223.f_54), 0);
	}
}

int func_695(var uParam0, var uParam1, int iParam2, bool bParam3)
{
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

void func_696(int iParam0)
{
	if (func_127(&(Local_2125[iLocal_1840 /*38*/].f_30), iParam0))
	{
	}
}

int func_697()
{
	return func_698();
}

int func_698()
{
	return Local_2125[iLocal_1840 /*38*/];
}

bool func_699(int iParam0, int iParam1)
{
	return func_4(&(Local_2125[iParam0 /*38*/].f_30), iParam1);
}

void func_700()
{
	if (!func_710())
	{
		return;
	}
	func_701();
}

void func_701()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = unk_0xC502CD39B4994F3A(iVar1);
		if (iVar0 == iLocal_1838)
		{
		}
		else if (unk_0x8CFC2F41A749E236(iVar0))
		{
			if (unk_0xFCC26BA7572E9F1F(iVar0))
			{
				if (!unk_0x234B68AC2E35ED5A(Local_223.f_53, iVar1) && func_708(iVar0))
				{
					func_702(iVar0, func_707(6), 1, 0);
					unk_0x191DDA30577F440A(&(Local_223.f_53), iVar1);
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Local_223.f_53, iVar1) && func_708(iVar0))
			{
				func_702(iVar0, func_707(6), 0, 0);
				unk_0xC664C0067EEAB8D1(&(Local_223.f_53), iVar1);
			}
		}
		iVar1++;
	}
}

void func_702(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_704(iParam0))
	{
		return;
	}
	if (func_703(&(Global_2416162.f_624[iParam0]), &(Global_2416162.f_987[iParam0]), &(Global_2416162.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416162.f_459[iParam0] = iParam1;
		}
	}
}

int func_703(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x4BE697D014536271(*uParam1) || *uParam1 == unk_0x62D18D65FE22FF39())
		{
			*uParam1 = unk_0x62D18D65FE22FF39();
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
	}
	if (!unk_0x4BE697D014536271(*uParam0) || *uParam0 == unk_0x62D18D65FE22FF39())
	{
		if (bParam3)
		{
			if (!unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0x191DDA30577F440A(uParam2, iParam4);
			}
			*uParam0 = unk_0x62D18D65FE22FF39();
		}
		else
		{
			if (unk_0x234B68AC2E35ED5A(*uParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xC664C0067EEAB8D1(uParam2, iParam4);
			}
			if (*uParam1 == unk_0x62D18D65FE22FF39())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x4BE697D014536271(*uParam1) && !*uParam1 == unk_0x62D18D65FE22FF39())
	{
	}
	return 0;
}

int func_704(int iParam0)
{
	if (iParam0 == func_51())
	{
		return 1;
	}
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_705())
	{
		return 1;
	}
	return 0;
}

int func_705()
{
	switch (func_175())
	{
		case 0:
			return func_706();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_706()
{
	switch (Global_2465851)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_707(int iParam0)
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
	unk_0xB4D5E37C91862216(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

bool func_708(int iParam0)
{
	return func_709(&(Global_2416162.f_624[iParam0]));
}

int func_709(var uParam0)
{
	if (unk_0x4BE697D014536271(*uParam0))
	{
		if (!*uParam0 == unk_0x62D18D65FE22FF39())
		{
			return 0;
		}
	}
	return 1;
}

int func_710()
{
	switch (func_697())
	{
		case 2:
		case 3:
			return 1;
		
		default:
	}
	return 0;
}

void func_711()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (Local_834.f_446.f_5 == 0)
	{
		return;
	}
	if (iLocal_1846 == 0)
	{
		return;
	}
	if (!func_19(&(Local_1898.f_223)))
	{
		return;
	}
	iVar0 = 500;
	Call_Loc(Local_834.f_446.f_5);
	iVar1 = StackVal;
	if (func_17(&(Local_1898.f_223), (iVar1 + iVar0), 0))
	{
		return;
	}
	if (func_17(&(Local_1898.f_223), (iVar1 - iVar0), 0))
	{
		if (unk_0x96DF114B59E81B9C(0, 71))
		{
			iVar2 = 1400;
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) - SYSTEM::TO_FLOAT(iVar2)));
			Global_1312337 = 1;
			Global_1312337.f_1 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), (iVar3 * -1));
			Global_1312337.f_2 = 0f;
			if (unk_0xBFCE58B2B3249999(iLocal_1845, 0))
			{
				Global_1312337.f_2 = unk_0x4DDAC4C80BACF92C(iLocal_1845);
				if (unk_0xA6BE8F025C6B653F(iLocal_1845))
				{
					unk_0x4C33A8616B52B9E7(iLocal_1845, 1);
				}
			}
			Global_1312337.f_3 = 0;
			unk_0x9673FB069F90F6B9("RaceTurbo", 0, 0);
		}
	}
}

int func_712()
{
	if ((func_713() + unk_0xAB0F784335D14AC3()) < 2)
	{
		return 1;
	}
	return 0;
}

int func_713()
{
	return func_630(iLocal_1833);
}

bool func_714()
{
	return func_12() == iLocal_1838;
}

int func_715()
{
	func_628(func_637());
	func_717(1);
	Local_1898.f_118.f_17 = func_716();
	return 1;
}

int func_716()
{
	return -1;
}

void func_717(int iParam0)
{
	if (func_21(&(Local_2125[iLocal_1840 /*38*/].f_30), iParam0))
	{
	}
}

int func_718()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_1898.f_118.f_2[iVar0] = -1;
		iVar0++;
	}
	func_506(1);
	return 1;
}

int func_719()
{
	return 1;
}

void func_720(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!func_699(unk_0x63700C801F742019(), 0))
			{
				func_722(Local_223.f_2, func_725(), 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			else
			{
				func_722(func_721(), func_725(), 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			}
			break;
		
		case 0:
		case 2:
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_394.f_1);
			func_722(StackVal, Local_284.f_507[iParam0 /*6*/].f_1, 0, 0, -1, 0, Local_284.f_507[iParam0 /*6*/].f_3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			break;
	}
}

int func_721()
{
	return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_223.f_9);
}

void func_722(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_724(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_723(7, iVar0);
		Global_1380638.f_4617[iVar0] = iParam0;
		StringCopy(&(Global_1380638.f_4617.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_4617.f_172[iVar0] = iParam2;
		Global_1380638.f_4617.f_216[iVar0] = iParam3;
		Global_1380638.f_4617.f_183[iVar0] = iParam4;
		Global_1380638.f_4617.f_194[iVar0] = iParam5;
		Global_1380638.f_4617.f_249[iVar0] = iParam6;
		Global_1380638.f_4617.f_260[iVar0] = iParam7;
		Global_1380638.f_4617.f_205[iVar0] = iParam8;
		Global_1380638.f_4617.f_314[iVar0] = iParam9;
		Global_1380638.f_4617.f_325[iVar0] = iParam10;
		Global_1380638.f_4617.f_357[iVar0] = iParam11;
		Global_1380638.f_4617.f_238[iVar0] = iParam12;
		Global_1380638.f_4617.f_271[iVar0] = iParam13;
		Global_1380638.f_4617.f_368[iVar0] = iParam14;
		Global_1380638.f_4617.f_379[iVar0] = iParam15;
		Global_1380638.f_4617.f_390[iVar0] = iParam16;
		Global_1380638.f_4617.f_227[iVar0] = iParam17;
	}
}

void func_723(int iParam0, int iParam1)
{
	unk_0x191DDA30577F440A(&(Global_1380638.f_6736[iParam0]), iParam1);
}

bool func_724(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1380638.f_6736[iParam0], iParam1);
}

char* func_725()
{
	return "TSA_TIME";
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xAB0F784335D14AC3();
		
		case 2:
			return func_727(0, (10000 - func_728(&(Local_1898.f_118.f_9), 0, 0)));
		
		default:
	}
	return func_728(&Local_223, 0, 0);
}

int func_727(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_728(var uParam0, bool bParam1, bool bParam2)
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

int func_729(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
			return (func_697() == 0 && func_19(&(Local_1898.f_118.f_9)));
		
		case 1:
			return func_697() >= 3;
		
		default:
	}
	return 0;
}

void func_730(int iParam0)
{
	if (iParam0 == (Local_284.f_98 - 1))
	{
		unk_0x9B0169E27978C1A2(-1, "Checkpoint_Finish", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
	}
	else
	{
		unk_0x9B0169E27978C1A2(-1, "Checkpoint", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
	}
}

bool func_731(int iParam0)
{
	return func_732(iParam0);
}

bool func_732(int iParam0)
{
	if (func_3(19) || func_393(iLocal_1841, 22))
	{
		return 0;
	}
	Call_Loc(Local_834.f_453);
	return (StackVal && iParam0 == Local_2125[iLocal_1840 /*38*/].f_35);
}

void func_733()
{
	Local_2125[iLocal_1840 /*38*/].f_35 = (Local_2125[iLocal_1840 /*38*/].f_35 + 1 % Local_284.f_98);
}

void func_734()
{
	if (func_699(unk_0x63700C801F742019(), 0))
	{
		Local_223.f_2 = func_721();
		if (Local_223.f_3 == 0 || Local_223.f_3 > Local_223.f_2)
		{
			Local_223.f_3 = Local_223.f_2;
		}
		func_696(0);
	}
	Local_2125[iLocal_1840 /*38*/].f_37 = 0;
	func_655(22);
}

void func_735()
{
	if (Local_2125[iLocal_1840 /*38*/].f_35 == 0)
	{
		if (!func_699(unk_0x63700C801F742019(), 0))
		{
			Local_223.f_9 = unk_0x551F46B3C7DFB654();
			func_717(0);
		}
	}
}

void func_736(int iParam0)
{
	int iVar0;
	
	if (bLocal_1836 && unk_0xF46EDF82CA845956(iParam0))
	{
		Local_1898.f_118.f_17 = iParam0;
	}
	func_497(0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_1898.f_118.f_2[iVar0] == iParam0)
		{
		}
		else if (Local_1898.f_118.f_2[iVar0] == -1)
		{
			Local_1898.f_118.f_2[iVar0] = iParam0;
		}
		else
		{
			iVar0++;
		}
	}
}

int func_737()
{
	return 1;
}

void func_738()
{
	unk_0x9B0169E27978C1A2(-1, "Go", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
}

void func_739(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x9B0169E27978C1A2(-1, "321", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
}

int func_740()
{
	switch (func_697())
	{
		case 2:
		case 3:
			return 2;
		
		default:
	}
	return 1;
}

void func_741()
{
	Local_284.f_463 = 60;
	Local_284.f_463.f_1 = 1;
	Local_284.f_98 = 5;
	func_742();
	Local_284.f_98.f_1[(Local_284.f_98 - 1) /*18*/].f_4 = 38;
	Local_284.f_98.f_1[(Local_284.f_98 - 1) /*18*/].f_10 = 4;
	Local_284.f_549 = 1;
	Local_284.f_507[0 /*6*/] = 1;
	Local_284.f_507[0 /*6*/].f_2 = 2;
	Local_284.f_507[0 /*6*/].f_3 = 4;
	Local_284.f_507[0 /*6*/].f_1 = "TSA_HUD_PLAYERS";
	Local_284.f_507[1 /*6*/] = 4;
	Local_284.f_507[1 /*6*/].f_3 = 3;
	Local_284.f_507[2 /*6*/] = 4;
	Local_284.f_507[2 /*6*/].f_3 = 3;
	Local_284.f_507[2 /*6*/].f_1 = "TSA_HUD_START";
}

void func_742()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_284.f_98)
	{
		Local_284.f_98.f_1[iVar0 /*18*/] = { func_743(iVar0) };
		Local_284.f_98.f_1[iVar0 /*18*/].f_3 = 21f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_7 = 14f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_3 = 4f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_4 = 5f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_5 = 0.25f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_6 = 0.5f;
		iVar0++;
	}
}

Vector3 func_743(int iParam0)
{
	switch (func_680())
	{
		case 2:
			if (!func_679(iLocal_1840))
			{
				switch (iParam0)
				{
					case 0:
						return -1853.649f, 1138.547f, 24.666f;
					
					case 1:
						return -2116.602f, 1133.473f, 24.666f;
					
					case 2:
						return -1853.649f, 1138.547f, 24.666f;
					
					case 3:
						return -2116.602f, 1133.473f, 24.666f;
					
					case 4:
						return -1894.088f, 1148.891f, 24.666f;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return -1853.649f, 1158.547f, 24.666f;
					
					case 1:
						return -2116.602f, 1163.723f, 24.666f;
					
					case 2:
						return -1853.649f, 1158.547f, 24.666f;
					
					case 3:
						return -2116.602f, 1163.723f, 24.666f;
					
					case 4:
						return -1894.088f, 1148.891f, 24.666f;
					}
				
				default:
			}
			break;
		
		case 3:
			if (!func_679(iLocal_1840))
			{
				switch (iParam0)
				{
					case 0:
						return -1853.649f, 1063.797f, 24.666f;
					
					case 1:
						return -2116.602f, 1059.723f, 24.666f;
					
					case 2:
						return -1853.649f, 1063.797f, 24.666f;
					
					case 3:
						return -2116.602f, 1059.723f, 24.666f;
					
					case 4:
						return -1894.088f, 1073.391f, 24.666f;
					
					default:
				}
			}
			else
			{
				switch (iParam0)
				{
					case 0:
						return -1853.649f, 1084.297f, 24.666f;
					
					case 1:
						return -2116.602f, 1088.723f, 24.666f;
					
					case 2:
						return -1853.649f, 1084.297f, 24.666f;
					
					case 3:
						return -2116.602f, 1088.723f, 24.666f;
					
					case 4:
						return -1894.088f, 1073.391f, 24.666f;
					}
				
				default:
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_744()
{
	Local_834.f_11 = 206298;
	Local_834.f_446.f_6 = 206270;
	Local_834.f_446.f_4 = 206242;
	Local_834.f_453.f_8 = 206233;
	Local_834.f_453.f_9 = 206013;
	Local_834.f_453.f_10 = 205974;
	Local_834.f_453.f_11 = 205953;
	Local_834.f_453.f_4 = 205919;
	Local_834.f_453.f_6 = 205903;
	Local_834.f_453.f_5 = 205632;
	Local_834.f_394 = 205522;
	Local_834.f_394.f_1 = 205367;
	Local_834.f_394.f_2 = 204580;
	Local_834.f_41.f_1.f_1 = 204547;
	Local_834.f_41.f_1.f_2 = 204514;
	Local_834.f_465 = 194602;
	Local_834.f_465.f_1 = 204488;
	Local_834.f_397.f_1 = 204441;
	Local_834.f_397 = 204409;
	Local_834.f_2 = 204361;
	Local_834.f_1 = 203952;
	Local_834.f_3.f_1 = 203540;
	Local_834.f_3 = 203397;
	Local_834.f_70.f_1 = 203363;
	Local_834.f_13.f_27 = 203349;
	Local_834.f_91.f_5 = 203271;
	Local_834.f_91.f_4 = 203246;
	Local_834.f_46 = 203161;
	Local_834.f_46.f_1 = 202842;
	Local_834.f_9 = 202708;
	Local_834.f_9.f_1 = 197329;
}

void func_745()
{
	func_526(0, 20, 202665);
	func_525(0, 1, 1);
	func_522(0, 202646);
	func_526(1, 44, 133428);
	func_525(1, 2, 2);
	func_522(1, 197436);
	func_526(2, 45, 197419);
	func_503(2, 3);
	func_526(3, 46, 133428);
}

void func_746()
{
	func_528("TSA_CD_COL", 0);
}

void func_747()
{
	func_748(86, "TSA_STSTART_CD", "TSA_STRAP_CD", 1, -1, 2, 1, 0);
	func_622(191);
	func_498(9877, -1);
}

int func_748(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_795(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_793(&(Var0.f_69), iParam7);
	}
	return func_749(&Var0);
}

int func_749(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2441237.f_3163)
		{
			return 0;
		}
	}
	func_763(uParam0, uParam0->f_17);
	func_760(uParam0);
	if (func_77())
	{
		func_760(uParam0);
	}
	if (func_759(uParam0->f_1))
	{
		func_752();
		if (Global_2441237.f_2841[0 /*80*/].f_2 == 0)
		{
			Global_2441237.f_2841[0 /*80*/] = { *uParam0 };
			if (func_751(uParam0->f_69, 8192))
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
				func_752();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_793(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 2);
				Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_751(uParam0->f_69, 128))
			{
				if (func_750(Global_2441237.f_2841[iVar0 /*80*/].f_1))
				{
					Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
					func_793(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_750(int iParam0)
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

bool func_751(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_752()
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
	func_753();
	if (bVar0)
	{
		Global_77516 = 0;
	}
}

void func_753()
{
	Global_2441237.f_3165 = 0;
	Global_2441237.f_3165.f_578 = 0;
	func_757(&(Global_2441237.f_3165.f_1));
	Global_2441237.f_3165.f_1.f_1 = 0;
	func_754(&(Global_2441237.f_3165.f_1), 1);
}

void func_754(var uParam0, int iParam1)
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
				if (unk_0x8B6A925F148E0E94() && !func_756(0))
				{
					unk_0x6E1E3A5B1F9AB95B(800);
				}
			}
		}
	}
	func_755(0);
}

void func_755(int iParam0)
{
	Global_77508 = iParam0;
	Global_77509 = iParam0;
}

bool func_756(bool bParam0)
{
	if (!bParam0 && unk_0x636F1F53CC61D2C9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_77496, 0);
}

void func_757(var uParam0)
{
	func_758(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_758(var uParam0)
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

int func_759(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_760(var uParam0)
{
	if (func_762(uParam0->f_1))
	{
		uParam0->f_72 = func_761();
	}
}

int func_761()
{
	return 21;
}

int func_762(int iParam0)
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

void func_763(var uParam0, int iParam1)
{
	if (func_762(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_51() || !func_11(iParam1, 0, 1))
	{
		return;
	}
	if (func_750(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_764(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_764(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_299(iParam0) && !bParam4)
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
	if (((func_299(unk_0x1146A9AE09CE2B14()) || (func_792() && func_791())) && !unk_0x234B68AC2E35ED5A(Global_2544210.f_4658, 31)) && !bParam4)
	{
		iVar1 = func_790();
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
								return func_788(iParam1, iParam0, 0);
							}
							else
							{
								return func_776(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_776(iParam0, unk_0xCB567ED25393C1DF(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
			{
				if (Global_4456448.f_80260[iParam1] != -1)
				{
					return func_788(iParam1, iParam0, 0);
				}
				else
				{
					return func_765(0, -1, 0);
				}
			}
			else
			{
				return func_765(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xE45310E861787FC2()) && iParam1 < 4)
	{
		if (Global_4456448.f_80260[iParam1] != -1)
		{
			return func_788(iParam1, iParam0, 0);
		}
		else
		{
			return func_776(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
		}
	}
	return func_776(iParam0, unk_0x1146A9AE09CE2B14(), iParam1, bParam2, bParam3);
}

int func_765(bool bParam0, int iParam1, bool bParam2)
{
	return func_766(unk_0x1146A9AE09CE2B14(), bParam0, iParam1, bParam2);
}

int func_766(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x8CFC2F41A749E236(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x7C3E030BC3ED6671(iParam0);
	if ((func_775() || (func_774() && func_772())) && Global_1390582.f_1)
	{
		if (bParam1)
		{
			return func_771(iParam2, iVar0);
		}
		else
		{
			return func_771(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_295(iVar0, iParam2, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_770(1);
				}
				else
				{
					return func_770(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_4, 20))
			{
				return func_767(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_767(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_770(1);
	}
	return func_770(0);
}

int func_767(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_769(iParam0, iParam1, iParam3);
	if (func_768(Global_4456448.f_85535, 1))
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

int func_768(int iParam0, bool bParam1)
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

int func_769(int iParam0, int iParam1, int iParam2)
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
			if (!func_295(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_770(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_771(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_769(iParam1, iParam0, 4);
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

bool func_772()
{
	if (func_773())
	{
		return 1;
	}
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 4);
}

bool func_773()
{
	return unk_0x234B68AC2E35ED5A(Global_4456448.f_127830, 12);
}

bool func_774()
{
	if (unk_0xE45310E861787FC2())
	{
		return unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0);
	}
	return ((unk_0x234B68AC2E35ED5A(Global_4456448.f_138135, 0) || Global_1660806) && unk_0x636F1F53CC61D2C9(joaat("fm_deathmatch_creator")) > 0);
}

int func_775()
{
	if (func_773() && unk_0xE45310E861787FC2())
	{
		return 1;
	}
	return 0;
}

int func_776(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_782())
			{
				iVar3 = func_781(iParam0);
				if (!iVar3 == -1)
				{
					return func_779(iVar3);
				}
			}
			if ((func_778(iParam1, iParam0, iVar0, 0) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)) || ((func_295(unk_0x7C3E030BC3ED6671(iParam1), unk_0x7C3E030BC3ED6671(iParam0), 0) && unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 23)) && !unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 18)))
			{
				return func_770(1);
			}
			else if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26))
			{
				return func_777(1);
			}
			else
			{
				return func_766(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574425 || Global_1574416) || Global_1590908[iParam0 /*874*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574425 == 1 && Global_1574435 == 0))
			{
				return func_770(1);
			}
			else
			{
				return func_766(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574420 && Global_1573914.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_781(iParam0);
	if (!iVar4 == -1)
	{
		return func_779(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_777(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_778(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_779(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_780(iParam0);
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

var func_780(int iParam0)
{
	return Global_2418033.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_781(int iParam0)
{
	if (!iParam0 == func_51())
	{
		if (func_58(iParam0, 1))
		{
			return Global_2418033.f_818.f_11[func_81(iParam0)];
		}
	}
	return -1;
}

int func_782()
{
	if (((((func_368() || func_787()) || func_77()) || func_786()) || func_785()) || func_783())
	{
		return 1;
	}
	if (unk_0xE45310E861787FC2() && unk_0x234B68AC2E35ED5A(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_783()
{
	return func_784(Global_4456448.f_85535);
}

int func_784(int iParam0)
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

var func_785()
{
	return Global_2453009.f_24;
}

var func_786()
{
	return Global_2453009.f_21;
}

var func_787()
{
	return Global_2453009.f_18;
}

int func_788(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969056.f_14[iParam0];
	if (func_782())
	{
		iVar2 = func_781(iParam1);
		if (!iVar2 == -1)
		{
			return func_779(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_594[iParam0 /*16832*/].f_7429[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_51())
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
			iVar0 = func_766(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_21, 13))
		{
			iVar0 = func_789(iParam0);
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0x234B68AC2E35ED5A(Global_4456448.f_15, 26) && !func_295(iParam0, unk_0x7C3E030BC3ED6671(iParam1), 0))
		{
			iVar0 = func_777(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_789(int iParam0)
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

var func_790()
{
	return Global_2359302.f_2;
}

bool func_791()
{
	return unk_0x234B68AC2E35ED5A(Global_2359302, 4);
}

bool func_792()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 14);
}

void func_793(var uParam0, int iParam1)
{
	func_794(uParam0, iParam1);
}

void func_794(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_795(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_51();
	uParam1->f_18 = func_51();
	uParam1->f_19 = func_51();
	uParam1->f_20 = func_51();
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

void func_796()
{
	func_524(0);
	func_497(8);
}

void func_797()
{
	if (func_19(&(Local_1898.f_118.f_7)))
	{
		func_528("TSA_CD_STAR", 0);
	}
	else
	{
		func_528("TSA_CD_WIP", 0);
	}
}

void func_798()
{
	func_541(0, 20);
	func_538(0, 1, 202783);
	func_541(1, 44);
	func_536(1, 2);
	func_541(2, 45);
	func_538(2, 3, 202770);
	func_541(3, 46);
}

bool func_799()
{
	return func_14(0);
}

int func_800()
{
	if (func_801())
	{
		return func_17(&(Local_1898.f_118.f_7), 30000, 0);
	}
	func_629(&(Local_1898.f_118.f_7));
	return 0;
}

bool func_801()
{
	return unk_0xAB0F784335D14AC3() >= 2;
}

var func_802()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		iVar0 = Local_1898.f_118.f_2[iVar1];
		if (iVar0 != -1 && unk_0xF46EDF82CA845956(iVar0))
		{
			switch (iVar1)
			{
				case 0:
					if (iVar0 == iLocal_1841)
					{
						switch (unk_0xAB0F784335D14AC3())
						{
							case 2:
								return Global_262145.f_31023;
							
							case 3:
								return Global_262145.f_31020;
							
							case 4:
								return Global_262145.f_31016;
							}
						
						default:
					}
					break;
				
				case 1:
					if (iVar0 == iLocal_1841)
					{
						switch (unk_0xAB0F784335D14AC3())
						{
							case 2:
								return Global_262145.f_31024;
							
							case 3:
								return Global_262145.f_31021;
							
							case 4:
								return Global_262145.f_31017;
							}
						
						default:
					}
					break;
				
				case 2:
					if (iVar0 == iLocal_1841)
					{
						switch (unk_0xAB0F784335D14AC3())
						{
							case 3:
								return Global_262145.f_31022;
							
							case 4:
								return Global_262145.f_31018;
							}
						
						default:
					}
					break;
				
				case 3:
					if (iVar0 == iLocal_1841)
					{
						switch (unk_0xAB0F784335D14AC3())
						{
							case 4:
								return Global_262145.f_31019;
							}
						
						default:
					}
					break;
				}
		}
		iVar1++;
	}
	return Global_262145.f_31019;
}

var func_803()
{
	if (Local_1898.f_118.f_17 == iLocal_1841)
	{
		switch (unk_0xAB0F784335D14AC3())
		{
			case 2:
				return Global_262145.f_30649;
			
			case 3:
				return Global_262145.f_30648;
			
			case 4:
				return Global_262145.f_30647;
			}
		
		default:
	}
	return Global_262145.f_30650;
}

int func_804()
{
	if (func_698() > 0)
	{
		return 0;
	}
	return func_546(4);
}

void func_805()
{
	int iVar0;
	
	func_548(17, -1, -1, -1);
	func_548(6, -1, -1, -1);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_1898.f_118.f_2[iVar0] == iLocal_1841)
		{
			func_548(22, iVar0 + 1, unk_0xAB0F784335D14AC3(), -1);
		}
		else
		{
			iVar0++;
		}
	}
}

bool func_806()
{
	return func_698() > 0;
}

int func_807()
{
	switch (func_698())
	{
		case 1:
		case 2:
			return 2;
		
		default:
	}
	return 1;
}

void func_808()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (func_698() < 2)
	{
		iVar2 = 0;
		while (iVar2 < unk_0x5E72DF7B8C03AA05())
		{
			if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar2)))
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!bVar0)
					{
						if (Local_1898.f_118.f_2[iVar1] == func_716() || Local_1898.f_118.f_2[iVar1] == unk_0x6750311806FF130A(iVar2))
						{
							Local_1898.f_118.f_2[iVar1] = unk_0x6750311806FF130A(iVar2);
							bVar0 = true;
						}
						else
						{
							iVar1++;
						}
						iVar2++;
					}

void func_809()
{
	if (unk_0xAB0F784335D14AC3() == 4 || func_698() >= 1)
	{
		if (func_699(iLocal_1841, 1))
		{
			func_507(func_168(0, 1));
			func_696(1);
		}
	}
	if (func_698() == 0)
	{
		func_694(&(Local_1898.f_118.f_7), 30000);
	}
	func_648();
	func_812();
	func_810();
}

void func_810()
{
	if (!func_811())
	{
		return;
	}
	func_701();
}

int func_811()
{
	switch (func_698())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_812()
{
	if (!func_815())
	{
		return;
	}
	if (func_646())
	{
		func_628(func_813());
	}
}

int func_813()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if ((iVar2 != iLocal_1838 && func_644(iVar2)) && func_814(iVar2))
		{
			unk_0x191DDA30577F440A(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_814(int iParam0)
{
	if (!func_643(iParam0))
	{
		return 0;
	}
	if (!func_641(iLocal_1838, iParam0, 1))
	{
		return 0;
	}
	if (func_640(iParam0) != 1)
	{
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iParam0), 0))
	{
		return 0;
	}
	if (unk_0xC49311A2A500FF09(unk_0xD56332194D622ECE(iParam0), 0) && !func_639(unk_0xD56332194D622ECE(iParam0), unk_0x75B58B38E45C6F9A(unk_0xD56332194D622ECE(iParam0), 0), -1))
	{
		return 0;
	}
	return 1;
}

int func_815()
{
	if (func_12() != iLocal_1838)
	{
		return 0;
	}
	switch (func_698())
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_816()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_1898.f_118.f_2[iVar0] = func_716();
		iVar0++;
	}
	Local_1898.f_118.f_17 = func_716();
	func_818();
	func_717(1);
	func_817();
	return 1;
}

void func_817()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5[100];
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	
	Var0 = { -1850.687f, 998.052f, 24.666f };
	iVar3 = 30;
	iVar4 = 25;
	iVar106 = -1;
	iVar107 = -1;
	iVar108 = 0;
	iVar109 = 0;
	iVar106 = -1;
	iVar107 = -1;
	iVar108 = 0;
	while (iVar108 < Local_284.f_98)
	{
		while (iVar106 == -1 || iVar107 == -1)
		{
			iVar106 = unk_0xB36B8558948EA7A8(0, 10);
			iVar107 = unk_0xB36B8558948EA7A8(0, 10);
			if (iVar108 > 0 && (unk_0x909F156FC4077611(((iVar5[(iVar108 - 1)] / 10) - iVar106)) < 3 && unk_0x909F156FC4077611(((iVar5[(iVar108 - 1)] % 10) - iVar107)) < 3))
			{
				iVar106 = -1;
				iVar107 = -1;
			}
			else
			{
				iVar109 = 0;
				while (iVar109 < iVar108)
				{
					if (iVar5[iVar109] == (iVar106 * 10 + iVar107))
					{
						iVar106 = -1;
						iVar107 = -1;
					}
					else
					{
						iVar109++;
					}
				}
			}
		}
		iVar5[iVar108] = (iVar106 * 10 + iVar107);
		Local_1898.f_118.f_19[iVar108 /*3*/] = { Var0 + Vector(0f, IntToFloat((iVar4 * iVar107)), IntToFloat((-iVar3 * iVar106))) };
		iVar106 = -1;
		iVar107 = -1;
		iVar108++;
	}
}

void func_818()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_813();
	func_631(func_813());
	iVar1 = func_630(iVar0);
	if (iVar1 == 1)
	{
		func_556("TSA_TIC_INVSNTs", iVar1, 0);
	}
	else
	{
		func_556("TSA_TIC_INVSNT", iVar1, 0);
	}
}

int func_819()
{
	Local_284.f_98.f_1[(Local_284.f_98 - 1) /*18*/].f_4 = 38;
	Local_284.f_98.f_1[(Local_284.f_98 - 1) /*18*/].f_10 = 4;
	return 1;
}

char* func_820(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_HT_CD_START";
		
		default:
	}
	return "";
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_698() == 2 && func_172(9877, -1, 0) <= 3);
		
		default:
	}
	return 0;
}

int func_822()
{
	if ((func_713() + unk_0xAB0F784335D14AC3()) < 4)
	{
		return 1;
	}
	return 0;
}

char* func_823(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return "TSA_TICK_FRSTR";
		
		default:
	}
	return "";
}

char* func_824(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			return "TSA_TICK_FRST";
		
		default:
	}
	return "";
}

void func_825(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	int iVar19;
	
	switch (iParam0)
	{
		case 1:
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_394.f_1);
			func_722(StackVal, Local_284.f_507[iParam0 /*6*/].f_1, 0, 0, -1, 0, Local_284.f_507[iParam0 /*6*/].f_3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			iVar19 = 0;
			while (iVar19 < 4)
			{
				iVar0 = Local_1898.f_118.f_2[iVar19];
				if (iVar0 != -1 && unk_0xF46EDF82CA845956(iVar0))
				{
					switch (iVar19)
					{
						case 0:
							iVar2 = 109;
							StringCopy(&Var3, unk_0x3A2A8DAFDBEC4CFE("TSA_FIRST"), 64);
							iVar1 = 7;
							break;
						
						case 1:
							iVar2 = 108;
							StringCopy(&Var3, unk_0x3A2A8DAFDBEC4CFE("TSA_SECOND"), 64);
							iVar1 = 6;
							break;
						
						case 2:
							iVar2 = 107;
							StringCopy(&Var3, unk_0x3A2A8DAFDBEC4CFE("TSA_THIRD"), 64);
							iVar1 = 5;
							break;
						
						case 3:
							iVar2 = 1;
							StringCopy(&Var3, unk_0x3A2A8DAFDBEC4CFE("TSA_FOURTH"), 64);
							iVar1 = 4;
							break;
					}
					StringConCat(&Var3, ": ", 64);
					StringConCat(&Var3, unk_0xF04DBC0AC5A2AB23(unk_0x539ED6DF32477DE0(iVar0)), 64);
					func_827(func_829(func_831(iVar0), 0, func_830()), func_830(), &Var3, iVar2, -1, iVar1, 1, 0, 0, iVar2, 0, func_828(), 0);
				}
				iVar19++;
			}
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_394.f_1);
			func_722(StackVal, "TSA_TIME", 0, 1, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_826();
			break;
	}
}

void func_826()
{
	Global_1380638.f_1130 = 1;
}

void func_827(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_724(5, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_723(5, iVar0);
		Global_1380638.f_3663[iVar0] = uParam0;
		Global_1380638.f_3663.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1380638.f_3663.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1380638.f_3663.f_194[iVar0] = iParam3;
		Global_1380638.f_3663.f_183[iVar0] = iParam4;
		Global_1380638.f_3663.f_216[iVar0] = iParam5;
		Global_1380638.f_3663.f_227[iVar0] = iParam6;
		Global_1380638.f_3663.f_270[iVar0] = iParam7;
		Global_1380638.f_3663.f_281[iVar0] = iParam8;
		Global_1380638.f_3663.f_292[iVar0] = iParam9;
		Global_1380638.f_3663.f_303[iVar0] = iParam10;
		Global_1380638.f_3663.f_314[iVar0] = uParam11;
		Global_1380638.f_3663.f_325[iVar0] = iParam12;
	}
}

int func_828()
{
	if (((unk_0xFA1A73C829B8839F() == 8 || unk_0xFA1A73C829B8839F() == 9) || unk_0xFA1A73C829B8839F() == 10) || unk_0xFA1A73C829B8839F() == 12)
	{
		return 1;
	}
	return 0;
}

int func_829(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_830()
{
	return Local_284.f_98;
}

int func_831(int iParam0)
{
	if (iParam0 == -1)
	{
		func_831(iLocal_1840);
	}
	return Local_2125[iParam0 /*38*/].f_37;
}

int func_832(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xAB0F784335D14AC3();
		
		case 1:
			return func_727(0, func_834());
		
		case 2:
			return func_833();
		
		default:
	}
	return 0;
}

int func_833()
{
	if (func_698() == 2)
	{
		return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_223.f_9);
	}
	else if (func_698() > 2)
	{
		return Local_223.f_2;
	}
	return 0;
}

int func_834()
{
	if (func_19(&(Local_1898.f_118.f_7)))
	{
		return (30000 - func_728(&(Local_1898.f_118.f_7), 0, 0));
	}
	return 30000;
}

int func_835(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_698())
			{
				case 0:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (func_698())
			{
				case 0:
					return func_19(&(Local_1898.f_118.f_7));
				
				default:
			}
			break;
		
		case 2:
			switch (func_698())
			{
				case 2:
					return 1;
				
				default:
			}
			break;
	}
	return 0;
}

void func_836(int iParam0)
{
	if (iParam0 == (Local_284.f_98 - 1))
	{
		unk_0x9B0169E27978C1A2(-1, "Checkpoint_Finish_Winner", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
	else
	{
		unk_0x9B0169E27978C1A2(-1, "Checkpoint", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
	if (func_831(iLocal_1840) > func_831(Local_1898.f_118.f_2[0]))
	{
		func_837();
	}
}

void func_837()
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = 0;
	func_838(5, &Var0);
}

void func_838(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0 = 915382856;
	Var0.f_1 = iLocal_1838;
	Var0.f_2 = iParam0;
	Var0.f_3 = { *iParam1 };
	unk_0xA5C82A39FF8ED272(1, &Var0, 5, func_839(1));
}

var func_839(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			iVar2 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar1));
			if (func_11(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1146A9AE09CE2B14() || iParam0)
				{
					unk_0x191DDA30577F440A(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_840()
{
	Local_223.f_2 = func_833();
}

void func_841()
{
	if (!func_699(unk_0x63700C801F742019(), 0))
	{
		Local_223.f_9 = unk_0x551F46B3C7DFB654();
		func_717(0);
	}
}

Vector3 func_842(int iParam0)
{
	return Local_1898.f_118.f_19[iParam0 /*3*/];
}

void func_843(int iParam0)
{
	if (bLocal_1836 && unk_0xF46EDF82CA845956(iParam0))
	{
		Local_1898.f_118.f_17 = iParam0;
	}
	func_497(0);
}

void func_844(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1[4];
	bool bVar6;
	bool bVar7;
	
	bVar6 = false;
	bVar7 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_1898.f_118.f_2[iVar0] != iParam0)
		{
			if (!bVar6)
			{
				if (iParam1 > func_831(Local_1898.f_118.f_2[iVar0]) || !unk_0xF46EDF82CA845956(Local_1898.f_118.f_2[iVar0]))
				{
					iVar1[iVar0] = iParam0;
					bVar6 = true;
				}
			}
			iVar1[((iVar0 + func_845(bVar6)) - func_845(bVar7))] = Local_1898.f_118.f_2[iVar0];
		}
		else
		{
			bVar7 = true;
			if (!bVar6)
			{
				iVar1[iVar0] = iParam0;
				bVar6 = true;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_1898.f_118.f_2[iVar0] = iVar1[iVar0];
		iVar0++;
	}
}

int func_845(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_846()
{
	return 1;
}

void func_847()
{
	unk_0x9B0169E27978C1A2(-1, "Go", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	func_478(74);
}

void func_848(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x9B0169E27978C1A2(-1, "321", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
}

void func_849()
{
	int iVar0;
	
	Local_284.f_463 = 60;
	Local_284.f_463.f_1 = 1;
	Local_284.f_98 = 20;
	iVar0 = 0;
	while (iVar0 < Local_284.f_98)
	{
		Local_284.f_98.f_1[iVar0 /*18*/] = { Local_1898.f_118.f_19[iVar0 /*3*/] };
		Local_284.f_98.f_1[iVar0 /*18*/].f_3 = 21f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_7 = 14f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_3 = 4f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_4 = 5f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_5 = 0.25f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_6 = 0.5f;
		iVar0++;
	}
	Local_284.f_549 = 1;
	Local_284.f_507[0 /*6*/] = 1;
	Local_284.f_507[0 /*6*/].f_2 = 4;
	Local_284.f_507[0 /*6*/].f_3 = 4;
	Local_284.f_507[0 /*6*/].f_1 = "TSA_HUD_PLAYERS";
	Local_284.f_507[1 /*6*/] = 4;
	Local_284.f_507[1 /*6*/].f_3 = 3;
	Local_284.f_507[1 /*6*/].f_1 = "TSA_HUD_START";
	Local_284.f_507[2 /*6*/] = 4;
}

void func_850()
{
	Local_834.f_11 = 223539;
	Local_834.f_9 = 223199;
	Local_834.f_9.f_1 = 222097;
	Local_834.f_83.f_3 = 222060;
	Local_834.f_83.f_3.f_1 = 221969;
	Local_834.f_83.f_3.f_2 = 221957;
	Local_834.f_83.f_3.f_3 = 221957;
	Local_834.f_394 = 221785;
	Local_834.f_394.f_2 = 220710;
	Local_834.f_394.f_1 = 220612;
	Local_834.f_453 = 220549;
	Local_834.f_453.f_8 = 220540;
	Local_834.f_453.f_5 = 220479;
	Local_834.f_453.f_10 = 220440;
	Local_834.f_8 = 219145;
	Local_834.f_446.f_6 = 219117;
	Local_834.f_446.f_4 = 219095;
	Local_834.f_397.f_3 = 218955;
	Local_834.f_397.f_1 = 218723;
	Local_834.f_397 = 218665;
	Local_834 = 218656;
	Local_834.f_1 = 218580;
	Local_834.f_465 = 194602;
	Local_834.f_465.f_1 = 218554;
	Local_834.f_3.f_1 = 210439;
	Local_834.f_3 = 210226;
	Local_834.f_91.f_5 = 207610;
	Local_834.f_91 = 207591;
	Local_834.f_91.f_4 = 207305;
	Local_834.f_70.f_1 = 207259;
	Local_834.f_13.f_23 = 207249;
	Local_834.f_13.f_23.f_1 = 207240;
	Local_834.f_13.f_23.f_2 = 207231;
	Local_834.f_13.f_23.f_3 = 207222;
	Local_834.f_13.f_27 = 207129;
	Local_834.f_46 = 207044;
	Local_834.f_46.f_1 = 207006;
}

var func_851()
{
	if (Local_1898.f_118.f_17 == iLocal_1841)
	{
		return Global_262145.f_30624;
	}
	return Global_262145.f_30625;
}

var func_852()
{
	if (Local_1898.f_118.f_17 == iLocal_1841)
	{
		switch (unk_0xAB0F784335D14AC3())
		{
			case 2:
				return Global_262145.f_30618;
			
			case 3:
				return Global_262145.f_30617;
			
			case 4:
				return Global_262145.f_30616;
			}
		
		default:
	}
	return Global_262145.f_30415;
}

int func_853()
{
	switch (func_855())
	{
		case 2:
			if (func_854(iLocal_1841) != 0)
			{
				return 1;
			}
			break;
		
		case 3:
		case 4:
		case 5:
			return 1;
	}
	return 0;
}

int func_854(int iParam0)
{
	return Local_2125[iParam0 /*38*/].f_32;
}

int func_855()
{
	return func_698();
}

int func_856()
{
	return 0;
}

int func_857()
{
	return 1;
}

int func_858()
{
	return 1;
}

int func_859()
{
	return 10;
}

int func_860()
{
	switch (func_861())
	{
		case 4:
		case 5:
			return 2;
		
		default:
	}
	return 1;
}

int func_861()
{
	return func_26();
}

int func_862()
{
	switch (func_855())
	{
		case 0:
		case 1:
			if (!func_864(iLocal_1838))
			{
				return 1;
			}
			if (func_863(iLocal_1840) > 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_863(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = (unk_0x5E72DF7B8C03AA05() - 1);
	while (iVar1 >= 0)
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar1)))
		{
			if (iVar1 == iParam0)
			{
			}
			else
			{
				iVar0++;
				iVar1 = (iVar1 + -1);
			}
			return iVar0;
		}

int func_864(int iParam0)
{
	if (!func_643(iParam0))
	{
		return 0;
	}
	if (func_640(iParam0) != 0)
	{
		return 0;
	}
	if (!func_612(iParam0))
	{
		return 0;
	}
	if (!func_866(iParam0) && !func_865(iParam0))
	{
		return 0;
	}
	if (!func_641(iLocal_1838, iParam0, 1))
	{
		return 0;
	}
	return 1;
}

int func_865(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_200, 29))
	{
		return 1;
	}
	return 0;
}

int func_866(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_200, 27))
	{
		return 1;
	}
	return 0;
}

bool func_867()
{
	return Local_1898.f_118.f_17 == iLocal_1841;
}

void func_868()
{
	int iVar0;
	
	if (func_460() != 3)
	{
		return;
	}
	func_478(74);
	if (Local_1898.f_118.f_17 == iLocal_1841)
	{
		func_902(108, -1);
		func_875(3, 1);
		func_548(10, -1, -1, -1);
		func_548(0, -1, -1, -1);
	}
	iVar0 = 0;
	while (iVar0 < Local_223.f_18)
	{
		if (Local_223.f_4[iVar0] != -1 && Local_223.f_18.f_1[Local_223.f_4[iVar0] /*3*/] == iLocal_1838)
		{
			func_548(19, iVar0 + 1, unk_0xAB0F784335D14AC3(), -1);
		}
		else
		{
			iVar0++;
		}
	}
	func_622(187);
	Local_223.f_32 = func_680();
	Local_223.f_32.f_1 = Local_1898.f_118.f_18;
	Local_223.f_32.f_2 = unk_0xAB0F784335D14AC3();
	Local_223.f_32.f_4 = { func_870(iLocal_1840) };
	Local_223.f_32.f_7 = { func_869() };
	Local_223.f_32.f_3 = Local_1898.f_118.f_17 == iLocal_1841;
}

Vector3 func_869()
{
	return 799.0592f, -1860.477f, 28.34921f;
}

Vector3 func_870(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_873(func_874(iParam0), 1085276160, 1091043328, 2) };
	return unk_0x26C2ACB261895E70(func_872(), func_871(), Var0);
}

float func_871()
{
	return 90f;
}

Vector3 func_872()
{
	return 910.9156f, -1570.844f, 29.7857f;
}

Vector3 func_873(int iParam0, float fParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 % iParam3);
	iVar1 = (iParam0 / iParam3);
	return (fParam1 * IntToFloat(iVar0)), (-fParam2 * IntToFloat(iVar1)), 0f;
}

int func_874(int iParam0)
{
	int iVar0;
	
	iVar0 = func_863(iParam0);
	if (iVar0 < Local_1898.f_118.f_11 && Local_1898.f_118.f_11[iVar0] != -1)
	{
		return Local_1898.f_118.f_11[iVar0];
	}
	return iVar0;
}

void func_875(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_901(300, -1))
	{
		return;
	}
	iVar0 = 0;
	switch (Global_262145.f_30594)
	{
		case 0:
			if (iParam0 != 0)
			{
				return;
			}
			func_883(iParam0, iParam1, Global_262145.f_30595, &iVar0);
			func_880(Global_262145.f_30596);
			break;
		
		case 1:
			if (iParam0 != 1)
			{
				return;
			}
			func_883(iParam0, iParam1, Global_262145.f_30595, &iVar0);
			func_880(Global_262145.f_30596);
			break;
		
		case 2:
			if (iParam0 != 2)
			{
				return;
			}
			func_883(iParam0, iParam1, Global_262145.f_30595, &iVar0);
			func_880(Global_262145.f_30596);
			break;
		
		case 3:
			if (iParam0 != 3)
			{
				return;
			}
			func_883(iParam0, iParam1, 1, &iVar0);
			func_880(Global_262145.f_30596);
			break;
		
		case 4:
			if (iParam0 != 0)
			{
				return;
			}
			func_876(iParam0, iParam1, Global_262145.f_30595);
			func_880(Global_262145.f_30596);
			break;
		
		case 5:
			if (iParam0 != 1)
			{
				return;
			}
			func_876(iParam0, iParam1, Global_262145.f_30595);
			func_880(Global_262145.f_30596);
			break;
		
		case 6:
			if (iParam0 != 2)
			{
				return;
			}
			func_876(iParam0, iParam1, Global_262145.f_30595);
			func_880(Global_262145.f_30596);
			break;
		
		case 7:
			if (iParam0 != 3)
			{
				return;
			}
			func_876(iParam0, iParam1, 1);
			func_880(Global_262145.f_30595);
			break;
	}
}

void func_876(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= iParam2)
	{
		func_877(iParam0, 0);
	}
}

void func_877(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		func_500(9886, unk_0x666C16A4ED8F3098(), -1, 1, 0);
	}
	iVar0 = func_172(9885, -1, 0);
	func_500(9885, iVar0 + 1, -1, 1, 0);
	func_878(Global_262145.f_30594, iVar0 + 1, func_879());
}

void func_878(int iParam0, var uParam1, var uParam2)
{
	var uVar0;
	
	uVar0 = Global_262145.f_30596;
	if (iParam0 == 7)
	{
		uVar0 = Global_262145.f_30595;
	}
	unk_0x1187CB58D7F3BED7(iParam0, uParam1, uVar0, uParam2);
}

int func_879()
{
	return func_609(func_615());
}

void func_880(int iParam0)
{
	if (func_172(9885, -1, 0) >= iParam0)
	{
		func_500(9885, iParam0, -1, 1, 0);
		func_881(300, 1, -1, 1);
		Global_1703127 = 0;
	}
}

void func_881(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_882())
	{
		iVar0 = Global_2592627[iParam0 /*3*/][func_173(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x6ACB137CE7852248(iVar0, iParam1, iParam3);
		}
	}
}

int func_882()
{
	return 1;
	return 0;
}

void func_883(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_888(iParam1, iParam2, iParam3))
	{
		func_877(iParam0, 1);
		func_885(1733209241, 3, 0);
	}
	else if (*iParam3)
	{
		func_884(iParam0);
		func_885(1733209241, 3, 0);
	}
}

void func_884(var uParam0)
{
	func_500(9885, 0, -1, 1, 0);
}

void func_885(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_887(iParam1, iParam2))
	{
		iVar0 = func_886();
		Global_2463392[iVar0] = iParam1;
		Global_2463403[iVar0] = iParam0;
	}
}

int func_886()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2463392[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_887(int iParam0, var uParam1)
{
	if (Global_1312890)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312902) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_888(int iParam0, int iParam1, var uParam2)
{
	struct<6> Var0;
	int iVar6;
	struct<6> Var7;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (iParam0 <= iParam1)
	{
		if (func_172(9885, -1, 0) == 0)
		{
			return 1;
		}
		else
		{
			unk_0xFDA02CEF7BB76C08(func_172(9886, -1, 0), &Var0);
			func_894(&iVar6, Var0.f_5, Var0.f_4, Var0.f_3, Var0.f_2, (Var0.f_1 - 1), Var0);
			unk_0xFDA02CEF7BB76C08(unk_0x666C16A4ED8F3098(), &Var7);
			func_894(&iVar13, Var7.f_5, Var7.f_4, Var7.f_3, Var7.f_2, (Var7.f_1 - 1), Var7);
			if ((func_892(iVar13) == func_892(iVar6) && func_891(iVar13) == func_891(iVar6)) && func_890(iVar13) == func_890(iVar6))
			{
				return 0;
			}
			iVar14 = func_889(func_891(iVar6), func_892(iVar6));
			iVar15 = func_890(iVar6) + 1;
			iVar16 = func_891(iVar6);
			iVar17 = func_892(iVar6);
			if (iVar15 > iVar14)
			{
				iVar15 = 1;
				iVar18 = iVar16 + 1;
				if (iVar18 > 11)
				{
					iVar18 = 0;
					iVar17++;
				}
				iVar16 = iVar18;
			}
			func_894(&iVar19, 0, 0, 0, iVar15, iVar16, iVar17);
			if ((func_892(iVar13) == func_892(iVar19) && func_891(iVar13) == func_891(iVar19)) && func_890(iVar13) == func_890(iVar19))
			{
				return 1;
			}
			else
			{
				*uParam2 = 1;
				return 0;
			}
		}
	}
	return 0;
}

int func_889(int iParam0, int iParam1)
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

int func_890(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_891(int iParam0)
{
	return iParam0 & 15;
}

int func_892(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_893(unk_0x234B68AC2E35ED5A(iParam0, 31), -1, 1)) + 2011;
}

int func_893(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_894(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_900(uParam0, iParam1);
	func_899(uParam0, iParam2);
	func_898(uParam0, iParam3);
	func_897(uParam0, iParam5);
	func_896(uParam0, iParam4);
	func_895(uParam0, iParam6);
}

void func_895(var uParam0, int iParam1)
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

void func_896(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_891(*uParam0);
	iVar1 = func_892(*uParam0);
	if (iParam1 < 1 || iParam1 > func_889(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_897(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_898(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_899(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_900(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_901(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2592627[iParam0 /*3*/][func_173(iParam1)];
	if (unk_0xEB399571DCA129A9(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_902(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_903(iParam0, func_173(iParam1));
	iVar0++;
	func_600(iParam0, iVar0, iParam1);
}

int func_903(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2594365[iParam0 /*3*/][func_173(iParam1)];
	if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_904()
{
	func_905();
}

void func_905()
{
	if (!func_909())
	{
		return;
	}
	switch (func_908())
	{
		case 0:
			if (func_907(3))
			{
				func_906(1);
			}
			break;
		
		case 1:
			break;
	}
}

void func_906(int iParam0)
{
	if (!unk_0x443E2CA72E118E64())
	{
		return;
	}
	Local_1898.f_118.f_16 = iParam0;
}

int func_907(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < unk_0x5E72DF7B8C03AA05())
	{
		iVar2 = unk_0x6750311806FF130A(iVar1);
		if (unk_0xF46EDF82CA845956(iVar2) && func_854(iVar2) != iParam0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_908()
{
	return Local_1898.f_118.f_16;
}

int func_909()
{
	switch (func_861())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

void func_910()
{
	func_648();
	func_711();
	func_983();
	func_973();
	func_971();
	func_969();
	func_967();
	func_966();
	func_964();
	func_920();
	func_917();
	func_914();
	func_912();
	func_911();
}

void func_911()
{
	if (func_861() == 1)
	{
		func_694(&(Local_1898.f_118.f_9), 30000);
	}
}

void func_912()
{
	if (!func_913())
	{
		return;
	}
	func_701();
}

int func_913()
{
	switch (func_855())
	{
		case 4:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_914()
{
	if (!func_916())
	{
		return;
	}
	if ((unk_0x8954E9D0A9F6F8CF(iLocal_1839, 889.3009f, -1544.985f, 28.41317f, 931.3111f, -1544.886f, 50.98301f, 75f, 0, 1, 0) || unk_0x8954E9D0A9F6F8CF(iLocal_1839, 862.1058f, -1571.659f, 28.55759f, 890.2502f, -1571.614f, 49.84278f, 20f, 0, 1, 0)) || unk_0x8954E9D0A9F6F8CF(iLocal_1839, 910.5573f, -1585.089f, 28.42145f, 931.3018f, -1584.581f, 49.28521f, 5f, 0, 1, 0))
	{
		func_915(1);
	}
	else
	{
		func_915(0);
	}
}

void func_915(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!func_14(7))
		{
			unk_0xF5AFB6AFBDD3C8FD(1);
			iVar0 = unk_0x8BE006E7CB1FC3F6();
			if (iVar0 != -1)
			{
				unk_0xEA4481256DA774DF(960.7706f, -1569.272f, 29.68589f, 941.351f, -1582.071f, 29.2727f, iVar0);
				Local_223.f_52 = iVar0;
			}
			func_497(7);
		}
	}
	else if (func_14(7))
	{
		unk_0xF5AFB6AFBDD3C8FD(0);
		if (Local_223.f_52 != -1)
		{
			unk_0x58222F98EDED588B(Local_223.f_52);
			Local_223.f_52 = -1;
		}
		func_496(7);
	}
}

int func_916()
{
	switch (func_855())
	{
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_917()
{
	if (!func_919())
	{
		return;
	}
	if (func_646())
	{
		func_628(func_918());
	}
}

int func_918()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if ((iVar2 != iLocal_1838 && func_644(iVar2)) && func_864(iVar2))
		{
			unk_0x191DDA30577F440A(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_919()
{
	if (func_12() != iLocal_1838)
	{
		return 0;
	}
	switch (func_855())
	{
		case 0:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_920()
{
	if (!func_963())
	{
		if (func_962() != 0)
		{
			func_960();
		}
		return;
	}
	if (func_959())
	{
		func_958();
	}
	func_937(0);
	switch (func_962())
	{
		case 0:
			if (func_936())
			{
				func_18(&(Local_223.f_43), 0, 0);
				func_935(1);
			}
			else if (func_934())
			{
				func_922();
				func_935(2);
			}
			break;
		
		case 1:
			if (func_936())
			{
				if ((func_921() - 1000) > 1500)
				{
					func_478(46);
					func_937(1);
					func_935(3);
				}
			}
			else if (func_934())
			{
				func_922();
				func_935(2);
			}
			else
			{
				func_960();
			}
			break;
		
		case 2:
			if (func_17(&(Local_223.f_43), 1500, 0))
			{
				func_681(250);
				func_478(46);
				func_937(1);
				func_935(3);
			}
			break;
		
		case 3:
			if (!func_1124(46))
			{
				func_960();
			}
			break;
	}
}

int func_921()
{
	if (func_19(&(Local_223.f_43)))
	{
		return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_223.f_43);
	}
	return 0;
}

void func_922()
{
	unk_0x9673FB069F90F6B9("MP_race_crash", 0, 0);
	unk_0x03903A362E41A74F(iLocal_1838, 1);
	unk_0x451AB475C3CD97F2(iLocal_1839, 1750, 1750, 0, 0, 0, 1);
	func_923(1, 0, 0);
	unk_0x9B0169E27978C1A2(-1, "Hit", "RESPAWN_ONLINE_SOUNDSET", 1);
	func_22(&(Local_223.f_43), 0, 0);
	func_497(5);
}

void func_923(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_924(iLocal_1838, 0, iParam1, iParam2);
		func_478(26);
	}
	else
	{
		func_924(iLocal_1838, 1, iParam1, iParam2);
		func_665(26);
	}
}

void func_924(int iParam0, bool bParam1, var uParam2, int iParam3)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	var uVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0xFDC069EFB77AEBE9())
		{
			unk_0xA82C5CF50055A1B4(0);
		}
	}
	if (func_933())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x02BFF15CAA701972())
	{
		uVar0 = uParam2;
		unk_0xF99B8860747709DD(iParam0, bParam1, uVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = uParam2 & 2 != false;
		bVar3 = uParam2 & 4 != false;
		bVar4 = uParam2 & 8 != false;
		bVar5 = uParam2 & 16 != false;
		bVar6 = uParam2 & 32 != false;
		bVar7 = uParam2 & 64 != false;
		bVar8 = uParam2 & 128 != false;
		bVar9 = uParam2 & 256 != false;
		bVar10 = uParam2 & 512 != false;
		bVar11 = uParam2 & 1024 != false;
		bVar12 = uParam2 & 2048 != false;
		bVar13 = uParam2 & 4096 != false;
		bVar14 = uParam2 & 8192 != false;
		bVar15 = uParam2 & 16384 != false;
		bVar16 = uParam2 & 32768 != false;
		bVar17 = uParam2 & 65536 != false;
		bVar18 = uParam2 & 131072 != false;
		bVar19 = uParam2 & 262144 != false;
		bVar20 = uParam2 & 524288 != false;
		bVar21 = uParam2 & 1048576 != false;
		bVar22 = uParam2 & 2097152 != false;
		bVar23 = uParam2 & 4194304 != false;
		bVar24 = uParam2 & 8388608 != false;
		bVar25 = uParam2 & 16777216 != false;
		if (uParam2 & 33554432 != 0 || unk_0xE45310E861787FC2())
		{
			bVar1 = false;
		}
		if (!func_931())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x8CFC2F41A749E236(iParam0) && (unk_0xCAD1755E530A6012(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xE50EB54E0F21BED0(unk_0xD56332194D622ECE(iParam0), 0))
			{
				return;
			}
			uVar27 = unk_0xD56332194D622ECE(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x02BFF15CAA701972())
				{
					unk_0x387A0B2797EBDE5F(1);
				}
				else if (bVar14 || (!func_72(unk_0x1146A9AE09CE2B14(), 0) && !func_300()))
				{
					unk_0x4603196EEEA2355C(uVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x02BFF15CAA701972() && !bVar19)
					{
						unk_0x387A0B2797EBDE5F(0);
					}
					Global_2426865[iParam0 /*449*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_928(0, 0, 0);
					if (bVar25)
					{
						unk_0x961F6202C2192265();
					}
				}
				if (!func_927(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, true, 0);
					}
				}
				if (!unk_0x5976053523EA16C8(iVar27))
				{
					if (!bVar21)
					{
						unk_0xA2C015B68CE01357(iVar27, false);
					}
					unk_0x8B58E7AC53EED9F1(iVar27, true);
				}
				else if (!bVar21)
				{
					unk_0xA2C015B68CE01357(iVar27, false);
				}
				unk_0x1D7A4E9E23D306D6(iVar27, true);
				unk_0x03903A362E41A74F(iParam0, 0);
				unk_0x480217AACC9C34FB(iParam0, 0);
				if (unk_0x313CC23B5525839F(iVar27) && unk_0x9038A2103B9BFD38(iVar27))
				{
					unk_0x9C4430B10B361917(iVar27);
				}
				unk_0xF5143FB7B9EC876D(iVar27, 1);
				if (unk_0xDF02DA324F934755(unk_0x1146A9AE09CE2B14()) == 0)
				{
					func_926();
					func_676();
				}
				if (unk_0x7A4185C9A76C12B2())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xCE84F8AB9BD41C13())
				{
				}
				Global_2426865[iParam0 /*449*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405077.f_2679)
				{
					Global_2405077.f_2679 = 0;
				}
			}
			else
			{
				if (!func_927(iVar27) && !unk_0x0D5E478A215B3F4A(iVar27))
				{
					if (!bVar22)
					{
						unk_0x3CBE9F07524C242D(iVar27, !bVar15, 0);
					}
					if (!unk_0x5976053523EA16C8(iVar27))
					{
						if (!bVar21)
						{
							unk_0xA2C015B68CE01357(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x8B58E7AC53EED9F1(iVar27, true);
						}
					}
					if (func_925(Global_4456448.f_133963))
					{
						unk_0xA2C015B68CE01357(iVar27, true);
					}
				}
				if (Global_1312878)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0x03903A362E41A74F(iParam0, 0);
				}
				else
				{
					unk_0x03903A362E41A74F(iParam0, 1);
				}
				unk_0x1D7A4E9E23D306D6(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x02E166B5C96465D2(iVar27) && !unk_0xC49311A2A500FF09(iVar27, 0))
					{
						unk_0x16D66F11FE644901(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xF99B8860747709DD(iParam0, bParam1, iVar28);
		}
	}
}

bool func_925(int iParam0)
{
	return iParam0 == 17;
}

void func_926()
{
	Global_2405077.f_701 = 0;
	Global_2405077.f_2733 = 0;
	Global_2405077.f_514 = 0;
	Global_2405077.f_605 = 0;
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
	Global_2405077.f_2688 = 0;
}

int func_927(int iParam0)
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x4E8DA737B686529A(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_928(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0x72D30262CF8C8603(iParam1))
			{
				if (!unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), unk_0xCB567ED25393C1DF(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_930();
			}
			else if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 1))
			{
				if (unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0xA01D7927903507FB(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0x191DDA30577F440A(&(Global_2359302.f_67), 1);
			}
		}
		if (func_72(unk_0x1146A9AE09CE2B14(), 0))
		{
			unk_0xEC42452B73B6CCCE(iParam0, iParam1, 1);
		}
		else
		{
			unk_0x8779A14B5EC7A124(iParam0, iParam1);
		}
		unk_0xC862BFF2021CFFD7(iParam0, iParam1);
		func_929(joaat("mpply_is_char_spectating"), iParam0);
	}
}

void func_929(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6ACB137CE7852248(iVar0, iParam1, 1);
	}
}

void func_930()
{
	int iVar0;
	
	if (!unk_0xDD14CDB3B8003696())
	{
		if (!unk_0x234B68AC2E35ED5A(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0x5F95E51ABC3FC59A(iVar0);
				iVar0++;
			}
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 2);
			unk_0x191DDA30577F440A(&(Global_2359302.f_67), 0);
		}
	}
}

int func_931()
{
	if (func_932() == 0)
	{
		return 1;
	}
	return 0;
}

int func_932()
{
	return Global_1312485.f_18;
}

int func_933()
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2) && !Global_2453903.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

bool func_934()
{
	return (iLocal_1846 == 0 || !unk_0xBFCE58B2B3249999(iLocal_1845, 0));
}

void func_935(int iParam0)
{
	Local_223.f_42 = iParam0;
}

int func_936()
{
	if (!unk_0x5C6675393464A814(0, 75) && !unk_0x51794501073F0A33(0, 75))
	{
		return 0;
	}
	if (unk_0xA300BD5F71A8C704())
	{
		return 0;
	}
	if (iLocal_1846 == 0)
	{
		return 0;
	}
	if (!unk_0xBFCE58B2B3249999(iLocal_1845, 0))
	{
		return 0;
	}
	return 1;
}

void func_937(int iParam0)
{
	if ((unk_0xDFB7BFA6482FEE1E() - Local_223.f_51) > 5000 || iParam0)
	{
		func_951(func_955(), 0f, 1120403456, 1, 0, 0, 1, 0f, 1, 0, 0, 1, -1082130432);
		func_949(func_950());
		func_940(10, 0, 0, 0, 0);
		func_939(func_950(), 1, 0);
		Global_2405077.f_45.f_173 = func_938();
		Local_223.f_51 = unk_0xDFB7BFA6482FEE1E();
	}
}

int func_938()
{
	if (unk_0x15173FB88ABC94F9(unk_0x471C98FD94C0A5FD()) == func_706())
	{
		if (unk_0xB7D6400C89373777(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_38) && unk_0x159BC3DDA80D71AC(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_38))
		{
			return unk_0x854C404AEB476240(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_38);
		}
	}
	return Global_2544210.f_298;
}

void func_939(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405077.f_45.f_49 = { Param0 };
	Global_2405077.f_45.f_52 = iParam3;
	Global_2405077.f_45.f_53 = iParam4;
}

void func_940(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2441237.f_2012.f_703.f_16 != func_51())
	{
		if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_2441237.f_2012.f_703.f_16 /*449*/].f_417, 0) && func_941())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412723 = 0;
	}
	Global_2405077.f_489 = iParam0;
	Global_2405077.f_489.f_1 = unk_0x62D18D65FE22FF39();
	Global_2405077.f_489.f_2 = iParam1;
	Global_2405077.f_489.f_3 = iParam2;
	Global_2405077.f_489.f_4 = iParam3;
	Global_2405077.f_489.f_5 = iParam4;
}

int func_941()
{
	if ((((((func_194(unk_0x1146A9AE09CE2B14()) == 229 || func_194(unk_0x1146A9AE09CE2B14()) == 191) || func_948()) || func_947()) || func_946(unk_0x1146A9AE09CE2B14())) || Global_2518927.f_227 == 1) || (Global_2405077.f_1752 && func_942(unk_0x1146A9AE09CE2B14())))
	{
		return 0;
	}
	return 1;
}

int func_942(int iParam0)
{
	if (func_945(iParam0))
	{
		return 1;
	}
	if (func_943(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_943(int iParam0)
{
	return func_944(iParam0, 20);
}

bool func_944(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_4, iParam1);
}

int func_945(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 7);
	}
	return 0;
}

int func_946(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!unk_0x02BFF15CAA701972())
	{
		return 0;
	}
	if (iParam0 == unk_0x1146A9AE09CE2B14())
	{
		return Global_2518926;
	}
	else
	{
		uVar0 = unk_0xD56332194D622ECE(iParam0);
		if (unk_0x419E13582192CFEA(uVar0))
		{
			iVar1 = unk_0x6471F4759775FCA4(iVar0);
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

var func_947()
{
	return Global_1574420;
}

int func_948()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_949(struct<3> Param0)
{
	if (unk_0x4BE697D014536271(Global_2413982.f_6))
	{
		if (!Global_2413982.f_6 == unk_0x62D18D65FE22FF39())
		{
			return;
		}
	}
	Global_2413982.f_18 = { Param0 };
}

Vector3 func_950()
{
	struct<3> Var0;
	
	Var0 = { Local_284.f_98.f_1[Local_2125[iLocal_1840 /*38*/].f_35 /*18*/] };
	return Var0;
}

void func_951(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x4BE697D014536271(Global_2413982.f_6))
	{
		if (!Global_2413982.f_6 == unk_0x62D18D65FE22FF39())
		{
			return;
		}
	}
	if (SYSTEM::VMAG(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x4BE697D014536271(Global_2413982.f_6))
	{
		Global_2413982.f_6 = unk_0x62D18D65FE22FF39();
	}
	Var0.f_6 = Global_2413982.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam3;
	Var0.f_4 = iParam4;
	Var0.f_7 = iParam5;
	Var0.f_3 = iParam6;
	Var0.f_8 = iParam8;
	Var0.f_9 = iParam7;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam9;
	Var0.f_22 = iParam10;
	if (func_952(unk_0x1146A9AE09CE2B14()))
	{
		if (iParam13 || iParam7)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam11;
	Var0.f_26 = iParam12;
	Var0.f_27 = iParam14;
	Global_2413982 = { Var0 };
}

int func_952(int iParam0)
{
	if (((func_379(iParam0, 1) || func_954(iParam0)) || func_193(iParam0, 0)) || func_953(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_953(int iParam0)
{
	if (!func_11(iParam0, 0, 1))
	{
		return 0;
	}
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_873, 2);
}

int func_954(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630816[iVar0 /*597*/] != -1;
	}
	return 0;
}

Vector3 func_955()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { Local_223.f_58 - Local_223.f_55 };
	Var3 = { Local_1842 - Local_223.f_58 };
	if (func_312(Var0, Var3) > 0f)
	{
		fVar6 = SYSTEM::POW(50f, 2f);
		return func_956(Local_223.f_55, Local_223.f_58, (func_957(SYSTEM::VDIST2(Local_1842, Local_223.f_58), 0f, fVar6) / fVar6));
	}
	return Local_223.f_55;
}

Vector3 func_956(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

float func_957(float fParam0, float fParam1, float fParam2)
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

void func_958()
{
	if (SYSTEM::VDIST2(Local_1842, Local_223.f_58) > SYSTEM::POW(50f, 2f))
	{
		Local_223.f_55 = { Local_223.f_58 };
		Local_223.f_58 = { Local_1842 };
	}
}

int func_959()
{
	switch (func_962())
	{
		case 0:
		case 1:
			return 1;
		
		default:
	}
	return 0;
}

void func_960()
{
	func_629(&(Local_223.f_43));
	if (func_14(5))
	{
		func_961();
	}
	func_935(0);
}

void func_961()
{
	unk_0xBAF2F13FE4D19AA9("MP_race_crash");
	unk_0x03903A362E41A74F(iLocal_1838, 0);
	func_923(0, 0, 0);
	func_496(5);
}

int func_962()
{
	return Local_223.f_42;
}

int func_963()
{
	if (func_672(unk_0x1146A9AE09CE2B14(), 0, 0) || !func_11(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		return 0;
	}
	switch (func_855())
	{
		case 5:
			return bLocal_1834;
		
		default:
	}
	return 0;
}

void func_964()
{
	int iVar0;
	int iVar1;
	
	if (!func_965())
	{
		return;
	}
	Local_223.f_18 = 0;
	iVar0 = (unk_0x5E72DF7B8C03AA05() - 1);
	while (iVar0 >= 0)
	{
		iVar1 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar1))
		{
			Local_223.f_18.f_1[Local_223.f_18 /*3*/] = unk_0x539ED6DF32477DE0(iVar1);
			Local_223.f_18.f_1[Local_223.f_18 /*3*/].f_1 = Local_2125[iVar0 /*38*/].f_35;
			Local_223.f_18.f_1[Local_223.f_18 /*3*/].f_2 = SYSTEM::VDIST2(func_76(Local_223.f_18.f_1[Local_223.f_18 /*3*/]), Local_284.f_98.f_1[Local_2125[iVar0 /*38*/].f_35 /*18*/]);
			Local_223.f_18++;
			if (Local_223.f_18 == Local_223.f_18.f_1)
			{
			}
			else
			{
				iVar0 = (iVar0 + -1);
			}
		}

int func_965()
{
	switch (func_855())
	{
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_966()
{
	unk_0x366E7F593105797F(0, 25, 1);
	unk_0x366E7F593105797F(0, 24, 1);
	unk_0x366E7F593105797F(0, 257, 1);
	unk_0x366E7F593105797F(0, 44, 1);
	unk_0x366E7F593105797F(0, 47, 1);
	unk_0x366E7F593105797F(0, 142, 1);
	unk_0x366E7F593105797F(0, 141, 1);
	unk_0x366E7F593105797F(0, 140, 1);
	unk_0x366E7F593105797F(0, 263, 1);
	unk_0x366E7F593105797F(0, 264, 1);
	unk_0x366E7F593105797F(0, 143, 1);
	unk_0x366E7F593105797F(0, 37, 1);
	unk_0x366E7F593105797F(0, 162, 1);
	unk_0x366E7F593105797F(0, 159, 1);
	unk_0x366E7F593105797F(0, 164, 1);
	unk_0x366E7F593105797F(0, 158, 1);
	unk_0x366E7F593105797F(0, 160, 1);
	unk_0x366E7F593105797F(0, 161, 1);
	unk_0x366E7F593105797F(0, 163, 1);
	unk_0x366E7F593105797F(0, 165, 1);
	unk_0x366E7F593105797F(0, 157, 1);
	unk_0x366E7F593105797F(0, 68, 1);
	unk_0x366E7F593105797F(0, 69, 1);
	unk_0x366E7F593105797F(0, 70, 1);
	unk_0x366E7F593105797F(0, 354, 1);
	unk_0x366E7F593105797F(0, 350, 1);
	unk_0x366E7F593105797F(0, 114, 1);
	unk_0x366E7F593105797F(0, 352, 1);
	unk_0x366E7F593105797F(0, 115, 1);
	unk_0x366E7F593105797F(0, 116, 1);
	unk_0x366E7F593105797F(0, 285, 1);
	unk_0x366E7F593105797F(0, 282, 1);
	unk_0x366E7F593105797F(0, 283, 1);
	unk_0x366E7F593105797F(0, 284, 1);
	unk_0x366E7F593105797F(0, 337, 1);
	unk_0x366E7F593105797F(0, 102, 1);
	unk_0x366E7F593105797F(0, 345, 1);
	unk_0x366E7F593105797F(0, 346, 1);
	unk_0x366E7F593105797F(0, 347, 1);
	unk_0x366E7F593105797F(0, 353, 1);
	unk_0x366E7F593105797F(0, 91, 1);
	unk_0x366E7F593105797F(0, 92, 1);
	unk_0x366E7F593105797F(0, 351, 1);
	unk_0x366E7F593105797F(0, 101, 1);
	unk_0x366E7F593105797F(0, 99, 1);
	unk_0x366E7F593105797F(0, 100, 1);
	unk_0x366E7F593105797F(0, 357, 1);
	unk_0x366E7F593105797F(0, 53, 1);
	unk_0x366E7F593105797F(0, 54, 1);
}

void func_967()
{
	if (!func_968())
	{
		return;
	}
	if (iLocal_1846 != 0)
	{
		unk_0x366E7F593105797F(0, 75, 1);
	}
}

int func_968()
{
	switch (func_855())
	{
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_969()
{
	if (!func_970())
	{
		return;
	}
	func_691();
	unk_0xAF98B1BA240CE3DB();
	func_684(0);
}

int func_970()
{
	switch (func_855())
	{
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

void func_971()
{
	if (!func_972())
	{
		return;
	}
	func_682();
}

int func_972()
{
	switch (func_855())
	{
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

void func_973()
{
	if (!func_982())
	{
		return;
	}
	if (func_974())
	{
		func_655(23);
	}
}

int func_974()
{
	if (!func_19(&(Local_223.f_12.f_2)))
	{
		func_664(250);
		func_981();
		func_22(&(Local_223.f_12.f_2), 0, 0);
	}
	else
	{
		if (!func_14(3) && unk_0xE0A6F16F546C8274())
		{
			func_748(86, func_980(), func_979(), 1, 8000, 2, 1, 128);
			func_497(3);
		}
		if (func_17(&(Local_223.f_12.f_2), 6000, 0) && func_975())
		{
			return 1;
		}
	}
	return 0;
}

int func_975()
{
	if (!func_19(&(Local_223.f_12.f_4)))
	{
		func_977();
		func_976();
		func_22(&(Local_223.f_12.f_4), 0, 0);
	}
	else if (!unk_0x257CAD90873BF327(Local_223.f_12.f_1) || func_17(&(Local_223.f_12.f_4), 6000, 0))
	{
		unk_0x09F9466B03D29D2D(0, 0, 3000, 1, 0, 0);
		return 1;
	}
	return 0;
}

void func_976()
{
	unk_0x32279DAB93C9A9FA(Local_223.f_12.f_1, Local_223.f_12, 5000, 0, 1);
	unk_0x9C9EC7CC88D050FA(Local_223.f_12, "HAND_SHAKE", 0.3f);
}

void func_977()
{
	unk_0xFE1DEC9C5734D0C0(Local_223.f_12, 0);
	unk_0xFE1DEC9C5734D0C0(Local_223.f_12.f_1, 0);
	Local_223.f_12 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 1);
	unk_0x7508AE96782B0441(Local_223.f_12, unk_0x9E695CE384C77EF0(iLocal_1845, -1.6f, -1.5f, func_978()));
	unk_0x5C062C9AFC66C513(Local_223.f_12, iLocal_1845, 0f, 0f, 0f, 1);
	unk_0xEF20E9A7B745D17A(Local_223.f_12, unk_0xF66C9C93DD6D9095());
	Local_223.f_12.f_1 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x7508AE96782B0441(Local_223.f_12.f_1, unk_0xEE77BC5A16EEF2B4());
	unk_0xBD833AA6EB59C81B(Local_223.f_12.f_1, unk_0x25D8B90D7AB16D2F(2), 2);
	unk_0xEF20E9A7B745D17A(Local_223.f_12.f_1, unk_0xF66C9C93DD6D9095());
	unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
}

float func_978()
{
	float fVar0;
	var uVar1;
	struct<3> Var4;
	
	if (iLocal_1846 != 0)
	{
		func_268(iLocal_1846, &uVar1, &Var4, 1086324736, 1080033280, 1077936128);
		fVar0 = Var4.f_2;
	}
	else
	{
		fVar0 = 0.5f;
	}
	return fVar0;
}

char* func_979()
{
	switch (func_15())
	{
		case 0:
			return "TSA_STSTART_TT";
		
		case 1:
			return "TSA_STSTART_CD";
		
		case 2:
			return "TSA_STSTART_HH";
		
		case 3:
			switch (func_680())
			{
				case 4:
					return "TSA_START_SR_0";
				
				case 5:
					return "TSA_START_SR_1";
				
				case 6:
					return "TSA_START_SR_2";
				
				case 7:
					return "TSA_START_SR_3";
				
				case 8:
					return "TSA_START_SR_4";
				
				case 9:
					return "TSA_START_SR_5";
				
				case 10:
					return "TSA_START_SR_6";
				
				default:
			}
			break;
	}
	return "";
}

char* func_980()
{
	switch (func_15())
	{
		case 3:
			return "TSA_START_SR_T";
		
		default:
	}
	return "TSA_STSTART_T";
}

void func_981()
{
	unk_0x32279DAB93C9A9FA(Local_223.f_12.f_1, Local_223.f_12, 6000, 3, 1);
	unk_0x9C9EC7CC88D050FA(Local_223.f_12, "HAND_SHAKE", 0.3f);
	unk_0x9C9EC7CC88D050FA(Local_223.f_12.f_1, "HAND_SHAKE", 0.3f);
}

int func_982()
{
	switch (func_855())
	{
		case 3:
			return !func_393(iLocal_1841, 23);
		
		default:
	}
	return 0;
}

void func_983()
{
	if (!func_997())
	{
		return;
	}
	switch (func_854(iLocal_1841))
	{
		case 0:
			func_996();
			func_497(1);
			func_995(1);
			break;
		
		case 1:
			if (func_994())
			{
				func_993();
				func_496(1);
				func_478(26);
				func_478(40);
				func_987(1);
				unk_0x78CDDD1E6367978D(iLocal_1845, func_870(iLocal_1840), 0, 0, 0, 1);
				unk_0xCD37A28258D70638(iLocal_1845, func_871());
				unk_0xA2C015B68CE01357(iLocal_1845, false);
				unk_0xB034D63F2AC698FB(0, 0, 1065353216);
				func_985();
				func_984(Local_1842);
				func_995(2);
			}
			break;
		
		case 2:
			if (func_17(&(Local_223.f_10), 8000, 0))
			{
				unk_0x47D0DDD8833C5E5F(iLocal_1845, 1084227584);
				func_995(3);
			}
			break;
		
		case 3:
			break;
	}
}

void func_984(struct<3> Param0)
{
	Local_223.f_55 = { Param0 };
	Local_223.f_58 = { Param0 };
}

void func_985()
{
	int iVar0;
	
	unk_0xFE1DEC9C5734D0C0(Local_223.f_12, 0);
	unk_0xFE1DEC9C5734D0C0(Local_223.f_12.f_1, 0);
	iVar0 = unk_0xB36B8558948EA7A8(0, 3);
	Local_223.f_12 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 1);
	unk_0x612434A5544F5847(Local_223.f_12, iLocal_1839, func_986(0, iVar0, 1), 1);
	unk_0x5C062C9AFC66C513(Local_223.f_12, iLocal_1839, func_986(0, iVar0, 0), 1);
	unk_0xEF20E9A7B745D17A(Local_223.f_12, 34.9554f);
	Local_223.f_12.f_1 = unk_0xE862092047FB4664("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x612434A5544F5847(Local_223.f_12.f_1, iLocal_1839, func_986(1, iVar0, 1), 1);
	unk_0x5C062C9AFC66C513(Local_223.f_12.f_1, iLocal_1839, func_986(1, iVar0, 0), 1);
	unk_0xEF20E9A7B745D17A(Local_223.f_12.f_1, 34.9554f);
	unk_0x09F9466B03D29D2D(1, 0, 3000, 1, 0, 0);
}

Vector3 func_986(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					if (bParam2)
					{
						return 1.3015f, 5.2783f, 0.0878f;
					}
					else
					{
						return 0.5597f, 2.3777f, 0.2789f;
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return 2.7647f, 4.4739f, 0.6398f;
					}
					else
					{
						return 0.9114f, 2.115f, 0.6153f;
					}
					break;
				
				default:
					if (bParam2)
					{
						return -1.7122f, 6.1183f, 0.8633f;
					}
					else
					{
						return 1.9024f, 2.8556f, 1.2344f;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					if (bParam2)
					{
						return -0.5811f, 4.4837f, 0.7696f;
					}
					else
					{
						return 0.4665f, 1.676f, 0.6287f;
					}
					break;
				
				case 1:
					if (bParam2)
					{
						return -1.3625f, 4.5793f, 0.6336f;
					}
					else
					{
						return 0.0291f, 1.9218f, 0.6077f;
					}
					break;
				
				default:
					if (bParam2)
					{
						return 1.3784f, 6.1317f, 0.8623f;
					}
					else
					{
						return 0.0428f, 2.4647f, 0.6911f;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_987(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!func_14(2))
		{
			func_989(1, 0, 0, 0, 1, 0, -1, 0, 0, 0, 0, 1);
			unk_0x5249BC3946DCDA75(iLocal_1839, 1);
			unk_0x13812A3531901D7E(iLocal_1839, 0);
			iVar0 = func_938();
			if (unk_0x419E13582192CFEA(iVar0) && unk_0xA6BE8F025C6B653F(iVar0))
			{
				unk_0xE50EB54E0F21BED0(iVar0, 0);
				if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iVar0)))
				{
					unk_0x48B6B7B6755EF099(iVar0, 1);
				}
				if (unk_0x4083482D43DC9D81(iVar0))
				{
					unk_0x5D7982186D74515E(iVar0, 0);
				}
				unk_0x77CF3E92F49E693E(iVar0, 1);
				unk_0x32051C1124051B7B(iVar0, 0);
			}
			func_524(1);
			func_497(2);
		}
	}
	else if (func_14(2))
	{
		func_989(0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0);
		unk_0x5249BC3946DCDA75(iLocal_1839, 0);
		unk_0x13812A3531901D7E(iLocal_1839, 1);
		iVar1 = func_938();
		if (unk_0x419E13582192CFEA(iVar1) && unk_0xA6BE8F025C6B653F(iVar1))
		{
			unk_0xE50EB54E0F21BED0(iVar1, 0);
			if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iVar1)))
			{
				unk_0x48B6B7B6755EF099(iVar1, 0);
			}
			if (unk_0x4083482D43DC9D81(iVar1))
			{
				unk_0x5D7982186D74515E(iVar1, 1);
			}
			unk_0x32051C1124051B7B(iVar1, 1);
		}
		func_988(1);
		func_496(2);
	}
}

void func_988(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_2544210.f_5191.f_47), iParam0);
}

void func_989(bool bParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	int iVar0;
	bool bVar1;
	
	if (!iParam1 == 0 && !unk_0x62A5B93F8270CC83(iParam1))
	{
		iParam1 = joaat("tailgater");
	}
	Global_2405077.f_45.f_65 = bParam0;
	Global_2405077.f_45.f_67 = iParam1;
	Global_2405077.f_45.f_68 = bParam2;
	Global_2405077.f_45.f_174 = iParam3;
	Global_2405077.f_45.f_66 = iParam4;
	Global_2405077.f_45.f_176 = bParam5;
	Global_2405077.f_45.f_177 = bParam7;
	Global_2405077.f_45.f_182 = iParam6;
	Global_2405077.f_45.f_178 = iParam8;
	Global_2405077.f_45.f_179 = iParam9;
	Global_2405077.f_45.f_180 = bParam10;
	Global_2405077.f_45.f_181 = iParam11;
	if (!bParam0)
	{
		func_992();
	}
	if (bParam2)
	{
		iVar0 = func_991();
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (!unk_0xEE1D92A39CF8E1E6(iVar0))
			{
				if (unk_0x456C91FDAFEEF560(iVar0))
				{
					unk_0x4985CD0720AFD468(iVar0, 0, 1);
					bVar1 = true;
				}
			}
			if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
			{
				if (unk_0x9984C023D4E57C2E(iVar0, 1))
				{
					if (!unk_0xA6BE8F025C6B653F(iVar0))
					{
						unk_0x1AA7FA4BBD799B88(unk_0x431E33F39AEFC4C4(iVar0));
					}
				}
			}
			if (unk_0xA6BE8F025C6B653F(iVar0))
			{
				if (bVar1)
				{
					unk_0x795957CD3A0042C8(&iVar0);
				}
				if (bParam5)
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						unk_0xAC2B08493719B297(iVar0, 1);
					}
				}
				if (bParam7)
				{
					if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
					{
						unk_0xED4E91A1FC7ABBF6(iVar0, 0);
					}
				}
				if (iParam6 > -1)
				{
					unk_0xC612552622E74D36(iVar0, iParam6, iParam6);
					unk_0xA2FEFE3BBCD9FB23(iVar0, iParam6, iParam6);
				}
				if (bParam10)
				{
					func_990(iVar0);
				}
			}
		}
	}
}

void func_990(int iParam0)
{
	if (unk_0x419E13582192CFEA(iParam0) && !unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		if (unk_0xA6BE8F025C6B653F(iParam0))
		{
			if (Global_1695571 > -1)
			{
				if (unk_0x8BA4AD00568AB5FC("GBMissionFire", 3))
				{
					if (!unk_0x5B38E054B758C032(iParam0, "GBMissionFire"))
					{
						unk_0x6C9577C090944B92(iParam0, "GBMissionFire", Global_1695571);
					}
				}
			}
		}
	}
}

int func_991()
{
	return Global_2405077.f_2667;
}

void func_992()
{
	struct<103> Var0;
	
	Var0.f_9 = 49;
	Var0.f_59 = 2;
	Var0.f_78 = -1;
	Var0.f_79 = -1;
	Var0.f_96 = -1;
	Var0.f_97 = 1;
	Var0.f_99 = 132;
	Var0.f_100 = -1;
	Global_2405077.f_45.f_69 = { Var0 };
	Global_2405077.f_45.f_172 = 0;
}

void func_993()
{
	unk_0xC664C0067EEAB8D1(&(Global_1683970.f_8), 15);
	unk_0xC664C0067EEAB8D1(&(Global_1683970.f_8), 16);
}

bool func_994()
{
	return unk_0x234B68AC2E35ED5A(Global_1683970.f_8, 16);
}

void func_995(int iParam0)
{
	Local_2125[iLocal_1840 /*38*/].f_32 = iParam0;
}

void func_996()
{
	if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_319.f_6 != 153)
	{
		return;
	}
	if (func_349(unk_0x1146A9AE09CE2B14()))
	{
		return;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1683970.f_4415.f_1, 12))
	{
		return;
	}
	unk_0x191DDA30577F440A(&(Global_1683970.f_8), 15);
	unk_0xC664C0067EEAB8D1(&(Global_1683970.f_8), 16);
}

int func_997()
{
	switch (func_855())
	{
		case 2:
			return 1;
		
		default:
	}
	return 0;
}

int func_998()
{
	if ((func_713() + unk_0xAB0F784335D14AC3()) < 4)
	{
		return 1;
	}
	return 0;
}

int func_999()
{
	Local_1898.f_118.f_17 = func_716();
	func_628(func_918());
	Local_1898.f_118.f_18 = func_1000();
	return 1;
}

int func_1000()
{
	char cVar0[16];
	
	StringIntConCat(&cVar0, unk_0x666C16A4ED8F3098(), 16);
	StringConCat(&cVar0, "-", 16);
	StringIntConCat(&cVar0, iLocal_1838, 16);
	return unk_0x15173FB88ABC94F9(&cVar0);
}

int func_1001()
{
	return 1;
}

char* func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_SR_HT_INTRO";
		
		case 1:
			return "TSA_SR_HT_RSPWN";
		
		case 2:
			return "TSA_SR_HT_VHEXT";
		
		default:
	}
	return "";
}

int func_1003(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_855())
			{
				case 5:
					return func_14(4);
				
				default:
			}
			break;
		
		case 1:
			switch (func_855())
			{
				case 5:
					return func_1004(0);
				
				default:
			}
			break;
		
		case 2:
			switch (func_855())
			{
				case 5:
					if (iLocal_1846 != 0)
					{
						if (unk_0x96DF114B59E81B9C(0, 75))
						{
							func_22(&(Local_223.f_45), 0, 0);
						}
						else if ((func_19(&(Local_223.f_45)) && !func_17(&(Local_223.f_45), 250, 0)) && unk_0x6DC4D8B66C3E0EA0(0, 75))
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

bool func_1004(int iParam0)
{
	return func_1005(&uLocal_1766, iParam0);
}

bool func_1005(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return unk_0x234B68AC2E35ED5A((*uParam0)[iVar0], iVar1);
}

void func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_1007();
			break;
	}
}

void func_1007()
{
	int iVar0;
	
	iVar0 = func_172(9617, -1, 0);
	if (!unk_0x234B68AC2E35ED5A(iVar0, 16))
	{
		unk_0x191DDA30577F440A(&iVar0, 16);
	}
	else if (!unk_0x234B68AC2E35ED5A(iVar0, 17))
	{
		unk_0x191DDA30577F440A(&iVar0, 17);
	}
	else if (!unk_0x234B68AC2E35ED5A(iVar0, 18))
	{
		unk_0x191DDA30577F440A(&iVar0, 18);
	}
	func_500(9617, iVar0, -1, 1, 0);
	unk_0x191DDA30577F440A(&(Global_2453903.f_3075.f_257), 0);
}

void func_1008()
{
	unk_0x9B0169E27978C1A2(-1, "Go", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
}

void func_1009(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x9B0169E27978C1A2(-1, "321", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
	}
}

void func_1010()
{
	if (func_509())
	{
		func_507(func_168(0, 1));
	}
	if (Global_2544210.f_5191.f_763)
	{
		Global_2544210.f_5191.f_763 = 0;
	}
	func_987(0);
	func_915(0);
	func_1028();
	func_1011();
	func_960();
}

void func_1011()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_24), &Global_2409343, 2);
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_26), &Global_2409345, 19);
	func_1026();
	func_1014(1, 1, 0);
	func_1012();
}

void func_1012()
{
	func_1013(0, 0);
}

void func_1013(int iParam0, int iParam1)
{
	Global_2405077.f_22 = iParam0;
	Global_2405077.f_23 = iParam1;
}

void func_1014(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_45), &Global_2409364, 322);
	}
	else
	{
		Global_2405077.f_45 = { Global_2409364 };
		Global_2405077.f_45.f_49 = { Global_2409364.f_49 };
		Global_2405077.f_45.f_52 = Global_2409364.f_52;
		Global_2405077.f_45.f_53 = Global_2409364.f_53;
	}
	if (bParam0)
	{
		func_1025();
	}
	if (!bParam2)
	{
		func_1017(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_1016(0);
	func_1015();
}

void func_1015()
{
	struct<6> Var0;
	
	if (Global_2405077.f_489.f_1 == unk_0x62D18D65FE22FF39())
	{
		Global_2405077.f_489 = { Var0 };
	}
}

void func_1016(bool bParam0)
{
	if (bParam0)
	{
		Global_2405077.f_712 = 0;
	}
	else
	{
		Global_2405077.f_712 = 1;
	}
}

void func_1017(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_1024())
		{
			func_1023();
		}
		Global_2405077.f_713.f_518 = unk_0x62D18D65FE22FF39();
		Global_2405077.f_713.f_504 = iParam1;
		Global_2405077.f_713.f_505 = iParam2;
		Global_2405077.f_713.f_506 = iParam10;
		func_1021();
		func_940(8, 0, 0, 0, 0);
		Global_2405077.f_713.f_507 = iParam11;
		Global_2405077.f_713.f_512 = iParam3;
		Global_2405077.f_713.f_513 = iParam4;
		Global_2405077.f_713.f_510 = iParam5;
		Global_2405077.f_713.f_511 = iParam6;
		Global_2405077.f_713.f_514 = iParam7;
		Global_2405077.f_713.f_515 = iParam8;
		Global_2405077.f_713.f_516 = iParam9;
		Global_2405077.f_713.f_517 = iParam14;
		Global_2405077.f_713.f_508 = iParam12;
		Global_2405077.f_713.f_509 = iParam13;
		Global_2405077.f_1752 = 1;
	}
	else
	{
		func_1018();
	}
}

void func_1018()
{
	if (func_1024() && !func_1020())
	{
		func_1023();
	}
	if (func_1020())
	{
		func_1019();
	}
	else
	{
		func_1021();
		func_940(0, 0, 0, 0, 0);
		Global_2405077.f_1752 = 0;
		Global_2405077.f_1751 = 0;
	}
}

void func_1019()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_713), &(Global_2405077.f_1232), 519);
	Global_2405077.f_489 = { Global_2405077.f_495 };
	if (unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		Global_2405077.f_1751 = 0;
	}
}

int func_1020()
{
	if ((Global_2405077.f_1751 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_1232.f_518) && unk_0x4BE697D014536271(Global_2405077.f_1232.f_518))
	{
		return 1;
	}
	return 0;
}

void func_1021()
{
	if (func_1024() && !func_1020())
	{
		func_1023();
	}
	func_1022();
	Global_2405077.f_713 = 0;
}

void func_1022()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405077.f_713.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_1023()
{
	if (func_1020())
	{
		if (Global_2405077.f_713.f_518 == Global_2405077.f_1232.f_518)
		{
			return;
		}
	}
	if (!unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518)
	{
		unk_0x26E4F443B23A3AEB(&(Global_2405077.f_1232), &(Global_2405077.f_713), 519);
		Global_2405077.f_495 = { Global_2405077.f_489 };
		Global_2405077.f_1751 = 1;
	}
}

int func_1024()
{
	if ((Global_2405077.f_1752 && !unk_0x62D18D65FE22FF39() == Global_2405077.f_713.f_518) && unk_0x4BE697D014536271(Global_2405077.f_713.f_518))
	{
		return 1;
	}
	return 0;
}

void func_1025()
{
	unk_0x26E4F443B23A3AEB(&(Global_2405077.f_367), &Global_2409686, 121);
}

void func_1026()
{
	func_1027();
}

void func_1027()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405077.f_2262[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405077.f_2261 = 0;
}

void func_1028()
{
	struct<28> Var0;
	
	if (unk_0x4BE697D014536271(Global_2413982.f_6))
	{
		if (!Global_2413982.f_6 == unk_0x62D18D65FE22FF39())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413982 = { Var0 };
	Global_2413982.f_6 = -1;
}

void func_1029(int iParam0)
{
	if (bLocal_1836 && unk_0xF46EDF82CA845956(iParam0))
	{
		Local_1898.f_118.f_17 = iParam0;
	}
	func_497(0);
}

void func_1030(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9B0169E27978C1A2(-1, "Checkpoint", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
			break;
		
		case 1:
			unk_0x9B0169E27978C1A2(-1, "Checkpoint_Finish", "Car_Club_Races_Sprint_Challenge_Sounds", 1);
			break;
	}
}

int func_1031()
{
	return 1;
}

int func_1032()
{
	if (func_1033() == 45 && !func_14(0))
	{
		return 1;
	}
	return 0;
}

int func_1033()
{
	if (func_698() != -1)
	{
		return Local_1469[func_698() /*21*/];
	}
	return -1;
}

int func_1034(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xAB0F784335D14AC3();
		
		case 1:
			return func_727(0, (30000 - func_728(&(Local_1898.f_118.f_9), 0, 0)));
		
		case 2:
			return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_223.f_9);
		
		case 3:
			return (func_921() - 1000);
		
		default:
	}
	return 0;
}

void func_1035(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_394.f_1);
			func_722(StackVal, Local_284.f_507[iParam0 /*6*/].f_1, 0, 0, -1, 0, Local_284.f_507[iParam0 /*6*/].f_3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			func_1036();
			Stack.Push(iParam0);
			Call_Loc(Local_834.f_394.f_1);
			func_722(StackVal, "TSA_TIME", 0, 1, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_826();
			break;
	}
}

void func_1036()
{
	int iVar0;
	
	if (Local_223.f_18 == 0)
	{
		return;
	}
	func_1046(&(Local_223.f_4), -1, -1);
	func_1044(&(Local_223.f_4), Local_223.f_18, 0);
	func_1041(&(Local_223.f_4), 0, (Local_223.f_18 - 1), 221491);
	iVar0 = 0;
	while (iVar0 < Local_223.f_18)
	{
		func_1037(unk_0xF04DBC0AC5A2AB23(Local_223.f_18.f_1[Local_223.f_4[iVar0] /*3*/]), func_1040(iVar0), 1, 0, func_1039(iVar0), func_1038(iVar0), func_828(), 0);
		iVar0++;
	}
}

void func_1037(char* sParam0, char* sParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_724(13, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1380638.f_1 = 1;
		func_723(13, iVar0);
		StringCopy(&(Global_1380638.f_6348[iVar0 /*16*/]), sParam0, 64);
		StringCopy(&(Global_1380638.f_6348.f_161[iVar0 /*16*/]), sParam1, 64);
		Global_1380638.f_6348.f_322[iVar0] = iParam2;
		Global_1380638.f_6348.f_333[iVar0] = iParam3;
		Global_1380638.f_6348.f_344[iVar0] = uParam4;
		Global_1380638.f_6348.f_355[iVar0] = uParam5;
		Global_1380638.f_6348.f_366[iVar0] = uParam6;
		Global_1380638.f_6348.f_377[iVar0] = iParam7;
	}
}

int func_1038(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 109;
		
		case 1:
			return 108;
		
		case 2:
			return 107;
		
		default:
	}
	return 1;
}

int func_1039(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 6;
		
		case 2:
			return 5;
		
		default:
	}
	return 4;
}

char* func_1040(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_FIRST";
		
		case 1:
			return "TSA_SECOND";
		
		case 2:
			return "TSA_THIRD";
		
		default:
	}
	return "TSA_FOURTH";
}

void func_1041(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam1 < iParam2)
	{
		iVar0 = func_1042(uParam0, iParam1, iParam2, iParam3);
		func_1041(uParam0, iParam1, (iVar0 - 1), iParam3);
		func_1041(uParam0, iVar0 + 1, iParam2, iParam3);
	}
}

var func_1042(var uParam0, int iParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uVar0 = (*uParam0)[iParam2];
	iVar1 = (iParam1 - 1);
	iVar3 = iParam1;
	while (iVar3 <= (iParam2 - 1))
	{
		Stack.Push((*uParam0)[iVar3]);
		Stack.Push(uVar0);
		Call_Loc(uParam3);
		iVar2 = StackVal;
		if (!iVar2 > 0)
		{
			iVar1++;
			func_31(uParam0[iVar1], uParam0[iVar3]);
		}
		iVar3++;
	}
	func_31(uParam0[iVar1 + 1], uParam0[iParam2]);
	return iVar1 + 1;
}

int func_1043(int iParam0, int iParam1)
{
	if (Local_223.f_18.f_1[iParam0 /*3*/].f_1 > Local_223.f_18.f_1[iParam1 /*3*/].f_1)
	{
		return -1;
	}
	if (Local_223.f_18.f_1[iParam0 /*3*/].f_1 < Local_223.f_18.f_1[iParam1 /*3*/].f_1)
	{
		return 1;
	}
	if (Local_223.f_18.f_1[iParam0 /*3*/].f_2 < Local_223.f_18.f_1[iParam1 /*3*/].f_2)
	{
		return -1;
	}
	if (Local_223.f_18.f_1[iParam0 /*3*/].f_2 > Local_223.f_18.f_1[iParam1 /*3*/].f_2)
	{
		return 1;
	}
	return 0;
}

void func_1044(var uParam0, int iParam1, bool bParam2)
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
		func_1045(uParam0, iParam1);
	}
}

void func_1045(var uParam0, int iParam1)
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
		iVar1 = unk_0xB36B8558948EA7A8(0, iVar0 + 1);
		func_31(uParam0[iVar0], uParam0[iVar1]);
		iVar0 = (iVar0 + -1);
	}
}

void func_1046(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = *uParam0;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iParam2;
		iVar0++;
	}
}

int func_1047(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_855())
			{
				case 0:
				case 1:
					return 1;
				
				default:
			}
			break;
		
		case 1:
			switch (func_855())
			{
				case 1:
					return !Global_262145.f_30619;
				
				default:
			}
			break;
		
		case 2:
			switch (func_855())
			{
				case 5:
					return 1;
				
				default:
			}
			break;
		
		case 3:
			switch (func_855())
			{
				case 5:
					switch (func_962())
					{
						case 1:
							if (func_921() > 1000)
							{
								return 1;
							}
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

char* func_1048()
{
	return "TUNER_SPRINT_RACES_END";
}

char* func_1049(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (unk_0xB36B8558948EA7A8(0, 4))
			{
				case 0:
					return "TUNER_SPRINT_RACES_START_A";
				
				case 1:
					return "TUNER_SPRINT_RACES_START_B";
				
				case 2:
					return "TUNER_SPRINT_RACES_START_C";
				
				case 3:
					return "TUNER_SPRINT_RACES_START_D";
				
				default:
			}
			break;
	}
	return "";
}

int func_1050(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_855() >= 3)
			{
				return 0;
			}
			break;
	}
	return -1;
}

void func_1051()
{
	func_526(0, 43, 223182);
	func_510(0, 1, 223168);
	func_525(0, 2, 2);
	func_504(0, 223127);
	func_526(1, 43, 223110);
	func_510(1, 0, 223096);
	func_525(1, 2, 2);
	func_504(1, 223077);
	func_522(1, 223036);
	func_526(2, 43, 137464);
	func_525(2, 3, 3);
	func_504(2, 223011);
	func_526(3, 43, 137464);
	func_525(3, 4, 4);
	func_522(3, 222917);
	func_526(4, 44, 137464);
	func_525(4, 5, 5);
	func_526(5, 45, 222411);
	func_504(5, 222298);
	func_525(5, 6, 6);
	func_526(6, 46, 133428);
}

void func_1052()
{
	Local_223.f_9 = unk_0x551F46B3C7DFB654();
	func_495(iLocal_1845, 0);
	func_1053();
}

void func_1053()
{
	int iVar0;
	
	if (!unk_0x234B68AC2E35ED5A(Global_2453903.f_3075.f_257, 0))
	{
		iVar0 = func_172(9617, -1, 0);
		if ((!unk_0x234B68AC2E35ED5A(iVar0, 16) || !unk_0x234B68AC2E35ED5A(iVar0, 17)) || !unk_0x234B68AC2E35ED5A(iVar0, 18))
		{
			func_497(4);
		}
	}
}

void func_1054()
{
	if (Local_2125[iLocal_1840 /*38*/].f_35 == 0)
	{
		switch (func_680())
		{
			case 4:
				func_1055("TSA_SR_OT_RCTOt", "TSA_SR_LOC_OB", 12, 0);
				break;
			
			case 5:
				func_1055("TSA_SR_OT_RCTOt", "TSA_SR_LOC_KC", 12, 0);
				break;
			
			case 6:
				func_1055("TSA_SR_OT_RCTO", "TSA_SR_LOC_SC", 12, 0);
				break;
			
			case 7:
				func_1055("TSA_SR_OT_RCTOt", "TSA_SR_LOC_VS", 12, 0);
				break;
			
			case 8:
				func_1055("TSA_SR_OT_RCTO", "TSA_SR_LOC_EI", 12, 0);
				break;
			
			case 9:
				func_1055("TSA_SR_OT_RCTOt", "TSA_SR_LOC_PS", 12, 0);
				break;
			
			case 10:
				func_1055("TSA_SR_OT_RCTO", "TSA_SR_LOC_LS", 12, 0);
				break;
		}
	}
	else
	{
		func_528("TSA_SR_OT_RCCM", 0);
	}
}

void func_1055(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_1056(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312603 = 19;
		Global_1312603.f_56 = iParam2;
	}
}

int func_1056(char* sParam0, char* sParam1, bool bParam2, var uParam3)
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
	if (func_1057(sParam0, sParam1) && Global_1312603.f_56 == Global_1312603.f_58)
	{
		return 0;
	}
	func_515();
	Global_1312603 = 3;
	StringCopy(&(Global_1312603.f_1), unk_0x471C98FD94C0A5FD(), 32);
	Global_1312603.f_9 = unk_0x15173FB88ABC94F9(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	Global_1312603.f_58 = uParam3;
	Global_1312603.f_56 = uParam3;
	func_531();
	func_530(bParam2);
	func_529();
	return 1;
}

bool func_1057(char* sParam0, char* sParam1)
{
	if (!func_520())
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

void func_1058()
{
	func_1059();
	func_923(0, 0, 0);
}

void func_1059()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2441237.f_2841[iVar0 /*80*/].f_2 != 0)
		{
			Global_2441237.f_2841[iVar0 /*80*/].f_2 = 5;
			func_793(&(Global_2441237.f_2841[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_1060()
{
	if (func_509())
	{
		func_507(func_168(0, 1));
	}
}

void func_1061()
{
	Global_2544210.f_5191.f_763 = 0;
	func_629(&(Local_1898.f_118.f_9));
	func_524(0);
	func_497(8);
}

void func_1062()
{
	Global_2544210.f_5191.f_763 = 1;
}

bool func_1063()
{
	return func_861() == 0;
}

void func_1064()
{
	func_528("TSA_SR_OT_WTST", 0);
}

void func_1065()
{
	func_1066();
}

void func_1066()
{
	if (unk_0x234B68AC2E35ED5A(Local_223.f_54, 0))
	{
		unk_0xC664C0067EEAB8D1(&(Local_223.f_54), 0);
	}
}

bool func_1067()
{
	return func_861() == 1;
}

void func_1068()
{
	func_528("TSA_SR_OT_WTPT", 0);
}

void func_1069()
{
	func_541(0, 43);
	func_538(0, 1, 223525);
	func_541(1, 43);
	func_538(1, 0, 223511);
	func_538(1, 2, 223468);
	func_1075(1, 223036);
	func_541(2, 43);
	func_538(2, 3, 223435);
	func_1072(2, 223386);
	func_541(3, 43);
	func_538(3, 4, 223353);
	func_541(4, 44);
	func_536(4, 5);
	func_541(5, 45);
	func_538(5, 6, 223340);
	func_541(6, 46);
}

bool func_1070()
{
	return func_14(0);
}

bool func_1071()
{
	return func_3(20);
}

void func_1072(int iParam0, int iParam1)
{
	Local_1328[iParam0 /*20*/].f_17 = iParam1;
}

void func_1073()
{
	func_1046(&(Local_1898.f_118.f_11), -1, -1);
	func_1044(&(Local_1898.f_118.f_11), func_829(unk_0xAB0F784335D14AC3(), 0, Local_1898.f_118.f_11), 1);
}

bool func_1074()
{
	return func_908() == 1;
}

void func_1075(int iParam0, int iParam1)
{
	Local_1328[iParam0 /*20*/].f_18 = iParam1;
}

int func_1076()
{
	if (func_17(&(Local_1898.f_118.f_9), 30000, 0) || unk_0xAB0F784335D14AC3() == 4)
	{
		return 1;
	}
	return 0;
}

bool func_1077()
{
	return unk_0xAB0F784335D14AC3() < 2;
}

bool func_1078()
{
	return unk_0xAB0F784335D14AC3() >= 2;
}

void func_1079()
{
	Local_284.f_463 = 60;
	Local_284.f_463.f_1 = 1;
	Local_284.f_507[0 /*6*/] = 1;
	Local_284.f_507[0 /*6*/].f_2 = 4;
	Local_284.f_507[0 /*6*/].f_3 = 4;
	Local_284.f_507[0 /*6*/].f_1 = "TSA_HUD_PLAYERS";
	Local_284.f_507[1 /*6*/] = 4;
	Local_284.f_507[1 /*6*/].f_3 = 3;
	Local_284.f_507[1 /*6*/].f_1 = "TSA_HUD_START";
	Local_284.f_507[2 /*6*/] = 4;
	Local_284.f_507[3 /*6*/] = 2;
	Local_284.f_507[3 /*6*/].f_2 = 1500;
	Local_284.f_507[3 /*6*/].f_4 = 6;
	Local_284.f_507[3 /*6*/].f_3 = 8;
	Local_284.f_507[3 /*6*/].f_1 = "TSA_HUD_RESPAWN";
	Local_284.f_549 = 1;
	Local_284.f_98 = 2;
	Local_284.f_98.f_1[0 /*18*/] = { func_1080() };
	Local_284.f_98.f_1[0 /*18*/].f_4.f_5 = 1;
	Local_284.f_98.f_1[0 /*18*/].f_3 = 21f;
	Local_284.f_98.f_1[0 /*18*/].f_10.f_7 = 14f;
	Local_284.f_98.f_1[0 /*18*/].f_10.f_3 = 4f;
	Local_284.f_98.f_1[0 /*18*/].f_10.f_4 = 5f;
	Local_284.f_98.f_1[0 /*18*/].f_10.f_5 = 0.25f;
	Local_284.f_98.f_1[0 /*18*/].f_10.f_6 = 0.5f;
	Local_284.f_98.f_1[1 /*18*/] = { func_869() };
	Local_284.f_98.f_1[1 /*18*/].f_4.f_5 = 1;
	Local_284.f_98.f_1[1 /*18*/].f_4 = 38;
	Local_284.f_98.f_1[1 /*18*/].f_3 = 21f;
	Local_284.f_98.f_1[1 /*18*/].f_10 = 4;
	Local_284.f_98.f_1[1 /*18*/].f_10.f_7 = 14f;
	Local_284.f_98.f_1[1 /*18*/].f_10.f_3 = 4f;
	Local_284.f_98.f_1[1 /*18*/].f_10.f_4 = 5f;
	Local_284.f_98.f_1[1 /*18*/].f_10.f_5 = 0.25f;
	Local_284.f_98.f_1[1 /*18*/].f_10.f_6 = 0.5f;
}

Vector3 func_1080()
{
	switch (func_680())
	{
		case 4:
			return -408.3208f, 1184.441f, 324.5297f;
		
		case 5:
			return -2297.731f, 379.1689f, 173.4667f;
		
		case 6:
			return 54.1055f, 3734.029f, 38.7018f;
		
		case 7:
			return 744.1607f, 1199.426f, 325.4021f;
		
		case 8:
			return 231.6537f, -3326.992f, 4.7973f;
		
		case 9:
			return 2791.809f, 1518.259f, 23.5166f;
		
		case 10:
			return -1027.144f, -2714.697f, 12.8181f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1081()
{
	Local_834.f_11 = 226357;
	Local_834.f_446.f_6 = 226329;
	Local_834.f_446.f_4 = 226307;
	Local_834.f_453.f_4 = 226259;
	Local_834.f_453.f_5 = 225810;
	Local_834.f_453.f_6 = 225768;
	Local_834.f_453.f_7 = 225732;
	Local_834.f_453.f_1 = 225671;
	Local_834.f_453.f_2 = 225657;
	Local_834.f_453.f_3 = 225600;
	Local_834.f_394 = 225586;
	Local_834.f_394.f_1 = 225570;
	Local_834.f_394.f_2 = 225453;
	Local_834.f_397.f_1 = 225344;
	Local_834.f_397 = 225299;
	Local_834.f_41.f_1.f_1 = 225259;
	Local_834.f_91.f_5 = 225251;
	Local_834.f_2 = 225229;
	Local_834.f_3.f_1 = 225044;
	Local_834.f_8 = 225032;
	Local_834.f_9 = 224574;
	Local_834.f_9.f_1 = 224476;
}

void func_1082()
{
	func_526(0, 20, 133428);
	func_525(0, 1, 1);
	func_526(1, 44, 133428);
	func_525(1, 2, 2);
	func_526(2, 45, 133428);
	func_525(2, 3, 3);
	func_504(2, 224558);
	func_526(3, 46, 133428);
}

void func_1083()
{
	func_495(iLocal_1845, 0);
}

void func_1084()
{
	func_541(0, 20);
	func_538(0, 1, 224657);
	func_541(1, 44);
	func_536(1, 2);
	func_1075(1, 224641);
	func_541(2, 45);
	func_536(2, 3);
	func_541(3, 46);
}

void func_1085()
{
	func_498(9878, -1);
}

bool func_1086()
{
	return (func_1087() && unk_0x86AF801D34E482FF(0, 51));
}

int func_1087()
{
	int iVar0;
	
	if (func_698() != 0 || !func_1091())
	{
		func_1089();
		return 0;
	}
	if (!unk_0xC49311A2A500FF09(iLocal_1839, 0))
	{
		func_1089();
		return 0;
	}
	iVar0 = unk_0x75B58B38E45C6F9A(iLocal_1839, 0);
	if (!unk_0xBFCE58B2B3249999(iVar0, 0))
	{
		func_1089();
		return 0;
	}
	if (!func_639(unk_0x7D2B9E6A64637269(), iVar0, -1))
	{
		func_1089();
		return 0;
	}
	if (func_689(0))
	{
		func_1089();
		return 0;
	}
	if (unk_0x4DDAC4C80BACF92C(iVar0) > 1f)
	{
		func_1088("TSA_TT_SLOW");
		return 0;
	}
	return 1;
}

void func_1088(char* sParam0)
{
	unk_0xDDEC6D09154BA73A(sParam0);
	unk_0x4A5DC2FF6E0B609F(0, 1, 1, -1);
}

void func_1089()
{
	if ((func_1090("TSA_TT_PRESS") || func_1090("TSA_TT_SLOW")) || func_1090("TSA_TT_NOPASSN"))
	{
		unk_0x66AE54CE92457FEE(1);
	}
}

bool func_1090(char* sParam0)
{
	unk_0x4A4799828818A508(sParam0);
	return unk_0x0222F263F70347A8(0);
}

bool func_1091()
{
	if (unk_0xC49311A2A500FF09(iLocal_1839, 0))
	{
		return SYSTEM::VDIST(unk_0xD6E677FAD7521410(unk_0x75B58B38E45C6F9A(iLocal_1839, 0), 1), Local_284.f_98.f_1[0 /*18*/]) < (Local_284.f_98.f_1[0 /*18*/].f_3 * 0.5f);
	}
	return SYSTEM::VDIST(Local_1842, Local_284.f_98.f_1[0 /*18*/]) < (Local_284.f_98.f_1[0 /*18*/].f_3 * 0.5f);
}

void func_1092()
{
	func_1089();
}

void func_1093()
{
	if (func_698() == 1)
	{
		func_682();
	}
	if (func_698() < 2)
	{
		Local_284.f_98.f_1[0 /*18*/].f_4.f_4 = "TSA_CC_START";
		Local_284.f_98.f_1[0 /*18*/].f_4.f_3 = 1;
		Local_284.f_98.f_1[0 /*18*/].f_4 = 38;
		Local_284.f_98.f_1[0 /*18*/].f_10 = 4;
		Local_284.f_98.f_1[0 /*18*/].f_3 = 21f;
	}
	else
	{
		Local_284.f_98.f_1[0 /*18*/].f_4.f_4 = "TSA_CC_CHECK";
		Local_284.f_98.f_1[0 /*18*/].f_4.f_3 = 0;
		Local_284.f_98.f_1[0 /*18*/].f_3 = 21f;
	}
	if (func_1087())
	{
		if (!func_1090("TSA_TT_PRESS"))
		{
			func_1088("TSA_TT_PRESS");
		}
	}
}

int func_1094()
{
	Local_223.f_3 = func_172(9857, -1, 0);
	return 1;
}

void func_1095()
{
}

char* func_1096(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "TSA_TICK_BT";
			}
		
		default:
	}
	return "";
}

char* func_1097(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TSA_HT_START";
		
		case 1:
			return "TSA_HT_TT_START";
		
		default:
	}
	return "";
}

int func_1098(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_698() == 0 && SYSTEM::VDIST(Local_1842, Local_284.f_98.f_1[0 /*18*/]) >= ((Local_284.f_98.f_1[0 /*18*/].f_3 * 0.5f) + 1f));
		
		case 1:
			return (func_698() == 2 && func_172(9878, -1, 0) <= 3);
		
		default:
	}
	return 0;
}

void func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_722(Local_223.f_3, "TSA_TIMER_BT", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_826();
			break;
		
		case 1:
			func_722(func_1100(), "TSA_TIMER_CT", 0, 1, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
			func_826();
			break;
	}
}

int func_1100()
{
	return unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_223.f_9);
}

int func_1101(var uParam0)
{
	return func_728(&Local_223, 0, 0);
}

bool func_1102(var uParam0)
{
	return func_698() >= 2;
}

bool func_1103(int iParam0)
{
	if (Local_2125[iLocal_1840 /*38*/].f_35 == (Local_284.f_98 - 1) && iParam0 == 0)
	{
		return 1;
	}
	return Local_2125[iLocal_1840 /*38*/].f_35 == (iParam0 - 1);
}

bool func_1104(int iParam0)
{
	return func_1105(iParam0);
}

bool func_1105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_698() == 0)
			{
				return 1;
			}
			break;
	}
	Call_Loc(Local_834.f_453);
	return (StackVal && iParam0 == Local_2125[iLocal_1840 /*38*/].f_35);
}

void func_1106()
{
	Local_2125[iLocal_1840 /*38*/].f_35 = (Local_2125[iLocal_1840 /*38*/].f_35 + 1 % Local_284.f_98);
}

void func_1107()
{
	Local_2125[iLocal_1840 /*38*/].f_37 = 0;
	func_622(193);
	func_548(16, -1, -1, -1);
	func_548(5, -1, -1, -1);
}

void func_1108(int iParam0)
{
	if (Local_2125[iLocal_1840 /*38*/].f_37 > 0)
	{
		if (iParam0 == 0)
		{
			unk_0x9B0169E27978C1A2(-1, "Checkpoint_Lap", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
		}
		else
		{
			unk_0x9B0169E27978C1A2(-1, "Checkpoint", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
		}
	}
	if (iParam0 == 0)
	{
		if (func_699(unk_0x63700C801F742019(), 0))
		{
			Local_223.f_2 = func_1100();
			if (Local_223.f_3 == 0 || Local_223.f_3 > Local_223.f_2)
			{
				Local_223.f_3 = Local_223.f_2;
				func_500(9857, Local_223.f_3, -1, 1, 0);
				func_1109();
			}
			func_696(0);
		}
	}
}

void func_1109()
{
	struct<14> Var0;
	
	Var0.f_2 = 778116783;
	Var0.f_10 = unk_0x1146A9AE09CE2B14();
	Var0.f_3 = Local_223.f_3;
	Var0.f_5 = 2f;
	func_1111(Var0, func_1112());
	func_1110("TSA_TICK_BT", Local_223.f_3, 0);
}

int func_1110(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = -1;
	unk_0xAD97A7EDCF347FBB(sParam0);
	if (!bParam2)
	{
		unk_0x4E2EF4B6B665F3F4(iParam1, 7);
	}
	else
	{
		unk_0x4E2EF4B6B665F3F4(iParam1, 2055);
	}
	iVar0 = unk_0x02B23FCAC192C764(0, 1);
	func_557(17, sParam0, 1, &sVar1, iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_1111(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = 153488394;
	Param0.f_1 = unk_0x1146A9AE09CE2B14();
	if (!iParam14 == 0)
	{
		unk_0xA5C82A39FF8ED272(1, &Param0, 14, iParam14);
	}
}

int func_1112()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xC502CD39B4994F3A(iVar1);
		if ((iVar2 != iLocal_1838 && func_644(iVar2)) && func_1113(iVar2))
		{
			unk_0x191DDA30577F440A(&uVar0, iVar1);
		}
		iVar1++;
	}
	return uVar0;
}

int func_1113(int iParam0)
{
	if (!func_643(iParam0))
	{
		return 0;
	}
	if (func_1114() != 1)
	{
		return 0;
	}
	return 1;
}

int func_1114()
{
	return func_640(unk_0x1146A9AE09CE2B14());
}

void func_1115()
{
	if (Local_2125[iLocal_1840 /*38*/].f_35 == 1)
	{
		if (!func_699(unk_0x63700C801F742019(), 0))
		{
			Local_223.f_9 = unk_0x551F46B3C7DFB654();
			func_717(0);
		}
	}
}

void func_1116()
{
	unk_0x9B0169E27978C1A2(-1, "Go", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
}

void func_1117(int iParam0)
{
	if (iParam0 != 0)
	{
		unk_0x9B0169E27978C1A2(-1, "321", "DLC_Tuner_Car_Meet_Test_Area_Events_Sounds", 1);
	}
}

void func_1118()
{
	int iVar0;
	
	Local_284.f_463 = 60;
	Local_284.f_463.f_1 = 1;
	Local_284.f_98 = 19;
	iVar0 = 0;
	while (iVar0 < Local_284.f_98)
	{
		Local_284.f_98.f_1[iVar0 /*18*/].f_3 = 21f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_7 = 14f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_3 = 4f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_4 = 5f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_5 = 0.25f;
		Local_284.f_98.f_1[iVar0 /*18*/].f_10.f_6 = 0.5f;
		iVar0++;
	}
	Local_284.f_98.f_1[15 /*18*/].f_3 = 23f;
	Local_284.f_98.f_1[0 /*18*/] = { -2088f, 1120.43f, 24.67f };
	Local_284.f_98.f_1[1 /*18*/] = { -2092.295f, 1063.031f, 24.666f };
	Local_284.f_98.f_1[2 /*18*/] = { -2117.462f, 1007.832f, 24.666f };
	Local_284.f_98.f_1[3 /*18*/] = { -2062.429f, 1005.882f, 24.666f };
	Local_284.f_98.f_1[4 /*18*/] = { -2047.25f, 1121.412f, 24.666f };
	Local_284.f_98.f_1[5 /*18*/] = { -2023.677f, 1026.208f, 24.666f };
	Local_284.f_98.f_1[6 /*18*/] = { -1849.711f, 1035.924f, 24.666f };
	Local_284.f_98.f_1[7 /*18*/] = { -1913.469f, 1061.543f, 24.666f };
	Local_284.f_98.f_1[8 /*18*/] = { -1853.693f, 1082.718f, 24.666f };
	Local_284.f_98.f_1[9 /*18*/] = { -1862.635f, 1224.53f, 24.666f };
	Local_284.f_98.f_1[10 /*18*/] = { -1887.603f, 1149.94f, 24.666f };
	Local_284.f_98.f_1[11 /*18*/] = { -1994.162f, 1142.102f, 24.666f };
	Local_284.f_98.f_1[12 /*18*/] = { -1991.9f, 1075.801f, 24.666f };
	Local_284.f_98.f_1[13 /*18*/] = { -1938.773f, 1082.35f, 24.666f };
	Local_284.f_98.f_1[14 /*18*/] = { -1949.693f, 1199.321f, 24.666f };
	Local_284.f_98.f_1[15 /*18*/] = { -2016.872f, 1172.227f, 24.666f };
	Local_284.f_98.f_1[16 /*18*/] = { -2057.99f, 1199.121f, 24.666f };
	Local_284.f_98.f_1[17 /*18*/] = { -2123.125f, 1211.668f, 24.666f };
	Local_284.f_98.f_1[18 /*18*/] = { -2089.228f, 1214.846f, 24.666f };
	Local_284.f_549 = 1;
	Local_284.f_507[0 /*6*/] = 4;
	Local_284.f_507[0 /*6*/].f_3 = 3;
	Local_284.f_507[1 /*6*/] = 4;
	Local_284.f_507[1 /*6*/].f_3 = 4;
	Local_284.f_507[2 /*6*/] = 4;
	Local_284.f_507[3 /*6*/] = 4;
}

void func_1119()
{
}

int func_1120(var uParam0, var uParam1)
{
	Local_1898.f_118 = uParam0;
	Local_1898.f_118.f_1 = uParam1;
	return 1;
}

int func_1121()
{
	return func_1122();
}

int func_1122()
{
	return Global_2544210.f_5191.f_343;
}

int func_1123()
{
	return func_634();
}

bool func_1124(int iParam0)
{
	return func_4(&uLocal_1853, iParam0);
}

void func_1125()
{
	if (Local_834.f_91.f_6 != 0)
	{
		Call_Loc(Local_834.f_91.f_6);
		if (StackVal)
		{
			return;
		}
	}
	func_1409();
	if (func_1124(46))
	{
		return;
	}
	func_1271();
	func_1265();
	func_1259();
	func_1182();
	func_1129();
	func_1126();
}

void func_1126()
{
	if (!func_1124(30))
	{
		if (Local_834.f_80 != 0)
		{
			Call_Loc(Local_834.f_80);
			func_1127(StackVal);
		}
		func_478(30);
	}
}

void func_1127(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 53)
	{
		return;
	}
	func_1128(iParam0);
}

void func_1128(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x191DDA30577F440A(&(Global_2544210.f_5191.f_35[iVar0]), iVar1);
}

void func_1129()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (func_393(iLocal_1841, 0))
	{
		return;
	}
	bVar2 = (func_1124(11) || func_1124(74));
	if (bVar2)
	{
		if (Local_834.f_46 != 0)
		{
			Stack.Push(iVar0);
			Call_Loc(Local_834.f_46);
			iVar0 = (StackVal + StackVal);
		}
		if (Local_834.f_46.f_1 != 0)
		{
			Stack.Push(iVar1);
			Call_Loc(Local_834.f_46.f_1);
			iVar1 = (StackVal + StackVal);
		}
	}
	func_1177(bVar2);
	func_1175(&iVar0, &iVar1);
	if (Local_834.f_46.f_5 != 0)
	{
		Stack.Push(IntToFloat(iVar0));
		Call_Loc(Local_834.f_46.f_5);
		iVar0 = SYSTEM::ROUND((StackVal * StackVal));
		Stack.Push(IntToFloat(iVar1));
		Call_Loc(Local_834.f_46.f_5);
		iVar1 = SYSTEM::ROUND((StackVal * StackVal));
	}
	if (iVar0 > 0 || (iVar0 == 0 && func_1174()))
	{
		func_1173(iVar0);
		if (Local_284.f_469)
		{
			Global_2465707 = iVar0;
			func_22(&Global_2463963, 0, 0);
		}
	}
	if (iVar1 > 0)
	{
		if (Local_284.f_469.f_1)
		{
			func_1172();
		}
		func_1130(0, iLocal_1839, "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	Local_1742.f_5 = (Local_1742.f_5 + iVar0);
	Local_1742.f_6 = (Local_1742.f_6 + iVar1);
	func_655(0);
}

int func_1130(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_1131(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_1131(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1141(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x419E13582192CFEA(iParam1))
		{
			if (unk_0xA2CCAAC7F5CA3F49(iParam1))
			{
				iVar1 = unk_0xFAA5505029C4B5A6(iParam1);
				func_1137(unk_0x885F3A431ECE75E3(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_1132(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_1132(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_1135(iParam0, 1) };
	if (iParam0 == func_1134(unk_0x7D2B9E6A64637269()))
	{
		func_1133(1);
	}
	func_1137(Var0, iParam1, 0, sParam2, iParam3);
}

void func_1133(int iParam0)
{
	Global_2441237.f_2009 = iParam0;
}

int func_1134(int iParam0)
{
	return iParam0;
}

Vector3 func_1135(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xB90EB35E662F9812())
	{
		Var3 = { unk_0x25D8B90D7AB16D2F(2) };
	}
	if (iParam0 == func_1136(unk_0x7D2B9E6A64637269()) && unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
	{
		Var0 = { unk_0x9E695CE384C77EF0(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xD6E677FAD7521410(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		fVar6 = unk_0xA8D713A937F31250(iParam0);
		if (unk_0x5F95E51ABC3FC59A(unk_0x264EE27FDED1DCA1()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xC78A38E5FBC66080(unk_0x6471F4759775FCA4(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x26C2ACB261895E70(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_1136(int iParam0)
{
	return iParam0;
}

void func_1137(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2441237.f_1408[iVar0 /*30*/].f_6 == 0 || Global_2441237.f_1408[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2441237.f_1408[iVar1 /*30*/] = { Param0 };
			Global_2441237.f_1408[iVar1 /*30*/].f_6 = 1;
			Global_2441237.f_1408[iVar1 /*30*/].f_4 = func_1140(Global_2441237.f_1408[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2441237.f_1408[iVar1 /*30*/].f_7 = unk_0x551F46B3C7DFB654();
			Global_2441237.f_1408[iVar1 /*30*/].f_3 = iParam3;
			Global_2441237.f_1408[iVar1 /*30*/].f_8 = iParam4;
			Global_2441237.f_1408[iVar1 /*30*/].f_9 = func_1139();
			Global_2441237.f_1408[iVar1 /*30*/].f_10 = func_1138();
			StringCopy(&(Global_2441237.f_1408[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2441237.f_1408[iVar1 /*30*/].f_26 = unk_0x5FBE5EA201067B5E(unk_0x551F46B3C7DFB654(), iParam6);
		}
	}
}

int func_1138()
{
	if (Global_2441237.f_2009)
	{
		Global_2441237.f_2009 = 0;
		return 1;
	}
	Global_2441237.f_2009 = 0;
	return 0;
}

var func_1139()
{
	var uVar0;
	
	uVar0 = Global_2441237.f_2011;
	Global_2441237.f_2011 = 1;
	return uVar0;
}

float func_1140(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0BABEFEA577FCFA4(unk_0xEE77BC5A16EEF2B4(), Param0, 1);
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

var func_1141(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_1142(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_1142(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_1171(unk_0x1146A9AE09CE2B14()) || func_1170(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_9807 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9807;
		}
	}
	else if (func_1168() || func_1166(unk_0x1146A9AE09CE2B14()))
	{
		if (Global_262145.f_22962 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22962;
		}
	}
	else if (Global_262145.f_6806 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6806;
	}
	if (func_1165(sParam2))
	{
	}
	if (func_1164())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_1162(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_1161(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_1159(0, &iVar1);
					break;
				
				case 3:
					func_1159(1, &iVar1);
					break;
				
				case 1:
					func_1157(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1694735)
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
			func_1156(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_1152((func_1155(unk_0x1146A9AE09CE2B14()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xDD217DE18BBC8E71(iVar1, iParam8, iParam9);
				if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_2 != -1)
				{
					func_1156(1166, iVar1, -1);
				}
				func_1147(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_1143((func_1145(unk_0x1146A9AE09CE2B14()) + iVar1));
			}
			else
			{
				func_1143((func_1145(unk_0x1146A9AE09CE2B14()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_1143(int iParam0)
{
	if (func_1164())
	{
		Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_5 = iParam0;
		func_1144(joaat("mpply_globalxp"), iParam0);
	}
}

void func_1144(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
}

int func_1145(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_11(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return func_1146(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_5;
			}
		}
		else
		{
			return func_1146(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_1146(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD885BEFA31A18D47(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_1147(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_82(unk_0x1146A9AE09CE2B14()) };
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(&Var0))
		{
			iVar13 = func_1150(func_1151(&Var0));
			if (iVar13 == 0)
			{
				func_1149(&Global_1390382, iParam0);
				func_1148(joaat("mpply_crew_local_xp_0"), Global_1390382);
			}
			else if (iVar13 == 1)
			{
				func_1149(&Global_1390383, iParam0);
				func_1148(joaat("mpply_crew_local_xp_1"), Global_1390383);
			}
			else if (iVar13 == 2)
			{
				func_1149(&Global_1390384, iParam0);
				func_1148(joaat("mpply_crew_local_xp_2"), Global_1390384);
			}
			else if (iVar13 == 3)
			{
				func_1149(&Global_1390385, iParam0);
				func_1148(joaat("mpply_crew_local_xp_3"), Global_1390385);
			}
			else if (iVar13 == 4)
			{
				func_1149(&Global_1390386, iParam0);
				func_1148(joaat("mpply_crew_local_xp_4"), Global_1390386);
			}
		}
	}
}

void func_1148(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xAC4FD27671081628(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1390377 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1390379 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1390380 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1390381 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1390382 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1390383 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1390384 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1390385 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1390386 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1390387 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1390388 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1390389 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1390390 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1390391 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1390392 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1390393 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_1149(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_1150(int iParam0)
{
	if (iParam0 == Global_1390377)
	{
		return 0;
	}
	else if (iParam0 == Global_1390378)
	{
		return 1;
	}
	else if (iParam0 == Global_1390379)
	{
		return 2;
	}
	else if (iParam0 == Global_1390380)
	{
		return 3;
	}
	else if (iParam0 == Global_1390381)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_1151(var uParam0)
{
	if (unk_0x29712F962253A7EB())
	{
		if (unk_0xDA1611E46AAEA71B(uParam0))
		{
			return Global_2463440;
		}
	}
	return Global_2463440;
}

void func_1152(int iParam0, int iParam1, int iParam2)
{
	if (func_1164())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9775 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1390527[func_173(-1)])
				{
					unk_0xDD217DE18BBC8E71(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1390527[func_173(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9774 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xDD217DE18BBC8E71(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_387(unk_0x1146A9AE09CE2B14()))
		{
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_1 = iParam0;
			Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_205.f_6 = func_1153(iParam0, 1);
		}
		func_499(640, iParam0, -1, 1);
		func_500(641, func_1153(iParam0, 1), -1, 1, 0);
		Global_1390527[func_173(-1)] = iParam0;
		func_885(-1109644434, 7, 0);
	}
}

int func_1153(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_1154(iParam0, 0);
}

int func_1154(int iParam0, int iParam1)
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
		if (Global_293361[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_293361[iVar3] < iParam0)
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

int func_1155(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1146A9AE09CE2B14())
			{
				return Global_1390527[func_173(-1)];
			}
			else if (func_387(iParam0))
			{
				return Global_1590908[iParam0 /*874*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1390527[func_173(-1)];
	}
	return 0;
}

void func_1156(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_172(iParam0, func_173(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_501(iParam0))
	{
		func_500(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_499(iParam0, iVar0, iParam2, 1);
	}
}

void func_1157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14());
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		iVar4 = unk_0x6750311806FF130A(iVar0);
		if (unk_0xF46EDF82CA845956(iVar4))
		{
			iVar5 = unk_0x539ED6DF32477DE0(iVar4);
			if (unk_0x7C3E030BC3ED6671(iVar5) != -1)
			{
				if (unk_0x7C3E030BC3ED6671(iVar5) == iVar1 || func_295(unk_0x7C3E030BC3ED6671(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1146A9AE09CE2B14())
					{
						if (func_83(unk_0x1146A9AE09CE2B14(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_1158(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_1158(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_1158(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_1159(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x5E72DF7B8C03AA05())
		{
			iVar3 = iVar0;
			if (unk_0xF46EDF82CA845956(iVar3))
			{
				iVar4 = unk_0x539ED6DF32477DE0(iVar3);
				if (func_11(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1146A9AE09CE2B14())
					{
						iVar1++;
						if (func_83(unk_0x1146A9AE09CE2B14(), iVar4))
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
			if (func_11(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1146A9AE09CE2B14())
				{
					if (func_1160(unk_0x1146A9AE09CE2B14(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_83(unk_0x1146A9AE09CE2B14(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_1158(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_1158(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_1160(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_76(iParam0), func_76(iParam1));
	return 0f;
}

int func_1161(int iParam0)
{
	int iVar0;
	
	if (unk_0xB4A6144FE4FF5B78() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_1158(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_1162(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x909F156FC4077611(iParam0) > func_1155(unk_0x1146A9AE09CE2B14()))
		{
			iParam0 = -func_1155(unk_0x1146A9AE09CE2B14());
		}
	}
	if (func_1163(8000, 0, 0) > 0)
	{
		if (func_1163(8000, 0, 0) < (iParam0 + func_1155(unk_0x1146A9AE09CE2B14())))
		{
			iParam0 = (func_1163(8000, 0, 0) - func_1155(unk_0x1146A9AE09CE2B14()));
		}
	}
	return iParam0;
}

int func_1163(int iParam0, bool bParam1, int iParam2)
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
	return Global_293361[iParam0];
}

int func_1164()
{
	return 1;
}

int func_1165(char* sParam0)
{
	if (unk_0x4030103C8B148AFC(sParam0))
	{
		return 1;
	}
	else if (unk_0xDA654EB115F9FF7D(sParam0, "") || unk_0xDA654EB115F9FF7D(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_1166(int iParam0)
{
	return func_1167(func_194(iParam0));
}

int func_1167(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1168()
{
	if (unk_0xE45310E861787FC2())
	{
		return func_77();
	}
	return func_1169(Global_4456448.f_85535);
}

int func_1169(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1170(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 2;
}

bool func_1171(int iParam0)
{
	return Global_2426865[iParam0 /*449*/].f_119 == 7;
}

void func_1172()
{
	Global_2465048 = 1;
}

void func_1173(int iParam0)
{
	int iVar0;
	
	if (func_239())
	{
		func_562(-1027218631, iParam0, &iVar0, 0, 1, 0);
		StringCopy(&(Global_4265506[iVar0 /*85*/].f_14.f_26), "tuner_sandbox_activity", 32);
	}
	else
	{
		unk_0x9CEFB7D95B7F50D8(iParam0, "tuner_sandbox_activity");
	}
}

int func_1174()
{
	return 0;
}

void func_1175(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_1176(7))
	{
		return;
	}
	if (Local_834.f_46.f_2 != 0)
	{
		Call_Loc(Local_834.f_46.f_2);
		iVar0 = StackVal;
	}
	if (Local_834.f_46.f_3 != 0)
	{
		Call_Loc(Local_834.f_46.f_3);
		iVar1 = StackVal;
	}
	iVar2 = unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2544210.f_5191.f_268, unk_0x551F46B3C7DFB654()));
	if (Local_834.f_46.f_4 != 0)
	{
		Stack.Push(iVar2);
		Call_Loc(Local_834.f_46.f_4);
		if (StackVal > StackVal)
		{
			Call_Loc(Local_834.f_46.f_4);
			iVar2 = StackVal;
		}
	}
	iVar3 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	iVar0 = (iVar3 * iVar0);
	iVar1 = (iVar3 * iVar1);
	*iParam0 = (*iParam0 + iVar0);
	*iParam1 = (*iParam1 + iVar1);
}

bool func_1176(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_2544210.f_5191.f_46, iParam0);
}

void func_1177(bool bParam0)
{
	Stack.Push(Local_834.f_46.f_8 != 0);
	Call_Loc(Local_834.f_46.f_8);
	if (StackVal && StackVal)
	{
		if (bParam0)
		{
			if (func_1181(unk_0x1146A9AE09CE2B14()) > 0)
			{
				func_1180();
			}
			else
			{
				func_1179();
			}
		}
		else
		{
			func_1178();
		}
	}
}

void func_1178()
{
	if (func_55())
	{
		Global_2453903.f_3075.f_134 = 0;
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
	}
}

void func_1179()
{
	if (func_55())
	{
		if (Global_2453903.f_3075.f_134 < 10)
		{
			Global_2453903.f_3075.f_134++;
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

void func_1180()
{
	if (func_55())
	{
		if (Global_2453903.f_3075.f_134 > 0)
		{
			Global_2453903.f_3075.f_134 = (Global_2453903.f_3075.f_134 - 1);
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_424 = Global_2453903.f_3075.f_134;
		}
	}
}

int func_1181(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_28;
}

void func_1182()
{
	if (!func_1124(8))
	{
		if (func_1257())
		{
			if (func_1194(0, 1, 1) && func_1190())
			{
				func_1183();
				func_478(8);
			}
		}
		else
		{
			func_478(8);
		}
	}
}

void func_1183()
{
	switch (func_15())
	{
		case 0:
			switch (func_460())
			{
				case 1:
					func_748(88, "TSA_STQUIT_TT_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				default:
					func_1189(20, Local_223.f_3, "BM_PB", "BM_FAST_LAP", 1, -1, -1082130432, 2);
					unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					break;
			}
			break;
		
		case 1:
			switch (func_460())
			{
				case 1:
					func_748(88, "TSA_STQUIT_CD_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				case 2:
					func_748(88, "TSA_STQUIT_CD_T", "TSA_STQUIT_HOST", 1, -1, 2, 1, 128);
					break;
				
				case 12:
					func_748(88, "TSA_STQUIT_CD_T", "TSA_STQUIT_NEP", 1, -1, 2, 1, 128);
					break;
				
				default:
					if (Local_1898.f_118.f_17 == func_716())
					{
						func_1186(88, func_1188(), func_1187(), "TSA_STQUIT_CD_T", -1, -1, -1082130432, 0, 1, 2, 128);
					}
					else if (Local_1898.f_118.f_17 == iLocal_1841)
					{
						func_1189(20, Local_223.f_2, "BM_RB", "TSA_WINNER", 1, -1, -1082130432, 2);
						unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					else
					{
						func_1185(27, unk_0x539ED6DF32477DE0(Local_1898.f_118.f_17), 0, "TSA_LOSER_STRP", "TSA_LOSER", 1, -1, 2, 0);
						unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					break;
			}
			break;
		
		case 3:
			switch (func_460())
			{
				case 1:
					func_748(88, "TSA_STQUIT_SR_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				case 2:
					func_748(88, "TSA_STQUIT_SR_T", "TSA_STQUIT_HOST", 1, -1, 2, 1, 128);
					break;
				
				case 12:
					func_748(88, "TSA_STQUIT_SR_T", "TSA_STQUIT_NEP", 1, -1, 2, 1, 128);
					break;
				
				default:
					if (Local_1898.f_118.f_17 != func_716())
					{
						if (Local_1898.f_118.f_17 == iLocal_1841)
						{
							func_1189(20, unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Local_223.f_9), "BM_RB", "TSA_WINNER", 1, -1, -1082130432, 2);
							unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
						}
						else
						{
							func_1185(27, unk_0x539ED6DF32477DE0(Local_1898.f_118.f_17), 0, "TSA_STLOSE_SR", "TSA_LOSER", 1, -1, 2, 0);
							unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
						}
					}
					break;
			}
			break;
		
		case 2:
			switch (func_460())
			{
				case 1:
					func_748(88, "TSA_STQUIT_HH_T", "TSA_STQUIT_TIME", 1, -1, 2, 1, 128);
					break;
				
				case 2:
					func_748(88, "TSA_STQUIT_HH_T", "TSA_STQUIT_HOST", 1, -1, 2, 1, 128);
					break;
				
				case 12:
					func_748(88, "TSA_STQUIT_HH_T", "TSA_STQUIT_NEP", 1, -1, 2, 1, 128);
					break;
				
				default:
					if (Local_1898.f_118.f_17 == func_716())
					{
						func_1186(88, func_1188(), func_1187(), "TSA_STQUIT_HH_T", -1, -1, -1082130432, 0, 1, 2, 128);
					}
					else if (Local_1898.f_118.f_17 == iLocal_1841)
					{
						func_1189(20, Local_223.f_2, "BM_RB", "TSA_WINNER", 1, -1, -1082130432, 2);
						unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					else
					{
						func_1185(27, unk_0x539ED6DF32477DE0(Local_1898.f_118.f_17), 0, "TSA_LOSER_H2H", "TSA_LOSER", 1, -1, 2, 0);
						unk_0x9B0169E27978C1A2(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
					}
					break;
			}
			break;
		
		default:
			func_1186(88, func_1188(), func_1187(), func_1184(), -1, -1, -1082130432, 0, 1, 2, 128);
			break;
	}
}

char* func_1184()
{
	return "TSA_STEND_T";
}

int func_1185(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_795(iParam0, &Var0, iParam2, sParam3, sParam4);
	Var0.f_17 = iParam1;
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	if (iParam8 != 0)
	{
		func_793(&(Var0.f_69), iParam8);
	}
	return func_749(&Var0);
}

int func_1186(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
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
	func_795(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_793(&(Var0.f_69), iParam10);
	}
	return func_749(&Var0);
}

char* func_1187()
{
	return "";
}

char* func_1188()
{
	return "";
}

int func_1189(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_795(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_749(&Var0);
}

bool func_1190()
{
	return (func_1192() || func_1191());
}

int func_1191()
{
	return 0;
}

bool func_1192()
{
	return (func_393(iLocal_1841, 3) || func_1193(iLocal_1838));
}

bool func_1193(int iParam0)
{
	return func_943(iParam0);
}

bool func_1194(int iParam0, int iParam1, int iParam2)
{
	return ((!func_1250() && !func_1249()) && func_1195((iParam0 && func_1247()), 1, func_1246(), 0));
}

int func_1195(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1245(unk_0x1146A9AE09CE2B14(), 29))
	{
		return 0;
	}
	if (func_1244(unk_0x1146A9AE09CE2B14(), 21))
	{
		return 0;
	}
	if (func_1244(unk_0x1146A9AE09CE2B14(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0xD09C9D030AFD3F25())
		{
			return 0;
		}
	}
	if (!func_1243(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x2D61488C347F8402())
		{
			return 0;
		}
	}
	if (func_1242(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_1241())
	{
		return 0;
	}
	if (func_1240())
	{
		return 0;
	}
	if (func_1239())
	{
		return 0;
	}
	if (func_1238())
	{
		return 0;
	}
	if (unk_0xE45310E861787FC2())
	{
		return 0;
	}
	if (func_297(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_931())
	{
		return 0;
	}
	if (func_1244(unk_0x1146A9AE09CE2B14(), 0) || func_1244(unk_0x1146A9AE09CE2B14(), 3))
	{
		return 0;
	}
	if ((func_1244(unk_0x1146A9AE09CE2B14(), 12) || func_1244(unk_0x1146A9AE09CE2B14(), 14)) || func_1244(unk_0x1146A9AE09CE2B14(), 13))
	{
		return 0;
	}
	if (func_1235(unk_0x1146A9AE09CE2B14(), 0, -1))
	{
		if (!func_1203())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_177())
		{
			return 0;
		}
	}
	if (Global_1669334)
	{
		return 0;
	}
	if (func_953(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_1202())
	{
		return 0;
	}
	if (func_1201(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if ((func_349(unk_0x1146A9AE09CE2B14()) && func_346(unk_0x1146A9AE09CE2B14()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1200())
	{
		return 0;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_27, 4))
	{
		return 0;
	}
	if (func_1199(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (func_946(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (!func_943(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1198(unk_0x1146A9AE09CE2B14()))
		{
			return 0;
		}
	}
	if (func_1196())
	{
		return 0;
	}
	return 1;
}

bool func_1196()
{
	return func_1197() == 1;
}

int func_1197()
{
	return Global_1710155;
}

int func_1198(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627455[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_1199(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_270.f_4 != 0 || Global_2426865[iParam0 /*449*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_1200()
{
	return Global_1683970.f_4477 != -1;
}

int func_1201(int iParam0)
{
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 14))
	{
		return 1;
	}
	if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 11))
	{
		return 1;
	}
	return 0;
}

int func_1202()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1203()
{
	int iVar0;
	
	iVar0 = func_194(unk_0x1146A9AE09CE2B14());
	if (((func_1234(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_267.f_29) || func_1233(unk_0x1146A9AE09CE2B14())) || func_1232(unk_0x1146A9AE09CE2B14())) || func_1227(unk_0x1146A9AE09CE2B14()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_1226(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1225(iVar0) || func_1224(iVar0))
		{
			return 1;
		}
	}
	if (func_1223(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1224(iVar0))
		{
			return 1;
		}
	}
	if (func_1222(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1221(iVar0))
		{
			return 1;
		}
	}
	if (func_1220(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1219(iVar0))
		{
			return 1;
		}
	}
	if (func_1218(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1167(iVar0))
		{
			return 1;
		}
	}
	if (func_1217(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1216(iVar0))
		{
			return 1;
		}
	}
	if (func_350(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (func_1215(iVar0))
		{
			if (func_1213(unk_0x1146A9AE09CE2B14()))
			{
				return 1;
			}
		}
	}
	if (func_1212(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1211(iVar0))
		{
			return 1;
		}
		if (func_1210(iVar0))
		{
			return 1;
		}
		if (func_1209())
		{
			return 1;
		}
	}
	if (func_1208(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1207())
		{
			return 1;
		}
	}
	if (func_1206(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1210(iVar0))
		{
			return 1;
		}
	}
	if (func_205(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1205(iVar0))
		{
			return 1;
		}
	}
	if (func_643(unk_0x1146A9AE09CE2B14()))
	{
		if (func_1204(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1204(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_1205(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_1206(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1 && Global_2426865[iParam0 /*449*/].f_319.f_9 != func_51())
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_1207()
{
	return Global_2544210.f_6695;
}

int func_1208(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_1209()
{
	return Global_2544210.f_6694;
}

int func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_1212(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_1213(int iParam0)
{
	if (func_1214(iParam0) != func_51())
	{
		return func_1214(iParam0) == func_81(iParam0);
	}
	return 0;
}

int func_1214(int iParam0)
{
	return Global_1630816[iParam0 /*597*/].f_11.f_35;
}

int func_1215(int iParam0)
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

int func_1216(int iParam0)
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

int func_1217(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_1218(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_1219(int iParam0)
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

int func_1220(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_1221(int iParam0)
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

int func_1222(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_1223(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_1224(int iParam0)
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

int func_1225(int iParam0)
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

int func_1226(int iParam0)
{
	if (func_362(Global_1590908[iParam0 /*874*/].f_267.f_29, -1))
	{
		return 1;
	}
	return 0;
}

int func_1227(int iParam0)
{
	if (func_1228(Global_1590908[iParam0 /*874*/].f_267.f_29, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1228(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1229(unk_0x1146A9AE09CE2B14(), 0);
	}
	if (bParam1)
	{
		if (func_1229(unk_0x1146A9AE09CE2B14(), 0))
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

bool func_1229(int iParam0, bool bParam1)
{
	if (Global_1590744 != func_51())
	{
		if (!func_1231(Global_1590744))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x1146A9AE09CE2B14() != Global_1590744)
			{
				if (unk_0x234B68AC2E35ED5A(Global_2426865[Global_1590744 /*449*/].f_199, 24) || func_1230(Global_1590744))
				{
					return 1;
				}
			}
		}
	}
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 24);
}

int func_1230(int iParam0)
{
	if (iParam0 != func_51())
	{
		return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_199, 9);
	}
	return 0;
}

int func_1231(int iParam0)
{
	if (iParam0 != func_51())
	{
		return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_353, 2);
	}
	return 0;
}

int func_1232(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_1233(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
			{
				return func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_1234(int iParam0)
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

int func_1235(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1590908[iParam0 /*874*/].f_267.f_29 > 0)
	{
		if (bParam1)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_27, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2426865[iParam0 /*449*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_206(Global_2426865[iParam0 /*449*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_1236(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_1236(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_51())
	{
		return iParam0;
	}
	if (func_1237(iParam0) != -1)
	{
		iVar0 = func_206(func_1237(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_58(iParam0, 0))
			{
				return func_81(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_51();
		}
		return Global_2426865[iParam0 /*449*/].f_319.f_9;
	}
	return func_51();
}

int func_1237(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_11(iParam0, 1, 1))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
		else if (((Global_1312902 || Global_2405077.f_2678) && iParam0 == unk_0x1146A9AE09CE2B14()) && func_11(iParam0, 1, 0))
		{
			return Global_2426865[iParam0 /*449*/].f_319.f_6;
		}
	}
	return -1;
}

bool func_1238()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_192 != 0;
}

bool func_1239()
{
	return Global_1312902;
}

bool func_1240()
{
	return Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == 5;
}

bool func_1241()
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/].f_36.f_18, 0);
}

int func_1242(int iParam0)
{
	if (func_296(iParam0, 1, 0))
	{
		if (Global_1590908[iParam0 /*874*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1243(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_139, 22);
}

bool func_1244(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_217, iParam1);
}

bool func_1245(int iParam0, int iParam1)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_11.f_5, iParam1);
}

bool func_1246()
{
	if (Local_834.f_41.f_4 != 0)
	{
		Call_Loc(Local_834.f_41.f_4);
		return StackVal;
	}
	if (func_1209())
	{
		return 0;
	}
	return !func_1124(3);
}

bool func_1247()
{
	return !func_1248();
}

bool func_1248()
{
	return Local_1778 != -1;
}

int func_1249()
{
	return 0;
}

int func_1250()
{
	if ((func_944(unk_0x1146A9AE09CE2B14(), 21) || func_944(unk_0x1146A9AE09CE2B14(), 22)) || func_1256())
	{
		return 1;
	}
	if (func_1252())
	{
		func_1251(22);
		return 1;
	}
	return 0;
}

void func_1251(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

int func_1252()
{
	if (func_193(unk_0x1146A9AE09CE2B14(), 0))
	{
		if (((func_1255() && !func_1254()) || func_1244(unk_0x1146A9AE09CE2B14(), 21)) || func_1244(unk_0x1146A9AE09CE2B14(), 25))
		{
			return 1;
		}
		else
		{
			func_1253(27);
		}
	}
	return 0;
}

void func_1253(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_4), iParam0);
}

bool func_1254()
{
	return Global_1312436.f_1;
}

bool func_1255()
{
	return Global_1312436;
}

bool func_1256()
{
	return func_901(390, -1);
}

int func_1257()
{
	if (func_460() == 2 && func_1258(Local_1849) != 3)
	{
		return 0;
	}
	if (func_1124(11))
	{
		if (func_62(24) || func_62(23))
		{
			return 0;
		}
	}
	return 1;
}

int func_1258(int iParam0)
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
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
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
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_1259()
{
	int iVar0;
	
	if (func_1263())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (!func_1262(iVar0, iLocal_1841, 16))
		{
			if (Local_1898.f_2.f_15[iVar0 /*2*/].f_1 != -1)
			{
				func_1261(Local_1898.f_2.f_15[iVar0 /*2*/]);
			}
			func_1260(iVar0, 16);
		}
		iVar0++;
	}
}

void func_1260(int iParam0, int iParam1)
{
	if (func_21(&(Local_2125[iLocal_1840 /*38*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_1261(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1689734.f_4798[iVar0 /*2*/].f_1 == -1)
		{
			Global_1689734.f_4798[iVar0 /*2*/] = { Param0 };
			unk_0x191DDA30577F440A(&Global_1689734, 1);
			return;
		}
		iVar0++;
	}
	if (!unk_0x234B68AC2E35ED5A(Global_1689734, 1))
	{
		unk_0x191DDA30577F440A(&Global_1689734, 1);
	}
}

bool func_1262(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_2125[iParam1 /*38*/].f_3[iParam0 /*3*/]), iParam2);
}

bool func_1263()
{
	return func_1264(unk_0x1146A9AE09CE2B14());
}

int func_1264(int iParam0)
{
	if (iParam0 != func_51())
	{
		if (func_432(Global_1630816[iParam0 /*597*/].f_554.f_12) || unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_554, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_1265()
{
	char* sVar0;
	
	if (func_1124(11))
	{
		sVar0 = func_1269();
	}
	else
	{
		sVar0 = func_1267();
	}
	if (iLocal_1777 != -1)
	{
		if (!unk_0xAB6A270F84A8781E(sVar0))
		{
			unk_0xFB8A6909539A30B1(sVar0);
		}
	}
	func_1266(0);
}

void func_1266(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1124(34))
		{
			unk_0x8FF71A24509DA743("DisableFlightMusic", 1);
			unk_0x8FF71A24509DA743("WantedMusicDisabled", 1);
			func_478(34);
		}
	}
	else if (func_1124(34))
	{
		unk_0x8FF71A24509DA743("DisableFlightMusic", 0);
		unk_0x8FF71A24509DA743("WantedMusicDisabled", 0);
		func_665(34);
	}
}

var func_1267()
{
	if (Local_834.f_83.f_3.f_3 != 0)
	{
		Call_Loc(Local_834.f_83.f_3.f_3);
		return StackVal;
	}
	return func_1268();
}

char* func_1268()
{
	return "";
}

var func_1269()
{
	if (Local_834.f_83.f_3.f_2 != 0)
	{
		Call_Loc(Local_834.f_83.f_3.f_2);
		return StackVal;
	}
	return func_1270();
}

char* func_1270()
{
	return "";
}

void func_1271()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_1408(iLocal_1838, Local_1898.f_198);
	iVar6 = -1;
	iVar5 = 0;
	while (iVar5 < Local_284.f_19)
	{
		func_1407(iVar5);
		bVar1 = unk_0x159BC3DDA80D71AC(Local_1898.f_2[iVar5]);
		if (bVar1)
		{
			iVar4 = unk_0xD93F965CFAC1D06A(Local_1898.f_2[iVar5]);
			bVar2 = unk_0xE50EB54E0F21BED0(iVar4, 0);
			if (Local_834.f_100.f_32 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar4);
				Stack.Push(bVar2);
				Call_Loc(Local_834.f_100.f_32);
			}
			if (!bVar2)
			{
				func_1402(iVar5, iVar4);
				func_1401(iVar5, iVar4);
				func_1389(iVar5, iVar4, &bVar3, &iVar6);
				func_1384(iVar5, iVar4);
				func_1372(iVar5, iVar4, bVar3);
				func_1367(iVar5, iVar4);
			}
			func_1366(iVar5);
			func_1359(iVar5, iVar0);
			func_1337(iVar5);
		}
		else
		{
			Local_1710[iVar5 /*7*/].f_1 = 99999f;
			Local_1710[iVar5 /*7*/].f_2 = 99999f;
			Local_1710[iVar5 /*7*/].f_3 = 99999f;
		}
		func_1328(iVar5, bVar1);
		iVar5++;
	}
	if (bVar3)
	{
		if (!func_1327() && iVar6 != -1)
		{
			if (Local_834.f_100.f_30 != 0)
			{
				Stack.Push(iVar6);
				Call_Loc(Local_834.f_100.f_30);
			}
		}
		func_1326(1);
		func_1323(1, func_1325(Local_1849));
		func_1315(1);
	}
	else
	{
		func_1310(0, 0);
		func_1326(0);
		func_1323(0, func_1325(Local_1849));
		func_1315(0);
	}
	if (func_1408(iLocal_1838, Local_1898.f_198) > 0)
	{
		func_1309(1);
	}
	else
	{
		func_1309(0);
	}
	if (iVar0 > 0)
	{
		func_1308();
	}
	func_1299();
	func_1273();
	iLocal_1872++;
	if (iLocal_1872 >= func_7())
	{
		iLocal_1872 = 0;
		func_1272();
	}
}

void func_1272()
{
	if (func_17(&(Local_1710.f_12), 5000, 0) && Local_1710.f_14)
	{
		func_629(&(Local_1710.f_12));
		Local_1710.f_14 = 0;
	}
}

void func_1273()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	
	if (unk_0x159BC3DDA80D71AC(Local_1898.f_2[iLocal_1872]))
	{
		iVar4 = unk_0xD93F965CFAC1D06A(Local_1898.f_2[iLocal_1872]);
		bVar3 = unk_0xE50EB54E0F21BED0(iVar4, 0);
		Var0 = { unk_0xD6E677FAD7521410(iVar4, 0) };
		if (!bVar3)
		{
			func_1292(iLocal_1872, Var0);
			if (func_17(&(Local_1710.f_12), 5000, 0))
			{
				if (iLocal_1872 == 0)
				{
					Local_1710.f_14 = 1;
				}
				func_1274(iLocal_1872, iVar4, Var0);
			}
		}
	}
}

void func_1274(int iParam0, int iParam1, struct<3> Param2)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	var uVar6;
	
	iVar0 = func_1290(Param2, 6, -1, 0, 1, -1);
	Var1 = { func_1279(iVar0, 0) };
	iVar4 = unk_0xFA82BD1142427E0F(Var1, func_1277(iVar0));
	iVar5 = unk_0xB71084333B418824(iParam1);
	if (iVar4 != 0 && iVar4 == iVar5)
	{
		if (unk_0x5976053523EA16C8(iParam1))
		{
			return;
		}
		if (!func_1276(Local_1898.f_2[iParam0]))
		{
			return;
		}
		if (func_1275(iVar0, &Var1, &uVar6))
		{
			Var1 = { Var1.x, Var1.f_1, (Var1.f_2 + 5f) };
			unk_0x78CDDD1E6367978D(iParam1, Var1, 1, 0, 0, 1);
			if (unk_0x50997FC21D62251F(iParam1))
			{
				unk_0xAFD4554ABD55837D(unk_0x6F9D3E582271B7F5(iParam1));
			}
			unk_0xCD37A28258D70638(iParam1, uVar6);
			unk_0x44893A0E1444C28B(iParam1);
		}
	}
}

bool func_1275(int iParam0, var uParam1, var uParam2)
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
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_184(*uParam1, 0f, 0f, 0f, 0);
}

int func_1276(var uParam0)
{
	if (unk_0xB364346471C3B028(uParam0) || (!unk_0xE5AEA27726895658(uParam0) && unk_0x443E2CA72E118E64()))
	{
		if (func_108(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1277(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_1278(Global_101476);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
	}
	return "";
}

char* func_1278(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_1114() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

Vector3 func_1279(int iParam0, bool bParam1)
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
			return func_1289(Global_101476);
			break;
		
		case 46:
			if (Global_1590745 != func_51())
			{
				if (func_1288(Global_1590745))
				{
					return func_1281(2, 2);
				}
				else if (func_1280(Global_1590745))
				{
					return func_1281(45, 3);
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
			return Global_1703091;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159.901f, 1075.213f, -25.36174f;
			break;
		
		case 55:
			return -2194.123f, 1103.805f, -24.2451f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_1280(int iParam0)
{
	if (iParam0 != func_51())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 0) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 1)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1281(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590745 != func_51())
	{
		if (iParam1 == 3)
		{
			if (func_1282(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (unk_0x234B68AC2E35ED5A(Global_1590908[Global_1590745 /*874*/].f_267.f_261, 4))
			{
				if (func_1282(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (unk_0x234B68AC2E35ED5A(Global_1590908[Global_1590745 /*874*/].f_267.f_261, 5))
			{
				if (func_1282(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_1282(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_1287(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_1287(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_1285(iParam0) };
	}
	else
	{
		Var12 = { func_1284(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_1283(Var18, -Var0.f_3.f_2) };
	Var18 = { func_1283(Var18, Var6.f_3.f_2) };
	*uParam2 = { unk_0x26C2ACB261895E70(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_1283(struct<3> Param0, float fParam3)
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

struct<6> func_1284(int iParam0)
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

struct<6> func_1285(int iParam0)
{
	return func_1286(iParam0);
}

struct<6> func_1286(int iParam0)
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

int func_1287(int iParam0, var uParam1)
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

int func_1288(int iParam0)
{
	if (iParam0 != func_51())
	{
		if ((unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 3) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 4)) || unk_0x234B68AC2E35ED5A(Global_1590908[iParam0 /*874*/].f_267.f_261, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1289(int iParam0)
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
			if (func_1114() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_1290(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 55)
	{
		if (iParam3 == 6 || iParam3 == func_176(iVar0))
		{
			if (!bParam5 || func_1291(iVar0))
			{
				fVar1 = unk_0x0BABEFEA577FCFA4(Param0, func_1279(iVar0, 0), 1);
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

int func_1291(int iParam0)
{
	return func_171(iParam0, 0, 0);
}

void func_1292(int iParam0, struct<3> Param1)
{
	Local_1710[iParam0 /*7*/].f_1 = unk_0x0BABEFEA577FCFA4(Param1, Local_1842, func_1298(iParam0));
	Local_1710[iParam0 /*7*/].f_2 = unk_0x0BABEFEA577FCFA4(Param1, func_1293(), func_1298(iParam0));
	Local_1710[iParam0 /*7*/].f_3 = unk_0x0BABEFEA577FCFA4(Param1, Local_284.f_19.f_5[iParam0 /*13*/].f_3, func_1298(iParam0));
}

Vector3 func_1293()
{
	if (Local_834.f_403.f_4.f_2 != 0)
	{
		Call_Loc(Local_834.f_403.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_1294(func_1297());
}

Vector3 func_1294(int iParam0)
{
	if (bLocal_1835 && unk_0xC49311A2A500FF09(iLocal_1839, 0))
	{
		return func_1296(iParam0);
	}
	return func_1295(iParam0);
}

Vector3 func_1295(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1689734.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_1296(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1689734.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

int func_1297()
{
	if (Local_834.f_403.f_4.f_1 != 0)
	{
		Call_Loc(Local_834.f_403.f_4.f_1);
		return StackVal;
	}
	if (iLocal_1840 != -1)
	{
		return Local_1753.f_1[Local_2125[iLocal_1840 /*38*/].f_14 /*4*/];
	}
	return 0;
}

int func_1298(int iParam0)
{
	if (Local_834.f_100.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_27);
	}
	return 1;
}

void func_1299()
{
	if (func_1306(iLocal_1838, 1) && func_1305())
	{
		if (func_1301())
		{
			if (!func_1124(35))
			{
				func_502(func_1300(), -1);
				func_478(35);
			}
		}
	}
	else
	{
		if (func_1124(35))
		{
			func_665(35);
		}
		if (func_1090(func_1300()))
		{
			unk_0x66AE54CE92457FEE(1);
		}
	}
}

char* func_1300()
{
	return "BHH_HELD";
}

int func_1301()
{
	if ((((((((((!func_1304() && !func_1303()) && !unk_0xA300BD5F71A8C704()) && !unk_0x232F50D37AC94ECF()) && bLocal_1835) && !func_1302()) && func_1124(9)) && !unk_0xE8FFE38E2BA32BD6()) && !unk_0x8B6A925F148E0E94()) && !unk_0x4E38E404B98F3D9A()) && !unk_0x07BE48DF95787FCB())
	{
		return 1;
	}
	return 0;
}

bool func_1302()
{
	return Global_2441237.f_2841[0 /*80*/].f_1 != 0;
}

bool func_1303()
{
	return Global_74428;
}

bool func_1304()
{
	return unk_0xDFB7BFA6482FEE1E() <= Global_22670.f_6135 + 100;
}

int func_1305()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (unk_0x159BC3DDA80D71AC(Local_1898.f_2[iVar0]))
		{
			if (iLocal_1873[iVar0] != iLocal_1841)
			{
				if (!unk_0x5976053523EA16C8(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iVar0])))
				{
					if (Local_1710[iVar0 /*7*/].f_1 < 2f)
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

int func_1306(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if (func_1307(iParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1307(int iParam0, int iParam1, bool bParam2)
{
	if (Local_1710[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (func_6(iParam1, 4) || func_1262(iParam1, iLocal_1841, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_1308()
{
}

void func_1309(int iParam0)
{
}

void func_1310(bool bParam0, int iParam1)
{
	if (!func_1314())
	{
		return;
	}
	if (bParam0)
	{
		if (func_6(iParam1, 32))
		{
			func_1313(24);
		}
		func_1312(Local_284.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		func_1311(24);
		func_1312(0);
	}
}

void func_1311(int iParam0)
{
	unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_6), iParam0);
}

void func_1312(int iParam0)
{
	if (Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_179 != iParam0)
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_179 = iParam0;
	}
}

void func_1313(int iParam0)
{
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_6), iParam0);
}

int func_1314()
{
	return 0;
}

void func_1315(bool bParam0)
{
	if (func_1213(iLocal_1838))
	{
		return;
	}
	if (func_1258(Local_1849) == 3)
	{
		return;
	}
	if (bParam0 != func_1322(iLocal_1838))
	{
		func_1316(bParam0);
	}
}

void func_1316(bool bParam0)
{
	if (bParam0)
	{
		if (!func_944(unk_0x1146A9AE09CE2B14(), 9))
		{
			if (func_1317(unk_0x1146A9AE09CE2B14()) != 0)
			{
				func_1251(9);
			}
		}
	}
	else if (func_944(unk_0x1146A9AE09CE2B14(), 9))
	{
		func_1253(9);
	}
}

int func_1317(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_954(iParam0) && !func_1321(iParam0)) && !unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 8));
	bVar2 = func_943(iParam0);
	uVar3 = func_1255();
	bVar4 = func_1250();
	if ((bVar1 && (func_945(iParam0) || func_1320(iParam0))) || bVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_1319(iParam0)) && !func_1318(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2544210.f_5191.f_219 != iVar0)
	{
		Global_2544210.f_5191.f_219 = iVar0;
	}
	return iVar0;
}

bool func_1318(int iParam0)
{
	return func_944(iParam0, 19);
}

int func_1319(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_944(iParam0, 9);
	}
	return 0;
}

int func_1320(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x234B68AC2E35ED5A(Global_1630816[iVar0 /*597*/].f_1, 0);
	}
	return 0;
}

bool func_1321(int iParam0)
{
	return unk_0x234B68AC2E35ED5A(Global_1630816[iParam0 /*597*/].f_1, 2);
}

int func_1322(int iParam0)
{
	return func_1319(iParam0);
}

void func_1323(bool bParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_1324(iParam1);
	if (bParam0)
	{
		if (!unk_0x234B68AC2E35ED5A(Global_1573347, iVar0))
		{
			unk_0x191DDA30577F440A(&Global_1573347, iVar0);
		}
	}
	else if (unk_0x234B68AC2E35ED5A(Global_1573347, iVar0))
	{
		unk_0xC664C0067EEAB8D1(&Global_1573347, iVar0);
	}
}

int func_1324(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

int func_1325(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 1;
		
		case 24:
			return 2;
		
		case 26:
			return 2;
		
		case 256:
			return 0;
		
		case 258:
			return 0;
		
		case 259:
			return 2;
		
		case 271:
			return 0;
		
		case 273:
			return 2;
		
		case 276:
			return 0;
		
		case 277:
			return 0;
		
		case 269:
			return 2;
		
		case 270:
			return 2;
		
		case 275:
			return 2;
		
		default:
	}
	return -1;
}

void func_1326(bool bParam0)
{
	if (bParam0)
	{
		func_1313(22);
		func_1313(23);
	}
	else
	{
		func_1311(22);
		func_1311(23);
	}
}

bool func_1327()
{
	return Global_1573346;
}

void func_1328(int iParam0, bool bParam1)
{
	if (!func_1336(iParam0))
	{
		return;
	}
	if (bParam1 && func_1276(Local_1898.f_2[iParam0]))
	{
		func_1335(&(Local_1898.f_2[iParam0]));
	}
	func_1330(iParam0);
	func_1329(iParam0);
}

void func_1329(int iParam0)
{
	if (unk_0x159BC3DDA80D71AC(Local_1898.f_2.f_18[iParam0]) && func_1276(Local_1898.f_2.f_18[iParam0]))
	{
		func_1335(&(Local_1898.f_2.f_18[iParam0]));
		func_115(&(Local_1898.f_2.f_18[iParam0]));
	}
}

void func_1330(int iParam0)
{
	var uVar0;
	
	if (!func_6(iParam0, 4) || !func_1332(iParam0))
	{
		return;
	}
	uVar0 = func_1331(iParam0);
	if (!func_62(33) && unk_0x5976053523EA16C8(unk_0xD93F965CFAC1D06A(func_1331(iParam0))))
	{
		unk_0x3211C35423263392(unk_0xD93F965CFAC1D06A(func_1331(iParam0)), 1, 1);
	}
	if (func_62(11))
	{
		if (!unk_0x2B9CE4B85D669BA3(unk_0xD93F965CFAC1D06A(func_1331(iParam0))))
		{
			unk_0x407B7FBB86B988B9(unk_0xD93F965CFAC1D06A(func_1331(iParam0)), 1, 1);
		}
		if (!unk_0x1F9D47D45E125FA6(unk_0xD93F965CFAC1D06A(func_1331(iParam0))))
		{
			func_1335(&uVar0);
		}
	}
	else if (func_62(12))
	{
		func_115(&uVar0);
	}
	else if (!func_62(32))
	{
		func_1335(&uVar0);
	}
}

var func_1331(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!func_421(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_399(iParam0);
	switch (func_400())
	{
		case 2:
			return Local_1898.f_49[iVar1 /*6*/];
		
		case 1:
			return Local_1898.f_26[iVar1 /*22*/];
		
		default:
	}
	return uVar0;
}

int func_1332(int iParam0)
{
	if (!func_421(iParam0))
	{
		return 0;
	}
	if (!unk_0x159BC3DDA80D71AC(func_1331(iParam0)))
	{
		return 0;
	}
	if ((func_6(iParam0, 35) || func_6(iParam0, 36)) || func_6(iParam0, 37))
	{
		return 0;
	}
	if (unk_0xE50EB54E0F21BED0(unk_0xD93F965CFAC1D06A(func_1331(iParam0)), 0))
	{
		return 0;
	}
	switch (func_400())
	{
		case 2:
			if (func_1333(func_1334(iParam0), 0, 1))
			{
				return 0;
			}
			break;
	}
	if (!func_1276(func_1331(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_1333(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x3CF5ADE443D18312(uParam0) + 1;
	if (!unk_0xE50EB54E0F21BED0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x9B73EB6255D4AE81(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x27FC1B0077581B37(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0x419E13582192CFEA(iVar2))
					{
						if (unk_0x72D30262CF8C8603(iVar2))
						{
							if (!bParam2 && func_80(unk_0xCB567ED25393C1DF(iVar2), unk_0x1146A9AE09CE2B14()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!unk_0xECEC7528A52B4EE8(iVar2))
				{
					if (unk_0x72D30262CF8C8603(iVar2))
					{
						if (!bParam2 && func_80(unk_0xCB567ED25393C1DF(iVar2), unk_0x1146A9AE09CE2B14()))
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

int func_1334(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar1 = func_1331(iParam0);
	if (unk_0x159BC3DDA80D71AC(uVar1))
	{
		return unk_0x854C404AEB476240(uVar1);
	}
	return uVar0;
}

void func_1335(var uParam0)
{
	var uVar0;
	
	if (unk_0xB7D6400C89373777(*uParam0))
	{
		if (!unk_0xB364346471C3B028(*uParam0))
		{
		}
	}
	if (unk_0x159BC3DDA80D71AC(*uParam0))
	{
		uVar0 = unk_0xD93F965CFAC1D06A(*uParam0);
		unk_0x24DBE20C830AE9AB(&uVar0);
	}
}

int func_1336(int iParam0)
{
	if ((((func_6(iParam0, 19) || (func_6(iParam0, 3) && func_17(&(Local_1898.f_2.f_2[iParam0 /*2*/]), 6000, 0))) || func_6(iParam0, 4)) || func_6(iParam0, 25)) || func_6(iParam0, 33))
	{
		return (func_6(iParam0, 4) || func_6(iParam0, 3));
	}
	return 0;
}

void func_1337(int iParam0)
{
	if (func_1352(iParam0))
	{
		func_1339(iParam0);
	}
	else
	{
		func_1338(iParam0);
	}
}

void func_1338(int iParam0)
{
	if (unk_0x575B7C28D81C0B4D(Local_1710[iParam0 /*7*/]))
	{
		unk_0x1AD5BCFEC31BB8D9(&(Local_1710[iParam0 /*7*/]));
	}
}

void func_1339(int iParam0)
{
	if (!unk_0x575B7C28D81C0B4D(Local_1710[iParam0 /*7*/]))
	{
		if (unk_0x159BC3DDA80D71AC(Local_1898.f_2[iParam0]))
		{
			Local_1710[iParam0 /*7*/] = unk_0xB20BB447C131B310(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]));
			if (func_1349(func_1350(iParam0)))
			{
				unk_0x252BE56DB93DF816(Local_1710[iParam0 /*7*/], func_1350(iParam0));
			}
			unk_0xDD205B87CDFD0C1B(Local_1710[iParam0 /*7*/], func_1347(iParam0));
			unk_0xFA3E6ADC3E5D386E(Local_1710[iParam0 /*7*/], func_1345(iParam0, 0));
			unk_0xDD944E3FD2028A48(Local_1710[iParam0 /*7*/], func_1343(iParam0));
			unk_0xC5BBAB0F8336ECB7(Local_1710[iParam0 /*7*/], 12);
			if (func_1342(iParam0))
			{
				unk_0xB5E587F8B911573B(Local_1710[iParam0 /*7*/], 1);
			}
			if (!func_1262(iParam0, iLocal_1841, 46))
			{
				func_1341(&(Local_1710[iParam0 /*7*/]), 1);
				func_1260(iParam0, 46);
			}
		}
	}
	else
	{
		unk_0xFA3E6ADC3E5D386E(Local_1710[iParam0 /*7*/], func_1345(iParam0, 0));
		if (unk_0xB20B4DFB7E26761E(Local_1710[iParam0 /*7*/]) != func_1350(iParam0) && func_1349(func_1350(iParam0)))
		{
			unk_0x252BE56DB93DF816(Local_1710[iParam0 /*7*/], func_1350(iParam0));
			unk_0xDD944E3FD2028A48(Local_1710[iParam0 /*7*/], func_1343(iParam0));
		}
		if (unk_0xFBC6C2D539FEBE5D(Local_1710[iParam0 /*7*/]) != func_1345(iParam0, 0))
		{
			unk_0xFA3E6ADC3E5D386E(Local_1710[iParam0 /*7*/], func_1345(iParam0, 0));
		}
		if (func_399(iParam0) > -1 && func_400() == 2)
		{
			if (func_1340(iParam0))
			{
				if (unk_0x159BC3DDA80D71AC(Local_1898.f_49[func_399(iParam0) /*6*/]) && !unk_0xE50EB54E0F21BED0(unk_0xD93F965CFAC1D06A(Local_1898.f_49[func_399(iParam0) /*6*/]), 0))
				{
					unk_0x0248C79F1248F36C(Local_1710[iParam0 /*7*/], SYSTEM::ROUND(unk_0xA8D713A937F31250(unk_0xD93F965CFAC1D06A(Local_1898.f_49[func_399(iParam0) /*6*/]))));
				}
			}
		}
	}
}

int func_1340(int iParam0)
{
	if (Local_834.f_100.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_18);
		return StackVal;
	}
	return 0;
}

void func_1341(var uParam0, bool bParam1)
{
	unk_0x89936830A493350F(*uParam0, 1);
	unk_0x8E2E721D21D4A751(*uParam0, 250);
	unk_0xFABF45630A359B11(*uParam0, 7000);
	if (bParam1)
	{
		unk_0xC5CEFC62F3637652();
	}
}

bool func_1342(int iParam0)
{
	if (Local_834.f_100.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_14);
		return StackVal;
	}
	return Local_284.f_19.f_1.f_3;
}

var func_1343(int iParam0)
{
	if (Local_834.f_100.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_13);
		return StackVal;
	}
	return func_1344();
}

char* func_1344()
{
	return "FMC_BLIP_ME";
}

int func_1345(int iParam0, bool bParam1)
{
	if (Local_834.f_100.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_5);
		return func_707(StackVal);
	}
	if (!bParam1)
	{
		if (func_1262(iParam0, iLocal_1841, 12))
		{
			return 1;
		}
	}
	else if (func_1033() == 23 && func_1262(iParam0, iLocal_1841, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_1710[iParam0 /*7*/].f_4 != func_51())
	{
		return func_707(func_1346(Local_1710[iParam0 /*7*/].f_4));
	}
	if (func_420(iParam0))
	{
		if (!func_62(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_1346(int iParam0)
{
	int iVar0;
	
	iVar0 = func_781(iParam0);
	if (iVar0 != -1)
	{
		return func_779(iVar0);
	}
	return 1;
}

var func_1347(int iParam0)
{
	if (Local_834.f_100.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_6);
		return StackVal;
	}
	return func_1348();
}

var func_1348()
{
	return Local_284.f_19.f_1.f_2;
}

int func_1349(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		
		default:
	}
	return 1;
}

int func_1350(int iParam0)
{
	if (Local_834.f_100.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_4);
		return StackVal;
	}
	if (Local_284.f_19.f_1 != -1)
	{
		return Local_284.f_19.f_1;
	}
	return func_1351();
}

int func_1351()
{
	return 478;
}

int func_1352(int iParam0)
{
	if (!bLocal_1848)
	{
		return 0;
	}
	if (func_1358(iParam0, 1))
	{
		return 0;
	}
	if (Local_1710[iParam0 /*7*/].f_4 != func_51() && func_400() != 1)
	{
		return 0;
	}
	if (func_454(iParam0, 10) && !func_6(iParam0, 7))
	{
		return 0;
	}
	if (func_1262(iParam0, iLocal_1841, 14))
	{
		return 0;
	}
	if ((func_454(iParam0, 16) && func_6(iParam0, 23)) && !func_393(iLocal_1841, 2))
	{
		return 0;
	}
	if (func_6(iParam0, 23) && func_1357(iLocal_1838))
	{
		return 0;
	}
	if (func_6(iParam0, 29) && func_6(iParam0, 40))
	{
		return 0;
	}
	if (func_1353())
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_100);
	return StackVal;
}

int func_1353()
{
	if (unk_0x6C9038EC46DA62DE(iLocal_1838) < 1 && unk_0xD0F699EF711D76D7(iLocal_1838) < 1)
	{
		return 0;
	}
	if (func_1356())
	{
		return 1;
	}
	if (func_1355())
	{
		if (func_1354(iLocal_1838, 0, 1, 0) || func_1306(iLocal_1838, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1354(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_7())
	{
		if ((((iParam1 || !func_6(iVar0, 4)) && (iParam2 || !func_1262(iVar0, unk_0x4645C707A0067CB6(iParam0), 1))) && (iParam3 || !func_1262(iVar0, unk_0x4645C707A0067CB6(iParam0), 12))) && func_1262(iVar0, unk_0x4645C707A0067CB6(iParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1355()
{
	if (Local_834.f_55.f_11 != 0)
	{
		Call_Loc(Local_834.f_55.f_11);
		return StackVal;
	}
	return 1;
}

int func_1356()
{
	if (Local_834.f_55.f_10 != 0)
	{
		Call_Loc(Local_834.f_55.f_10);
		return StackVal;
	}
	return 0;
}

int func_1357(int iParam0)
{
	if ((unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_71.f_2, 9) && !(unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_71.f_2, 6) && unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_71.f_2, 7))) || ((unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_71.f_2, 6) && !unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_71.f_2, 7)) && !unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

int func_1358(int iParam0, bool bParam1)
{
	if (func_6(iParam0, 4) || func_6(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_1262(iParam0, iLocal_1841, 6) || func_1262(iParam0, iLocal_1841, 9))
		{
			return 1;
		}
	}
	return 0;
}

void func_1359(int iParam0, int iParam1)
{
	if (Local_1710[iParam0 /*7*/].f_4 == iLocal_1838)
	{
		if (iParam1 != 5)
		{
			if (!func_1365(Local_1898.f_2.f_15[iParam0 /*2*/]))
			{
				func_1364(Local_1898.f_2.f_15[iParam0 /*2*/]);
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1689734.f_4791 && !func_1363(iLocal_1838)) && !func_1263())
		{
			if (func_1365(Local_1898.f_2.f_15[iParam0 /*2*/]))
			{
				func_1360(Local_1898.f_2.f_15[iParam0 /*2*/]);
			}
		}
	}
}

void func_1360(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_432(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554.f_1[iVar0 /*2*/]) && func_430(Param0, Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554.f_1[iVar0 /*2*/]))
		{
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554.f_1[iVar0 /*2*/].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (func_1362(unk_0x1146A9AE09CE2B14()) <= 0)
	{
		unk_0xC664C0067EEAB8D1(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554), 0);
		func_1361();
	}
}

void func_1361()
{
	Global_1689734.f_4946.f_3 = 0;
	Global_1689734.f_4946 = -1;
	Global_1689734.f_4946.f_2 = -1000;
}

int func_1362(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_51())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_432(Global_1630816[iParam0 /*597*/].f_554.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_1363(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_51() && (func_11(iParam0, 1, 1) || Global_2405077.f_2678))
	{
		bVar0 = unk_0x234B68AC2E35ED5A(Global_2426865[iParam0 /*449*/].f_319, 1);
		return bVar0;
	}
	return 0;
}

void func_1364(struct<2> Param0)
{
	int iVar0;
	
	if (!func_432(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_432(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554.f_1[iVar0 /*2*/]))
		{
			Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554.f_1[iVar0 /*2*/] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554), 0);
	func_428(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

int func_1365(struct<2> Param0)
{
	int iVar0;
	
	if (!func_432(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_432(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554.f_1[iVar0 /*2*/]) && func_430(Param0, Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_554.f_1[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1366(int iParam0)
{
	if (iLocal_1873[iParam0] != func_716())
	{
		if (uLocal_1875[iParam0] != iLocal_1873[iParam0])
		{
			uLocal_1875[iParam0] = iLocal_1873[iParam0];
		}
	}
}

void func_1367(int iParam0, int iParam1)
{
	bool bVar0;
	struct<3> Var1;
	
	if (!func_454(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_1710[iParam0 /*7*/].f_1 < func_1371(iParam0))
	{
		bVar0 = true;
		if (func_1370(iParam0) && !unk_0x895779B17E5AA5FE(iLocal_1839, iParam1, 287))
		{
			bVar0 = false;
		}
		if (func_1369(iParam0) != -1f)
		{
			Var1 = { unk_0xD6E677FAD7521410(iParam1, 0) };
			if (unk_0x0BCA9ADE67DF9DD8((Var1.f_2 - Local_1842.f_2)) > func_1369(iParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Local_834.f_100.f_33 != 0)
		{
			if (!func_1262(iParam0, iLocal_1841, 35))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_834.f_100.f_33);
			}
		}
		func_1260(iParam0, 35);
		func_1260(iParam0, 0);
	}
	else
	{
		func_1368(iParam0, 0);
	}
}

void func_1368(int iParam0, int iParam1)
{
	if (func_127(&(Local_2125[iLocal_1840 /*38*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

float func_1369(int iParam0)
{
	if (Local_834.f_100.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_24);
		return StackVal;
	}
	return -1f;
}

int func_1370(int iParam0)
{
	if (Local_834.f_100.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_23);
		return StackVal;
	}
	return 0;
}

float func_1371(int iParam0)
{
	if (Local_834.f_100.f_22 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_22);
		return StackVal;
	}
	if (func_420(iParam0))
	{
		return 50f;
	}
	return 15f;
}

void func_1372(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1314())
	{
		return;
	}
	if (!func_6(iParam0, 32) && !func_1262(iParam0, iLocal_1841, 24))
	{
		if (func_1380(iParam0))
		{
			if (func_1276(Local_1898.f_2[iParam0]))
			{
				unk_0x6DA4D1FB7DCE9FD8(iParam1, 0);
				unk_0xFEDD7E9148CF3B3E(Local_1898.f_2[iParam0], 1);
				unk_0x8B27CC6455F82A38(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1);
				func_1379(256, 0, 0);
				func_1260(iParam0, 24);
			}
		}
	}
	else
	{
		func_1373(iParam1, &(Local_1710[iParam0 /*7*/].f_5), func_1378(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_1310(bParam2, iParam0);
	}
}

void func_1373(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	if (unk_0x1146A9AE09CE2B14() == func_12())
	{
		if ((unk_0x419E13582192CFEA(iParam0) && !bParam2) && !func_1377())
		{
			if (func_17(uParam1, 1000, 0))
			{
				func_1376(unk_0xD6E677FAD7521410(iParam0, 1), iParam3);
				func_629(uParam1);
			}
		}
		else
		{
			func_1374(iParam3);
		}
	}
}

void func_1374(int iParam0)
{
	if (!func_184(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam0 /*3*/], func_1375(), 0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam0 /*3*/] = { func_1375() };
	}
	if (!func_184(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_126[iParam0 /*3*/], func_1375(), 0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_126[iParam0 /*3*/] = { func_1375() };
	}
}

Vector3 func_1375()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1376(struct<3> Param0, int iParam3)
{
	if (!func_184(Param0, Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam3 /*3*/], 0))
	{
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_126[iParam3 /*3*/] = { Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam3 /*3*/] };
		Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_11.f_151[iParam3 /*3*/] = { Param0 };
	}
}

int func_1377()
{
	int iVar0;
	
	if (unk_0x234B68AC2E35ED5A(Global_2544210.f_4628, 2))
	{
		if (func_58(unk_0x1146A9AE09CE2B14(), 1))
		{
			iVar0 = func_81(unk_0x1146A9AE09CE2B14());
			if (iVar0 != func_51())
			{
				if (Global_2426865[iVar0 /*449*/].f_209)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1378(int iParam0)
{
	if ((func_6(iParam0, 3) || func_6(iParam0, 4)) || Local_1710[iParam0 /*7*/].f_4 != func_51())
	{
		return 1;
	}
	return 0;
}

void func_1379(int iParam0, bool bParam1, bool bParam2)
{
	struct<14> Var0;
	int iVar14;
	
	Var0.f_2 = -503637306;
	Var0.f_10 = unk_0x1146A9AE09CE2B14();
	Var0.f_11 = func_52();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		iVar14 = func_48(unk_0x1146A9AE09CE2B14());
	}
	else if (bParam2)
	{
		iVar14 = func_50(1);
	}
	else
	{
		iVar14 = func_168(1, 1);
	}
	func_1111(Var0, iVar14);
}

int func_1380(int iParam0)
{
	if (!func_1383(iParam0))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_834.f_100.f_37);
	if (!StackVal)
	{
		return 0;
	}
	if (func_17(&(Local_1898.f_2.f_22), func_1381(), 0))
	{
		return 1;
	}
	return 0;
}

int func_1381()
{
	if (Local_834.f_100.f_37.f_1 != 0)
	{
		Call_Loc(Local_834.f_100.f_37.f_1);
		return StackVal;
	}
	return func_1382();
}

int func_1382()
{
	return 20000;
}

bool func_1383(int iParam0)
{
	return func_6(iParam0, 1);
}

void func_1384(int iParam0, int iParam1)
{
	if (func_6(iParam0, 29) || !func_1388(iParam0))
	{
		return;
	}
	func_1385(iParam1, iParam0);
}

void func_1385(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (unk_0x1F9D47D45E125FA6(iParam0))
	{
		fVar0 = func_1387(iParam1);
		if (unk_0x0297E633EADA2182(iParam0))
		{
			fVar1 = 0.5f;
			fVar0 = 1f;
		}
		unk_0xB4D5E37C91862216(18, &uVar2, &uVar3, &uVar4, &uVar5);
		func_1386(iParam0, uVar2, uVar3, uVar4, fVar0, fVar1, 0);
	}
}

void func_1386(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4, float fParam5, bool bParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	if (unk_0xA2CCAAC7F5CA3F49(iParam0))
	{
		iVar11 = unk_0xFAA5505029C4B5A6(iParam0);
		if (!unk_0xECEC7528A52B4EE8(iVar11))
		{
			if (unk_0xC49311A2A500FF09(iVar11, 0) && !unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(iVar11, 0))))
			{
				iParam0 = unk_0x75B58B38E45C6F9A(iVar11, 0);
			}
		}
	}
	fVar9 = 0.5f;
	iVar10 = unk_0x6471F4759775FCA4(iParam0);
	unk_0xC78A38E5FBC66080(iVar10, &Var0, &Var3);
	fVar12 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar13 = (Var3.f_2 - fVar12);
	if (fVar9 <= (fVar13 + 0.1f))
	{
		fVar9 = ((fVar13 + fParam4) - 0.1f);
	}
	switch (iVar10)
	{
		case joaat("seven70"):
		case joaat("raptor"):
		case joaat("issi3"):
		case joaat("comet3"):
		case joaat("specter2"):
		case joaat("hermes"):
		case joaat("dominator3"):
		case joaat("jugular"):
		case 1377217886:
		case -1244461404:
			fVar9 = (fVar9 + 0.25f);
			break;
		
		case joaat("insurgent2"):
			fVar9 = (fVar9 + 0.75f);
			break;
	}
	fVar9 = (fVar9 + fParam5);
	fVar14 = 0f;
	if (bParam6)
	{
		Var6 = { unk_0xD6E677FAD7521410(iParam0, 1) - Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar9), 0f, 0f) };
		fVar14 = 180f;
	}
	else
	{
		Var6 = { unk_0xD6E677FAD7521410(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar9), 0f, 0f) };
	}
	if (iVar10 == joaat("imp_prop_impexp_boxpile_02"))
	{
		Var6 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xA8D713A937F31250(iParam0), -1.45f, 0.5f, 0f) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar9), 0f, 0f) };
	}
	else if (iVar10 == 897163609)
	{
		Var6 = { unk_0x26C2ACB261895E70(unk_0xD6E677FAD7521410(iParam0, 1), unk_0xA8D713A937F31250(iParam0), 0f, -0.3f, (Var3.f_2 + 0.17f)) };
	}
	unk_0x22B88F4BA785575E(2, Var6, 0f, 0f, 0f, 180f, fVar14, 0f, fParam4, fParam4, fParam4, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

float func_1387(var uParam0)
{
	if (Local_834.f_100.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_834.f_100.f_20);
		return StackVal;
	}
	return 0.3f;
}

int func_1388(int iParam0)
{
	return 0;
}

void func_1389(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_454(iParam0, 9) || Local_834.f_100.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_834.f_100.f_36);
		if (StackVal)
		{
			if (!func_6(iParam0, 31))
			{
				if (func_1276(Local_1898.f_2[iParam0]))
				{
					func_449(iParam0, 0, 0);
					func_1260(iParam0, 22);
				}
			}
		}
		else
		{
			return;
		}
	}
	if (!unk_0xE50EB54E0F21BED0(iParam1, 0))
	{
		iVar0 = unk_0x45049B4A3B83D806(iParam1);
		if (iVar0 != -1)
		{
			if (unk_0xA2CCAAC7F5CA3F49(iVar0))
			{
				iVar1 = unk_0xFAA5505029C4B5A6(iVar0);
				if (unk_0x72D30262CF8C8603(iVar1))
				{
					iVar2 = unk_0xCB567ED25393C1DF(iVar1);
					if (iVar2 == iLocal_1838)
					{
						if (unk_0xB364346471C3B028(Local_1898.f_2[iParam0]))
						{
							unk_0x27FEFDFA220EBB32(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 0);
							unk_0x8F160110753EB17B(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), true);
							unk_0xA2C015B68CE01357(unk_0xD93F965CFAC1D06A(Local_1898.f_2[iParam0]), false);
							func_1260(iParam0, 1);
							if (!func_6(iParam0, 1))
							{
								func_1260(iParam0, 18);
							}
							*uParam2 = 1;
							func_1397();
							*iParam3 = iParam0;
						}
					}
					else if (!unk_0xFCC26BA7572E9F1F(iVar2))
					{
						func_1260(iParam0, 12);
					}
				}
				else if (!unk_0xECEC7528A52B4EE8(iVar1))
				{
					if (unk_0x284BE2EA89FED4E1(iVar1))
					{
						if (unk_0xAB3E7E62A69D0DB3(iVar1, uLocal_1741))
						{
							func_1260(iParam0, 1);
							if (!func_6(iParam0, 1))
							{
								func_1260(iParam0, 18);
							}
							*uParam2 = 1;
							func_1397();
							*iParam3 = iParam0;
						}
					}
				}
				if (unk_0xC49311A2A500FF09(iVar1, 0))
				{
					if (unk_0x75B58B38E45C6F9A(iVar1, 0) == iLocal_1845)
					{
						func_1260(iParam0, 14);
					}
				}
			}
			else if (unk_0x55F5BD4ABD80B211(iVar0))
			{
				iVar3 = unk_0x611CD1312FD3CA66(iVar0);
				if (unk_0xBFCE58B2B3249999(iVar3, 0) && !func_1396())
				{
					iVar4 = func_399(iParam0);
					if (!func_1395(Local_284.f_67.f_1[iVar4 /*14*/].f_3) || unk_0x0D5E478A215B3F4A(iVar0))
					{
						if (!func_1395(iLocal_1846))
						{
							func_1260(iParam0, 21);
							if (unk_0xC49311A2A500FF09(iLocal_1839, 0))
							{
								if (unk_0x75B58B38E45C6F9A(iLocal_1839, 0) == iVar3)
								{
									if (func_1394(iLocal_1839, 0) == -1)
									{
										func_1260(iParam0, 1);
										if (!func_6(iParam0, 1))
										{
											func_1260(iParam0, 18);
											func_1397();
										}
										*uParam2 = 1;
										func_1397();
										*iParam3 = iParam0;
									}
									func_1260(iParam0, 14);
								}
								else
								{
									func_1393(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (func_460() == 0)
				{
					func_1390(iParam0);
				}
			}
		}
	}
}

void func_1390(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	float fVar8;
	
	if (func_1276(Local_1898.f_2[iParam0]))
	{
		unk_0x3211C35423263392(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1, 1);
		unk_0x158745943C39F680(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1, 0);
		unk_0x4603196EEEA2355C(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), true, 0);
		func_1392(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]));
		func_1260(iParam0, 45);
		Var0 = { unk_0xD6E677FAD7521410(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), 1) };
		Var3 = { unk_0xEFC7485122683888(Var0, 1067030938, 1069547520) };
		if (Var3.x == Var0.x && Var3.f_1 == Var0.f_1)
		{
			iVar6 = func_399(iParam0);
			if (iVar6 != -1)
			{
				uVar7 = Local_1898.f_49[iVar6 /*6*/];
				if (unk_0x159BC3DDA80D71AC(uVar7))
				{
					Var3 = { unk_0xD6E677FAD7521410(unk_0x854C404AEB476240(uVar7), 0) };
				}
			}
		}
		fVar8 = func_1391(unk_0x6471F4759775FCA4(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0])));
		Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
		unk_0x78CDDD1E6367978D(unk_0xBD11ACD80727BD31(Local_1898.f_2[iParam0]), Var3, 1, 0, 0, 1);
	}
}

float func_1391(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_268(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_2 - Var3.f_2));
}

void func_1392(int iParam0)
{
	unk_0x3B3F13C4C5844979(uParam0, 1);
	unk_0xC5DE9743D6DA2C15(uParam0);
	unk_0x3FB57058E287267D(iParam0, 1);
}

void func_1393(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (((unk_0x419E13582192CFEA(iLocal_1845) && func_1394(iLocal_1839, 0) == -1) && unk_0xDA872572A987B2AD(iParam0, iLocal_1845)) && unk_0x55F5BD4ABD80B211(iParam0))
	{
		if (unk_0x9B73EB6255D4AE81(iParam0, -1, 0) || unk_0x83E7671FB1B0EA3F(iLocal_1845))
		{
			func_1260(iParam1, 1);
			if (!func_6(iParam1, 1))
			{
				func_1260(iParam1, 18);
			}
			*uParam2 = 1;
			func_1397();
			*uParam3 = iParam1;
		}
	}
}

int func_1394(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0xECEC7528A52B4EE8(iParam0))
	{
		if (unk_0xC49311A2A500FF09(iParam0, iParam1))
		{
			iVar0 = unk_0x75B58B38E45C6F9A(iParam0, iParam1);
			if (unk_0x419E13582192CFEA(iVar0))
			{
				iVar1 = unk_0xEF6894DFD91DE23D(unk_0x6471F4759775FCA4(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0x9B73EB6255D4AE81(iVar0, iVar3, 0))
					{
						if (unk_0x27FC1B0077581B37(iVar0, iVar3, 0) == iParam0)
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

int func_1395(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("armytrailer2"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("tr2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_1396()
{
	return 0;
}

void func_1397()
{
	if (!bLocal_1847)
	{
		return;
	}
	if (!func_1193(iLocal_1838))
	{
		func_1398(0);
	}
}

void func_1398(int iParam0)
{
	if (!func_943(unk_0x1146A9AE09CE2B14()))
	{
		if (iParam0 || func_1317(unk_0x1146A9AE09CE2B14()) != 0)
		{
			func_1251(20);
			func_622(func_1399());
			if (func_954(unk_0x1146A9AE09CE2B14()))
			{
				if (!unk_0x234B68AC2E35ED5A(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1, 8))
				{
					unk_0x191DDA30577F440A(&(Global_1630816[unk_0x1146A9AE09CE2B14() /*597*/].f_1), 8);
				}
			}
		}
	}
}

int func_1399()
{
	int iVar0;
	
	iVar0 = func_194(unk_0x1146A9AE09CE2B14());
	if (func_1258(iVar0) == 0 || func_1258(iVar0) == 3)
	{
		return -1;
	}
	if (func_1400(iVar0))
	{
		return 65;
	}
	if (func_1225(iVar0))
	{
		return 66;
	}
	if (func_1215(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_1400(int iParam0)
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

void func_1401(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((!func_454(iParam0, 7) || func_6(iParam0, 39)) || func_1262(iParam0, iLocal_1841, 32))
	{
		return;
	}
	iVar0 = func_51();
	if (Local_834.f_100.f_35 != 0)
	{
		iVar1 = 0;
		while (iVar1 < unk_0x5E72DF7B8C03AA05())
		{
			iVar2 = unk_0x6750311806FF130A(iVar1);
			Stack.Push(unk_0xF46EDF82CA845956(iVar2));
			Stack.Push(iParam0);
			Stack.Push(iVar2);
			Call_Loc(Local_834.f_100.f_35);
			if (StackVal && StackVal)
			{
				iVar0 = unk_0x539ED6DF32477DE0(iVar2);
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (func_11(iVar0, 1, 1))
	{
		if (iVar0 == iLocal_1838 && func_108(Local_1898.f_2[iParam0]))
		{
			if (!unk_0xD79E16EA1337F8F9(iParam1))
			{
				unk_0x2510DA2AA9F929F2(unk_0x6F9D3E582271B7F5(iParam1), iLocal_1839);
			}
			unk_0x4603196EEEA2355C(iParam1, true, 0);
			func_1260(iParam0, 32);
		}
	}
	else if (func_1276(Local_1898.f_2[iParam0]))
	{
		unk_0x4603196EEEA2355C(iParam1, true, 0);
		func_1260(iParam0, 32);
	}
}

void func_1402(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if ((!func_421(iParam0) || func_6(iParam0, 39)) || func_1262(iParam0, iLocal_1841, 36))
	{
		return;
	}
	uVar0 = func_1406(iParam0);
	if (unk_0x159BC3DDA80D71AC(uVar0) && func_108(uVar0))
	{
		iVar1 = unk_0xD93F965CFAC1D06A(uVar0);
		if (!unk_0xE50EB54E0F21BED0(iVar1, 0) && func_1276(Local_1898.f_2[iParam0]))
		{
			if (func_1404(iParam1, iVar1, func_1405(iParam0, unk_0x6471F4759775FCA4(iVar1)), 0f, 0f, 90f, 0, 0))
			{
				func_1403(iVar1);
				func_1260(iParam0, 36);
			}
		}
	}
}

void func_1403(int iParam0)
{
	var uVar0;
	
	switch (func_400())
	{
		case 2:
			uVar0 = unk_0x611CD1312FD3CA66(iParam0);
			unk_0xEF26B061362BFAC5(uVar0, 1);
			break;
	}
}

int func_1404(int iParam0, int iParam1, struct<3> Param2, struct<3> Param5, int iParam8, int iParam9)
{
	if (!unk_0xDA872572A987B2AD(uParam0, iParam1))
	{
		switch (func_400())
		{
			case 2:
				unk_0x0F1058706D5A58B4(iParam0, iParam1, unk_0xED5AD56E2C551D1E(iParam1, "chassis_dummy"), Param2, Param5, iParam8, 0, iParam9, 0, 2, 1);
				break;
			
			case 1:
				unk_0x2510DA2AA9F929F2(unk_0x6F9D3E582271B7F5(iParam0), unk_0xFAA5505029C4B5A6(iParam1));
				break;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_1405(int iParam0, int iParam1)
{
	switch (func_400())
	{
		case 2:
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
				
				case joaat("faggio"):
					return 0f, -0.65f, 0.5f;
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
		
		default:
	}
	return 0f, 0f, 0f;
}

var func_1406(int iParam0)
{
	var uVar0;
	
	switch (func_400())
	{
		case 2:
			return Local_1898.f_49[func_399(iParam0) /*6*/];
		
		case 1:
			return Local_1898.f_26[func_399(iParam0) /*22*/];
		
		default:
	}
	return uVar0;
}

void func_1407(int iParam0)
{
	func_1368(iParam0, 1);
	func_1368(iParam0, 21);
	func_1368(iParam0, 14);
}

int func_1408(int iParam0, struct<3> Param1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (iParam0 != func_51())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_432(Global_1630816[iParam0 /*597*/].f_554.f_1[iVar0 /*2*/]) && func_436(Global_1630816[iParam0 /*597*/].f_554.f_1[iVar0 /*2*/]))
			{
				Var2 = { func_434(Global_1630816[iParam0 /*597*/].f_554.f_1[iVar0 /*2*/]) };
				if (func_407(Var2, Param1))
				{
					iVar1++;
				}
			}
			iVar0++;
		}
	}
	return iVar1;
}

void func_1409()
{
	if (!func_1124(46))
	{
		return;
	}
	if (!func_2076())
	{
		func_665(46);
		return;
	}
	if (!func_1124(26))
	{
		if (func_681(800))
		{
			func_923(1, 0, 0);
			if (unk_0xCE84F8AB9BD41C13())
			{
				unk_0xED93DAC36CA89AF2();
			}
		}
	}
	else
	{
		Call_Loc(Local_834.f_13.f_23);
		Stack.Push(0);
		Call_Loc(Local_834.f_13.f_23.f_1);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Stack.Push(0);
		Call_Loc(Local_834.f_13.f_23.f_2);
		Call_Loc(Local_834.f_13.f_23.f_3);
		if (func_1410(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
		{
			func_664(800);
			func_923(0, 0, 0);
			func_665(46);
		}
	}
}

int func_1410(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7, var uParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16, int iParam17)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	func_2075();
	if (func_672(unk_0x1146A9AE09CE2B14(), 1, 0))
	{
		if (((bParam4 && func_11(unk_0x1146A9AE09CE2B14(), 1, 0)) && unk_0xF471787D45ADC2C1()) && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 1)
		{
		}
		else if (func_669() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!unk_0xECEC7528A52B4EE8(unk_0x7D2B9E6A64637269()))
	{
		unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 150, 1);
		if (!Global_2405077.f_701 == iParam0)
		{
			if (bParam15 && Global_2405077.f_701 == 37)
			{
			}
			else if (!Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 0)
			{
				if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_702) < func_381(0))
				{
					return 0;
				}
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 0;
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 0)
		{
			Global_2405077.f_701 = iParam0;
			Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 2;
			if (bParam2)
			{
				if (!func_2074())
				{
					bParam2 = false;
				}
			}
			Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 2;
			Global_2405077.f_2477 = 0;
			Global_2405077.f_2478 = 0;
			Global_2405077.f_2476 = 0;
			Global_2405077.f_2876 = 0;
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2405077.f_701 == 11)
			{
				Global_2405077.f_705 = { Global_2413982 };
				Global_2405077.f_708 = Global_2413982.f_5;
				Global_2405077.f_2896 = Global_2413982.f_26;
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 3;
			}
			else if (func_1816(&(Global_2405077.f_705), &(Global_2405077.f_708), Global_2405077.f_701, bVar3, iParam3, uParam5, iParam6, uParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 3;
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
						unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
						func_1811(&iVar2);
					}
					else
					{
						iVar2 = func_991();
						func_1810(&iVar2);
					}
					if (func_2074())
					{
						if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
						{
							if (!unk_0x6471F4759775FCA4(unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0)) == Global_2405077.f_45.f_67)
							{
								iVar4 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
								if (iVar4 == Global_2405077.f_45.f_173)
								{
									func_1808();
								}
								unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
							}
						}
					}
					if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
					{
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 4;
					}
					else
					{
						iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
						if (unk_0xA6BE8F025C6B653F(iVar2))
						{
							func_1790(iVar2);
							func_1789(1);
							Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
						}
						else
						{
							unk_0x13F856602366FE17(iVar2);
						}
					}
				}
				else
				{
					func_1789(1);
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 4)
		{
			if (func_1787())
			{
				if (Global_2405077.f_45.f_65)
				{
					if (func_1653(Global_2405077.f_705, Global_2405077.f_705.f_1, func_1783(Global_2405077.f_45.f_67), Global_2405077.f_708, 0))
					{
						Global_2405077.f_703 = unk_0x551F46B3C7DFB654();
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 5;
					}
				}
				else if (func_1652(Global_2405077.f_45.f_67) || Global_2405077.f_45.f_67 == 0)
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 5)
		{
			unk_0xD991F7672CE8EAD3(unk_0x7D2B9E6A64637269(), 150, 1);
			if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
			{
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 6;
				if (Global_2405077.f_45.f_175)
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_236 = 1;
				}
				else
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_236 = 0;
				}
			}
			else if (unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_703) > 5000)
			{
				unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 4;
			}
			else if (unk_0x4E8DA737B686529A(unk_0x7D2B9E6A64637269(), -1794415470) == 7)
			{
				if (unk_0x419E13582192CFEA(Global_2405077.f_45.f_173) && unk_0xBFCE58B2B3249999(Global_2405077.f_45.f_173, 0))
				{
					func_1455(unk_0x7D2B9E6A64637269(), Global_2405077.f_45.f_173, -1, 0);
				}
				else
				{
					unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 4;
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 6)
		{
			Global_2405077.f_702 = unk_0x551F46B3C7DFB654();
			if (Global_2405077.f_711)
			{
				Global_2405077.f_704 = unk_0x551F46B3C7DFB654();
				Global_2405077.f_711 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(unk_0x551F46B3C7DFB654(), Global_2405077.f_704)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1574425)
			{
				func_1449(Global_2405077.f_705);
			}
			if (bParam7 && !Global_2441237.f_1351)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					if (unk_0x419E13582192CFEA(iVar2))
					{
						if ((unk_0xE50EB54E0F21BED0(iVar2, 0) || !unk_0xBFCE58B2B3249999(iVar2, 0)) || func_113(iVar2))
						{
							unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
						}
					}
				}
			}
			if (bVar5)
			{
				if (func_666(Global_2405077.f_705, Global_2405077.f_708, bVar1, bParam1, 0, 0, 1, bParam4, iParam16, 1, Global_2405077.f_2896))
				{
					if (bParam15)
					{
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 7;
						return 0;
					}
					else
					{
						func_1445();
					}
				}
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 7)
		{
			if ((Global_2405077.f_701 == 8 && Global_2405077.f_713.f_507) && Global_2405077.f_2876)
			{
				func_1445();
			}
			else if (func_1439(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0)) || func_1438())
			{
				if (Global_2405077.f_701 == 8 && !Global_2405077.f_2876)
				{
					Global_2405077.f_2876 = 1;
				}
				else
				{
					Global_2405077.f_701 = 37;
				}
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 2;
				Global_2405077.f_2477 = 0;
				Global_2405077.f_2478 = 0;
				Global_2405077.f_2476 = 0;
			}
			else
			{
				func_1445();
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 10)
		{
			if (SYSTEM::VDIST(Global_2413982, Global_2405077.f_705) > 0.1f)
			{
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					iVar2 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
					if (unk_0x69AF387D1A91914C(unk_0x6471F4759775FCA4(iVar2)) || unk_0xB480C9C35514775A(unk_0x6471F4759775FCA4(iVar2)))
					{
						unk_0x7956E831D8C0C17C(Global_2405077.f_705, Global_2405077.f_705.f_1, Global_2405077.f_705.f_2, &fVar0, 0, 0);
						if (fVar0 == 0f || (Global_2405077.f_705.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2413982, Global_2405077.f_705) > 15f)
							{
								Global_2405077.f_705 = { Global_2413982 };
								if (unk_0xA6BE8F025C6B653F(iVar2))
								{
									unk_0x78CDDD1E6367978D(iVar2, Global_2405077.f_705, Global_2405077.f_705.f_1, (fVar0 + func_1391(unk_0x6471F4759775FCA4(iVar2))), 1, 0, 0, 1);
									unk_0x47D0DDD8833C5E5F(iVar2, 1084227584);
								}
								Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
							}
							else
							{
								Global_2405077.f_705.f_2 = (Global_2405077.f_705.f_2 + 1f);
							}
						}
						else
						{
							if (unk_0xA6BE8F025C6B653F(iVar2))
							{
								unk_0x78CDDD1E6367978D(iVar2, Global_2405077.f_705, Global_2405077.f_705.f_1, (fVar0 + func_1391(unk_0x6471F4759775FCA4(iVar2))), 1, 0, 0, 1);
								unk_0x47D0DDD8833C5E5F(iVar2, 1084227584);
							}
							Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
						}
					}
					else
					{
						Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
					}
				}
				else
				{
					Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
				}
			}
			else
			{
				Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
			}
		}
		if (Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 11)
		{
			if (!bParam14)
			{
				if (unk_0x419E13582192CFEA(Global_2405077.f_45.f_173) && unk_0xA6BE8F025C6B653F(Global_2405077.f_45.f_173))
				{
					unk_0x4603196EEEA2355C(Global_2405077.f_45.f_173, true, 0);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					func_1430(iParam9, 0, 0);
				}
			}
			func_1428(func_76(unk_0x1146A9AE09CE2B14()), 0);
			if (unk_0x419E13582192CFEA(Global_2405077.f_45.f_173))
			{
				func_1808();
			}
			if (!(func_1652(Global_2405077.f_45.f_67) || Global_2405077.f_45.f_67 == 0) && !Global_2405077.f_489.f_5)
			{
				func_1427(0, 0);
			}
			func_1426(0, 0);
			if (bParam10)
			{
				func_1425();
			}
			func_1424();
			func_1411();
			if (bParam13)
			{
				func_383();
			}
			func_926();
			return 1;
		}
	}
	else if (!Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 == 0)
	{
		unk_0x16D66F11FE644901(unk_0x7D2B9E6A64637269());
		func_1810(&(Global_2405077.f_45.f_173));
		func_926();
	}
	Global_2405077.f_702 = unk_0x551F46B3C7DFB654();
	return 0;
}

void func_1411()
{
	int iVar0;
	
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_270.f_20 = -1;
	Global_2405077.f_2873 = -1f;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_1413(iVar0);
		iVar0++;
	}
	if (func_1412(unk_0x1146A9AE09CE2B14(), 0))
	{
		Global_2553486.f_85 = 1;
		Global_2553486.f_86 = unk_0x551F46B3C7DFB654();
	}
}

int func_1412(int iParam0, bool bParam1)
{
	if (func_11(iParam0, 0, 1))
	{
		if (!bParam1)
		{
			if (!Global_2426865[iParam0 /*449*/].f_270.f_14 == -1)
			{
				return 1;
			}
		}
		else if (!Global_2426865[iParam0 /*449*/].f_270.f_16 == -1)
		{
			return 1;
		}
	}
	return 0;
}

void func_1413(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = unk_0x1146A9AE09CE2B14();
	if (Global_2426865[iVar0 /*449*/].f_270.f_14 != -1)
	{
		if (func_1423(Global_2426865[iVar0 /*449*/].f_270.f_14))
		{
			if (!func_1419(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_14, 0, 0))
			{
				Global_2426865[iVar0 /*449*/].f_270.f_14 = -1;
			}
		}
		else
		{
			Global_2426865[iVar0 /*449*/].f_270.f_14 = -1;
		}
	}
	if (Global_2426865[iVar0 /*449*/].f_270.f_16 != -1)
	{
		if (func_1423(Global_2426865[iVar0 /*449*/].f_270.f_16))
		{
			if (!func_1419(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_16, 0, 1))
			{
				Global_2426865[iVar0 /*449*/].f_270.f_16 = -1;
			}
		}
		else
		{
			Global_2426865[iVar0 /*449*/].f_270.f_16 = -1;
		}
	}
	if (Global_2426865[iVar0 /*449*/].f_270.f_15 != -1)
	{
		if (!func_1419(unk_0x1146A9AE09CE2B14(), Global_2426865[iVar0 /*449*/].f_270.f_15, 0, 0))
		{
			Global_2426865[iVar0 /*449*/].f_270.f_15 = -1;
		}
	}
	if (func_1423(iParam0))
	{
		if (func_1419(unk_0x1146A9AE09CE2B14(), iParam0, 0, 0))
		{
			if (!Global_2426865[iVar0 /*449*/].f_270.f_14 == iParam0)
			{
				Global_2426865[iVar0 /*449*/].f_270.f_14 = iParam0;
			}
		}
		if (func_1419(unk_0x1146A9AE09CE2B14(), iParam0, 0, 1))
		{
			if (!Global_2426865[iVar0 /*449*/].f_270.f_16 == iParam0)
			{
				Global_2426865[iVar0 /*449*/].f_270.f_16 = iParam0;
			}
		}
		iVar2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
		if (func_1415(unk_0x1146A9AE09CE2B14(), iParam0, 1120403456))
		{
			unk_0x191DDA30577F440A(&(Global_2426865[iVar0 /*449*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		else
		{
			unk_0xC664C0067EEAB8D1(&(Global_2426865[iVar0 /*449*/].f_270.f_17[iVar2]), (iParam0 - iVar2 * 32));
		}
		fVar1 = SYSTEM::VDIST(func_1414(iParam0), func_76(unk_0x1146A9AE09CE2B14()));
		if (iParam0 == Global_2426865[iVar0 /*449*/].f_270.f_20)
		{
			Global_2405077.f_2873 = fVar1;
		}
		else if (fVar1 < Global_2405077.f_2873 || Global_2405077.f_2873 <= 0f)
		{
			Global_2405077.f_2873 = fVar1;
			Global_2426865[iVar0 /*449*/].f_270.f_20 = iParam0;
		}
	}
	else if (iParam0 == Global_2426865[iVar0 /*449*/].f_270.f_20)
	{
		Global_2426865[iVar0 /*449*/].f_270.f_20 = -1;
		Global_2405077.f_2873 = -1f;
	}
	if (func_1419(unk_0x1146A9AE09CE2B14(), iParam0, 0, 0))
	{
		if (!Global_2426865[iVar0 /*449*/].f_270.f_15 == iParam0)
		{
			Global_2426865[iVar0 /*449*/].f_270.f_15 = iParam0;
		}
	}
}

Vector3 func_1414(int iParam0)
{
	return Global_4014600[iParam0 /*45*/].f_4;
}

int func_1415(int iParam0, int iParam1, float fParam2)
{
	if (func_675())
	{
		return 1;
	}
	if (func_1418(iParam1))
	{
		if (unk_0x419E13582192CFEA(func_1417()))
		{
			if (func_1416(unk_0xD6E677FAD7521410(func_1417(), 1), iParam1, fParam2) && Global_1649982[unk_0x1146A9AE09CE2B14() /*256*/].f_93 == 8)
			{
				return 1;
			}
		}
		return func_1416(func_76(iParam0), iParam1, fParam2);
	}
	return 0;
}

int func_1416(struct<3> Param0, int iParam3, float fParam4)
{
	if (func_1418(iParam3))
	{
		if (SYSTEM::VDIST2(Param0, func_1414(iParam3)) < (fParam4 * fParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1417()
{
	if (unk_0x1146A9AE09CE2B14() != -1)
	{
		return Global_1695733.f_20;
	}
	return -1;
}

int func_1418(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 40)
	{
		return 1;
	}
	return 0;
}

int func_1419(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_1418(iParam1))
	{
		if (!bParam3)
		{
			return func_1420(func_76(iParam0), iParam1, fParam2);
		}
		else if (func_1420(func_76(iParam0), iParam1, fParam2))
		{
			return 1;
		}
		else if (func_1420(func_76(iParam0), iParam1, 15f))
		{
			if (func_11(iParam0, 1, 1))
			{
				iVar0 = unk_0xD56332194D622ECE(iParam0);
				if (unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iVar0, 0))
				{
					if (unk_0xC49311A2A500FF09(iVar0, 0))
					{
						iVar1 = unk_0xDA8C680C9B8BFAAF(iVar0);
						if (unk_0x419E13582192CFEA(iVar1) && !unk_0xE50EB54E0F21BED0(iVar1, 0))
						{
							if (unk_0x5B38E054B758C032(iVar1, "PYV_Yacht"))
							{
								iVar2 = unk_0x05351AF95891EE5C(iVar1, "PYV_Yacht");
								if (iVar2 == iParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_1420(struct<3> Param0, int iParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (func_1418(iParam3))
	{
		func_1421(iParam3, &Var0, &Var3, &fVar6, fParam4);
		return unk_0x09C4C80EA1D5B2F7(Param0, Var0, Var3, fVar6, 0, 1);
	}
	return 0;
}

void func_1421(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	Var0 = { func_1414(iParam0) };
	fVar3 = func_1422(iParam0);
	Var4 = { 0f, 1f, 0f };
	func_273(&Var4, 0f, 0f, fVar3);
	Var4 = { Var4 / FtoV(SYSTEM::VMAG(Var4)) };
	*uParam1 = { Var0 + Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam1->f_2 = (uParam1->f_2 - (0.5f * (34f + fParam4)));
	*uParam2 = { Var0 - Var4 * FtoV((0.5f * (120f + fParam4))) };
	uParam2->f_2 = (uParam2->f_2 + (0.5f * (34f + fParam4)));
	*uParam3 = (16.17f + fParam4);
}

var func_1422(int iParam0)
{
	return Global_4014600[iParam0 /*45*/].f_7;
}

int func_1423(int iParam0)
{
	if (func_1418(iParam0))
	{
		return Global_2553486.f_2[iParam0];
	}
	return 0;
}

void func_1424()
{
	Global_1626900 = -1;
	Global_1626906 = 0;
	Global_1626901 = -1;
}

void func_1425()
{
	Global_2405077.f_5 = 1;
}

void func_1426(float fParam0, int iParam1)
{
	struct<3> Var0;
	
	if (!func_1239() || iParam1)
	{
		if (unk_0x8B6A925F148E0E94() || unk_0xF471787D45ADC2C1())
		{
			if (!unk_0xEF482630D7014464())
			{
				Var0 = { func_76(unk_0x1146A9AE09CE2B14()) };
				if (Var0.f_2 > -80f)
				{
					unk_0x3A13FD2813C8251F(0f, 1065353216);
					unk_0xDF23DCD7A3E1B7A5(fParam0);
				}
			}
		}
	}
}

void func_1427(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0x5976053523EA16C8(unk_0x7D2B9E6A64637269()))
	{
		Var0 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2405077.f_709)));
		if (unk_0x7956E831D8C0C17C(Var0, &fVar3, 0, 0))
		{
			fVar4 = (Var0.f_2 - (fVar3 + 1f));
			if ((unk_0x0BCA9ADE67DF9DD8(fVar4) > 0f && unk_0x0BCA9ADE67DF9DD8(fVar4) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (unk_0xCE84F8AB9BD41C13())
					{
						unk_0xED93DAC36CA89AF2();
					}
				}
				unk_0x78CDDD1E6367978D(unk_0x7D2B9E6A64637269(), Var0.x, Var0.f_1, fVar3, 0, 1, 0, 1);
				Global_2405077.f_709 = 0;
			}
		}
		else if (Global_2405077.f_709 < 3)
		{
			Global_2405077.f_709++;
			func_1427(0, 0);
		}
		else
		{
			Global_2405077.f_709 = 0;
		}
	}
}

void func_1428(struct<3> Param0, bool bParam3)
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	var uVar6;
	var uVar9;
	var uVar10;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		fVar1 = func_1429(unk_0x6471F4759775FCA4(iVar0));
		fVar1 = (fVar1 * 0.5f);
		fVar1 = (fVar1 + 6f);
		unk_0x6AF7EE4DD9F8B944(Param0, fVar1, 1, 0, 0, bParam3);
		unk_0xB7D390F8F682127B(Param0, fVar1, 1, 0, 1, 1, bParam3, 0);
		unk_0x8BE64A4794BF87FA(Param0, 6f);
	}
	else
	{
		uVar10 = unk_0x3876E9B099B1F669(Param0.x, Param0.f_1, (Param0.f_2 - 2f), Param0.x, Param0.f_1, (Param0.f_2 + 1f), 19, 0, 7);
		unk_0xA2B3B271E2AE7A08(uVar10, &iVar2, &uVar3, &uVar6, &uVar9);
		unk_0x6AF7EE4DD9F8B944(Param0, 0.7f, 1, 0, 0, bParam3);
		if (!iVar2 == 0)
		{
			unk_0xB7D390F8F682127B(Param0, 6f, 1, 0, 1, 1, bParam3, 0);
			if (bParam3)
			{
				unk_0xBA7E979B202649F9(Param0, 6f, 17);
			}
			else
			{
				unk_0xBA7E979B202649F9(Param0, 6f, 16);
			}
		}
		unk_0x8BE64A4794BF87FA(Param0, 2.5f);
	}
}

float func_1429(int iParam0)
{
	struct<2> Var0;
	struct<2> Var3;
	
	func_268(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return unk_0x0BCA9ADE67DF9DD8((Var0.f_1 - Var3.f_1));
}

void func_1430(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && func_1437())
	{
		iVar1 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (func_1435(iVar1, &iVar0))
		{
			func_1431(iVar1, iParam0, iParam1);
			if (iVar0 && !bParam2)
			{
				unk_0x795957CD3A0042C8(&iVar1);
			}
		}
	}
}

void func_1431(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = unk_0x7404749A8C3BD799(iParam0);
	if (unk_0xB7D6400C89373777(uVar0))
	{
		if (Global_1574419 && unk_0xEACFC87E44438F24(iParam0, joaat("rhino")))
		{
			iParam1 = 1;
			unk_0x2B56C657979E352B(uVar0, 1, 1, func_1434());
			return;
		}
		else if (func_1433())
		{
			func_1432(iParam0, 0);
			return;
		}
		if (iParam2 > iParam1)
		{
			unk_0x2B56C657979E352B(uVar0, iParam2, 1, func_1434());
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
			{
				unk_0xE49D47C4978CFEDA(iParam2);
			}
		}
		else
		{
			unk_0x2B56C657979E352B(uVar0, iParam1, 1, func_1434());
			if (unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), iParam0, 0))
			{
				unk_0xE49D47C4978CFEDA(iParam1);
			}
		}
	}
}

int func_1432(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5E72DF7B8C03AA05())
	{
		if (unk_0xF46EDF82CA845956(unk_0x6750311806FF130A(iVar0)))
		{
			iVar1 = unk_0x539ED6DF32477DE0(unk_0x6750311806FF130A(iVar0));
			unk_0x9B25F77587646D08(iVar1, 1);
			if (iParam1 && unk_0x7C3E030BC3ED6671(iVar1) != unk_0x7C3E030BC3ED6671(unk_0x1146A9AE09CE2B14()))
			{
				unk_0x23D23D5696058D5D(iVar1, 1);
			}
		}
		iVar0++;
	}
	if (unk_0xA6BE8F025C6B653F(iParam0))
	{
		unk_0x741BC8585A65F4E0(iParam0, 1);
		return 1;
	}
	else
	{
		unk_0x13F856602366FE17(iParam0);
	}
	return 0;
}

bool func_1433()
{
	return Global_1574437;
}

int func_1434()
{
	if (func_175() != 0)
	{
		return 0;
	}
	if (!func_387(unk_0x1146A9AE09CE2B14()))
	{
		return 0;
	}
	if (Global_1590908[unk_0x1146A9AE09CE2B14() /*874*/] == -1)
	{
		return 0;
	}
	return 1;
}

int func_1435(int iParam0, int iParam1)
{
	if (func_1436(iParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

int func_1436(int iParam0, var uParam1)
{
	if (unk_0x419E13582192CFEA(iParam0))
	{
		if (!unk_0xEE1D92A39CF8E1E6(iParam0))
		{
			if (unk_0x456C91FDAFEEF560(iParam0))
			{
				if (!unk_0x8C6BE3ED9638F314(unk_0x6471F4759775FCA4(iParam0)))
				{
					unk_0x4985CD0720AFD468(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x9984C023D4E57C2E(iParam0, 0))
		{
			if (unk_0xA6BE8F025C6B653F(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1437()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0xBFCE58B2B3249999(iVar0, 0))
			{
				if (unk_0x27FC1B0077581B37(iVar0, -1, 0) == unk_0x7D2B9E6A64637269())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1438()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	
	Var3 = { func_76(unk_0x1146A9AE09CE2B14()) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_11(iVar1, 1, 1))
		{
			if (unk_0xBBC3519C07015926(unk_0xD56332194D622ECE(iVar1)))
			{
				if (!iVar1 == unk_0x1146A9AE09CE2B14())
				{
					if (unk_0xEBB066F8EADD0C1F(unk_0x1146A9AE09CE2B14(), iVar1))
					{
						fVar2 = SYSTEM::VMAG(func_76(iVar1) - Var3);
						if (fVar2 < 0.2f)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1439(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	
	iVar0 = unk_0x5C21627F44D0A4AC(&Global_1315871);
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar7 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (!unk_0xE50EB54E0F21BED0(iVar7, 0))
		{
			iVar8 = unk_0x6471F4759775FCA4(iVar7);
			Var9 = { unk_0xD6E677FAD7521410(iVar7, 1) };
			fVar12 = unk_0xA8D713A937F31250(iVar7);
		}
	}
	iVar6 = 0;
	while (iVar6 < iVar0)
	{
		if (unk_0x419E13582192CFEA(Global_1315871[iVar6]))
		{
			if (!unk_0xE50EB54E0F21BED0(Global_1315871[iVar6], 0) && unk_0xF41EB7643E61A928(unk_0x7D2B9E6A64637269(), Global_1315871[iVar6], 0))
			{
			}
			else if (func_1444(Global_1315871[iVar6]))
			{
			}
			else if (!func_1440(Global_1315871[iVar6]))
			{
				Var1 = { unk_0xD6E677FAD7521410(Global_1315871[iVar6], 0) };
				fVar4 = unk_0xA8D713A937F31250(Global_1315871[iVar6]);
				iVar5 = unk_0x6471F4759775FCA4(Global_1315871[iVar6]);
				if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
				{
					if (func_275(Var1, fVar4, iVar5, Var9, fVar12, iVar8, 0))
					{
						return 1;
					}
				}
				else if (func_266(Param0, Var1, fVar4, iVar5, 1036831949))
				{
					return 1;
				}
			}
		}
		iVar6++;
	}
	return 0;
}

int func_1440(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x9B73EB6255D4AE81(iParam0, -1, 0))
	{
		iVar0 = unk_0x27FC1B0077581B37(iParam0, -1, 0);
		if (unk_0x419E13582192CFEA(iVar0) && !unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0x72D30262CF8C8603(iVar0))
			{
				iVar1 = unk_0xCB567ED25393C1DF(iVar0);
				if (func_11(iVar1, 0, 0))
				{
					if (func_1441(iVar1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1441(int iParam0)
{
	if (func_1443())
	{
		if (func_1442(unk_0x17114A8CCDEB9E3D(iParam0), &(Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_353.f_4)))
		{
			return 1;
		}
	}
	return 0;
}

int func_1442(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == (*uParam1)[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1443()
{
	if (Global_2405077.f_2877 > -1)
	{
		return 1;
	}
	return 0;
}

int func_1444(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (!unk_0xE50EB54E0F21BED0(iVar0, 0))
		{
			if (unk_0xE66018878024055F(iVar0, &iVar1))
			{
				if (iVar1 == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_1445()
{
	if (!Global_2405077.f_711)
	{
		Global_2405077.f_711 = 1;
	}
	func_1789(0);
	if (Global_2405077.f_2671)
	{
		func_1446();
		Global_2405077.f_2671 = 0;
	}
	Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_216 = 11;
}

void func_1446()
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	struct<3> Var25;
	struct<3> Var28;
	struct<3> Var31;
	struct<3> Var34;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	var uVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	var uVar58;
	var uVar61;
	var uVar64;
	int iVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	struct<3> Var74;
	float fVar77;
	
	if (!unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		Var1 = { unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 0) };
		if ((!Global_2405077.f_45.f_52 && !Global_2405077.f_45.f_53) && !Global_2405077.f_2672)
		{
			if (unk_0xC2B18235ABE89FC1(Var1, &Var4, 1, 1077936128, 0))
			{
				Var4.f_2 = (Var4.f_2 + 1f);
				bVar7 = true;
				if (!SYSTEM::VDIST(Var1, Var4) < 50f || Global_2405077.f_45.f_52)
				{
					bVar7 = false;
				}
			}
		}
		else if (Global_2405077.f_2672)
		{
			Global_2405077.f_2672 = 0;
		}
		if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
		{
			fVar8 = unk_0xA8D713A937F31250(unk_0x7D2B9E6A64637269());
		}
		fVar9 = 3f;
		Var10 = { unk_0x557C9CA8FCC667DF(unk_0x7D2B9E6A64637269()) };
		Var10 = { Var10 / FtoV(SYSTEM::VMAG(Var10)) };
		Var10 = { Var10 * Vector(fVar9, fVar9, fVar9) };
		Var13 = { Var10 };
		func_273(&Var13, 0f, 0f, -45f);
		Var16 = { Var10 };
		func_273(&Var16, 0f, 0f, -90f);
		Var19 = { Var10 };
		func_273(&Var19, 0f, 0f, 45f);
		Var22 = { Var10 };
		func_273(&Var22, 0f, 0f, 90f);
		if (bVar7)
		{
			Var25 = { Var4 - Var1 };
			Var28 = { func_326(Var25, 0f, 0f, 1f) };
			Var28 = { Var28 / FtoV(SYSTEM::VMAG(Var28)) };
			Var28 = { Var28 * Vector(0.2f, 0.2f, 0.2f) };
		}
		Var31 = { Var1 + Var10 };
		Var34 = { Var1 + Var13 };
		Var37 = { Var1 + Var16 };
		Var40 = { Var1 + Var19 };
		Var43 = { Var1 + Var22 };
		uVar46 = unk_0x7AD43B94CD205A49(Var1, Var31, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar47 = unk_0x7AD43B94CD205A49(Var1, Var34, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar48 = unk_0x7AD43B94CD205A49(Var1, Var37, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar49 = unk_0x7AD43B94CD205A49(Var1, Var40, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		uVar50 = unk_0x7AD43B94CD205A49(Var1, Var43, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		if (bVar7)
		{
			uVar51 = unk_0x7AD43B94CD205A49(Var1, Var4, 0.2f, 257, unk_0x7D2B9E6A64637269(), 7);
		}
		iVar65 = unk_0xA2B3B271E2AE7A08(uVar46, &iVar52, &uVar58, &uVar61, &uVar64);
		iVar65 = unk_0xA2B3B271E2AE7A08(uVar47, &iVar53, &uVar58, &uVar61, &uVar64);
		iVar65 = unk_0xA2B3B271E2AE7A08(uVar48, &iVar54, &uVar58, &uVar61, &uVar64);
		iVar65 = unk_0xA2B3B271E2AE7A08(uVar49, &iVar55, &uVar58, &uVar61, &uVar64);
		iVar65 = unk_0xA2B3B271E2AE7A08(uVar50, &iVar56, &uVar58, &uVar61, &uVar64);
		if (bVar7)
		{
			iVar65 = unk_0xA2B3B271E2AE7A08(uVar51, &iVar57, &uVar58, &uVar61, &uVar64);
		}
		if (iVar65 == 0)
		{
		}
		iVar66 = (iVar66 + iVar52);
		iVar67 = (iVar67 + iVar53);
		iVar68 = (iVar68 + iVar54);
		iVar69 = (iVar69 + iVar55);
		iVar70 = (iVar70 + iVar56);
		if (bVar7)
		{
			iVar71 = (iVar71 + iVar57);
		}
		iVar72 = 99;
		iVar73 = -1;
		if (iVar66 < iVar72)
		{
			iVar72 = iVar66;
			iVar73 = 0;
		}
		if (iVar67 < iVar72)
		{
			iVar72 = iVar67;
			iVar73 = 1;
		}
		if (iVar69 < iVar72)
		{
			iVar72 = iVar69;
			iVar73 = 2;
		}
		if (iVar68 < iVar72)
		{
			iVar72 = iVar68;
			iVar73 = 3;
		}
		if (iVar70 < iVar72)
		{
			iVar72 = iVar70;
			iVar73 = 4;
		}
		if (bVar7)
		{
			if (iVar71 < iVar72)
			{
				iVar72 = iVar71;
				iVar73 = 5;
			}
		}
		if (bVar7 && iVar71 == 0)
		{
			fVar8 = unk_0x832AD84AA258AE80(Var25.x, Var25.f_1);
			func_1448(fVar8);
			return;
		}
		else if (iVar66 == 0)
		{
			return;
		}
		else if (Global_2405077.f_45.f_52)
		{
			Var74 = { Global_2405077.f_45.f_49 - Var1 };
			fVar77 = func_312(Var74, Var37);
			if (fVar77 <= 0f)
			{
				if (iVar67 == 0)
				{
					fVar8 = (fVar8 + -45f);
					func_1448(fVar8);
					return;
				}
				else if (iVar68 == 0)
				{
					fVar8 = (fVar8 + -90f);
					func_1448(fVar8);
					return;
				}
				else if (iVar69 == 0)
				{
					fVar8 = (fVar8 + 45f);
					func_1448(fVar8);
					return;
				}
				else if (iVar70 == 0)
				{
					fVar8 = (fVar8 + 90f);
					func_1448(fVar8);
					return;
				}
				else
				{
					func_1447(iVar73, fVar8, Var25);
				}
			}
			else if (iVar69 == 0)
			{
				fVar8 = (fVar8 + 45f);
				func_1448(fVar8);
				return;
			}
			else if (iVar70 == 0)
			{
				fVar8 = (fVar8 + 90f);
				func_1448(fVar8);
				return;
			}
			else if (iVar67 == 0)
			{
				fVar8 = (fVar8 + -45f);
				func_1448(fVar8);
				return;
			}
			else if (iVar68 == 0)
			{
				fVar8 = (fVar8 + -90f);
				func_1448(fVar8);
				return;
			}
			else
			{
				func_1447(iVar73, fVar8, Var25);
			}
		}
		else
		{
			iVar0 = unk_0xB36B8558948EA7A8(0, 2);
			if (iVar0 == 0)
			{
				if (iVar68 == 0)
				{
					fVar8 = (fVar8 + -90f);
					func_1448(fVar8);
					return;
				}
				else if (iVar70 == 0)
				{
					fVar8 = (fVar8 + 90f);
					func_1448(fVar8);
					return;
				}
				else
				{
					func_1447(iVar73, fVar8, Var25);
				}
			}
			else if (iVar70 == 0)
			{
				fVar8 = (fVar8 + 90f);
				func_1448(fVar8);
				return;
			}
			else if (iVar68 == 0)
			{
				fVar8 = (fVar8 + -90f);
				func_1448(fVar8);
				return;
			}
			else
			{
				func_1447(iVar73, fVar8, Var25);
			}
		}
	}
}

void func_1447(int iParam0, float fParam1, struct<2> Param2, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			return;
			break;
		
		case 1:
			fParam1 = (fParam1 + -45f);
			func_1448(fParam1);
			return;
			break;
		
		case 2:
			fParam1 = (fParam1 + 45f);
			func_1448(fParam1);
			return;
			break;
		
		case 3:
			fParam1 = (fParam1 + -90f);
			func_1448(fParam1);
			return;
			break;
		
		case 4:
			fParam1 = (fParam1 + 90f);
			func_1448(fParam1);
			return;
			break;
		
		case 5:
			fParam1 = unk_0x832AD84AA258AE80(Param2, Param2.f_1);
			func_1448(fParam1);
			return;
			break;
	}
}

void func_1448(float fParam0)
{
	if (!unk_0x6B9E71121F5B8154(unk_0x7D2B9E6A64637269()))
	{
		unk_0xCD37A28258D70638(unk_0x7D2B9E6A64637269(), fParam0);
	}
	func_1426(0f, 1);
}

void func_1449(struct<3> Param0)
{
	Global_2405077.f_45.f_301 = 1;
	Global_2405077.f_45.f_298 = { Param0 };
	Global_2405077.f_45.f_317 = unk_0x5FBE5EA201067B5E(unk_0xCB3024ED32EBF9EC(), -9999);
	func_1450(1);
}

void func_1450(bool bParam0)
{
	float fVar0;
	
	if (Global_1574425 || Global_2405077.f_45.f_302)
	{
		if (Global_2405077.f_45.f_301)
		{
			if (!unk_0xE50EB54E0F21BED0(unk_0x7D2B9E6A64637269(), 0))
			{
				if (Global_1574429)
				{
					fVar0 = 100f;
				}
				else
				{
					fVar0 = 36f;
				}
				if ((unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0) && !unk_0xECA23EB9C2A5E83F(unk_0x7D2B9E6A64637269())) && ((SYSTEM::VDIST2(unk_0xD6E677FAD7521410(unk_0x7D2B9E6A64637269(), 1), Global_2405077.f_45.f_298) < fVar0 || func_1454(unk_0x1146A9AE09CE2B14())) || func_672(unk_0x1146A9AE09CE2B14(), 0, 0)))
				{
					if ((func_1453() || func_1452()) || func_1451())
					{
						if (unk_0x5C6675393464A814(0, 351))
						{
							Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
							func_1430(1000, 0, 1);
						}
						else if (unk_0x909F156FC4077611(unk_0x2D57EADCBEDDB2AA(Global_2405077.f_45.f_317, unk_0xCB3024ED32EBF9EC())) > 2000)
						{
							func_1430(2500, 0, bParam0);
							Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
						}
					}
					else
					{
						Global_2405077.f_45.f_317 = unk_0xCB3024ED32EBF9EC();
						func_1430(1000, 0, bParam0);
					}
				}
				else
				{
					Global_2405077.f_45.f_298 = { 0f, 0f, 0f };
					Global_2405077.f_45.f_301 = 0;
				}
			}
		}
	}
}

int func_1451()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("thruster"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1452()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("ruiner2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1453()
{
	int iVar0;
	
	if (unk_0xC49311A2A500FF09(unk_0x7D2B9E6A64637269(), 0))
	{
		iVar0 = unk_0x75B58B38E45C6F9A(unk_0x7D2B9E6A64637269(), 0);
		if (unk_0x419E13582192CFEA(iVar0))
		{
			if (unk_0x6471F4759775FCA4(iVar0) == joaat("blazer5"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1454(int iParam0)
{
	if (Global_2426865[iParam0 /*449*/].f_216 != 0)
	{
		return 1;
	}
	return 0;
}

void func_1455(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	bVar0 = false;
	if (unk_0xA6BE8F025C6B653F(iParam1))
	{
		bVar0 = true;
	}
	if (!func_1651(iParam0, iParam1, bVar0))
	{
		Var1 = { unk_0xD6E677FAD7521410(iParam0, 0) };
		Var4 = { unk_0xD6E677FAD7521410(iParam1, 0) };
		if (!SYSTEM::VDIST(Var1, Var4) < 5f || !iParam2 == -1)
		{
			Var4.f_2 = (Var4.f_2 + -4f);
			Var4.x = (Var4.x + -4f);
			Var4.f_1 = (Var4.f_1 + -4f);
			unk_0x78CDDD1E6367978D(iParam0, Var4, 0, 0, 0, 1);
		}
		unk_0x16D66F11FE644901(iParam0);
		unk_0x3CBE9F07524C242D(iParam0, true, 0);
		unk_0xA2C015B68CE01357(iParam0, false);
		unk_0xF5143FB7B9EC876D(unk_0x7D2B9E6A64637269(), 0);
		unk_0xD991F7672CE8EAD3(iParam0, 150, 1);
		unk_0xD991F7672CE8EAD3(iParam0, 151, 1);
		if (bParam3)
		{
			unk_0xB1D85A6C23F2F945(iParam0, iParam1, iParam2);
		}
		else
		{
			unk_0x95CA4545D0C61309(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		unk_0xE37EB80DFB0D31FB(iParam0, 0, 0);
		unk_0xD991F7672CE8EAD3(iParam0, 150, 1);
		if (Global_1574425)
		{
			if (func_1648(unk_0x6471F4759775FCA4(iParam1)))
			{
				func_1456(0);
			}
		}
	}
}

void func_1456(bool bParam0)
{
	struct<14> Var0;
	int iVar14;
	
	if (!unk_0xB22628F56B3EAA2E(unk_0x7D2B9E6A64637269()))
	{
		if (Global_4456448.f_133999 == 0)
		{
			if ((Global_2405077.f_2697 == -99 || Global_2405077.f_2697 == 0) || !func_1647(unk_0x6471F4759775FCA4(unk_0x7D2B9E6A64637269()), 14, Global_2405077.f_2697, -1))
			{
				if (!bParam0)
				{
					iVar14 = func_172(589, -1, 0);
				}
			}
			else
			{
				iVar14 = Global_2405077.f_2697;
			}
			Var0 = { func_1604(func_1646(), 14, iVar14, -1) };
			func_1603(unk_0x7D2B9E6A64637269(), 14, iVar14);
			func_1457(unk_0x7D2B9E6A64637269(), 14, iVar14, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_1457(unk_0x7D2B9E6A64637269(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			unk_0x7B28A83A0D3DD0F9(unk_0x7D2B9E6A64637269(), 380, true);
		}
	}
}

int func_1457(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)
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
	
	if (!unk_0x02BFF15CAA701972())
	{
		if ((Global_1312835 != 4 && Global_1312835 != 5) && Global_1312835 != 7)
		{
			return 0;
		}
	}
	if (unk_0xECEC7528A52B4EE8(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == unk_0x7D2B9E6A64637269() && Global_2426865[unk_0x1146A9AE09CE2B14() /*449*/].f_231 == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == -1)
	{
		iParam10 = Global_77056;
	}
	Global_77057++;
	iVar5 = unk_0x6471F4759775FCA4(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
		if (!func_1602(iParam3))
		{
			Global_77057 = (Global_77057 - 1);
			return 0;
		}
		if (iParam1 == 11 && Global_77057 > 1)
		{
		}
		else
		{
			func_1597(iVar5, iParam1, iParam2, 1);
		}
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		unk_0xA7E55BCB7431698B(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_77102 };
		}
		else
		{
			uVar15 = { func_1593(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10 && uVar15.f_16)
				{
					Global_77059[1 /*14*/] = { func_1604(iVar5, 10, 0, -1) };
					if (iParam4 == -1)
					{
						unk_0x4170FE884DF7426D(iParam0, func_1592(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1592(iVar0)));
					}
					else
					{
						unk_0x4170FE884DF7426D(iParam0, func_1592(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
					}
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
					{
						func_1597(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_77059[1 /*14*/] = { func_1604(iVar5, iVar0, uVar15[iVar0], -1) };
					if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar32 = 9;
							if (iParam5 == 1)
							{
								uVar32 = { Global_77119 };
							}
							else
							{
								uVar32 = { func_1589(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_77059[1 /*14*/] = { func_1604(iVar5, 14, uVar32[iVar1], -1) };
								func_1588(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
								if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
								{
									func_1597(iVar5, iVar0, uVar15[iVar0], 1);
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
									unk_0x4170FE884DF7426D(iParam0, func_1592(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1592(iVar0)));
								}
								else
								{
									unk_0x4170FE884DF7426D(iParam0, func_1592(iVar0), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_1457(iParam0, iVar0, uVar15[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
							{
								func_1597(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_77059[1 /*14*/] = { func_1604(iVar5, iVar0, func_1584(iParam0, iVar0, -1), -1) };
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 3))
				{
					uVar42 = { func_1593(iVar5, 0) };
					func_1457(iParam0, iVar0, uVar42[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			iVar0++;
		}
		unk_0x4170FE884DF7426D(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1), 0);
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar59 = func_1583();
			if (iVar59 != -1)
			{
				func_1581(iVar59, 0, iParam10);
			}
			func_1577(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar60 = { func_1589(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_77059[1 /*14*/] = { func_1604(iVar5, 14, uVar60[iVar1], -1) };
			func_1588(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
			{
				func_1597(iVar5, 14, uVar60[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_77057 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_1575(iParam0, iVar5, 14, uVar60[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_1457(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		func_1588(iParam0, Global_77059[1 /*14*/].f_12, Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4);
		if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 1))
		{
			func_1597(iVar5, iParam1, iParam2, 1);
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HAIR"), 1))
			{
			}
			else
			{
				iVar70 = unk_0xF94D55021DC59203(iParam0, 1, unk_0x094C1D2DFE050D6E(iParam0, 1), unk_0x288277F22D527487(iParam0, 1));
				if (unk_0x01758128AAB0BA8F(iVar70, joaat("HAIR_SHRINK"), 0))
				{
					func_1457(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
				}
			}
		}
		if (Global_77059[1 /*14*/].f_12 == 0)
		{
			func_1569(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1575(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1457(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_1575(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1457(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		iVar71 = func_1592(iParam1);
		if (unk_0x094C1D2DFE050D6E(iParam0, iVar71) != Global_77059[1 /*14*/].f_3 || unk_0x288277F22D527487(iParam0, iVar71) != Global_77059[1 /*14*/].f_4)
		{
			iVar72 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
			iVar73 = unk_0xF94D55021DC59203(iParam0, 7, unk_0x094C1D2DFE050D6E(iParam0, 7), unk_0x288277F22D527487(iParam0, 7));
			if (((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar73, 307252627, 0)) || (iParam1 == 8 && unk_0x01758128AAB0BA8F(iVar73, 1552218390, 0))) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar73, -2095729091, 0)))
			{
				unk_0x4170FE884DF7426D(iParam0, 7, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 7));
			}
			if ((iParam1 == 11 && unk_0x01758128AAB0BA8F(iVar72, 307252627, 0)) || (iParam1 == 4 && unk_0x01758128AAB0BA8F(iVar72, -2095729091, 0)))
			{
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 15, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x4170FE884DF7426D(iParam0, 8, 2, 0, unk_0xEE2FD6984DD352B8(iParam0, 8));
				}
			}
		}
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar74 = -1;
				if (unk_0x234B68AC2E35ED5A(Global_77059[1 /*14*/].f_6, 6) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("CREW_COL"), 11))
				{
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 0);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 1);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 2);
					unk_0x21F9691A2B528C26(iParam0, Global_1314059, Global_1314060, Global_1314061, 3);
				}
				iVar75 = func_1567(iParam0, 11);
				iVar76 = func_1567(iParam0, 8);
				iVar77 = func_1567(iParam0, 4);
				iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
				if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar74 = func_1566(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar74 = func_1566(iVar5, iParam2, 11, 4);
					}
					if ((((((unk_0x01758128AAB0BA8F(iVar74, joaat("SILK_ROBE"), 0) || unk_0x01758128AAB0BA8F(iVar74, joaat("SILK_PYJAMAS"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("SMOKING_JACKET"), 0)) || unk_0x01758128AAB0BA8F(iVar74, -826135203, 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("MORPH_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("GORKA_SUIT"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("CAT_SUIT"), 0))
					{
					}
					else
					{
						iVar9 = func_1567(iParam0, 8);
					}
				}
				iVar78 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
				if (unk_0x01758128AAB0BA8F(iVar78, joaat("GLOVES"), 0))
				{
					iVar79 = func_1565(iVar5, iVar76, iVar75, iVar77);
					if (iVar79 == -99)
					{
						iVar79 = func_1575(iParam0, iVar5, 11, iVar75, 3, 0);
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
							iVar74 = func_1566(iVar5, iParam2, 11, 4);
							if (!unk_0x01758128AAB0BA8F(iVar74, joaat("DRESS"), 0))
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
							if (func_1564(iVar5, iVar79, iVar80) == iVar78)
							{
								iVar11 = iVar80;
								iVar12 = unk_0x288277F22D527487(iParam0, 3);
							}
							iVar80++;
						}
					}
				}
				iVar74 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && unk_0x01758128AAB0BA8F(func_1566(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar75 = func_1567(iParam0, 11);
					if (iVar75 >= 256)
					{
						iVar74 = func_1566(iVar5, iVar75, 11, 4);
					}
					if (iVar75 >= 256 && unk_0x01758128AAB0BA8F(iVar74, joaat("VEST_SHIRT"), 0))
					{
						iVar81 = func_1562(iVar5, iVar75, iParam2, unk_0x288277F22D527487(iParam0, 11));
						if (iVar81 != -99)
						{
							func_1457(iParam0, 8, iVar81, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				else if (func_1561(iVar5, iParam2, -1))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar75 >= 237)
						{
							iVar74 = func_1566(iVar5, iVar75, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar75 >= 256)
						{
							iVar74 = func_1566(iVar5, iVar75, 11, 4);
						}
					}
					iVar9 = -99;
					if (!func_1561(iVar5, iVar75, -1))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && (unk_0x01758128AAB0BA8F(iVar74, joaat("VEST"), 0) || unk_0x01758128AAB0BA8F(iVar74, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar75 >= 256) && ((((((((unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_5"), 0) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_11"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("HEIST_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar74, -872449705, 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("APART_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("STUNT_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar74, joaat("STUNT_DRAW_9"), 0)))
						{
						}
						else
						{
							iVar82 = func_1560(iParam0, iParam2);
							iVar83 = func_1562(iVar5, iVar75, iParam2, unk_0x288277F22D527487(iParam0, 11));
							if (iVar83 != -99)
							{
								func_1457(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
								iVar9 = -99;
							}
							else if (iVar82 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								func_1457(iParam0, 8, iVar82, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar84 = func_1558(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_1604(iVar5, 11, iVar84, -1) };
									iVar83 = func_1562(iVar5, iVar84, iParam2, Global_77059[1 /*14*/].f_4);
									iVar85 = func_1566(iVar5, iParam2, 11, 3);
									if ((iVar83 == -99 || unk_0x01758128AAB0BA8F(iVar85, joaat("BIKER_VEST"), 0)) || unk_0x01758128AAB0BA8F(iVar85, 1170568373, 0))
									{
										iVar83 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1566(iVar5, iParam2, 11, 4), joaat("BIKER_VEST"), 0))
									{
										iVar83 = 120;
									}
									else
									{
										iVar83 = 48;
									}
								}
								func_1457(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_77059[1 /*14*/] = { func_1604(iVar5, 11, iVar75, -1) };
						iVar86 = Global_77059[1 /*14*/].f_3;
						Global_77059[1 /*14*/] = { func_1604(iVar5, 11, iParam2, -1) };
						iVar87 = Global_77059[1 /*14*/].f_3;
						if (iVar86 != iVar87)
						{
							iVar89 = func_1560(iParam0, iParam2);
							Global_77059[1 /*14*/] = { func_1604(iVar5, 8, iVar76, -1) };
							iVar88 = Global_77059[1 /*14*/].f_4;
							iVar90 = func_1557(iVar5, iVar76, iVar88);
							if (iVar89 != -99 && (iParam0 == unk_0x7D2B9E6A64637269() || iParam0 == Global_4269998))
							{
								iVar91 = iVar89;
							}
							else if (iVar90 == -99)
							{
								iVar91 = iVar76;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar92 = func_1566(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_1556(iVar92) == 6) || unk_0x01758128AAB0BA8F(iVar92, joaat("BIKER_VEST"), 0))
									{
										iVar90 = func_1558(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_1604(iVar5, 11, iVar90, -1) };
										iVar91 = func_1562(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && ((iVar76 == 32 || iVar76 == 33) || iVar76 == 119))
								{
									if (!unk_0x01758128AAB0BA8F(func_1566(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar90 = func_1558(iVar5, 11, -1);
										Global_77059[1 /*14*/] = { func_1604(iVar5, 11, iVar90, -1) };
										iVar91 = func_1562(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
									}
								}
								iVar93 = -1;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar93 = func_1566(iVar5, iVar76, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar93 = func_1566(iVar5, iVar76, 8, 4);
								}
								if (unk_0x01758128AAB0BA8F(iVar93, joaat("OVERCOAT_ACCS"), 0))
								{
									iVar90 = func_1558(iVar5, 11, -1);
									Global_77059[1 /*14*/] = { func_1604(iVar5, 11, iVar90, -1) };
									iVar91 = func_1562(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar91 = func_1562(iVar5, iVar90, iParam2, iVar88);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1566(iVar5, iParam2, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1555(iVar5, func_1567(iParam0, 4), iVar90))
										{
											iVar91 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (unk_0x01758128AAB0BA8F(func_1566(iVar5, iParam2, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
									{
										if (!func_1555(iVar5, func_1567(iParam0, 4), iVar90))
										{
											iVar91 = 48;
										}
									}
								}
							}
							if (iVar91 != -99)
							{
								func_1457(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar90 = func_1558(iVar5, 11, -1);
								Global_77059[1 /*14*/] = { func_1604(iVar5, 11, iVar90, -1) };
								iVar91 = func_1562(iVar5, iVar90, iParam2, Global_77059[1 /*14*/].f_4);
								if (iVar91 == -99)
								{
									iVar91 = 240;
								}
								func_1457(iParam0, 8, iVar91, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_1457(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				func_1552(iVar5, iParam2);
				if (!bParam13)
				{
					unk_0x4170FE884DF7426D(iParam0, 10, 0, 0, unk_0xEE2FD6984DD352B8(iParam0, 10));
				}
			}
			func_1577(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_1565(iVar5, func_1584(iParam0, 8, -1), iParam2, func_1584(iParam0, 4, -1));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = func_172(2153, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = func_172(2160, iParam10, 0);
				}
				unk_0x5288BB5843D19DAD(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != -99)
				{
					iVar94 = -99;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar94 = func_1550(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar94 = func_1548(iParam2);
					}
					if (iVar94 != -99 && iParam2 != iVar94)
					{
						iParam2 = iVar94;
					}
				}
				func_1508(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar95 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar95, joaat("GLOVES"), 0))
			{
				iVar96 = func_1567(iParam0, 11);
				iVar97 = func_1567(iParam0, 4);
				iVar98 = func_1565(iVar5, iParam2, iVar96, iVar97);
				if (iVar98 == -99)
				{
					iVar98 = func_1575(iParam0, iVar5, 11, iVar96, 3, 0);
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
						iVar99 = func_1566(iVar5, iParam2, 11, 4);
						if (!unk_0x01758128AAB0BA8F(iVar99, joaat("DRESS"), 0))
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
						if (func_1564(iVar5, iVar98, iVar100) == iVar95)
						{
							iVar11 = iVar100;
							iVar12 = unk_0x288277F22D527487(iParam0, 3);
						}
						iVar100++;
					}
				}
			}
			func_1577(iParam0, iParam1, iParam2, iParam6, 0);
			iVar101 = func_1567(iParam0, 11);
			if (func_1561(iVar5, iVar101, -1))
			{
				iVar102 = func_1557(iVar5, iParam2, Global_77059[1 /*14*/].f_4);
				func_1552(iVar5, iVar102);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1565(iVar5, iParam2, func_1567(iParam0, 11), func_1567(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar103 = func_1567(iParam0, 7);
				if (!func_1505(iVar5, iVar103, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99, -99))
				{
					unk_0x4170FE884DF7426D(iParam0, func_1592(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && unk_0x01758128AAB0BA8F(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar104 = func_172(2100, iParam10, 0);
				iVar105 = func_172(2101, iParam10, 0);
				iVar106 = func_172(2102, iParam10, 0);
				uVar107 = func_1504(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					unk_0x759AC27BF6C1426E(iParam0, 0, 0, 0, iVar104, iVar105, iVar106, 0f, uVar107, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					unk_0x759AC27BF6C1426E(iParam0, 21, 0, 0, iVar104, iVar105, iVar106, 0f, fVar107, 0f, false);
				}
				iVar108 = 0;
				while (iVar108 < 20)
				{
					unk_0xD8F926AF2B16BC6E(iParam0, iVar108, 0f);
					iVar108++;
				}
			}
			else
			{
				func_1491(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar109 = func_1567(iParam0, 11);
			iVar110 = func_1567(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_1566(iVar5, iVar109, 11, 3), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1555(iVar5, iParam2, func_1557(iVar5, iVar110, 0)))
					{
						func_1457(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (unk_0x01758128AAB0BA8F(func_1566(iVar5, iVar109, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!func_1555(iVar5, iParam2, func_1557(iVar5, iVar110, 0)))
					{
						func_1457(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_77059[1 /*14*/] = { func_1604(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_1565(iVar5, func_1567(iParam0, 8), func_1567(iParam0, 11), iParam2);
			}
			iVar111 = unk_0xF94D55021DC59203(iParam0, 3, unk_0x094C1D2DFE050D6E(iParam0, 3), 0);
			if (unk_0x01758128AAB0BA8F(iVar111, joaat("GLOVES"), 0))
			{
				iVar112 = func_1565(iVar5, iVar110, iVar109, iParam2);
				if (iVar112 == -99)
				{
					iVar112 = func_1575(iParam0, iVar5, 11, iVar109, 3, 0);
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
						iVar113 = func_1566(iVar5, iParam2, 11, 4);
						if (!unk_0x01758128AAB0BA8F(iVar113, joaat("DRESS"), 0))
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
						if (func_1564(iVar5, iVar112, iVar114) == iVar111)
						{
							iVar11 = iVar114;
							iVar12 = unk_0x288277F22D527487(iParam0, 3);
						}
						iVar114++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			unk_0x4170FE884DF7426D(iParam0, func_1592(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, unk_0xEE2FD6984DD352B8(iParam0, func_1592(iParam1)));
		}
		else
		{
			unk_0x4170FE884DF7426D(iParam0, func_1592(iParam1), Global_77059[1 /*14*/].f_3, Global_77059[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_77057 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_1575(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_1457(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_1565(iVar5, iVar3, func_1567(iParam0, 11), func_1567(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_1575(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_1457(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_1490(iParam0))
				{
					iVar115 = func_1488(iParam0, iVar5, iParam1, iParam2);
					if (iVar115 > 0)
					{
						iVar115 = (iVar115 + unk_0x288277F22D527487(iParam0, 9));
						if (!func_1482(iParam0, 9, iVar115))
						{
							func_1457(iParam0, 9, iVar115, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_1457(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar8 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
					if (unk_0x01758128AAB0BA8F(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_1457(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar116 = func_172(2042, -1, 0);
				if (unk_0x094C1D2DFE050D6E(iParam0, 5) != 0)
				{
					unk_0x4170FE884DF7426D(iParam0, 5, func_1476(iParam0, iVar116), func_1475(iParam0, iVar116), func_1474(iParam0, iVar116));
				}
				if (iParam0 == unk_0x7D2B9E6A64637269())
				{
					unk_0x36BDFFB529ECB71F(unk_0x1146A9AE09CE2B14(), 5, func_1476(unk_0x7D2B9E6A64637269(), iVar116), func_1475(unk_0x7D2B9E6A64637269(), iVar116), 0);
					unk_0x2CD796D9868722DB(unk_0x1146A9AE09CE2B14(), func_1474(unk_0x7D2B9E6A64637269(), iVar116));
					func_1473(unk_0x1146A9AE09CE2B14(), iVar116);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (unk_0x01758128AAB0BA8F(Global_2621444, joaat("BIG_CHAIN"), 0))
					{
						func_1457(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar117 = func_1584(iParam0, 4, -1);
					iVar118 = iParam2;
				}
				else
				{
					iVar117 = iParam2;
					iVar118 = func_1584(iParam0, 11, -1);
				}
				if (func_1472(iVar5, 11, iVar118, -1))
				{
					if (!func_1471(iVar5, 4, iVar117, -1))
					{
						if (func_1470(iVar5, 4, iVar117, &uVar119))
						{
							func_1457(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (func_1471(iVar5, 4, iVar117, -1))
				{
					if (func_1469(iVar5, 4, iVar117, &uVar119))
					{
						func_1457(iParam0, 4, uVar119, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar120 = unk_0x094C1D2DFE050D6E(iParam0, 6);
				iVar121 = unk_0x288277F22D527487(iParam0, 6);
				iVar122 = unk_0xF94D55021DC59203(iParam0, 6, iVar120, iVar121);
				iVar123 = unk_0x094C1D2DFE050D6E(iParam0, 4);
				iVar124 = unk_0x288277F22D527487(iParam0, 4);
				iVar125 = unk_0xF94D55021DC59203(iParam0, 4, iVar123, iVar124);
				iVar126 = func_1567(iParam0, 4);
				iVar127 = func_1567(iParam0, 6);
				if (func_1468(iVar5, iVar122))
				{
					if (unk_0x01758128AAB0BA8F(iVar122, joaat("ALT_FEET"), 0) != func_1467(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_1464(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_1457(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_1464(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_1457(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar125, joaat("ALT_LEGS"), 0) != func_1463(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_1464(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_1457(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_1464(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_1457(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
				}
				if (func_1468(iVar5, iVar125))
				{
					if (unk_0x01758128AAB0BA8F(iVar125, joaat("ALT_LEGS"), 0) != func_1463(iVar5, iVar127, iVar125))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar125);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar125, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 4)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar126 = func_1464(iVar5, iVar130, 4, 3);
										iVar125 = iVar130;
										func_1457(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar126 = func_1464(iVar5, iVar130, 4, 4);
										iVar125 = iVar130;
										func_1457(iParam0, 4, iVar126, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									iVar129 = iVar128 + 1;
								}
							}
							iVar129++;
						}
					}
					else if (unk_0x01758128AAB0BA8F(iVar122, joaat("ALT_FEET"), 0) != func_1467(iVar5, iVar126, iVar122))
					{
						iVar128 = unk_0xBEEBC440559223F7(iVar122);
						iVar129 = 0;
						while (iVar129 < iVar128)
						{
							unk_0xE5694002E250F2D1(iVar122, iVar129, &iVar130, &uVar131, &iVar132);
							if (iVar132 == 6)
							{
								if (iVar130 != 0 && iVar130 != joaat("0"))
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar127 = func_1464(iVar5, iVar130, 6, 3);
										iVar122 = iVar130;
										func_1457(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar127 = func_1464(iVar5, iVar130, 6, 4);
										iVar122 = iVar130;
										func_1457(iParam0, 6, iVar127, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_1569(iParam0);
				iVar133 = unk_0x094C1D2DFE050D6E(iParam0, 1);
				iVar134 = unk_0x288277F22D527487(iParam0, 1);
				iVar135 = unk_0xF94D55021DC59203(iParam0, 1, iVar133, iVar134);
				if (unk_0x01758128AAB0BA8F(iVar135, joaat("FORCE_PROP"), 0))
				{
					iVar3 = func_1575(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_1457(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = func_1575(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_1457(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_1458(iParam0, &uVar4))
		{
			func_1457(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_1457(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar9 != -99)
	{
		func_1457(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_1457(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar11 != -1)
	{
		iVar136 = func_1564(iVar5, func_1584(iParam0, 3, -1), iVar11);
		if (iVar136 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_1464(iVar5, iVar136, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_1464(iVar5, iVar136, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_1457(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_77057 = (Global_77057 - 1);
	return 1;
}

int func_1458(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_1584(unk_0x7D2B9E6A64637269(), 2, -1);
	if (func_172(754, Global_77056, 0) != -99 && func_1460())
	{
		if (func_1459() == 4)
		{
			return 1;
		}
		if (func_172(754, Global_77056, 0) == 0 && func_172(755, Global_77056, 0) == 0)
		{
			if (func_901(161, Global_77056))
			{
				if (func_172(2053, Global_77056, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_172(753, Global_77056, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_172(754, Global_77056, 0);
		iVar1 = func_172(755, Global_77056, 0);
		if (!func_1482(iParam0, iVar1, iVar0))
		{
			if (func_901(161, Global_77056))
			{
				*uParam1 = func_172(2053, Global_77056, 0);
			}
			else
			{
				*uParam1 = func_172(753, Global_77056, 0);
			}
			func_500(754, -99, Global_77056, 1, 0);
			func_500(755, 2, Global_77056, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_1459()
{
	return Global_1312835;
}

int func_1460()
{
	if (func_1462() && func_1461(0))
	{
		return 1;
	}
	return 0;
}

var func_1461(int iParam0)
{
	return Global_1312392[iParam0];
}

var func_1462()
{
	return func_1461(func_74() + 1);
}

int func_1463(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1566(iParam0, iParam1, 6, 3);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, 1137160120, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x01758128AAB0BA8F(iVar0, joaat("COWBOY_BOOTS"), 0))
			{
				if ((unk_0x01758128AAB0BA8F(iParam2, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("GORKA_SUIT"), 0))
				{
					return 0;
				}
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if ((((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("COWBOY_BOOTS"), 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_1566(iParam0, iParam1, 6, 4);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, 1137160120, 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, -2005216901, 0))
				{
					return 1;
				}
				return 0;
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (((((((((unk_0x01758128AAB0BA8F(iVar0, joaat("PILOT_SUIT"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_8"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_1464(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 1, -1, -1);
		iVar0 = unk_0xBCEF29BBAC16D038(iParam1);
		if (iVar0 != -1)
		{
			return (func_1466(iParam0) + iVar0);
		}
	}
	else
	{
		unk_0x44C4C2E7417F5E29(iParam3, 8, -1, 0, -1, func_1592(iParam2));
		iVar1 = unk_0x5BBDCA451CB08E45(iParam1);
		if (iVar1 != -1)
		{
			return (func_1465(iParam0, func_1592(iParam2)) + iVar1);
		}
	}
	return -99;
}

int func_1465(int iParam0, int iParam1)
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

int func_1466(int iParam0)
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

int func_1467(int iParam0, int iParam1, int iParam2)
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
				iVar0 = func_1566(iParam0, iParam1, 4, 3);
				iVar1 = func_1556(iVar0);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				iVar2 = 1;
				if (((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || unk_0x01758128AAB0BA8F(iVar0, joaat("SILK_ROBE"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("SKINNY"), 0)) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0))) || (unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0) && !unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0)))
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
				if (((unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BATTLE_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BATTLE_DRAW_2"), 0))
				{
					if ((((((unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("BIKER_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0))
					{
						iVar2 = 1;
					}
				}
				if (unk_0x01758128AAB0BA8F(iVar0, 1137160120, 0))
				{
					if (unk_0x01758128AAB0BA8F(iParam2, -2005216901, 0))
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
				iVar0 = func_1566(iParam0, iParam1, 4, 4);
				iVar1 = func_1556(iVar0);
			}
			if (unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("HAS_ALT_VERSION"), 0))
			{
				if (unk_0x01758128AAB0BA8F(iVar0, 1137160120, 0))
				{
					if (unk_0x01758128AAB0BA8F(iParam2, -2005216901, 0))
					{
						return 0;
					}
				}
				if ((unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_0"), 0) || unk_0x01758128AAB0BA8F(iVar0, joaat("GUN_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("GORKA_SUIT"), 0))
				{
					if ((((unk_0x01758128AAB0BA8F(iParam2, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam2, joaat("BIKER_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("BIKER_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iParam2, joaat("SMUG_DRAW_1"), 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_5"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_6"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_7"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_9"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("HEIST_DRAW_10"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_0"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_2"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_4"), 0)) || unk_0x01758128AAB0BA8F(iVar0, -430330349, 0)) || unk_0x01758128AAB0BA8F(iVar0, -1103045158, 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("APART_DRAW_12"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("LOW2_DRAW_1"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("STUNT_DRAW_3"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("DUNGAREES"), 0)) || unk_0x01758128AAB0BA8F(iVar0, joaat("H3_DRAW_5"), 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_1468(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (unk_0x01758128AAB0BA8F(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (unk_0x01758128AAB0BA8F(iParam1, joaat("COWBOY_BOOTS"), 0) || unk_0x01758128AAB0BA8F(iParam1, joaat("HAS_ALT_VERSION"), 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1469(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_1566(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xBEEBC440559223F7(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x01758128AAB0BA8F(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_1464(iParam0, iVar3, iParam1, 4);
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

int func_1470(int iParam0, int iParam1, int iParam2, var uParam3)
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
						iVar0 = func_1566(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xBEEBC440559223F7(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xE5694002E250F2D1(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x01758128AAB0BA8F(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_1464(iParam0, iVar3, iParam1, 4);
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

int func_1471(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_1566(iParam0, iParam2, 4, 4);
						}
						if (unk_0x01758128AAB0BA8F(iParam3, joaat("DRESS_LEGS"), 0))
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

int func_1472(int iParam0, int iParam1, int iParam2, int iParam3)
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
							iParam3 = func_1566(iParam0, iParam2, 11, 4);
						}
						return unk_0x01758128AAB0BA8F(iParam3, joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_1473(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x4169D62225D118AD(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x42B4D8C7E389E8B7(iParam0);
	}
}

int func_1474(int iParam0, int iParam1)
{
	return 0;
}

int func_1475(int iParam0, int iParam1)
{
	switch (iParam1)
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
			return 9;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 11;
			break;
		
		case 13:
			return 12;
			break;
		
		case 14:
			return 13;
			break;
		
		case 15:
			return 14;
			break;
		
		case 16:
			return 15;
			break;
		
		case 17:
			return 16;
			break;
		
		case 18:
			return 17;
			break;
		
		case 19:
			return 18;
			break;
		
		case 20:
			return 19;
			break;
		
		case 21:
			return 20;
			break;
		
		case 22:
			return 21;
			break;
		
		case 23:
			return 22;
			break;
		
		case 24:
			return 23;
			break;
		
		case 25:
			return 24;
			break;
		
		case 26:
			return 25;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 2;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 4;
			break;
		
		case 32:
			return 5;
			break;
		
		case 33:
			return 6;
			break;
		
		case 34:
			return 7;
			break;
		
		case 35:
			return 8;
			break;
		
		case 36:
			return 9;
			break;
		
		case 37:
			return 10;
			break;
		
		case 38:
			return 11;
			break;
		
		case 39:
			return 12;
			break;
		
		case 40:
			return 13;
			break;
		
		case 41:
			return 14;
			break;
		
		case 42:
			return 15;
			break;
		
		case 43:
			return 16;
			break;
		
		case 44:
			return 17;
			break;
		
		case 45:
			return 18;
			break;
		
		case 46:
			return 19;
			break;
		
		case 47:
			return 0;
			break;
		
		case 48:
			return 1;
			break;
		
		case 49:
			return 2;
			break;
		
		case 50:
			return 3;
			break;
		
		case 51:
			return 4;
			break;
		
		case 52:
			return 0;
			break;
		
		case 53:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 2;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 4;
			break;
		
		case 58:
			return 5;
			break;
		
		case 59:
			return 6;
			break;
		
		case 60:
			return 7;
			break;
		
		case 61:
			return 8;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 1;
			break;
		
		case 64:
			return 0;
			break;
		
		case 65:
			return 1;
			break;
		
		case 66:
			return 2;
			break;
	}
	return 0;
}

var func_1476(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 8);
	iVar1 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	iVar2 = unk_0x094C1D2DFE050D6E(iParam0, 4);
	bVar3 = unk_0x094C1D2DFE050D6E(iParam0, 9) != false;
	iVar4 = unk_0xF94D55021DC59203(iParam0, 8, iVar0, unk_0x288277F22D527487(iParam0, 8));
	iVar5 = unk_0xF94D55021DC59203(iParam0, 11, iVar1, unk_0x288277F22D527487(iParam0, 11));
	iVar6 = unk_0xF94D55021DC59203(iParam0, 4, iVar2, unk_0x288277F22D527487(iParam0, 4));
	if (((((((bVar3 != Global_77220 || iParam1 != Global_77221) || iVar4 != Global_77222) || iVar5 != Global_77223) || iVar6 != Global_77224) || iVar0 != Global_77225) || iVar1 != Global_77226) || iVar2 != Global_77227)
	{
		Global_77220 = bVar3;
		Global_77221 = iParam1;
		Global_77222 = iVar4;
		Global_77223 = iVar5;
		Global_77224 = iVar6;
		Global_77225 = iVar0;
		Global_77226 = iVar1;
		Global_77227 = iVar2;
		Global_77228 = func_1477(iParam0, iParam1);
	}
	return Global_77228;
}

int func_1477(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = unk_0x094C1D2DFE050D6E(iParam0, 11);
	if (unk_0x094C1D2DFE050D6E(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x6471F4759775FCA4(iParam0);
	iVar3 = unk_0xF94D55021DC59203(iParam0, 8, unk_0x094C1D2DFE050D6E(iParam0, 8), unk_0x288277F22D527487(iParam0, 8));
	if (unk_0x01758128AAB0BA8F(iVar3, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_1481(iParam0, iParam1, 1);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1481(iParam0, iParam1, 10);
			}
		}
		else
		{
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_2"), 8))
			{
				return func_1481(iParam0, iParam1, 6);
			}
			if ((unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_3"), 8) || unk_0x01758128AAB0BA8F(iVar3, 1072212384, 8)) || unk_0x01758128AAB0BA8F(iVar3, 1293534210, 8))
			{
				return func_1481(iParam0, iParam1, 7);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_4"), 8))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_5"), 8))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			if (unk_0x01758128AAB0BA8F(iVar3, joaat("X17_DRAW_6"), 8))
			{
				return func_1481(iParam0, iParam1, 10);
			}
		}
		return func_1481(iParam0, iParam1, 9);
	}
	if (func_1480(iParam0))
	{
		if (bVar1)
		{
			return func_1481(iParam0, iParam1, 7);
		}
		else
		{
			return func_1481(iParam0, iParam1, 1);
		}
	}
	if (iVar0 > 15)
	{
		iVar4 = unk_0xF94D55021DC59203(iParam0, 11, iVar0, unk_0x288277F22D527487(iParam0, 11));
		if (unk_0x01758128AAB0BA8F(iVar4, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1481(iParam0, iParam1, 7);
			}
			else
			{
				return func_1481(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return func_1481(iParam0, iParam1, 5);
			}
			else
			{
				return func_1481(iParam0, iParam1, 5);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("PILOT_SUIT"), 0))
		{
			return func_1481(iParam0, iParam1, 8);
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1481(iParam0, iParam1, 7);
				}
				else
				{
					return func_1481(iParam0, iParam1, 1);
				}
			}
			else if (bVar1)
			{
				return func_1481(iParam0, iParam1, 7);
			}
			else
			{
				return func_1481(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return func_1481(iParam0, iParam1, 7);
				}
				else
				{
					return func_1481(iParam0, iParam1, 1);
				}
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_5"), 0))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_32"), 0))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_33"), 0))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			else if (unk_0x01758128AAB0BA8F(iVar4, joaat("BIKER_DRAW_30"), 0))
			{
				return func_1481(iParam0, iParam1, 10);
			}
			else if (bVar1)
			{
				return func_1481(iParam0, iParam1, 7);
			}
			else
			{
				return func_1481(iParam0, iParam1, 1);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_COAT"), 0) && !unk_0x01758128AAB0BA8F(iVar4, joaat("X17_DRAW_3"), 0))
		{
			iVar5 = func_1479(iVar4, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar5)
				{
					case 0:
						return func_1481(iParam0, iParam1, 1);
						break;
					
					case 2:
						return func_1481(iParam0, iParam1, 8);
						break;
					
					default:
						iVar0 = func_1556(iVar4);
						break;
				}
			}
			else
			{
				switch (iVar5)
				{
					case 2:
						return func_1481(iParam0, iParam1, 6);
						break;
					
					default:
						iVar0 = func_1556(iVar4);
						break;
					}
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x01758128AAB0BA8F(iVar4, joaat("LUXE_DRAW_4"), 0))
			{
				return func_1481(iParam0, iParam1, 2);
			}
			else
			{
				return func_1481(iParam0, iParam1, 6);
			}
		}
		else if (unk_0x01758128AAB0BA8F(iVar4, joaat("HEIST_GEAR"), 0))
		{
			iVar6 = func_1478(iVar4, 0);
			switch (iVar6)
			{
				case 4:
					return func_1481(iParam0, iParam1, 7);
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1481(iParam0, iParam1, 7);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return func_1481(iParam0, iParam1, 7);
					}
					break;