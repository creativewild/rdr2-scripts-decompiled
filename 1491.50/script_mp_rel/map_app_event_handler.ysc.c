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
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	Hash hScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x70CA3089 ^0xA8A4310F
{
	int eventData;
	var unk4;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	unk4.f_19 = -1;
	unk4.f_33 = -1;
	unk4.f_34 = -1;
	unk4.f_35 = -1;
	unk4.f_36 = -1;
	unk4.f_37 = 1;

	if (func_1() == -1)
		func_2(&unk4);
	else
		func_3(&unk4);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
		func_4(&unk4);

	if (func_1() == -1)
	{
		while (true)
		{
			while (UIEVENTS::EVENTS_UI_IS_PENDING(hScriptParam_0))
			{
				if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hScriptParam_0, &eventData))
				{
					func_5(&eventData, &unk4);
				
					switch (eventData.f_2)
					{
						case joaat("zone"):
							unk4.f_4 = { eventData };
							unk4 = { eventData };
						
							switch (eventData)
							{
								case -1740156697:
									func_6(&unk4);
									break;
							
								case -632467210:
									unk4.f_33 = -1;
									unk4.f_34 = -1;
									func_7(&unk4);
									break;
							}
						
							unk4.f_37 = 1;
							break;
					
						case joaat("blip"):
							unk4 = { eventData };
						
							switch (eventData)
							{
								case -1740156697:
									func_8(&unk4);
									break;
							
								case -1203660660:
									func_10(&unk4);
									break;
							
								case -632467210:
									func_9(&unk4);
									unk4 = { unk4.f_4 };
									func_6(&unk4);
									break;
							}
							break;
					}
				
					UIEVENTS::EVENTS_UI_POP_MESSAGE(hScriptParam_0);
				}
			}
		
			func_11(&unk4);
			func_12(&unk4);
			BUILTIN::WAIT(0);
		}
	}
	else
	{
		while (!func_13(true, true))
		{
			func_14(hScriptParam_0, &unk4);
			func_11(&unk4);
			func_15(&unk4);
			BUILTIN::WAIT(0);
		}
	}

	func_4(&unk4);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_1() // Position - 0x18F Hash - 0x4228A1C2 ^0xC7CA5F45
{
	return Global_1572887.f_14;
}

void func_2(var uParam0) // Position - 0x19D Hash - 0xE67EF483 ^0xD213C6AF
{
	var unk;

	unk.f_19 = -1;
	unk.f_33 = -1;
	unk.f_34 = -1;
	unk.f_35 = -1;
	unk.f_36 = -1;
	unk.f_37 = 1;
	*uParam0 = { unk };
	uParam0->f_20 = -1;
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_FROM_PATH("", "MapFocus");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "Region", "");
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_8, "ItemHovered", false);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_8, "HoveredName", "");
	HUD::TEXT_BLOCK_REQUEST("FMMC");

	if (TXD::DOES_STREAMED_TXD_EXIST(-1859668514))
		TXD::REQUEST_STREAMED_TXD(-1859668514, false);

	uParam0->f_37 = 1;
	return;
}

void func_3(var uParam0) // Position - 0x23F Hash - 0x646928F0 ^0x646928F0
{
	func_2(uParam0);
	return;
}

void func_4(var uParam0) // Position - 0x24D Hash - 0x7F49B93E ^0x3414CD78
{
	if (func_1() == -1)
		func_16(uParam0);
	else
		func_17(uParam0);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_5(var uParam0, var uParam1) // Position - 0x270 Hash - 0x2316FD8E ^0xAF303885
{
	switch (uParam0->f_2)
	{
		case joaat("TEXT_WRITTEN"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_35 = func_18(uParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
	
		case joaat("TEXT_PRINTED"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_36 = func_18(uParam0);
					uParam1->f_37 = 1;
					break;
			}
			break;
	
		case joaat("district"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_33 = func_19(func_18(uParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
	
		case joaat("TOWN"):
			switch (*uParam0)
			{
				case -1740156697:
					uParam1->f_34 = func_20(func_18(uParam0));
					uParam1->f_37 = 1;
					break;
			}
			break;
	}

	return;
}

int func_6(var uParam0) // Position - 0x332 Hash - 0x3C5F25C1 ^0xA1E4D4A5
{
	uParam0->f_19 = uParam0->f_1;

	switch (func_21(uParam0))
	{
		case 0:
			uParam0->f_22 = func_23(uParam0->f_20, false);
			break;
	
		case 1:
			uParam0->f_22 = func_24(uParam0->f_21);
			break;
	
		case 2:
			uParam0->f_22 = func_22(uParam0->f_19);
			break;
	
		default:
			func_25(uParam0);
			return 0;
	}

	func_25(uParam0);
	return 1;
}

void func_7(var uParam0) // Position - 0x3A2 Hash - 0x646928F0 ^0x646928F0
{
	func_25(uParam0);
	return;
}

int func_8(var uParam0) // Position - 0x3B0 Hash - 0xF0065A53 ^0x87BC4076
{
	uParam0->f_25 = uParam0->f_1;

	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}

	switch (uParam0->f_23)
	{
		case 52:
		case 92:
			uParam0->f_28 = 0;
			return 0;
	
		case 71:
			switch (func_21(uParam0))
			{
				case 0:
					uParam0->f_22 = func_23(uParam0->f_20, false);
					uParam0->f_26 = func_28(uParam0->f_19);
				
					if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
						uParam0->f_26 = func_29();
					break;
			}
			break;
	
		case 72:
			if (func_27(uParam0->f_25, &(uParam0->f_29)))
				uParam0->f_26 = MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(MISC::GET_HASH_KEY(&(Global_1835011[uParam0->f_29 /*72*/].f_9)));
			else
				uParam0->f_26 = -1640799778;
			break;
	
		default:
			uParam0->f_26 = func_30(uParam0->f_23, uParam0->f_25);
			break;
	}

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::REQUEST_STREAMED_TXD(uParam0->f_26, true);
		uParam0->f_28 = 1;
		return 1;
	}

	return 0;
}

void func_9(var uParam0) // Position - 0x4B6 Hash - 0x32AC30C6 ^0xB9BC9606
{
	var unk;

	func_31(uParam0);
	uParam0->f_23 = { unk };
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = -1;
	func_32(uParam0);
	return;
}

int func_10(var uParam0) // Position - 0x4E3 Hash - 0x27718047 ^0x7759885C
{
	if (uParam0->f_25 != uParam0->f_1)
		return 0;

	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		if (!uParam0->f_28)
		{
			uParam0->f_39 = 0;
			UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("Map"), joaat("show_info"));
			return 1;
		}
	}

	return 0;
}

void func_11(var uParam0) // Position - 0x53F Hash - 0x196D24C3 ^0x25B406EB
{
	if (uParam0->f_37)
	{
		func_33(uParam0);
		uParam0->f_37 = 0;
	}

	return;
}

void func_12(var uParam0) // Position - 0x559 Hash - 0xB997DE43 ^0x1F85EA93
{
	if (func_34(uParam0))
	{
		switch (uParam0->f_23)
		{
			case 71:
				func_36(uParam0->f_19, uParam0);
				break;
		
			case 72:
				func_35(uParam0->f_25, uParam0);
				break;
		
			case 93:
				func_37(uParam0->f_25, uParam0);
				break;
		
			case 94:
				func_38(uParam0->f_25, uParam0);
				break;
		
			case 95:
				func_39(uParam0->f_25, uParam0);
				break;
		
			case 96:
				func_40(uParam0->f_23, uParam0);
				break;
		
			default:
				func_40(uParam0->f_23, uParam0);
				break;
		}
	}

	return;
}

BOOL func_13(BOOL bParam0, BOOL bParam1) // Position - 0x5F3 Hash - 0x8CDC02F2 ^0xDB4E8541
{
	int i;

	if (Global_1572887.f_13)
		return false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
		
			case 1:
				return true;
		
			case 2:
				if (!bParam0)
					return true;
				break;
		
			case 3:
				return true;
		
			case 4:
				return true;
		
			default:
				return true;
		}
	}

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == 1976253964)
			return true;
	}

	return false;
}

void func_14(Hash hParam0, var uParam1) // Position - 0x6D3 Hash - 0x22D04E91 ^0x6DAE9C49
{
	int eventData;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(hParam0))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(hParam0, &eventData))
		{
			func_5(&eventData, uParam1);
		
			switch (eventData.f_2)
			{
				case joaat("Card"):
					if (eventData == -1203660660)
						if (func_46(uParam1))
							UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("pause_menu"));
					break;
			
				case joaat("zone"):
					uParam1->f_4 = { eventData };
					*uParam1 = { eventData };
				
					switch (eventData)
					{
						case -1740156697:
							func_41(uParam1);
							break;
					
						case -632467210:
							func_42(uParam1);
							break;
					}
					break;
			
				case joaat("blip"):
					*uParam1 = { eventData };
				
					switch (eventData)
					{
						case -1740156697:
							func_43(uParam1);
							break;
					
						case -1203660660:
							func_45(uParam1);
							break;
					
						case -632467210:
							func_44(uParam1);
							*uParam1 = { uParam1->f_4 };
							func_41(uParam1);
							break;
					}
					break;
			}
		
			UIEVENTS::EVENTS_UI_POP_MESSAGE(hParam0);
		}
	}

	return;
}

void func_15(var uParam0) // Position - 0x7CA Hash - 0xB43319C9 ^0x4B412AC6
{
	var unk;

	if (func_34(uParam0))
	{
		if (!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &unk))
			return;
	
		switch (uParam0->f_23)
		{
			case 71:
				func_52(uParam0, &unk);
				break;
		
			case 72:
				func_51(uParam0, &unk);
				break;
		
			case 92:
				func_50(uParam0->f_25, uParam0);
				break;
		
			case 97:
			case 98:
				func_53(uParam0, &unk);
				break;
		
			default:
				func_54(uParam0, &unk);
				break;
		}
	}

	func_55(uParam0);
	func_56(uParam0);
	return;
}

void func_16(var uParam0) // Position - 0x865 Hash - 0xAC281508 ^0x6CF83087
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
	return;
}

void func_17(var uParam0) // Position - 0x875 Hash - 0xAC281508 ^0x6CF83087
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_8);
	return;
}

int func_18(var uParam0) // Position - 0x885 Hash - 0x4DBEFDC0 ^0xFE47C025
{
	if (uParam0->f_1 != 0)
		return uParam0->f_1;

	return -1;
}

int func_19(int iParam0) // Position - 0x8A0 Hash - 0x50573299 ^0x50573299
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

int func_20(int iParam0) // Position - 0x95A Hash - 0x45AA288F ^0x45AA288F
{
	switch (iParam0)
	{
		case joaat("butcher"):
			return 87;
	
		case joaat("cornwall"):
			return 70;
	
		case joaat("beechershope"):
			return 39;
	
		case joaat("tumbleweed"):
			return 121;
	
		case joaat("AguasdulcesVilla"):
		case joaat("AguasdulcesRuins"):
		case joaat("AguasdulcesFarm"):
			return 62;
	
		case joaat("WALLACE"):
			return 37;
	
		case joaat("StDenis"):
			return 5;
	
		case joaat("ARMADILLO"):
			return 127;
	
		case joaat("Emerald"):
			return 74;
	
		case joaat("annesburg"):
			return 83;
	
		case joaat("lagras"):
			return 3;
	
		case joaat("strawberry"):
			return 26;
	
		case joaat("valentine"):
			return 81;
	
		case joaat("blackwater"):
			return 40;
	
		case joaat("manicato"):
			return 66;
	
		case joaat("Manzanita"):
			return 116;
	
		case joaat("wapiti"):
			return 60;
	
		case joaat("braithwaite"):
			return 99;
	
		case joaat("Caliga"):
			return 101;
	
		case joaat("RHODES"):
			return 111;
	
		case joaat("vanhorn"):
			return 98;
	
		case joaat("Siska"):
			return 33;
	}

	return -1;
}

int func_21(var uParam0) // Position - 0xA6A Hash - 0x2AD66BFD ^0xD700A1D6
{
	if (uParam0->f_19 == -1)
		return -1;

	uParam0->f_22 = func_22(uParam0->f_19);

	if (uParam0->f_22 != 0)
		return 2;

	uParam0->f_20 = func_20(uParam0->f_19);

	if (func_57(uParam0->f_20))
		return 0;

	uParam0->f_21 = func_19(uParam0->f_19);

	if (func_58(uParam0->f_21))
		return 1;

	return -1;
}

int func_22(int iParam0) // Position - 0xACD Hash - 0x47ADC10D ^0xA299C479
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

int func_23(int iParam0, BOOL bParam1) // Position - 0xB4E Hash - 0xE1D12727 ^0xC0A2F1C4
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
			return joaat("region_bgv_old_man_jones");
	
		case 30:
			return joaat("region_bgv_watsonscabin");
	
		case 31:
			return joaat("region_blu_canebreak_manor");
	
		case 32:
			return joaat("region_blu_copperhead");
	
		case 33:
			return joaat("region_blu_sisika");
	
		case 34:
			return joaat("region_blu_travelling_salesman");
	
		case 35:
			return joaat("region_cml_bacchusbridge");
	
		case 36:
			return joaat("region_cml_dino_lady");
	
		case 37:
			return joaat("region_cml_oldfortwallace");
	
		case 38:
			return joaat("region_cml_sixpointcabin");
	
		case 39:
			return joaat("region_grt_beechers");
	
		case 40:
			return joaat("region_grt_blackwater");
	
		case 41:
			return joaat("region_grt_quakers_cove");
	
		case 42:
			return joaat("region_grz_adlerranch");
	
		case 43:
			return joaat("region_grz_dead_rival");
	
		case 44:
			return joaat("region_grz_chezporter");
	
		case 45:
			return joaat("region_grz_colter");
	
		case 46:
			return joaat("region_grz_frozen_explorer");
	
		case 47:
			return joaat("region_grz_millesani_claim");
	
		case 48:
			return joaat("region_grz_mountain_man");
	
		case 49:
			return joaat("region_grz_mount_hagen_peak");
	
		case 50:
			return joaat("region_grz_starving_children");
	
		case 51:
			return joaat("region_grz_tempest_rim");
	
		case 52:
			return joaat("region_grz_wintermining_town");
	
		case 53:
			return joaat("region_grz_calumetravine");
	
		case 54:
			return joaat("region_gre_civil_war_bride");
	
		case 55:
			return joaat("region_grz_cohutta");
	
		case 56:
			return joaat("region_grz_cotorra_springs");
	
		case 57:
			return joaat("region_grz_gunfight");
	
		case 58:
			return joaat("region_grz_theloft");
	
		case 59:
			return joaat("region_gre_veteran");
	
		case 60:
			return joaat("region_grz_wapiti");
	
		case 61:
			return joaat("region_grz_travelling_salesman");
	
		case 62:
			return joaat("region_gua_aguasdulces");
	
		case 63:
			return joaat("region_gua_camp");
	
		case 64:
			return joaat("region_gua_cincotorres");
	
		case 65:
			return joaat("region_gua_lacapilla");
	
		case 66:
			return joaat("region_gua_manicato");
	
		case 67:
			return joaat("region_hrt_abandoned_mill");
	
		case 68:
			return joaat("region_roa_beechers_c");
	
		case 69:
			return joaat("region_hrt_carmodydell");
	
		case 70:
			return joaat("region_hrt_cornwallkerosene");
	
		case 71:
			return joaat("region_hrt_crop_farm");
	
		case 72:
			return joaat("region_hrt_cumberlandfalls");
	
		case 73:
			return joaat("region_hrt_downsranch");
	
		case 74:
			return joaat("region_hrt_emeraldranch");
	
		case 75:
			return joaat("region_hrt_grangers_hoggery");
	
		case 76:
			return joaat("region_hrt_horseshoeoverlook");
	
		case 77:
			return joaat("region_hrt_larnedsod");
	
		case 78:
			return joaat("region_hrt_loony_cult");
	
		case 79:
			return joaat("region_hrt_luckyscabin");
	
		case 80:
			return joaat("region_hrt_swansons_station");
	
		case 81:
			return joaat("region_hrt_valentine");
	
		case 82:
			return joaat("region_roa_aberdeenpigfarm");
	
		case 83:
			return joaat("region_roa_annesburg");
	
		case 84:
			return joaat("region_roa_beaverhollow");
	
		case 85:
			return joaat("region_roa_black_balsam_rise");
	
		case 86:
			return joaat("region_roa_brandywine_drop");
	
		case 87:
			return joaat("region_roa_butchercreek");
	
		case 88:
			return joaat("region_roa_doverhill");
	
		case 89:
			return joaat("region_roa_happy_family");
	
		case 90:
			return joaat("region_roa_isolationist");
	
		case 91:
			return joaat("region_roa_macleanshouse");
	
		case 92:
			return joaat("region_roa_mossy_flats");
	
		case 93:
			return joaat("region_roa_roanoke_valley");
	
		case 94:
			return joaat("region_roa_rockyseven");
	
		case 95:
			return joaat("region_roa_trapper");
	
		case 96:
			return joaat("region_roa_old_man_jones");
	
		case 97:
			return joaat("region_roa_vanhornmansion");
	
		case 98:
			return joaat("region_roa_vanhornpost");
	
		case 99:
			return joaat("region_scm_braithwaitemanor");
	
		case 100:
			return joaat("region_scm_bulgerglade");
	
		case 101:
			return joaat("region_scm_caligahall");
	
		case 102:
			return joaat("region_scm_catfishjacksons");
	
		case 103:
			return joaat("region_scm_clemenscove");
	
		case 104:
			return joaat("region_scm_clemenspoint");
	
		case 105:
			return joaat("region_scm_compsons_stead");
	
		case 106:
			return joaat("region_scm_dairy_farm");
	
		case 107:
			return joaat("region_scm_horse_shop");
	
		case 108:
			return joaat("region_scm_lonniesshack");
	
		case 109:
			return joaat("region_scm_love_triangle");
	
		case 110:
			return joaat("region_scm_radleys_pasture");
	
		case 111:
			return joaat("region_scm_rhodes");
	
		case 112:
			return joaat("region_scm_slave_pen");
	
		case 113:
			return joaat("region_tal_aurora_basin");
	
		case 114:
			return joaat("region_tal_dead_settler");
	
		case 115:
			return joaat("region_tal_cochinay");
	
		case 116:
			return joaat("region_tal_manzanitapost");
	
		case 117:
			return joaat("region_tal_pacificunionrr");
	
		case 118:
			return joaat("region_tal_tannersreach");
	
		case 119:
			return joaat("region_tal_trapper");
	
		case 120:
			return joaat("region_gap_gaptooth_breach");
	
		case 121:
			return joaat("region_gap_tumbleweed");
	
		case 122:
			return joaat("region_gap_rathskeller_fork");
	
		case 123:
			return joaat("region_rio_benedict_point");
	
		case 124:
			return joaat("region_rio_fort_mercer");
	
		case 125:
			return joaat("region_rio_plain_view");
	
		case 126:
			return joaat("region_rio_travelling_salesman");
	
		case 127:
			return joaat("region_cho_armadillo");
	
		case 128:
			return joaat("region_cho_coots_chapel");
	
		case 129:
			return joaat("region_cho_don_julio_house");
	
		case 130:
			return joaat("region_cho_rileys_charge");
	
		case 131:
			return joaat("region_cho_ridgewood_farm");
	
		case 132:
			return joaat("region_cho_twin_rocks");
	
		case 133:
			return joaat("region_cho_travelling_salesman");
	
		case 134:
			return 1869665995;
	
		case 135:
			return joaat("region_hen_macfarlanes_ranch");
	
		case 136:
			return joaat("region_hen_thieves_landing");
	
		case 137:
			return joaat("region_hen_travelling_salesman");
	
		case 138:
			return -1573562784;
	
		case 139:
			return joaat("region_centralunionrr");
	
		default:
		
	}

	if (bParam1)
		return joaat("Wilderness");

	return 0;
}

