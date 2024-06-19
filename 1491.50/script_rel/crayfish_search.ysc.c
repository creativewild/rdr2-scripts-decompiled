#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 1;
	var uLocal_10 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x758CCD73 ^0x884A6C26
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1(&uScriptParam_0, &iLocal_0);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uScriptParam_0.f_1))
		func_1(&uScriptParam_0, &iLocal_0);

	while (func_2(&uScriptParam_0, &iLocal_0))
	{
		switch (iLocal_0)
		{
			case 0:
				if (func_3(&uScriptParam_0, &iLocal_0))
					func_4(&iLocal_0, 1);
				break;
		
			case 1:
				if (func_5(&uScriptParam_0, &iLocal_0))
					func_4(&iLocal_0, 2);
				break;
		
			case 2:
				if (func_6(&uScriptParam_0, &iLocal_0))
					func_4(&iLocal_0, 3);
				break;
		
			case 3:
				if (func_7(&uScriptParam_0, &iLocal_0))
				{
					if (iLocal_0.f_3 >= iLocal_0.f_4)
					{
						func_8(&iLocal_0);
						func_4(&iLocal_0, 4);
					}
					else
					{
						iLocal_0.f_6 = 0;
						func_4(&iLocal_0, 2);
					}
				}
				break;
		
			case 4:
				func_1(&uScriptParam_0, &iLocal_0);
				func_4(&iLocal_0, 5);
				break;
		
			case 5:
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_1(&uScriptParam_0, &iLocal_0);
	return;
}

void func_1(var uParam0, var uParam1) // Position - 0xFE Hash - 0x2DFE2C79 ^0x83C0FC99
{
	func_8(uParam1);

	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
	{
		PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam1->f_7);
		PLAYER::_0xDC5E09D012D759C4(uParam1->f_7, uParam1->f_7, 0);
	}

	if (ENTITY::IS_MAP_ENTITY_PINNED(uParam1->f_8))
		ENTITY::_UNPIN_MAP_ENTITY(uParam1->f_8);

	SCRIPTS::_0xE7282390542F570D(*uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(var uParam0, var uParam1) // Position - 0x14F Hash - 0x2D9E2181 ^0x4A7860D7
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
		return false;

	if (func_9(0, false, true))
		return false;

	return true;
}

BOOL func_3(var uParam0, var uParam1) // Position - 0x181 Hash - 0x4C069DC1 ^0x6FD124DA
{
	var unk;

	unk = { func_10(uParam0) };

	if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam1->f_9[0]))
		uParam1->f_9[0] = TASK::CREATE_SCENARIO_POINT_HASH(joaat("RANSACK_REACH_IN_CRAYSISH_HOLE"), unk - { 0f, 0.3f, 0f }, 0f, 0, 0, false);

	STREAMING::REQUEST_MODEL(func_11(), false);
	uParam1->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	uParam1->f_1 = func_12(uParam0->f_1);
	return true;
}

void func_4(var uParam0, int iParam1) // Position - 0x1E2 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_5(var uParam0, var uParam1) // Position - 0x1EF Hash - 0x3EB0270B ^0x9BA9940F
{
	if (!STREAMING::HAS_MODEL_LOADED(func_11()))
		return false;

	return true;
}

BOOL func_6(var uParam0, var uParam1) // Position - 0x208 Hash - 0xE94B74C2 ^0x54E598F
{
	Vector3 vector;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6))
	{
		vector = { func_13(uParam0) };
	
		if (!_IS_NULL_VECTOR(vector))
			uParam1->f_6 = OBJECT::CREATE_OBJECT(func_11(), vector, true, true, false, false, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6))
		return false;

	if (uParam1->f_1 != -1 && !func_15(uParam1, 1065353216))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uParam1->f_7, false);
		PLAYER::_0x6ECFC621A168424C(uParam1->f_7, uParam1->f_7, 0, 0);
	}

	return true;
}

BOOL func_7(var uParam0, var uParam1) // Position - 0x29C Hash - 0x758BAD56 ^0x4A47B29D
{
	var statId;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (func_16(joaat("upgrade_fsh_bait_crayfish")) && !uParam1->f_5)
	{
		uParam1->f_3 = uParam1->f_3 + 1;
		uParam1->f_5 = 1;
	}

	if (uParam1->f_5 && func_17())
	{
		uParam1->f_5 = 0;
		func_19(joaat("at_crayfish"), joaat("a_c_crawfish_01"), func_18(PLAYER::PLAYER_ID()), true, true);
		statId = { func_20(joaat("COLLECTED"), joaat("at_crayfish")) };
		STATS::_STAT_ID_INCREMENT_INT(&statId, 1);
		return true;
	}

	return false;
}

void func_8(var uParam0) // Position - 0x322 Hash - 0xAF6DD2A8 ^0xEE9F9524
{
	int i;
	int num;

	i = 0;

	for (i = 0; i <= 1 - 1; i = i + 1)
	{
		num = i;
	
		if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_9[num]))
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_9[num]);
	}

	return;
}

BOOL func_9(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x360 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_21())
			return true;
	
		if (Global_1058888.f_3 && !Global_1572887.f_8)
			if (Global_1055058[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/].f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
				return true;
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
			return Global_1898164.f_163;
		else
			return Global_1898164.f_164;
	}

	if (Global_1898164.f_1[0 /*5*/].f_2 == 8)
	{
		num = func_22(Global_1898164.f_1[0 /*5*/]);
	
		if (func_23(num) && func_24(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_25(Global_1898164.f_1[0 /*5*/]))
		return true;

	if (Global_1935630 && 40959 & -1 - iParam0 != false)
		return true;

	if (!bParam1)
		if (MISC::GET_GAME_TIMER() - 5000 < Global_1898438)
			return true;

	switch (Global_1898164.f_1[0 /*5*/].f_2)
	{
		case 0:
			return false;
	
		case 1:
			return iParam0 & 1 == 0;
	
		case 2:
			return iParam0 & 16 == 0;
	
		case 3:
			return iParam0 & 128 == 0;
	
		case 4:
			return iParam0 & 2 == 0;
	
		case 5:
			return iParam0 & 32 == 0;
	
		case 6:
			return iParam0 & 4 == 0;
	
		case 8:
			return iParam0 & 8 == 0;
	
		case 9:
			return iParam0 & 64 == 0;
	
		case 10:
			return iParam0 & 512 == 0;
	
		case 11:
			return iParam0 & 256 == 0;
	
		default:
		
	}

	return false;
}

Vector3 func_10(var uParam0) // Position - 0x564 Hash - 0x61C56E0F ^0xBA91698E
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
		return TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true);

	return 0f, 0f, 0f;
}

Hash func_11() // Position - 0x586 Hash - 0x9F572D68 ^0xF099B06A
{
	return joaat("p_crayfish01x");
}

