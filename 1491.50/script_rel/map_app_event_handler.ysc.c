#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	Hash hScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x70CA3089 ^0x7DDED6A6
{
	int eventData;
	var unk4;

	fLocal_7 = 1f;
	fLocal_8 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	unk4.f_13 = -1;
	unk4.f_24 = -1;
	unk4.f_25 = -1;
	unk4.f_26 = -1;
	unk4.f_27 = -1;
	unk4.f_28 = 1;
	func_1(&unk4);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		func_2(&unk4);

	while (true)
	{
		while (UIEVENTS::EVENTS_UI_IS_PENDING(hScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hScriptParam_0, &eventData))
			{
				func_3(&eventData, &unk4);
			
				switch (eventData.f_2)
				{
					case joaat("zone"):
						unk4.f_4 = { eventData };
						unk4 = { eventData };
					
						switch (eventData)
						{
							case -1740156697:
								func_4(&unk4);
								break;
						
							case -632467210:
								unk4.f_24 = -1;
								unk4.f_25 = -1;
								func_5(&unk4);
								break;
						}
					
						unk4.f_28 = 1;
						break;
				
					case joaat("blip"):
						unk4 = { eventData };
					
						switch (eventData)
						{
							case -1740156697:
								func_6(&unk4);
								break;
						
							case -1203660660:
								func_8(&unk4);
								break;
						
							case -632467210:
								func_7(&unk4);
								unk4 = { unk4.f_4 };
								func_4(&unk4);
								break;
						}
						break;
				}
			
				UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
			}
		}
	
		func_9(&unk4);
		func_10(&unk4);
		BUILTIN::WAIT(0);
	}

	func_2(&unk4);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x14D Hash - 0xE67EF483 ^0x40D4D339
{
	var unk;

	unk.f_13 = -1;
	unk.f_24 = -1;
	unk.f_25 = -1;
	unk.f_26 = -1;
	unk.f_27 = -1;
	unk.f_28 = 1;
	*uParam0 = { unk };
	uParam0->f_14 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", false);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::TEXT_BLOCK_REQUEST("FMMC");

	if (TXD::DOES_STREAMED_TXD_EXIST(-1859668514))
		TXD::REQUEST_STREAMED_TXD(-1859668514, false);

	uParam0->f_28 = 1;
	return;
}

void func_2(var uParam0) // Position - 0x1EF Hash - 0x24B9E3A7 ^0xB3B3BD3F
{
	func_11(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_3(var uParam0, var uParam1) // Position - 0x201 Hash - 0x2316FD8E ^0xFC2A5E7B
{
	switch (uParam0->f_2)
	{
		case joaat("TEXT_WRITTEN"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_26 = func_12(uParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
	
		case joaat("TEXT_PRINTED"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_27 = func_12(uParam0);
					uParam1->f_28 = 1;
					break;
			}
			break;
	
		case joaat("district"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_24 = func_13(func_12(uParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
	
		case joaat("TOWN"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_25 = func_14(func_12(uParam0));
					uParam1->f_28 = 1;
					break;
			}
			break;
	}

	return;
}

int func_4(var uParam0) // Position - 0x2C3 Hash - 0xF0D9ACD2 ^0xD84574F3
{
	uParam0->f_13 = uParam0->f_1;

	switch (func_15(uParam0))
	{
		case 0:
			uParam0->f_16 = func_17(uParam0->f_14);
			break;
	
		case 1:
			uParam0->f_16 = func_18(uParam0->f_15);
			break;
	
		case 2:
			uParam0->f_16 = func_16(uParam0->f_13);
			break;
	
		default:
			func_19(uParam0);
			return 0;
	}

	func_19(uParam0);
	return 1;
}

void func_5(var uParam0) // Position - 0x332 Hash - 0x646928F0 ^0x646928F0
{
	func_19(uParam0);
	return;
}

int func_6(var uParam0) // Position - 0x340 Hash - 0xF0065A53 ^0x9291754
{
	uParam0->f_19 = uParam0->f_1;

	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}

	switch (uParam0->f_17)
	{
		case 62:
			switch (func_15(uParam0))
			{
				case 0:
					uParam0->f_16 = func_17(uParam0->f_14);
					uParam0->f_20 = func_23(uParam0->f_13);
				
					if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20))
						uParam0->f_20 = func_24();
					break;
			}
			break;
	
		case 63:
			if (func_21(uParam0->f_19, &(uParam0->f_22)))
				uParam0->f_20 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1835011[uParam0->f_22 /*74*/].f_8)));
			else
				uParam0->f_20 = -1640799778;
			break;
	
		case 64:
			if (func_22(uParam0->f_19, &(uParam0->f_23)))
				uParam0->f_20 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1347702[uParam0->f_23 /*49*/].f_3)));
			else
				uParam0->f_20 = -1;
			break;
	
		default:
			uParam0->f_20 = func_25(uParam0->f_17, uParam0->f_19);
			break;
	}

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		TXD::REQUEST_STREAMED_TXD(uParam0->f_20, true);
		uParam0->f_21 = 1;
		return 1;
	}

	return 0;
}

void func_7(var uParam0) // Position - 0x465 Hash - 0x3A4A7CC9 ^0xAF01DF9C
{
	var unk;

	func_26(uParam0);
	uParam0->f_17 = { unk };
	uParam0->f_17 = 0;
	uParam0->f_19 = 0;
	uParam0->f_22 = -1;
	uParam0->f_23 = -1;
	func_27(uParam0);
	return;
}

int func_8(var uParam0) // Position - 0x497 Hash - 0x27718047 ^0xA1AC2F0F
{
	if (uParam0->f_19 != uParam0->f_1)
		return 0;

	if (!func_20(uParam0->f_19, &(uParam0->f_17)))
	{
		uParam0->f_19 = 0;
		return 0;
	}

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20))
	{
		if (!uParam0->f_21)
		{
			uParam0->f_29 = 0;
			UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("Map"), joaat("show_info"));
			return 1;
		}
	}

	return 0;
}

void func_9(var uParam0) // Position - 0x4F3 Hash - 0x196D24C3 ^0x58569009
{
	if (uParam0->f_28)
	{
		func_28(uParam0);
		uParam0->f_28 = 0;
	}

	return;
}

void func_10(var uParam0) // Position - 0x50D Hash - 0xB997DE43 ^0x48232A59
{
	if (func_29(uParam0))
	{
		switch (uParam0->f_17)
		{
			case 62:
				func_32(uParam0->f_13, uParam0);
				break;
		
			case 63:
				func_30(uParam0->f_19, uParam0);
				break;
		
			case 64:
				func_31(uParam0->f_19, uParam0);
				break;
		
			case 82:
				func_33(uParam0->f_19, uParam0);
				break;
		
			case 83:
				func_34(uParam0->f_19, uParam0);
				break;
		
			case 84:
				func_35(uParam0->f_19, uParam0);
				break;
		
			case 85:
				func_36(uParam0->f_19, uParam0);
				break;
		
			case 86:
				func_37(uParam0->f_17, uParam0);
				break;
		
			default:
				func_37(uParam0->f_17, uParam0);
				break;
		}
	}

	return;
}

void func_11(var uParam0) // Position - 0x5CD Hash - 0xAC281508 ^0x6CF83087
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
	return;
}

int func_12(var uParam0) // Position - 0x5DD Hash - 0x4DBEFDC0 ^0xFE47C025
{
	if (uParam0->f_1 != 0)
		return uParam0->f_1;

	return -1;
}

int func_13(int iParam0) // Position - 0x5F8 Hash - 0x50573299 ^0x50573299
{
	switch (iParam0)
	{
		case joaat("riobravo"):
			return 14;
	
		case joaat("GaptoothRidge"):
			return 13;
	
		case joaat("scarlettmeadows"):
			return 11;
	
		case joaat("GuarmaD"):
			return 8;
	
		case joaat("GrizzliesEast"):
			return 6;
	
		case joaat("ChollaSprings"):
			return 15;
	
		case joaat("heartlands"):
			return 9;
	
		case joaat("roanoke"):
			return 10;
	
		case joaat("greatplains"):
			return 4;
	
		case joaat("bigvalley"):
			return 1;
	
		case joaat("HennigansStead"):
			return 16;
	
		case joaat("BluewaterMarsh"):
			return 2;
	
		case joaat("GrizzliesWest"):
			return 7;
	
		case joaat("talltrees"):
			return 12;
	
		case joaat("Cumberland"):
			return 3;
	
		case joaat("bayounwa"):
			return 0;
	
		default:
		
	}

	return -1;
}

eStackSize func_14(int iParam0) // Position - 0x6B2 Hash - 0x550DB3E ^0x550DB3E
{
	switch (iParam0)
	{
		case joaat("butcher"):
			return 82;
	
		case joaat("cornwall"):
			return 65;
	
		case joaat("beechershope"):
			return 37;
	
		case joaat("tumbleweed"):
			return 115;
	
		case joaat("AguasdulcesVilla"):
		case joaat("AguasdulcesRuins"):
		case joaat("AguasdulcesFarm"):
			return 57;
	
		case joaat("WALLACE"):
			return 35;
	
		case joaat("StDenis"):
			return 5;
	
		case joaat("ARMADILLO"):
			return 120;
	
		case joaat("Emerald"):
			return 69;
	
		case joaat("annesburg"):
			return 78;
	
		case joaat("lagras"):
			return 3;
	
		case joaat("strawberry"):
			return 26;
	
		case joaat("valentine"):
			return 76;
	
		case joaat("blackwater"):
			return 38;
	
		case joaat("manicato"):
			return 61;
	
		case joaat("Manzanita"):
			return 110;
	
		case joaat("wapiti"):
			return 56;
	
		case joaat("braithwaite"):
			return 93;
	
		case joaat("Caliga"):
			return 95;
	
		case joaat("RHODES"):
			return 105;
	
		case joaat("vanhorn"):
			return 92;
	
		case joaat("Siska"):
			return 32;
	}

	return -1;
}

int func_15(var uParam0) // Position - 0x7C2 Hash - 0x2AD66BFD ^0x7ADE1BB8
{
	if (uParam0->f_13 == -1)
		return -1;

	uParam0->f_16 = func_16(uParam0->f_13);

	if (uParam0->f_16 != 0)
		return 2;

	uParam0->f_14 = func_14(uParam0->f_13);

	if (func_38(uParam0->f_14))
		return 0;

	uParam0->f_15 = func_13(uParam0->f_13);

	if (func_39(uParam0->f_15))
		return 1;

	return -1;
}

int func_16(int iParam0) // Position - 0x825 Hash - 0x47ADC10D ^0xA299C479
{
	switch (iParam0)
	{
		case joaat("LowerWestElizabeth"):
			return joaat("REGION_LOWER_WEST_ELIZABETH");
	
		case joaat("newhanover"):
			return joaat("REGION_NEW_HANOVER");
	
		case joaat("UpperWestElizabeth"):
			return joaat("REGION_UPPER_WEST_ELIZABETH");
	
		case joaat("ambarino"):
			return joaat("REGION_AMBARINO");
	
		case joaat("lemoyne"):
			return joaat("REGION_LEMOYNE");
	
		case joaat("westelizabeth"):
			return joaat("REGION_WEST_ELIZABETH");
	
		case joaat("guarma"):
			return joaat("REGION_GUARMA");
	
		case joaat("newaustin"):
			return joaat("REGION_NEW_AUSTIN");
	
		default:
		
	}

	return 0;
}