int func_24(int iParam0) // Position - 0x1313 Hash - 0xB8EC44B7 ^0xCA15B31A
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

void func_25(var uParam0) // Position - 0x1412 Hash - 0x3089532C ^0x201FBC9B
{
	BOOL flag;
	int num;
	char* str;
	int num2;
	int num3;
	int num4;

	flag = false;
	num = 0;
	str = "";
	num2 = func_20(uParam0->f_19);
	num3 = uParam0->f_33;

	if (!func_58(num3))
		num3 = func_19(uParam0->f_19);

	if (!func_58(num3))
		num4 = func_60(func_59(num2, true, true));
	else
		num4 = func_61(num3);

	if (func_62(num3) || func_63(num4) || func_64(num2))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		else
			str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		flag = true;
	}
	else if (func_65(num4))
	{
		num = func_66(num4);
	
		if (num > 0)
		{
			flag = true;
			str = MISC::VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", num);
		}
	}

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, flag);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, str);
	return;
}

BOOL func_26(Blip blParam0, var uParam1) // Position - 0x14EE Hash - 0xD267AB1 ^0x75C9A095
{
	var unk;
	var unk2;
	BOOL flag;

	flag = MAP::SET_BLIP_FLASHES(blParam0, &unk, &unk2);
	*uParam1 = unk;
	uParam1->f_1 = unk2;
	return flag;
}

BOOL func_27(Blip blParam0, var uParam1) // Position - 0x150F Hash - 0xEE52B094 ^0xEE52B094
{
	int i;

	for (i = 0; i < Global_1900531; i = i + 1)
	{
		if (!func_67(Global_1900531[i /*2*/]))
		{
		}
		else if (Global_1900531[i /*2*/] == 2)
		{
			*uParam1 = func_68(Global_1900531[i /*2*/]);
		
			if (func_69(*uParam1) && MAP::DOES_BLIP_EXIST(Global_1835011[*uParam1 /*72*/].f_28) && Global_1835011[*uParam1 /*72*/].f_28 == blParam0)
				return true;
		}
	}

	return false;
}

Hash func_28(int iParam0) // Position - 0x1594 Hash - 0xB8EC44B7 ^0xD420F143
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

int func_29() // Position - 0x163F Hash - 0x9F572D68 ^0x25EB2A84
{
	return joaat("ZONE_VALENTINE");
}

Hash func_30(int iParam0, Blip blParam1) // Position - 0x164C Hash - 0x3CD0BFCA ^0x5339C0D6
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
		case 53:
		case 59:
		case 68:
		case 69:
			unk2 = { func_70(blParam1, iParam0, &unk) };
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 54:
		case 60:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			unk2 = { func_72(iParam0, blParam1, &unk) };
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 55:
			return -1212983574;
	
		case 56:
			return -1805795741;
	
		case 57:
			return -1949319444;
	
		case 58:
			unk2 = { func_71() };
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 61:
			return -40867973;
	
		case 62:
			return -700024937;
	
		case 63:
			return -422762807;
	
		case 64:
			return 1307627757;
	
		case 65:
			return -1341878153;
	
		case 66:
			return 1334885374;
	
		case 67:
			return 1718870684;
	
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
			MAP::SET_BLIP_FLASHES(blParam1, &unk18, &unk19);
			TEXT_LABEL_ASSIGN_STRING(&unk2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(unk19), 128);
			hashKey = MISC::GET_HASH_KEY(&unk2);
			break;
	
		case 92:
			return -1640799778;
	
		case 93:
			return -1640799778;
	
		case 94:
			return -1640799778;
	
		case 95:
			return -1640799778;
	
		case 96:
			return -1640799778;
	}

	if (hashKey != -1)
		return hashKey;

	return -1;
}

void func_31(var uParam0) // Position - 0x197C Hash - 0xA0F65B7D ^0xF86CC28F
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_8);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_9);
	return;
}

void func_32(var uParam0) // Position - 0x1994 Hash - 0x82E9D2BC ^0xE9E277A2
{
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(joaat("Map"), joaat("hide_info")))
		uParam0->f_39 = 1;
	else
		uParam0->f_39 = 0;

	return;
}

void func_33(var uParam0) // Position - 0x19BB Hash - 0xF2E239ED ^0x7D46E350
{
	char* str;
	char* str2;
	char* str3;
	char* str4;

	if (uParam0->f_38 && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_9))
		return;

	str = func_75(uParam0->f_35, uParam0->f_36);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
	{
		str2 = 0;
		str3 = 0;
		str4 = 0;
	
		if (uParam0->f_34 != -1)
			str2 = func_76(uParam0->f_34);
	
		if (uParam0->f_33 != -1)
		{
			str3 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(uParam0->f_33);
			str4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(uParam0->f_33);
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

BOOL func_34(var uParam0) // Position - 0x1A84 Hash - 0xAD5B205A ^0xE16B8ACF
{
	if (uParam0->f_39)
		func_32(uParam0);

	if (!uParam0->f_28)
		return false;

	switch (uParam0->f_23)
	{
		case 0:
		case 52:
		case 92:
			uParam0->f_28 = 0;
			return false;
	
		default:
			break;
	}

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26) && TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_26) && uParam0->f_27 == 0 || uParam0->f_27 != 0 && TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_27) && TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_27))
	{
		uParam0->f_28 = 0;
		uParam0->f_38 = 0;
		return true;
	}

	return false;
}

void func_35(Blip blParam0, var uParam1) // Position - 0x1B28 Hash - 0xB396AE90 ^0x465757
{
	var label;
	Hash hashKey;

	if (!func_69(uParam1->f_29))
		if (!func_27(blParam0, &(uParam1->f_29)))
			return;

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1835011[uParam1->f_29 /*72*/].f_27);
	TEXT_LABEL_COPY(&label, { Global_1835011[uParam1->f_29 /*72*/].f_9 }, 2);
	TEXT_LABEL_APPEND_STRING(&label, "_DESC_PM", 16);

	if (!HUD::DOES_TEXT_LABEL_EXIST(&label))
		TEXT_LABEL_ASSIGN_STRING(&label, "", 16);

	hashKey = MISC::GET_HASH_KEY(&(Global_1835011[uParam1->f_29 /*72*/].f_9));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&label));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", hashKey);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(hashKey));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(hashKey));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_36(int iParam0, var uParam1) // Position - 0x1C28 Hash - 0xFBD8BE61 ^0x5848C0F5
{
	int num;
	int num2;
	Hash hash;

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "Zone");
	uParam1->f_26 = func_28(iParam0);
	num = func_79(uParam1->f_20);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_80(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(num)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", func_81(iParam0));

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam1->f_26))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_28(iParam0));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", func_28(iParam0));
	}
	else
	{
		uParam1->f_26 = func_29();
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", uParam1->f_26);
	}

	num2 = func_61(num);

	if (func_65(num2))
	{
		hash = func_66(num2);
	
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

void func_37(Blip blParam0, var uParam1) // Position - 0x1D6B Hash - 0x85C521A3 ^0xB81F10D2
{
	var unk;
	var unk2;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &unk2);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(unk2)));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_38(Blip blParam0, var uParam1) // Position - 0x1E0A Hash - 0x615ED9C6 ^0x915B4269
{
	var unk;
	int num;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &num);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1072759.f_23824.f_383[num /*272*/]);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_39(Blip blParam0, var uParam1) // Position - 0x1EAE Hash - 0xBEC629E4 ^0x3657B87
{
	var unk;
	int num;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &num);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", func_83(num));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(uParam1->f_23, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "");
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

void func_40(int iParam0, var uParam1) // Position - 0x1F49 Hash - 0xBA4902C1 ^0xA7759378
{
	int num;
	var unk;
	var unk17;
	var unk33;

	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	TEXT_LABEL_ASSIGN_STRING(&unk17, func_84(iParam0), 128);

	switch (func_85(iParam0))
	{
		case 1:
			unk = { func_70(uParam1->f_25, iParam0, &num) };
		
			if (iParam0 == 16)
				TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_BOUNTY", 128);
		
			TEXT_LABEL_ASSIGN_STRING(&unk33, func_76(num), 128);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", MISC::GET_HASH_KEY(&unk17));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&unk33));
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam0), 128);
			num = func_86(MAP::GET_BLIP_COORDS(uParam1->f_25), true);
			TEXT_LABEL_ASSIGN_STRING(&unk33, func_76(num), 128);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", &unk17);
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&unk));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", MISC::GET_HASH_KEY(&unk33));
			break;
	
		case 5:
			unk = { func_87(num) };
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

	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", func_30(iParam0, uParam1->f_25));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_value", 0);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
	return;
}

int func_41(var uParam0) // Position - 0x20F4 Hash - 0x80C04803 ^0xC6590C2E
{
	var unk;

	uParam0->f_19 = uParam0->f_1;

	if (func_49(uParam0->f_2, uParam0->f_1, &unk))
	{
		uParam0->f_22 = unk.f_3;
		func_88(uParam0);
		return 1;
	}

	func_88(uParam0);
	return 0;
}

void func_42(var uParam0) // Position - 0x212E Hash - 0x646928F0 ^0x646928F0
{
	func_88(uParam0);
	return;
}

int func_43(var uParam0) // Position - 0x213C Hash - 0x893A6DC2 ^0x4A04D938
{
	var unk;

	uParam0->f_25 = uParam0->f_1;
	uParam0->f_37 = 1;

	if (!func_26(uParam0->f_25, &(uParam0->f_23)))
	{
		uParam0->f_25 = 0;
		return 0;
	}

	!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &unk);

	switch (uParam0->f_23)
	{
		case 52:
		case 92:
			uParam0->f_28 = 0;
			uParam0->f_26 = 0;
			return 0;
	
		case 72:
			uParam0->f_29 = func_89(uParam0->f_25);
			uParam0->f_26 = unk.f_12;
			break;
	
		case 94:
			if (unk.f_1 == joaat("player_camp"))
				uParam0->f_26 = func_90(Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_1);
			else
				uParam0->f_26 = unk.f_12;
			break;
	
		case 95:
			uParam0->f_26 = unk.f_12;
			uParam0->f_27 = unk.f_14;
			break;
	
		default:
			uParam0->f_26 = unk.f_12;
			break;
	}

	if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
		uParam0->f_26 = joaat("map_card_camp_food");

	if (TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_26))
	{
		TXD::REQUEST_STREAMED_TXD(uParam0->f_26, true);
		uParam0->f_28 = 1;
	
		if (uParam0->f_27 != 0 && TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_27))
			TXD::REQUEST_STREAMED_TXD(uParam0->f_27, true);
	
		return 1;
	}

	return 0;
}

void func_44(var uParam0) // Position - 0x2277 Hash - 0x49584173 ^0x49584173
{
	func_9(uParam0);
	func_91(uParam0);
	return;
}

int func_45(var uParam0) // Position - 0x228B Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_10(uParam0);
}

BOOL func_46(var uParam0) // Position - 0x2299 Hash - 0x6BDD0A3D ^0x741A5D7D
{
	var unk;

	!func_49(func_47(uParam0->f_23), func_48(uParam0->f_25), &unk);

	if (uParam0->f_23 == 93)
	{
		func_93(func_92(unk.f_1), 6);
		return true;
	}

	return false;
}

int func_47(var uParam0) // Position - 0x22D6 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_94(uParam0);
}

int func_48(Blip blParam0) // Position - 0x22E4 Hash - 0x87A5C085 ^0x1357B58F
{
	int num;
	int num2;

	if (!MAP::DOES_BLIP_EXIST(blParam0))
		return 0;

	MAP::SET_BLIP_FLASHES(blParam0, &num, &num2);

	switch (func_94(num))
	{
		case joaat("BLIP_GFH_GIVER"):
			return num2;
	
		case joaat("blip_town"):
			return num2;
	
		case joaat("BLIP_POSSE_CAMP"):
			return num2;
	
		case -1047712081:
			return num2;
	
		case joaat("BLIP_CUTSCENE"):
			return num2;
	
		case joaat("BLIP_MISSION"):
			return num2;
	
		case joaat("BLIP_POSSE_LOCAL_CAMP"):
			return num2;
	
		case joaat("BLIP_STORE"):
			return num2;
	
		case joaat("BLIP_FAST_TRAVEL"):
			return num2;
	
		case joaat("BLIP_PLAYLIST"):
			return num2;
	
		default:
		
	}

	return num2;
}

BOOL func_49(int iParam0, int iParam1, var uParam2) // Position - 0x2381 Hash - 0xA68E1550 ^0xAF5191A2
{
	var unk;

	unk = Global_1072759.f_28417;
	unk.f_2 = -1629667380;
	unk.f_3 = iParam0;
	unk.f_4 = iParam1;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		*uParam2 = iParam0;
		uParam2->f_1 = iParam1;
		unk.f_2 = -178053467;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_3), &unk);
		unk.f_2 = 2068408867;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_2), &unk);
		unk.f_2 = -2015838779;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_4), &unk);
		unk.f_2 = -837877152;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_5), &unk);
		unk.f_2 = -1422707781;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_6), &unk);
		unk.f_2 = -875438543;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_7), &unk);
		unk.f_2 = 680824008;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), &unk);
		unk.f_2 = -1832584664;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_9), &unk);
		unk.f_2 = 1926839997;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_10), &unk);
		unk.f_2 = -839757535;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_11), &unk);
		unk.f_2 = 378321223;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_12), &unk);
		unk.f_2 = -865732538;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_13), &unk);
		unk.f_2 = -1361232962;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_14), &unk);
		unk.f_2 = 680460752;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_15), &unk);
		unk.f_2 = 1929921658;
		DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_16), &unk);
		unk.f_2 = 1969633495;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), &unk);
		unk.f_2 = -1607031478;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_25), &unk);
		return true;
	}

	return false;
}

void func_50(Blip blParam0, var uParam1) // Position - 0x2518 Hash - 0x1B3992D3 ^0x8874720A
{
	var unk;
	int value;
	var unk2;
	var unk4;

	MAP::SET_BLIP_FLASHES(blParam0, &unk, &value);
	func_31(uParam1);
	uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP" /*Blip*/);
	unk2 = { func_95(PLAYER::INT_TO_PLAYERINDEX(value)) };
	uParam1->f_15 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "name", func_96(PLAYER::GET_PLAYER_NAME(PLAYER::INT_TO_PLAYERINDEX(value)), joaat("COLOR_PURE_WHITE")));
	uParam1->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", -436556357);
	uParam1->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", 0);
	func_97(&unk4, unk2, 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISC::GET_HASH_KEY(&unk4));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", -486609646);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam1->f_9, "hint_value", func_98(value));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_player", uParam1->f_9);
	return;
}

