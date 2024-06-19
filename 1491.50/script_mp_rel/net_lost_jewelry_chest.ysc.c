#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 39;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
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
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 39;
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
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = -1082130432;
	var uLocal_119 = -1082130432;
	var uLocal_120 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x51E7CBEE ^0x78756A67
{
	func_1(&uLocal_14, uScriptParam_0);

	if (func_2() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_4(func_3(0)) == 7)
			func_5(&uLocal_14);
	}

	if (func_2() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_5(&uLocal_14);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uLocal_14.f_11))
		func_5(&uLocal_14);

	while (func_6(&uLocal_14))
	{
		if (func_7())
			func_5(&uLocal_14);
	
		if (func_8(&uLocal_14))
			func_5(&uLocal_14);
	
		BUILTIN::WAIT(0);
	}

	func_5(&uLocal_14);
	return;
}

void func_1(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x8E Hash - 0xF3A8AD7A ^0xDD667CBA
{
	*uParam0 = func_9(uParam1);
	uParam0->f_1 = func_10(uParam1);
	uParam0->f_2 = func_11(uParam1);
	uParam0->f_3 = 0;
	uParam0->f_12 = uParam1;
	uParam0->f_11 = uParam1.f_1;
	uParam0->f_5 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_11, true) };
	uParam0->f_55[0] = joaat("mp005_s_rng_mnstn");
	uParam0->f_55[1] = joaat("mp005_s_rng_ptrn_dmd");
	uParam0->f_55[2] = joaat("mp005_s_rng_gld_dmd");
	uParam0->f_55[3] = joaat("mp005_s_rng_frn_dmd");
	uParam0->f_55[4] = joaat("mp005_s_rng_trq_mot");
	uParam0->f_55[5] = joaat("mp005_s_rng_top_wed");
	uParam0->f_55[6] = joaat("mp005_s_rng_gld_prl");
	uParam0->f_55[7] = joaat("mp005_s_rng_dmnd_onyx");
	uParam0->f_55[8] = joaat("mp005_s_rng_emr_gld");
	uParam0->f_55[9] = joaat("mp005_s_rng_trq_gld");
	uParam0->f_55[10] = joaat("mp005_s_rng_coral");
	uParam0->f_55[11] = joaat("mp005_s_errng_emr");
	uParam0->f_55[12] = joaat("mp005_s_errng_qns_dmd");
	uParam0->f_55[13] = joaat("mp005_s_errng_flrl_dmd");
	uParam0->f_55[14] = joaat("mp005_s_errng_gld_rdy_dngl");
	uParam0->f_55[15] = joaat("mp005_s_errng_cit_drop");
	uParam0->f_55[16] = joaat("mp005_s_errng_crl_dngl");
	uParam0->f_55[17] = joaat("mp005_s_errng_trq_stud");
	uParam0->f_55[18] = joaat("mp005_s_errng_elk_tht");
	uParam0->f_55[19] = joaat("mp005_s_errng_grn_slv");
	uParam0->f_55[20] = joaat("mp005_s_errng_old_mine");
	uParam0->f_55[21] = joaat("mp005_s_errng_gld_prl");
	uParam0->f_55[22] = joaat("mp005_s_brclt_gld");
	uParam0->f_55[23] = joaat("mp005_s_brclt_gld_bngl");
	uParam0->f_55[24] = joaat("mp005_s_brclt_edw_prl");
	uParam0->f_55[25] = joaat("mp005_s_brclt_slv_bngl");
	uParam0->f_55[26] = joaat("mp005_s_brclt_slv");
	uParam0->f_55[27] = joaat("mp005_s_brclt_sap_bngl");
	uParam0->f_55[28] = joaat("mp005_s_brclt_sap");
	uParam0->f_55[29] = joaat("mp005_s_brclt_dmd_gld");
	uParam0->f_55[30] = joaat("mp005_s_nklc_blk_prl");
	uParam0->f_55[31] = joaat("mp005_s_nklc_plt_tpz");
	uParam0->f_55[32] = joaat("mp005_s_nklc_mthr_prl");
	uParam0->f_55[33] = joaat("mp005_s_nklc_gld_lav");
	uParam0->f_55[34] = joaat("mp005_s_nklc_gld_ame");
	uParam0->f_55[35] = joaat("mp005_s_nklc_pnt_por");
	uParam0->f_55[36] = joaat("mp005_s_nklc_slv_prl");
	uParam0->f_55[37] = joaat("mp005_s_nklc_gld_cross");
	uParam0->f_55[38] = joaat("mp005_s_nklc_ori_prl");
	uParam0->f_13 = func_12(uParam0);
	return;
}

int func_2() // Position - 0x2D8 Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

struct<2> func_3(int iParam0) // Position - 0x2E6 Hash - 0x93EB5DDA ^0xBB7477DE
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_4(int iParam0, var uParam1) // Position - 0x2FA Hash - 0x72C53F65 ^0x72C53F65
{
	return iParam0;
}

