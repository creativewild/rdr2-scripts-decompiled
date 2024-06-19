#region Local Var
	var uLocal_0 = 12;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	Volume volLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 12;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
#endregion

void main() // Position - 0x0 Hash - 0xF5CD7FA3 ^0xB5A00B51
{
	BOOL flag;
	int i;
	int num;
	Vector3 vector;
	BOOL flag2;
	BOOL flag3;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (iLocal_13 >= 3)
			func_1(iLocal_13 >= 4);
	
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	flag = false;

	while (!flag)
	{
		BUILTIN::WAIT(0);
	
		switch (iLocal_13)
		{
			case 0:
				volLocal_14 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(613.343f, 2192.701f, 223.576f, 0f, 0f, 11f, 29f, 46f, 9f, "BirdsTrigger");
				PED::_RESERVE_AMBIENT_PEDS(12);
				STREAMING::REQUEST_MODEL(func_2(), false);
				iLocal_13 = 1;
				break;
		
			case 1:
				if (STREAMING::HAS_MODEL_LOADED(func_2()))
					iLocal_13 = 2;
				break;
		
			case 2:
				if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() >= 12)
					if (func_3())
						iLocal_13 = 3;
				break;
		
			case 3:
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, volLocal_14, true, 0) || MISC::IS_BULLET_IN_AREA(618.49457f, 2197.9321f, 222.02226f, 13f, true))
				{
					iLocal_13 = 4;
					iLocal_15 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case 4:
				for (i = 0; i < 12; i = i + 1)
				{
					if (!PED::IS_PED_INJURED(uLocal_0[i]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_0[i], -708058584, true) == 8 || uLocal_18[i])
						{
							num = 0;
						
							switch (num)
							{
								case 0:
									num = 0;
									break;
							
								case 1:
									num = 50;
									break;
							
								case 2:
									num = 160;
									break;
							
								case 3:
									num = 400;
									break;
							
								case 4:
									num = 310;
									break;
							
								case 5:
									num = 120;
									break;
							
								case 6:
									num = 200;
									break;
							
								case 7:
									num = 280;
									break;
							
								case 8:
									num = 390;
									break;
							
								case 9:
									num = 70;
									break;
							
								case 10:
									num = 220;
									break;
							
								case 11:
									num = 150;
									break;
							}
						
							if (MISC::GET_GAME_TIMER() >= num + iLocal_15)
							{
								TASK::TASK_FLY_TO_COORD(uLocal_0[i], 3f, func_4(iLocal_16), false, true);
								uLocal_18[i] = 0;
							}
						}
					}
				}
			
				if (!PED::IS_PED_INJURED(uLocal_0[0]))
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_0[0], func_4(iLocal_16), 20f, 20f, 20f, false, false, 0))
						iLocal_13 = 5;
				break;
		
			case 5:
				for (i = 0; i < 12; i = i + 1)
				{
					if (!PED::IS_PED_INJURED(uLocal_0[i]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_0[i], 475934052, true) != 8)
						{
						}
						else
						{
							TASK::TASK_FLYING_CIRCLE(uLocal_0[i], 2f, func_4(iLocal_16), 2f, 10f);
						}
					}
				}
			
				if (!PED::IS_PED_INJURED(uLocal_0[0]))
				{
					vector = { func_5(iLocal_16) };
				
					if (ENTITY::IS_ENTITY_AT_COORD(Global_35, func_4(iLocal_16), vector, false, false, 0))
					{
						if (iLocal_16 < 11)
						{
							for (i = 0; i < 12; i = i + 1)
							{
								uLocal_18[i] = 1;
							}
						
							iLocal_16 = 1 + iLocal_16;
							iLocal_13 = 4;
						}
						else
						{
							func_6();
							SCRIPTS::TERMINATE_THIS_THREAD();
						}
					}
				}
				break;
		}
	
		if (!func_7(12, 8388608))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 1708.7986f, 2160.9648f, 318.87286f, false) < 160f)
			{
				Global_40.f_11623[12 /*8*/].f_2 = -15;
				func_8(12, 8388608, true);
			}
		}
	
		if (iLocal_13 >= 3)
		{
			flag2 = false;
			flag3 = false;
		
			if (PED::IS_PED_INJURED(uLocal_0[iLocal_17]))
				flag3 = true;
			else if (ENTITY::IS_ENTITY_AT_ENTITY(Global_35, uLocal_0[iLocal_17], 250f, 250f, 250f, false, false, 0))
				flag2 = true;
		
			iLocal_17 = iLocal_17 + 1;
		
			if (iLocal_17 >= 12)
				iLocal_17 = 0;
		
			if (!flag2)
				fLocal_31 = fLocal_31 + (1f * BUILTIN::TIMESTEP());
			else
				fLocal_31 = 0f;
		
			if (flag3 || fLocal_31 >= 5f)
			{
				fLocal_31 >= 5f;
				func_6();
				func_1(flag3 || iLocal_13 >= 4);
				func_9(&(Global_1396257[12 /*638*/].f_626), 16384, false);
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
		}
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(BOOL bParam0) // Position - 0x402 Hash - 0xC8D28934 ^0x4F0F6F5D
{
	if (bParam0)
		Global_40.f_11623[12 /*8*/].f_2 = func_10();

	func_9(&(Global_1396257[12 /*638*/].f_626), 8192, true);
	return;
}

ePedType func_2() // Position - 0x433 Hash - 0x9F572D68 ^0xA69C829D
{
	return joaat("a_c_pheasant_01");
}

BOOL func_3() // Position - 0x440 Hash - 0x627764D ^0xC0F83CB7
{
	int i;
	var unk;
	float num;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_0[i]))
		{
			switch (i)
			{
				case 0:
					unk = { 622.3134f, 2200.7644f, 221.58557f };
					num = -160f;
					break;
			
				case 1:
					unk = { 621.24414f, 2199.1465f, 221.72865f };
					num = -120f;
					break;
			
				case 2:
					unk = { 619.4209f, 2194.5125f, 221.77145f };
					num = -99f;
					break;
			
				case 3:
					unk = { 619.327f, 2192.7134f, 221.56581f };
					num = -155f;
					break;
			
				case 4:
					unk = { 623.75244f, 2199.4194f, 221.42493f };
					num = 142f;
					break;
			
				case 5:
					unk = { 621.4307f, 2195.6956f, 221.64395f };
					num = -11f;
					break;
			
				case 6:
					unk = { 623.0302f, 2189.1702f, 220.84865f };
					num = -33f;
					break;
			
				case 7:
					unk = { 618.28595f, 2196.8833f, 222.00494f };
					num = 40f;
					break;
			
				case 8:
					unk = { 617.97516f, 2193.7703f, 221.78157f };
					num = -175f;
					break;
			
				case 9:
					unk = { 620.50446f, 2199.1494f, 221.81334f };
					num = -42f;
					break;
			
				case 10:
					unk = { 632.35114f, 2197.8171f, 220.63f };
					num = 20f;
					break;
			
				case 11:
					unk = { 626.5476f, 2191.122f, 220.77757f };
					num = 68f;
					break;
			}
		
			uLocal_0[i] = func_11(func_2(), unk, num, true, true, 0, true, true, true, false, false, false, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_0[i], true);
			PED::SET_PED_KEEP_TASK(uLocal_0[i], true);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_0[i], true);
			return false;
		}
	}

	return true;
}