void func_51(var uParam0, var uParam1) // Position - 0x25E6 Hash - 0x4AAFE115 ^0x7871BF86
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP" /*Blip*/);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description", HUD::GET_STRING_FROM_HASH_KEY(-54516066));
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "description_title", "");
	func_99(uParam0, uParam1->f_8);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
	return;
}

void func_52(var uParam0, var uParam1) // Position - 0x269A Hash - 0x506787B6 ^0x6FE23B6D
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP" /*Blip*/);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
	return;
}

void func_53(var uParam0, var uParam1) // Position - 0x2741 Hash - 0x4EBFC1E1 ^0x17885745
{
	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP" /*Blip*/);
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", uParam1->f_4);

	if (uParam0->f_23 == 97 || uParam0->f_23 == 98)
	{
		uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", uParam1->f_8);
		uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	}

	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", uParam1->f_12);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", uParam1->f_13);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
	return;
}

void func_54(var uParam0, var uParam1) // Position - 0x27FF Hash - 0x83374FDB ^0x8BDA8383
{
	Hash hashKey;
	Hash hash;
	Hash hash2;
	Hash hash3;
	int num;
	Hash constructedDiscoveredCharacterName;
	int num2;
	int num3;

	func_31(uParam0);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_8, "BLIP" /*Blip*/);

	switch (uParam0->f_23)
	{
		case 70:
			hashKey = uParam1->f_4;
		
			if (uParam1->f_12 == 713897782)
				hash = func_90(Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_1);
			else
				hash = uParam1->f_12;
		
			hash2 = uParam1->f_13;
			hash3 = uParam1->f_8;
			break;
	
		case 94:
			hashKey = uParam1->f_4;
		
			if (uParam1->f_1 == joaat("player_camp"))
				hash = func_90(Global_1144526[PLAYER::PLAYER_ID() /*83*/].f_38.f_1);
			else
				hash = uParam1->f_12;
		
			hash2 = uParam1->f_13;
			hash3 = uParam1->f_8;
			break;
	
		case 95:
			num = func_100(uParam1->f_1);
		
			if (!func_101(num))
				break;
		
			num2 = func_102(num);
		
			if (num2 == joaat("NONE"))
				break;
		
			if (func_103(num) != joaat("bounty"))
			{
				if (func_104(num) == joaat("sadie_adler"))
					if (!func_105(func_104(num)))
						num2 = joaat("SECONDARY");
			
				if (func_104(num) == joaat("WAR_VET"))
				{
					if (func_105(func_104(num)))
					{
						constructedDiscoveredCharacterName = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(func_106(num, num2), false, false);
						hashKey = PLAYER::_0xDA9D7BE231FE865F(func_106(num, num2), 0, 0);
						hash3 = uParam1->f_8;
						hash = uParam1->f_12;
						hash2 = uParam1->f_13;
					}
					else
					{
						hashKey = joaat("GEM_STRANGER_MALE");
						hash3 = 1463582430;
						hash = -1859668514;
						hash2 = joaat("IMAGE");
					}
				}
				else
				{
					constructedDiscoveredCharacterName = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(func_106(num, num2), false, false);
				
					if (constructedDiscoveredCharacterName == 0)
						break;
				
					hashKey = PLAYER::_0xDA9D7BE231FE865F(func_106(num, num2), 0, 0);
				
					if (PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(constructedDiscoveredCharacterName))
					{
						switch (num2)
						{
							case joaat("SECONDARY"):
								if (func_104(num) == joaat("sadie_adler"))
								{
									hash3 = uParam1->f_8;
									hash = uParam1->f_12;
									hash2 = uParam1->f_13;
								}
								else
								{
									hash3 = uParam1->f_9;
									hash = uParam1->f_14;
									hash2 = uParam1->f_15;
									uParam1->f_12 = uParam1->f_14;
									uParam1->f_13 = uParam1->f_15;
								}
								break;
						
							case joaat("PRIMARY"):
								hash3 = uParam1->f_8;
								hash = uParam1->f_12;
								hash2 = uParam1->f_13;
								break;
						
							default:
								break;
						}
					}
					else
					{
						switch (func_107(num, num2))
						{
							case joaat("Male"):
								hash3 = 1463582430;
								break;
						
							case joaat("female"):
								hash3 = -648664377;
								break;
						
							default:
								break;
						}
					
						hash = -1859668514;
						hash2 = joaat("IMAGE");
					}
				}
			}
			else
			{
				hashKey = func_108(num, joaat("GIVER_NAME"));
			
				if (hashKey == 0)
					hashKey = MISC::GET_HASH_KEY("GEM_BOUNTY_BOARD");
			
				hash3 = uParam1->f_8;
				hash = uParam1->f_12;
				hash2 = uParam1->f_13;
			}
			break;
	
		default:
			hashKey = uParam1->f_4;
			hash = uParam1->f_12;
			hash2 = uParam1->f_13;
			hash3 = uParam1->f_8;
			break;
	}

	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "name", hashKey);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description", hash3);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "description_title", uParam1->f_7);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTXD", hash);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "imageTX", hash2);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "hint_name", uParam1->f_16);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_9, "hint_value", &(uParam1->f_17));

	if (uParam1->f_10 != joaat("DYNAMIC_LOCATION"))
	{
		uParam0->f_38 = 1;
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_10, MISC::VAR_STRING(0, uParam1->f_10));
	}

	if (uParam0->f_23 == 93)
	{
		num3 = func_92(uParam1->f_1);
		func_109(num3);
		uParam0->f_18 = 0;
		uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_9, "startable", true);
		uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_9, "startPrompt", joaat("start_matchmaking"));
		func_55(uParam0);
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_8, -1, &(uParam1->f_25), uParam0->f_9);
	return;
}

void func_55(var uParam0) // Position - 0x2BA6 Hash - 0x89C1626F ^0x1910FA4C
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam0->f_23 == 93 && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_16))
	{
		flag = Global_1572887.f_72.f_40 > 1 && Global_1572887.f_72.f_40 <= 15 && !func_110();
		flag2 = GANG::NETWORK_IS_GANG_ACTIVE(Global_1295666.f_10) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID());
		flag3 = flag || flag2;
	
		if (uParam0->f_18 != flag3)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, !flag3);
		
			if (flag)
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, joaat("matchmaking_active_link"));
			else if (flag2)
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, 740703372);
			else
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_17, joaat("start_matchmaking"));
		
			uParam0->f_18 = flag3;
		}
	}

	return;
}

void func_56(var uParam0) // Position - 0x2C62 Hash - 0x2F05FA96 ^0xE762DD0B
{
	int num;
	char* str;
	const char* str2;

	if (uParam0->f_30)
	{
		uParam0->f_30 = 0;
		uParam0->f_30.f_1 = 1;
	}

	if (uParam0->f_30.f_1)
	{
		str = func_111(Global_265213.f_4[uParam0->f_30.f_2 /*46*/].f_17, &num);
	
		if (num != 1)
		{
			uParam0->f_30.f_1 = 0;
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_13, str);
			str2 = MISC::VAR_STRING(10, "LITERAL_STRING", &(Global_265213.f_4[uParam0->f_30.f_2 /*46*/].f_7));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14, str2);
		}
	}

	return;
}

BOOL func_57(int iParam0) // Position - 0x2CDE Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_58(int iParam0) // Position - 0x2CF4 Hash - 0xE49023EE ^0xE49023EE
{
	return iParam0 > -1 && iParam0 < 17;
}

int func_59(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2D0A Hash - 0xBE6BED24 ^0x63262B4D
{
	int num;

	switch (iParam0)
	{
		case 3:
			return joaat("LAW_REGION_LAGRAS");
	
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
	
		case 5:
			if (func_1() != -1 && func_113() == joaat("LAW_REGION_SAINT_DENIS_RURAL"))
				return joaat("LAW_REGION_SAINT_DENIS_RURAL");
			else
				return joaat("LAW_REGION_SAINT_DENIS");
			break;
	
		case 22:
			return joaat("LAW_REGION_PRONGHORN_RANCH");
	
		case 26:
			return joaat("LAW_REGION_STRAWBERRY");
	
		case 33:
			return joaat("LAW_REGION_SISIKA");
	
		case 37:
			return joaat("LAW_REGION_FORT_WALLACE");
	
		case 39:
			return joaat("LAW_REGION_BEECHERS_HOPE");
	
		case 40:
			if (!bParam1 || func_1() != -1)
				return joaat("LAW_REGION_BLACKWATER");
		
			if (func_114(44))
				return joaat("LAW_REGION_BLACKWATER");
			else
				return joaat("LAW_REGION_BLACKWATER_MAINGAME");
			break;
	
		case 60:
			if (func_1() != -1)
				return joaat("LAW_REGION_GRIZZLIES");
			else
				return joaat("LAW_REGION_WAPITI");
			break;
	
		case 62:
			return joaat("LAW_REGION_AGUASDULCES");
	
		case 66:
			return joaat("LAW_REGION_MANICATO");
	
		case 70:
			return joaat("LAW_REGION_CORNWALL");
	
		case 74:
			return joaat("LAW_REGION_EMERALD_RANCH");
	
		case 81:
			if (func_112(iParam0))
				return joaat("LAW_REGION_VALENTINE_LOCKDOWN");
			else
				return joaat("LAW_REGION_VALENTINE");
			break;
	
		case 83:
			return joaat("LAW_REGION_ANNESBURG");
	
		case 87:
			if (func_1() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_BUTCHER_CREEK");
			break;
	
		case 98:
			if (func_1() != -1)
				return joaat("LAW_REGION_ROANOKE_RIDGE");
			else
				return joaat("LAW_REGION_VAN_HORN");
			break;
	
		case 99:
			return joaat("LAW_REGION_BRAITHWAITE_MANOR");
	
		case 101:
			return joaat("LAW_REGION_CALIGA_HALL");
	
		case 111:
			if (func_112(iParam0))
				return joaat("LAW_REGION_RHODES_LOCKDOWN");
			else
				return joaat("LAW_REGION_RHODES");
			break;
	
		case 116:
			return joaat("LAW_REGION_MANZANITA_POST");
	
		case 121:
			return joaat("LAW_REGION_TUMBLEWEED");
	
		case 127:
			return joaat("LAW_REGION_ARMADILLO");
	
		case 131:
			return joaat("LAW_REGION_RIDGEWOOD_FARM");
	
		case 135:
			return joaat("LAW_REGION_MACFARLANES_RANCH");
	
		case 136:
			if (func_1() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (!bParam1)
				return joaat("LAW_REGION_THIEVES_LANDING");
		
			if (func_114(44))
				return joaat("LAW_REGION_THIEVES_LANDING");
			else
				return joaat("LAW_REGION_THIEVES_LANDING_MAINGAME");
			break;
	}

	if (bParam2)
	{
		num = func_115(iParam0);
	
		if (num != -1)
			return func_116(num, bParam1);
	}

	return 0;
}

int func_60(int iParam0) // Position - 0x2FD7 Hash - 0x4BF152B5 ^0x4BF152B5
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

int func_61(int iParam0) // Position - 0x3139 Hash - 0xA08D7C4E ^0xA08D7C4E
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

BOOL func_62(int iParam0) // Position - 0x31F4 Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_58(iParam0))
		return false;

	return func_117(iParam0, 2);
}

BOOL func_63(int iParam0) // Position - 0x3211 Hash - 0x2DDE6A78 ^0x2DDE6A78
{
	if (!func_65(iParam0))
		return false;

	return func_118(iParam0, 2);
}

BOOL func_64(int iParam0) // Position - 0x322E Hash - 0x6430C01F ^0xD1700991
{
	if (!func_57(iParam0))
		return false;

	return func_119(iParam0, 16777216);
}

BOOL func_65(int iParam0) // Position - 0x324F Hash - 0xA5768850 ^0xA5768850
{
	return iParam0 > -1 && iParam0 < 6;
}

Hash func_66(int iParam0) // Position - 0x3264 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_120(iParam0);
}

BOOL func_67(var uParam0, var uParam1) // Position - 0x3272 Hash - 0x53C8D2D2 ^0x6C02BA71
{
	if (!func_121(uParam0))
		return false;

	if (uParam0.f_1 < 0)
		return false;

	if (uParam0.f_1 >= func_122(uParam0))
		return false;

	return true;
}

int func_68(var uParam0, var uParam1) // Position - 0x32A6 Hash - 0xF9339824 ^0x8CB8B693
{
	var unk;

	unk.f_1 = -1;
	unk.f_2 = -1;

	if (func_123(uParam0, &unk))
		return unk.f_1;

	return -1;
}

BOOL func_69(int iParam0) // Position - 0x32D2 Hash - 0x77BA7B03 ^0x77BA7B03
{
	return iParam0 > -1 && iParam0 <= 80;
}

struct<16> func_70(Blip blParam0, int iParam1, var uParam2) // Position - 0x32E8 Hash - 0x13BCFC68 ^0xEE18D6A
{
	var unk;
	var blipCoords;
	var unk19;

	if (!MAP::DOES_BLIP_EXIST(blParam0))
		return unk;

	blipCoords = { MAP::GET_BLIP_COORDS(blParam0) };
	*uParam2 = func_86(blipCoords, true);

	while (blipCoords.f_2 < 200f && !func_57(*uParam2))
	{
		blipCoords.f_2 = blipCoords.f_2 + 25f;
		*uParam2 = func_86(blipCoords, true);
	}

	if (!func_57(*uParam2))
		return unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_", 128);
	unk19 = func_124(*uParam2);
	TEXT_LABEL_APPEND_STRING(&unk, &unk19, 128);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 128);
	TEXT_LABEL_APPEND_STRING(&unk, func_125(iParam1, *uParam2, blipCoords), 128);
	return unk;
}

struct<16> func_71() // Position - 0x3397 Hash - 0x7D1A7 ^0xE9168D0
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_NBX_STAGECOACH", 128);
	return unk;
}

struct<16> func_72(int iParam0, Blip blParam1, var uParam2) // Position - 0x33AC Hash - 0x7940B621 ^0x87EDCBB3
{
	var unk;
	var blipCoords;

	if (!MAP::DOES_BLIP_EXIST(blParam1))
		return unk;

	blipCoords = { MAP::GET_BLIP_COORDS(blParam1) };

	if (blipCoords.f_2 == 0f)
		func_126(&blipCoords, 50, 10, false, false);

	if (blipCoords.f_2 == 0f)
		blipCoords.f_2 = Global_34.f_2;

	*uParam2 = func_86(blipCoords, true);

	if (!func_57(*uParam2))
		return unk;

	switch (iParam0)
	{
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_BEECHERSHOPE", 128);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_", 128);
			TEXT_LABEL_APPEND_STRING(&unk, func_127(*uParam2), 128);
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_FOOD", 128);
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_TITHING_BOX", 128);
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_BUTCHER", 128);
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_HORSE_HITCH", 128);
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_SUPPLY_AMMO", 128);
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_SUPPLY_MEDICINE", 128);
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_SUPPLY_PROVISIONS", 128);
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_MINIGAME_POKER", 128);
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_MINIGAME_FIVE_FINGER", 128);
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_CAMP_MINIGAME_DOMINOES", 128);
			break;
	}

	return unk;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x34FA Hash - 0xA17D549C ^0xCB3414C3
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x35A8 Hash - 0xA17D549C ^0x84152244
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
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_KIERAN";
	
		case joaat("HAI_RUSTLING_02"):
			return "MAP_CARD_CAMP_SHADYBELLE_RUSTLING_UNCLE";
	
		case joaat("HAI_FISHING_02"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_FISHING_JAVIER";
	
		case joaat("HAI_HUNTING_06"):
			return "MAP_CARD_CAMP_SHADYBELLE_HUNTING_PEARSON";
	
		case joaat("HAI_DOMINOES_01"):
			return "MAP_CARD_CAMP_CLEMENSPOINT_DOMINOES_TILLY";
	
		default:
		
	}

	return "";
}

char* func_75( Param0,  Param1) // Position - 0x3670 Hash - 0x1051AE87 ^0xFAA6492F
{
	 Var0;
	Hash discoveryHash;

	Var0 = Param1;

	if (Param0 != -1)
	{
		discoveryHash = func_128(Param0);
	
		if (discoveryHash == 0 || MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash))
			Var0 = Param0;
	}

	if (Var0 == -1)
		return "";

	return MISC::VAR_STRING(0, Var0);
}

char* func_76(int iParam0) // Position - 0x36B9 Hash - 0x8ED29CCD ^0x90ADB47B
{
	if (!func_57(iParam0))
	{
		if (MISC::_IS_GLOBAL_BLOCK_VALID(4) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(4))
			return "FMMC_INV_ALID";
	
		return "REGION_INV";
	}

	return func_129(Global_1887363[iParam0 /*36*/].f_23);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(int iParam0) // Position - 0x36F9 Hash - 0xA17D549C ^0x740CE7BF
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

	if (func_1() == 0)
		return "FMMC_INV_ALID";

	return "No District Label!";
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(int iParam0) // Position - 0x37F9 Hash - 0xA17D549C ^0x36EB71B1
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

	if (func_1() == 0)
		return "FMMC_INV_ALID";

	return "No State Label!";
}

int func_79(int iParam0) // Position - 0x38F9 Hash - 0x4D13899D ^0x4D13899D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 122)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