void func_5(var uParam0) // Position - 0x304 Hash - 0x9244DFE0 ^0xE2E57A12
{
	func_13(&(uParam0->f_95));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
		if (PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_54))
			func_14(uParam0->f_54, uParam0->f_54, 0);

	SCRIPTS::_0xE7282390542F570D(uParam0->f_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_6(var uParam0) // Position - 0x349 Hash - 0x3F9A5B3E ^0xE1E8ABCC
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_5(uParam0);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x363 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_8(var uParam0) // Position - 0x36C Hash - 0x33442BFB ^0x867CFE06
{
	BOOL flag;

	flag = func_15(uParam0) < 4;

	if (func_15(uParam0) > 2 && func_15(uParam0) < 4)
		func_16(&(uParam0->f_95), uParam0->f_5, flag, flag, true, false);

	if (func_17(Global_1295666.f_3, uParam0->f_5, true) < 2f)
		func_18(&(uParam0->f_95.f_5));

	switch (func_15(uParam0))
	{
		case 0:
			func_19(uParam0, 1);
			break;
	
		case 1:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
			{
				if (!STREAMING::IS_IPL_ACTIVE_BY_HASH(uParam0->f_1))
					STREAMING::REQUEST_IPL_BY_HASH(uParam0->f_1);
			
				func_19(uParam0, 2);
			}
			break;
	
		case 2:
			if (func_20(uParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
				{
					uParam0->f_8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_54, true, false) };
					MAP::_0x7563CBCA99253D1A(uParam0->f_54, joaat("blip_mp_role_collector_ilo"));
					MAP::_0x1726963E6049DB53(uParam0->f_54);
					func_22(uParam0->f_54, uParam0->f_54, 0);
					MISC::_0x553D67295DDD2309(uParam0->f_54);
					func_19(uParam0, 3);
				}
			}
			break;
	
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
				if (func_20(uParam0) && ENTITY::DOES_ENTITY_EXIST(func_21(uParam0)))
					MISC::_0x553D67295DDD2309(uParam0->f_54);
				else
					return false;
		
			if (PERSISTENCE::_PERSISTENCE_IS_SCENARIO_MARKED_AS_LOOTED_AT_COORDS_WITH_MODEL(uParam0->f_8, ENTITY::GET_ENTITY_MODEL(uParam0->f_54)))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_54))
				{
					if (PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam0->f_54))
						func_14(uParam0->f_54, uParam0->f_54, 0);
				
					func_13(&(uParam0->f_95));
					func_19(uParam0, 4);
				}
			}
			break;
	
		case 4:
			break;
	}

	return false;
}

int func_9(var uParam0, var uParam1, var uParam2) // Position - 0x505 Hash - 0x9C8AD924 ^0x7506C78F
{
	int num;
	int scenario;

	scenario = uParam0.f_1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(scenario));

	switch (num)
	{
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
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 11:
			return 11;
	
		case 12:
			return 12;
	
		case 13:
			return 13;
	
		case 14:
			return 14;
	
		case 15:
			return 15;
	
		case 16:
			return 16;
	
		case 17:
			return 17;
	
		case 18:
			return 18;
	
		case 19:
			return 19;
	
		case 20:
			return 20;
	
		case 21:
			return 21;
	
		case 22:
			return 22;
	
		case 23:
			return 23;
	
		case 24:
			return 24;
	
		case 25:
			return 25;
	
		case 26:
			return 26;
	}

	return 1;
}

int func_10(var uParam0, var uParam1, var uParam2) // Position - 0x696 Hash - 0xB515F3E5 ^0xA082E53A
{
	int num;
	int scenario;

	scenario = uParam0.f_1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(scenario));

	switch (num)
	{
		case 1:
			return joaat("mp005_a1_arbracelet02_ipl");
	
		case 2:
			return -863309194;
	
		case 3:
			return joaat("mp005_a1_bpring02_ipl");
	
		case 4:
			return 188714829;
	
		case 5:
			return 1067836986;
	
		case 6:
			return -19043490;
	
		case 7:
			return joaat("mp005_a1_dpbbracelet02_ipl");
	
		case 8:
			return 1498576406;
	
		case 9:
			return joaat("mp005_a1_fpnecklace02_ipl");
	
		case 10:
			return joaat("mp005_a1_gwgnecklace01_ipl");
	
		case 11:
			return -391528998;
	
		case 12:
			return joaat("mp005_a1_hgbbracelet03_ipl");
	
		case 13:
			return -1445626658;
	
		case 14:
			return -1262762728;
	
		case 15:
			return -1374528601;
	
		case 16:
			return joaat("mp005_a1_hsbracelet02_ipl");
	
		case 17:
			return joaat("mp005_a4_hsbracelet03_ipl");
	
		case 18:
			return joaat("mp005_a4_itbracelet03_ipl");
	
		case 19:
			return joaat("mp005_a1_mtring02_ipl");
	
		case 20:
			return joaat("mp005_a4_orgbbracelet03_ipl");
	
		case 21:
			return joaat("mp005_a3_odearring1_ipl");
	
		case 22:
			return joaat("mp005_a3_ranecklace02_ipl");
	
		case 23:
			return joaat("mp005_a4_ranecklace03_ipl");
	
		case 24:
			return joaat("mp005_a1_sdring01_ipl");
	
		case 25:
			return joaat("mp005_a1_wdring1_ipl");
	
		case 26:
			return 630089379;
	}

	return joaat("mp005_a1_arbracelet02_ipl");
}