int func_12(int iParam0) // Position - 0x593 Hash - 0x3ADC175 ^0xE699022C
{
	Vector3 scenarioPointCoords;
	int num;
	int num2;
	float distanceBetweenCoords;
	float num3;
	int i;

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam0))
		return -1;

	scenarioPointCoords = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0, true) };
	distanceBetweenCoords = 9999999f;
	num3 = 9999999f;
	i = 0;

	for (i = 0; i <= 17 - 1; i = i + 1)
	{
		num = i;
		distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(scenarioPointCoords, func_26(num), true);
	
		if (distanceBetweenCoords < num3)
		{
			num3 = distanceBetweenCoords;
			num2 = num;
		}
	}

	return num2;
}

Vector3 func_13(var uParam0) // Position - 0x601 Hash - 0x1CB8DCBB ^0xDB6E4401
{
	Vector3 vector;
	float groundZ;

	vector = { func_10(uParam0) };
	groundZ = 0f;

	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &groundZ, true))
	{
		vector.f_2 = groundZ + 0.1f;
		return vector;
	}

	return 0f, 0f, 0f;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x63A Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_15(var uParam0, int iParam1) // Position - 0x664 Hash - 0xC1A7C2B2 ^0xD8164379
{
	if (uParam0->f_8 == 0)
		uParam0->f_8 = ENTITY::PIN_CLOSEST_MAP_ENTITY(func_27(uParam0->f_1), func_26(uParam0->f_1), 11);
	else if (ENTITY::IS_MAP_ENTITY_PINNED(uParam0->f_8))
		uParam0->f_7 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(uParam0->f_8));

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
		return false;

	return true;
}

BOOL func_16(int iParam0) // Position - 0x6C0 Hash - 0x2C6D6290 ^0xF2EA2FC
{
	struct<10> eventData;
	int i;

	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) != 0)
	{
		for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i) == -1730772208)
				if (SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 10))
					if (eventData.f_2 == iParam0 || iParam0 == 0)
						return true;
		}
	}

	return false;
}

int func_17() // Position - 0x71F Hash - 0xA9C3C0A7 ^0x6AD5238C
{
	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_35) == 0)
		return 1;

	return 0;
}

Vector3 func_18(Player plParam0) // Position - 0x737 Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_19(Hash hParam0, int iParam1, Vector3 vParam2, var uParam3, var uParam4, BOOL bParam5, BOOL bParam6) // Position - 0x74B Hash - 0x1E507D43 ^0xD4646B2A
{
	Hash mapDiscoverableFromStatItem;
	Hash discoveryHash;
	int num;

	mapDiscoverableFromStatItem = COMPENDIUM::COMPENDIUM_GET_MAP_DISCOVERABLE_FROM_STAT_ITEM(hParam0, vParam2);
	discoveryHash = mapDiscoverableFromStatItem;

	if (discoveryHash != 0 && !MAP::_MAP_IS_DISCOVERY_ACTIVE(discoveryHash))
		MAP::_MAP_DISCOVER_REGION(discoveryHash);

	if (bParam5 && joaat("at_horse") != hParam0)
		COMPENDIUM::COMPENDIUM_ANIMAL_OBSERVED_BY_STAT_NAME(hParam0, bParam6);

	if (Global_1572887.f_12 == -1)
	{
		if (Global_40.f_39 == joaat("Player_Zero"))
		{
			num = func_28(hParam0, iParam1, 1);
		
			if (num != 0)
				func_29(num, 0);
		}
		else
		{
			num = func_28(hParam0, iParam1, 1);
		
			if (num != 0)
			{
				if (HUD::_JOURNAL_CAN_WRITE_ENTRY(num))
				{
					num = func_28(hParam0, iParam1, 0);
				
					if (num != 0)
						func_29(num, 0);
				}
			}
		}
	}

	return;
}

struct<2> func_20(int iParam0, int iParam1) // Position - 0x7FD Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_21() // Position - 0x813 Hash - 0x2C13EB06 ^0x38F12C8A
{
	if (Global_1048576)
		return true;

	if (Global_1572887.f_4)
		return true;

	if (Global_524298)
		return true;

	if (Global_1048577)
		return true;

	if (Global_1051043 == -1 && Global_1572887.f_6 & true != 0)
		return true;

	return false;
}

int func_22(int iParam0) // Position - 0x866 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_25(iParam0))
		return -1;

	return func_31(func_30(iParam0));
}

BOOL func_23(int iParam0) // Position - 0x886 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_24(int iParam0, int iParam1) // Position - 0x89C Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_25(int iParam0) // Position - 0x8AB Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