int func_17(int iParam0) // Position - 0x8A6 Hash - 0xB8EC44B7 ^0x6E73F165
{
	switch (iParam0)
	{
		case 0:
			return joaat("region_bay_crawdadwillies");
	
		case 1:
			return joaat("region_bay_macombs_end");
	
		case 2:
			return joaat("region_bay_merkinswaller");
	
		case 3:
			return joaat("region_bay_lagras");
	
		case 4:
			return joaat("region_bay_lakay");
	
		case 5:
			return joaat("region_bay_saint_denis");
	
		case 6:
			return joaat("region_bay_orange_plantation");
	
		case 7:
			return joaat("region_bay_serial_killer");
	
		case 8:
			return joaat("region_bay_serendipity");
	
		case 9:
			return joaat("region_bay_shadybelle");
	
		case 10:
			return joaat("region_bay_siltwaterstrand");
	
		case 11:
			return joaat("region_bgv_appleseedtimber");
	
		case 12:
			return joaat("region_bgv_beryls_dream");
	
		case 13:
			return joaat("region_bgv_blackboneforest_trapper");
	
		case 14:
			return joaat("region_bgv_dakotariver_trapper");
	
		case 15:
			return joaat("region_bgv_fortriggs");
	
		case 16:
			return joaat("region_bgv_hangingdog");
	
		case 17:
			return joaat("region_bgv_lonemulestead");
	
		case 18:
			return joaat("region_bgv_missing_husband");
	
		case 19:
			return joaat("region_bgv_monto_rest");
	
		case 20:
			return joaat("region_bgv_owanjila_dam");
	
		case 21:
			return joaat("region_bgv_paintedsky");
	
		case 22:
			return joaat("region_bgv_pronghorn");
	
		case 23:
			return joaat("region_bgv_riggs_station");
	
		case 24:
			return joaat("region_bgv_shack");
	
		case 25:
			return joaat("region_bgv_shepherds_rise");
	
		case 26:
			return joaat("region_bgv_strawberry");
	
		case 27:
			return joaat("region_bgv_valley_view");
	
		case 28:
			return joaat("region_bgv_wallace_station");
	
		case 29:
			return joaat("region_bgv_watsonscabin");
	
		case 30:
			return joaat("region_blu_canebreak_manor");
	
		case 31:
			return joaat("region_blu_copperhead");
	
		case 32:
			return joaat("region_blu_sisika");
	
		case 33:
			return joaat("region_cml_bacchusbridge");
	
		case 34:
			return joaat("region_cml_dino_lady");
	
		case 35:
			return joaat("region_cml_oldfortwallace");
	
		case 36:
			return joaat("region_cml_sixpointcabin");
	
		case 37:
			return joaat("region_grt_beechers");
	
		case 38:
			return joaat("region_grt_blackwater");
	
		case 39:
			return joaat("region_grt_quakers_cove");
	
		case 40:
			return joaat("region_grz_adlerranch");
	
		case 41:
			return joaat("region_grz_dead_rival");
	
		case 42:
			return joaat("region_grz_chezporter");
	
		case 43:
			return joaat("region_grz_colter");
	
		case 44:
			return joaat("region_grz_frozen_explorer");
	
		case 45:
			return joaat("region_grz_millesani_claim");
	
		case 46:
			return joaat("region_grz_mountain_man");
	
		case 47:
			return joaat("region_grz_starving_children");
	
		case 48:
			return joaat("region_grz_tempest_rim");
	
		case 49:
			return joaat("region_grz_wintermining_town");
	
		case 50:
			return joaat("region_grz_calumetravine");
	
		case 51:
			return joaat("region_gre_civil_war_bride");
	
		case 52:
			return joaat("region_grz_cohutta");
	
		case 53:
			return joaat("region_grz_gunfight");
	
		case 54:
			return joaat("region_grz_theloft");
	
		case 55:
			return joaat("region_gre_veteran");
	
		case 56:
			return joaat("region_grz_wapiti");
	
		case 57:
			return joaat("region_gua_aguasdulces");
	
		case 58:
			return joaat("region_gua_camp");
	
		case 59:
			return joaat("region_gua_cincotorres");
	
		case 60:
			return joaat("region_gua_lacapilla");
	
		case 61:
			return joaat("region_gua_manicato");
	
		case 62:
			return joaat("region_hrt_abandoned_mill");
	
		case 63:
			return joaat("region_roa_beechers_c");
	
		case 64:
			return joaat("region_hrt_carmodydell");
	
		case 65:
			return joaat("region_hrt_cornwallkerosene");
	
		case 66:
			return joaat("region_hrt_crop_farm");
	
		case 67:
			return joaat("region_hrt_cumberlandfalls");
	
		case 68:
			return joaat("region_hrt_downsranch");
	
		case 69:
			return joaat("region_hrt_emeraldranch");
	
		case 70:
			return joaat("region_hrt_grangers_hoggery");
	
		case 71:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 72:
			return joaat("region_hrt_larnedsod");
	
		case 73:
			return joaat("region_hrt_loony_cult");
	
		case 74:
			return joaat("region_hrt_luckyscabin");
	
		case 75:
			return joaat("region_hrt_swansons_station");
	
		case 76:
			return joaat("region_hrt_valentine");
	
		case 77:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 78:
			return joaat("region_roa_annesburg");
	
		case 79:
			return joaat("region_roa_beaverhollow");
	
		case 80:
			return joaat("region_roa_black_balsam_rise");
	
		case 81:
			return joaat("region_roa_brandywine_drop");
	
		case 82:
			return joaat("region_roa_butchercreek");
	
		case 83:
			return joaat("region_roa_doverhill");
	
		case 84:
			return joaat("region_roa_happy_family");
	
		case 85:
			return joaat("region_roa_isolationist");
	
		case 86:
			return joaat("region_roa_macleanshouse");
	
		case 87:
			return joaat("region_roa_mossy_flats");
	
		case 88:
			return joaat("region_roa_roanoke_valley");
	
		case 89:
			return joaat("region_roa_rockyseven");
	
		case 90:
			return joaat("region_roa_trapper");
	
		case 91:
			return joaat("region_roa_vanhornmansion");
	
		case 92:
			return joaat("region_roa_vanhornpost");
	
		case 93:
			return joaat("region_scm_braithwaitemanor");
	
		case 94:
			return joaat("region_scm_bulgerglade");
	
		case 95:
			return joaat("region_scm_caligahall");
	
		case 96:
			return joaat("region_scm_catfishjacksons");
	
		case 97:
			return joaat("region_scm_clemenscove");
	
		case 98:
			return joaat("region_scm_clemenspoint");
	
		case 99:
			return joaat("region_scm_compsons_stead");
	
		case 100:
			return joaat("region_scm_dairy_farm");
	
		case 101:
			return joaat("region_scm_horse_shop");
	
		case 102:
			return joaat("region_scm_lonniesshack");
	
		case 103:
			return joaat("region_scm_love_triangle");
	
		case 104:
			return joaat("region_scm_radleys_pasture");
	
		case 105:
			return joaat("region_scm_rhodes");
	
		case 106:
			return joaat("region_scm_slave_pen");
	
		case 107:
			return joaat("region_tal_aurora_basin");
	
		case 108:
			return joaat("region_tal_dead_settler");
	
		case 109:
			return joaat("region_tal_cochinay");
	
		case 110:
			return joaat("region_tal_manzanitapost");
	
		case 111:
			return joaat("region_tal_pacificunionrr");
	
		case 112:
			return joaat("region_tal_tannersreach");
	
		case 113:
			return joaat("region_tal_trapper");
	
		case 114:
			return joaat("region_gap_gaptooth_breach");
	
		case 115:
			return joaat("region_gap_tumbleweed");
	
		case 116:
			return joaat("region_gap_rathskeller_fork");
	
		case 117:
			return joaat("region_rio_benedict_point");
	
		case 118:
			return joaat("region_rio_fort_mercer");
	
		case 119:
			return joaat("region_rio_plain_view");
	
		case 120:
			return joaat("region_cho_armadillo");
	
		case 121:
			return joaat("region_cho_coots_chapel");
	
		case 122:
			return joaat("region_cho_don_julio_house");
	
		case 123:
			return joaat("region_cho_rileys_charge");
	
		case 124:
			return joaat("region_cho_ridgewood_farm");
	
		case 125:
			return joaat("region_cho_twin_rocks");
	
		case 126:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 127:
			return joaat("region_hen_thieves_landing");
	
		case 128:
			return joaat("region_centralunionrr");
	
		case 129:
			return joaat("region_gap_solomons_folly");
	
		default:
		
	}

	return 0;
}

int func_18(int iParam0) // Position - 0xFD2 Hash - 0xB8EC44B7 ^0xCA15B31A
{
	switch (iParam0)
	{
		case 0:
			return joaat("district_bayou_nwa");
	
		case 1:
			return joaat("district_big_valley");
	
		case 2:
			return joaat("district_bluegill_marsh");
	
		case 3:
			return joaat("district_cumberland_forest");
	
		case 4:
			return joaat("district_great_plains");
	
		case 5:
			return joaat("district_grizzlies");
	
		case 6:
			return joaat("district_grizzlies_east");
	
		case 7:
			return joaat("district_grizzlies_west");
	
		case 8:
			return joaat("district_guama");
	
		case 9:
			return joaat("district_heartland");
	
		case 10:
			return joaat("district_roanoke_ridge");
	
		case 11:
			return joaat("district_scarlett_meadows");
	
		case 12:
			return joaat("district_tall_trees");
	
		case 13:
			return joaat("district_gaptooth_ridge");
	
		case 14:
			return joaat("district_rio_bravo");
	
		case 15:
			return joaat("district_cholla_springs");
	
		case 16:
			return joaat("district_hennigans_stead");
	
		default:
		
	}

	return 0;
}

void func_19(var uParam0) // Position - 0x10D1 Hash - 0x3089532C ^0x5ECE737
{
	BOOL flag;
	Hash hash;
	char* str;
	eStackSize stackSize;
	int num;
	int num2;

	flag = false;
	hash = 0;
	str = "";
	stackSize = func_14(uParam0->f_13);
	num = uParam0->f_24;

	if (!func_39(num))
		num = func_13(uParam0->f_13);

	if (!func_39(num))
		num2 = func_41(func_40(stackSize, true, true));
	else
		num2 = func_42(num);

	if (func_43(num) || func_44(num2) || func_45(stackSize))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		else
			str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		flag = true;
	}
	else if (func_46(num2))
	{
		hash = func_47(num2);
	
		if (hash > 0)
		{
			flag = true;
			str = MISC::VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", hash);
		}
	}

	if (!flag)
	{
		if (56 == uParam0->f_14 && !func_48(52) || func_49(44) && 105 == uParam0->f_14 || 95 == uParam0->f_14)
		{
			str = MISC::VAR_STRING(2, "NO_WEAPON_REGION");
			flag = true;
		}
	}

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, flag);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, str);
	return;
}

BOOL func_20(Blip blParam0, var uParam1) // Position - 0x11FB Hash - 0xD267AB1 ^0x75C9A095
{
	var unk;
	var unk2;
	BOOL flag;

	flag = MAP::SET_BLIP_FLASHES(blParam0, &unk, &unk2);
	*uParam1 = unk;
	uParam1->f_1 = unk2;
	return flag;
}

BOOL func_21(eBlipSprite ebsParam0, var uParam1) // Position - 0x121C Hash - 0xB89AE412 ^0x996271F8
{
	int i;

	for (i = 0; i < Global_1898330; i = i + 1)
	{
		if (!func_50(Global_1898330[i]))
		{
		}
		else if (Global_1898346[i /*6*/].f_3 == 1)
		{
			*uParam1 = Global_1898346[i /*6*/].f_4;
		
			if (func_51(*uParam1) && MAP::DOES_BLIP_EXIST(Global_1835011[*uParam1 /*74*/].f_27) && Global_1835011[*uParam1 /*74*/].f_27 == ebsParam0)
				return true;
		}
	}

	return false;
}