Hash func_80(int iParam0) // Position - 0x39F5 Hash - 0x7BC98427 ^0xDB4AE89C
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(iParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return 0;

	return MISC::GET_HASH_KEY(str);
}

Hash func_81(int iParam0) // Position - 0x3A18 Hash - 0x11D24646 ^0x47A34381
{
	var unk;
	var unk9;

	TEXT_LABEL_ASSIGN_STRING(&unk, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(iParam0), 64);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return 0;

	TEXT_LABEL_ASSIGN_STRING(&unk9, "MAP_CARD_", 64);
	TEXT_LABEL_APPEND_STRING(&unk9, &unk, 64);
	TEXT_LABEL_APPEND_STRING(&unk9, "_DESC", 64);
	return MISC::GET_HASH_KEY(&unk9);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x3A53 Hash - 0xA17D549C ^0xC0753D2B
{
	switch (iParam0)
	{
		case 0:
			return "NM_PLAYLIST_RACE";
	
		case 1:
			return "NM_PLAYLIST_FEATURED_001";
	
		case 2:
			return "NM_PLAYLIST_ADVERSARY_SMALL";
	
		case 3:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM";
	
		case 4:
			return "NM_PLAYLIST_ADVERSARY_LARGE";
	
		case 5:
			return "NM_PLAYLIST_GUN_RUSH_TEAMS";
	
		case 6:
			return "NM_PLAYLIST_GUN_RUSH";
	
		case 7:
			return "NM_PLAYLIST_ELIMINATION_SMALL";
	
		case 8:
			return "NM_PLAYLIST_ELIMINATION_MEDIUM";
	
		case 9:
			return "NM_PLAYLIST_ELIMINATION_LARGE";
	
		case 10:
			return "NM_PLAYLIST_NOMINATED";
	
		case 11:
			return "NM_BUCKET_NOMINATED_SERIES_SMALL";
	
		case 12:
			return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
	
		case 13:
			return "NM_BUCKET_NOMINATED_SERIES_LARGE";
	
		case 15:
			return "NM_PLAYLIST_ORBIS_SERIES_1";
	
		case 16:
			return "NM_PLAYLIST_ORBIS_SERIES_2";
	
		case 17:
			return "NM_PLAYLIST_ORBIS_SERIES_3";
	
		case 18:
			return "NM_PLAYLIST_SHOOTOUT";
	
		case 19:
			return "NM_PLAYLIST_CAPTURE";
	
		case 20:
			return "NM_PLAYLIST_HARDCORE_SERIES";
	
		default:
		
	}

	return "NM_PLAYLIST_FFA";
}

Hash func_83(int iParam0) // Position - 0x3B6B Hash - 0xCD19285B ^0xFF8CE422
{
	int num;

	if (func_105(func_104(iParam0)))
		num = joaat("GIVER_NAME");
	else
		num = joaat("GIVER_STRANGER_NAME");

	return Global_1119235[iParam0 /*35*/].f_13[func_131(num, 1)];
}

char* func_84(int iParam0) // Position - 0x3BA4 Hash - 0xE6862179 ^0x47912C6
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
			return "SHOP_TITLE_GUS";
	
		case 37:
			return "BLIP_SHOP_HORSE";
	
		case 38:
			return "BLIP_SHOP_HORSE_FENCING";
	
		case 39:
			return "BLIP_SHOP_HORSE_SADDLE";
	
		case 40:
			return "BLIP_HOTEL_BED";
	
		case 41:
			return "BLIP_PHOTO_STUDIO";
	
		case 48:
			return "BLIP_MP_TRAVELLING_SALESWOMAN";
	
		case 49:
			return "BLIP_BUSINESS_MOONSHINE";
	
		case 50:
			return "BLIP_MOONSHINE_STILL";
	
		case 51:
			return "BLIP_MP_ROLE_NATURALIST";
	
		case 52:
			return "BLIP_SHOP_WARDROBE";
	
		case 53:
			return "BLIP_STABLE";
	
		case 54:
			return "BLIP_PROC_HOME";
	
		case 55:
			return "BLIP_PROC_HOME_LOCKED";
	
		case 56:
			return "BLIP_PROC_HOME";
	
		case 57:
			return "BLIP_AMBIENT_TELEGRAPH";
	
		case 58:
			return "BLIP_AMBIENT_COACH_TAXI";
	
		case 59:
			return "BLIP_AMBIENT_THEATRE";
	
		case 60:
			return "BLIP_REGION_CARAVAN";
	
		case 61:
			return "BLIP_EVENT_APPLESEED";
	
		case 62:
			return "BLIP_EVENT_CASTOR";
	
		case 63:
			return "BLIP_EVENT_RAILROAD_CAMP";
	
		case 64:
			return "BLIP_EVENT_RIGGS_CAMP";
	
		case 65:
			return "BLIP_REGION_HIDEOUT";
	
		case 66:
			return "BLIP_PROC_HOME";
	
		case 67:
			return "BLIP_MG_FISHING";
	
		case 68:
			return "BLIP_AMBIENT_THEATRE";
	
		case 69:
			return "BLIP_AMBIENT_THEATRE";
	
		case 75:
			return "BLIP_CAMP_EAT";
	
		case 76:
			return "BLIP_AMBIENT_TITHING";
	
		case 77:
			return "BLIP_SHOP_PEARSON";
	
		case 78:
			return "BLIP_CAMP_HITCH";
	
		case 79:
			return "BLIP_SUPPLIES_AMMO";
	
		case 80:
			return "BLIP_SUPPLIES_HEALTH";
	
		case 81:
			return "BLIP_SUPPLIES_FOOD";
	
		case 82:
			return "BLIP_MG_POKER";
	
		case 83:
			return "BLIP_MG_FIVE_FINGER_FILLET";
	
		case 84:
			return "BLIP_MG_DOMINOES";
	
		case 85:
			return "BLIP_REGION_HUNTING";
	
		case 86:
			return "BLIP_MG_FISHING";
	
		case 87:
			return "BLIP_ROBBERY_COACH";
	
		case 88:
			return "BLIP_REGION_HUNTING";
	
		case 89:
			return "BLIP_ROBBERY_BANK";
	
		case 90:
			return "BLIP_MG_DOMINOES";
	
		case 91:
			return "BLIP_AMBIENT_HERD";
	
		case 100:
			return "BLIP_MP_ROLE_MOONSHINER";
	
		default:
			return "";
	}

	return "";
}

int func_85(int iParam0) // Position - 0x40CE Hash - 0x1FE8A1EA ^0x1FE8A1EA
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
		case 49:
		case 50:
		case 53:
		case 59:
		case 68:
		case 69:
			return 1;
	
		case 54:
		case 60:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
			return 3;
	
		case 58:
			return 5;
	
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
			return 4;
	
		default:
		
	}

	return 0;
}

int func_86(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x4265 Hash - 0x4DC6667D ^0xBA61FD45
{
	int num;

	num = func_132();

	if (func_57(num))
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num /*36*/].f_4, vParam0))
			return num;

	return func_133(vParam0, bParam3);
}

struct<16> func_87(int iParam0) // Position - 0x42B3 Hash - 0xC2E42788 ^0x67C16149
{
	var unk;

	switch (iParam0)
	{
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_SAINTDENIS", 128);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_STRAWBERRY", 128);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_BLACKWATER", 128);
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_VALENTINE", 128);
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_RHODES", 128);
			break;
	
		default:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAP_CARD_TAXI_RHODES", 128);
			break;
	}

	return unk;
}

void func_88(var uParam0) // Position - 0x4328 Hash - 0x474C5977 ^0x4E547198
{
	BOOL flag;
	Hash hash;
	char* str;
	int num;
	int num2;

	flag = false;
	hash = 0;
	str = "";
	num = uParam0->f_33;

	if (!func_58(num))
		num = func_19(uParam0->f_19);

	num2 = func_61(num);

	if (func_134() || func_135() || func_136())
	{
		return;
	}
	else if (func_62(num) || func_63(num2))
	{
		if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
		else
			str = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
	
		flag = true;
	}
	else if (func_65(num2))
	{
		hash = func_66(num2);
	
		if (hash > 0)
		{
			flag = true;
			str = MISC::VAR_STRING(2, "LAW_MAP_UI_BOUNTY_CASH", hash);
		}
	}

	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, flag);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_12, str);
	return;
}

int func_89(Blip blParam0) // Position - 0x43F4 Hash - 0x8FD09826 ^0x8FD09826
{
	int i;
	int num;

	for (i = 0; i < Global_1900531; i = i + 1)
	{
		if (!func_67(Global_1900531[i /*2*/]))
		{
		}
		else if (Global_1900531[i /*2*/] == 2)
		{
			num = func_68(Global_1900531[i /*2*/]);
		
			if (func_69(num) && MAP::DOES_BLIP_EXIST(Global_1835011[num /*72*/].f_28) && Global_1835011[num /*72*/].f_28 == blParam0)
				return num;
		}
	}

	return -1;
}

Hash func_90(int iParam0) // Position - 0x4476 Hash - 0xB8EC44B7 ^0x823982D5
{
	switch (iParam0)
	{
		case joaat("hennigans_stead_camp"):
			return joaat("map_card_mp_camp_hannigans_stead");
	
		case joaat("rio_bravo_camp"):
			return joaat("map_card_mp_camp_rio_bravo");
	
		case joaat("roanoke_ridge_camp"):
			return joaat("map_card_mp_camp_roanoke");
	
		case joaat("great_plains_camp"):
			return joaat("map_card_mp_camp_great_plains");
	
		case joaat("cumberland_forest_camp"):
			return joaat("map_card_mp_camp_cumberland_forest");
	
		case joaat("tall_trees_camp"):
			return joaat("map_card_mp_camp_tall_trees");
	
		case joaat("cholla_springs_camp"):
			return joaat("map_card_mp_camp_cholla_springs");
	
		case joaat("grizzlies_camp"):
			return joaat("map_card_mp_camp_grizzlies");
	
		case joaat("gaptooth_ridge_camp"):
			return joaat("map_card_mp_camp_gaptooth_ridge");
	
		case joaat("bayou_nawas_camp"):
			return joaat("map_card_mp_camp_bayou_nwa");
	
		case joaat("scarlett_meadows_camp"):
			return joaat("map_card_mp_camp_scarlett");
	
		case joaat("heartland_camp"):
			return joaat("map_card_mp_camp_heartlands");
	
		case joaat("big_valley_camp"):
			return joaat("map_card_mp_camp_big_valley");
	
		default:
		
	}

	return joaat("map_card_mp_camp_heartlands");
}

void func_91(var uParam0) // Position - 0x4541 Hash - 0x4766FBA4 ^0xA9182FE5
{
	uParam0->f_30 = 0;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = 0;
	return;
}

int func_92(int iParam0) // Position - 0x455C Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case joaat("net_playlist_gun_rush_teams"):
			return 5;
	
		case joaat("net_playlist_orbis_series_3"):
			return 17;
	
		case joaat("net_playlist_featured_series_001"):
			return 1;
	
		case joaat("net_playlist_elimination_medium"):
			return 8;
	
		case joaat("net_playlist_adversary_large"):
			return 4;
	
		case -1516590035:
			return 20;
	
		case joaat("net_playlist_race_series"):
			return 0;
	
		case joaat("net_playlist_shootout"):
			return 18;
	
		case joaat("net_playlist_nominated_series_medium"):
			return 12;
	
		case joaat("net_playlist_gun_rush_free_for_all"):
			return 6;
	
		case joaat("net_playlist_elimination_large"):
			return 9;
	
		case joaat("net_playlist_elimination_small"):
			return 7;
	
		case joaat("net_playlist_nominated_series_small"):
			return 11;
	
		case joaat("net_playlist_nominated_series"):
			return 10;
	
		case joaat("net_playlist_nominated_series_large"):
			return 13;
	
		case joaat("net_playlist_private_series"):
			return 14;
	
		case joaat("net_playlist_capture"):
			return 19;
	
		case joaat("net_playlist_adversary_small"):
			return 2;
	
		case joaat("net_playlist_orbis_series_2"):
			return 16;
	
		case joaat("net_playlist_orbis_series_1"):
			return 15;
	
		case joaat("net_playlist_adversary_medium"):
			return 3;
	
		default:
		
	}

	return -1;
}

void func_93(int iParam0, int iParam1) // Position - 0x464C Hash - 0x8FAD5F74 ^0x8FAD5F74
{
	int num;
	int num2;
	int num3;

	!func_137(iParam0);
	num = 1;
	num2 = iParam0;

	if (iParam0 >= 10 && iParam0 <= 13)
		num = 0;

	if (iParam0 == 18)
		num2 = 3;

	if (iParam1 == 1 || iParam1 == 2)
		if (Global_1901671.f_786.f_1)
			num2 = func_138(iParam0);

	num3 = 0;

	if (num2 == 6 || num2 == 5 || num2 == 8 || num2 == 9)
		num3 = 2;

	func_139(iParam1);
	func_142(1, 32, num, func_140(num2), func_141(), num3, -1, false, 0, 0);
	return;
}

int func_94(int iParam0) // Position - 0x46F6 Hash - 0xB8EC44B7 ^0xDC8C5240
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
		case 46:
			return joaat("BLIP_MINIGAME");
	
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
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 53:
		case 59:
		case 68:
		case 69:
		case 99:
			return joaat("BLIP_STORE");
	
		case 70:
			return -1047712081;
	
		case 71:
			return joaat("blip_town");
	
		case 72:
			return joaat("BLIP_MISSION");
	
		case 73:
			return joaat("BLIP_CUTSCENE");
	
		case 92:
			return joaat("BLIP_PLAYER");
	
		case 93:
			return joaat("BLIP_PLAYLIST");
	
		case 94:
			return joaat("BLIP_FAST_TRAVEL");
	
		case 95:
			return joaat("BLIP_GFH_GIVER");
	
		case 96:
			return 1551310356;
	
		case 97:
			return joaat("BLIP_POSSE_CAMP");
	
		case 98:
			return joaat("BLIP_POSSE_LOCAL_CAMP");
	
		case 101:
			return joaat("blip_town");
	
		default:
		
	}

	return 0;
}

struct<2> func_95(Player plParam0) // Position - 0x48EB Hash - 0x9BA8C2A6 ^0xEC10CC00
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle);
	return gamerHandle;
}

const char* func_96(const char* sParam0, int iParam1) // Position - 0x48FF Hash - 0x7FAD1594 ^0xEEA099C0
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);

	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);

	return func_143(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_97(char* sParam0, var uParam1, var uParam2, int iParam3) // Position - 0x493D Hash - 0x601FC0E8 ^0x6879C515
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam1))
		return 1;

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 128);

	switch (iParam3)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&uParam1, iParam3), 128);
			return 4;
	
		case 1:
		case 2:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&uParam1))
				return 1;
		
			return func_144(sParam0, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uParam1), iParam3);
	
		default:
		
	}

	return 3;
}

Hash func_98(int iParam0) // Position - 0x49A3 Hash - 0xFBE6ACAA ^0xC8FB295B
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
		return NETWORK::_NETWORK_GET_RANK();

	return Global_1155150[iParam0 /*30*/];
}

void func_99(var uParam0, int iParam1) // Position - 0x49CF Hash - 0x8CE96CC3 ^0x8BAB58D
{
	int num;

	num = func_145(iParam1);

	if (num < 0)
		return;

	uParam0->f_30 = 1;
	uParam0->f_30.f_1 = 0;
	uParam0->f_30.f_2 = num;
	return;
}

int func_100(var uParam0) // Position - 0x49FC Hash - 0x797E2C82 ^0x797E2C82
{
	return func_146(13, uParam0);
}

BOOL func_101(int iParam0) // Position - 0x4A0C Hash - 0xA43326DA ^0xA43326DA
{
	return iParam0 >= 0 && iParam0 < 36;
}

int func_102(int iParam0) // Position - 0x4A22 Hash - 0xC69036C ^0xCCA4B427
{
	return Global_1110244.f_268.f_2911[iParam0 /*13*/].f_1;
}

int func_103(int iParam0) // Position - 0x4A3A Hash - 0x7647021A ^0xF0097466
{
	return Global_1119235[iParam0 /*35*/].f_1;
}

int func_104(int iParam0) // Position - 0x4A4C Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1119235[iParam0 /*35*/];
}

BOOL func_105(int iParam0) // Position - 0x4A5C Hash - 0xEFA378AD ^0x3A87BB30
{
	var unk;

	unk = { func_148(joaat("has_been_interacted_with"), func_147(iParam0)) };
	return func_149(unk);
}

Hash func_106(int iParam0, int iParam1) // Position - 0x4A7F Hash - 0x8B0C40CF ^0x7F70490A
{
	return Global_1119235[iParam0 /*35*/].f_2[func_150(iParam1, 1) /*2*/];
}

int func_107(int iParam0, int iParam1) // Position - 0x4A9A Hash - 0x49FA5991 ^0x7CCD3CC5
{
	return Global_1119235[iParam0 /*35*/].f_2[func_150(iParam1, 1) /*2*/].f_1;
}

Hash func_108(int iParam0, int iParam1) // Position - 0x4AB7 Hash - 0x8B0C40CF ^0x5284F206
{
	return Global_1119235[iParam0 /*35*/].f_13[func_131(iParam1, 1)];
}