char* func_11(var uParam0, var uParam1, var uParam2) // Position - 0x880 Hash - 0xF9FD068E ^0x6DC2E63E
{
	int num;
	int scenario;

	scenario = uParam0.f_1;

	if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(scenario));

	switch (num)
	{
		case 1:
			return "MP005_A1_ARBracelet02_IPL";
	
		case 2:
			return "MP007_A2_BMecklace03_IPL";
	
		case 3:
			return "mp005_a1_BPRing02_IPL";
	
		case 4:
			return "MP007_a2_BANecklace01_IPL";
	
		case 5:
			return "MP007_a2_BANecklace02_IPL";
	
		case 6:
			return "MP007_A2_BANecklace03_IPL";
	
		case 7:
			return "MP005_A1_DPBBracelet02_IPL";
	
		case 8:
			return "MP007_A2_DPBracelet03_IPL";
	
		case 9:
			return "MP005_A1_FPNecklace02_IPL";
	
		case 10:
			return "MP005_a1_GWGNecklace01_IPL";
	
		case 11:
			return "MP007_A2_HGBracelet02_IPL";
	
		case 12:
			return "MP005_A1_HGBBracelet03_IPL";
	
		case 13:
			return "mp007_a2_HGEarring02_IPL";
	
		case 14:
			return "mp007_a2_HCRing02_IPL";
	
		case 15:
			return "MP007_A2_HSBRACELET01_IPL";
	
		case 16:
			return "MP005_A1_HSBracelet02_IPL";
	
		case 17:
			return "MP005_A4_HSBracelet03_IPL";
	
		case 18:
			return "MP005_A4_ITBracelet03_IPL";
	
		case 19:
			return "mp005_a1_MTRing02_IPL";
	
		case 20:
			return "MP005_A4_ORGBBracelet03_IPL";
	
		case 21:
			return "MP005_A3_ODEarring1_IPL";
	
		case 22:
			return "MP005_A3_RANecklace02_IPL";
	
		case 23:
			return "MP005_A4_RANecklace03_IPL";
	
		case 24:
			return "mp005_a1_SDRing01_IPL";
	
		case 25:
			return "mp005_a1_WDRing1_IPL";
	
		case 26:
			return "mp007_a2_DEEarring02_IPL";
	}

	return "mp005_a1_arbracelet02_ipl";
}

int func_12(var uParam0) // Position - 0xA44 Hash - 0xDB4AC461 ^0x390EAF65
{
	int num;

	num = -1;

	switch (*uParam0)
	{
		case 1:
			num = 1776680074;
			break;
	
		case 2:
			num = 1776680074;
			break;
	
		case 3:
			num = 1776680074;
			break;
	
		case 4:
			num = 1776680074;
			break;
	
		case 5:
			num = 1776680074;
			break;
	
		case 6:
			num = 1776680074;
			break;
	
		case 7:
			num = 1776680074;
			break;
	
		case 8:
			num = 1776680074;
			break;
	
		case 9:
			num = 1776680074;
			break;
	
		case 10:
			num = 1776680074;
			break;
	
		case 11:
			num = 1776680074;
			break;
	
		case 12:
			num = 1776680074;
			break;
	
		case 13:
			num = 1776680074;
			break;
	
		case 14:
			num = 1776680074;
			break;
	
		case 15:
			num = 1776680074;
			break;
	
		case 16:
			num = 1776680074;
			break;
	
		case 17:
			num = 1776680074;
			break;
	
		case 18:
			num = 1776680074;
			break;
	
		case 19:
			num = 1776680074;
			break;
	
		case 20:
			num = 1776680074;
			break;
	
		case 21:
			num = 1776680074;
			break;
	
		case 22:
			num = 1776680074;
			break;
	
		case 23:
			num = 1776680074;
			break;
	
		case 24:
			num = 1776680074;
			break;
	
		case 25:
			num = 1776680074;
			break;
	
		case 26:
			num = 1776680074;
			break;
	}

	return num;
}

void func_13(var uParam0) // Position - 0xBFA Hash - 0x6197CFB5 ^0xB076B5A9
{
	func_23(uParam0);
	func_24(&(uParam0->f_6), 1);
	return;
}