BOOL func_22(eBlipSprite ebsParam0, var uParam1) // Position - 0x129D Hash - 0xF8164599 ^0xA2424D20
{
	int i;

	for (i = 0; i < Global_40.f_450; i = i + 1)
	{
		if (func_52(Global_40.f_450[i]) && MAP::DOES_BLIP_EXIST(Global_1347702[Global_40.f_450[i] /*49*/].f_37) && Global_1347702[Global_40.f_450[i] /*49*/].f_37 == ebsParam0 && !func_53(Global_1347702[Global_40.f_450[i] /*49*/].f_12, 16777216))
		{
			*uParam1 = Global_40.f_450[i];
			return true;
		}
	}

	return false;
}

Hash func_23(int iParam0) // Position - 0x1335 Hash - 0xB8EC44B7 ^0xD420F143
{
	switch (iParam0)
	{
		case joaat("tumbleweed"):
			return joaat("ZONE_TUMBLEWEED");
	
		case joaat("StDenis"):
			return joaat("ZONE_SAINT_DENIS");
	
		case joaat("ARMADILLO"):
			return joaat("ZONE_ARMADILLO");
	
		case joaat("Emerald"):
			return joaat("ZONE_EMERALD_RANCH");
	
		case joaat("annesburg"):
			return joaat("ZONE_ANNESBURG");
	
		case joaat("lagras"):
			return joaat("ZONE_LAGRAS");
	
		case joaat("strawberry"):
			return joaat("ZONE_STRAWBERRY");
	
		case joaat("valentine"):
			return joaat("ZONE_VALENTINE");
	
		case joaat("blackwater"):
			return joaat("ZONE_BLACKWATER");
	
		case joaat("RHODES"):
			return joaat("ZONE_RHODES");
	
		case joaat("vanhorn"):
			return joaat("ZONE_VAN_HORN_TRADING_POST");
	
		default:
		
	}

	return -1;
}

int func_24() // Position - 0x13E0 Hash - 0x9F572D68 ^0x25EB2A84
{
	return joaat("ZONE_VALENTINE");
}

Hash func_25(int iParam0, Blip blParam1) // Position - 0x13ED Hash - 0x3CD0BFCA ^0x5339C0D6
{
	var unk;
	var unk2;
	Hash hashKey;
	var unk18;
	var unk19;

	hashKey = -1;

	switch (iParam0)
	{
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
			TEXT_LABEL_ASSIGN_STRING(&unk2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), 128);
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 13:
			return -834434971;
	
		case 14:
			return -1014339941;
	
		case 15:
			return -1131397804;
	
		case 16:
			hashKey = MISC::GET_HASH_KEY("MAP_CARD_BLK_BOUNTY");
			break;
	
		case 17:
			return -1211307166;
	
		case 18:
			return 909802596;
	
		case 19:
			return -1932898631;
	
		case 20:
		case 21:
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 51:
		case 60:
		case 61:
			unk2 = { func_54(blParam1, iParam0, &unk) };
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 46:
		case 52:
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
			unk2 = { func_56(iParam0, blParam1, &unk) };
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 47:
			return -1212983574;
	
		case 48:
			return -1805795741;
	
		case 49:
			return -1949319444;
	
		case 50:
			unk2 = { func_55() };
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 53:
			return -40867973;
	
		case 54:
			return -700024937;
	
		case 55:
			return -422762807;
	
		case 56:
			return 1307627757;
	
		case 57:
			return -1341878153;
	
		case 58:
			return 1334885374;
	
		case 59:
			return 1718870684;
	
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			MAP::SET_BLIP_FLASHES(blParam1, &unk18, &unk19);
			TEXT_LABEL_ASSIGN_STRING(&unk2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(unk19), 128);
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 82:
			return -1640799778;
	
		case 83:
			return -1640799778;
	
		case 84:
			return -1640799778;
	
		case 85:
			return -1640799778;
	
		case 86:
			return -1640799778;
	}

	if (hashKey != -1)
		return hashKey;

	return -1;
}

void func_26(var uParam0) // Position - 0x172F Hash - 0xA0F65B7D ^0xF86CC28F
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
	return;
}

void func_27(var uParam0) // Position - 0x1747 Hash - 0x82E9D2BC ^0xDE6C6C33
{
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("Map"), joaat("hide_info")))
		uParam0->f_29 = 1;
	else
		uParam0->f_29 = 0;

	return;
}

void func_28(var uParam0) // Position - 0x176E Hash - 0x565A4E8E ^0x69228E4B
{
	char* str;
	char* str2;
	char* str3;
	char* str4;

	str = func_59(uParam0->f_26, uParam0->f_27);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		str2 = 0;
		str3 = 0;
		str4 = 0;
	
		if (uParam0->f_25 != -1)
			str2 = func_60(uParam0->f_25);
	
		if (uParam0->f_24 != -1)
		{
			str3 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(uParam0->f_24);
			str4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(uParam0->f_24);
		}
	
		if (!MISC::IS_STRING_NULL_OR_EMPTY(str2) && !MISC::IS_STRING_NULL_OR_EMPTY(str3))
			str = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", str2, str3);
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(str3) && !MISC::IS_STRING_NULL_OR_EMPTY(str4))
			str = MISC::VAR_STRING(42, "MAP_CARD_TOWN_FOOTER", str3, str4);
		else
			str = "";
	}

	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, str);
	return;
}

BOOL func_29(var uParam0) // Position - 0x1820 Hash - 0xF038D467 ^0x6E0882C6
{
	if (uParam0->f_29)
		func_27(uParam0);

	if (!uParam0->f_21)
		return false;

	if (uParam0->f_17 == 0)
	{
		uParam0->f_21 = 0;
		return false;
	}

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_20) && TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_20))
	{
		uParam0->f_21 = 0;
		return true;
	}

	return false;
}

void func_30(eBlipSprite ebsParam0, var uParam1) // Position - 0x1877 Hash - 0x847BCC36 ^0x6A8F3922
{
	var label;
	Hash hashKey;

	if (!func_51(uParam1->f_22))
		if (!func_21(ebsParam0, &(uParam1->f_22)))
			return;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1835011[uParam1->f_22 /*74*/].f_26);
	TEXT_LABEL_COPY(&label, { Global_1835011[uParam1->f_22 /*74*/].f_8 }, 2);
	TEXT_LABEL_APPEND_STRING(&label, "_DESC_PM", 16);

	if (!HUD::DOES_TEXT_LABEL_EXIST(&label))
		TEXT_LABEL_ASSIGN_STRING(&label, "", 16);

	hashKey = MISC::GET_HASH_KEY(&(Global_1835011[uParam1->f_22 /*74*/].f_8));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&label));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", hashKey);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(hashKey));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(hashKey));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_31(eBlipSprite ebsParam0, var uParam1) // Position - 0x1979 Hash - 0x3B97DD41 ^0xD2EE315C
{
	var label;
	Hash hashKey;

	if (!func_52(uParam1->f_23))
		if (!func_22(ebsParam0, &(uParam1->f_23)))
			return;
	else if (func_53(Global_1347702[uParam1->f_23 /*49*/].f_12, 16777216))
		return;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1347702[uParam1->f_23 /*49*/].f_36);
	TEXT_LABEL_COPY(&label, { Global_1347702[uParam1->f_23 /*49*/].f_3 }, 2);
	TEXT_LABEL_APPEND_STRING(&label, "_DESC_PM", 16);

	if (!HUD::DOES_TEXT_LABEL_EXIST(&label))
	{
		TEXT_LABEL_COPY(&label, { Global_1347702[uParam1->f_23 /*49*/].f_3 }, 2);
		TEXT_LABEL_APPEND_STRING(&label, "_DESC", 16);
	}

	hashKey = MISC::GET_HASH_KEY(&(Global_1347702[uParam1->f_23 /*49*/].f_3));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&label));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", hashKey);

	if (!func_53(Global_1347702[uParam1->f_23 /*49*/].f_12, 1) && func_53(Global_1347702[uParam1->f_23 /*49*/].f_12, 2) || Global_1347702[uParam1->f_23 /*49*/].f_36 == joaat("blip_rc"))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", -1859668514);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", joaat("IMAGE"));
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(hashKey));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(hashKey));
	}

	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_32(int iParam0, var uParam1) // Position - 0x1B14 Hash - 0xBA6636F8 ^0xB50B7F2E
{
	int num;
	int num2;
	Hash hash;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_20 = func_23(iParam0);
	num = func_63(uParam1->f_14);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_64(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(num)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_65(iParam0));

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam1->f_20))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_23(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_23(iParam0));
	}
	else
	{
		uParam1->f_20 = func_24();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_20);
	}

	num2 = func_42(num);

	if (func_46(num2))
	{
		hash = func_47(num2);
	
		if (hash > 0)
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", hash);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_name", "LAW_UI_NO_BOUNTY");
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
		}
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_town", uParam1->f_9);
	return;
}

void func_33(Blip blParam0, var uParam1) // Position - 0x1C57 Hash - 0x6230AEAB ^0x51783FF8
{
	var unk;
	int value;
	var unk2;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &value);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	unk2 = { func_66(PLAYER::INT_TO_PLAYERINDEX(value)) };
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", func_67(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(value)), joaat("COLOR_PURE_WHITE")));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(func_69(0, &unk2, func_68(0))));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_70(value));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
	return;
}

void func_34(Blip blParam0, var uParam1) // Position - 0x1D1A Hash - 0xD9FB8A96 ^0xA9019DB8
{
	var unk;
	var unk2;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &unk2);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(unk2)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_35(Blip blParam0, var uParam1) // Position - 0x1DBA Hash - 0x4C614808 ^0x6C7C1609
{
	var unk;
	int num;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &num);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1058888.f_43853.f_283[num /*306*/]);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_36(Blip blParam0, var uParam1) // Position - 0x1E61 Hash - 0x387E641B ^0xECBE8F65
{
	var unk;
	int num;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &num);
	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_72(num));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(uParam1->f_17, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_37(int iParam0, var uParam1) // Position - 0x1EFD Hash - 0x9400F37A ^0x330B8C30
{
	eStackSize stackSize;
	var unk;
	var unk17;
	var unk33;
	var unk49;
	var unk50;

	func_26(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	TEXT_LABEL_ASSIGN_STRING(&unk17, func_73(iParam0), 128);

	switch (func_74(iParam0))
	{
		case 1:
			unk = { func_54(uParam1->f_19, iParam0, &stackSize) };
		
			if (iParam0 == 16)
				TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_BOUNTY", 128);
		
			TEXT_LABEL_ASSIGN_STRING(&unk33, func_60(stackSize), 128);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&unk17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&unk33));
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), 128);
			stackSize = func_75(MAP::GET_BLIP_COORDS(uParam1->f_19), true);
			TEXT_LABEL_ASSIGN_STRING(&unk33, func_60(stackSize), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &unk17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&unk33));
			break;
	
		case 3:
			unk = { func_56(iParam0, uParam1->f_19, &stackSize) };
			TEXT_LABEL_ASSIGN_STRING(&unk33, func_60(stackSize), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &unk17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&unk33));
			break;
	
		case 4:
			MAP::SET_BLIP_FLASHES(uParam1->f_19, &unk49, &unk50);
			TEXT_LABEL_ASSIGN_STRING(&unk17, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(func_76(unk50)), 128);
			TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(unk50), 128);
			stackSize = func_75(MAP::GET_BLIP_COORDS(uParam1->f_19), true);
			TEXT_LABEL_ASSIGN_STRING(&unk33, func_60(stackSize), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &unk17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&unk33));
			break;
	
		case 5:
			unk = { func_79(stackSize) };
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &unk17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
	
		default:
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &unk17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
			break;
	}

	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_25(iParam0, uParam1->f_19));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", 0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