void func_109(int iParam0) // Position - 0x4AD2 Hash - 0x5523D3A4 ^0xADC509A5
{
	int num;

	if (iParam0 == -1)
		return;

	num = iParam0;

	if (num <= -1)
		return;

	if (num > 21)
		return;

	func_151(Global_1901671.f_126[num /*2*/].f_1, Global_1901671.f_126[num /*2*/]);
	return;
}

BOOL func_110() // Position - 0x4B14 Hash - 0xA5A53F42 ^0x62B332A8
{
	return func_152(Global_1572887.f_8, 1);
}

char* func_111(Hash hParam0, var uParam1) // Position - 0x4B27 Hash - 0x389E344A ^0xCD50DF82
{
	char* cachedDescription;

	if (Global_265213.f_122353.f_130 > 0 && Global_265213.f_122353.f_130 != hParam0)
	{
		*uParam1 = 5;
		return "";
	}

	switch (*Global_265213.f_122353)
	{
		case 0:
			if (!NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(hParam0))
			{
				func_153(1);
			}
			else
			{
				NETWORK::UGC_RELEASE_ALL_CACHED_DESCRIPTIONS();
				func_153(1);
			}
			break;
	
		case 1:
			NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(hParam0);
			func_153(2);
			break;
	
		case 2:
			if (!NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(hParam0))
			{
				*uParam1 = 1;
				return "";
			}
		
			if (NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(hParam0))
			{
				func_153(3);
			}
			else
			{
				func_153(0);
				*uParam1 = 3;
				return "";
			}
			break;
	
		case 3:
			cachedDescription = NETWORK::UGC_GET_CACHED_DESCRIPTION(hParam0, 512);
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(hParam0);
			func_153(0);
			*uParam1 = 2;
			return cachedDescription;
	}

	*uParam1 = 1;
	return "";
}

BOOL func_112(int iParam0) // Position - 0x4C0B Hash - 0x6430C01F ^0x7E62419A
{
	if (!func_57(iParam0))
		return false;

	return func_119(iParam0, 33554432);
}

Hash func_113() // Position - 0x4C2C Hash - 0x4228A1C2 ^0xC94C7CFB
{
	return Global_1939102.f_26;
}

BOOL func_114(int iParam0) // Position - 0x4C3A Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_154(iParam0))
		return false;

	return func_155(iParam0);
}

int func_115(int iParam0) // Position - 0x4C56 Hash - 0x4D13899D ^0x4D13899D
{
	if (iParam0 < 0)
		return -1;
	else if (iParam0 <= 10)
		return 0;
	else if (iParam0 <= 30)
		return 1;
	else if (iParam0 <= 34)
		return 2;
	else if (iParam0 <= 38)
		return 3;
	else if (iParam0 <= 41)
		return 4;
	else if (iParam0 <= 52)
		return 7;
	else if (iParam0 <= 61)
		return 6;
	else if (iParam0 <= 66)
		return 8;
	else if (iParam0 <= 81)
		return 9;
	else if (iParam0 <= 98)
		return 10;
	else if (iParam0 <= 112)
		return 11;
	else if (iParam0 <= 119)
		return 12;
	else if (iParam0 <= 121)
		return 13;
	else if (iParam0 <= 126)
		return 14;
	else if (iParam0 <= 134)
		return 15;
	else if (iParam0 <= 138)
		return 16;

	return -1;
}

int func_116(int iParam0, BOOL bParam1) // Position - 0x4D52 Hash - 0x57DE22AD ^0x88ABC039
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
			if (!bParam1 || func_1() != -1)
				return joaat("LAW_REGION_GREAT_PLAINS");
		
			if (func_114(44))
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
			if (!bParam1 || func_1() != -1)
				return joaat("LAW_REGION_TALL_TREES");
		
			if (func_114(44))
				return joaat("LAW_REGION_TALL_TREES");
			else
				return joaat("LAW_REGION_TALL_TREES_MAINGAME");
			break;
	
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_1() != -1)
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
		
			if (func_114(44))
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS");
			else
				return joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME");
			break;
	}

	return 0;
}

BOOL func_117(int iParam0, BOOL bParam1) // Position - 0x4ECC Hash - 0x420CBA68 ^0x9F9619A9
{
	if (!func_58(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_271[iParam0] && bParam1 != false;

	return Global_1072759.f_21335[iParam0] && bParam1 != false;
}

BOOL func_118(int iParam0, int iParam1) // Position - 0x4F0E Hash - 0x9AD134EA ^0x3BFBD1FE
{
	if (!func_65(iParam0))
		return false;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/].f_5 && iParam1 != false;

	return Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1 != false;
}

BOOL func_119(int iParam0, BOOL bParam1) // Position - 0x4F53 Hash - 0x34341F7C ^0xD1267D8C
{
	if (Global_1572887.f_14 == -1)
		return Global_8130[iParam0 /*11*/] && bParam1 != false;

	return Global_1072759.f_19611[iParam0 /*11*/] && bParam1 != false;
}

int func_120(int iParam0) // Position - 0x4F84 Hash - 0xDE3AB7BF ^0xBF88E2D7
{
	int i;
	var gamerHandle;
	int bountyData;

	if (!func_65(iParam0))
		return -1;

	if (Global_1572887.f_14 == -1)
		return Global_38.f_198[iParam0 /*12*/];

	i = 0;
	gamerHandle = { func_95(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&gamerHandle, &bountyData);

	for (i = 0; i < 6; i = i + 1)
	{
		Global_1072759.f_21262[i /*12*/] = bountyData;
	}

	return Global_1072759.f_21262[iParam0 /*12*/];
}

BOOL func_121(int iParam0) // Position - 0x4FF2 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
	
		default:
		
	}

	return false;
}

int func_122(int iParam0) // Position - 0x5031 Hash - 0xE34A477A ^0xE34A477A
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
	
		case 3:
			return Global_1072759.f_573.f_2103;
	
		case 4:
			return Global_1072759.f_573.f_12605;
	
		case 5:
			return Global_1072759.f_573.f_12907;
	
		case 6:
			return Global_1072759.f_573.f_15909;
	
		case 7:
			return Global_1072759.f_573.f_16511;
	
		case 8:
			return Global_1072759.f_573.f_18913;
	
		default:
		
	}

	return -1;
}

BOOL func_123(int iParam0, var uParam1, Any* panParam2) // Position - 0x50C7 Hash - 0xEDAACC68 ^0x7998E850
{
	if (!func_67(iParam0))
		return false;

	func_156(panParam2);

	switch (iParam0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 3:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_602[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 4:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_2104[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 5:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12606[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 6:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_12908[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 7:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_15910[iParam0.f_1 /*3*/], 3);
			return true;
	
		case 8:
			MISC::COPY_SCRIPT_STRUCT(panParam2, &Global_1072759.f_573.f_16512[iParam0.f_1 /*3*/], 3);
			return true;
	
		default:
		
	}

	return false;
}

var func_124(int iParam0) // Position - 0x51D2 Hash - 0x73F5272E ^0xEA57E1AD
{
	var unk;

	if (!func_57(iParam0))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "UNK", 8);
		return unk;
	}

	return Global_1887363[iParam0 /*36*/].f_23;
}

char* func_125(int iParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4) // Position - 0x51FB Hash - 0x405A9C8E ^0xFB6931EA
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
			
				case 81:
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
				case 111:
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
			return "HOTEL";
	
		case 41:
			return "PHOTOGRAPHER";
	
		case 52:
			return "WARDROBE";
	
		case 58:
			return "STAGECOACH";
	
		case 59:
			return "MAGICLANTERN";
	
		case 68:
			return "VAUDEVILLE";
	
		case 69:
			return "VAUDEVILLE";
	}

	return "";
}

int func_126(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5440 Hash - 0x19DF3458 ^0x19DF3458
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_157(*uParam0, 0f, 0f, 0f))
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

	if (bParam4)
		vector = { *uParam0 };

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

char* func_127(var uParam0) // Position - 0x5544 Hash - 0x85B8C798 ^0x25F2DDEE
{
	switch (func_158(uParam0))
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

Hash func_128(int iParam0) // Position - 0x55DA Hash - 0xB8EC44B7 ^0xC7C8255B
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

char* func_129(var uParam0) // Position - 0x5D69 Hash - 0x7C37B7CB ^0x5DC521D2
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0_0(int iParam0) // Position - 0x5D7D Hash - 0xA17D549C ^0xB677E889
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

int func_131(int iParam0, int iParam1) // Position - 0x5E1E Hash - 0x87CFB103 ^0x87CFB103
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

int func_132() // Position - 0x5E53 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1893611.f_2;
}

int func_133(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x5E61 Hash - 0xA4504257 ^0xA4504257
{
	int num;
	int num2;
	int num3;
	BOOL flag;
	int num4;

	num = func_159(vParam0);
	num2 = -1;

	if (Global_1893594[num] > 0)
	{
		num3 = Global_1893594[num] - 1;
		flag = false;
	
		while (num3 >= 0 && !flag)
		{
			num4 = Global_1892777[num /*51*/][num3];
		
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[num4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[num4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[num4 /*36*/].f_21)
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

BOOL func_134() // Position - 0x5F18 Hash - 0xD2F03408 ^0xD2F03408
{
	return Global_263042[Global_1295666 /*65*/] > 2;
}

BOOL func_135() // Position - 0x5F2C Hash - 0x9D650775 ^0xA87234F9
{
	if (Global_1048576)
		return 1;

	if (Global_1572887.f_5)
		return 1;

	if (Global_2883584)
		return 1;

	if (Global_1048577)
		return 1;

	if (!func_67(Global_1051268) && Global_1572887.f_8 & 1 != 0)
		return 1;

	return 0;
}

BOOL func_136() // Position - 0x5F84 Hash - 0x30C87E84 ^0xDD5D4FB9
{
	if (func_160(255) <= 2)
		return false;

	if (Global_265213.f_122484.f_80.f_16.f_2 != -504335712)
		return false;

	if (!func_161(Global_265213.f_122484.f_80.f_16.f_3))
		return false;

	return true;
}

BOOL func_137(int iParam0) // Position - 0x5FD1 Hash - 0x6E01F166 ^0xA7F95C2A
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_162(iParam0));
}

int func_138(int iParam0) // Position - 0x5FE3 Hash - 0x304DAB29 ^0x304DAB29
{
	int num;
	int num2;
	var unk;
	int randomIntInRange;
	int num3;

	num = 0;
	num2 = 1;

	if (func_163() > 0)
		num2 = func_163();

	unk = 3;

	switch (iParam0)
	{
		case 8:
			if (func_137(7) && func_164(7) >= num2)
			{
				unk[num] = 7;
				num = num + 1;
			}
		
			if (func_137(8) && func_164(8) >= num2)
			{
				unk[num] = 8;
				num = num + 1;
			}
		
			if (func_137(9) && func_164(9) >= num2)
			{
				unk[num] = 9;
				num = num + 1;
			}
			break;
	
		case 15:
			if (func_137(15) && func_164(15) >= num2)
			{
				unk[num] = 15;
				num = num + 1;
			}
		
			if (func_137(16) && func_164(16) >= num2)
			{
				unk[num] = 16;
				num = num + 1;
			}
			break;
	
		case 18:
			if (func_137(2) && func_164(2) >= num2)
			{
				unk[num] = 2;
				num = num + 1;
			}
		
			if (func_137(3) && func_164(3) >= num2)
			{
				unk[num] = 3;
				num = num + 1;
			}
		
			if (func_137(4) && func_164(4) >= num2)
			{
				unk[num] = 4;
				num = num + 1;
			}
			break;
	
		default:
			if (func_137(iParam0) && func_164(iParam0) >= num2)
			{
				unk[num] = iParam0;
				num = num + 1;
			}
			break;
	}

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	num3 = randomIntInRange % num;

	if (num3 < 0 || num3 >= 3)
		num3 = 0;

	return unk[num3];
}

void func_139(int iParam0) // Position - 0x6197 Hash - 0x42868A8 ^0xDDB5D8AF
{
	Global_1572887.f_72.f_14 = iParam0;
	return;
}

int func_140(int iParam0) // Position - 0x61A9 Hash - 0x6F720B9B ^0x6F720B9B
{
	int i;

	if (iParam0 <= -1)
		return 0;

	if (iParam0 == 10)
		return 6;

	if (iParam0 == 11)
		return 5;

	if (iParam0 == 12)
		return 7;

	if (iParam0 == 13)
		return 8;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13510[i] == Global_265189.f_1[iParam0])
			return Global_265213.f_107995.f_13575[i];
	}

	return 0;
}

struct<2> func_141() // Position - 0x622C Hash - 0x14C8EF15 ^0x9845E788
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	return unk;
}

int func_142(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, BOOL bParam8, int iParam9, int iParam10) // Position - 0x6245 Hash - 0x73EAB6F2 ^0xF20333AB
{
	int num;
	var unk22;
	var unk30;

	if (!func_165(iParam2, iParam3))
		return 0;

	if (func_166() && Global_1572887.f_72.f_40 != 9)
		return 0;

	if (!func_167(Global_1295666.f_5))
		return 0;

	num.f_3 = -1;
	num.f_3.f_1 = -1;
	num.f_5 = 1;
	num.f_6 = 7;
	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = 1;
	num.f_3 = { uParam4 };
	func_168(&num);
	func_169(iParam10, true);
	func_170(iParam2, iParam3, iParam7, true);
	func_171(uParam4, true);
	func_172(iParam6);
	func_173(iParam9);
	func_174();

	if (func_67(uParam4) && !func_175() && Global_1220759 == -1)
		func_176(uParam4);

	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);

	if (iParam2 != 2)
		func_177();

	if (func_175())
	{
		func_178(uParam4);
	}
	else if (iParam2 == 3)
	{
		if (!func_179(268435456))
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("player_menu")))
				func_180(1, false);
	}
	else
	{
		if (iParam2 == 2)
		{
			unk30 = 255;
			unk30.f_13 = 2147483647;
			unk30.f_16.f_2 = -504335712;
			unk30.f_16.f_4 = 3;
			unk30.f_21 = -1;
			unk30.f_25 = 1;
			unk30.f_26 = 1;
			unk30.f_27 = 1;
			unk30.f_28 = 32;
			unk30.f_29 = 1;
			unk30.f_30 = -2;
			unk30.f_42.f_5 = -1;
			unk30.f_48 = -1;
			unk30.f_48.f_1 = -1;
			unk30.f_50.f_3 = -1;
			func_181(&unk30, iParam3, -1, -1, 3);
			TEXT_LABEL_ASSIGN_STRING(&unk22, func_182(&(unk30.f_32), joaat("COLOR_PURE_WHITE")), 64);
		}
		else if (iParam2 == 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_183(iParam3)), 64);
		}
		else
		{
			TEXT_LABEL_ASSIGN_STRING(&unk22, MISC::VAR_STRING(2, func_185(func_184(), iParam3)), 64);
		}
	
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, &unk22);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_117, MISC::VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	}

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_186(255, false) && !bParam8)
		func_187("NM_MATCHMAKING_WARNING");

	func_188(10);
	return 1;
}

const char* func_143(const char* sParam0, int iParam1) // Position - 0x64C8 Hash - 0x9E99F03 ^0xBD6857F6
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_144(char* sParam0, Player plParam1, int iParam2) // Position - 0x64E2 Hash - 0x185B846 ^0xF0CED0A5
{
	Player player;
	int textureDownloadId;
	int num;
	var gamerHandle;
	int personaPhotoLocalCacheType;
	int statusOfTextureDownload;
	const char* name;

	if (plParam1 < 0 || plParam1 >= 32)
		return 1;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam1);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return 1;

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 128);
	num = func_189(plParam1, iParam2);

	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(plParam1), &gamerHandle);
		
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&gamerHandle))
				return 1;
		
			TEXT_LABEL_ASSIGN_STRING(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&gamerHandle, iParam2), 128);
			return 4;
	
		case 1:
		case 2:
			switch (num)
			{
				case 0:
					return 2;
			
				case 1:
					return 3;
			
				case 2:
					personaPhotoLocalCacheType = func_190(iParam2);
					textureDownloadId = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(plParam1, personaPhotoLocalCacheType);
				
					if (textureDownloadId == -1)
					{
						return 3;
					}
					else if (textureDownloadId == 0)
					{
						func_191(plParam1, iParam2, 0);
						return 1;
					}
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId)))
						func_191(plParam1, iParam2, 3);
					else
						func_191(plParam1, iParam2, 4);
				
					func_192(plParam1, iParam2, textureDownloadId);
					break;
			
				case 3:
					textureDownloadId = func_193(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_191(plParam1, iParam2, 0);
						return 1;
					}
				
					statusOfTextureDownload = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(textureDownloadId);
				
					switch (statusOfTextureDownload)
					{
						case 0:
							func_191(plParam1, iParam2, 4);
							return 3;
					
						case 1:
							return 3;
					
						case 2:
							func_191(plParam1, iParam2, 0);
							return 1;
					
						default:
							break;
					}
					break;
			
				case 4:
					textureDownloadId = func_193(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_191(plParam1, iParam2, 0);
						return 1;
					}
				
					name = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId);
				
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(name))
						return 3;
				
					func_191(plParam1, iParam2, 5);
					break;
			
				case 5:
					textureDownloadId = func_193(plParam1, iParam2);
				
					if (textureDownloadId == 0)
					{
						func_191(plParam1, iParam2, 0);
						return 1;
					}
				
					TEXT_LABEL_ASSIGN_STRING(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(textureDownloadId), 128);
					return 4;
			
				default:
					return 1;
			}
			break;
	}

	return 3;
}