Vector3 func_26(int iParam0) // Position - 0x8DE Hash - 0x563C355B ^0x563C355B
{
	switch (iParam0)
	{
		case 0:
			return 2027.1624f, -1722.4318f, 40.62656f;
	
		case 1:
			return 2045.327f, -1785.8585f, 40.69251f;
	
		case 2:
			return 2021.4309f, -1789.3138f, 40.40718f;
	
		case 3:
			return 2087.0898f, -1859.7418f, 40.49999f;
	
		case 4:
			return 2058.266f, -1866.5864f, 40.5274f;
	
		case 5:
			return 2042.2246f, -1885.9706f, 40.49999f;
	
		case 6:
			return 1672.3448f, -826.9699f, 39.77722f;
	
		case 7:
			return 1710.5026f, -850.5192f, 40.24175f;
	
		case 8:
			return 1693.8737f, -942.7992f, 40.27774f;
	
		case 9:
			return 1756.4514f, -1017.7043f, 40.73364f;
	
		case 10:
			return 2339.3696f, -544.2522f, 40.72062f;
	
		case 11:
			return 2301.8955f, -515.74207f, 40.62392f;
	
		case 12:
			return 2253.7153f, -549.9788f, 40.5689f;
	
		case 13:
			return 2281.2214f, -640.3717f, 40.46832f;
	
		case 14:
			return 2215.9521f, -679.2456f, 40.62037f;
	
		case 15:
			return 2176.255f, -693.67944f, 40.68019f;
	
		case 16:
			return 2258.8213f, -720.3987f, 40.47908f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

Hash func_27(int iParam0) // Position - 0xA89 Hash - 0xB8EC44B7 ^0xA3B6CD1C
{
	switch (iParam0)
	{
		case 0:
			return joaat("dis_bay_catfishhole01_decal");
	
		case 1:
			return joaat("dis_bay_catfishhole02_decal");
	
		case 2:
			return joaat("dis_bay_catfishhole03_decal");
	
		case 3:
			return joaat("dis_bay_catfishhole04_decal");
	
		case 4:
			return joaat("dis_bay_catfishhole05_decal");
	
		case 5:
			return joaat("dis_bay_catfishhole06_decal");
	
		case 6:
			return joaat("dis_bay_catfishhole07_decal");
	
		case 7:
			return joaat("dis_bay_catfishhole08_decal");
	
		case 8:
			return joaat("dis_bay_catfishhole09_decal");
	
		case 9:
			return joaat("dis_bay_catfishhole10_decal");
	
		case 10:
			return joaat("dis_bay_catfishhole11_decal");
	
		case 11:
			return joaat("dis_bay_catfishhole12_decal");
	
		case 12:
			return joaat("dis_bay_catfishhole13_decal");
	
		case 13:
			return joaat("dis_bay_catfishhole14_decal");
	
		case 14:
			return joaat("dis_bay_catfishhole15_decal");
	
		case 15:
			return joaat("dis_bay_catfishhole16_decal");
	
		case 16:
			return joaat("dis_bay_catfishhole17_decal");
	
		default:
		
	}

	return 0;
}

int func_28(Hash hParam0, int iParam1, int iParam2) // Position - 0xB88 Hash - 0x318BFC1C ^0x24093A44
{
	switch (hParam0)
	{
		case joaat("at_duck_pekin"):
			if (iParam2 == 1)
				return joaat("journal_animal_peking_duck_ar");
			else
				return joaat("journal_animal_peking_duck_jn");
			break;
	
		case joaat("at_turkey"):
			if (iParam2 == 1)
				return joaat("journal_animal_turkey_ar");
			else
				return joaat("journal_animal_turkey_jn");
			break;
	
		case joaat("at_cormorant_neo"):
			if (iParam2 == 1)
				return joaat("journal_animal_neotropic_cormorant_ar");
			else
				return joaat("journal_animal_neotropic_cormorant_jn");
			break;
	
		case joaat("at_sparrow_gold"):
			if (iParam2 == 1)
				return joaat("journal_animal_golden_crowned_sparrow_ar");
			else
				return joaat("journal_animal_golden_crowned_sparrow_jn");
			break;
	
		case joaat("at_chipmunk"):
			if (iParam2 == 1)
				return joaat("journal_animal_chipmunk_ar");
			else
				return joaat("journal_animal_chipmunk_jn");
			break;
	
		case joaat("at_pheasant_chinese"):
			if (iParam2 == 1)
				return joaat("journal_animal_pheasant_ar");
			else
				return joaat("journal_animal_pheasant_jn");
			break;
	
		case joaat("at_moose_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_moose_ar");
			else
				return joaat("journal_animal_legendary_moose_jn");
			break;
	
		case joaat("at_dog_mutt"):
			if (iParam2 == 1)
				return joaat("journal_animal_mutt_ar");
			else
				return joaat("journal_animal_mutt_jn");
			break;
	
		case joaat("at_crane"):
			if (iParam2 == 1)
				return joaat("journal_animal_whooping_crane_ar");
			else
				return joaat("journal_animal_whooping_crane_jn");
			break;
	
		case joaat("at_vulture_east"):
			if (iParam2 == 1)
				return joaat("journal_animal_eastern_turkey_vulture_ar");
			else
				return joaat("journal_animal_eastern_turkey_vulture_jn");
			break;
	
		case joaat("at_buck_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_buck_ar");
			else
				return joaat("journal_animal_legendary_buck_jn");
			break;
	
		case joaat("at_squirrel_red"):
			if (iParam2 == 1)
				return joaat("journal_animal_red_squirrel_ar");
			else
				return joaat("journal_animal_red_squirrel_jn");
			break;
	
		case joaat("at_pronghorn_baja"):
			if (iParam2 == 1)
				return joaat("journal_animal_baja_californian_pronghorn_ar");
			else
				return joaat("journal_animal_baja_californian_pronghorn_jn");
			break;
	
		case joaat("at_californiacondor"):
			if (iParam2 == 1)
				return joaat("journal_animal_californian_condor_ar");
			else
				return joaat("journal_animal_californian_condor_jn");
			break;
	
		case joaat("at_turkey_rio"):
			if (iParam2 == 1)
				return joaat("journal_animal_rio_grande_turkey_ar");
			else
				return joaat("journal_animal_rio_grande_turkey_jn");
			break;
	
		case joaat("at_eagle_golden"):
			if (iParam2 == 1)
				return joaat("journal_animal_golden_eagle_ar");
			else
				return joaat("journal_animal_golden_eagle_jn");
			break;
	
		case joaat("at_dog_border"):
			if (iParam2 == 1)
				return joaat("journal_animal_collie_ar");
			else
				return joaat("journal_animal_collie_jn");
			break;
	
		case joaat("at_raven"):
			if (iParam2 == 1)
				return joaat("journal_animal_raven_ar");
			else
				return joaat("journal_animal_raven_jn");
			break;
	
		case joaat("at_pronghorn_sono"):
			if (iParam2 == 1)
				return joaat("journal_animal_sonoran_pronghorn_ar");
			else
				return joaat("journal_animal_sonoran_pronghorn_jn");
			break;
	
		case joaat("at_buffalo_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_white_buffalo_ar");
			else
				return joaat("journal_animal_legendary_white_buffalo_jn");
			break;
	
		case joaat("at_rabbit"):
			if (iParam2 == 1)
				return joaat("journal_animal_rabbit_ar");
			else
				return joaat("journal_animal_rabbit_jn");
			break;
	
		case joaat("at_gator"):
			if (iParam2 == 1)
				return joaat("journal_animal_aligator_ar");
			else
				return joaat("journal_animal_aligator_jn");
			break;
	
		case joaat("at_rooster_java"):
		case joaat("at_rooster"):
		case joaat("at_rooster_leghorn"):
			if (iParam2 == 1)
				return joaat("journal_animal_rooster_ar");
			else
				return joaat("journal_animal_rooster_jn");
			break;
	
		case joaat("at_loon"):
			if (iParam2 == 1)
				return joaat("journal_animal_common_loon_ar");
			else
				return joaat("journal_animal_common_loon_jn");
			break;
	
		case joaat("at_sheep"):
			if (iParam2 == 1)
				return joaat("journal_animal_sheep_ar");
			else
				return joaat("journal_animal_sheep_jn");
			break;
	
		case joaat("at_snake_cotton"):
			if (iParam2 == 1)
				return joaat("journal_animal_cottonmouth_snake_ar");
			else
				return joaat("journal_animal_cottonmouth_snake_jn");
			break;
	
		case joaat("at_duck"):
			if (iParam2 == 1)
				return joaat("journal_animal_mallard_duck_ar");
			else
				return joaat("journal_animal_mallard_duck_jn");
			break;
	
		case joaat("at_bull_devon"):
			if (iParam2 == 1)
				return joaat("journal_animal_devon_bull_ar");
			else
				return joaat("journal_animal_devon_bull_jn");
			break;
	
		case joaat("at_dog_bluetick"):
			if (iParam2 == 1)
				return joaat("journal_animal_coonhound_ar");
			else
				return joaat("journal_animal_coonhound_jn");
			break;
	
		case joaat("at_pheasant"):
			if (iParam2 == 1)
				return joaat("journal_animal_ring_necked_pheasant_ar");
			else
				return joaat("journal_animal_ring_necked_pheasant_jn");
			break;
	
		case joaat("at_cedarwaxwing"):
			if (iParam2 == 1)
				return joaat("journal_animal_cedar_waxwing_ar");
			else
				return joaat("journal_animal_cedar_waxwing_jn");
			break;
	
		case joaat("at_heron_tri"):
			if (iParam2 == 1)
				return joaat("journal_animal_blue_heron_ar");
			else
				return joaat("journal_animal_blue_heron_jn");
			break;
	
		case joaat("at_cow"):
			if (iParam2 == 1)
				return joaat("journal_animal_cracker_cow_ar");
			else
				return joaat("journal_animal_cracker_cow_jn");
			break;
	
		case joaat("at_egret_snowy"):
			if (iParam2 == 1)
				return joaat("journal_animal_snowy_egret_ar");
			else
				return joaat("journal_animal_snowy_egret_jn");
			break;
	
		case joaat("at_ox_devon"):
			if (iParam2 == 1)
				return joaat("journal_animal_devon_oxen_ar");
			else
				return joaat("journal_animal_devon_oxen_jn");
			break;
	
		case joaat("at_rosespoonbill"):
			if (iParam2 == 1)
				return joaat("journal_animal_spoonbill_ar");
			else
				return joaat("journal_animal_spoonbill_jn");
			break;
	
		case joaat("at_crane_sand"):
			if (iParam2 == 1)
				return joaat("journal_animal_sandhill_crane_ar");
			else
				return joaat("journal_animal_sandhill_crane_ar");
			break;
	
		case joaat("at_dog_catahoula"):
			if (iParam2 == 1)
				return joaat("journal_animal_catahoula_cur_ar");
			else
				return joaat("journal_animal_catahoula_cur_jn");
			break;
	
		case joaat("at_sparrow_euro"):
			if (iParam2 == 1)
				return joaat("journal_animal_eurasian_tree_sparrow_ar");
			else
				return joaat("journal_animal_eurasian_tree_sparrow_jn");
			break;
	
		case joaat("at_cougar"):
			if (iParam2 == 1)
				return joaat("journal_animal_cougar_ar");
			else
				return joaat("journal_animal_cougar_jn");
			break;
	
		case joaat("at_squirrel_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_black_squirrel_ar");
			else
				return joaat("journal_animal_black_squirrel_jn");
			break;
	
		case joaat("at_buck"):
			if (iParam2 == 1)
				return joaat("journal_animal_whitetail_buck_ar");
			else
				return joaat("journal_animal_whitetail_buck_jn");
			break;
	
		case joaat("at_songbird_scarlet"):
			if (iParam2 == 1)
				return joaat("journal_animal_scarlet_tanager_songbird_ar");
			else
				return joaat("journal_animal_scarlet_tanager_songbird_jn");
			break;
	
		case joaat("at_fox"):
			if (iParam2 == 1)
				return joaat("journal_animal_fox_ar");
			else
				return joaat("journal_animal_fox_jn");
			break;
	
		case joaat("at_owl_north"):
		case joaat("at_owl"):
			if (iParam2 == 1)
				return joaat("journal_animal_horned_owl_ar");
			else
				return joaat("journal_animal_horned_owl_jn");
			break;
	
		case joaat("at_skunk"):
			if (iParam2 == 1)
				return joaat("journal_animal_skunk_ar");
			else
				return joaat("journal_animal_skunk_jn");
			break;
	
		case joaat("at_cougar_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_cougar_ar");
			else
				return joaat("journal_animal_legendary_cougar_jn");
			break;
	
		case joaat("at_snake_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_black_tail_rattlesnake_ar");
			else
				return joaat("journal_animal_blacktailed_rattle_snake_jn");
			break;
	
		case joaat("at_chicken_prairie"):
			if (iParam2 == 1)
				return joaat("journal_animal_prarie_chicken_ar");
			else
				return joaat("journal_animal_prarie_chicken_jn");
			break;
	
		case joaat("at_pronghorn_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_pronghorn_ar");
			else
				return joaat("journal_animal_legendary_pronghorn_jn");
			break;
	
		case joaat("at_possum"):
			if (iParam2 == 1)
				return joaat("journal_animal_possum_ar");
			else
				return joaat("journal_animal_possum_jn");
			break;
	
		case joaat("at_ram_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_desert_bighorn_ram_ar");
			else
				return joaat("journal_animal_desert_bighorn_ram_jn");
			break;
	
		case joaat("at_fox_silver"):
			if (iParam2 == 1)
				return joaat("journal_animal_silver_fox_ar");
			else
				return joaat("journal_animal_silver_fox_jn");
			break;
	
		case joaat("at_pig_china"):
			if (iParam2 == 1)
				return joaat("journal_animal_china_pig_ar");
			else
				return joaat("journal_animal_china_pig_jn");
			break;
	
		case joaat("at_ram_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_long_horn_ar");
			else
				return joaat("journal_animal_legendary_long_horn_jn");
			break;
	
		case joaat("at_snake_ferdelance"):
		case joaat("at_snake_copper_north"):
		case joaat("at_snake_copper_south"):
			if (iParam2 == 1)
				return joaat("journal_animal_ferdelance_snake_ar");
			else
				return joaat("journal_animal_ferdelance_snake_jn");
			break;
	
		case joaat("at_quail"):
			if (iParam2 == 1)
				return joaat("journal_animal_quail_ar");
			else
				return joaat("journal_animal_quail_jn");
			break;
	
		case joaat("at_rat"):
			if (iParam2 == 1)
				return joaat("journal_animal_brown_rat_ar");
			else
				return joaat("journal_animal_brown_rat_jn");
			break;
	
		case joaat("at_parrot_scarlet"):
			if (iParam2 == 1)
				return joaat("journal_animal_scarlet_macaw_ar");
			else
				return joaat("journal_animal_scarlet_macaw_jn");
			break;
	
		case joaat("at_chicken_java"):
			if (iParam2 == 1)
				return joaat("journal_animal_java_chicken_ar");
			else
				return joaat("journal_animal_java_chicken_jn");
			break;
	
		case joaat("at_dog_bloodhound"):
			if (iParam2 == 1)
				return joaat("journal_animal_bloodhound_ar");
			else
				return joaat("journal_animal_bloodhound_jn");
			break;
	
		case joaat("at_ram_sierra"):
			if (iParam2 == 1)
				return joaat("journal_animal_sierra_nevada_bighorn_ar");
			else
				return joaat("journal_animal_sierra_nevada_bighorn_jn");
			break;
	
		case joaat("at_squirrel"):
			if (iParam2 == 1)
				return joaat("journal_animal_squirrel_ar");
			else
				return joaat("journal_animal_squirrel_jn");
			break;
	
		case joaat("at_bear_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_black_bear_ar");
			else
				return joaat("journal_animal_black_bear_jn");
			break;
	
		case joaat("at_coyote"):
			if (iParam2 == 1)
				return joaat("journal_animal_coyote_ar");
			else
				return joaat("journal_animal_coyote_jn");
			break;
	
		case joaat("at_iguana_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_desert_iguana_ar");
			else
				return joaat("journal_animal_desert_iguana_jn");
			break;
	
		case joaat("at_snake_boa"):
		case joaat("at_snake_boa_rainbow"):
		case joaat("at_snake_boa_sun"):
			if (iParam2 == 1)
				return joaat("journal_animal_red_boa_ar");
			else
				return joaat("journal_animal_red_boa_jn");
			break;
	
		case joaat("at_deer"):
			if (iParam2 == 1)
				return joaat("journal_animal_deer_ar");
			else
				return joaat("journal_animal_deer_jn");
			break;
	
		case joaat("at_fox_gray"):
			if (iParam2 == 1)
				return joaat("journal_animal_grey_fox_ar");
			else
				return joaat("journal_animal_grey_fox_jn");
			break;
	
		case joaat("at_pelican"):
			if (iParam2 == 1)
				return joaat("journal_animal_pelican_ar");
			else
				return joaat("journal_animal_pelican_jn");
			break;
	
		case joaat("at_wolf"):
			if (iParam2 == 1)
				return joaat("journal_animal_wolf_ar");
			else
				return joaat("journal_animal_wolf_jn");
			break;
	
		case joaat("at_javelina"):
			if (iParam2 == 1)
				return joaat("journal_animal_peccary_ar");
			else
				return joaat("journal_animal_peccary_jn");
			break;
	
		case joaat("at_woodpecker_pileated"):
			if (iParam2 == 1)
				return joaat("journal_animal_wood_pecker_02_ar");
			else
				return joaat("journal_animal_wood_pecker_02_jn");
			break;
	
		case joaat("at_wolf_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_wolf_ar");
			else
				return joaat("journal_animal_legendary_wolf_jn");
			break;
	
		case joaat("at_bull_hereford"):
			if (iParam2 == 1)
				return joaat("journal_animal_hereford_bull_ar");
			else
				return joaat("journal_animal_hereford_bull_jn");
			break;
	
		case joaat("at_rat_black"):
			if (iParam2 == 1)
				return joaat("journal_animal_rat_ar");
			else
				return joaat("journal_animal_rat_jn");
			break;
	
		case joaat("at_ram_rocky"):
			if (iParam2 == 1)
				return joaat("journal_animal_rocky_mountain_bighorn_ar");
			else
				return joaat("journal_animal_rocky_mountain_bighorn_jn");
			break;
	
		case joaat("at_horse"):
			if (iParam1 == joaat("a_c_horse_americanpaint_overo") || iParam1 == joaat("a_c_horse_americanpaint_splashedwhite") || iParam1 == joaat("a_c_horse_americanpaint_tobiano") || iParam1 == joaat("a_c_horse_americanpaint_greyovero"))
				if (iParam2 == 1)
					return joaat("journal_animal_american_paint_ar");
				else
					return joaat("journal_animal_american_paint_jn");
			else if (iParam1 == joaat("a_c_horse_americanstandardbred_black") || iParam1 == joaat("a_c_horse_americanstandardbred_buckskin") || iParam1 == joaat("a_c_horse_americanstandardbred_palominodapple") || iParam1 == joaat("a_c_horse_americanstandardbred_silvertailbuckskin"))
				if (iParam2 == 1)
					return joaat("journal_animal_american_standardbred_ar");
				else
					return joaat("journal_animal_american_standardbred_jn");
			else if (iParam1 == joaat("a_c_horse_andalusian_darkbay") || iParam1 == joaat("a_c_horse_andalusian_perlino") || iParam1 == joaat("a_c_horse_andalusian_rosegray"))
				if (iParam2 == 1)
					return joaat("journal_animal_andalusian_ar");
				else
					return joaat("journal_animal_andalusian_jn");
			else if (iParam1 == joaat("a_c_horse_appaloosa_blanket") || iParam1 == joaat("a_c_horse_appaloosa_leopard") || iParam1 == joaat("a_c_horse_appaloosa_leopardblanket") || iParam1 == joaat("a_c_horse_appaloosa_brownleopard") || iParam1 == joaat("a_c_horse_appaloosa_fewspotted_pc"))
				if (iParam2 == 1)
					return joaat("journal_animal_appaloosa_ar");
				else
					return joaat("journal_animal_appaloosa_jn");
			else if (iParam1 == joaat("a_c_horse_arabian_black") || iParam1 == joaat("a_c_horse_arabian_redchestnut") || iParam1 == joaat("a_c_horse_arabian_rosegreybay") || iParam1 == joaat("a_c_horse_arabian_warpedbrindle_pc") || iParam1 == joaat("a_c_horse_arabian_white"))
				if (iParam2 == 1)
					return joaat("journal_animal_arabian_ar");
				else
					return joaat("journal_animal_arabian_jn");
			else if (iParam1 == joaat("a_c_horse_ardennes_bayroan") || iParam1 == joaat("a_c_horse_ardennes_irongreyroan") || iParam1 == joaat("a_c_horse_ardennes_strawberryroan"))
				if (iParam2 == 1)
					return joaat("journal_animal_ardennes_ar");
				else
					return joaat("journal_animal_ardennes_jn");
			else if (iParam1 == joaat("a_c_horse_belgian_blondchestnut") || iParam1 == joaat("a_c_horse_belgian_mealychestnut"))
				if (iParam2 == 1)
					return joaat("journal_animal_belgian_ar");
				else
					return joaat("journal_animal_belgian_jn");
			else if (iParam1 == joaat("a_c_horse_dutchwarmblood_chocolateroan") || iParam1 == joaat("a_c_horse_dutchwarmblood_sealbrown") || iParam1 == joaat("a_c_horse_dutchwarmblood_sootybuckskin"))
				if (iParam2 == 1)
					return joaat("journal_animal_dutch_warmblood_ar");
				else
					return joaat("journal_animal_dutch_warmblood_jn");
			else if (iParam1 == joaat("a_c_horse_hungarianhalfbred_darkdapplegrey") || iParam1 == joaat("a_c_horse_hungarianhalfbred_flaxenchestnut") || iParam1 == joaat("a_c_horse_hungarianhalfbred_piebaldtobiano"))
				if (iParam2 == 1)
					return joaat("journal_animal_hungarian_halfbred_ar");
				else
					return joaat("journal_animal_hungarian_halfbred_jn");
			else if (iParam1 == joaat("a_c_horse_kentuckysaddle_black") || iParam1 == joaat("a_c_horse_kentuckysaddle_buttermilkbuckskin_pc") || iParam1 == joaat("a_c_horse_kentuckysaddle_chestnutpinto") || iParam1 == joaat("a_c_horse_kentuckysaddle_grey") || iParam1 == joaat("a_c_horse_kentuckysaddle_silverbay"))
				if (iParam2 == 1)
					return joaat("journal_animal_kentucky_saddler_ar");
				else
					return joaat("journal_animal_kentucky_saddler_jn");
			else if (iParam1 == joaat("a_c_horse_missourifoxtrotter_amberchampagne") || iParam1 == joaat("a_c_horse_missourifoxtrotter_silverdapplepinto"))
				if (iParam2 == 1)
					return joaat("journal_animal_missouri_foxtrotter_ar");
				else
					return joaat("journal_animal_missouri_foxtrotter_jn");
			else if (iParam1 == joaat("a_c_horse_morgan_bay") || iParam1 == joaat("a_c_horse_morgan_bayroan") || iParam1 == joaat("a_c_horse_morgan_liverchestnut_pc") || iParam1 == joaat("a_c_horse_morgan_flaxenchestnut") || iParam1 == joaat("a_c_horse_morgan_palomino"))
				if (iParam2 == 1)
					return joaat("journal_animal_morgan_ar");
				else
					return joaat("journal_animal_morgan_jn");
			else if (iParam1 == joaat("a_c_horse_mustang_grullodun") || iParam1 == joaat("a_c_horse_mustang_tigerstripedbay") || iParam1 == joaat("a_c_horse_mustang_wildbay"))
				if (iParam2 == 1)
					return joaat("journal_animal_mustang_ar");
				else
					return joaat("journal_animal_mustang_jn");
			else if (iParam1 == joaat("a_c_horse_nokota_blueroan") || iParam1 == joaat("a_c_horse_nokota_reversedappleroan") || iParam1 == joaat("a_c_horse_nokota_whiteroan"))
				if (iParam2 == 1)
					return joaat("journal_animal_nokota_ar");
				else
					return joaat("journal_animal_nokota_jn");
			else if (iParam1 == joaat("a_c_horse_shire_darkbay") || iParam1 == joaat("a_c_horse_shire_lightgrey") || iParam1 == joaat("a_c_horse_shire_ravenblack"))
				if (iParam2 == 1)
					return joaat("journal_animal_shire_ar");
				else
					return joaat("journal_animal_shire_jn");
			else if (iParam1 == joaat("a_c_horse_suffolkpunch_redchestnut") || iParam1 == joaat("a_c_horse_suffolkpunch_sorrel"))
				if (iParam2 == 1)
					return joaat("journal_animal_suffolk_punch_ar");
				else
					return joaat("journal_animal_suffolk_punch_jn");
			else if (iParam1 == joaat("a_c_horse_tennesseewalker_blackrabicano") || iParam1 == joaat("a_c_horse_tennesseewalker_chestnut") || iParam1 == joaat("a_c_horse_tennesseewalker_dapplebay") || iParam1 == joaat("a_c_horse_tennesseewalker_goldpalomino_pc") || iParam1 == joaat("a_c_horse_tennesseewalker_mahoganybay") || iParam1 == joaat("a_c_horse_tennesseewalker_redroan") || iParam1 == joaat("a_c_horse_tennesseewalker_flaxenroan"))
				if (iParam2 == 1)
					return joaat("journal_animal_tennessee_walker_ar");
				else
					return joaat("journal_animal_tennessee_walker_jn");
			else if (iParam1 == joaat("a_c_horse_thoroughbred_blackchestnut") || iParam1 == joaat("a_c_horse_thoroughbred_bloodbay") || iParam1 == joaat("a_c_horse_thoroughbred_brindle") || iParam1 == joaat("a_c_horse_thoroughbred_dapplegrey") || iParam1 == joaat("a_c_horse_thoroughbred_reversedappleblack"))
				if (iParam2 == 1)
					return joaat("journal_animal_thoroughbred_ar");
				else
					return joaat("journal_animal_thoroughbred_jn");
			else if (iParam1 == joaat("a_c_horse_turkoman_darkbay") || iParam1 == joaat("a_c_horse_turkoman_gold") || iParam1 == joaat("a_c_horse_turkoman_silver"))
				if (iParam2 == 1)
					return joaat("journal_animal_turkoman_ar");
				else
					return joaat("journal_animal_turkoman_jn");
			break;
	
		case joaat("at_sparrow"):
			if (iParam2 == 1)
				return joaat("journal_animal_sparrow_ar");
			else
				return joaat("journal_animal_sparrow_jn");
			break;
	
		case joaat("at_turtle_sea"):
			if (iParam2 == 1)
				return joaat("journal_animal_sea_turtle_ar");
			else
				return joaat("journal_animal_sea_turtle_jn");
			break;
	
		case joaat("at_elk"):
			if (iParam2 == 1)
				return joaat("journal_animal_elk_f_ar");
			else
				return joaat("journal_animal_elk_f_jn");
			break;
	
		case joaat("at_armadillo"):
			if (iParam2 == 1)
				return joaat("journal_animal_armadillo_ar");
			else
				return joaat("journal_animal_armadillo_jn");
			break;
	
		case joaat("at_pronghorn"):
			if (iParam2 == 1)
				return joaat("journal_animal_pronghorn_ar");
			else
				return joaat("journal_animal_pronghorn_jn");
			break;
	
		case joaat("at_hawk_rough"):
			if (iParam2 == 1)
				return joaat("journal_animal_rough_legged_hawk_ar");
			else
				return joaat("journal_animal_rough_legged_hawk_jn");
			break;
	
		case joaat("at_panther"):
			if (iParam2 == 1)
				return joaat("journal_animal_florida_panther_ar");
			else
				return joaat("journal_animal_florida_panther_jn");
			break;
	
		case joaat("at_fox_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_fox_ar");
			else
				return joaat("journal_animal_legendary_fox_jn");
			break;
	
		case joaat("at_moose_bull"):
			if (iParam2 == 1)
				return joaat("journal_animal_moose_ar");
			else
				return joaat("journal_animal_moose_jn");
			break;
	
		case joaat("at_snake_diamond"):
			if (iParam2 == 1)
				return joaat("journal_animal_rattlesnake_ar");
			else
				return joaat("journal_animal_rattlesnake_jn");
			break;
	
		case joaat("at_pig"):
			if (iParam2 == 1)
				return joaat("journal_animal_pig_ar");
			else
				return joaat("journal_animal_pig_jn");
			break;
	
		case joaat("at_dog_foxhound"):
			if (iParam2 == 1)
				return joaat("journal_animal_fox_hound_ar");
			else
				return joaat("journal_animal_fox_hound_jn");
			break;
	
		case joaat("at_cat"):
			if (iParam2 == 1)
				return joaat("journal_animal_cat_ar");
			else
				return joaat("journal_animal_cat_jn");
			break;
	
		case joaat("at_turtle_snap"):
			if (iParam2 == 1)
				return joaat("journal_animal_snapping_turtle_ar");
			else
				return joaat("journal_animal_snapping_turtle_jn");
			break;
	
		case joaat("at_wolf_timber"):
			if (iParam2 == 1)
				return joaat("journal_animal_timber_wolf_ar");
			else
				return joaat("journal_animal_timber_wolf_jn");
			break;
	
		case joaat("at_goat"):
			if (iParam2 == 1)
				return joaat("journal_animal_alpine_goat_ar");
			else
				return joaat("journal_animal_alpine_goat_jn");
			break;
	
		case joaat("at_songbird"):
			if (iParam2 == 1)
				return joaat("journal_animal_songbird_ar");
			else
				return joaat("journal_animal_songbird_jn");
			break;
	
		case joaat("at_pelican_brown"):
			if (iParam2 == 1)
				return joaat("journal_animal_brown_pelican_ar");
			else
				return joaat("journal_animal_brown_pelican_jn");
			break;
	
		case joaat("at_donkey"):
			if (iParam2 == 1)
				return joaat("journal_animal_donkey_ar");
			else
				return joaat("journal_animal_donkey_jn");
			break;
	
		case joaat("at_hawk"):
			if (iParam2 == 1)
				return joaat("journal_animal_ferruginious_hawk_ar");
			else
				return joaat("journal_animal_ferruginious_hawk_jn");
			break;
	
		case joaat("at_oriole"):
			if (iParam2 == 1)
				return joaat("journal_animal_oriole_ar");
			else
				return joaat("journal_animal_oriole_jn");
			break;
	
		case joaat("at_woodpecker_red"):
			if (iParam2 == 1)
				return joaat("journal_animal_wood_pecker_ar");
			else
				return joaat("journal_animal_wood_pecker_jn");
			break;
	
		case joaat("at_badger"):
			if (iParam2 == 1)
				return joaat("journal_animal_badger_ar");
			else
				return joaat("journal_animal_badger_jn");
			break;
	
		case joaat("at_crow"):
			if (iParam2 == 1)
				return joaat("journal_animal_american_crow_ar");
			else
				return joaat("journal_animal_american_crow_jn");
			break;
	
		case joaat("at_parrot_green"):
			if (iParam2 == 1)
				return joaat("journal_animal_great_green_macaw_ar");
			else
				return joaat("journal_animal_great_green_macaw_jn");
			break;
	
		case joaat("at_beaver_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_beaver_ar");
			else
				return joaat("journal_animal_legendary_beaver_jn");
			break;
	
		case joaat("at_boar"):
			if (iParam2 == 1)
				return joaat("journal_animal_wild_boar_ar");
			else
				return joaat("journal_animal_wild_boar_jn");
			break;
	
		case joaat("at_elk_bull"):
			if (iParam2 == 1)
				return joaat("journal_animal_elk_ar");
			else
				return joaat("journal_animal_elk_jn");
			break;
	
		case joaat("at_toad"):
		case joaat("at_toad_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_toad_ar");
			else
				return joaat("journal_animal_toad_jn");
			break;
	
		case joaat("at_goose"):
			if (iParam2 == 1)
				return joaat("journal_animal_canada_goose_ar");
			else
				return joaat("journal_animal_canada_goose_jn");
			break;
	
		case joaat("at_mule"):
			if (iParam2 == 1)
				return joaat("journal_animal_mule_ar");
			else
				return joaat("journal_animal_mule_jn");
			break;
	
		case joaat("at_seagull_ring"):
			if (iParam2 == 1)
				return joaat("journal_animal_herring_gull_ar");
			else
				return joaat("journal_animal_herring_gull_jn");
			break;
	
		case joaat("at_heron"):
			if (iParam2 == 1)
				return joaat("journal_animal_blue_heron_ar");
			else
				return joaat("journal_animal_blue_heron_jn");
			break;
	
		case joaat("at_bat"):
			if (iParam2 == 1)
				return joaat("journal_animal_bat_ar");
			else
				return joaat("journal_animal_bat_jn");
			break;
	
		case joaat("at_dog_poodle"):
			if (iParam2 == 1)
				return joaat("journal_animal_poodle_ar");
			else
				return joaat("journal_animal_poodle_jn");
			break;
	
		case joaat("at_iguana"):
			if (iParam2 == 1)
				return joaat("journal_animal_iguana_ar");
			else
				return joaat("journal_animal_iguana_jn");
			break;
	
		case joaat("at_vulture"):
			if (iParam2 == 1)
				return joaat("journal_animal_western_vulture_ar");
			else
				return joaat("journal_animal_western_vulture_jn");
			break;
	
		case joaat("at_redfootedbooby"):
			if (iParam2 == 1)
				return joaat("journal_animal_red_footed_booby_ar");
			else
				return joaat("journal_animal_red_footed_booby_jn");
			break;
	
		case joaat("at_pigeon_band"):
			if (iParam2 == 1)
				return joaat("journal_animal_band_tailed_pigeon_ar");
			else
				return joaat("journal_animal_band_tailed_pigeon_jn");
			break;
	
		case joaat("at_raccoon"):
			if (iParam2 == 1)
				return joaat("journal_animal_raccoon_ar");
			else
				return joaat("journal_animal_raccoon_jn");
			break;
	
		case joaat("at_dog_australian"):
			if (iParam2 == 1)
				return joaat("journal_animal_australian_shepherd_ar");
			else
				return joaat("journal_animal_australian_shepherd_jn");
			break;
	
		case joaat("at_boar_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_boar_ar");
			else
				return joaat("journal_animal_legendary_boar_jn");
			break;
	
		case joaat("at_bull_angus"):
			if (iParam2 == 1)
				return joaat("journal_animal_bull_ar");
			else
				return joaat("journal_animal_bull_jn");
			break;
	
		case joaat("at_gator_bull"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_bullgator_ar");
			else
				return joaat("journal_animal_legendary_bullgator_jn");
			break;
	
		case joaat("at_muskrat"):
			if (iParam2 == 1)
				return joaat("journal_animal_muskrat_ar");
			else
				return joaat("journal_animal_muskrat_jn");
			break;
	
		case joaat("at_cardinal"):
			if (iParam2 == 1)
				return joaat("journal_animal_cardinal_ar");
			else
				return joaat("journal_animal_cardinal_jn");
			break;
	
		case joaat("at_seagull_laugh"):
			if (iParam2 == 1)
				return joaat("journal_animal_laughing_gull_ar");
			else
				return joaat("journal_animal_laughing_gull_jn");
			break;
	
		case joaat("at_egret"):
			if (iParam2 == 1)
				return joaat("journal_animal_reddish_egret_ar");
			else
				return joaat("journal_animal_reddish_egret_jn");
			break;
	
		case joaat("at_ramsheep_sierra"):
			if (iParam2 == 1)
				return joaat("journal_animal_sierra_nevada_bighorn_sheep_ar");
			else
				return joaat("journal_animal_sierra_nevada_bighorn_sheep_jn");
			break;
	
		case joaat("at_chicken_leghorn"):
			if (iParam2 == 1)
				return joaat("journal_animal_leghorn_chicken_ar");
			else
				return joaat("journal_animal_leghorn_chicken_jn");
			break;
	
		case joaat("at_coyote_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_coyote_ar");
			else
				return joaat("journal_animal_legendary_coyote_jn");
			break;
	
		case joaat("at_crab"):
			if (iParam2 == 1)
				return joaat("journal_animal_crab_ar");
			else
				return joaat("journal_animal_crab_jn");
			break;
	
		case joaat("at_ramsheep_rocky"):
			if (iParam2 == 1)
				return joaat("journal_animal_bighorn_ar");
			else
				return joaat("journal_animal_bighorn_jn");
			break;
	
		case joaat("at_pig_spot"):
			if (iParam2 == 1)
				return joaat("journal_animal_old_spot_pig_ar");
			else
				return joaat("journal_animal_old_spot_pig_jn");
			break;
	
		case joaat("at_ox"):
			if (iParam2 == 1)
				return joaat("journal_animal_oxen_ar");
			else
				return joaat("journal_animal_oxen_jn");
			break;
	
		case joaat("at_beaver"):
			if (iParam2 == 1)
				return joaat("journal_animal_beaver_ar");
			else
				return joaat("journal_animal_beaver_jn");
			break;
	
		case joaat("at_bullfrog"):
			if (iParam2 == 1)
				return joaat("journal_animal_bullfrog_ar");
			else
				return joaat("journal_animal_bullfrog_jn");
			break;
	
		case joaat("at_egret_little"):
			if (iParam2 == 1)
				return joaat("journal_animal_little_egret_ar");
			else
				return joaat("journal_animal_little_egret_jn");
			break;
	
		case joaat("at_seagull"):
			if (iParam2 == 1)
				return joaat("journal_animal_seagull_ar");
			else
				return joaat("journal_animal_seagull_jn");
			break;
	
		case joaat("at_owl_cali"):
			if (iParam2 == 1)
				return joaat("journal_animal_great_horned_owl_ar");
			else
				return joaat("journal_animal_great_horned_owl_jn");
			break;
	
		case joaat("at_loon_yellow"):
			if (iParam2 == 1)
				return joaat("journal_animal_yellow_billed_loon_ar");
			else
				return joaat("journal_animal_yellow_billed_loon_jn");
			break;
	
		case joaat("at_oriole_hooded"):
			if (iParam2 == 1)
				return joaat("journal_animal_hooded_oriole_ar");
			else
				return joaat("journal_animal_hooded_oriole_jn");
			break;
	
		case joaat("at_buffalo"):
			if (iParam2 == 1)
				return joaat("journal_animal_bison_ar");
			else
				return joaat("journal_animal_bison_jn");
			break;
	
		case joaat("at_dog"):
			if (iParam2 == 1)
				return joaat("journal_animal_mongrel_ar");
			else
				return joaat("journal_animal_mongrel_jn");
			break;
	
		case joaat("at_bluejay"):
			if (iParam2 == 1)
				return joaat("journal_animal_blue_jay_ar");
			else
				return joaat("journal_animal_blue_jay_jn");
			break;
	
		case joaat("at_bear_grizzly"):
			if (iParam2 == 1)
				return joaat("journal_animal_grizzly_bear_ar");
			else
				return joaat("journal_animal_grizzly_bear_jn");
			break;
	
		case joaat("at_parrot"):
			if (iParam2 == 1)
				return joaat("journal_animal_parrot_ar");
			else
				return joaat("journal_animal_parrot_jn");
			break;
	
		case joaat("at_panther_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_panther_ar");
			else
				return joaat("journal_animal_legendary_panther_jn");
			break;
	
		case joaat("at_ramsheep_desert"):
			if (iParam2 == 1)
				return joaat("journal_animal_desert_big_horn_sheep_ar");
			else
				return joaat("journal_animal_desert_big_horn_sheep_jn");
			break;
	
		case joaat("at_cormorant"):
			if (iParam2 == 1)
				return joaat("journal_animal_double_crested_cormorant_ar");
			else
				return joaat("STEREO_INTRO_16_LEFT") /* collision: journal_animal_double_crested_cormorant_jn */;
			break;
	
		case joaat("at_gilamonster"):
			if (iParam2 == 1)
				return joaat("journal_animal_gila_monster_ar");
			else
				return joaat("journal_animal_gila_monster_jn");
			break;
	
		case joaat("at_dog_husky"):
			if (iParam2 == 1)
				return joaat("journal_animal_husky_ar");
			else
				return joaat("journal_animal_husky_jn");
			break;
	
		case joaat("at_bear_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_bear_ar");
			else
				return joaat("journal_animal_legendary_bear_jn");
			break;
	
		case joaat("at_crayfish"):
			if (iParam2 == 1)
				return joaat("journal_animal_crayfish_ar");
			else
				return joaat("journal_animal_crayfish_jn");
			break;
	
		case joaat("at_hawk_red"):
			if (iParam2 == 1)
				return joaat("journal_animal_hawk_ar");
			else
				return joaat("journal_animal_hawk_jn");
			break;
	
		case joaat("at_elk_legendary"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_elk_ar");
			else
				return joaat("journal_animal_legendary_elk_jn");
			break;
	
		case joaat("at_dog_chesapeake"):
			if (iParam2 == 1)
				return joaat("journal_animal_chesapeakebay_ret_ar");
			else
				return joaat("journal_animal_chesapeakebay_ret_jn");
			break;
	
		case joaat("at_dog_lab"):
			if (iParam2 == 1)
				return joaat("journal_animal_labrador_ar");
			else
				return joaat("journal_animal_labrador_jn");
			break;
	
		case joaat("at_pigeon"):
			if (iParam2 == 1)
				return joaat("journal_animal_pigeon_ar");
			else
				return joaat("journal_animal_pigeon_jn");
			break;
	
		case joaat("at_robin"):
			if (iParam2 == 1)
				return joaat("journal_animal_robin_ar");
			else
				return joaat("journal_animal_robin_jn");
			break;
	
		case joaat("at_chicken"):
			if (iParam2 == 1)
				return joaat("journal_animal_dominique_chicken_ar");
			else
				return joaat("journal_animal_dominique_chicken_jn");
			break;
	
		case joaat("at_loon_pacific"):
			if (iParam2 == 1)
				return joaat("journal_animal_pacific_loon_ar");
			else
				return joaat("journal_animal_pacific_loon_jn");
			break;
	
		case joaat("at_eagle"):
			if (iParam2 == 1)
				return joaat("journal_animal_bald_eagle_ar");
			else
				return joaat("journal_animal_bald_eagle_jn");
			break;
	
		case joaat("at_buffalo_tatanka"):
			if (iParam2 == 1)
				return joaat("journal_animal_legendary_buffalo_ar");
			else
				return joaat("journal_animal_legendary_buffalo_jn");
			break;
	
		default:
			break;
	}

	return 0;
}

void func_29(int iParam0, int iParam1) // Position - 0x26DE Hash - 0xF5E9551B ^0xF5E9551B
{
	int i;

	if (iParam1 == 1)
	{
		func_32(iParam0, 0);
	}
	else
	{
		for (i = 0; i < 20; i = i + 1)
		{
			if (Global_40.f_11922[i] == 0)
			{
				Global_40.f_11922[i] = iParam0;
				return;
			}
		}
	
		func_33(1);
		Global_40.f_11922[0] = iParam0;
	}

	return;
}

BOOL func_30(int iParam0) // Position - 0x2736 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_31(BOOL bParam0) // Position - 0x2774 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

void func_32(int iParam0, int iParam1) // Position - 0x2787 Hash - 0xC0D8FAC3 ^0xE4233006
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);

	if (iParam1 == 1)
		func_34(true);

	return;
}

void func_33(int iParam0) // Position - 0x27A0 Hash - 0x23AE6B73 ^0x23AE6B73
{
	int i;
	int num;

	num = 0;

	if (iParam0 == 0 && Global_43891 == true)
		return;

	for (i = 0; i < 20; i = i + 1)
	{
		if (Global_40.f_11922[i] == 0)
			break;
	
		func_32(Global_40.f_11922[i], 0);
		Global_40.f_11922[i] = 0;
		num = 1;
	}

	if (num == 1)
		func_34(true);

	return;
}

void func_34(BOOL bParam0) // Position - 0x280E Hash - 0xED2925F ^0xCA812B62
{
	if (bParam0)
		func_35(&(Global_40.f_12019.f_42), 1);
	else
		func_36(&(Global_40.f_12019.f_42), 1);

	return;
}

void func_35(int iParam0, int iParam1) // Position - 0x2838 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_36(int iParam0, int iParam1) // Position - 0x2849 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