BOOL func_38(eStackSize essParam0) // Position - 0x2178 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return essParam0 >= 0 && essParam0 <= 150;
}

BOOL func_39(int iParam0) // Position - 0x218E Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

int func_40(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x21A4 Hash - 0x460680B1 ^0xEA5BF9A6
{
	int num;

	switch (essParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			if (essParam0 == func_83())
				return joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP");
			break;
	
		case 5:
			return joaat("LAW_REGION_SAINT_DENIS");
	
		case 22:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_PRONGHORN_RANCH");
		
			if (func_82(Global_1835011[59 /*74*/].f_1, true))
				return joaat("LAW_REGION_PRONGHORN_RANCH");
			else
				return joaat("LAW_REGION_BIG_VALLEY");
			break;
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 32:
			return joaat("LAW_REGION_SISIKA");
	
		case 35:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 37:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_BEECHERS_HOPE");
		
			if (func_82(Global_1347702[9 /*49*/].f_15, true))
				return joaat("LAW_REGION_BEECHERS_HOPE");
			else if (func_49(45))
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			else
				return joaat("LAW_REGION_GREAT_PLAINS");
			break;
	
		case 38:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_49(45))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 56:
			return joaat("LAW_REGION_WAPITI");
	
		case 57:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 61:
			return joaat("LAW_REGION_MANICATO");
	
		case 65:
			return joaat("LAW_REGION_CORNWALL");
	
		case 69:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 76:
			if (func_80(essParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 78:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 82:
			return joaat("LAW_REGION_BUTCHER_CREEK");
	
		case 92:
			return joaat("LAW_REGION_VAN_HORN");
	
		case 93:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 95:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 105:
			if (func_80(essParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 110:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_MANZANITA_POST");
		
			if (func_49(45))
				return joaat("LAW_REGION_MANZANITA_POST");
			else
				return joaat("LAW_REGION_MANZANITA_POST_MAINGAME");
			break;
	
		case 115:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 120:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 124:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 126:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 127:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_49(45))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_84(essParam0);
	
		if (num != -1)
			return func_85(num, bParam1);
	}

	return 0;
}

int func_41(int iParam0) // Position - 0x24C6 Hash - 0x4BF152B5 ^0x4BF152B5
{
	switch (iParam0)
	{
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
	
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
	
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
	
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
	
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
	
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
	}

	return -1;
}

int func_42(int iParam0) // Position - 0x2628 Hash - 0xA08D7C4E ^0xA08D7C4E
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 2;
	
		case 3:
			return 1;
	
		case 4:
			return 3;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 7:
			return 0;
	
		case 8:
			return 5;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 3;
	
		case 13:
			return 4;
	
		case 14:
			return 4;
	
		case 15:
			return 4;
	
		case 16:
			return 4;
	
		default:
		
	}

	return -1;
}

BOOL func_43(int iParam0) // Position - 0x26E3 Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_39(iParam0))
		return false;

	return func_86(iParam0, 2);
}

BOOL func_44(int iParam0) // Position - 0x2700 Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_46(iParam0))
		return false;

	return func_87(iParam0, 2);
}

BOOL func_45(eStackSize essParam0) // Position - 0x271D Hash - 0x6430C01F ^0xD1700991
{
	if (!func_38(essParam0))
		return false;

	return func_88(essParam0, 16777216);
}

BOOL func_46(int iParam0) // Position - 0x273E Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

Hash func_47(int iParam0) // Position - 0x2753 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_89(iParam0);
}

BOOL func_48(int iParam0) // Position - 0x2761 Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_82(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_49(int iParam0) // Position - 0x27C0 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_90(iParam0))
		return false;

	return func_91(iParam0);
}

BOOL func_50(int iParam0) // Position - 0x27DC Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_51(int iParam0) // Position - 0x280F Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

BOOL func_52(eStackSize essParam0) // Position - 0x2825 Hash - 0x5A094C43 ^0x5A094C43
{
	return essParam0 > -1 && essParam0 < 200;
}

BOOL func_53(int iParam0, int iParam1) // Position - 0x283B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

struct<16> func_54(Blip blParam0, int iParam1, var uParam2) // Position - 0x284A Hash - 0x13BCFC68 ^0xEE18D6A
{
	var unk;
	var blipCoords;
	const char* str;

	if (!MAP::DOES_BLIP_EXIST(blParam0))
		return unk;

	blipCoords = { MAP::GET_BLIP_COORDS(blParam0) };
	*uParam2 = func_75(blipCoords, true);

	while (blipCoords.f_2 < 200f && !func_38(*uParam2))
	{
		blipCoords.f_2 = blipCoords.f_2 + 25f;
		*uParam2 = func_75(blipCoords, true);
	}

	if (!func_38(*uParam2))
		return unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_", 128);
	str = func_92(*uParam2);
	TEXT_LABEL_APPEND_STRING(&unk, &str, 128);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 128);
	TEXT_LABEL_APPEND_STRING(&unk, func_93(iParam1, *uParam2, blipCoords), 128);
	return unk;
}

struct<16> func_55() // Position - 0x28F9 Hash - 0x7D1A7 ^0x9E9E9A84
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_NBX_STAGECOACH", 128);
	return unk;
}

struct<16> func_56(int iParam0, Blip blParam1, var uParam2) // Position - 0x290E Hash - 0xECF81B78 ^0x53CD794
{
	var unk;
	var blipCoords;

	if (!MAP::DOES_BLIP_EXIST(blParam1))
		return unk;

	blipCoords = { MAP::GET_BLIP_COORDS(blParam1) };

	if (blipCoords.f_2 == 0f)
		func_94(&blipCoords, 50, 10, false);

	if (blipCoords.f_2 == 0f)
		blipCoords.f_2 = Global_36.f_2;

	*uParam2 = func_75(blipCoords, true);

	if (!func_38(*uParam2))
		return unk;

	switch (iParam0)
	{
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_", 128);
			TEXT_LABEL_APPEND_STRING(&unk, func_95(*uParam2), 128);
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_FOOD", 128);
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}