int func_145(int iParam0) // Position - 0x66D0 Hash - 0x6E9716ED ^0xF6B3847A
{
	int i;

	if (iParam0 == 0)
		return -1;

	for (i = 0; i < Global_265213.f_2; i = i + 1)
	{
		if (Global_265213.f_57505[i /*8*/] == iParam0)
			return i;
	
		if (Global_265213.f_4[i /*46*/].f_23 == iParam0)
			return i;
	}

	return -1;
}

int func_146(int iParam0, var uParam1) // Position - 0x6727 Hash - 0x5550484A ^0x2912C0B2
{
	var unk;

	if (func_194(iParam0, uParam1, &unk))
		return unk.f_1;

	return -1;
}

int func_147(int iParam0) // Position - 0x6744 Hash - 0xB8EC44B7 ^0x7DFCC269
{
	switch (iParam0)
	{
		case joaat("VALENTINE_BOUNTY_BOARD"):
			return joaat("valentine_sheriff_bounty_board");
	
		case joaat("ANNESBURG_BOUNTY_BOARD"):
			return joaat("annesburg_sheriff_bounty_board");
	
		case joaat("WALLACE_TRAIN_CLERK"):
			return joaat("gfh_train_clerk_wallace");
	
		case joaat("alden"):
			return joaat("gfh_alden");
	
		case joaat("sadie_adler"):
			return joaat("gfh_sadie_adler");
	
		case joaat("RHODES_BOUNTY_BOARD"):
			return joaat("rhodes_sheriff_bounty_board");
	
		case joaat("anthony_foreman"):
			return joaat("gfh_anthony_foreman");
	
		case joaat("ABERDEEN_PIG_FARMERS"):
			return joaat("gfh_aberdeen_pig_farmers");
	
		case joaat("SEAN_MACQUIRE"):
			return joaat("gfh_sean_macquire");
	
		case joaat("SHERIFF_FREEMAN"):
			return joaat("gfh_sheriff_freeman");
	
		case joaat("WALLACE_BOUNTY_BOARD"):
			return joaat("wallace_station_bounty_board");
	
		case joaat("hector"):
			return joaat("gfh_hector");
	
		case joaat("ARMADILLO_BOUNTY_BOARD"):
			return joaat("armadillo_sheriff_bounty_board");
	
		case -465704507:
			return -1719093715;
	
		case joaat("marcel"):
			return joaat("gfh_marcel");
	
		case joaat("the_boy"):
			return joaat("gfh_the_boy");
	
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return joaat("gfh_thomas_skiff_captain");
	
		case joaat("black_belle"):
			return joaat("gfh_black_belle");
	
		case joaat("JOSIAH_TRELAWNY"):
			return joaat("gfh_josiah_trelawny");
	
		case joaat("VAN_HORN_BOUNTY_BOARD"):
			return joaat("van_horn_post_office_bounty_board");
	
		case joaat("JOE"):
			return joaat("gfh_joe");
	
		case joaat("OBEDIAH_HINTON"):
			return joaat("gfh_obediah_hinton");
	
		case joaat("BENEDICT_POINT_BOUNTY_BOARD"):
			return joaat("benedict_point_station_bounty_board");
	
		case joaat("EMERALD_RANCH_BOUNTY_BOARD"):
			return joaat("emerald_ranch_station_bounty_board");
	
		case joaat("LANGTON"):
			return joaat("gfh_langton");
	
		case joaat("FLACO_HERNANDEZ"):
			return joaat("gfh_flaco_hernandez");
	
		case joaat("MAMMA_WATSON"):
			return joaat("gfh_mamma_watson");
	
		case joaat("WAR_VET"):
			return joaat("gfh_war_vet");
	
		case joaat("BLACKWATER_BOUNTY_BOARD"):
			return joaat("blackwater_sheriff_bounty_board");
	
		case joaat("bonnie"):
			return joaat("gfh_bonnie");
	
		case joaat("RIGGS_BOUNTY_BOARD"):
			return joaat("riggs_station_bounty_board");
	
		case joaat("TUMBLEWEED_BOUNTY_BOARD"):
			return joaat("tumbleweed_sheriff_bounty_board");
	
		case joaat("STRAWBERRY_BOUNTY_BOARD"):
			return joaat("strawberry_sheriff_bounty_board");
	
		case joaat("moonshiner"):
			return joaat("gfh_maggie");
	
		case joaat("SAINT_DENIS_BOUNTY_BOARD"):
			return joaat("saint_denis_sheriff_bounty_board");
	
		case joaat("shaky"):
			return joaat("gfh_shaky");
	
		case joaat("cripps"):
			return joaat("gfh_cripps");
	
		default:
		
	}

	return 0;
}

struct<2> func_148(int iParam0, int iParam1) // Position - 0x695E Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_149(var uParam0, var uParam1) // Position - 0x6974 Hash - 0xC2D05546 ^0x3AF9A62A
{
	int value;

	if (!STATS::STAT_ID_IS_VALID(&uParam0))
		return 0;

	if (!STATS::STAT_ID_GET_BOOL(&uParam0, &value))
		return 0;

	return value;
}

int func_150(int iParam0, int iParam1) // Position - 0x699C Hash - 0xD8C55C5 ^0xD8C55C5
{
	switch (iParam0)
	{
		case joaat("SECONDARY"):
			return 2;
	
		case joaat("PRIMARY"):
			return 1;
	
		case joaat("NONE"):
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_151(int iParam0, int iParam1) // Position - 0x69DB Hash - 0x30482C6 ^0x727EC520
{
	int num;

	if (iParam0 != 0)
	{
		num = iParam0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_1556.f_44.f_104, func_195(num));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_44.f_103, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_44.f_103, false);
	}

	if (iParam1 != 0)
	{
		num = iParam1;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940252.f_1556.f_44.f_101, func_195(num));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_44.f_100, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940252.f_1556.f_44.f_100, false);
	}

	return;
}

BOOL func_152(int iParam0, int iParam1) // Position - 0x6A67 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_153(int iParam0) // Position - 0x6A76 Hash - 0xA5BA2487 ^0xF0BFD693
{
	Global_265213.f_122353 = iParam0;
	return;
}

BOOL func_154(int iParam0) // Position - 0x6A8A Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_155(int iParam0) // Position - 0x6A9D Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_38.f_3651[num2], offset);
}

void func_156(Any* panParam0) // Position - 0x6AC7 Hash - 0xE2B2004A ^0x20B50C0B
{
	*panParam0 = 0;
	panParam0->f_1 = -1;
	panParam0->f_2 = -1;
	return;
}

BOOL func_157(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x6ADD Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

int func_158(int iParam0) // Position - 0x6B06 Hash - 0xFE841B01 ^0xFE841B01
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
	
		case 39:
			return 8;
	
		case 45:
			return 0;
	
		case 63:
			return 4;
	
		case 76:
			return 1;
	
		case 84:
			return 6;
	
		case 104:
			return 2;
	
		default:
		
	}

	return -1;
}

int func_159(var uParam0, var uParam1, var uParam2) // Position - 0x6B7C Hash - 0x5486635E ^0x2FAAB3B2
{
	int num;

	num = func_196(uParam0, 0f, 0f, 0, 2);
	return func_196(uParam0, Global_1892764[num /*3*/].f_1, Global_1892764[num /*3*/].f_2, Global_1892764[num /*3*/], 4);
}

int func_160(Player plParam0) // Position - 0x6BB7 Hash - 0x87F65B8F ^0xF97DC292
{
	if (plParam0 == 255)
		plParam0 = Global_1295666.f_5;

	return Global_263042[plParam0 /*65*/];
}

BOOL func_161(int iParam0) // Position - 0x6BD6 Hash - 0x92B1FA90 ^0xB975289D
{
	return iParam0 == -1759663922 || iParam0 == -318976023 || iParam0 == 772881414 || iParam0 == 31269700 || iParam0 == -133550749;
}

Hash func_162(int iParam0) // Position - 0x6C1E Hash - 0xB8EC44B7 ^0x67EA4285
{
	switch (iParam0)
	{
		case 0:
			return joaat("net_playlist_race_series");
	
		case 1:
			return joaat("net_playlist_featured_series_001");
	
		case 2:
			return joaat("net_playlist_adversary_small");
	
		case 3:
			return joaat("net_playlist_adversary_medium");
	
		case 4:
			return joaat("net_playlist_adversary_large");
	
		case 5:
			return joaat("net_playlist_gun_rush_teams");
	
		case 6:
			return joaat("net_playlist_gun_rush_free_for_all");
	
		case 7:
			return joaat("net_playlist_elimination_small");
	
		case 8:
			return joaat("net_playlist_elimination_medium");
	
		case 9:
			return joaat("net_playlist_elimination_large");
	
		case 10:
			return joaat("net_playlist_nominated_series");
	
		case 11:
			return joaat("net_playlist_nominated_series_small");
	
		case 12:
			return joaat("net_playlist_nominated_series_medium");
	
		case 13:
			return joaat("net_playlist_nominated_series_large");
	
		case 14:
			return joaat("net_playlist_private_series");
	
		case 15:
			return joaat("net_playlist_orbis_series_1");
	
		case 16:
			return joaat("net_playlist_orbis_series_2");
	
		case 17:
			return joaat("net_playlist_orbis_series_3");
	
		case 18:
			return joaat("net_playlist_shootout");
	
		case 19:
			return joaat("net_playlist_capture");
	
		case 20:
			return -1516590035;
	
		default:
		
	}

	return 0;
}

int func_163() // Position - 0x6D55 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3673;
}

int func_164(int iParam0) // Position - 0x6D64 Hash - 0x51E9B362 ^0x51E9B362
{
	int i;

	if (iParam0 == 10)
		return 8;

	if (iParam0 == 11)
		return 4;

	if (iParam0 == 12)
		return 16;

	if (iParam0 == 13)
		return 32;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13510[i] == Global_265189.f_1[iParam0])
			return Global_265213.f_107995.f_1028[i /*194*/].f_193;
	}

	return -1;
}

BOOL func_165(int iParam0, int iParam1) // Position - 0x6DE1 Hash - 0x65A17ECB ^0x65A17ECB
{
	if (iParam0 == 0 || iParam0 == 3)
		return iParam1 != -1;

	return iParam1 != 0;
}

BOOL func_166() // Position - 0x6E05 Hash - 0x89C3DDB ^0xCEF7E29D
{
	return Global_1572887.f_72.f_40 != 1;
}

BOOL func_167(Player plParam0) // Position - 0x6E17 Hash - 0xA70D0238 ^0x72CB5344
{
	Any gangId;

	gangId = GANG::NETWORK_GET_GANG_ID(plParam0);

	if (GANG::NETWORK_IS_GANG_ACTIVE(gangId) && !GANG::NETWORK_IS_GANG_LEADER(plParam0))
		return false;

	return true;
}

void func_168(Any* panParam0) // Position - 0x6E41 Hash - 0x53BB36E1 ^0x2C22C04D
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), panParam0, 22);
	return;
}

void func_169(int iParam0, BOOL bParam1) // Position - 0x6E59 Hash - 0x8AA8EE1E ^0xB92D42FE
{
	Global_1572887.f_72.f_39 = iParam0;

	if (bParam1)
		func_197();

	return;
}

void func_170(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x6E74 Hash - 0x2754B9DE ^0x91E90DEF
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;

	if (bParam3)
		func_197();

	return;
}

void func_171(var uParam0, var uParam1, BOOL bParam2) // Position - 0x6EA1 Hash - 0xAF33A640 ^0xBEF9E753
{
	Global_1572887.f_72.f_11 = { uParam0 };

	if (bParam2)
		func_197();

	return;
}

void func_172(int iParam0) // Position - 0x6EC0 Hash - 0x42868A8 ^0xF23EAC3A
{
	Global_1572887.f_72.f_15 = iParam0;
	return;
}

void func_173(int iParam0) // Position - 0x6ED2 Hash - 0x42868A8 ^0x730FDE49
{
	Global_1572887.f_72.f_13 = iParam0;
	return;
}

void func_174() // Position - 0x6EE4 Hash - 0xA79E77AA ^0xC668C73F
{
	Ped ped;
	var entityCoords;

	ped = PLAYER::PLAYER_PED_ID();

	if (PED::IS_PED_INJURED(ped))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(ped, false, false) };
	Global_1572887.f_72.f_49 = { entityCoords };
	return;
}

BOOL func_175() // Position - 0x6F18 Hash - 0x47D626CF ^0x5FEDB532
{
	if (func_184() != 0)
		return false;

	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
		return false;

	return true;
}

int func_176(var uParam0, var uParam1) // Position - 0x6F4E Hash - 0xC6528C89 ^0xC6528C89
{
	if (func_198())
		return 0;

	if (!func_67(uParam0))
		return 0;

	Global_1051268 = { uParam0 };
	return 1;
}

void func_177() // Position - 0x6F7C Hash - 0xD40F8981 ^0x8FB474F8
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
	return;
}

void func_178(var uParam0, var uParam1) // Position - 0x6F94 Hash - 0x3C794607 ^0x6EB493EB
{
	int num;
	int num2;
	int num3;
	var unk;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_117);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	num = func_199(uParam0);

	if (num == -1)
		return;

	num2 = func_200(num);

	if (num2 == -1)
		return;

	num3 = func_201(num);
	unk = { func_202(num2, num3) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &unk));
	return;
}

BOOL func_179(int iParam0) // Position - 0x703C Hash - 0xA1D29AFD ^0x462299BE
{
	return Global_1572887.f_72.f_15 && iParam0 != false;
}