int func_14(Entity eParam0, Entity eParam1, int iParam2) // Position - 0xC11 Hash - 0xC1227CDD ^0xCCB24A9F
{
	int i;
	var src;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32) && ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::REMOVE_FROM_ITEMSET(eParam0, Global_1296539.f_32);

	PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), eParam0);
	PLAYER::_0xDC5E09D012D759C4(eParam0, eParam1, iParam2);
	src.f_1 = -1082130432;

	for (i = 0; i < 10; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]) && Global_1296539[i /*2*/] == eParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(&Global_1296539[i /*2*/], &src, 2);
			return 1;
		}
	}

	return 0;
}

int func_15(var uParam0) // Position - 0xCBB Hash - 0xD73B9827 ^0x75451C21
{
	return uParam0->f_3;
}

void func_16(var uParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0xCC7 Hash - 0x9EDD889C ^0xE38DDFD2
{
	BOOL flag;
	BOOL flag2;
	float num;
	int value;
	int frequency;

	if (!_IS_NULL_VECTOR(Global_1222323))
	{
		if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_10 == -1f)
			uParam0->f_10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_1222323, vParam1, true);
	
		if (uParam0->f_10 <= 5f)
			flag = true;
	}

	flag2 = func_26(uParam0, bParam4, flag);

	if (!flag2)
		if (uParam0->f_8)
			uParam0->f_8 = 0;

	if (uParam0->f_11 < 8)
		uParam0->f_11 = uParam0->f_11 + 1;
	else
		uParam0->f_11 = 0;

	if (!uParam0->f_8)
	{
		if (uParam0->f_11 == 0)
			uParam0->f_8 = 1;
	
		return;
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0 || uParam0->f_9 == -1f)
		uParam0->f_9 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam1, true);

	num = 10f;
	num = num * (1f + func_27());

	switch (*uParam0)
	{
		case 0:
			if (uParam0->f_9 < num)
			{
				if (bParam5)
				{
					if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
					{
						uParam0->f_4 = AUDIO::GET_SOUND_ID();
					
						if (Global_1940199.f_38 != joaat("weapon_kit_metal_detector"))
							AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(uParam0->f_4, "collectible_lure", vParam1, "RDRO_Collectible_Sounds_Travelling_Saleswoman", false, 0, bParam6);
					
						func_28(uParam0, 1);
					}
				}
				else
				{
					func_28(uParam0, 1);
				}
			}
			break;
	
		case 1:
			value = BUILTIN::FLOOR(500f * ((num - uParam0->f_9) / num));
			frequency = BUILTIN::FLOOR(256f * ((num - uParam0->f_9) / num));
		
			if (value < 0)
				value = MISC::ABSI(value);
		
			if (value > 9999)
				value = 9999;
		
			if (uParam0->f_9 < 3f && bParam7)
				func_29(250);
		
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, value, frequency);
			func_30(&(uParam0->f_1));
			func_28(uParam0, 2);
			break;
	
		case 2:
			if (uParam0->f_9 >= num + 5f || !bParam4 || flag)
			{
				if (bParam5)
					func_23(uParam0);
			
				func_28(uParam0, 0);
			}
			else if (func_31(&(uParam0->f_1)) >= 2f)
			{
				func_28(uParam0, 1);
			}
			else if (uParam0->f_9 < 3f && bParam7)
			{
				func_29(250);
			}
			break;
	}

	return;
}

float func_17(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0xEF3 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_18(var uParam0) // Position - 0xF1B Hash - 0xEA29C448 ^0x80E8C8A2
{
	if (AUDIO::PREPARE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman", false))
	{
		if (HUD::UI_PROMPT_IS_CONTROL_ACTION_ACTIVE(joaat("INPUT_LOOT3")))
		{
			if (!*uParam0)
			{
				AUDIO::PLAY_SOUND_FRONTEND("collectible_found", "RDRO_Collectible_Sounds_Travelling_Saleswoman", true, 0);
				*uParam0 = 1;
			}
		}
		else if (*uParam0)
		{
			*uParam0 = 0;
		}
	}

	return;
}

void func_19(var uParam0, int iParam1) // Position - 0xF61 Hash - 0x4F8BE4B5 ^0xCB719C1
{
	uParam0->f_3 = iParam1;
	return;
}

BOOL func_20(var uParam0) // Position - 0xF6F Hash - 0x314A1B17 ^0xDE267DBC
{
	if (func_32(&(uParam0->f_14), &(uParam0->f_55), 1, uParam0->f_5, 5f) > 0)
		return true;

	return false;
}

Entity func_21(var uParam0) // Position - 0xF94 Hash - 0x1062BC77 ^0xDDF0577B
{
	int i;
	Entity unk;

	for (i = 0; i < 39; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_14[i]))
		{
			uParam0->f_54 = uParam0->f_14[i];
			return uParam0->f_14[i];
		}
	}

	return unk;
}