	return unk;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x2A5B Hash - 0xA17D549C ^0xEAD80AB9
{
	switch (iParam0)
	{
		case 1:
			return "MAP_CARD_MINIGAMES_BLACKJACK";
	
		case 2:
			return "MAP_CARD_MINIGAMES_DOMINOES_BLOCK";
	
		case 3:
			return "MAP_CARD_MINIGAMES_POKER";
	
		case 4:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_CLASSIC";
	
		case 5:
			return "MAP_CARD_MINIGAMES_COW_MILKING";
	
		case 6:
			return "MAP_CARD_MINIGAMES_CLEANING_STALLS";
	
		case 7:
			return "MAP_CARD_MINIGAMES_FENCE_BUILDING";
	
		case 8:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_THREES";
	
		case 9:
			return "MAP_CARD_MINIGAMES_DOMINOES_ALL_FIVES";
	
		case 10:
			return "MAP_CARD_MINIGAMES_DOMINOES_DRAW";
	
		case 11:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_BURNOUT";
	
		case 12:
			return "MAP_CARD_MINIGAMES_FIVE_FINGER_FILLET_GUTS";
	
		default:
		
	}

	return "";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x2B09 Hash - 0xA17D549C ^0x82541195
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "MAP_CARD_CAMP_HORSESHOE_HUNTING_CHARLES";
	
		case joaat("HAI_BANK_ROBBERY_01"):
			return "MAP_CARD_CAMP_SHADYBELLE_BANK_ROBBERY_CHARLES";
	
		case joaat("HAI_HOME_ROBBERY_01"):
			return "MAP_CARD_CAMP_HORSESHOE_HOME_ROBBERY_JAVIER";
	
		case joaat("HAI_COACH_ROBBERY_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_SEAN";
	
		case joaat("HAI_COACH_ROBBERY_03"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_MICAH";
	
		case joaat("HAI_COACH_ROBBERY_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_COACH_ROBBERY_BILL";
	
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "MAP_CARD_CAMP_HORSESHOE_FIVE_FINGER_FILLET_LENNY";
	
		case joaat("HAI_COACH_ROBBERY_04"):
			return "MAP_CARD_CAMP_SHADYBELLE_COACH_ROBBERY_LENNY";
	
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FIVE_FINGER_FILLET_MICAH";
	
		case joaat("HAI_FISHING_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
	
		case joaat("HAI_RUSTLING_02"):
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
	
		case joaat("HAI_FISHING_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
	
		case joaat("HAI_HUNTING_06"):
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
	
		case joaat("HAI_DOMINOES_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
	
		default:
		
	}

	return "";
}

char* func_59( Param0,  Param1) // Position - 0x2BD1 Hash - 0x1051AE87 ^0xFAA6492F
{
	 Var0;
	Hash discoveryHash;

	Var0 = Param1;

	if (Param0 != -1)
	{
		discoveryHash = func_96(Param0);
	
		if (discoveryHash == 0 || MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash))
			Var0 = Param0;
	}

	if (Var0 == -1)
		return "";

	return MISC::VAR_STRING(0, Var0);
}

char* func_60(eStackSize essParam0) // Position - 0x2C1A Hash - 0x8ED29CCD ^0x64647655
{
	if (!func_38(essParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
			return "FMMC_INV_ALID";
	
		return "REGION_INV";
	}

	return func_97(Global_1888801[essParam0 /*35*/].f_22);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x2C5A Hash - 0xA17D549C ^0x3716F2C7
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
	
		case 1:
			return "BGV";
	
		case 2:
			return "BLU";
	
		case 3:
			return "CML";
	
		case 4:
			return "GRT";
	
		case 5:
			return "GRZ";
	
		case 6:
			return "GRE";
	
		case 7:
			return "GRW";
	
		case 8:
			return "GUA";
	
		case 9:
			return "HRT";
	
		case 10:
			return "ROA";
	
		case 11:
			return "SCM";
	
		case 12:
			return "TAL";
	
		case 13:
			return "GAP";
	
		case 14:
			return "RIO";
	
		case 15:
			return "CHO";
	
		case 16:
			return "HEN";
	
		default:
		
	}

	return "No District Label!";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x2D4B Hash - 0xA17D549C ^0xF9F3C2BF
{
	switch (iParam0)
	{
		case 0:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 1:
			return "WEST_ELIZ";
	
		case 2:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 3:
			return "NEW_HANOV";
	
		case 4:
			return "WEST_ELIZ";
	
		case 5:
			return "AMBARINO";
	
		case 6:
			return "AMBARINO";
	
		case 7:
			return "AMBARINO";
	
		case 8:
			return "GUARMA";
	
		case 9:
			return "NEW_HANOV";
	
		case 10:
			return "NEW_HANOV";
	
		case 11:
			return "LEMOYNE" /*Lemoyne St*/;
	
		case 12:
			return "WEST_ELIZ";
	
		case 13:
			return "NEW_AUST";
	
		case 14:
			return "NEW_AUST";
	
		case 15:
			return "NEW_AUST";
	
		case 16:
			return "NEW_AUST";
	
		default:
		
	}

	return "No State Label!";
}

int func_63(int iParam0) // Position - 0x2E3C Hash - 0x224FC50D ^0x224FC50D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 29)
		return 1;
	else if (iParam0 <= 32)
		return 2;
	else if (iParam0 <= 36)
		return 3;
	else if (iParam0 <= 39)
		return 4;
	else if (iParam0 <= 49)
		return 7;
	else if (iParam0 <= 56)
		return 6;
	else if (iParam0 <= 61)
		return 8;
	else if (iParam0 <= 76)
		return 9;
	else if (iParam0 <= 92)
		return 10;
	else if (iParam0 <= 106)
		return 11;
	else if (iParam0 <= 113)
		return 12;
	else if (iParam0 <= 116)
		return 13;
	else if (iParam0 <= 119)
		return 14;
	else if (iParam0 <= 125)
		return 15;
	else if (iParam0 <= 127)
		return 16;

	return -1;
}

Hash func_64(int iParam0) // Position - 0x2F38 Hash - 0x7BC98427 ^0xDB4AE89C
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return 0;

	return MISC::GET_HASH_KEY(str);
}

Hash func_65(int iParam0) // Position - 0x2F5B Hash - 0x11D24646 ^0x8203AE8D
{
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(iParam0), 64);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return 0;

	TEXT_LABEL_ASSIGN_STRING(&unk9, "MAP_CARD_", 64);
	TEXT_LABEL_APPEND_STRING(&unk9, &unk, 64);
	TEXT_LABEL_APPEND_STRING(&unk9, "_DESC", 64);
	return MISC::GET_HASH_KEY(&unk9);
}

struct<2> func_66(Player plParam0) // Position - 0x2F96 Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_67(const char* sParam0, int iParam1) // Position - 0x2FAA Hash - 0xB0CFF0C3 ^0x1E142EED
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_99(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

const char* func_68(int iParam0) // Position - 0x2FE0 Hash - 0x7AE30697 ^0x7AE30697
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, func_100(), 64);
	TEXT_LABEL_APPEND_STRING(&unk, func_101(iParam0), 64);
	return func_102(unk);
}

char* func_69(int iParam0, Any* panParam1, const char* sParam2) // Position - 0x3003 Hash - 0x29191FAA ^0x9C930B5A
{
	char* str;
	Player playerFromGamerHandle;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(panParam1))
		return "Invalid Handle";

	str = "";

	switch (iParam0)
	{
		case 0:
			str = NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(panParam1, 0);
			break;
	
		case 1:
			playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
		
			if (playerFromGamerHandle < 0)
				str = NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_DOWNLOAD(panParam1, 0);
			else
				str = func_103(playerFromGamerHandle);
			break;
	
		default:
			str = "Unknown Type";
			break;
	}

	return str;
}

Hash func_70(int iParam0) // Position - 0x3070 Hash - 0xFBE6ACAA ^0xC8FB295B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1139587[iParam0 /*19*/];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x309C Hash - 0xA17D549C ^0x50178E83
{
	switch (iParam0)
	{
		case 0:
			return "NM_PLAYLIST_RACE";
	
		case 2:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
	
		case 3:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
	
		case 4:
			return "NM_PLAYLIST_SPECIAL_MODES_1";
	
		case 5:
			return "NM_PLAYLIST_SPECIAL_MODES_2";
	
		case 6:
			return "NM_PLAYLIST_NOMINATED";
	
		case 7:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
	
		case 8:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
	
		case 9:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
	
		case 11:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
	
		case 12:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
	
		case 13:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
	
		default:
		
	}

	return "NM_PLAYLIST_FFA";
}

Hash func_72(int iParam0) // Position - 0x314C Hash - 0x920A14A1 ^0xA094993B
{
	int num;

	if (func_105(func_104(iParam0)))
		num = joaat("GIVER_NAME");
	else
		num = joaat("GIVER_STRANGER_NAME");

	return Global_1115725[iParam0 /*44*/].f_11.f_7[func_106(num, 1)];
}

char* func_73(int iParam0) // Position - 0x3187 Hash - 0xE6862179 ^0x22EEB414
{
	switch (iParam0)
	{
		case 1:
			return "BLIP_MG_BLACKJACK";
	
		case 2:
			return "BLIP_MG_DOMINOES";
	
		case 3:
			return "BLIP_MG_POKER";
	
		case 4:
			return "BLIP_MG_FIVE_FINGER_FILLET";
	
		case 5:
			return "BLIP_SUMMER_COW";
	
		case 6:
			return "BLIP_SUMMER_HORSE";
	
		case 7:
			return "BLIP_MG_FENCE_BUILDING";
	
		case 8:
			return "BLIP_MG_DOMINOES_ALL3S";
	
		case 9:
			return "BLIP_MG_DOMINOES_ALL5S";
	
		case 10:
			return "BLIP_MG_DOMINOES_DRAW";
	
		case 11:
			return "BLIP_MG_FIVE_FINGER_FILLET_BURNOUT";
	
		case 12:
			return "BLIP_MG_FIVE_FINGER_FILLET_GUTS";
	
		case 13:
			return "BLIP_AMBIENT_HERD";
	
		case 14:
			return "BLIP_PROC_LOANSHARK";
	
		case 15:
			return "BLIP_PROC_BANK";
	
		case 16:
			return "BLIP_PROC_BOUNTY_POSTER";
	
		case 17:
			return "BLIP_AMBIENT_COACH";
	
		case 18:
			return "BLIP_AMBIENT_TRAIN";
	
		case 19:
			return "BLIP_AMBIENT_RIVERBOAT";
	
		case 20:
			return "BLIP_SHOP_STORE";
	
		case 21:
			return "BLIP_SHOP_SHADY_STORE";
	
		case 22:
			return "BLIP_AMBIENT_QUARTERMASTER";
	
		case 23:
			return "BLIP_SHOP_GUNSMITH";
	
		case 24:
			return "BLIP_SHOP_COACH_FENCING";
	
		case 25:
			return "BLIP_SHOP_DOCTOR";
	
		case 26:
			return "BLIP_SHOP_TAILOR";
	
		case 27:
			return "BLIP_SALOON";
	
		case 28:
			return "BLIP_SHOP_BLACKSMITH";
	
		case 29:
			return "BLIP_SHOP_TRAINER";
	
		case 30:
			return "BLIP_SHOP_TRAIN";
	
		case 31:
			return "BLIP_SHOP_BARBER";
	
		case 32:
			return "BLIP_SHOP_BUTCHER";
	
		case 33:
			return "BLIP_POST_OFFICE";
	
		case 34:
			return "BLIP_POST_OFFICE_REC";
	
		case 35:
			return "BLIP_SHOP_TACKLE";
	
		case 36:
			return "BLIP_SHOP_ANIMAL_TRAPPER";
	
		case 37:
			return "BLIP_SHOP_HORSE";
	
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
	
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
	
		case 40:
			return "BLIP_AMBIENT_NEWSPAPER";
	
		case 41:
			return "BLIP_SHOP_MARKET_STALL";
	
		case 42:
			return "BLIP_SHOP_MARKET_STALL";
	
		case 43:
			return "BLIP_HOTEL_BED";
	
		case 44:
			return "BLIP_PHOTO_STUDIO";
	
		case 45:
			return "BLIP_STABLE";
	
		case 46:
			return "BLIP_PROC_HOME";
	
		case 47:
			return "BLIP_PROC_HOME_LOCKED";
	
		case 48:
			return "BLIP_PROC_HOME";
	
		case 49:
			return "BLIP_AMBIENT_TELEGRAPH";
	
		case 50:
			return "BLIP_AMBIENT_COACH_TAXI";
	
		case 51:
			return "BLIP_AMBIENT_THEATRE";
	
		case 52:
			return "BLIP_REGION_CARAVAN";
	
		case 53:
			return "BLIP_EVENT_APPLESEED";
	
		case 54:
			return "BLIP_EVENT_CASTOR";
	
		case 55:
			return "BLIP_EVENT_RAILROAD_CAMP";
	
		case 56:
			return "BLIP_EVENT_RIGGS_CAMP";
	
		case 57:
			return "BLIP_REGION_HIDEOUT";
	
		case 58:
			return "BLIP_PROC_HOME";
	
		case 59:
			return "BLIP_MG_FISHING";
	
		case 60:
			return "BLIP_AMBIENT_THEATRE";
	
		case 61:
			return "BLIP_AMBIENT_THEATRE";
	
		case 65:
			return "BLIP_CAMP_EAT";
	
		case 66:
			return "BLIP_AMBIENT_TITHING";
	
		case 67:
			return "BLIP_SHOP_PEARSON";
	
		case 68:
			return "BLIP_CAMP_HITCH";
	
		case 69:
			return "BLIP_SUPPLIES_AMMO";
	
		case 70:
			return "BLIP_SUPPLIES_HEALTH";
	
		case 71:
			return "BLIP_SUPPLIES_FOOD";
	
		case 72:
			return "BLIP_MG_POKER";
	
		case 73:
			return "BLIP_MG_FIVE_FINGER_FILLET";
	
		case 74:
			return "BLIP_MG_DOMINOES";
	
		case 75:
			return "BLIP_REGION_HUNTING";
	
		case 76:
			return "BLIP_MG_FISHING";
	
		case 77:
			return "BLIP_ROBBERY_COACH";
	
		case 78:
			return "BLIP_REGION_HUNTING";
	
		case 79:
			return "BLIP_ROBBERY_BANK";
	
		case 80:
			return "BLIP_MG_DOMINOES";
	
		case 81:
			return "BLIP_AMBIENT_HERD";
	
		default:
			return "";
	}

	return "";
}

int func_74(int iParam0) // Position - 0x3681 Hash - 0x1FE8A1EA ^0x1FE8A1EA
{
	switch (iParam0)
	{
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
			return 2;
	
		case 16:
		case 20:
		case 21:
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
		case 42:
		case 43:
		case 44:
		case 45:
		case 51:
		case 60:
		case 61:
			return 1;
	
		case 46:
		case 52:
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
			return 3;
	
		case 50:
			return 5;
	
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
			return 4;
	
		default:
		
	}

	return 0;
}

eStackSize func_75(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x381E Hash - 0x25DFFF2C ^0x74CE6365
{
	eStackSize stackSize;

	stackSize = func_107();

	if (func_38(stackSize))
		if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[stackSize /*35*/].f_3, vParam0))
			return stackSize;

	return func_108(vParam0, bParam3);
}