int func_180(int iParam0, BOOL bParam1) // Position - 0x7051 Hash - 0x31DB738A ^0x31DB738A
{
	if (bParam1)
		func_203();

	if (!func_204(bParam1, bParam1, !bParam1))
		return 0;

	func_205(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_181(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x708D Hash - 0x1DAAF101 ^0x7B4D5C35
{
	int num;
	int num2;
	int num3;

	if (iParam1 == 0)
		return 0;

	if (uParam0->f_11 == iParam1)
	{
		func_206(uParam0, 4194304);
		return 1;
	}

	num = func_145(iParam1);

	if (num == -1)
		return 0;

	TEXT_LABEL_COPY(&(uParam0->f_22), { Global_265213.f_4[num /*46*/] }, 3);
	uParam0->f_32 = { Global_265213.f_4[num /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_4[num /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_4[num /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_4[num /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_57505[num /*8*/];
	uParam0->f_56 = { Global_265213.f_4[num /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_4[num /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_4[num /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_4[num /*46*/].f_28;
	uParam0->f_16 = 1;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_4[num /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_4[num /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_4[num /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_4[num /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_4[num /*46*/].f_15 };
	TEXT_LABEL_COPY(&(uParam0->f_3), { Global_265213.f_4[num /*46*/].f_4 }, 8);
	func_207(&Global_265213.f_4[num /*46*/]);

	if (iParam2 != -1)
	{
		if (uParam0->f_16.f_2 == -933924539 && func_208(iParam2) || uParam0->f_16.f_2 == 395262693 && func_209(iParam2))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}

	if (iParam3 > 0)
		uParam0->f_25 = iParam3;

	num2 = func_210(Global_265213.f_57505[num /*8*/]);
	num3 = { func_211(uParam0->f_12) };

	if (num2 != -1)
	{
		uParam0->f_48 = { func_212(num2) };
	}
	else if (func_213(uParam0->f_12))
	{
		uParam0->f_48 = { func_215(func_214(uParam0->f_12)) };
	}
	else if (num3.f_1 != -1 && num3 != -1)
	{
		uParam0->f_48 = { func_216(&num3) };
	}
	else if (uParam0->f_16.f_3 == 31269700)
	{
		uParam0->f_48 = { func_217(640937726) };
	}
	else if (uParam0->f_16.f_3 == -698288936)
	{
		uParam0->f_48 = { func_217(1357993786) };
	}
	else
	{
		uParam0->f_48 = { func_218(uParam0->f_11) };
	
		if (!func_67(uParam0->f_48))
			uParam0->f_48 = { func_217(func_219(uParam0->f_16.f_2)) };
	}

	func_220(uParam0);
	func_206(uParam0, 4194304);
	return 1;
}

const char* func_182(var uParam0, int iParam1) // Position - 0x7353 Hash - 0xB0CFF0C3 ^0x7B1F4ED4
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", uParam0);

	return func_143(MISC::VAR_STRING(10, "LITERAL_STRING", uParam0), iParam1);
}

char* func_183(int iParam0) // Position - 0x7389 Hash - 0x27A86066 ^0x446BD096
{
	int num;

	num = func_221(iParam0);

	if (num == Global_265189.f_1[0])
		return "NM_BUCKET_RACE";

	if (num == Global_265189.f_1[1])
		return "NET_PLAYLIST_FEATURED_SERIES_001";

	if (num == Global_265189.f_1[5])
		return "NET_PLAYLIST_SPECIAL_SERIES_1";

	if (num == Global_265189.f_1[6])
		return "NET_PLAYLIST_SPECIAL_SERIES_2";

	if (num == Global_265189.f_1[7])
		return "NET_PLAYLIST_ELIMINATION_SMALL";

	if (num == Global_265189.f_1[8])
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";

	if (num == Global_265189.f_1[9])
		return "NET_PLAYLIST_ELIMINATION_LARGE";

	if (num == Global_265189.f_1[2])
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";

	if (num == Global_265189.f_1[3])
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";

	if (num == Global_265189.f_1[4])
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";

	if (num == Global_265189.f_1[15])
		return "NM_BUCKET_ORBIS_SERIES_1";

	if (num == Global_265189.f_1[16])
		return "NM_BUCKET_ORBIS_SERIES_2";

	if (num == Global_265189.f_1[17])
		return "NM_BUCKET_ORBIS_SERIES_3";

	if (num == Global_265189.f_1[19])
		return "NET_PLAYLIST_CAPTURE";

	if (num == Global_265189.f_1[18])
		return "NET_PLAYLIST_SHOOTOUT";

	return "Unmapped bucket hash";
}

int func_184() // Position - 0x74DF Hash - 0x4228A1C2 ^0xC61894FA
{
	return Global_1572887.f_72;
}

char* func_185(int iParam0, int iParam1) // Position - 0x74ED Hash - 0xE9B3A818 ^0xE97C701F
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
			
				case 1:
					return "NM_BUCKET_RACE";
			
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
			
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
			
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
			
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
			
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
			
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
			
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
			
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
			
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
			
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
			
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
			
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
			
				default:
					break;
			}
			break;
	}

	return "Invalid Net Matchmaking Bucket";
}

BOOL func_186(int iParam0, BOOL bParam1) // Position - 0x75C8 Hash - 0x8A357F37 ^0x3E6BC767
{
	BOOL flag;

	flag = false;

	if (iParam0 == 255)
	{
		flag = true;
		iParam0 = func_222();
	}
	else if (iParam0 == func_222())
	{
		flag = true;
	}

	if (flag)
		if (!bParam1)
			return Global_1295666.f_9;

	if (!flag)
	{
		if (!Global_1295666.f_17[iParam0])
			return false;
	
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295666.f_149[iParam0]))
			return false;
	}

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(Global_1295666.f_149[iParam0])) <= 1)
		return false;

	return true;
}

int func_187(char* sParam0) // Position - 0x764F Hash - 0x78B95C49 ^0xF6B1C0A1
{
	const char* str;
	int num;

	str = MISC::VAR_STRING(2, sParam0);
	num = func_223(str, -2, 0, 0, 0, true);
	return num;
}

void func_188(int iParam0) // Position - 0x7671 Hash - 0x42868A8 ^0x921F418E
{
	Global_1572887.f_72.f_40 = iParam0;
	return;
}

int func_189(Player plParam0, int iParam1) // Position - 0x7683 Hash - 0x9B0CC2EE ^0x23F74622
{
	if (plParam0 < 0 || plParam0 >= 32)
		return -1;

	if (iParam1 <= -1)
		return -1;

	return Global_1149432.f_5087[plParam0 /*10*/].f_5[iParam1];
}

int func_190(int iParam0) // Position - 0x76BC Hash - 0x5D6622F5 ^0x5D6622F5
{
	switch (iParam0)
	{
		case 1:
		
	
		case 2:
		
	
		default:
		
	}

	return 2;
}

void func_191(Player plParam0, int iParam1, int iParam2) // Position - 0x76E1 Hash - 0x3D631FB3 ^0x688FE47F
{
	Player player;

	if (iParam2 == -1)
		return;

	if (iParam1 <= -1)
		return;

	if (plParam0 < 0 || plParam0 >= 32)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	Global_1149432.f_5087[plParam0 /*10*/].f_5[iParam1] = iParam2;
	return;
}

void func_192(Player plParam0, int iParam1, int iParam2) // Position - 0x7738 Hash - 0xDBF012BC ^0x19BA0376
{
	Player player;

	if (iParam1 <= -1)
		return;

	if (plParam0 < 0 || plParam0 >= 32)
		return;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return;

	Global_1149432.f_5087[plParam0 /*10*/][iParam1] = iParam2;
	return;
}

int func_193(Player plParam0, int iParam1) // Position - 0x7784 Hash - 0xEDE40E5D ^0x47F09267
{
	Player player;

	if (iParam1 <= -1)
		return 0;

	if (plParam0 < 0 || plParam0 >= 32)
		return 0;

	player = PLAYER::INT_TO_PLAYERINDEX(plParam0);

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		return 0;

	return Global_1149432.f_5087[plParam0 /*10*/][iParam1];
}

BOOL func_194(int iParam0, var uParam1, var uParam2) // Position - 0x77D1 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_224(iParam0, uParam1, &unk))
		func_225(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

Hash func_195(int iParam0) // Position - 0x77F8 Hash - 0xB8EC44B7 ^0x8DAE3A23
{
	switch (iParam0)
	{
		case 1:
			return joaat("stamp_cash");
	
		case 2:
			return 1111531686;
	
		case 3:
			return 2020859843;
	
		case 4:
			return -1620727213;
	
		case 5:
			return 2039881012;
	
		case 6:
			return -1429661529;
	
		case 7:
			return -540128588;
	
		case 8:
			return -1224238785;
	
		case 9:
			return joaat("stamp_gold");
	
		case 10:
			return joaat("stamp_lock");
	
		case 11:
			return joaat("stamp_locked_rank");
	
		case 12:
			return 876516058;
	
		case 13:
			return joaat("stamp_new");
	
		case 14:
			return joaat("stamp_unlocked_rank");
	
		case 15:
			return joaat("stamp_wishlist");
	
		default:
		
	}

	return 0;
}

int func_196(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5, int iParam6) // Position - 0x78DB Hash - 0xA452440E ^0xD3F785A1
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

void func_197() // Position - 0x7923 Hash - 0x53CFC0EB ^0xB2572CB4
{
	Player player;

	if (func_1() == -1)
		return;

	player = Global_1295666;

	if (func_152(Global_1572887.f_8, 1))
		func_226(&(Global_1056554[player /*491*/].f_204.f_10), 4);
	else
		func_227(&(Global_1056554[player /*491*/].f_204.f_10), 4);

	Global_1056554[player /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[player /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[player /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[player /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[player /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[player /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[player /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;

	if (func_179(1024))
		func_226(&(Global_1056554[player /*491*/].f_204.f_10), 2);
	else
		func_227(&(Global_1056554[player /*491*/].f_204.f_10), 2);

	return;
}

BOOL func_198() // Position - 0x7A38 Hash - 0xA584E02B ^0xA584E02B
{
	return func_67(Global_1051268);
}

int func_199(var uParam0, var uParam1) // Position - 0x7A4A Hash - 0xBC93F8EB ^0x84CDAD29
{
	int i;

	for (i = 0; i <= 7; i = i + 1)
	{
		if (func_228(Global_1206497.f_78[i /*20*/].f_7, uParam0))
			return i;
	}

	return -1;
}

int func_200(int iParam0) // Position - 0x7A83 Hash - 0x1B04F1B9 ^0xB3856B1A
{
	return Global_1206497.f_78[iParam0 /*20*/].f_3;
}

int func_201(int iParam0) // Position - 0x7A97 Hash - 0x1B04F1B9 ^0x33AF67A6
{
	return Global_1205938.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_202(int iParam0, int iParam1) // Position - 0x7AAB Hash - 0xAE6CBB09 ^0x91AC7C0C
{
	var unk;
	var unk9;

	if (func_229(&unk9, iParam0) && func_230(&unk9) && func_231(&unk9, iParam1) && func_232(&unk9))
		func_233(unk9, 37194763, &unk, true);

	return unk;
}

void func_203() // Position - 0x7AF7 Hash - 0x5281CE7E ^0x311564BB
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
		return;

	UIAPPS::_CLOSE_ALL_UIAPPS();
	return;
}

BOOL func_204(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x7B0E Hash - 0xB9500D ^0xB9500D
{
	BOOL flag;

	flag = func_235(bParam2, func_234(), true, false, true, true, true, bParam0, bParam1);

	if (!flag)
		return false;

	return true;
}

void func_205(int iParam0) // Position - 0x7B36 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1896762.f_365 = iParam0;
	return;
}

void func_206(var uParam0, int iParam1) // Position - 0x7B47 Hash - 0x53A96DDB ^0x70AB4F09
{
	uParam0->f_15 = uParam0->f_15 || iParam1;
	return;
}

void func_207(char* sParam0) // Position - 0x7B5A Hash - 0x1CB74C3 ^0xB32344E6
{
	TEXT_LABEL_ASSIGN_STRING(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
	return;
}

BOOL func_208(int iParam0) // Position - 0x7B70 Hash - 0xB8D7FAF1 ^0xB8D7FAF1
{
	if (func_236(iParam0, 0) == -1)
		return false;

	return true;
}

BOOL func_209(int iParam0) // Position - 0x7B88 Hash - 0xB8D7FAF1 ^0xB8D7FAF1
{
	if (func_237(iParam0, 0) == -1)
		return false;

	return true;
}

int func_210(int iParam0) // Position - 0x7BA0 Hash - 0xD773886E ^0xD773886E
{
	int i;

	if (func_1() == -1)
		return -1;

	for (i = 9; i <= 25; i = i + 1)
	{
		if (func_238(i) == iParam0)
			return i;
	}

	return -1;
}

Vector3 func_211(int iParam0) // Position - 0x7BD9 Hash - 0x87D86CF ^0x4486BF0A
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	var unk7;

	num2 = -1;
	num2.f_1 = -1;
	num2.f_2 = -1;

	if (!func_239(&num))
		return num2;

	if (!func_240(&num, 13, 0, 0, 1))
		return num2;

	if (!func_240(&num, 17, 0, 0, 1))
		return num2;

	unk7 = num.f_1;
	num3 = func_241(&num, 0);

	for (i = 0; i <= num3 - 1; i = i + 1)
	{
		num.f_1 = unk7;
	
		if (!func_240(&num, 19, i, 0, 1))
		{
		}
		else if (!func_240(&num, 20, 0, 0, 1))
		{
		}
		else
		{
			num4 = func_241(&num, 1);
		
			if (!func_240(&num, 22, iParam0, 0, 0))
			{
			}
			else
			{
				num5 = DATAFILE::_0xE13634BB6BAF0734(num, num.f_1);
				num2 = i;
				num2.f_1 = num4 - num5 - 1;
				break;
			}
		}
	}

	return num2;
}

struct<2> func_212(int iParam0) // Position - 0x7CBE Hash - 0xAA9CEFB1 ^0x2504ADA0
{
	if (iParam0 < 0 || iParam0 >= 100)
		return func_141();

	return Global_1835011[iParam0 /*72*/].f_1;
}

BOOL func_213(int iParam0) // Position - 0x7CEB Hash - 0xB240AFA2 ^0xB240AFA2
{
	if (iParam0 == 0)
		return false;

	return func_214(iParam0) != -1;
}

int func_214(int iParam0) // Position - 0x7D05 Hash - 0xA5514EF9 ^0xA5514EF9
{
	int i;
	int num;

	for (i = 0; i <= 13 - 1; i = i + 1)
	{
		num = i;
	
		if (iParam0 == func_242(num))
			return num;
	}

	return -1;
}

struct<2> func_215(int iParam0) // Position - 0x7D37 Hash - 0x83A4F0DE ^0x83A4F0DE
{
	return func_243(iParam0);
}

struct<2> func_216(var uParam0) // Position - 0x7D45 Hash - 0xDFD88D9B ^0xDFD88D9B
{
	var unk;
	var unk6;

	if (!func_239(&unk))
		return func_141();

	if (!func_240(&unk, 13, 0, 0, 1))
		return func_141();

	if (!func_240(&unk, 17, 0, 0, 1))
		return func_141();

	if (!func_240(&unk, 19, *uParam0, 0, 1))
		return func_141();

	if (!func_240(&unk, 20, 0, 0, 1))
		return func_141();

	if (!func_240(&unk, 23, uParam0->f_1, 0, 1))
		return func_141();

	unk6 = func_244(&unk);
	return func_217(unk6);
}

struct<2> func_217(int iParam0) // Position - 0x7DDF Hash - 0x6C87C802 ^0xCFA8552F
{
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk = { func_245(iParam0, 2) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_245(iParam0, 7) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_245(iParam0, 5) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_245(iParam0, 6) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_245(iParam0, 8) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_245(iParam0, 3) };

	if (unk.f_1 >= 0)
		return unk;

	unk = { func_245(iParam0, 4) };

	if (unk.f_1 >= 0)
		return unk;

	return func_141();
}

struct<2> func_218(int iParam0) // Position - 0x7EAF Hash - 0xE6BA07B1 ^0x38C19170
{
	var unk;
	var unk6;

	if (iParam0 == 0)
		return func_141();

	if (!func_246(&unk, 7, iParam0, 76966722))
		return func_141();

	func_247(7, &unk, &unk6);

	if (unk6.f_4 != 7)
		return func_141();

	return func_245(unk6.f_3, unk6.f_4);
}

int func_219(int iParam0) // Position - 0x7F01 Hash - 0x21FAF347 ^0x35226725
{
	switch (iParam0)
	{
		case -933924539:
			return joaat("MP_RACE");
	
		case -504335712:
			return joaat("MP_VS_MISSION");
	
		case 395262693:
			return joaat("MP_DEATHMATCH");
	
		default:
		
	}

	return 0;
}

void func_220(var uParam0) // Position - 0x7F3C Hash - 0xBA5A1D5A ^0x1A2510B1
{
	uParam0->f_15 = 0;
	return;
}

int func_221(int iParam0) // Position - 0x7F49 Hash - 0x16BDE770 ^0xF0581AA0
{
	int i;

	for (i = 0; i < 64; i = i + 1)
	{
		if (Global_265213.f_107995.f_13575[i] == iParam0)
			return Global_265213.f_107995.f_13510[i];
	}

	return 0;
}

int func_222() // Position - 0x7F8D Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1102813.f_3672;
}

int func_223(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x7F9C Hash - 0x8EBD6187 ^0x42F0F0AC
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num = iParam1;
	num.f_1 = iParam2;
	num.f_2 = iParam3;
	num.f_3 = iParam4;
	unk13.f_1 = sParam0;
	num2 = UIFEED::_UI_FEED_POST_FEED_TICKER(&num, &unk13, bParam5);
	return num2;
}

BOOL func_224(int iParam0, var uParam1, Any* panParam2) // Position - 0x7FD7 Hash - 0xCE1C3E56 ^0xB5B222A0
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = 1351168281;
	panParam2->f_3 = func_248(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

void func_225(Any* panParam0, int iParam1, var uParam2) // Position - 0x800D Hash - 0x59F43AD2 ^0xB9A366FE
{
	var unk;

	*uParam2 = iParam1;
	panParam0->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam0);
	panParam0->f_2 = -2140901307;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0))
		uParam2->f_2 = unk;

	panParam0->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), panParam0);
	panParam0->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), panParam0);
	panParam0->f_2 = 1234058424;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), panParam0);
	return;
}

void func_226(var uParam0, int iParam1) // Position - 0x8087 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_227(var uParam0, int iParam1) // Position - 0x8098 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_228(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x80AD Hash - 0x492C8AAF ^0x31BFFDD1
{
	return uParam0 == uParam2 && uParam0.f_1 == uParam2.f_1;
}

BOOL func_229(Any* panParam0, int iParam1) // Position - 0x80C8 Hash - 0x923307EB ^0xCB9659A0
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206497.f_455))
		return false;

	*panParam0 = Global_1206497.f_455;
	panParam0->f_2 = -1093317127;
	panParam0->f_3 = func_249(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_230(Any* panParam0) // Position - 0x810A Hash - 0x424BB8C9 ^0x61C1F918
{
	panParam0->f_2 = -310067910;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_231(Any* panParam0, int iParam1) // Position - 0x8125 Hash - 0x5E449B87 ^0x9CEAF780
{
	panParam0->f_2 = -1739269194;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_232(Any* panParam0) // Position - 0x8146 Hash - 0x424BB8C9 ^0x5FE3E3E4
{
	panParam0->f_2 = 1701407264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_233(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, char* sParam6, BOOL bParam7) // Position - 0x8161 Hash - 0x75EEBFEF ^0xA888E94A
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

BOOL func_234() // Position - 0x8187 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1915656.f_20643;
}

BOOL func_235(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x8196 Hash - 0x13FC6F30 ^0x85A59BCD
{
	Player player;
	Ped ped;
	BOOL isEntityDead;
	BOOL isPedIncapacitated;
	int num;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
		return 0;

	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-496459706))
		return 0;

	player = Global_1295666.f_149[Global_1295666];
	ped = Global_1295666.f_3;
	isEntityDead = ENTITY::IS_ENTITY_DEAD(ped);
	isPedIncapacitated = PED::IS_PED_INCAPACITATED(ped);

	if (isEntityDead || isPedIncapacitated)
	{
		if (!bParam5)
			return 0;
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
				return 0;
		
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
				return 0;
		}
	
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(player))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(ped, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}

	if (!bParam1)
	{
		if (Global_1915656.f_20638 || Global_1915656.f_22504.f_1)
			return 0;
	
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
			return 0;
	}

	if (func_250())
		return 0;

	if (Global_15)
		return 0;

	if (!bParam2 && Global_1940085.f_10 || Global_1940085.f_11 || Global_1940085.f_12 || Global_1940085.f_13)
		return 0;

	if (!bParam3)
	{
		num = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (Global_1235687.f_9479 != -1)
			return 0;
	
		if (Global_1138673[num /*56*/].f_34 & 1 != 0 && Global_1138673[num /*56*/].f_34 & 2 == 0)
			return 0;
	
		if (Global_1140770.f_293)
			return 0;
	
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
			return 0;
		else if (Global_1572887.f_72.f_40 > 15)
			return 0;
	}

	if (!bParam8)
	{
		if (SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
				return 0;
		
			if (Global_1048581)
				return 0;
		
			if (Global_1048585)
				return 0;
		}
	}

	return 1;
}

int func_236(int iParam0, int iParam1) // Position - 0x83BC Hash - 0xCABD9635 ^0xCABD9635
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
	
		case -1185533313:
			return 10;
	
		case -784189810:
			return 0;
	
		case -79999383:
			return 6;
	
		case -63669280:
			return 2;
	
		case 218185167:
			return 8;
	
		case 851921060:
			return 3;
	
		case 1457860192:
			return 5;
	
		case 1579717899:
			return 1;
	
		case 1744858848:
			return 9;
	
		case 2028478397:
			return 4;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_237(int iParam0, int iParam1) // Position - 0x844E Hash - 0x61BEC69F ^0x61BEC69F
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
	
		case -1581094459:
			return 8;
	
		case -1437925683:
			return 12;
	
		case -725256130:
			return 17;
	
		case -632356431:
			return 14;
	
		case -559809431:
			return 10;
	
		case -548018579:
			return 13;
	
		case -533426613:
			return 1;
	
		case -457802746:
			return 3;
	
		case -222655798:
			return 16;
	
		case 10577687:
			return 15;
	
		case 424482930:
			return 6;
	
		case 1153715636:
			return 5;
	
		case 1175500245:
			return 11;
	
		case 1272390114:
			return 7;
	
		case 1788958412:
			return 4;
	
		case 1816768801:
			return 0;
	
		case 1842544025:
			return 9;
	
		case 1943481570:
			return 18;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_238(int iParam0) // Position - 0x8538 Hash - 0x9F79BA48 ^0xAC7102A
{
	if (!func_69(iParam0))
		return 0;

	if (func_1() == -1)
		return 0;

	return Global_1835011[iParam0 /*72*/].f_51;
}

BOOL func_239(Any* panParam0) // Position - 0x8564 Hash - 0x699E87E5 ^0x2F91F009
{
	int fileHandle;
	var src;

	fileHandle = Global_1072759.f_28418[29 /*4*/].f_3;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(fileHandle))
		return false;

	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(fileHandle))
		return false;

	MISC::COPY_SCRIPT_STRUCT(panParam0, &src, 5);
	*panParam0 = fileHandle;
	return true;
}

BOOL func_240(Any* panParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x85A6 Hash - 0xA342F830 ^0xBDC6E0EB
{
	var unk;

	unk = panParam0->f_1;
	panParam0->f_2 = iParam1;
	panParam0->f_3 = iParam2;
	panParam0->f_4 = iParam3;

	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0))
	{
		panParam0->f_1 = unk;
		return false;
	}

	return true;
}

int func_241(Any anParam0, int iParam1) // Position - 0x85DF Hash - 0xF6C122AF ^0xA6A67C2F
{
	anParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(anParam0);
}

int func_242(int iParam0) // Position - 0x85F3 Hash - 0x7647021A ^0xC06A5114
{
	return Global_1295849[iParam0 /*37*/].f_9;
}

struct<2> func_243(int iParam0) // Position - 0x8605 Hash - 0xE4C1CC5C ^0x4865B60
{
	var dst;

	dst = -1;
	dst.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&dst, &(Global_1295849[iParam0 /*37*/].f_6), 2);
	return dst;
}

var func_244(Any* panParam0) // Position - 0x862F Hash - 0x3E293D90 ^0x3E293D90
{
	return func_251(panParam0, 67, 1);
}

struct<2> func_245(var uParam0, int iParam1) // Position - 0x8640 Hash - 0x712F1AF6 ^0x4832730C
{
	int num;

	num = -1;
	num.f_1 = -1;
	num = iParam1;

	switch (iParam1)
	{
		case 2:
			num.f_1 = func_252(uParam0, &(Global_1072759.f_573), func_122(iParam1));
			break;
	
		case 3:
			num.f_1 = func_252(uParam0, &(Global_1072759.f_573.f_602), func_122(iParam1));
			break;
	
		case 4:
			num.f_1 = func_252(uParam0, &(Global_1072759.f_573.f_2104), func_122(iParam1));
			break;
	
		case 5:
			num.f_1 = func_252(uParam0, &(Global_1072759.f_573.f_12606), func_122(iParam1));
			break;
	
		case 6:
			num.f_1 = func_252(uParam0, &(Global_1072759.f_573.f_12908), func_122(iParam1));
			break;
	
		case 7:
			num.f_1 = func_252(uParam0, &(Global_1072759.f_573.f_15910), func_122(iParam1));
			break;
	
		case 8:
			num.f_1 = func_252(uParam0, &(Global_1072759.f_573.f_16512), func_122(iParam1));
			break;
	}

	if (num.f_1 < 0)
		return func_141();

	return num;
}

BOOL func_246(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x8766 Hash - 0x7C6B6190 ^0xCA01B001
{
	*panParam0 = Global_1149432.f_7;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = func_248(iParam1);
	panParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

void func_247(int iParam0, Any* panParam1, var uParam2) // Position - 0x8797 Hash - 0x981137AC ^0xCACA1309
{
	int num;

	*uParam2 = iParam0;
	panParam1->f_2 = -611386243;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), panParam1);
	uParam2->f_3 = func_253(iParam0, uParam2->f_1);
	panParam1->f_2 = -2140901307;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_2 = num;
	panParam1->f_2 = -2140901307;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), panParam1);
	panParam1->f_2 = 1292053410;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), panParam1);

	if (*uParam2 == 3)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_254(num);
	}
	else if (*uParam2 == 4)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = num;
	}
	else if (*uParam2 == 5)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_255(num);
	}
	else if (*uParam2 == 6)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_256(num);
	
		panParam1->f_2 = 162343104;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	}
	else if (*uParam2 == 7)
	{
		panParam1->f_2 = 1636457257;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1))
			uParam2->f_5 = func_257(num);
	}
	else
	{
		panParam1->f_2 = 1636457257;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), panParam1);
	}

	panParam1->f_2 = 2012757065;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_7 = func_258(num);
	panParam1->f_2 = 1060782978;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), panParam1);
	panParam1->f_2 = 162343104;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), panParam1);
	panParam1->f_2 = -733480474;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), panParam1);
	panParam1->f_2 = 492825771;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), panParam1);
	panParam1->f_2 = -839279581;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), panParam1);
	panParam1->f_2 = -640941103;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), panParam1);
	num = 0;
	panParam1->f_2 = -2025968302;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_29 = num;
	num = 0;
	panParam1->f_2 = -1829781569;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_30 = num;
	num = 0;
	panParam1->f_2 = -1999176766;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_31 = num;
	num = 0;
	panParam1->f_2 = -739728609;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, panParam1);
	uParam2->f_32 = num;
	return;
}