Vector3 func_4(int iParam0) // Position - 0x659 Hash - 0xCBED323 ^0xCBED323
{
	switch (iParam0)
	{
		case 0:
			return 637f, 2120f, 236f;
	
		case 1:
			return 673f, 2034f, 245f;
	
		case 2:
			return 666f, 1935f, 241f;
	
		case 3:
			return 750f, 1924f, 260f;
	
		case 4:
			return 830f, 1851f, 270f;
	
		case 5:
			return 920f, 1862f, 298f;
	
		case 6:
			return 1003f, 1870f, 355f;
	
		case 7:
			return 1197f, 1896f, 349f;
	
		case 8:
			return 1358f, 2035f, 326f;
	
		case 9:
			return 1569f, 2129f, 334f;
	
		case 10:
			return 1723.8159f, 2167.8877f, 349.48688f;
	}

	return 0f, 0f, 0f;
}

Vector3 func_5(int iParam0) // Position - 0x795 Hash - 0xCBED323 ^0xCBED323
{
	switch (iParam0)
	{
		case 0:
			return 40f, 40f, 40f;
	
		case 1:
			return 45f, 45f, 45f;
	
		case 5:
			return 55f, 55f, 55f;
	
		case 6:
			return 65f, 65f, 65f;
	
		case 7:
			return 55f, 55f, 55f;
	}

	return 45f, 45f, 45f;
}