int func_76(int iParam0) // Position - 0x3859 Hash - 0xB8EC44B7 ^0x37C21E0C
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return 1784895540;
	
		case joaat("HAI_BANK_ROBBERY_01"):
			return -1670940721;
	
		case joaat("HAI_HOME_ROBBERY_01"):
			return 565221344;
	
		case joaat("HAI_COACH_ROBBERY_01"):
			return -919476462;
	
		case joaat("HAI_COACH_ROBBERY_03"):
			return -919476462;
	
		case joaat("HAI_COACH_ROBBERY_02"):
			return -919476462;
	
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return -1511391406;
	
		case joaat("HAI_COACH_ROBBERY_04"):
			return -919476462;
	
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return -1511391406;
	
		case joaat("HAI_FISHING_01"):
			return 654481153;
	
		case joaat("HAI_RUSTLING_02"):
			return 754620122;
	
		case joaat("HAI_FISHING_02"):
			return 654481153;
	
		case joaat("HAI_HUNTING_06"):
			return 1784895540;
	
		case joaat("HAI_DOMINOES_01"):
			return -1567081107;
	
		default:
		
	}

	return 234527101;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(int iParam0) // Position - 0x3932 Hash - 0xA17D549C ^0x6319976B
{
	switch (iParam0)
	{
		case -2036347356:
			return "ACT_POKER_LABEL";
	
		case -1739349092:
			return "ACT_RETURN_LABEL";
	
		case -1700356309:
			return "ACT_BLACKJACK_LABEL";
	
		case -1670940721:
			return "ACT_BANK_LABEL";
	
		case -1567081107:
			return "ACT_DOMINOES_CAMP_LABEL";
	
		case -1511391406:
			return "ACT_FFF_CAMP_LABEL";
	
		case -1341684320:
			return "ACT_POKER_CAMP_LABEL";
	
		case -1215120894:
			return "ACT_KIDNAPPING_LABEL";
	
		case -919476462:
			return "ACT_COACH_LABEL";
	
		case -301635006:
			return "ACT_MISSION_LABEL";
	
		case 234527101:
			return "ACT_NONE_LABEL";
	
		case 380107708:
			return "ACT_TRAIN_LABEL";
	
		case 565221344:
			return "ACT_HOMEROB_LABEL";
	
		case 654481153:
			return "ACT_FISHING_LABEL";
	
		case 754620122:
			return "ACT_RUSTLING_LABEL";
	
		case 907027518:
			return "ACT_ANY_LABEL";
	
		case 931703394:
			return "ACT_DRINKSHOOT_CAMP_LABEL";
	
		case 1193949598:
			return "ACT_SALOON_LABEL";
	
		case 1523333387:
			return "ACT_CRAPS_LABEL";
	
		case 1744128959:
			return "ACT_HIDEOUT_LABEL";
	
		case 1784895540:
			return "ACT_HUNTING_LABEL";
	
		default:
		
	}

	return "ACT_NONE_LABEL";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0(int iParam0) // Position - 0x3A57 Hash - 0xA17D549C ^0x695337CC
{
	switch (iParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return "CAHT02_DESC";
	
		case joaat("HAI_BANK_ROBBERY_01"):
			return "CABR01_DESC";
	
		case joaat("HAI_HOME_ROBBERY_01"):
			return "PHHOM_DESC";
	
		case joaat("HAI_COACH_ROBBERY_01"):
			return "CACR02_DESC";
	
		case joaat("HAI_COACH_ROBBERY_03"):
			return "CACR01_DESC";
	
		case joaat("HAI_COACH_ROBBERY_02"):
			return "CACR03_DESC";
	
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return "CAFFF05_DESC";
	
		case joaat("HAI_COACH_ROBBERY_04"):
			return "CACR04_DESC";
	
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return "MGFFF_DESC";
	
		case joaat("HAI_FISHING_01"):
			return "CAFS01_DESC";
	
		case joaat("HAI_RUSTLING_02"):
			return "CARS02_DESC";
	
		case joaat("HAI_FISHING_02"):
			return "CAFS02_DESC";
	
		case joaat("HAI_HUNTING_06"):
			return "CAHT06_DESC";
	
		case joaat("HAI_DOMINOES_01"):
			return "CADM05_DESC";
	
		default:
		
	}

	return "";
}

struct<16> func_79(eStackSize essParam0) // Position - 0x3B1F Hash - 0xC2E42788 ^0x282DF43C
{
	var unk;

	switch (essParam0)
	{
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_RHODES", 128);
			break;
	
		default:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}

	return unk;
}

BOOL func_80(eStackSize essParam0) // Position - 0x3B94 Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_38(essParam0))
		return false;

	return func_88(essParam0, 33554432);
}

BOOL func_81() // Position - 0x3BB5 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_82(int iParam0, BOOL bParam1) // Position - 0x3BC3 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_109(iParam0))
	{
		case 5:
			return true;
	
		case 6:
			if (bParam1)
				return true;
			break;
	}

	return false;
}

eStackSize func_83() // Position - 0x3BF4 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

int func_84(eStackSize essParam0) // Position - 0x3C04 Hash - 0x224FC50D ^0x224FC50D
{
	if (essParam0 < 0)
		return -1;
	else if (essParam0 <= 10)
		return 0;
	else if (essParam0 <= 29)
		return 1;
	else if (essParam0 <= 32)
		return 2;
	else if (essParam0 <= 36)
		return 3;
	else if (essParam0 <= 39)
		return 4;
	else if (essParam0 <= 49)
		return 7;
	else if (essParam0 <= 56)
		return 6;
	else if (essParam0 <= 61)
		return 8;
	else if (essParam0 <= 76)
		return 9;
	else if (essParam0 <= 92)
		return 10;
	else if (essParam0 <= 106)
		return 11;
	else if (essParam0 <= 113)
		return 12;
	else if (essParam0 <= 115)
		return 13;
	else if (essParam0 <= 119)
		return 14;
	else if (essParam0 <= 125)
		return 15;
	else if (essParam0 <= 127)
		return 16;

	return -1;
}

int func_85(int iParam0, BOOL bParam1) // Position - 0x3D00 Hash - 0x9CC4908E ^0xB6CFBFA0
{
	switch (iParam0)
	{
		case 0:
			return joaat("LAW_REGION_BAYOU_NWA");
	
		case 1:
			return joaat("LAW_REGION_BIG_VALLEY");
	
		case 2:
			return joaat("LAW_REGION_BLUEGILL_MARSH");
	
		case 3:
			return joaat("LAW_REGION_CUMBERLAND_FOREST");
	
		case 4:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_49(45))
				return joaat("LAW_REGION_GREAT_PLAINS");
			else
				return joaat("LAW_REGION_GREAT_PLAINS_MAINGAME");
			break;
	
		case 5:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 6:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 7:
			return joaat("LAW_REGION_GRIZZLIES");
	
		case 8:
			return joaat("LAW_REGION_GUAMA");
	
		case 9:
			return joaat("LAW_REGION_HEARTLANDS");
	
		case 10:
			return joaat("LAW_REGION_ROANOKE_RIDGE");
	
		case 11:
			return joaat("LAW_REGION_SCARLETT_MEADOWS");
	
		case 12:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_49(45))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_81() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_49(45))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