int func_248(int iParam0) // Position - 0x89F2 Hash - 0x5FB59AC3 ^0xE293EFF
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -3:
			num = 1300413597;
			break;
	
		case -2:
			num = joaat("GOLD");
			break;
	
		case 0:
			num = joaat("Challenge");
			break;
	
		case 1:
			num = joaat("feature");
			break;
	
		case 2:
			num = joaat("MISSION_STORY");
			break;
	
		case 3:
			num = joaat("MISSION_PROCEDURAL");
			break;
	
		case 4:
			num = joaat("MISSION_FETCH");
			break;
	
		case 5:
			num = joaat("MISSION_MINIGAME");
			break;
	
		case 6:
			num = joaat("MISSION_FREE_MODE_EVENT");
			break;
	
		case 7:
			num = joaat("MISSION_UGC");
			break;
	
		case 8:
			num = joaat("MISSION_BEAT");
			break;
	
		case 9:
			num = joaat("Property");
			break;
	
		case 10:
			num = joaat("Recipe");
			break;
	
		case 11:
			num = joaat("TITLE");
			break;
	
		case 12:
			num = joaat("SHOP");
			break;
	
		case 13:
			num = joaat("GFH_GIVERS");
			break;
	
		case 14:
			num = joaat("GFH_LOCATIONS");
			break;
	
		case 15:
			num = 1332629624;
			break;
	
		case 16:
			num = 1746212499;
			break;
	
		case 17:
			num = joaat("GVO_UNLOCKS");
			break;
	
		case 18:
			num = 1151893103;
			break;
	
		case 19:
			num = -312924468;
			break;
	}

	return num;
}

int func_249(int iParam0) // Position - 0x8B67 Hash - 0xB8EC44B7 ^0xABFEE883
{
	switch (iParam0)
	{
		case 0:
			return joaat("ARCHERY");
	
		case 1:
			return joaat("CHALLENGES");
	
		case 2:
			return joaat("DEAD_DROP");
	
		case 3:
			return joaat("GOLDEN_HAT");
	
		case 4:
			return joaat("HOT_PROPERTY");
	
		case 5:
			return joaat("KING_OF_THE_CASTLE");
	
		case 6:
			return joaat("KING_OF_THE_RAILS");
	
		case 7:
			return -142235487;
	
		case 8:
			return joaat("ESCAPED_CONVICTS");
	
		case 9:
			return joaat("ROUND_UP");
	
		case 10:
			return joaat("SUPPLY_TRAIN");
	
		case 11:
			return joaat("WRECKAGE");
	
		case 12:
			return joaat("CONDOR_EGG");
	
		case 13:
			return -27117790;
	
		case 14:
			return 1653867545;
	
		case 15:
			return joaat("PV_CHALLENGE_HERBALIST");
	
		case 16:
			return joaat("PV_CHALLENGE_BIGGEST_FISH");
	
		case 17:
			return joaat("PV_CHALLENGE_FLYING_BIRD");
	
		case 18:
			return joaat("HUNT_THE_POSSE_LEADER");
	
		default:
		
	}

	return 0;
}

BOOL func_250() // Position - 0x8C82 Hash - 0x477323 ^0x8EF93AF8
{
	return ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false);
}

var func_251(Any* panParam0, int iParam1, int iParam2) // Position - 0x8C9E Hash - 0xB208A015 ^0xE27079B
{
	var unk;

	panParam0->f_2 = iParam1;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, panParam0);
	return unk;
}

int func_252(var uParam0, var uParam1, int iParam2) // Position - 0x8CB9 Hash - 0x3B53E80C ^0x3B53E80C
{
	int num;
	int num2;
	int num3;

	num = 0;
	num2 = iParam2 - 1;

	while (num <= num2)
	{
		num3 = num + ((num2 - num) / 2);
	
		if (uParam1->[num3 /*3*/] > uParam0)
			num2 = num3 - 1;
		else if (uParam1->[num3 /*3*/] < uParam0)
			num = num3 + 1;
		else
			return num3;
	}

	return -1;
}

int func_253(int iParam0, var uParam1) // Position - 0x8D0E Hash - 0xAFA3D25A ^0x653A2CB3
{
	var unk;

	if (func_259(iParam0, uParam1, &unk))
		return unk.f_2;

	return 0;
}

int func_254(int iParam0) // Position - 0x8D2B Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case joaat("IWD_INF"):
			return 19;
	
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
	
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
	
		case -1381389849:
			return 5;
	
		case joaat("AMBUSH"):
			return 10;
	
		case -867762478:
			return 14;
	
		case joaat("IWD_1V1"):
			return 17;
	
		case -668110249:
			return 4;
	
		case -621956193:
			return 11;
	
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
	
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
	
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
	
		case joaat("ROBBERY_TRAIN"):
			return 2;
	
		case joaat("IWD_PF"):
			return 20;
	
		case joaat("ASSASSINATION"):
			return 22;
	
		case 377122918:
			return 8;
	
		case 536699577:
			return 6;
	
		case 541147288:
			return 7;
	
		case 602097925:
			return 15;
	
		case joaat("IWD_PLF"):
			return 21;
	
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
	
		case 1158195437:
			return 9;
	
		case 1336837986:
			return 0;
	
		case joaat("IWD_PVP"):
			return 18;
	
		case 1443764480:
			return 3;
	
		case 1518877519:
			return 30;
	
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
	
		case joaat("IWD_F"):
			return 28;
	
		case joaat("TRAIN_ESCORT"):
			return 16;
	
		case 2124631622:
			return 1;
	
		default:
		
	}

	return -1;
}

int func_255(int iParam0) // Position - 0x8E81 Hash - 0xCBE7BE7C ^0xCBE7BE7C
{
	switch (iParam0)
	{
		case joaat("fence_building"):
			return 6;
	
		case joaat("blackjack"):
			return 0;
	
		case joaat("clean_stalls"):
			return 5;
	
		case joaat("Poker"):
			return 2;
	
		case joaat("dominoes"):
			return 1;
	
		case joaat("fillet"):
			return 3;
	
		case joaat("milking_cow"):
			return 4;
	
		default:
		
	}

	return -1;
}

int func_256(int iParam0) // Position - 0x8ED8 Hash - 0x2A2D8996 ^0x2A2D8996
{
	switch (iParam0)
	{
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
	
		case joaat("KING_OF_THE_RAILS"):
			return 6;
	
		case joaat("CONDOR_EGG"):
			return 12;
	
		case joaat("DEAD_DROP"):
			return 2;
	
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
	
		case joaat("HOT_PROPERTY"):
			return 4;
	
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
	
		case joaat("ESCAPED_CONVICTS"):
			return 8;
	
		case -142235487:
			return 7;
	
		case -27117790:
			return 13;
	
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
	
		case joaat("ROUND_UP"):
			return 9;
	
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
	
		case joaat("GOLDEN_HAT"):
			return 3;
	
		case 1653867545:
			return 14;
	
		case joaat("ARCHERY"):
			return 0;
	
		case joaat("CHALLENGES"):
			return 1;
	
		case joaat("WRECKAGE"):
			return 11;
	
		case joaat("SUPPLY_TRAIN"):
			return 10;
	
		default:
		
	}

	return -1;
}

int func_257(int iParam0) // Position - 0x8FB2 Hash - 0xAFBAC931 ^0xAFBAC931
{
	switch (iParam0)
	{
		case -1641798436:
			return 4;
	
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
	
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
	
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
	
		case 352400957:
			return 5;
	
		case 434282564:
			return 11;
	
		case 787592898:
			return 7;
	
		case 1039801657:
			return 10;
	
		case 1211286129:
			return 6;
	
		case 1228993410:
			return 12;
	
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
	
		case 2006131499:
			return 3;
	
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
	
		default:
		
	}

	return 0;
}

int func_258(int iParam0) // Position - 0x904A Hash - 0xD7A7D6 ^0xD7A7D6
{
	switch (iParam0)
	{
		case -1968391995:
			return 34;
	
		case joaat("intro_generic"):
			return 2;
	
		case -1797632736:
			return 36;
	
		case joaat("Collector"):
			return 12;
	
		case -1317631038:
			return 27;
	
		case -862833187:
			return 23;
	
		case -713504854:
			return 19;
	
		case joaat("intro_char"):
			return 1;
	
		case joaat("intro_freemode"):
			return 4;
	
		case joaat("season006"):
			return 16;
	
		case joaat("season005"):
			return 13;
	
		case -171568028:
			return 33;
	
		case -89188661:
			return 24;
	
		case joaat("hunter"):
			return 10;
	
		case joaat("trader"):
			return 11;
	
		case 67219675:
			return 31;
	
		case joaat("outlaw"):
			return 9;
	
		case joaat("vipseason006"):
			return 17;
	
		case 547199896:
			return 22;
	
		case 591458137:
			return 29;
	
		case joaat("BountyHunter"):
			return 7;
	
		case 696644969:
			return 26;
	
		case joaat("vipseason005"):
			return 14;
	
		case 753957709:
			return 20;
	
		case joaat("NULL"):
			return -1;
	
		case joaat("teamster"):
			return 6;
	
		case 1054483531:
			return 21;
	
		case 1322114923:
			return 3;
	
		case joaat("normal"):
			return 0;
	
		case joaat("intro_clay2"):
			return 5;
	
		case 1539627774:
			return 28;
	
		case joaat("moonshiner"):
			return 15;
	
		case joaat("gunslinger"):
			return 8;
	
		case 1792833819:
			return 25;
	
		case 1837071987:
			return 30;
	
		case 1885832251:
			return 32;
	
		case 1976336482:
			return 18;
	
		case 2042305612:
			return 35;
	
		default:
		
	}

	return -1;
}

BOOL func_259(int iParam0, var uParam1, var uParam2) // Position - 0x91F4 Hash - 0xDC10368D ^0xDC10368D
{
	var unk;

	if (func_260(iParam0, uParam1, &unk))
		func_225(&unk, iParam0, uParam2);
	else
		return false;

	return true;
}

BOOL func_260(int iParam0, var uParam1, Any* panParam2) // Position - 0x921B Hash - 0x8467BB0B ^0x664BC7E5
{
	*panParam2 = Global_1149432.f_7;
	panParam2->f_2 = -1096981081;
	panParam2->f_3 = func_248(iParam0);
	panParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam2->f_1), panParam2);
}