int func_22(Entity eParam0, Entity eParam1, int iParam2) // Position - 0xFD7 Hash - 0xF2B92A32 ^0xAD1DE34B
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ITEMSET::IS_ITEMSET_VALID(Global_1296539.f_32))
		Global_1296539.f_32 = ITEMSET::CREATE_ITEMSET(true);

	if (!ITEMSET::IS_IN_ITEMSET(eParam0, Global_1296539.f_32))
		ITEMSET::ADD_TO_ITEMSET(eParam0, Global_1296539.f_32);

	if (!func_33(eParam0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), eParam0, false);
		PLAYER::_0x6ECFC621A168424C(eParam0, eParam1, iParam2, 0);
		PLAYER::_EAGLE_EYE_SET_CUSTOM_DISTANCE(eParam0, 500f);
		return 1;
	}

	for (i = 0; i < 10; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_1296539[i /*2*/]))
		{
			Global_1296539[i /*2*/] = eParam0;
			return 1;
		}
	}

	return 0;
}

void func_23(var uParam0) // Position - 0x1087 Hash - 0x21841CAC ^0x2C63D4C6
{
	if (uParam0->f_4 != -1)
	{
		AUDIO::_STOP_SOUND_WITH_NAME("collectible_lure", "RDRO_Collectible_Sounds_Travelling_Saleswoman");
		AUDIO::RELEASE_SOUND_ID(uParam0->f_4);
		PAD::STOP_CONTROL_SHAKE(PLAYER_CONTROL);
		uParam0->f_4 = -1;
	}

	AUDIO::_RELEASE_SOUNDSET("RDRO_Collectible_Sounds_Travelling_Saleswoman");
	return;
}

void func_24(int iParam0, int iParam1) // Position - 0x10BD Hash - 0x3ABC36EE ^0x53B64BE1
{
	if (func_34(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x10D6 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_26(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1100 Hash - 0x556D3123 ^0xD74EAB49
{
	switch (uParam0->f_11)
	{
		case 0:
			if (func_35(joaat("kit_collectors_bag"), false, false, false) <= 0)
				return 0;
			break;
	
		case 1:
			if (func_36(false))
				return 0;
			break;
	
		case 2:
			if (func_37())
				return 0;
			break;
	
		case 3:
			if (Global_1048576)
				return 0;
			break;
	
		case 4:
			if (func_38())
				return 0;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
				return 0;
			break;
	
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(Global_33) && TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
			break;
	
		case 7:
			if (!bParam1 && *uParam0 == 0)
				return 0;
			break;
	
		case 8:
			if (bParam2 && *uParam0 == 0)
				return 0;
			break;
	
		default:
			uParam0->f_11 = 0;
			break;
	}

	return 1;
}

float func_27() // Position - 0x11FF Hash - 0x20414E16 ^0x28E659F3
{
	return Global_1156111.f_2169[89 /*205*/].f_201;
}

void func_28(var uParam0, int iParam1) // Position - 0x1214 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

void func_29(int iParam0) // Position - 0x1221 Hash - 0x81B61271 ^0x22A3D4FE
{
	if (iParam0 <= 0)
		return;

	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
	return;
}

void func_30(var uParam0) // Position - 0x1248 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_39(uParam0, 0f);
	return;
}

float func_31(var uParam0) // Position - 0x1257 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_40(uParam0))
		return uParam0->f_1;

	if (func_41(uParam0))
		return uParam0->f_2;

	return func_42() - uParam0->f_1;
}

int func_32(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6) // Position - 0x128C Hash - 0x76785467 ^0x34019397
{
	Volume volume;
	int num;

	volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	num = func_43(uParam0, uParam1, volume, iParam2);
	func_44(volume);
	return num;
}

BOOL func_33(Entity eParam0) // Position - 0x12BD Hash - 0xE74E8D6A ^0xDC71868A
{
	int num;
	var unk5;
	Hash entityModel;
	int i;
	Hash hashKey;

	if (func_45() == 0)
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(func_45()))
		return false;

	num = func_45();
	num.f_2 = 0;
	num.f_3 = 0;
	num.f_4 = 0;
	num.f_1 = 0;
	entityModel = ENTITY::GET_ENTITY_MODEL(eParam0);

	for (i = 0; i < 30; i = i + 1)
	{
		num.f_1 = 0;
		num.f_3 = i;
		num.f_2 = 0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(num.f_1), &num))
		{
			num.f_2 = 1;
		
			if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk5, &num))
			{
				hashKey = MISC::GET_HASH_KEY(&unk5);
			
				if (entityModel == hashKey)
					return true;
			}
		}
	}

	return false;
}

BOOL func_34(int iParam0) // Position - 0x1357 Hash - 0x5499D461 ^0x5499D461
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