BOOL func_86(int iParam0, BOOL bParam1) // Position - 0x3E7A Hash - 0x60CCFF55 ^0x376285D7
{
	if (!func_39(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_431[iParam0] && bParam1 != false;

	return Global_1058888.f_42269[iParam0] && bParam1 != false;
}

BOOL func_87(int iParam0, int iParam1) // Position - 0x3EBE Hash - 0xD0DCDA48 ^0x4E1FA2FB
{
	if (!func_46(iParam0))
		return false;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1058888.f_42196[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_88(eStackSize essParam0, BOOL bParam1) // Position - 0x3F06 Hash - 0x34A2E44 ^0x39A823C1
{
	if (Global_1572887.f_12 == -1)
		return Global_23118[essParam0 /*11*/] && bParam1 != false;

	return Global_1058888.f_40545[essParam0 /*11*/] && bParam1 != false;
}

Hash func_89(int iParam0) // Position - 0x3F39 Hash - 0x7493E565 ^0x5CB7541E
{
	if (!func_46(iParam0))
		return -1;

	if (Global_1572887.f_12 == -1)
		return Global_40.f_358[iParam0 /*12*/];

	return Global_1058888.f_42196[iParam0 /*12*/];
}

BOOL func_90(int iParam0) // Position - 0x3F73 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_91(int iParam0) // Position - 0x3F86 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

const char* func_92(eStackSize essParam0) // Position - 0x3FB0 Hash - 0x73F5272E ^0x933E236
{
	const char* str;

	if (!func_38(essParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&str, "UNK", 8);
		return str;
	}

	return Global_1888801[essParam0 /*35*/].f_22;
}

char* func_93(int iParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0x3FD9 Hash - 0xE0A2A880 ^0xE0A2A880
{
	switch (iParam0)
	{
		case 16:
			return "BOUNTY";
	
		case 20:
			return "GENERALSTORE";
	
		case 21:
			return "FENCE";
	
		case 23:
			return "GUNSMITH";
	
		case 25:
			return "DOCTOR";
	
		case 26:
			return "TAILOR";
	
		case 27:
			switch (iParam1)
			{
				case 5:
					if (BUILTIN::VDIST(vParam2, 2796f, -1167f, vParam2.f_2) <= 25f)
						return "SLUMSALOON";
					else
						return "NICESALOON";
					break;
			
				case 76:
					if (BUILTIN::VDIST(vParam2, -308f, 807.05f, vParam2.f_2) <= 25f)
						return "SALOON_BARBER";
					else
						return "SALOON2";
					break;
			
				default:
					return "SALOON";
			}
			break;
	
		case 28:
			return "BLACKSMITH";
	
		case 30:
			switch (iParam1)
			{
				case 5:
					return "DEPOT";
			
				default:
					return "TRAINSTATION";
			}
			break;
	
		case 31:
			return "BARBER";
	
		case 32:
			return "BUTCHER";
	
		case 33:
			switch (iParam1)
			{
				case 105:
					return "TRAINSTATION";
			
				default:
					return "DEPOT";
			}
			break;
	
		case 34:
			return "DEPOT";
	
		case 35:
			return "BAITSHOP";
	
		case 36:
			return "TRAPPER";
	
		case 37:
			return "HORSESHOP";
	
		case 38:
			return "HORSESHOP";
	
		case 40:
			return "NEWSPAPER";
	
		case 41:
			return "MARKET";
	
		case 42:
			return "MARKET";
	
		case 43:
			return "HOTEL";
	
		case 44:
			return "PHOTOGRAPHER";
	
		case 50:
			return "STAGECOACH";
	
		case 51:
			return "MAGICLANTERN";
	
		case 60:
			return "VAUDEVILLE";
	
		case 61:
			return "VAUDEVILLE";
	}

	return "";
}

int func_94(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x425E Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_110(*uParam0, 0f, 0f, 0f))
		return 1;

	num = 0;
	flag = false;
	flag2 = false;
	vector = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vector);

	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag)
	{
		if (num < iParam2)
		{
			num = num + 1;
			vector.f_2 = vector.f_2 + (float)iParam1;
			STREAMING::REQUEST_COLLISION_AT_COORD(vector);
		}
		else
		{
			flag = true;
		}
	}

	if (flag)
	{
		num = 1;
		vector.f_2 = vector.f_2 - (float)iParam1;
		STREAMING::REQUEST_COLLISION_AT_COORD(vector);
	
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, bParam3) && !flag2)
		{
			if (num < iParam2)
			{
				num = num + 1;
				vector.f_2 = vector.f_2 - (float)iParam1;
				STREAMING::REQUEST_COLLISION_AT_COORD(vector);
			}
			else
			{
				flag2 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = groundZ;
		return 1;
	}

	if (flag && flag2)
		return 0;

	uParam0->f_2 = groundZ;
	return 1;
}

char* func_95(var uParam0) // Position - 0x4355 Hash - 0x85B8C798 ^0x44154FBE
{
	switch (func_111(uParam0))
	{
		case 0:
			return "COLTER";
	
		case 1:
			return "HORSESHOE";
	
		case 2:
			return "CLEMENSPOINT";
	
		case 3:
			return "SHADYBELLE";
	
		case 4:
			return "GUARMA";
	
		case 5:
			return "LAKAY";
	
		case 6:
			return "BEAVERHOLLOW";
	
		case 7:
			return "PRONGHORN";
	}

	return "";
}

Hash func_96(int iParam0) // Position - 0x43EB Hash - 0xB8EC44B7 ^0xC7C8255B
{
	switch (iParam0)
	{
		case joaat("W_4_TWO_CROWS"):
			return 539572870;
	
		case joaat("W_5_BROKEN_TREE"):
			return 2073023198;
	
		case joaat("W_4_TRADING_POST"):
			return -942443338;
	
		case joaat("W_4_PLEASANCE_HOUSE"):
			return -1730421200;
	
		case joaat("W_4_CHEZ_PORTER"):
			return joaat("MAP_HOMESTEAD_CHEZ_PORTER");
	
		case joaat("W_4_CAIRN_LODGE"):
			return 43681669;
	
		case joaat("W_5_GRAND_KORRIGAN_DOCKED"):
			return -296815465;
	
		case joaat("W_4_METEOR_HOUSE"):
			return 1195199040;
	
		case joaat("W_4_CARMODY_DELL"):
			return joaat("MAP_HOMESTEAD_CARMODY_DELL");
	
		case joaat("W_4_TAXIDERMIST_HOUSE"):
			return joaat("MAP_LANDMARK_TAXIDERMIST_HOUSE");
	
		case joaat("W_4_FACE_ROCK"):
			return 532401286;
	
		case joaat("W_4_HILL_HAVEN_RANCH"):
			return joaat("MAP_LANDMARK_HILL_HAVEN_RANCH");
	
		case joaat("W_4_DODDS_BLUFF"):
			return 532503220;
	
		case joaat("W_5_FORT_BRENNAND"):
			return 460210291;
	
		case joaat("W_4_PLANTERS_BAWN"):
			return joaat("MAP_SHACK_FROZEN_EXPLORERS");
	
		case joaat("W_4_LAKE_DON_JULIO_HOUSE"):
			return joaat("MAP_LANDMARK_LAKE_DON_JULIO_HOUSE");
	
		case joaat("W_4_FAIRVALE_SHANTY"):
			return 1610646968;
	
		case joaat("W_4_MACLEANS_HOUSE"):
			return joaat("MAP_HOMESTEAD_MACLEANS_HOUSE");
	
		case joaat("W_5_BLACK_BONE_FOREST"):
			return -656861063;
	
		case joaat("W_4_PAINTED_SKY"):
			return joaat("MAP_HOMESTEAD_PAINTED_SKY");
	
		case joaat("W_4_COLTER"):
			return joaat("MAP_HIDEOUT_COLTER");
	
		case joaat("W_4_GUTHRIE_FARM"):
			return joaat("MAP_LANDMARK_GUTHRIE_FARM");
	
		case joaat("W_4_TANNERS_REACH"):
			return joaat("MAP_LANDMARK_TANNERS_REACH");
	
		case joaat("W_4_HORSESHOE_OVERLOOK"):
			return joaat("MAP_HIDEOUT_HORSESHOE_OVERLOOK");
	
		case joaat("W_4_RIO_DEL_LOBO_HOUSE"):
			return -792566558;
	
		case joaat("W_4_THE_OLD_BACCHUS_PLACE"):
			return 2056389698;
	
		case joaat("W_4_CRAWDAD_WILLIES"):
			return joaat("MAP_SHACK_CRAWDAD_WILLIES");
	
		case joaat("W_4_WATSONS_CABIN"):
			return joaat("MAP_HOMESTEAD_WATSONS_CABIN");
	
		case joaat("W_4_SWADBASS_POINT"):
			return joaat("MAP_SHACK_AURORA_BASIN");
	
		case joaat("W_4_ADLER_RANCH"):
			return joaat("MAP_HOMESTEAD_ADLER_RANCH");
	
		case joaat("W_5_BLACK_BALSAM_RISE"):
			return joaat("MAP_LANDMARK_BLACK_BALSAM_RISE");
	
		case joaat("W_4_DORMIN_CREST"):
			return 379859357;
	
		case joaat("W_4_BRITTLEBRUSH_TRAWL"):
			return 1735191955;
	
		case joaat("W_4_GRANGERS_HOGGERY"):
			return 653958186;
	
		case joaat("W_4_SILENT_STEAD"):
			return 82527577;
	
		case joaat("W_5_LIMPANY"):
			return 2021420613;
	
		case joaat("W_4_FORT_RIGGS_HOLDING_CAMP"):
			return joaat("MAP_EVENTAREA_FORT_RIGGS");
	
		case joaat("W_5_CHADWICK_FARM"):
			return 215480587;
	
		case joaat("W_4_RIDGE_VIEW"):
			return joaat("MAP_SPECIAL_SHACK_BEECHERS_C");
	
		case joaat("W_4_ABANDONED_MISSION"):
			return 993246734;
	
		case joaat("W_4_UTOPIAN_COLONY_BUILDING"):
			return 66159563;
	
		case joaat("W_4_FIRE_LOOKOUT_TOWER"):
			return -1262808306;
	
		case joaat("W_4_DOWNES_RANCH"):
			return joaat("MAP_LANDMARK_DOWNES_RANCH");
	
		case joaat("W_4_DOVERHILL"):
			return joaat("MAP_LANDMARK_DOVERHILL");
	
		case joaat("W_4_ODDFELLOWS_REST"):
			return -1116738159;
	
		case joaat("W_4_CASTORS_RIDGE"):
			return -238119963;
	
		case joaat("W_4_LONE_MULE_STEAD"):
			return joaat("MAP_LANDMARK_LONE_MULE_STEAD");
	
		case joaat("W_4_EWING_BASIN"):
			return joaat("MAP_SETTLEMENT_EWING_BASIN");
	
		case joaat("W_4_SHEPHERDS_RISE"):
			return joaat("MAP_SPECIAL_SHACK_SHEPHERDS_RISE");
	
		case joaat("W_4_THE_LOFT"):
			return joaat("MAP_LANDMARK_THE_LOFT");
	
		case joaat("W_4_BUTCHER_CREEK"):
			return joaat("MAP_SETTLEMENT_BUTCHER_CREEK");
	
		case joaat("W_4_APPLESEED_TIMBER_COMPANY"):
			return joaat("MAP_EVENTAREA_APPLESEED_TIMBER_COMPANY");
	
		case joaat("W_4_PIKES_BASIN"):
			return 1474106589;
	
		case joaat("W_4_OLD_GREENBANK_MILL"):
			return joaat("MAP_LANDMARK_OLD_GREENBANK_MILL");
	
		case joaat("W_4_BEAR_CLAW"):
			return -2110824426;
	
		case joaat("W_5_RADLEYS_PASTURE"):
			return joaat("MAP_LANDMARK_RADLEYS_PASTURE");
	
		case joaat("W_4_OLD_TRAIL_RISE"):
			return 1871337449;
	
		case joaat("W_4_WILLARDS_REST"):
			return joaat("MAP_HOMESTEAD_WILLARDS_REST");
	
		case joaat("W_4_FIRWOOD_RISE"):
			return joaat("MAP_LANDMARK_FIRWOOD_RISE");
	
		case joaat("W_5_BEAVER_HOLLOW"):
			return joaat("MAP_HIDEOUT_BEAVER_HOLLOW");
	
		case joaat("W_4_PRONGHORN_RANCH"):
			return joaat("MAP_SPECIAL_SETTLEMENT_PRONGHORN_RANCH");
	
		case joaat("W_4_HANGING_DOG_RANCH"):
			return joaat("MAP_HIDEOUT_HANGING_DOG_RANCH");
	
		case joaat("W_4_COOTS_CHAPEL"):
			return joaat("MAP_SETTLEMENT_COOTS_CHAPEL");
	
		case joaat("W_4_GILL_LANDING"):
			return 1268001912;
	
		case joaat("W_4_SCRATCHING_POST"):
			return -2089448537;
	
		case joaat("W_4_HAGEN_ORCHARDS"):
			return joaat("MAP_LANDMARK_HAGEN_ORCHARDS");
	
		case joaat("W_4_THE_HANGING_ROCK"):
			return 1515744307;
	
		case joaat("W_4_GAPTOOTH_BREACH"):
			return joaat("MAP_HIDEOUT_GAPTOOTH_BREACH");
	
		case joaat("W_4_VENTERS_PLACE"):
			return -1173041902;
	
		case joaat("W_4_BAYGALL_EDGE"):
			return joaat("MAP_SHACK_SERIAL_KILLER");
	
		case joaat("W_4_ABERDEEN_PIG_FARM"):
			return joaat("MAP_HOMESTEAD_ABERDEEN_PIG_FARM");
	
		case joaat("W_4_LUCKYS_CABIN"):
			return joaat("MAP_LANDMARK_LUCKYS_CABIN");
	
		case joaat("W_5_HURON_GLEN"):
			return joaat("MAP_SHACK_POISON_LEAK");
	
		case joaat("W_5_ARGIL_RISE"):
			return 205568929;
	
		case joaat("W_4_COCHINAY"):
			return joaat("MAP_LANDMARK_COCHINAY");
	
		case joaat("W_4_OSMAN_GROVE"):
			return -1249289544;
	
		case joaat("W_4_TRAPPERS_CABIN"):
			return 2133877879;
	
		case joaat("W_4_NEKOTI_ROCK"):
			return -876779166;
	
		case joaat("W_4_CORNWALL_KEROSENE_TAR"):
			return joaat("MAP_SETTLEMENT_CORNWALL_KEROSENE_TAR");
	
		case joaat("W_4_COMPSONS_STEAD"):
			return joaat("MAP_LANDMARK_COMPSONS_STEAD");
	
		case joaat("W_4_CENTRAL_UNION_RAILROAD_1"):
			return 1028223611;
	
		case joaat("W_4_HANIS_BETHEL"):
			return -1917132299;
	
		case joaat("W_4_CANEBREAK_MANOR"):
			return joaat("MAP_LANDMARK_CANEBREAK_MANOR");
	
		case joaat("W_5_VALLEY_VIEW"):
			return joaat("MAP_LANDMARK_VALLEY_VIEW");
	
		case joaat("W_5_DEER_COTTAGE"):
			return joaat("MAP_SHACK_IDENTICAL_TWINS_02");
	
		case joaat("W_4_RILEYS_CHARGE"):
			return joaat("MAP_LANDMARK_RILEYS_CHARGE");
	
		case joaat("W_4_LONNIES_SHACK"):
			return joaat("MAP_HOMESTEAD_LONNIES_SHACK");
	
		case joaat("W_4_MARTHAS_SWAIN"):
			return -727372692;
	
		case joaat("W_4_SAWBONE_CLEARING"):
			return joaat("MAP_SHACK_29");
	
		case joaat("W_4_WITCHES_CAULDRON"):
			return 387869270;
	
		case joaat("W_4_SHADY_BELLE"):
			return joaat("MAP_HIDEOUT_SHADY_BELLE");
	
		case joaat("W_4_SOLOMONS_FOLLY"):
			return 1979340260;
	
		case joaat("W_4_VAN_HORN_MANSION"):
			return 85299473;
	
		case joaat("W_4_PLEASANCE"):
			return -2011320133;
	
		case joaat("W_4_SILTWATER_STRAND"):
			return joaat("MAP_LANDMARK_SILTWATER_STRAND");
	
		case joaat("W_4_VETERANS_HOMESTEAD"):
			return joaat("MAP_LANDMARK_VETERANS_HOMESTEAD");
	
		case joaat("W_4_MOSSY_FLATS"):
			return joaat("MAP_LANDMARK_MOSSY_FLATS");
	
		case joaat("W_4_EVELYN_MILLER_CAMP"):
			return -960425936;
	
		case joaat("W_4_MACOMBS_END"):
			return joaat("MAP_LANDMARK_MACOMBS_END");
	
		case joaat("W_5_LENORA_VIEW"):
			return 1116308524;
	
		case joaat("W_4_COPPERHEAD_LANDING"):
			return joaat("MAP_LANDMARK_COPPERHEAD_LANDING");
	
		case joaat("W_4_STILT_SHACK"):
			return joaat("MAP_LANDMARK_STILT_SHACK");
	
		case joaat("W_4_REPENTANCE"):
			return -325788416;
	
		case joaat("W_4_ABANDONED_TRADING_POST"):
			return 1352537560;
	
		case joaat("W_5_BERYLS_DREAM"):
			return joaat("MAP_LANDMARK_BERYLS_DREAM");
	
		case joaat("W_4_CUEVA_SECA"):
			return 428613469;
	
		case joaat("W_4_CENTRAL_UNION_RAILROAD_3"):
			return -597970767;
	
		case joaat("W_4_OIL_DERRICK"):
			return -1212881551;
	
		case joaat("W_4_OLD_HARRY_FEN"):
			return joaat("MAP_SHACK_SLAVE_PEN");
	
		case joaat("W_4_MERKINS_WALLER"):
			return joaat("MAP_LANDMARK_MERKINS_WALLER");
	
		case joaat("W_4_ROBARD_FARM"):
			return -763271696;
	
		case joaat("W_5_VETTERS_ECHO"):
			return -508074447;
	
		case joaat("W_4_MANITO_GLADE"):
			return joaat("MAP_SHACK_ANGRY_ISOLATIONIST");
	
		case joaat("W_4_FLATTENED_CABIN"):
			return 1582457845;
	
		case joaat("W_4_RATTLESNAKE_HOLLOW"):
			return -1394664008;
	
		case joaat("W_6_REED_COTTAGE"):
			return joaat("MAP_SHACK_IDENTICAL_TWINS_01");
	
		case joaat("W_4_MICAHS_HIDEOUT"):
			return -875696111;
	
		case joaat("W_4_RIDGEWOOD_FARM"):
			return joaat("MAP_HOMESTEAD_RIDGEWOOD_FARM");
	
		case joaat("W_4_CENTRAL_UNION_RAILROAD_2"):
			return 730222325;
	
		case joaat("W_4_OLD_TOMS_BLIND"):
			return -1408667066;
	
		case joaat("W_5_GRAND_KORRIGAN_SEA"):
			return 1944800674;
	
		case joaat("W_4_CLAWSONS_REST"):
			return 562599937;
	
		case joaat("W_4_BEECHERS_HOPE"):
			return joaat("MAP_SETTLEMENT_BEECHERS_HOPE");
	
		case joaat("W_4_CATFISH_JACKSONS"):
			return joaat("MAP_HOMESTEAD_CATFISH_JACKSONS");
	
		case joaat("W_4_WALLACE_OVERLOOK"):
			return joaat("MAP_LANDMARK_WALLACE_OVERLOOK");
	
		case joaat("W_4_ROADSIDE_BROTHEL"):
			return -1988847961;
	
		case joaat("W_4_LARNED_SOD"):
			return joaat("MAP_HOMESTEAD_LARNED_SOD");
	
		case joaat("W_4_CLEMENS_POINT"):
			return joaat("MAP_HIDEOUT_CLEMENS_POINT");
	
		case joaat("W_4_PRINZ_CO"):
			return 1374995365;
	
		case joaat("W_4_STILLWATER_CABIN"):
			return -1585921053;
	
		case joaat("W_4_HOUSEBOAT"):
			return 1837393665;
	
		case joaat("W_4_GREENHOLLOW"):
			return 1740117339;
	
		case joaat("W_6_RADLEYS_HOUSE"):
			return joaat("MAP_LANDMARK_RADLEYS_HOUSE");
	
		case joaat("W_4_CLINGMAN"):
			return 545498183;
	
		case joaat("W_4_SIX_POINT_CABIN"):
			return joaat("MAP_HIDEOUT_SIX_POINT_CABIN");
	
		case joaat("W_5_FISHINGSPOT"):
			return joaat("MAP_LANDMARK_FISHING_SPOT");
	
		case joaat("W_4_MILLESANI_CLAIM"):
			return joaat("MAP_LANDMARK_MILLESANI_CLAIM");
	
		default:
		
	}

	return 0;
}

char* func_97(const char* sParam0) // Position - 0x4B7A Hash - 0x7C37B7CB ^0x5DC521D2
{
	return HUD::_GET_TEXT_SUBSTRING_2(&sParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&sParam0));
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0_0_0(int iParam0) // Position - 0x4B8E Hash - 0xA17D549C ^0xF6D386CE
{
	switch (iParam0)
	{
		case joaat("tumbleweed"):
			return "TBL";
	
		case joaat("StDenis"):
			return "NBX";
	
		case joaat("ARMADILLO"):
			return "AMD";
	
		case joaat("Emerald"):
			return "EMR";
	
		case joaat("annesburg"):
			return "ANN";
	
		case joaat("lagras"):
			return "LAG";
	
		case joaat("strawberry"):
			return "STR";
	
		case joaat("valentine"):
			return "VAL";
	
		case joaat("blackwater"):
			return "BLA";
	
		case joaat("RHODES"):
			return "RHO";
	
		case joaat("vanhorn"):
			return "VHT";
	
		default:
		
	}

	return "";
}

const char* func_99(const char* sParam0, int iParam1) // Position - 0x4C2F Hash - 0x9E99F03 ^0xB717443F
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

const char* func_100() // Position - 0x4C49 Hash - 0x16347431 ^0x3787D4EB
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "share/", 64);
	TEXT_LABEL_APPEND_STRING(&unk, NETWORK::_NETWORK_GET_ROS_TITLE_NAME(), 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/pedshots/", 64);
	return func_102(unk);
}

const char* func_101(int iParam0) // Position - 0x4C72 Hash - 0x75FB5969 ^0xA525B5BD
{
	var unk;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "PROFILE_PHOTO", 64);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "MISSION_PHOTO", 64);
			break;
	}

	TEXT_LABEL_APPEND_STRING(&unk, ".jpg", 64);
	return func_102(unk);
}