void func_6() // Position - 0x83B Hash - 0xE415B4F9 ^0x6844A41D
{
	int i;

	for (i = 0; i < 12; i = i + 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_0[i]))
			TASK::TASK_FLY_AWAY(uLocal_0[i], Global_35);
	}

	return;
}

BOOL func_7(int iParam0, int iParam1) // Position - 0x871 Hash - 0x331B7828 ^0x84AB2DAA
{
	return func_12(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

void func_8(int iParam0, int iParam1, BOOL bParam2) // Position - 0x88B Hash - 0x97FB121D ^0x1129C9CA
{
	if (bParam2)
		func_13(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	else
		func_14(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);

	return;
}

void func_9(BOOL bParam0, int iParam1, BOOL bParam2) // Position - 0x8BF Hash - 0x7FDB839F ^0x7FDB839F
{
	if (bParam2)
		func_13(bParam0, iParam1);
	else
		func_14(bParam0, iParam1);

	return;
}

eStackSize func_10() // Position - 0x8DF Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

Ped func_11(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x8EB Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_15(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

BOOL func_12(BOOL bParam0, BOOL bParam1) // Position - 0x92D Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && bParam1 != false;
}

void func_13(BOOL bParam0, int iParam1) // Position - 0x93C Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_14(BOOL bParam0, int iParam1) // Position - 0x94D Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_15(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x962 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_16(eptParam1))
		{
			func_17(pedParam0, joaat("META_OUTFIT_DEFAULT"));
		}
		else if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(pedParam0, true);
			flag = true;
		}
	}

	if (PED::IS_PED_HUMAN(pedParam0))
	{
		if (bParam6)
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(pedParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(eptParam1));
	
		if (PED::IS_PED_MALE(pedParam0) && !bParam3)
			func_18(pedParam0, 0, true);
	
		PED::SET_PED_CONFIG_FLAG(pedParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(pedParam0, 0, false);
			flag = true;
		}
	
		if (bParam4)
		{
			func_19(pedParam0, false);
			flag = true;
		}
	
		func_20(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_16(ePedType eptParam0) // Position - 0xA43 Hash - 0x5000025C ^0x5000025C
{
	switch (eptParam0)
	{
		case joaat("cs_sistercalderon"):
		case joaat("cs_strsheriff_01"):
		case joaat("cs_mud2bigguy"):
		case joaat("cs_rainsfall"):
		case joaat("cs_penelopebraithwaite"):
		case joaat("cs_swampweirdosonny"):
		case joaat("cs_unidusterjail_01"):
		case joaat("cs_iangray"):
		case joaat("cs_tinyhermit"):
		case joaat("cs_timothydonahue"):
		case joaat("cs_princessisabeau"):
		case joaat("cs_leviticuscornwall"):
		case joaat("cs_didsbury"):
		case joaat("cs_featherstonchambers"):
		case joaat("cs_featsofstrength"):
		case joaat("cs_bandpianist"):
		case joaat("cs_escapeartistassistant"):
		case joaat("cs_garethbraithwaite"):
		case joaat("cs_creoleguy"):
		case joaat("cs_leighgray"):
		case joaat("cs_strawberryoutlaw_02"):
		case joaat("cs_gloria"):
		case joaat("cs_warvet"):
		case joaat("cs_jockgray"):
		case joaat("cs_davidgeddes"):
		case joaat("cs_guidomartelli"):
		case joaat("cs_duncangeddes"):
		case joaat("cs_dusterinformant_01"):
		case joaat("cs_pinkertongoon"):
		case joaat("cs_mickey"):
		case joaat("cs_twinbrother_02"):
		case joaat("cs_hestonjameson"):
		case joaat("cs_strdeputy_01"):
		case joaat("cs_abe"):
		case joaat("cs_oddfellowspinhead"):
		case joaat("cs_swampfreak"):
		case joaat("cs_mradler"):
		case joaat("cs_aberdeenpigfarmer"):
		case joaat("cs_hobartcrawley"):
		case joaat("cs_formyartbigwoman"):
		case joaat("cs_norrisforsythe"):
		case joaat("cs_jules"):
		case joaat("cs_tomdickens"):
		case joaat("cs_geraldbraithwaite"):
		case joaat("cs_paytah"):
		case joaat("cs_cancan_03"):
		case joaat("cs_grizzledjon"):
		case joaat("cs_wrobel"):
		case joaat("cs_meredith"):
		case joaat("cs_creepyoldlady"):
		case joaat("cs_nbxreceptionist_01"):
		case joaat("cs_nbxpolicechiefformal"):
		case joaat("cs_cornwalltrainconductor"):
		case joaat("cs_rhodeputy_01"):
		case joaat("cs_drmalcolmmacintosh"):
		case joaat("cs_leon"):
		case joaat("cs_sheriffowens"):
		case joaat("cs_sddoctor_01"):
		case joaat("cs_scottgray"):
		case joaat("cs_cancan_01"):
		case joaat("cs_creolecaptain"):
		case joaat("cs_brontesbutler"):
		case joaat("cs_janson"):
		case joaat("cs_forgivenwife_01"):
		case joaat("cs_tigerhandler"):
		case joaat("cs_frenchartist"):
		case joaat("cs_genstorymale"):
		case joaat("cs_clay"):
		case joaat("cs_strdeputy_02"):
		case joaat("cs_famousgunslinger_03"):
		case joaat("cs_bivcoachdriver"):
		case joaat("cs_braithwaitebutler"):
		case joaat("cs_cleet"):
		case joaat("cs_joe"):
		case joaat("cs_slavecatcher"):
		case joaat("cs_braithwaitemaid"):
		case joaat("cs_twingroupie_02"):
		case joaat("cs_mrsgeddes"):
		case joaat("cs_samaritan"):
		case joaat("cs_exconfedinformant"):
		case joaat("cs_frenchman_01"):
		case joaat("cs_bandsinger"):
		case joaat("cs_baptiste"):
		case joaat("cs_angusgeddes"):
		case joaat("cs_mysteriousstranger"):
		case joaat("cs_famousgunslinger_01"):
		case joaat("cs_bartholomewbraithwaite"):
		case joaat("cs_mixedracekid"):
		case joaat("cs_beatenupcaptain"):
		case joaat("cs_edgarross"):
		case joaat("cs_twingroupie_01"):
		case joaat("cs_mrsweathers"):
		case joaat("cs_jamie"):
		case joaat("cs_karensjohn_01"):
		case joaat("cs_thomasdown"):
		case joaat("cs_obediahhinton"):
		case joaat("cs_agnesdowd"):
		case joaat("cs_cavehermit"):
		case joaat("cs_brynntildon"):
		case joaat("cs_germanson"):
		case joaat("cs_brendacrawley"):
		case joaat("cs_colfavours"):
		case joaat("cs_rhodeskidnapvictim"):
		case joaat("cs_exconfedsleader_01"):
		case joaat("cs_cancan_04"):
		case joaat("cs_towncrier"):
		case joaat("cs_famousgunslinger_04"):
		case joaat("cs_dalemaroney"):
		case joaat("cs_angryhusband"):
		case joaat("cs_lillianpowell"):
		case joaat("cs_andershelgerson"):
		case joaat("cs_poorjoe"):
		case joaat("cs_braithwaiteservant"):
		case joaat("cs_brotherdorkins"):
		case joaat("cs_albertmason"):
		case joaat("cs_famousgunslinger_05"):
		case joaat("cs_balloonoperator"):
		case joaat("cs_albertcakeesquire"):
		case joaat("cs_mrsfellows"):
		case joaat("cs_cancanman_01"):
		case joaat("cs_poisonwellshaman"):
		case joaat("cs_cancan_02"):
		case joaat("cs_meredithsmother"):
		case joaat("cs_angel"):
		case joaat("cs_archerfordham"):
		case joaat("cs_disguisedduster_01"):
		case joaat("cs_chelonianmaster"):
		case joaat("cs_twinbrother_01"):
		case joaat("cs_germandaughter"):
		case joaat("cs_lemiuxassistant"):
		case joaat("cs_creoledoctor"):
		case joaat("cs_crackpotrobot"):
		case joaat("cs_bandbassist"):
		case joaat("cs_genstoryfemale"):
		case joaat("cs_marylinton"):
		case joaat("cs_valprayingman"):
		case joaat("cs_johnthebaptisingmadman"):
		case joaat("cs_mrs_calhoun"):
		case joaat("cs_theodorelevin"):
		case joaat("cs_nicholastimmins"):
		case joaat("cs_disguisedduster_03"):
		case joaat("cs_dinoboneslady"):
		case joaat("cs_beaugray"):
		case joaat("cs_strawberryoutlaw_01"):
		case joaat("cs_crackpotinventor"):
		case joaat("cs_hercule"):
		case joaat("cs_gavin"):
		case joaat("cs_levisimon"):
		case joaat("cs_londonderryson"):
		case joaat("cs_captainmonroe"):
		case joaat("cs_famousgunslinger_02"):
		case joaat("cs_mrslondonderry"):
		case joaat("cs_soothsayer"):
		case joaat("cs_tavishgray"):
		case joaat("cs_joebutler"):
		case joaat("cs_banddrummer"):
		case joaat("cs_lillymillet"):
		case joaat("cs_ansel_atherton"):
		case joaat("cs_rhodeputy_02"):
		case joaat("cs_edmundlowry"):
		case joaat("cs_disguisedduster_02"):
		case joaat("cs_magnifico"):
		case joaat("cs_artappraiser"):
		case joaat("cs_forgivenhusband_01"):
		case joaat("cs_reverendfortheringham"):
		case joaat("cs_daveycallender"):
		case joaat("cs_desmond"):
		case joaat("cs_adamgray"):
		case joaat("cs_jimcalloway"):
		case joaat("cs_sdsaloondrunk_01"):
		case joaat("cs_nbxdrunk"):
		case joaat("cs_germanmother"):
		case joaat("cs_ringmaster"):
		case joaat("cs_lucanapoli"):
		case joaat("cs_rhodesassistant"):
		case joaat("cs_aberdeensister"):
		case joaat("cs_nbxexecuted"):
		case joaat("cs_famousgunslinger_06"):
		case joaat("cs_johnweathers"):
		case joaat("cs_professorbell"):
		case joaat("cs_rhodessaloonbouncer"):
			return true;
	
		default:
		
	}

	return false;
}

void func_17(Ped pedParam0, Hash hParam1) // Position - 0xE96 Hash - 0x24EA8BE8 ^0x386C74FA
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_21(pedParam0, hParam1))
		{
			if (func_22(pedParam0, hParam1))
			{
				if (func_23(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_24(pedParam0);
				}
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT(pedParam0, hParam1);
				PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
			}
		
			PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 3);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 0);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 5);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 7);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 8);
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 9);
		}
	}

	return;
}

void func_18(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0xF3D Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_19(Ped pedParam0, BOOL bParam1) // Position - 0xF6D Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_20(Ped pedParam0, int iParam1) // Position - 0xFB2 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

BOOL func_21(Ped pedParam0, Hash hParam1) // Position - 0xFD9 Hash - 0x902FAF7B ^0x852CA371
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	flag = PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(hParam1, ENTITY::GET_ENTITY_MODEL(pedParam0));

	if (flag)
	{
	}

	return flag;
}

BOOL func_22(Ped pedParam0, Hash hParam1) // Position - 0x1007 Hash - 0x40C1A961 ^0xAB83ABF3
{
	Hash _int;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (_int == hParam1)
		return true;

	return false;
}

BOOL func_23(Ped pedParam0, Hash hParam1) // Position - 0x1055 Hash - 0x40C1A961 ^0xAB83ABF3
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_21(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_24(Ped pedParam0) // Position - 0x10C3 Hash - 0xF4C28231 ^0x2EB8F53E
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