int func_35(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x136F Hash - 0x68EBB232 ^0xEAD633B4
{
	int inventoryItemCountWithItemid;
	int num;
	Hash ammoType;
	var guid;

	inventoryItemCountWithItemid = 0;

	if (!func_46(hParam0, 0))
		return 0;

	num = func_47(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_48(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_49(hParam0, false);
	}

	if (func_50(hParam0, joaat("DEFAULT")) != 0)
	{
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_51(bParam2), hParam0, bParam3);
	}
	else
	{
		guid = { func_52(hParam0, bParam2) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_51(bParam2), &guid, bParam3);
	}

	return inventoryItemCountWithItemid;
}

BOOL func_36(BOOL bParam0) // Position - 0x1431 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1915656.f_20638;

	return Global_1915656.f_20638 || Global_1915656.f_22504.f_1;
}

BOOL func_37() // Position - 0x1461 Hash - 0x4B5A576F ^0x4B5A576F
{
	return func_53() != -1;
}

BOOL func_38() // Position - 0x146F Hash - 0xA84EDD52 ^0x62087878
{
	return Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_FEMALE") && Global_1953292.f_1 != joaat("MPC_PLAYER_TYPE_MP_MALE");
}

void func_39(var uParam0, float fParam1) // Position - 0x1494 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_42() - fParam1;
	func_54(uParam0, 1);
	func_55(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_40(var uParam0) // Position - 0x14BA Hash - 0x5001E582 ^0x5001E582
{
	return func_56(*uParam0, 1);
}

BOOL func_41(var uParam0) // Position - 0x14CA Hash - 0x39705408 ^0x39705408
{
	return func_56(*uParam0, 2);
}

float func_42() // Position - 0x14DA Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

int func_43(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x150C Hash - 0xF4BE06E5 ^0x21E9A98D
{
	ItemSet itemSet;
	ScrHandle indexedItemInItemset;
	ScrHandle handle;
	int num;
	int i;
	int j;
	int entitiesInVolume;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volParam2, itemSet, 3);
	entitiesInVolume >= iParam3;

	for (i = 0; i < entitiesInVolume; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemSet);
		handle = indexedItemInItemset;
	
		if (ENTITY::IS_ENTITY_AN_OBJECT(handle))
		{
			for (j = 0; j < *uParam1; j = j + 1)
			{
				if (uParam1->[j] == 0)
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
				else if (ENTITY::GET_ENTITY_MODEL(handle) == uParam1->[j])
				{
					uParam0->[num] = indexedItemInItemset;
					num = num + 1;
					j = *uParam1;
				}
			}
		}
	
		if (num >= iParam3)
		{
			ITEMSET::DESTROY_ITEMSET(itemSet);
			return iParam3;
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemSet);
	return num;
}

void func_44(Volume volParam0) // Position - 0x15C7 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

int func_45() // Position - 0x15DE Hash - 0x14C87721 ^0x9AEBE8A8
{
	return Global_1072759.f_28418[47 /*4*/].f_3;
}

BOOL func_46(Hash hParam0, int iParam1) // Position - 0x15F3 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_47(Hash hParam0) // Position - 0x160D Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_46(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

Hash func_48(Hash hParam0, int iParam1) // Position - 0x1638 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_46(hParam0, 0))
		return 0;

	num = func_47(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_57(hParam0, 1399091007))
	{
		func_58(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_49(Hash hParam0, BOOL bParam1) // Position - 0x16B2 Hash - 0xF271562B ^0x8AA3413F
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_59(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0) };

	if (bParam1)
		func_61(&unk, func_60(false));

	if (!func_62(&unk, &num, &num2, false))
		return 0;

	func_63(num);
	return num2;
}

int func_50(Hash hParam0, Hash hParam1) // Position - 0x1711 Hash - 0x865BD5D3 ^0xA4D690BD
{
	if (hParam1 == 0)
		return 0;

	if (func_65(func_64(hParam0), 2))
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

int func_51(BOOL bParam0) // Position - 0x173D Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_2() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<4> func_52(Hash hParam0, BOOL bParam1) // Position - 0x177E Hash - 0x8EFC92E9 ^0xE8DA0FF0
{
	var unk;

	unk = { func_66(hParam0, bParam1, 0) };
	return func_67(hParam0, unk, unk.f_4, bParam1);
}

int func_53() // Position - 0x17A3 Hash - 0x4228A1C2 ^0x247D3B40
{
	return Global_1149172.f_137;
}

void func_54(var uParam0, int iParam1) // Position - 0x17B1 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_55(var uParam0, int iParam1) // Position - 0x17C2 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_56(int iParam0, int iParam1) // Position - 0x17D7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_57(Hash hParam0, Hash hParam1) // Position - 0x17E6 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_46(hParam0, 0))
		return func_68(func_64(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_58(Hash hParam0, var uParam1, var uParam2) // Position - 0x1827 Hash - 0x38E6C2DD ^0xA4FE6475
{
	*uParam1 = 0;
	*uParam2 = 0;

	switch (hParam0)
	{
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("repeater_ammo_box_express");
			*uParam2 = joaat("ammo_repeater_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = joaat("repeater_ammo_box");
			*uParam2 = joaat("ammo_repeater");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("revolver_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_revolver_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = joaat("pistol_ammo_box");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = joaat("revolver_ammo_box_used");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = joaat("shotgun_ammo_box_used");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("rifle_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_rifle_high_velocity");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("pistol_ammo_box_express");
			*uParam2 = joaat("ammo_pistol_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("rifle_ammo_box_express");
			*uParam2 = joaat("ammo_rifle_express");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("repeater_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_repeater_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = joaat("shotgun_ammo_box_slug");
			*uParam2 = joaat("ammo_shotgun_slug");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = joaat("rifle_ammo_box");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = joaat("22_ammo_box");
			*uParam2 = joaat("ammo_22");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = joaat("revolver_ammo_box");
			*uParam2 = joaat("ammo_revolver");
			break;
	
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = joaat("revolver_ammo_box_express");
			*uParam2 = joaat("ammo_revolver_express");
			break;
	
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = joaat("rifle_ammo_box_used");
			*uParam2 = joaat("AMMO_RIFLE");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = joaat("pistol_ammo_box_used");
			*uParam2 = joaat("AMMO_PISTOL");
			break;
	
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = joaat("pistol_ammo_box_high_velocity");
			*uParam2 = joaat("ammo_pistol_high_velocity");
			break;
	
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = joaat("shotgun_ammo_box");
			*uParam2 = joaat("AMMO_SHOTGUN");
			break;
	
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = joaat("repeater_ammo_box_used");
			*uParam2 = joaat("ammo_repeater");
			break;
	}

	return;
}

struct<18> func_59(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1A33 Hash - 0x90CCF0F4 ^0xA5F3D799
{
	Hash hash;

	hash = -1;
	hash.f_1 = -1;
	hash.f_2 = -1;
	hash.f_3 = -1;
	hash.f_4 = -1;
	hash.f_5 = -1;
	hash.f_6 = -1;
	hash.f_7 = -1;
	hash.f_8 = -1;
	hash.f_13 = -1;
	hash.f_14 = -1;
	hash.f_15 = -1;
	hash.f_16 = -1;
	hash.f_17 = -1;

	if (hParam0 != 0)
		hash = hParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		hash.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != joaat("SLOTID_NONE"))
		hash.f_2 = iParam2;

	if (iParam3 != 0 && iParam3 != joaat("SLOTID_NONE"))
		hash.f_3 = iParam3;

	if (iParam4 != 0)
		hash.f_4 = iParam4;

	if (iParam5 != 0)
		hash.f_5 = iParam5;

	if (iParam6 != 0)
		hash.f_8 = iParam6;

	return hash;
}

struct<4> func_60(BOOL bParam0) // Position - 0x1B11 Hash - 0xC271E2E0 ^0xF6B4968C
{
	int num;

	num = func_51(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_4)))
			Global_1292143.f_4 = { func_67(923904168, func_69(bParam0), -740156546, bParam0) };
	
		return Global_1292143.f_4;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_16)))
			Global_1292143.f_16 = { func_67(923904168, func_69(bParam0), -740156546, false) };
	
		return Global_1292143.f_16;
	}

	return func_67(923904168, func_69(bParam0), -740156546, false);
}

void func_61(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1BB2 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_62(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x1BCD Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_51(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_63(int iParam0) // Position - 0x1BF2 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

Hash func_64(Hash hParam0) // Position - 0x1C13 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_65(Hash hParam0, int iParam1) // Position - 0x1C1D Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

struct<5> func_66(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x1C37 Hash - 0xFD1D83A6 ^0x412BEE1D
{
	var unk;
	int num;
	var unk6;
	var unk28;

	unk = { func_69(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	num = func_47(hParam0);

	switch (num)
	{
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_75(hParam0, -1823706425))
			{
				unk = { func_67(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_75(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_67(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -1911121386))
			{
				unk = { func_67(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = -1911121386;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
			else if (func_75(hParam0, -1653629781))
			{
				unk = { func_67(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			break;
	
		case joaat("coach"):
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = joaat("SLOTID_NONE");
			unk = { func_73(bParam1) };
		
			switch (func_74(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case -1070622585:
					unk.f_4 = -6796437;
					break;
			
				case -1057349201:
					unk.f_4 = 1473261684;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			unk = { func_67(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
			unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			break;
	
		case joaat("WEAPON"):
			unk = { func_60(bParam1) };
		
			if (iParam2 && func_70(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_71(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_71(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false, false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_72(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else
					unk.f_4 = joaat("SLOTID_WEAPON_1");
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WEAPON_0");
			}
			break;
	
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_SATCHEL")))
			{
				unk.f_4 = joaat("SLOTID_SATCHEL");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_CURRENCY")))
			{
				unk28.f_9 = joaat("SLOTID_NONE");
			
				if (!func_76(unk, &unk28, bParam1, false, -1))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, -718417579))
			{
				unk.f_4 = -718417579;
			}
			else if (func_75(hParam0, -1653629781))
			{
				unk = { func_67(1384535894, unk, 1784584921, bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, 1384535894);
			}
			else
			{
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("character"));
				unk.f_4 == 0;
			}
			break;
	}

	return unk;
}

struct<4> func_67(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1FAB Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_46(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_51(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_68(Hash hParam0, Hash hParam1) // Position - 0x1FDC Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_65(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

struct<4> func_69(BOOL bParam0) // Position - 0x2012 Hash - 0xCD4C5B4C ^0x5BC3600A
{
	int num;

	if (Global_1572887.f_14 == 0)
	{
		num = func_51(bParam0);
	
		if (num == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292143))
				Global_1292143 = { func_67(joaat("character"), func_77(), joaat("SLOTID_NONE"), bParam0) };
		
			return Global_1292143;
		}
		else if (num == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_12)))
				Global_1292143.f_12 = { func_67(joaat("character"), func_77(), joaat("SLOTID_NONE"), false) };
		
			return Global_1292143.f_12;
		}
	}

	return func_67(joaat("character"), func_77(), joaat("SLOTID_NONE"), bParam0);
}

int func_70(Hash hParam0, BOOL bParam1) // Position - 0x20B2 Hash - 0x5D0FB4E0 ^0x17177DE5
{
	if (func_74(hParam0) == 1779021115)
		return 0;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_78();
		else
			return 1;

	return 0;
}

BOOL func_71(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x20E9 Hash - 0x28ECC25A ^0x28ECC25A
{
	return func_79(hParam0, *uParam1, hParam2, bParam3, true, bParam4) > 0;
}

BOOL func_72(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x2104 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_80(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_73(BOOL bParam0) // Position - 0x2125 Hash - 0x9E4BFC8E ^0xE92FDA8B
{
	int num;

	num = func_51(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292143.f_8)))
			Global_1292143.f_8 = { func_67(271701509, func_69(bParam0), 12999093, false) };
	
		return Global_1292143.f_8;
	}

	return func_67(271701509, func_69(bParam0), 12999093, false);
}

Hash func_74(Hash hParam0) // Position - 0x218F Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_46(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_75(Hash hParam0, Hash hParam1) // Position - 0x21BA Hash - 0x3516CCA0 ^0x327E5212
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_74(hParam0);

	if (category == -1015256479)
		return false;

	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (func_81(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_76(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Position - 0x2227 Hash - 0x113CD144 ^0x113CD144
{
	return func_82(&uParam0, panParam4, bParam5, bParam6, iParam7);
}

struct<4> func_77() // Position - 0x223D Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_78() // Position - 0x2249 Hash - 0x7BDD8F67 ^0x9160E7D8
{
	if (func_83(joaat("upgrade_offhand_holster"), false, false, false) == 0)
		return 0;

	return 1;
}

int func_79(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x2266 Hash - 0xC754D793 ^0x26C4E67C
{
	int inventoryItemCountWithGuid;
	var guid;

	if (!func_46(hParam0, 0))
		return 0;

	if (!bParam7 && func_50(hParam0, joaat("DEFAULT")) == 0)
		bParam7 = true;

	inventoryItemCountWithGuid = 0;

	if (bParam7)
	{
		guid = { func_67(hParam0, uParam1, hParam5, bParam6) };
	
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
			return 0;
	
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_51(bParam6), &guid, bParam8);
	}
	else
	{
		inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_51(bParam6), hParam0, bParam8);
	}

	return inventoryItemCountWithGuid;
}

BOOL func_80(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x22E5 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_51(false);
	*panParam1 = { func_67(hParam0, func_60(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_81(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x232A Hash - 0x7F891916 ^0x5CD7D9F0
{
	if (hParam2 == 487172188)
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(hParam1, joaat("DEFAULT")) == -1925887917)
			return false;

	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, hParam2);
}

BOOL func_82(Any* panParam0, Any* panParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x235D Hash - 0xC845006B ^0xAA568F17
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam0))
		return 0;

	if (iParam4 == -1)
		iParam4 = func_51(bParam2);

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, panParam0, panParam1, !bParam3))
		return 0;

	return 1;
}

int func_83(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2397 Hash - 0x118F0611 ^0x5AC648CA
{
	if (func_84(hParam0) && !bParam2)
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_51(bParam1), hParam0, bParam3);
}

BOOL func_84(Hash hParam0) // Position - 0x23CA Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