const char* func_102(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x4CB5 Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_103(Player plParam0) // Position - 0x4CC9 Hash - 0xF47DA3FB ^0x3BD72CC2
{
	return NETWORK::_REQUEST_PEDSHOT_TEXTURE_LOCAL_BACKUP_DOWNLOAD(plParam0, 0);
}

var func_104(int iParam0) // Position - 0x4CD8 Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1115725[iParam0 /*44*/];
}

BOOL func_105(var uParam0) // Position - 0x4CE8 Hash - 0x8FF739FA ^0xC1B4784D
{
	return func_114(func_113(func_112(uParam0), joaat("has_been_interacted_with")));
}

int func_106(int iParam0, int iParam1) // Position - 0x4D03 Hash - 0x87CFB103 ^0x87CFB103
{
	switch (iParam0)
	{
		case joaat("GIVER_NAME"):
			return 0;
	
		case joaat("GIVER_STRANGER_NAME"):
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

eStackSize func_107() // Position - 0x4D38 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

eStackSize func_108(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x4D46 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_115(vParam0);
	num2 = -1;

	if (Global_1894882[num] > 0)
	{
		num3 = Global_1894882[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1894065[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1888801[num4 /*35*/].f_3))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1888801[num4 /*35*/].f_3, vParam0))
				{
					switch (Global_1888801[num4 /*35*/].f_20)
					{
						case 5:
							if (!bParam3)
							{
								num2 = num4;
								flag = true;
							}
							break;
					
						default:
							num2 = num4;
							flag = true;
							break;
					}
				}
			}
		
			num3 = num3 - 1;
		}
	}

	if (num2 != -1)
	{
	}

	return num2;
}

int func_109(int iParam0) // Position - 0x4DFD Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_50(iParam0))
		return -1;

	return func_116(iParam0);
}

BOOL func_110(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x4E19 Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

int func_111(int iParam0) // Position - 0x4E42 Hash - 0xFE841B01 ^0xFE841B01
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 4:
			return 5;
	
		case 9:
			return 3;
	
		case 22:
			return 7;
	
		case 37:
			return 8;
	
		case 43:
			return 0;
	
		case 58:
			return 4;
	
		case 71:
			return 1;
	
		case 79:
			return 6;
	
		case 98:
			return 2;
	
		default:
		
	}

	return -1;
}

int func_112(var uParam0) // Position - 0x4EB8 Hash - 0xB3F5DAA8 ^0xB3F5DAA8
{
	int num;

	num = func_117(uParam0);
	return num;
}

struct<2> func_113(int iParam0, int iParam1) // Position - 0x4ECA Hash - 0x5D2E8EA2 ^0x5D2E8EA2
{
	return func_118(iParam1, iParam0);
}

BOOL func_114(var uParam0, var uParam1) // Position - 0x4EDA Hash - 0x7049C46B ^0xF5E737F1
{
	int value;

	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return 0;
	else if (!STATS::STAT_ID_GET_BOOL(&uParam0, &value))
		return 0;

	return value;
}

int func_115(var uParam0, var uParam1, var uParam2) // Position - 0x4F05 Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_119(uParam0, 0f, 0f, 0, 2);
	return func_119(uParam0, Global_1894052[num /*3*/].f_1, Global_1894052[num /*3*/].f_2, Global_1894052[num /*3*/], 4);
}

int func_116(int iParam0) // Position - 0x4F40 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_120(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

int func_117(int iParam0) // Position - 0x4F81 Hash - 0xB8EC44B7 ^0x7DFCC269
{
	switch (iParam0)
	{
		case joaat("WALLACE_TRAIN_CLERK"):
			return joaat("gfh_train_clerk_wallace");
	
		case joaat("sadie_adler"):
			return joaat("gfh_sadie_adler");
	
		case joaat("SEAN_MACQUIRE"):
			return joaat("gfh_sean_macquire");
	
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return joaat("gfh_thomas_skiff_captain");
	
		case joaat("black_belle"):
			return joaat("gfh_black_belle");
	
		case joaat("JOSIAH_TRELAWNY"):
			return joaat("gfh_josiah_trelawny");
	
		case joaat("JOE"):
			return joaat("gfh_joe");
	
		case joaat("OBEDIAH_HINTON"):
			return joaat("gfh_obediah_hinton");
	
		case joaat("LANGTON"):
			return joaat("gfh_langton");
	
		case joaat("FLACO_HERNANDEZ"):
			return joaat("gfh_flaco_hernandez");
	
		case joaat("MAMMA_WATSON"):
			return joaat("gfh_mamma_watson");
	
		case joaat("WAR_VET"):
			return joaat("gfh_war_vet");
	
		case joaat("bonnie"):
			return joaat("gfh_bonnie");
	
		case joaat("shaky"):
			return joaat("gfh_shaky");
	
		default:
		
	}

	return 0;
}

struct<2> func_118(int iParam0, int iParam1) // Position - 0x5059 Hash - 0xAE82415C ^0x3F9F9161
{
	var statId;
	var unk2;

	if (iParam0 == 0)
		return unk2;

	if (iParam1 == 0)
		return unk2;

	statId = { func_121(iParam0, iParam1) };

	if (!STATS::STAT_ID_IS_VALID(&statId))
		return unk2;

	return statId;
}

int func_119(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x509C Hash - 0xA452440E ^0xD3F785A1
{
	if (fParam0 < fParam3)
		if (fParam0.f_1 < fParam4)
			return iParam5 + iParam6;
		else
			return iParam5;

	if (fParam0.f_1 < fParam4)
		return iParam5 + iParam6 + 1;

	return iParam5 + 1;
}

int func_120(int iParam0) // Position - 0x50E4 Hash - 0x6EC15CF9 ^0xE613EBE0
{
	int num;
	int num2;
	int num3;

	if (*Global_1058888.f_40431 <= 0)
		return -1;

	num = 0;
	num2 = *Global_1058888.f_40431 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (Global_1058888.f_40431.f_1[num3 /*2*/] > iParam0)
			num2 = num3 - 1;
		else if (Global_1058888.f_40431.f_1[num3 /*2*/] < iParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

struct<2> func_121(int iParam0, int iParam1) // Position - 0x5165 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

