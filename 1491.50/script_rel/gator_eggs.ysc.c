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
	int iLocal_20 = 0;
	Any anLocal_21 = 0;
	var uLocal_22 = 5;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 5;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	Hash hLocal_35 = 0;
	Hash hLocal_36 = 0;
	BOOL bLocal_37 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xC65040CE ^0x42B2183E
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	anLocal_21 = anScriptParam_0;
	iLocal_20 = anScriptParam_0.f_1;

	if (func_1() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	
		if (func_2(0) == 10)
			func_3(&uLocal_14);
	}

	if (func_1() == -1)
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
			func_3(&uLocal_14);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(iLocal_20))
		func_3(&uLocal_14);

	hLocal_36 = func_4();
	uLocal_17 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_20, true) };
	hLocal_35 = func_5(hLocal_36, 24);

	while (func_6())
	{
		if (func_7())
			func_3(&uLocal_14);
	
		if (func_8(&uLocal_14))
			func_3(&uLocal_14);
	
		BUILTIN::WAIT(0);
	}

	func_3(&uLocal_14);
	return;
}

BOOL func_1() // Position - 0xA8 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_2(int iParam0) // Position - 0xB6 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_3(var uParam0) // Position - 0xCA Hash - 0xF062FDD7 ^0xDC13FFEE
{
	int num;
	int i;

	if (iLocal_34 != num)
		TASK::_DELETE_PATCH_OBJECTS_FROM_HERB_COMPOSITES(iLocal_34, false);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		MAP::REMOVE_BLIP(&(uParam0->f_1));

	for (i = 0; i < func_9(hLocal_36, 16); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_22[i]))
		{
			PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uLocal_22[i]);
			PLAYER::_0xDC5E09D012D759C4(uLocal_22[i], uLocal_22[i], 0);
		}
	}

	SCRIPTS::_0xE7282390542F570D(anLocal_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

Hash func_4() // Position - 0x143 Hash - 0x6ED8C483 ^0x3595A21C
{
	int num;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_20))
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_20));

	return COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, 689918374, 0);
}

Hash func_5(Hash hParam0, int iParam1) // Position - 0x16C Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_10(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

BOOL func_6() // Position - 0x19B Hash - 0xBC5DFEF2 ^0x4AA877CF
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_3(&uLocal_14);
		return false;
	}

	return true;
}

BOOL func_7() // Position - 0x1B5 Hash - 0x8EFCB348 ^0x907D7217
{
	if (PED::IS_PED_INJURED(Global_35))
		return true;

	return false;
}

BOOL func_8(var uParam0) // Position - 0x1CC Hash - 0x129E2CE4 ^0x3937A7BE
{
	int i;

	switch (func_11(uParam0))
	{
		case 0:
			func_12(&(uParam0->f_2), uLocal_17, 2f, 1, -1, 0);
			func_13(uParam0);
			func_14(uParam0, 1);
			break;
	
		case 1:
			if (func_15(uParam0))
				func_14(uParam0, 2);
			break;
	
		case 2:
			if (func_16())
				bLocal_37 = true;
			else
				bLocal_37 = false;
		
			if (func_17(uParam0))
				if (bLocal_37)
					func_14(uParam0, 3);
				else
					func_14(uParam0, 14);
			break;
	
		case 3:
			if (func_18(Global_35, uLocal_17, false) < 25f)
				func_14(uParam0, 4);
			break;
	
		case 4:
			func_19();
		
			if (func_20(&uLocal_22, &uLocal_28, func_9(hLocal_36, 16), uLocal_17, 5f) > 0)
			{
				for (i = 0; i < func_9(hLocal_36, 16); i = i + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_22[i]))
					{
						PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uLocal_22[i], false);
						PLAYER::_0x6ECFC621A168424C(uLocal_22[i], uLocal_22[i], 0, 0);
					}
				}
			}
		
			if (func_21() == func_9(hLocal_36, 16))
				func_14(uParam0, 5);
			break;
	
		case 5:
			if (func_18(Global_35, uLocal_17, false) < 10f)
				func_14(uParam0, 6);
			break;
	
		case 6:
			PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 100, 250);
			func_14(uParam0, 7);
			break;
	
		case 7:
			if (func_18(Global_35, uLocal_17, false) < 8f)
				func_14(uParam0, 8);
			break;
	
		case 8:
			func_22(0, false, true);
			func_14(uParam0, 9);
			break;
	
		case 9:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 89266752) && func_23(Global_35, uLocal_17, 1.5f, true, true))
				func_14(uParam0, 10);
		
			if (func_24())
				func_14(uParam0, 11);
			break;
	
		case 10:
			func_25(hLocal_36);
			func_26(false, 10);
			func_27(hLocal_36);
			func_28(joaat("PROVISION_GATOR_EGG"), func_9(hLocal_36, 16), false, 0, 0, 752097756, 0, 0, 0, 0);
			func_29(uParam0);
			func_14(uParam0, 14);
			break;
	
		case 11:
			func_30();
			func_14(uParam0, 12);
			break;
	
		case 12:
			func_25(hLocal_36);
			func_26(false, 10);
			func_27(hLocal_36);
			func_29(uParam0);
			func_14(uParam0, 13);
			break;
	
		case 13:
			MISC::_0x082C043C7AFC3747(iLocal_34, false);
			break;
	
		case 14:
			break;
	}

	return false;
}

int func_9(Hash hParam0, int iParam1) // Position - 0x465 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_10(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

BOOL func_10(int iParam0, var uParam1) // Position - 0x494 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_31(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_11(var uParam0) // Position - 0x4C1 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_12(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6, int iParam7) // Position - 0x4CC Hash - 0xA400C89E ^0xDFDC4B6A
{
	if (!func_32(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
	
		if (func_32(uParam0))
		{
		}
	}

	return;
}

void func_13(var uParam0) // Position - 0x500 Hash - 0xF6CFFA30 ^0x942FF57D
{
	TASK::_REQUEST_HERB_COMPOSITE_ASSET(hLocal_35);
	return;
}

void func_14(var uParam0, int iParam1) // Position - 0x50F Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_15(var uParam0) // Position - 0x51C Hash - 0xF849599 ^0xC92763ED
{
	if (TASK::ARE_COMPOSITE_LOOTABLE_ENTITY_DEF_ASSETS_LOADED(hLocal_35))
		return true;

	return false;
}

BOOL func_16() // Position - 0x532 Hash - 0x4BABD4C9 ^0x5ECA7F3C
{
	if (func_33(256, false))
		if (hLocal_36 == joaat("gator_egg_nest_17") || hLocal_36 == joaat("gator_egg_nest_18") || hLocal_36 == joaat("gator_egg_nest_19"))
			return true;

	if (func_34(Global_40.f_12019.f_5[func_9(hLocal_36, 15)]))
		if (func_35(Global_40.f_12019.f_5[func_9(hLocal_36, 15)], true))
			return true;
		else
			return false;

	return true;
}

BOOL func_17(var uParam0) // Position - 0x5AF Hash - 0xDD3E74DB ^0x11D34146
{
	var unk;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (bLocal_37)
			iLocal_34 = TASK::_CREATE_HERB_COMPOSITES(hLocal_35, uLocal_17, 0f, 0, &unk, -1);
		else
			iLocal_34 = TASK::_CREATE_HERB_COMPOSITES(hLocal_35, uLocal_17, 0f, 1, &unk, -1);
	
		return true;
	}

	return false;
}

float func_18(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x5F1 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

void func_19() // Position - 0x619 Hash - 0xF70A4B32 ^0xC7159222
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		uLocal_28[i] = joaat("s_gatoregg01x");
	}

	return;
}

int func_20(var uParam0, var uParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6) // Position - 0x63E Hash - 0x76785467 ^0x34019397
{
	Volume volume;
	int num;

	volume = VOLUME::CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	num = func_36(uParam0, uParam1, volume, iParam2);
	func_37(volume);
	return num;
}

int func_21() // Position - 0x66F Hash - 0xCEEFAB15 ^0x7371AD88
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < func_9(hLocal_36, 16); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_22[i]))
			num = num + 1;
	}

	return num;
}

BOOL func_22(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6AB Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_38())
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
		num = func_39(Global_1898164.f_1[0 /*5*/]);
	
		if (func_40(num) && func_41(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_42(Global_1898164.f_1[0 /*5*/]))
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

BOOL func_23(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6) // Position - 0x8AF Hash - 0x4F47D7F1 ^0x1C676405
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (bParam6)
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
			return true;
	else if (func_43(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam5, false), vParam1) <= fParam4 * fParam4)
		return true;

	return false;
}

BOOL func_24() // Position - 0x90A Hash - 0x474B660B ^0xE470A3B0
{
	int i;
	int address;

	for (i = 0; i < func_9(hLocal_36, 16); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_22[i]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_22[i], Global_35, true, true))
			{
				if (func_33(256, false))
				{
					if (hLocal_36 == joaat("gator_egg_nest_17"))
					{
						address = func_45(func_44(3, joaat("HAI_HUNTING_06")));
						MISC::SET_BIT(&address, 0);
						func_46(func_44(3, joaat("HAI_HUNTING_06")), address);
					}
				
					if (hLocal_36 == joaat("gator_egg_nest_18"))
					{
						address = func_45(func_44(3, joaat("HAI_HUNTING_06")));
						MISC::SET_BIT(&address, 1);
						func_46(func_44(3, joaat("HAI_HUNTING_06")), address);
					}
				
					if (hLocal_36 == joaat("gator_egg_nest_19"))
					{
						address = func_45(func_44(3, joaat("HAI_HUNTING_06")));
						MISC::SET_BIT(&address, 2);
						func_46(func_44(3, joaat("HAI_HUNTING_06")), address);
					}
				}
			
				return true;
			}
		}
	}

	return false;
}

void func_25(Hash hParam0) // Position - 0x9ED Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_26(BOOL bParam0, int iParam1) // Position - 0x9FC Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_47(&Global_0, 8);

	if (!func_48() || func_1() != -1)
		return;

	func_47(&Global_0, 1);
	return;
}

void func_27(Hash hParam0) // Position - 0xA42 Hash - 0x4B27AAC2 ^0x355A4524
{
	Global_40.f_12019.f_5[func_9(hParam0, 15)] = func_49();
	func_50(&Global_40.f_12019.f_5[func_9(hParam0, 15)], 0, 0, 0, 7, 0, 0, false);
	return;
}

int func_28(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0xA7D Hash - 0x11449F01 ^0x11449F01
{
	int value;
	Hash ammoTypeForWeapon;
	Hash lootTableKey;
	BOOL flag;
	BOOL flag2;
	Hash hash;
	Hash collectableSubcategory;
	int num;
	Hash hash2;
	Hash hash3;
	Hash hash4;
	int num2;
	int i;
	var statId;
	BOOL flag3;

	if (!func_51(hParam0, 0))
		return 0;

	if (!func_52(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_53(hParam0, &value, iParam1))
		return 0;

	func_54(hParam0, bParam2);
	lootTableKey = 0;

	if (func_55(hParam0, false, false) == 0)
	{
		if (func_56(hParam0))
		{
			hash = func_57(hParam0);
			collectableSubcategory = func_58(hash);
			num = func_59(collectableSubcategory) + 1;
			func_60(hash);
		
			if (func_61(38))
				func_62(483, false);
			else
				func_62(482, false);
		
			if (num == func_63(collectableSubcategory))
			{
				func_28(func_64(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_48() && func_65(4))
				{
					if (func_48() && func_66(38) || func_61(38))
					{
						func_68(38, func_64(collectableSubcategory), 0, 0, func_67(), false, -1, false);
						func_69(2);
					}
					else
					{
						func_68(38, func_64(collectableSubcategory), 0, 0, func_67(), false, -1, false);
						func_69(1);
					}
				}
			}
			else if (func_48() && func_65(4))
			{
				if (func_48() && func_66(38) || func_61(38))
				{
					func_68(38, 0, 0, 0, func_67(), false, -1, false);
					func_69(2);
				}
				else
				{
					func_68(38, 0, 0, 0, func_67(), false, -1, false);
					func_69(1);
				}
			}
		
			if (func_48() && func_65(4))
				if (!Global_1914319.f_17376)
					if (func_48() && func_66(38) || func_61(38))
						func_70(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_70(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_71(hParam0) == joaat("CLOTHING"))
		if (!func_72(hParam0, 866047851) && !func_72(hParam0, -1979000645) && !func_72(hParam0, 1248798204))
			flag = true;

	if (func_73(hParam0, 8388608) && !func_74(28))
		func_75(28);

	if (!flag)
	{
		if (func_72(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_76(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_78(func_77(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_1() == -1)
						func_79(ammoTypeForWeapon);
				
					if (func_80(false) && func_81(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_82(hParam0, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
			else
			{
				ammoTypeForWeapon = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
			
				if (WEAPON::_IS_AMMO_VALID(ammoTypeForWeapon))
				{
					if (func_1() == -1)
						func_79(hParam0);
				
					if (func_80(false) && func_81(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_82(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_71(hParam0) == joaat("WEAPON"))
		{
			if (!func_83(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_71(hParam0) == joaat("AMMO") && func_84(hParam0))
		{
			if (!func_85(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_72(hParam0, 866047851))
		{
			func_86(hParam0);
		}
		else if (func_72(hParam0, 2000026003))
		{
			func_87(hParam0);
		}
		else if (func_72(hParam0, -103750053))
		{
			func_89(func_88(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_89(func_90(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_72(hParam0, -121341956) && !func_72(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_91(Global_1835011[4 /*74*/].f_1, true))
					func_62(498, false);
		
			if (func_72(hParam0, -2017733358) || func_72(hParam0, -1369131378))
				func_92(hParam0);
		}
		else if (func_72(hParam0, -136654233))
		{
			if (func_72(hParam0, -1021472396))
			{
			}
		}
		else if (func_72(hParam0, -1466706512) && func_72(hParam0, 1147021565))
		{
			func_62(484, false);
		}
		else if (func_72(hParam0, 1147021565) && func_72(hParam0, -524514947))
		{
		}
		else if (func_72(hParam0, 554195525))
		{
		}
		else if (func_72(hParam0, 589988438))
		{
			if (func_93())
			{
				func_94(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_72(hParam0, 787083290) && func_72(hParam0, 949916894))
		{
			func_95(hParam0);
		}
		else if (func_72(hParam0, -1718133314))
		{
			func_96(hParam0);
		}
		else if (func_72(hParam0, -1738650224))
		{
			func_97(hParam0);
		}
		else if (func_72(hParam0, -1112814642) && func_72(hParam0, 949916894))
		{
			func_98(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_72(hParam0, 1841149704))
		{
			func_99();
		}
		else if (func_72(hParam0, 606799272))
		{
			func_100(hParam0, iParam1);
			func_101(hParam0);
		}
		else if (func_72(hParam0, -1112814642) && func_72(hParam0, -1697809989))
		{
			func_102(hParam0, 0, false, false);
		}
		else if (func_72(hParam0, -2017733358) || func_72(hParam0, -1369131378))
		{
			func_92(hParam0);
		}
		else if (func_72(hParam0, -1921346699))
		{
			if (func_1() != -1)
				return 0;
		
			func_103(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_72(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_104(471514780, 1, false))
						func_28(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_104(526074061, 1, false))
						func_28(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_104(-967317137, 1, false))
						func_28(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_104(670273567, 1, false))
						func_28(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_104(215778062, 1, false))
						func_28(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_104(-1045488665, 1, false))
						func_28(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_72(hParam0, -839724752) && func_73(hParam0, 4))
		{
			if (!func_61(42))
				func_105(hParam0);
		}
		else if (func_72(hParam0, 1399091007))
		{
			func_106(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_72(hParam0, 1248798204))
		{
			hash2 = 0;
		
			switch (hParam0)
			{
				case joaat("clothing_hl_player_satchel_005_1"):
					hash2 = joaat("kit_pouch_provisions");
					break;
			
				case joaat("clothing_hl_player_satchel_002_1"):
					hash2 = joaat("kit_pouch_remedies");
					break;
			
				case joaat("clothing_hl_player_satchel_003_1"):
					hash2 = joaat("kit_pouch_ingredients");
					break;
			
				case joaat("clothing_hl_player_satchel_008_1"):
					hash2 = joaat("kit_pouch_legendary");
					break;
			
				case joaat("clothing_hl_player_satchel_004_1"):
					hash2 = joaat("kit_pouch_kit");
					break;
			
				case joaat("clothing_hl_player_satchel_006_1"):
					hash2 = joaat("kit_pouch_materials");
					break;
			
				case joaat("clothing_hl_player_satchel_007_1"):
					hash2 = joaat("kit_pouch_valuables");
					break;
			}
		
			if (hash2 != 0)
				func_28(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_1() == -1)
					hParam0 = -1448210800;
				break;
		
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_124(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_124(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_124(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_114(499813453, joaat("treasure_hunt_loot_01"), false);
				func_115(499813453, false);
				func_116(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_114(390004462, joaat("treasure_hunt_loot_17"), false);
				func_115(390004462, false);
				func_120(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_114(6410548, joaat("treasure_hunt_loot_23"), false);
				func_115(6410548, false);
				func_121(8);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				func_114(6410548, joaat("treasure_hunt_loot_22"), false);
				func_115(6410548, false);
				func_121(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_75(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_107(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_108(&hash3, false))
					func_81(hash3, 0, false, bParam4, 3, false, 752097756, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_plain");
				break;
		
			case -1080874779:
			case joaat("consumable_potent_medicine"):
			case joaat("consumable_medicine"):
			case joaat("consumable_moonshine"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_124(594, 1934060482, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("upgrade_fsh_bait_cricket_tin"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_crickets");
				break;
		
			case joaat("consumable_potent_restorative"):
			case joaat("consumable_cocaine_chewing_gum_used"):
			case joaat("consumable_cocaine_chewing_gum"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("consumable_restorative"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_124(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_62(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_114(6410548, joaat("treasure_hunt_loot_21"), false);
				func_115(6410548, false);
				func_121(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_62(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_28(func_125(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_28(func_126(), 1, false, false, false, 752097756, 0, 0, 0, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("consumable_snake_oil"):
			case joaat("consumable_potent_snake_oil"):
			case joaat("consumable_chewing_tobacco"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("consumable_chewing_tobacco_used"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_124(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_114(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_115(-220219788, false);
				func_118(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_74(1))
					func_62(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_114(666607663, joaat("treasure_hunt_loot_07"), false);
				func_115(666607663, false);
				func_117(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_123(241, func_122(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_114(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_115(-220219788, false);
				func_118(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_123(242, func_122(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_62(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_123(240, func_122(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_114(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_115(-220219788, false);
				func_118(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_114(390004462, joaat("treasure_hunt_loot_16"), false);
				func_115(390004462, false);
				func_120(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_plain");
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				func_114(499813453, joaat("treasure_hunt_loot_03"), false);
				func_115(499813453, false);
				func_116(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_114(666607663, joaat("treasure_hunt_loot_06"), false);
				func_115(666607663, false);
				func_117(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_114(218622660, joaat("treasure_hunt_loot_14"), false);
				func_115(218622660, false);
				func_119(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_114(666607663, joaat("treasure_hunt_loot_05"), false);
				func_115(666607663, false);
				func_117(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_1() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_107(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_114(218622660, joaat("treasure_hunt_loot_13"), false);
				func_115(218622660, false);
				func_119(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_114(6410548, joaat("treasure_hunt_loot_20"), false);
				func_115(6410548, false);
				func_121(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_62(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_62(491, false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("upgrade_fsh_bait_worm_can"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("bait_worms");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				func_114(499813453, joaat("treasure_hunt_loot_02"), false);
				func_115(499813453, false);
				func_116(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_62(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_109();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_110();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_111();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_112();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_113();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_114(390004462, joaat("treasure_hunt_loot_18"), false);
				func_115(390004462, false);
				func_120(4);
				break;
		
			default:
				break;
		}
	}

	if (!flag2)
	{
		if (value <= 0)
			return 0;
	
		hash4 = hParam0;
		func_127(&hash4);
	
		if (!func_128(hash4, value, hParam5))
			return 0;
		else if (!func_80(false))
			return 1;
	
		if (func_71(hParam0) == joaat("CLOTHING"))
			func_129(hParam0);
	
		if (func_72(hParam0, -1979000645))
			func_130(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_80(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_28(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_131(lootTableKey, 0);
		}
	}

	statId = { func_132(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_133(hParam0);

	if (iParam6 > 0f)
	{
		if (func_72(hParam0, -839724752))
			func_134(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_135(hParam0, value, false, flag3, 0);
	}

	return 1;
}

void func_29(var uParam0) // Position - 0x1D12 Hash - 0x8DE5D727 ^0x2DAC11A7
{
	int i;

	func_136(&(uParam0->f_2), 1);

	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		MAP::REMOVE_BLIP(&(uParam0->f_1));

	for (i = 0; i < func_9(hLocal_36, 16); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_22[i]))
		{
			PLAYER::_UNREGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), uLocal_22[i]);
			PLAYER::_0xDC5E09D012D759C4(uLocal_22[i], uLocal_22[i], 0);
		}
	}

	return;
}

void func_30() // Position - 0x1D7B Hash - 0x1B75398A ^0xB145F101
{
	int i;

	for (i = 0; i < func_9(hLocal_36, 16); i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_22[i]) && !ENTITY::IS_ENTITY_DEAD(uLocal_22[i]))
		{
			func_137(uLocal_22[i], true, true);
			OBJECT::DELETE_OBJECT(&uLocal_22[i]);
		}
	}

	return;
}

BOOL func_31(int iParam0) // Position - 0x1DCF Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

BOOL func_32(int iParam0) // Position - 0x1DE5 Hash - 0x5499D461 ^0x5499D461
{
	if (*iParam0 == 0)
		return false;

	return *iParam0 != -1;
}

BOOL func_33(int iParam0, BOOL bParam1) // Position - 0x1DFD Hash - 0x26407603 ^0x721F15B0
{
	if (func_138(iParam0))
		return true;

	if (!bParam1)
		if (func_139(5000))
			return true;

	switch (func_2(0))
	{
		case 0:
			return false;
	
		case 1:
			if (iParam0 & 1 != 0)
				return true;
			break;
	
		case 2:
			if (iParam0 & 16 != 0)
				return true;
			break;
	
		case 3:
			if (iParam0 & 128 != 0)
				return true;
			break;
	
		case 4:
			if (iParam0 & 2 != 0)
				return true;
			break;
	
		case 5:
			if (iParam0 & 32 != 0)
				return true;
			break;
	
		case 6:
			if (iParam0 & 4 != 0)
				return true;
			break;
	
		case 8:
			if (iParam0 & 8 != 0)
				return true;
			break;
	
		case 9:
			if (iParam0 & 64 != 0)
				return true;
			break;
	
		case 10:
			if (iParam0 & 512 != 0)
				return true;
			break;
	
		case 11:
			if (iParam0 & 256 != 0)
				return true;
			break;
	}

	return false;
}

BOOL func_34(Hash hParam0) // Position - 0x1F17 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (hParam0 == -15)
		return false;

	num = func_140(hParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_141(hParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_142(hParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_143(hParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_144(hParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_145(hParam0);

	if (num6 < 1 || num6 > func_146(num5, num4))
		return false;

	return true;
}

BOOL func_35(Hash hParam0, BOOL bParam1) // Position - 0x1FF3 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_147(func_49(), hParam0, bParam1);
}

int func_36(var uParam0, var uParam1, Volume volParam2, int iParam3) // Position - 0x2007 Hash - 0xF4BE06E5 ^0x21E9A98D
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

void func_37(Volume volParam0) // Position - 0x20C2 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

BOOL func_38() // Position - 0x20D9 Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_39(int iParam0) // Position - 0x212C Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_42(iParam0))
		return -1;

	return func_149(func_148(iParam0));
}

BOOL func_40(int iParam0) // Position - 0x214C Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0x2162 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_42(int iParam0) // Position - 0x2171 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

float func_43(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5) // Position - 0x21A4 Hash - 0x6A10E689 ^0x9AB5BF75
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_44(int iParam0, Hash hParam1) // Position - 0x21C2 Hash - 0xE769BAE7 ^0x9D2D6FC6
{
	if (hParam1 == joaat("HAI_BANK_ROBBERY_01"))
		return func_151(0, func_150(hParam1, 1), 11, joaat("cabr01"));

	return func_151(0, func_150(hParam1, 1), 11, hParam1);
}

int func_45(int iParam0) // Position - 0x21FA Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_42(iParam0))
		return -1;

	return func_152(iParam0);
}

void func_46(int iParam0, int iParam1) // Position - 0x2216 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_42(iParam0))
		return;

	func_153(iParam0, iParam1);
	return;
}

void func_47(Hash hParam0, int iParam1) // Position - 0x2233 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_48() // Position - 0x2246 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

Hash func_49() // Position - 0x2265 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_50(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x2271 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_143(*hParam0);
	i = func_144(*hParam0);
	num2 = func_145(*hParam0);
	j = func_142(*hParam0);
	k = func_141(*hParam0);
	l = func_140(*hParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_146(i, num); num2 > m; m = func_146(i, num))
	{
		iParam5 = iParam5 + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			iParam6 = iParam6 + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	if (!bParam7)
		num = num + iParam6;

	func_154(hParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_51(Hash hParam0, int iParam1) // Position - 0x23F9 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_52(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x2413 Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_1() == -1)
	{
		if (func_155(hParam0) && func_156(hParam0))
		{
			func_157(hParam0, iParam1, true, &bParam2, iParam3);
			return false;
		}
	}
	else if (hParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (hParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}

	return true;
}

BOOL func_53(Hash hParam0, var uParam1, int iParam2) // Position - 0x246A Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_158(hParam0, uParam1);
	unk = { func_159(hParam0, false, true) };
	num = func_160(hParam0, &unk, false, false);
	num2 = func_161(hParam0, false);

	if (num > 1 && !func_162() && num2 + iParam2 >= num)
		if (func_72(hParam0, -2051813666))
			func_62(583, true);
		else
			func_62(582, false);

	if (func_163(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_54(Hash hParam0, BOOL bParam1) // Position - 0x2506 Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_164(hParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 0;
			Global_1935496.f_59.f_1 = hParam0;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}

	return;
}

int func_55(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x25B2 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_51(hParam0, 0))
		return 0;

	num = func_71(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_165(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_166(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_167(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_56(Hash hParam0) // Position - 0x2634 Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_1() != -1)
		return false;

	return func_57(hParam0) != 0;
}

Hash func_57(Hash hParam0) // Position - 0x2650 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_168(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_169(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_58(Hash hParam0) // Position - 0x268C Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_59(Hash hParam0) // Position - 0x269A Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_168(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_58(collectableItemHash))
			if (func_104(func_169(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_60(Hash hParam0) // Position - 0x26E7 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_170(48);
	func_26(false, -1);
	return;
}

BOOL func_61(int iParam0) // Position - 0x2702 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_1() != -1)
		return false;

	return func_91(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_62(int iParam0, BOOL bParam1) // Position - 0x2725 Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_171(iParam0, &num, &num2);

	if (!func_172(iParam0, num, num2, bParam1))
		return;

	func_173(num, num2);
	return;
}

int func_63(Hash hParam0) // Position - 0x2752 Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_64(Hash hParam0) // Position - 0x2765 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_65(int iParam0) // Position - 0x2778 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_1() != -1)
		return false;

	return func_91(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_66(int iParam0) // Position - 0x279B Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_1() != -1)
		return false;

	if (!func_40(iParam0))
		return false;

	return func_174(Global_1347702[iParam0 /*49*/].f_15);
}

int func_67() // Position - 0x27CB Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_104(func_175(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_68(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x2800 Hash - 0xACBDD3E6 ^0xACBDD3E6
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	char* str5;
	char* str6;
	var unk;
	int num;
	int num2;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case 38:
			str = "MISSION_RCCIG";
			str2 = "SP_MISSIONS_13";
		
			if (func_48() && func_66(38) || func_61(38))
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				str6 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				hash = joaat("col_cc_intro");
			}
			else
			{
				str4 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				str6 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				hash = joaat("col_cc_intro_pre");
			}
		
			str5 = "COL_CC_TITLE";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = 12;
			hash2 = joaat("CIGARETTE_CARDS");
			break;
	
		case 39:
			if (func_48() && func_66(39) || func_61(39))
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_02";
				str6 = "COL_DB_INTRO";
				num = 3;
				hashKey = joaat("blip_rc_deborah");
				hash = joaat("col_db_intro");
			}
			else
			{
				str = "MISSION_RCDIN2";
				str4 = "RCM_BRIEF_DESC_DINO_BONES_01";
				str6 = "COL_DB_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				hash = joaat("col_db_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_DB_TITLE";
			unk = { 122.7758f, -185.4978f, 116.4383f };
			num2 = 30;
			hash2 = joaat("dino_bones");
			break;
	
		case 41:
			if (func_48() && func_66(41) || func_61(41))
				str = "MISSION_RCFSH2";
			else
				str = "MISSION_RCFSH1";
		
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_RARE_FISH_01";
			str5 = "COL_LF_TITLE";
			str6 = "COL_LF_INTRO";
			unk = { 337.3075f, -684.5404f, 41.8362f };
			num = 13;
			hash2 = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
			if (hParam3 == joaat("exotic_stage_01"))
			{
				str = "MISSION_RCEXO1";
				str4 = "RCEXO1_DESC";
				num2 = 30;
			}
			else if (hParam3 == joaat("exotic_stage_02"))
			{
				str = "MISSION_RCEXO2";
				str4 = "RCEXO2_DESC";
				num2 = 37;
			}
			else if (hParam3 == joaat("exotic_stage_03"))
			{
				str = "MISSION_RCEXO3";
				str4 = "RCEXO3_DESC";
				num2 = 40;
			}
			else if (hParam3 == joaat("exotic_stage_04"))
			{
				str = "MISSION_RCEXO4";
				str4 = "RCEXO4_DESC";
				num2 = 50;
			}
			else if (hParam3 == joaat("exotic_stage_05"))
			{
				str = "MISSION_RCEXO5";
				str4 = "RCEXO5_DESC";
				num2 = 25;
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_EX_TITLE";
			str6 = "COL_EX_INTRO";
			unk = { 2585.6682f, -1009.6161f, 44.979717f };
			num = func_9(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_48() && func_66(49) || func_61(49))
			{
				str = "MISSION_RCRKF2";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				str6 = "COL_RC_INTRO";
				num = 3;
				hashKey = joaat("blip_scm_frances");
				hash = joaat("col_rc_intro");
			}
			else
			{
				str = "MISSION_RCRKF1";
				str4 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				str6 = "COL_RC_INTRO_PRE";
				num = 1;
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				hash = joaat("col_rc_intro_pre");
			}
		
			str2 = "SP_MISSIONS_14";
			str5 = "COL_RC_TITLE";
			unk = { -2178.646f, -245.6886f, 191.1569f };
			num2 = 10;
			hash2 = joaat("rock_carvings");
			break;
	
		case 51:
			str = "MISSION_RCTAX1";
			str2 = "SP_MISSIONS_14";
			str4 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			str5 = "COL_TX_TITLE";
			str6 = "COL_TX_INTRO";
			unk = { -1678.8323f, -335.5439f, 172.9001f };
			num = func_9(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_176(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_177(iParam0, hash, hash2);
	func_178(iParam0, hash, unk, str5, str4);
	func_179(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_180(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_181(iParam0, hash, hash2, iParam6);
	func_182(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_69(int iParam0) // Position - 0x2C2D Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_70(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x2C44 Hash - 0x28203865 ^0x1C8948D8
{
	char* str;
	char* str2;
	char* str3;
	char* str4;
	Hash hashKey;
	Hash hashKey2;
	Hash hash;
	int num;

	switch (iParam0)
	{
		case 38:
			str = "COL_CC_TITLE";
			str4 = "COL_CC_CARD_FOUND";
			num = joaat("CIGARETTE_CARDS");
		
			if (func_48() && func_66(38) || func_61(38))
			{
				str2 = "COL_CC_INTRO";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				str2 = "COL_CC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
		
			hash = joaat("col_cc_intro");
			break;
	
		case 39:
			str = "COL_DB_TITLE";
			str4 = "COL_DB_FOUND";
			num = joaat("dino_bones");
		
			if (func_48() && func_66(39) || func_61(39))
			{
				str2 = "COL_DB_INTRO";
				hashKey = joaat("blip_rc_deborah");
			}
			else
			{
				str2 = "COL_DB_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
		
			hash = joaat("col_db_intro");
			break;
	
		case 41:
			str = "COL_LF_TITLE";
			str4 = "COL_LF_CAUGHT";
			str2 = "COL_LF_INTRO";
			num = 1995362678;
			hashKey = joaat("blip_rc_jeremy_gill");
			hash = joaat("col_lf_intro");
			break;
	
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			str = "COL_EX_TITLE";
			str4 = "COL_EX_ITEMS_COLLECTED";
			str2 = "COL_EX_INTRO";
			num = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			str = "COL_RC_TITLE";
			str4 = "COL_RC_FOUND";
			num = joaat("rock_carvings");
		
			if (func_48() && func_66(49) || func_61(49))
			{
				str2 = "COL_RC_INTRO";
				hashKey = joaat("blip_scm_frances");
			}
			else
			{
				str2 = "COL_RC_INTRO_PRE";
				hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
		
			hash = joaat("col_rc_intro");
			break;
	
		case 51:
			str = "COL_TX_TITLE";
			str4 = "COL_TX_CARCASS_COLLECTED";
			str2 = "COL_TX_INTRO";
			num = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	if (iParam5 == 2)
	{
		str = "MISSION_COMPLETE";
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
		str2 = "COL_ALL_LOG_UPDATED";
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (num == joaat("CIGARETTE_CARDS"))
	{
		if (func_48() && func_66(38) || func_61(38))
			hash = joaat("col_cc_intro");
		else
			hash = joaat("col_cc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 0)
		{
			hashKey2 = hParam1;
			hashKey = hParam2;
		}
	
		if (iParam5 == 2)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_185(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_64(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_48() && func_66(39) || func_61(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_48() && func_66(49) || func_61(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

int func_71(Hash hParam0) // Position - 0x31E9 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_51(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_72(Hash hParam0, Hash hParam1) // Position - 0x3214 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_73(Hash hParam0, int iParam1) // Position - 0x3245 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_51(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_74(int iParam0) // Position - 0x3264 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_186(iParam0))
		return false;

	return func_187(iParam0);
}

void func_75(int iParam0) // Position - 0x3280 Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_186(iParam0))
		return;

	func_188(iParam0);
	func_189(iParam0);
	return;
}

Hash func_76(Hash hParam0) // Position - 0x32A1 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_51(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_77(Hash hParam0, BOOL bParam1) // Position - 0x32CC Hash - 0x27CC99BE ^0x9BD61A93
{
	Hash hash;

	switch (hParam0)
	{
		case joaat("ammo_hatchet_hewing"):
			hash = joaat("weapon_melee_hatchet_hewing");
			break;
	
		case joaat("ammo_molotov_volatile"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_throwing_knives"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_hatchet_ancient"):
			hash = joaat("weapon_melee_ancient_hatchet");
			break;
	
		case joaat("ammo_tomahawk_homing"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_cleaver"):
			hash = joaat("weapon_melee_cleaver");
			break;
	
		case joaat("ammo_hatchet_hunter_rusted"):
			hash = joaat("weapon_melee_hatchet_hunter_rusted");
			break;
	
		case joaat("ammo_hatchet_double_bit_rusted"):
			hash = joaat("weapon_melee_hatchet_double_bit_rusted");
			break;
	
		case joaat("ammo_tomahawk_improved"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("ammo_hatchet_viking"):
			hash = joaat("weapon_melee_hatchet_viking");
			break;
	
		case joaat("ammo_tomahawk_ancient"):
			hash = joaat("weapon_thrown_tomahawk_ancient");
			break;
	
		case joaat("ammo_hatchet"):
			hash = joaat("weapon_melee_hatchet");
			break;
	
		case joaat("ammo_hatchet_hunter"):
			hash = joaat("weapon_melee_hatchet_hunter");
			break;
	
		case joaat("ammo_dynamite"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_dynamite_volatile"):
			hash = joaat("weapon_thrown_dynamite");
			break;
	
		case joaat("ammo_throwing_knives_improved"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		case joaat("ammo_tomahawk"):
			hash = joaat("weapon_thrown_tomahawk");
			break;
	
		case joaat("AMMO_MOLOTOV"):
			hash = joaat("weapon_thrown_molotov");
			break;
	
		case joaat("ammo_hatchet_double_bit"):
			hash = joaat("weapon_melee_hatchet_double_bit");
			break;
	
		case joaat("ammo_throwing_knives_poison"):
			hash = joaat("weapon_thrown_throwing_knives");
			break;
	
		default:
			break;
	}

	if (func_51(hash, 0))
		if (bParam1)
			if (func_190(hash) || func_191(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_78(Hash hParam0, BOOL bParam1) // Position - 0x3452 Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_51(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

void func_79(Hash hParam0) // Position - 0x347E Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_192(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_80(BOOL bParam0) // Position - 0x34B8 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_1() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_167(bParam0));
}

BOOL func_81(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x34D6 Hash - 0x61DE9CAE ^0x4ADCEE54
{
	var unk;
	Hash hash;
	var unk6;
	int i;
	var unk28;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	if (WEAPON::IS_WEAPON_MELEE_WEAPON(hParam0) && iParam1 > 0)
		iParam1 = 0;

	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
	{
		unk = { func_159(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_193(398 + i, 1);
		
			if (func_194(hParam0, &unk, hash, false))
			{
				if (func_195(hParam0, &unk6, hash))
				{
					unk28 = { func_196(hParam0, unk, hash, false) };
					func_197(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_80(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_82(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_198(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_82(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x3628 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_84(hParam0))
		return false;

	if (!func_80(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_83(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3663 Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_78(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_1() == -1)
		{
			func_79(weaponHash);
		
			if (hParam1 == 1248274121)
				func_199(weaponHash);
		}
	
		if (!func_163(hParam0, &unk, 1, false, false))
		{
			func_157(hParam0, 1, false, uParam2, hParam1);
			num = func_200(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_81(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_81(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_81(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_201())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_202(weaponHash))
				{
					func_81(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_81(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_203(Global_35, 2, false, true);
			
				if (func_192(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_74(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_192(weaponHash2) && func_74(24))
					if (!func_81(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_81(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_81(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && hParam1 == 1248274121)
		func_62(480, true);

	return true;
}

BOOL func_84(Hash hParam0) // Position - 0x386F Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_85(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x387D Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_84(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_192(weaponTypeFromAmmoType))
		WEAPON::GET_MAX_AMMO(Global_35, &ammo, weaponTypeFromAmmoType);

	num2 = ammo - pedAmmoByType;

	if (WEAPON::IS_WEAPON_BOW(weaponTypeFromAmmoType))
		weaponClipSize = 5;
	else
		weaponClipSize = WEAPON::GET_WEAPON_CLIP_SIZE(weaponTypeFromAmmoType);

	if (*uParam1 > 0)
		num3 = *uParam1;
	else if (*uParam1 < 0)
		num3 = weaponClipSize * MISC::ABSI(*uParam1);

	if (func_104(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
		num3 = BUILTIN::CEIL((float)num3 * 1.1f);

	if (num2 >= num3)
	{
		num = num3;
	}
	else if (num2 < num3 && num2 >= 1)
	{
		num = num2;
	}
	else
	{
		func_123(func_204(hParam0), func_122(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_1() == -1)
			if (func_91(Global_1835011[14 /*74*/].f_1, true))
				func_62(416, false);

	if (num == 0)
		return false;

	if (func_80(false))
	{
		if (func_82(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_128(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_86(Hash hParam0) // Position - 0x39C6 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_205() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_206(Global_35, hParam0, &unk))
			func_107(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_113();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_113();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_111();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_109();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_113();
			break;
	}

	return;
}

void func_87(Hash hParam0) // Position - 0x3ACD Hash - 0xA92CE7CF ^0x8CEA2EC6
{
	switch (hParam0)
	{
		case joaat("provision_trinket_shark_tooth"):
			Global_40.f_11095.f_68 = Global_40.f_11095.f_68 + 0.1f;
			break;
	
		case joaat("provision_trinket_cat_eye"):
			Global_40.f_11095.f_70 = Global_40.f_11095.f_70 + 0.2f;
			break;
	
		case joaat("provision_trinket_turtle_shell"):
			Global_40.f_11095.f_69 = Global_40.f_11095.f_69 + 0.1f;
			func_208();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_111();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_207();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_109();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_112();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_110();
			break;
	
		case joaat("provision_trinket_lion_paw"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_cougar_fang"):
			Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
			break;
	
		case joaat("provision_trinket_moose_antler"):
			Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
			break;
	
		case joaat("provision_trinket_owl_feather"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.15f;
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.15f;
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.15f;
			func_113();
			break;
	}

	return;
}

struct<2> func_88(int iParam0) // Position - 0x3CB8 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_89(var uParam0, var uParam1, int iParam2) // Position - 0x3CCA Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_90(int iParam0, int iParam1) // Position - 0x3CDA Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_91(int iParam0, BOOL bParam1) // Position - 0x3CF0 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_209(iParam0))
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

void func_92(Hash hParam0) // Position - 0x3D21 Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_72(hParam0, -2017733358);

	if (func_210() < 3)
		if (flag)
			if (func_212(func_211(hParam0), hParam0))
				func_123(79, func_122(func_211(hParam0)), true);
			else
				func_123(78, func_122(func_211(hParam0)), true);
		else
			func_123(80, func_122(func_213(hParam0)), true);

	return;
}

BOOL func_93() // Position - 0x3D8E Hash - 0x452521BB ^0x7FA3002C
{
	if (func_214(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_214(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_214(joaat("document_arthur_high_bounty_1"), 400) || func_214(joaat("document_arthur_high_bounty_2"), 400) || func_214(joaat("document_arthur_has_poster_1"), 400) || func_214(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_94(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x3E04 Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_215(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_216(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_217(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_95(Hash hParam0) // Position - 0x3E4B Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_68(43, 0, 0, joaat("exotic_stage_01"), func_222(1), false, -1, false);
			func_223(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_68(39, 0, 0, 0, 0, false, 1, false);
			func_70(39, 0, 0, 0, 0, -1, 0);
			func_219(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_68(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_70(51, 0, 0, 0, 0, -1, 0);
			func_218(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_68(43, 0, 0, joaat("exotic_stage_02"), func_222(2), false, -1, false);
			func_223(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_68(43, 0, 0, joaat("exotic_stage_03"), func_222(4), false, -1, false);
			func_223(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_68(49, 0, 0, 0, 0, false, 1, false);
			func_70(49, 0, 0, 0, 0, -1, 0);
			func_221(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_68(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_70(51, 0, 0, 0, 0, -1, 0);
			func_218(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_68(41, 0, 0, 0, 0, false, 1, false);
			func_70(41, 0, 0, 0, 0, -1, 0);
			func_220(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_68(43, 0, 0, joaat("exotic_stage_05"), func_222(16), false, -1, false);
			func_223(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_68(43, 0, 0, joaat("exotic_stage_04"), func_222(8), false, -1, false);
			func_223(8);
			break;
	}

	return;
}

void func_96(Hash hParam0) // Position - 0x3FE1 Hash - 0x641C2839 ^0xD6E754F
{
	if (func_224() == 1)
	{
		if (func_61(39))
		{
			func_62(342, false);
		}
		else
		{
			func_62(343, false);
			func_219(1);
		}
	}

	if (func_224() >= 30)
		func_62(344, false);

	func_68(39, 0, 0, 0, 0, false, -1, false);
	func_70(39, 0, 0, func_224(), 30, 1, 0);
	return;
}

void func_97(Hash hParam0) // Position - 0x4041 Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_225() == 1)
	{
		if (func_61(49))
		{
			func_62(409, false);
		}
		else
		{
			func_62(410, false);
			func_221(1);
		}
	}

	if (func_225() >= 10)
		func_62(&func_6, false);

	func_68(49, 0, 0, 0, 0, false, -1, false);
	func_70(49, 0, 0, func_225(), 10, 1, 0);
	return;
}

void func_98(Hash hParam0) // Position - 0x40A0 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_62(438, false);
			func_226(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_68(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_70(51, 0, 0, num, func_9(joaat("taxidermy_order_05"), 20), 1, 0);
			func_218(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_226(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_68(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_70(51, 0, 0, num, func_9(joaat("taxidermy_order_04"), 20), 1, 0);
			func_218(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_226(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_68(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_70(51, 0, 0, num, func_9(joaat("taxidermy_order_03"), 20), 1, 0);
			func_218(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_62(&func_7, false);
			func_62(440, false);
			func_226(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_68(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_70(51, 0, 0, num, func_9(joaat("taxidermy_order_01"), 20), 1, 0);
			func_218(1);
			func_227(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_226(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_68(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_70(51, 0, 0, num, func_9(joaat("taxidermy_order_02"), 20), 1, 0);
			func_218(8);
			break;
	
		default:
			func_62(439, false);
			break;
	}

	return;
}

void func_99() // Position - 0x428E Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_100(Hash hParam0, int iParam1) // Position - 0x42B2 Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_1() == -1)
	{
		if (!func_61(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_62(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_62(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_62(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_62(400, false);
		}
		else if (func_72(hParam0, 412399755))
		{
			func_228(joaat("exotic_stage_01"));
		
			if (func_229() == 0)
			{
				func_26(false, 10);
				num2 = func_230(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_231(hParam0) < func_232(hParam0))
					{
						func_68(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_70(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_61(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_62(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_62(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_62(401, false);
		}
		else if (func_72(hParam0, 709057512))
		{
			func_228(joaat("exotic_stage_02"));
		
			if (func_229() == 1)
			{
				func_26(false, 10);
				num2 = func_230(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_231(hParam0) < func_232(hParam0))
					{
						func_68(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_70(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_61(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_62(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_62(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_62(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_62(398, false);
		}
		else if (func_72(hParam0, -1478961327))
		{
			func_228(joaat("exotic_stage_03"));
		
			if (func_229() == 2)
			{
				func_26(false, 10);
				num2 = func_230(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_233(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_234(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_170(48);
					}
				
					if (func_231(hParam0) < func_232(hParam0))
					{
						func_68(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_70(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_231(hParam0) < func_232(hParam0))
					{
						func_68(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_70(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_61(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_62(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_62(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_62(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_62(406, false);
		}
		else if (func_72(hParam0, -1238404098))
		{
			func_228(joaat("exotic_stage_04"));
		
			if (func_229() == 3)
			{
				func_26(false, 10);
				num2 = func_230(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_231(hParam0) < func_232(hParam0))
					{
						func_68(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_70(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_61(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_62(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_62(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_62(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_62(403, false);
		}
		else if (func_72(hParam0, 1160548794))
		{
			func_228(joaat("exotic_stage_05"));
		
			if (func_229() == 4)
			{
				func_26(false, 10);
				num2 = func_230(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_231(hParam0) < func_232(hParam0))
					{
						func_68(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_70(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_101(Hash hParam0) // Position - 0x47CB Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_233(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_234(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_170(48);
		}
	}

	return;
}

void func_102(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x480B Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_104(func_235(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_236(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_237(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_103(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x486B Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_1() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_94(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_94(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_94(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_94(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_94(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_94(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_94(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_94(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_94(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_238())
				func_94(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_94(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_94(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_94(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_94(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_94(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_94(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_94(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_94(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_94(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_94(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_94(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_94(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_94(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_94(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_94(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_94(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_94(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

BOOL func_104(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x4C43 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_51(hParam0, 0))
		return false;

	num = func_71(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_239(hParam0, 1))
			return false;

	return func_55(hParam0, false, bParam2) >= iParam1;
}

void func_105(Hash hParam0) // Position - 0x4CAD Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_61(41))
		func_62(363, false);
	else
		func_62(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_240(joaat("legendary_fish_02"));
			func_241(joaat("legendary_fishing_spot_02"));
			func_242(joaat("legendary_fishing_spot_02"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_240(joaat("legendary_fish_06"));
			func_241(joaat("legendary_fishing_spot_06"));
			func_242(joaat("legendary_fishing_spot_06"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_240(joaat("legendary_fish_13"));
			func_241(joaat("legendary_fishing_spot_13"));
			func_242(joaat("legendary_fishing_spot_13"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_240(joaat("legendary_fish_03"));
			func_241(joaat("legendary_fishing_spot_03"));
			func_242(joaat("legendary_fishing_spot_03"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_240(joaat("legendary_fish_08"));
			func_241(joaat("legendary_fishing_spot_08"));
			func_242(joaat("legendary_fishing_spot_08"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_240(joaat("legendary_fish_12"));
			func_241(joaat("legendary_fishing_spot_12"));
			func_242(joaat("legendary_fishing_spot_12"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_240(joaat("legendary_fish_05"));
			func_241(joaat("legendary_fishing_spot_05"));
			func_242(joaat("legendary_fishing_spot_05"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_240(joaat("legendary_fish_04"));
			func_241(joaat("legendary_fishing_spot_04"));
			func_242(joaat("legendary_fishing_spot_04"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_240(joaat("legendary_fish_14"));
			func_241(joaat("legendary_fishing_spot_14"));
			func_242(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_240(joaat("legendary_fish_09"));
			func_241(joaat("legendary_fishing_spot_09"));
			func_242(joaat("legendary_fishing_spot_09"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_240(joaat("legendary_fish_07"));
			func_241(joaat("legendary_fishing_spot_07"));
			func_242(joaat("legendary_fishing_spot_07"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_240(joaat("legendary_fish_01"));
			func_241(joaat("legendary_fishing_spot_01"));
			func_242(joaat("legendary_fishing_spot_01"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_240(joaat("legendary_fish_11"));
			func_241(joaat("legendary_fishing_spot_11"));
			func_242(joaat("legendary_fishing_spot_11"));
			func_26(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_240(joaat("legendary_fish_10"));
			func_241(joaat("legendary_fishing_spot_10"));
			func_242(joaat("legendary_fishing_spot_10"));
			func_26(false, 10);
			break;
	}

	return;
}

void func_106(Hash hParam0, var uParam1) // Position - 0x4F2C Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_243(hParam0, uParam1, &unk);
	return;
}

int func_107(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x4F3E Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_159(hParam1, true, false) };
		iParam3 = func_244(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_246(hParam1, hParam2, func_245(iParam3, 1), bParam4, bParam9))
		return 0;

	func_247(true, func_1() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_249(32768) && hParam1 != Global_1946054.f_57[func_245(iParam3, 1) /*11*/])
			{
				func_250();
				func_248(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_245(iParam3, 1) /*11*/])
				func_248(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_248(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_251(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_248(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_252(0);
			func_253(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_248(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_108(var uParam0, BOOL bParam1) // Position - 0x50AD Hash - 0x2DC8D50 ^0x79739B7E
{
	int num;
	int num2;
	int i;
	var unk;
	BOOL flag;
	Hash hash;
	Hash hash2;

	unk.f_9 = joaat("SLOTID_NONE");
	flag = false;
	*uParam0 = 0;
	hash = func_203(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_203(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_254("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_255(&unk, i, num, num2))
			{
				if (WEAPON::_IS_WEAPON_ONE_HANDED(unk.f_4))
				{
					if (!bParam1)
					{
						if (unk.f_4 == hash || unk.f_4 == hash2)
						{
						}
						else if (!flag)
						{
							*uParam0 = unk.f_4;
							flag = true;
						}
					}
				
					if (!flag)
					{
						*uParam0 = unk.f_4;
						flag = true;
					}
				}
			}
		}
	
		func_256(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_109() // Position - 0x5176 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_110() // Position - 0x5190 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_111() // Position - 0x51C5 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_112() // Position - 0x51E1 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_113() // Position - 0x51FB Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_257();
	func_258();
	func_259();
	return;
}

void func_114(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5212 Hash - 0x968DA278 ^0x46E4064F
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;
	Vector3 vector;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_JACK_HALL";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_OBJ";
			str3 = "COL_TH_SUB_HIGH_STAKES";
			vector = { -1678.8323f, -335.5439f, 172.9001f };
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	switch (iParam1)
	{
		case joaat("treasure_hunt_loot_12"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
	
		case joaat("treasure_hunt_loot_13"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
	
		case joaat("treasure_hunt_loot_02"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
	
		case joaat("treasure_hunt_loot_18"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
	
		case joaat("treasure_hunt_loot_03"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
	
		case joaat("treasure_hunt_loot_19"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
	
		case joaat("treasure_hunt_loot_04"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
	
		case joaat("treasure_hunt_loot_16"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
	
		case joaat("treasure_hunt_loot_17"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
	
		case joaat("treasure_hunt_loot_05"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
	
		case joaat("treasure_hunt_loot_10"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
	
		case joaat("treasure_hunt_loot_07"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
	
		case joaat("treasure_hunt_loot_21"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
	
		case joaat("treasure_hunt_loot_01"):
			str2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
	
		case joaat("treasure_hunt_loot_11"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
	
		case joaat("treasure_hunt_loot_06"):
			str2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
	
		case joaat("treasure_hunt_loot_24"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	
		case joaat("treasure_hunt_loot_20"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
	
		case joaat("treasure_hunt_loot_09"):
			str2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
	
		case joaat("treasure_hunt_loot_23"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
	
		case joaat("treasure_hunt_loot_22"):
			str = "COL_TH_OBJ";
			str2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
	
		case joaat("treasure_hunt_loot_08"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
	
		case joaat("treasure_hunt_loot_14"):
			str = "COL_TH_OBJ_RDL";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
	
		case joaat("treasure_hunt_loot_15"):
			str = "COL_TH_OBJ_FOUND";
			str2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
	}

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_REMOVE_ENTRY(3, hash);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hash))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hash, vector, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(str2), 0);

	if (bParam2)
	{
		switch (iParam0)
		{
			case -220219788:
				str = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
		
			case 6410548:
				str = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		
			case 218622660:
				str = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
		
			case 390004462:
				str = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
		
			case 499813453:
				str = "COL_TH_JACK_HALL_COMPLETE";
				break;
		
			case 666607663:
				str = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
		}
	}

	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hash, MISC::GET_HASH_KEY(str), str, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hash, true);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hash, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hash, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hash, MISC::VAR_STRING(2, str3));
	return;
}

void func_115(int iParam0, BOOL bParam1) // Position - 0x55E8 Hash - 0x922C415B ^0xC99A4594
{
	Hash hash;
	char* str;
	char* str2;
	char* str3;

	switch (iParam0)
	{
		case -220219788:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_POISONOUS_TRAIL";
			hash = joaat("col_th_sub_poisonous_trail");
			break;
	
		case 6410548:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			hash = joaat("col_th_sub_landmarks_of_riches");
			break;
	
		case 218622660:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			hash = joaat("col_th_sub_tresor_des_morts");
			break;
	
		case 390004462:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			hash = joaat("col_th_sub_elemental_trail");
			break;
	
		case 499813453:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_JACK_HALL";
			hash = joaat("col_th_sub_jack_hall");
			break;
	
		case 666607663:
			str = "COL_TH_TITLE";
			str2 = "COL_TH_SUB_HIGH_STAKES";
			hash = joaat("col_th_sub_high_stakes");
			break;
	}

	str3 = "COL_CTX_PLAYER_LOG";

	if (bParam1)
		str = "MISSION_COMPLETE";

	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	func_183(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_116(int iParam0) // Position - 0x56FD Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_117(int iParam0) // Position - 0x5718 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_118(int iParam0) // Position - 0x5733 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_119(int iParam0) // Position - 0x574E Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_120(int iParam0) // Position - 0x5769 Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_121(int iParam0) // Position - 0x5784 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_122(Hash hParam0) // Position - 0x579F Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_51(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_123(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x57B8 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_171(iParam0, &num, &num2);

	if (!func_172(iParam0, num, num2, bParam2))
		return;

	if (!func_260(iParam0, 1024))
		return;

	func_173(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_124(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x5818 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_171(iParam0, &num, &num2);

	if (!func_172(iParam0, num, num2, bParam2))
		return;

	if (!func_260(iParam0, 1024))
		return;

	func_173(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_125() // Position - 0x5893 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_168())
		return func_126();

	endRange = func_168() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_168(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_261(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_169(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_126() // Position - 0x590D Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_168());
	return func_169(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_127(var uParam0) // Position - 0x5930 Hash - 0x26E9B20B ^0x108E1842
{
	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			break;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			break;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			break;
	
		case joaat("consumable_cigarette_box_cheap_used"):
			*uParam0 = joaat("consumable_cigarette_box_cheap");
			break;
	}

	return;
}

BOOL func_128(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x5985 Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_51(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_159(hParam0, false, true) };
	unk6 = { func_196(hParam0, unk, unk.f_4, false) };
	return func_262(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_129(Hash hParam0) // Position - 0x59D4 Hash - 0x90E372CB ^0xEE55522E
{
	eStackSize stackSize;
	Hash hash;
	Hash hash2;

	if (func_1() != -1)
		return;

	switch (func_76(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_248(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			stackSize = func_264(hParam0);
		
			if (func_265(stackSize))
				func_266(stackSize, stackSize >= 0 && stackSize <= 5, true);
			else
				func_248(30, hParam0, 0, 0, false);
		
			if (func_267() == -2125499975 || func_267() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_248(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_267() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_248(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_268(-525676072, false))
				if (func_269(-525676072, &hash))
					func_248(33, hash, 0, 0, false);
		
			func_248(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_263(81053684, false) <= 0)
				func_248(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_270(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_107(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_75(24);
	
		if (func_108(&hash2, false))
			func_81(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_130(Hash hParam0) // Position - 0x5BA6 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_72(hParam0, 943695443))
		func_271(0, hParam0);
	else if (func_72(hParam0, -2096528786))
		func_271(1, hParam0);
	else if (func_72(hParam0, -1094167013))
		func_271(2, hParam0);
	else if (func_72(hParam0, 1936654645))
		func_271(3, hParam0);
	else if (func_72(hParam0, 1306489306))
		func_271(4, hParam0);
	else if (func_72(hParam0, 435762317))
		func_271(5, hParam0);
	else if (func_72(hParam0, 1259363210))
		func_271(6, hParam0);
	else if (func_72(hParam0, 881398259))
		func_271(7, hParam0);
	else if (func_72(hParam0, -541549214))
		func_271(8, hParam0);
	else if (func_72(hParam0, 130796156))
		func_271(-1, hParam0);

	return;
}

int func_131(Hash hParam0, int iParam1) // Position - 0x5C9C Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_272(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_273(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_132(Hash hParam0) // Position - 0x5CC5 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_51(hParam0, 0))
		return unk;

	if (func_72(hParam0, -305066475))
		if (func_1() == -1)
			if (func_72(hParam0, -537818634))
				return func_274(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_274(joaat("deadeye_items"));
	else if (func_72(hParam0, -537818634))
		return func_274(joaat("medicine_items"));

	if (func_72(hParam0, 2084895747))
		return func_274(joaat("lock_breaker_items"));

	return unk3;
}

void func_133(Hash hParam0) // Position - 0x5D59 Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_1() == -1)
				if (func_91(Global_1835011[4 /*74*/].f_1, true))
					func_62(109, true);
			break;
	}

	return;
}

void func_134(Hash hParam0, int iParam1) // Position - 0x5D92 Hash - 0x3053C451 ^0xCD97D061
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_275(0));
	func_278(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_277(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_135(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x5DD2 Hash - 0xB6CF78C ^0x845E9244
{
	BOOL flag;
	int num;
	var unk;
	int num2;
	char* str;
	int num3;
	int num4;
	int num5;
	char* str2;
	int num6;
	const char* str3;

	if (hParam0 == joaat("ammo_moonshinejug"))
		return;

	if (!func_51(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_279())
	{
		func_280(hParam0, iParam1, bParam2, iParam4);
		return;
	}

	flag = false;
	num = MISC::ABSI(iParam1);
	TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);

	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || iParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_73(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_71(hParam0);
	num3 = 0;
	num4 = joaat("Inventory");

	if (num2 == joaat("AMMO") && hParam0 != joaat("ammo_hatchet") && hParam0 != joaat("ammo_hatchet_cleaver"))
	{
		num3 = joaat("ammo_types");
		num4 = joaat("ammo_types");
	}

	if (num2 == joaat("weapon_mod") || num2 == joaat("weapon_decoration"))
	{
		str = "ITEMTYPE_UPGRADES";
		str.f_1 = "itemtype_textures";
	}
	else if (!func_282(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
	{
		str = "_PLACEHOLDER";
		str.f_1 = "inventory_items";
	}

	if (MISC::GET_HASH_KEY(str) == 121560594)
		str = "DOCUMENT_MAP_GENERIC";

	if (MISC::IS_STRING_NULL_OR_EMPTY(str))
		return;

	num5 = joaat("COLOR_PURE_WHITE");
	str2 = "Transaction_Positive";
	num6 = 0;

	if (flag)
	{
		num5 = joaat("color_greymid");
		str2 = "Transaction_Negative";
		num6 = 1;
	}

	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(hParam0))
		if (!flag && !bParam2)
			num5 = joaat("color_rpg_special_1");
		else
			num5 = joaat("color_yellowdark");

	str3 = func_283(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_122(hParam0)), num), num5);

	if (iParam1 == 1 || func_72(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_122(hParam0));

	func_278(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

void func_136(int iParam0, int iParam1) // Position - 0x6027 Hash - 0x3ABC36EE ^0x53B64BE1
{
	if (func_32(iParam0))
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);

	return;
}

void func_137(Entity eParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6040 Hash - 0xC4F231CE ^0xB86F5EAB
{
	if (!ENTITY::IS_ENTITY_DEAD(eParam0))
		if (ENTITY::IS_ENTITY_ATTACHED(eParam0))
			ENTITY::DETACH_ENTITY(eParam0, bParam1, bParam2);

	return;
}

BOOL func_138(int iParam0) // Position - 0x6065 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1935630 && iParam0 != false;
}

BOOL func_139(int iParam0) // Position - 0x6076 Hash - 0x9C8B9DFE ^0x5874CE32
{
	return MISC::GET_GAME_TIMER() - iParam0 < Global_1898438;
}

int func_140(Hash hParam0) // Position - 0x608A Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 0) & 63;
}

int func_141(Hash hParam0) // Position - 0x609C Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 6) & 63;
}

int func_142(Hash hParam0) // Position - 0x60AE Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 12) & 31;
}

int func_143(Hash hParam0) // Position - 0x60C1 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(hParam0, 26) & 31 * MISC::IS_BIT_SET(hParam0, 31) ? -1 : 1) + 1898;
}

int func_144(Hash hParam0) // Position - 0x60E6 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 22) & 15;
}

int func_145(Hash hParam0) // Position - 0x60F9 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(hParam0, 17) & 31;
}

int func_146(int iParam0, int iParam1) // Position - 0x610C Hash - 0x893AC59E ^0x893AC59E
{
	if (iParam1 < 0)
		iParam1 = 0;

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
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		default:
		
	}

	return 30;
}

BOOL func_147(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x61A6 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_34(hParam1) || !func_34(hParam0))
			return true;

	return hParam0 > hParam1;
}

BOOL func_148(int iParam0) // Position - 0x61D3 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_149(BOOL bParam0) // Position - 0x6211 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

int func_150(Hash hParam0, int iParam1) // Position - 0x6224 Hash - 0x6EE84C5C ^0x6EE84C5C
{
	switch (hParam0)
	{
		case joaat("HAI_HUNTING_02"):
			return 1;
	
		case joaat("HAI_BANK_ROBBERY_01"):
			return 10;
	
		case -1348173149:
			return 17;
	
		case joaat("HAI_HOME_ROBBERY_01"):
			return 14;
	
		case joaat("HAI_COACH_ROBBERY_01"):
			return 7;
	
		case -709866131:
			return 16;
	
		case joaat("HAI_COACH_ROBBERY_03"):
			return 11;
	
		case -589165916:
			return 0;
	
		case joaat("HAI_COACH_ROBBERY_02"):
			return 8;
	
		case joaat("HAI_FIVE_FINGER_FILLET_01"):
			return 4;
	
		case joaat("HAI_COACH_ROBBERY_04"):
			return 12;
	
		case joaat("HAI_FIVE_FINGER_FILLET_02"):
			return 9;
	
		case joaat("HAI_FISHING_01"):
			return 2;
	
		case joaat("HAI_RUSTLING_02"):
			return 13;
	
		case joaat("HAI_FISHING_02"):
			return 3;
	
		case joaat("HAI_HUNTING_06"):
			return 5;
	
		case joaat("HAI_DOMINOES_01"):
			return 6;
	
		case 2061320468:
			return 15;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_151(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x6303 Hash - 0x71EF3E96 ^0x557A7961
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	BOOL flag;
	int num5;

	num3 = iParam0;
	num4 = iParam1;

	if (Global_1572887.f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 100;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1835011[iParam0 /*74*/].f_8));
				break;
		
			case 2:
				num = 101;
				num2 = 170;
				break;
		
			case 3:
				num = 171;
				num2 = 190;
				break;
		
			case 4:
				num = 191;
				num2 = 230;
				break;
		
			case 5:
				num = 231;
				num2 = 260;
				break;
		
			case 6:
				num = 261;
				num2 = 290;
				break;
		
			case 7:
				num = 291;
				num2 = 370;
				break;
		
			case 8:
				num = 371;
				num2 = 570;
				hParam3 = MISC::GET_HASH_KEY(&(Global_1347702[iParam0 /*49*/].f_3));
				break;
		
			case 9:
				num = 571;
				num2 = 650;
				break;
		
			case 10:
				return -1;
		
			case 11:
				num = 651;
				num2 = 750;
				break;
		
			case 12:
				return -1;
		
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				num = 1;
				num2 = 200;
				break;
		
			case 2:
				num = 201;
				num2 = 15700;
				break;
		
			case 4:
				num = 15701;
				num2 = 16200;
				break;
		
			case 6:
				return -1;
		
			case 7:
				return -1;
		
			case 8:
				return -1;
		
			case 10:
				num = 19201;
				num2 = 20000;
				break;
		
			case 12:
				num = 16201;
				num2 = 19200;
				break;
		
			default:
				return -1;
		}
	}

	if (num2 >= func_285())
		num2 = func_285();

	flag = func_286(num3, num4, iParam2);

	if (Global_1572887.f_12 == -1)
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_148(num5) == flag)
				return num5;
		
			if (func_148(num5) == false)
				return func_287(num3, num4, iParam2, i, hParam3);
		}
	
		num = 751;
		num2 = 770;
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			num5 = i;
		
			if (func_148(num5) == flag)
				return num5;
		
			if (func_148(num5) == false)
				return func_287(num3, num4, iParam2, i, hParam3);
		}
	}
	else
	{
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == flag)
				return i;
		}
	
		i = num;
	
		for (i = num; i <= num2; i = i + 1)
		{
			if (Global_1058888.f_428[i /*2*/] == false)
				return func_287(num3, num4, iParam2, i, 0);
		}
	}

	return -1;
}

int func_152(int iParam0) // Position - 0x65BE Hash - 0xB1EC3C9 ^0x6FAB5D7B
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_4;

	return 0;
}

void func_153(int iParam0, int iParam1) // Position - 0x65DD Hash - 0xB1BDF10D ^0x44EF8C18
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_4 = iParam1;
	return;
}

void func_154(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x65FD Hash - 0xA65AB937 ^0xA65AB937
{
	func_288(hParam0, iParam6);
	func_289(hParam0, iParam5);
	func_290(hParam0, iParam4);
	func_291(hParam0, iParam3);
	func_292(hParam0, iParam2);
	func_293(hParam0, iParam1);
	return;
}

BOOL func_155(Hash hParam0) // Position - 0x6635 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_71(hParam0) == joaat("WEAPON");
}

BOOL func_156(Hash hParam0) // Position - 0x6649 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_1() != -1)
		return false;

	if (func_73(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_163(hParam0, &unk, 1, false, false);

	return func_104(hParam0, 1, false);
}

void func_157(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x668D Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_71(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_78(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_191(weaponHash))
	{
		if (func_1() == -1)
			func_79(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_55(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_135(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_158(Hash hParam0, var uParam1) // Position - 0x6734 Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_72(hParam0, 58855631))
	{
		func_294(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_159(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x6762 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_295(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_71(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_299(hParam0, -1823706425))
			{
				unk = { func_196(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_299(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_196(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_UPGRADE")))
			{
				unk.f_4 = joaat("SLOTID_UPGRADE");
			}
		
			[[fallthrough]];
	
		case joaat("HORSE"):
			unk.f_4 = 1782082944;
			break;
	
		case joaat("emote"):
			unk.f_4 = -813824107;
			unk = { func_298(bParam1) };
		
			switch (func_76(hParam0))
			{
				case joaat("CI_CATEGORY_EMOTE_TAUNTS"):
					unk.f_4 = -268116367;
					break;
			
				case 664784405:
					unk.f_4 = -1150938404;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_GREETS"):
					unk.f_4 = -241855024;
					break;
			
				case joaat("CI_CATEGORY_EMOTE_DANCES"):
					unk.f_4 = -1756997214;
					break;
			}
			break;
	
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(hParam0, joaat("SLOTID_WARDROBE")))
			{
				unk = { func_196(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_296(bParam1) };
		
			if (bParam2 && func_297(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_194(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_194(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_195(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_300(unk, &unk28, bParam1, false))
				{
					unk.f_4 = 0;
				}
				else
				{
					unk = { unk28.f_5 };
					unk.f_4 = joaat("SLOTID_CURRENCY");
				}
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

int func_160(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6A1F Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_51(hParam0, 0))
		return 0;

	if (!func_80(false))
		bParam2 = true;

	if (bParam2 || !func_301(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_167(bParam3), hParam0);
}

int func_161(Hash hParam0, BOOL bParam1) // Position - 0x6A6D Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_84(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_167(bParam1), hParam0, false);
}

BOOL func_162() // Position - 0x6A97 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_1() != -1)
		return false;

	if (!func_48())
		return false;

	if (!func_91(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[2 /*74*/].f_1, true) && func_91(Global_1347702[120 /*49*/].f_15, true) && !func_91(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[37 /*74*/].f_1, true) && !func_91(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[57 /*74*/].f_1, true) && !func_91(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[26 /*74*/].f_1, true) && !func_91(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_91(Global_1835011[62 /*74*/].f_1, true) && func_91(Global_1835011[63 /*74*/].f_1, true) && !func_91(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[75 /*74*/].f_1, true) && !func_91(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_91(Global_1835011[76 /*74*/].f_1, true) && !func_91(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[40 /*74*/].f_1, true) && func_91(Global_1835011[41 /*74*/].f_1, true) && !func_91(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[62 /*74*/].f_1, true) && func_91(Global_1835011[63 /*74*/].f_1, true) && !func_91(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_91(Global_1835011[65 /*74*/].f_1, true) && func_91(Global_1835011[66 /*74*/].f_1, true) && !func_91(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_163(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x6CDD Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_302(&hParam0);

	if (!func_51(hParam0, 0))
		return 0;

	if (!func_80(false))
		bParam3 = true;

	if (func_155(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_296(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_194(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_195(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_297(hParam0, true))
				if (!func_194(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_195(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_303(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_160(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_301(hParam0))
		inventoryItemCountWithItemid = func_304(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_167(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

int func_164(Hash hParam0, int iParam1) // Position - 0x6E22 Hash - 0x7A1C2599 ^0xFF9B5634
{
	var outData;
	int outIndex;
	int i;

	outData = 20;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(hParam0, &outData, &outIndex, 20))
	{
		for (i = 0; i < outIndex; i = i + 1)
		{
			if (outData[i /*2*/].f_1 == iParam1)
				return outData[i /*2*/];
		}
	}

	return 0;
}

Hash func_165(Hash hParam0, int iParam1) // Position - 0x6E6C Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_51(hParam0, 0))
		return 0;

	num = func_71(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_72(hParam0, 1399091007))
	{
		func_243(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_166(Hash hParam0, BOOL bParam1) // Position - 0x6EE6 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_305(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_306(&unk, func_296(false));

	if (!func_307(&unk, &num, &num2, false))
		return 0;

	func_256(num);
	return num2;
}

int func_167(BOOL bParam0) // Position - 0x6F44 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_1() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_168() // Position - 0x6F85 Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_169(Hash hParam0) // Position - 0x6F97 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_170(int iParam0) // Position - 0x6FA5 Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_1() != -1)
		return;

	num = func_308(iParam0);
	value = func_309(iParam0);

	if (Global_1347477.f_117 || !func_74(31) || !func_310(num))
		return;

	if (value <= 0f)
		return;

	if (func_311(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_312(num, Global_40.f_11095.f_11[num] + value, false);
	func_278(MISC::VAR_STRING(6, func_313(iParam0), value), "itemtype_textures", func_314(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_171(int iParam0, var uParam1, var uParam2) // Position - 0x70A4 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_172(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x70C0 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_315(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_316(iParam0))
		return false;

	if (func_317(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_260(iParam0, 1) || func_318(32768))
		if (!func_260(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_319())
		return false;

	return true;
}

void func_173(int iParam0, int iParam1) // Position - 0x7162 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_174(int iParam0) // Position - 0x7186 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_209(iParam0);
	return num == 3 || num == 4;
}

Hash func_175(int iParam0) // Position - 0x71A4 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

char* func_176(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x725D Hash - 0xF20034E5 ^0x5692C701
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_67() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_320(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_321(), 12);
			break;
	
		case -1531394072:
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_EX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", iParam4, iParam5);
			break;
	
		case joaat("dino_bones"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_DB_COMPLETE";
			else if (func_224() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_322(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_224(), 30);
			break;
	
		case joaat("taxidermy"):
			if (iParam2 == 3)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 4)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_VACATION");
			else if (iParam2 == 5)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_ON_VACATION");
			else if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_TX_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			else if (iParam2 == 8)
				sParam3 = "COL_TX_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_9(hParam6, 20));
			break;
	
		case 1995362678:
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_LF_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_LF_COMPLETE";
			else
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_323(), 13);
			break;
	
		case joaat("rock_carvings"):
			if (iParam2 == 0)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			else if (iParam2 == 1)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_READ_INVITATION");
			else if (iParam2 == 2)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_VISIT");
			else if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_RC_COMPLETE";
			else if (func_225() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_324(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_225(), 10);
			break;
	}

	return sParam3;
}

BOOL func_177(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x754A Hash - 0xC978E890 ^0x1621426E
{
	if (hParam2 == joaat("CIGARETTE_CARDS"))
		if (hParam1 == joaat("col_cc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_cc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_cc_intro_pre"));
	else if (hParam2 == joaat("dino_bones"))
		if (hParam1 == joaat("col_db_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_db_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_db_intro_pre"));
	else if (hParam2 == joaat("rock_carvings"))
		if (hParam1 == joaat("col_rc_intro"))
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, joaat("col_rc_intro_pre")))
				UILOG::_UILOG_REMOVE_ENTRY(3, joaat("col_rc_intro_pre"));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_REMOVE_ENTRY(3, hParam1);

	return true;
}

BOOL func_178(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x75F7 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_179(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x7623 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_180(int iParam0, Hash hParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x7672 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_325(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_104(hash, 1, false) || func_327(func_326(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_325(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_325(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_224() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_328(i)), func_328(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_322() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_328(i)), func_328(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_328(i)), func_328(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_235(hParam3, func_329(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_231(hash) - iParam7 >= func_9(hParam3, func_330(i));
				else
					flag = func_231(hash) >= func_9(hParam3, func_330(i));
			else if (hParam4 == hash)
				flag = func_231(hash) + iParam7 >= func_9(hParam3, func_330(i));
			else
				flag = func_231(hash) >= func_9(hParam3, func_330(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_332(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_225() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_334(i)), func_334(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_324() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_334(i)), func_334(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_334(i)), func_334(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_235(hParam3, func_329(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_231(hash) - iParam7 >= 1;
				else
					flag = func_335(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_335(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_336(hash)), func_336(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_181(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x79E7 Hash - 0x3C34F826 ^0x78E96FD0
{
	BOOL flag;

	flag = false;

	if (iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("CIGARETTE_CARDS"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == -1531394072)
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", flag, true, false);

	if (hParam2 == 1995362678)
	{
		if (func_323() >= 13)
			flag = true;
		else
			flag = false;
	
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", flag, true, false);
	}

	if (iParam3 == 7 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 8)
		flag = true;
	else
		flag = false;

	if (hParam2 == joaat("taxidermy"))
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", flag, true, false);

	return true;
}

BOOL func_182(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x7AF0 Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_42(func_337(0)) && func_2(0) == 1 || func_2(0) == 8 || func_2(0) == 6)
		iParam3 = 7;

	if (hParam2 == joaat("dino_bones") || hParam2 == 1995362678 || hParam2 == joaat("rock_carvings"))
	{
		if (iParam3 == 7)
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
	}
	else if (hParam2 == joaat("taxidermy"))
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, hParam1, 1, "");
			}
		}
	}

	return true;
}

int func_183(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x7B92 Hash - 0x51CE9407 ^0x19439D00
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam7;
	num.f_1 = sParam8;
	num.f_2 = sParam9;
	num.f_3 = iParam11;
	num.f_4 = iParam4;
	num.f_4.f_1 = iParam6;
	num.f_4.f_2 = sParam5;
	num2.f_7 = 1;
	num2 = iParam10;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam12, bParam13);
	return num3;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0x7C09 Hash - 0xA17D549C ^0x6774F0C3
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return "COL_CC_INV_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return "COL_CC_ACT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return "COL_CC_GRL_SET";
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return "COL_CC_ART_SET";
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return "COL_CC_LND_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return "COL_CC_PAM_SET";
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return "COL_CC_SPT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return "COL_CC_AML_SET";
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return "COL_CC_PLT_SET";
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return "COL_CC_GUN_SET";
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return "COL_CC_HOR_SET";
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return "COL_CC_VEH_SET";
	
		default:
		
	}

	return "";
}

int func_185(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x7CB9 Hash - 0xB88D7AA5 ^0x36259347
{
	int num;
	int num2;
	int num3;

	num = -2;
	num = iParam4;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam8;
	num2.f_7 = 1;
	num2 = iParam7;
	num2.f_1 = sParam0;
	num2.f_2 = sParam1;
	num2.f_3 = 0;
	num2.f_4 = hParam2;
	num2.f_5 = hParam3;
	num3 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&num, &num2, bParam9, bParam10);
	return num3;
}

BOOL func_186(int iParam0) // Position - 0x7D1A Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_187(int iParam0) // Position - 0x7D2D Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_188(int iParam0) // Position - 0x7D57 Hash - 0x48EBE6BD ^0x358C7E90
{
	int num;
	int num2;
	int offset;
	int address;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	address = Global_40.f_7857[num2];
	MISC::SET_BIT(&address, offset);
	Global_40.f_7857[num2] = address;
	return;
}

void func_189(int iParam0) // Position - 0x7D91 Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_48() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_185("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_62(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_48() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_185("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_62(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_48() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_185("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_62(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_48() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_185("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_62(589, false);
			break;
	
		case 6:
			break;
	
		case 7:
			break;
	
		case 8:
			break;
	
		case 9:
			break;
	
		case 10:
			break;
	
		case 11:
			func_338(true);
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
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_339(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_339(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_339(3);
			break;
	
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
	
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
	
		case 23:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
	
		case 24:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
		
			if (func_1() == -1)
			{
				if (!func_270(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_346(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_201())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_104(hash, 1, false))
						func_128(hash, 1, 752097756);
				
					func_107(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
				}
			}
			break;
	
		case 25:
			break;
	
		case 26:
			break;
	
		case 27:
			break;
	
		case 28:
			break;
	
		case 29:
			break;
	
		case 30:
			break;
	
		case 31:
			break;
	
		case 32:
			break;
	
		case 33:
			func_340(true);
			break;
	
		case 34:
			func_341(true);
			break;
	
		case 35:
			func_342(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_343(false);
			break;
	
		case 38:
			func_344(false);
			break;
	
		case 39:
			func_345(false);
			break;
	
		case 40:
			break;
	
		case 41:
			break;
	
		case 42:
			break;
	
		case 43:
			break;
	
		case 44:
			break;
	
		case 45:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
	
		case 46:
			func_347();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_1() == -1)
				if (!func_104(1013902307, 1, false))
					func_128(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_1() == -1)
				if (!func_104(786809402, 1, false))
					func_128(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_1() == -1)
			{
				if (!func_104(1013902307, 1, false))
					func_128(1013902307, 1, 752097756);
			
				if (!func_104(142640135, 1, false))
					func_128(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_1() == -1)
			{
				if (!func_104(786809402, 1, false))
					func_128(786809402, 1, 752097756);
			
				if (!func_104(-518019409, 1, false))
					func_128(-518019409, 1, 752097756);
			}
			break;
	
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
	
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
	
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
	
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("compendium"), true);
			break;
	
		case 56:
			UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}

	return;
}

BOOL func_190(Hash hParam0) // Position - 0x83BA Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_191(Hash hParam0) // Position - 0x83E2 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_192(Hash hParam0) // Position - 0x840A Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_193(int iParam0, int iParam1) // Position - 0x8425 Hash - 0xE1D12727 ^0x71D656A6
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
	
		case 1:
			return -1783281882;
	
		case 2:
			return 1704602624;
	
		case 3:
			return 1214181762;
	
		case 4:
			return 1520605650;
	
		case 5:
			return 551482925;
	
		case 6:
			return 843929315;
	
		case 7:
			return 1974334822;
	
		case 8:
			return -1963435638;
	
		case 9:
			return -430578371;
	
		case 10:
			return -730381952;
	
		case 11:
			return -1500304973;
	
		case 12:
			return -253503777;
	
		case 13:
			return 1352275534;
	
		case 14:
			return 1666399168;
	
		case 15:
			return -1911121386;
	
		case 16:
			return 1756656691;
	
		case 17:
			return -1774867076;
	
		case 18:
			return -421952220;
	
		case 19:
			return -1087003323;
	
		case 20:
			return 1231618917;
	
		case 21:
			return -1183777174;
	
		case 22:
			return -841767082;
	
		case 23:
			return 1043717005;
	
		case 24:
			return 142663787;
	
		case 25:
			return 1718143051;
	
		case 26:
			return -6605744;
	
		case 27:
			return 953047564;
	
		case 28:
			return 769706682;
	
		case 29:
			return 1635590003;
	
		case 30:
			return -2047978619;
	
		case 31:
			return -586319254;
	
		case 32:
			return 249896112;
	
		case 33:
			return -1060513333;
	
		case 34:
			return 1317351007;
	
		case 35:
			return -500478573;
	
		case 36:
			return -806573802;
	
		case 37:
			return -1109949204;
	
		case 38:
			return -740156546;
	
		case 39:
			return -684532710;
	
		case 40:
			return 1158805436;
	
		case 41:
			return -559473670;
	
		case 42:
			return -797147251;
	
		case 43:
			return -382216265;
	
		case 44:
			return 1419177114;
	
		case 45:
			return 1704297235;
	
		case 46:
			return -1139016418;
	
		case 47:
			return 897705377;
	
		case 48:
			return 17961769;
	
		case 49:
			return 205582207;
	
		case 50:
			return 900740963;
	
		case 51:
			return -1369589344;
	
		case 52:
			return -1695823795;
	
		case 53:
			return -41453074;
	
		case 54:
			return 539767227;
	
		case 55:
			return 1210490314;
	
		case 56:
			return -399684751;
	
		case 57:
			return 2138893455;
	
		case 58:
			return -1617010487;
	
		case 59:
			return -832377028;
	
		case 60:
			return -428040245;
	
		case 61:
			return 1279288897;
	
		case 62:
			return -594897905;
	
		case 63:
			return -1360459240;
	
		case 64:
			return 1838428396;
	
		case 65:
			return -1467846997;
	
		case 66:
			return -490610263;
	
		case 67:
			return -1885413079;
	
		case 68:
			return 708884155;
	
		case 69:
			return joaat("BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS") /* collision: BB_FEMALE_LOWERS_BLUE_LEATHER_ZIPPERS */;
	
		case 70:
			return -1912136700;
	
		case 71:
			return -1268031552;
	
		case 72:
			return 1177953227;
	
		case 73:
			return 2130805296;
	
		case 74:
			return 38093490;
	
		case 75:
			return -269153218;
	
		case 76:
			return -1995068011;
	
		case 77:
			return -164284834;
	
		case 78:
			return 1446463345;
	
		case 79:
			return 1501315823;
	
		case 80:
			return -750379482;
	
		case 81:
			return -929560937;
	
		case 82:
			return 608323241;
	
		case 83:
			return 1030796013;
	
		case 84:
			return 1915057434;
	
		case 85:
			return -1582276476;
	
		case 86:
			return 692059311;
	
		case 87:
			return 2062839241;
	
		case 88:
			return -1884531872;
	
		case 89:
			return -866434534;
	
		case 90:
			return -1252192421;
	
		case 91:
			return 1243288963;
	
		case 92:
			return -1953772189;
	
		case 93:
			return 754411745;
	
		case 94:
			return 545309006;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_194(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xA56F Hash - 0x4285A587 ^0x4285A587
{
	return func_304(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_195(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xA587 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_348(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_196(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xA5A8 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_51(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_167(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_197(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0xA5D9 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_349(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_300(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_80(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_167(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_198(Hash hParam0, int iParam1) // Position - 0xA669 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_350(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_199(Hash hParam0) // Position - 0xA6B1 Hash - 0x708BD33E ^0xFFB5B34
{
	char* propertyName;
	char* propertyName2;
	Hash value;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630.f_12)
		return;

	if (WEAPON::IS_WEAPON_BOW(hParam0))
		return;

	propertyName = "player_newWeaponType";
	propertyName2 = "player_newWeaponTime";

	if (WEAPON::IS_WEAPON_PISTOL(hParam0))
	{
		propertyName = "player_newPistolWeaponType";
		propertyName2 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(hParam0))
	{
		propertyName = "player_newRevolverWeaponType";
		propertyName2 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(hParam0))
	{
		propertyName = "player_newRifleWeaponType";
		propertyName2 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(hParam0))
	{
		propertyName = "player_newShotgunWeaponType";
		propertyName2 = "player_newShotgunWeaponTime";
	}

	DECORATOR::DECOR_SET_INT(Global_35, propertyName, hParam0);
	value = func_49();
	func_50(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_200(Hash hParam0) // Position - 0xA780 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_351(hParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, joaat("ammo_arrow")) <= 0)
			num = 10;
		else
			num = 0;
	}
	else if (WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(hParam0))
			num = 12;
		else
			num = WEAPON::GET_WEAPON_CLIP_SIZE(hParam0) * 4;
	
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
	
		if (pedAmmoByType >= num)
			num = 0;
		else if (pedAmmoByType > 0)
			num = num - pedAmmoByType;
	}

	return num;
}

BOOL func_201() // Position - 0xA7FC Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_1() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_202(Hash hParam0) // Position - 0xA821 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_203(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xA833 Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_204(Hash hParam0) // Position - 0xA859 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_74(50))
			{
				if (!func_74(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_74(51))
			{
				if (!func_74(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_205() // Position - 0xA8C5 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_206(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0xA8D6 Hash - 0x4FC4FA99 ^0x540DBE26
{
	var unk;
	BOOL isMP;
	BOOL metaPedType;
	Hash hash;
	int num;
	int num2;
	int num3;
	BOOL flag;
	Hash componentHash;
	int num4;
	int num5;
	int numComponentsInPed;

	if (!func_51(hParam1, 0))
		return false;

	if (func_71(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_1() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_76(hParam1) == -999503751)
		return true;

	num = func_352(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_72(hParam1, 866047851))
	{
		num2 = func_245(num, 1);
	
		if (func_353(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
		{
			*uParam2 = -265166256;
			return false;
		}
	
		flag = true;
	}

	switch (num)
	{
		case -1944638739:
			num2 = 35;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_72(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_354(1868067663, &unk))
			{
				*uParam2 = 939463734;
				return false;
			}
		
			[[fallthrough]];
	
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!flag)
				break;
		
			numComponentsInPed = PED::_GET_NUM_COMPONENTS_IN_PED(pedParam0);
			num5 = func_355(componentHash, num, metaPedType, isMP);
			num4 = func_355(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
			if ((numComponentsInPed + num5) - num4 > 31)
			{
				*uParam2 = -1608241763;
				return false;
			}
			break;
	
		case 1742327865:
			if (PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(componentHash, metaPedType, isMP) == joaat("neckties") && PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
		
			num2 = 10;
			hash = func_76(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
			if (flag && hash == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
	
		case 1900541263:
			num2 = 36;
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
		
			if (PED::_IS_META_PED_USING_COMPONENT(pedParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
	
		case 1958421083:
			hash = func_76(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_72(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_356(Global_1946054.f_1497.f_1[num2 /*3*/]))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			break;
	}

	*uParam2 = 0;
	return true;
}

void func_207() // Position - 0xABE6 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_208() // Position - 0xAC07 Hash - 0xDC6E219D ^0xBD2A18DD
{
	float num;
	var unk;

	num = Global_40.f_11095.f_44;
	unk = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num - Global_40.f_11095.f_69);
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::SET_PLAYER_STAMINA_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - num);
	PLAYER::_SET_PLAYER_STAMINA_SPRINT_DEPLETION_MULTIPLIER(PLAYER::PLAYER_ID(), 1f - unk);
	return;
}

int func_209(int iParam0) // Position - 0xAC5C Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_42(iParam0))
		return -1;

	return func_357(iParam0);
}

int func_210() // Position - 0xAC78 Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_104(func_358(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_211(Hash hParam0) // Position - 0xACAA Hash - 0xBD10D1A2 ^0xAD2FE305
{
	switch (hParam0)
	{
		case joaat("PROVISION_BUFFALO_HORN_LEGENDARY"):
		case joaat("provision_earring_silver"):
		case joaat("provision_rs_abalone_shell_fragment"):
			return joaat("provision_talisman_buffalo_horn");
	
		case joaat("PROVISION_BEAR_LEGENDARY_CLAW"):
		case joaat("provision_bracelet_silver"):
		case joaat("provision_rc_quartz_chunk"):
			return joaat("provision_talisman_bear_claw");
	
		case joaat("provision_bracelet_gold"):
		case joaat("provision_cc_vintage_handcuffs"):
		case joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"):
			return joaat("provision_talisman_alligator_tooth");
	
		case joaat("provision_rf_wood_cobalt"):
		case joaat("provision_earring_gold"):
		case joaat("PROVISION_BOAR_TUSK_LEGENDARY"):
			return joaat("provision_talisman_boar_tusk");
	
		case joaat("PROVISION_OLD_BRASS_COMPASS"):
			return joaat("provision_talisman_raven_claw");
	}

	return 0;
}

BOOL func_212(int iParam0, Hash hParam1) // Position - 0xAD40 Hash - 0x33707815 ^0xEA5B7C5C
{
	Hash hash;
	Hash hash2;

	switch (iParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			if (hParam1 == joaat("PROVISION_BUFFALO_HORN_LEGENDARY"))
			{
				hash = joaat("provision_rs_abalone_shell_fragment");
				hash2 = joaat("provision_earring_silver");
			}
			else if (hParam1 == joaat("provision_rs_abalone_shell_fragment"))
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_earring_silver");
			}
			else
			{
				hash = joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
				hash2 = joaat("provision_rs_abalone_shell_fragment");
			}
			break;
	
		case joaat("provision_talisman_bear_claw"):
			if (hParam1 == joaat("PROVISION_BEAR_LEGENDARY_CLAW"))
			{
				hash = joaat("provision_rc_quartz_chunk");
				hash2 = joaat("provision_bracelet_silver");
			}
			else if (hParam1 == joaat("provision_rc_quartz_chunk"))
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_bracelet_silver");
			}
			else
			{
				hash = joaat("PROVISION_BEAR_LEGENDARY_CLAW");
				hash2 = joaat("provision_rc_quartz_chunk");
			}
			break;
	
		case joaat("provision_talisman_boar_tusk"):
			if (hParam1 == joaat("PROVISION_BOAR_TUSK_LEGENDARY"))
			{
				hash = joaat("provision_rf_wood_cobalt");
				hash2 = joaat("provision_earring_gold");
			}
			else if (hParam1 == joaat("provision_rf_wood_cobalt"))
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_earring_gold");
			}
			else
			{
				hash = joaat("PROVISION_BOAR_TUSK_LEGENDARY");
				hash2 = joaat("provision_rf_wood_cobalt");
			}
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			if (hParam1 == joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH"))
			{
				hash = joaat("provision_cc_vintage_handcuffs");
				hash2 = joaat("provision_bracelet_gold");
			}
			else if (hParam1 == joaat("provision_cc_vintage_handcuffs"))
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_bracelet_gold");
			}
			else
			{
				hash = joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
				hash2 = joaat("provision_cc_vintage_handcuffs");
			}
			break;
	}

	if (func_104(hash, 1, false) && func_104(hash2, 1, false))
		return true;

	return false;
}

Hash func_213(Hash hParam0) // Position - 0xAEA1 Hash - 0xB8EC44B7 ^0x8CFD1640
{
	switch (hParam0)
	{
		case joaat("PROVISION_WOLF_HEART_LEGENDARY"):
			return joaat("provision_trinket_wolf_heart");
	
		case joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_pronghorn_antler");
	
		case joaat("PROVISION_FOX_CLAW_LEGENDARY"):
			return joaat("provision_trinket_fox_claw");
	
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("provision_trinket_coyote_fang");
	
		case joaat("PROVISION_RAM_HORN_LEGENDARY"):
			return joaat("provision_trinket_ram_horn");
	
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_buck_antler");
	
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_elk_antler");
	
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("provision_trinket_cougar_fang");
	
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("provision_trinket_bison_horn");
	
		case joaat("provision_lions_paw"):
			return joaat("provision_trinket_lion_paw");
	
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return joaat("provision_trinket_moose_antler");
	
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("provision_trinket_beaver_tooth");
	
		case joaat("PROVISION_PANTHER_EYE_LEGENDARY"):
			return joaat("provision_trinket_panther_eye");
	
		default:
		
	}

	return 0;
}

BOOL func_214(Hash hParam0, int iParam1) // Position - 0xAF68 Hash - 0xB78A2FC ^0x6E3EB1C7
{
	Hash hash;

	hash = func_359(hParam0);

	if (hash != -15)
	{
		func_50(&hash, 0, iParam1, 0, 0, 0, 0, false);
		return !func_35(hash, true);
	}

	return false;
}

int func_215(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xAF9A Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_104(joaat("provision_trinket_elk_antler"), 1, false))
		num = num + 0.1f;

	num2.f_1 = 10;
	num2.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_35, true, true, hParam0, &num2, 0);

	for (i = 0; i < num2; i = i + 1)
	{
		if (num2.f_1[i] == joaat("currency_cash"))
		{
			return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
		else
		{
			hash = num2.f_1[i];
		
			if (func_51(hash, 0) && func_72(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_216(int iParam0, const char* sParam1, int iParam2) // Position - 0xB05F Hash - 0x4DF85B80 ^0x9C0D1F26
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_278(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_217(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xB0A0 Hash - 0x9636EF60 ^0x355C8D65
{
	int num;
	int value;
	int num2;

	if (iParam0 <= 0)
		return;

	if (bParam1)
	{
		num = BUILTIN::ROUND(BUILTIN::TO_FLOAT(iParam0) * iParam2);
		value = (iParam0 - num) / iParam3;
	
		if (func_360())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_278(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_361(num);
			func_362(num, 0, 0);
		}
	
		func_278(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_89(func_274(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_218(int iParam0) // Position - 0xB17C Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_219(int iParam0) // Position - 0xB197 Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_220(int iParam0) // Position - 0xB1B2 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_221(int iParam0) // Position - 0xB1CD Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_222(int iParam0) // Position - 0xB1E8 Hash - 0xC69F7374 ^0xCEC8F963
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam0)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_231(hash);
	num3 = func_231(hash2);
	num4 = func_231(hash3);
	num6 = func_232(hash);
	num7 = func_232(hash2);
	num8 = func_232(hash3);

	if (iParam0 != 2)
	{
		num5 = func_231(hash4);
		num9 = func_232(hash4);
	}

	if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam0 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

void func_223(int iParam0) // Position - 0xB35B Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_224() // Position - 0xB376 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_363(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_225() // Position - 0xB3AF Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_226(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0xB3C1 Hash - 0x9548C303 ^0x2CDF6383
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	switch (hParam0)
	{
		case joaat("taxidermy_order_05"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_02"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_01"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT");
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"))
				hash = joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT");
			break;
	
		case joaat("taxidermy_order_04"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT");
				hash4 = joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT");
			}
			break;
	
		case joaat("taxidermy_order_03"):
			if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT");
			}
			else if (hParam1 == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"))
			{
				hash = joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT");
				hash2 = joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT");
				hash3 = joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT");
			}
			break;
	}

	if (hParam0 == joaat("taxidermy_order_01"))
	{
		if (bParam3)
			if (func_335(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_335(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_335(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_335(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_335(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_335(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash) && func_335(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_335(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_335(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_335(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash) && func_335(hash2) && func_335(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_335(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_335(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_335(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_335(hash) && func_335(hash2) && func_335(hash3) && func_335(hash4))
			return true;
	}

	return false;
}

void func_227(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xB886 Hash - 0x5A64C5C8 ^0x6D52F178
{
	!bParam2;

	switch (iParam0)
	{
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_366();
			func_364(iParam0);
			break;
	
		case -1925798111:
			func_364(-1925798111);
			func_365(-919512195);
			func_365(420709909);
			func_365(1703426636);
			break;
	
		case -1838352012:
			func_365(-1674179981);
			func_365(-1835851517);
			func_364(-1838352012);
			break;
	
		case -1835851517:
			func_365(-1674179981);
			func_365(-1838352012);
			func_364(-1835851517);
			break;
	
		case -1738165526:
			func_364(-1738165526);
			func_365(0);
			func_365(473295046);
			break;
	
		case -1717960576:
			func_365(210001842);
			func_364(-1717960576);
			break;
	
		case -1674179981:
			func_365(-1835851517);
			func_365(-1838352012);
			func_364(-1674179981);
			break;
	
		case -1612662716:
			func_365(1822001510);
			func_364(-1612662716);
			break;
	
		case -1414537028:
			func_365(38162571);
			func_365(1350391819);
			func_365(54073871);
			func_364(-1414537028);
			break;
	
		case -1311865656:
			func_364(-1311865656);
			func_365(1509509592);
			func_365(-959357075);
			func_365(405586984);
			break;
	
		case -1271608261:
			func_365(-150493654);
			func_365(1846061697);
			func_365(-1145519186);
			func_364(-1271608261);
			break;
	
		case -1223121209:
			func_364(-1223121209);
			func_365(630808005);
			break;
	
		case -1145519186:
			func_365(-150493654);
			func_365(-1271608261);
			func_365(1846061697);
			func_364(-1145519186);
			break;
	
		case -1124061431:
			func_365(198200492);
			func_364(-1124061431);
			func_365(52706132);
			func_365(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_364(-1080627546);
			else
				func_365(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_365(-538889627);
			func_365(-538880323);
			func_365(-1056767524);
			func_364(iParam0);
			break;
	
		case -959357075:
			func_364(-959357075);
			func_365(1509509592);
			func_365(405586984);
			func_365(-1311865656);
			break;
	
		case -919512195:
			func_364(-919512195);
			func_365(-1925798111);
			func_365(420709909);
			func_365(1703426636);
			break;
	
		case -664252410:
			func_365(2019386373);
			func_365(2109952320);
			func_364(-664252410);
			break;
	
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_367();
			func_364(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_364(-524145696);
			else
				func_365(-524145696);
		
			func_365(1626481264);
			func_365(282809459);
			break;
	
		case -502324015:
			func_365(1497516462);
			func_365(2016141805);
			func_365(1010885152);
			func_364(-502324015);
			break;
	
		case -434590080:
			func_365(1376646519);
			func_365(931649776);
			func_365(1743048395);
			func_365(449774763);
			func_364(-434590080);
			break;
	
		case -404698347:
			func_365(1306158345);
			func_365(1952610440);
			func_365(-223469678);
			func_365(1517904467);
			func_364(-404698347);
			break;
	
		case -259123672:
			func_365(198200492);
			func_365(-1124061431);
			func_365(52706132);
			func_364(-259123672);
			break;
	
		case -223469678:
			func_365(1306158345);
			func_365(1952610440);
			func_365(-404698347);
			func_365(1517904467);
			func_364(-223469678);
			break;
	
		case -150493654:
			func_365(-1271608261);
			func_365(1846061697);
			func_365(-1145519186);
			func_364(-150493654);
			break;
	
		case 0:
			func_364(0);
			func_365(473295046);
			func_365(-1738165526);
			break;
	
		case 38162571:
			func_365(-1414537028);
			func_365(1350391819);
			func_365(54073871);
			func_364(38162571);
			break;
	
		case 52706132:
			func_365(198200492);
			func_365(-1124061431);
			func_364(52706132);
			func_365(-259123672);
			break;
	
		case 54073871:
			func_365(-1414537028);
			func_365(38162571);
			func_365(1350391819);
			func_364(54073871);
			break;
	
		case 198200492:
			func_364(198200492);
			func_365(-1124061431);
			func_365(52706132);
			func_365(-259123672);
			break;
	
		case 210001842:
			func_365(-1717960576);
			func_364(210001842);
			break;
	
		case 280705402:
			func_365(1766284049);
			func_365(1926308480);
			func_364(280705402);
			break;
	
		case 282809459:
			func_364(282809459);
			func_365(1626481264);
			func_365(-524145696);
			break;
	
		case 405586984:
			func_364(405586984);
			func_365(1509509592);
			func_365(-959357075);
			func_365(-1311865656);
			break;
	
		case 420709909:
			func_364(420709909);
			func_365(-919512195);
			func_365(-1925798111);
			func_365(1703426636);
			break;
	
		case 439465264:
			if (func_368(1609506757))
				if (bParam1)
					func_364(439465264);
				else
					func_365(439465264);
			break;
	
		case 449774763:
			func_365(1376646519);
			func_365(931649776);
			func_365(-434590080);
			func_365(1743048395);
			func_364(449774763);
			break;
	
		case 473295046:
			func_364(473295046);
			func_365(0);
			func_365(-1738165526);
			break;
	
		case 630808005:
			func_364(630808005);
			func_365(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_364(885203519);
			else
				func_365(885203519);
			break;
	
		case 931649776:
			func_365(1376646519);
			func_365(-434590080);
			func_365(1743048395);
			func_365(449774763);
			func_364(931649776);
			break;
	
		case 932909855:
			func_364(932909855);
			func_365(2051822093);
			break;
	
		case 1010885152:
			func_365(1497516462);
			func_365(2016141805);
			func_364(1010885152);
			func_365(-502324015);
			break;
	
		case 1306158345:
			func_365(1952610440);
			func_365(-223469678);
			func_365(-404698347);
			func_365(1517904467);
			func_364(1306158345);
			break;
	
		case 1350391819:
			func_365(-1414537028);
			func_365(38162571);
			func_365(54073871);
			func_364(1350391819);
			break;
	
		case 1376646519:
			func_365(931649776);
			func_365(-434590080);
			func_365(1743048395);
			func_365(449774763);
			func_364(1376646519);
			break;
	
		case 1453909576:
			func_364(1453909576);
			func_365(1643531967);
			break;
	
		case 1497516462:
			func_364(1497516462);
			func_365(2016141805);
			func_365(1010885152);
			func_365(-502324015);
			break;
	
		case 1509509592:
			func_364(1509509592);
			func_365(405586984);
			func_365(-959357075);
			func_365(-1311865656);
			break;
	
		case 1517904467:
			func_365(1306158345);
			func_365(1952610440);
			func_365(-223469678);
			func_365(-404698347);
			func_364(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_365(439465264);
				func_364(1609506757);
			}
			else
			{
				func_365(1609506757);
				func_365(439465264);
			}
			break;
	
		case 1626481264:
			func_364(1626481264);
			func_365(-524145696);
			func_365(282809459);
			break;
	
		case 1643531967:
			func_364(1643531967);
			func_365(1453909576);
			break;
	
		case 1703426636:
			func_364(1703426636);
			func_365(-919512195);
			func_365(-1925798111);
			func_365(420709909);
			break;
	
		case 1743048395:
			func_365(1376646519);
			func_365(931649776);
			func_365(-434590080);
			func_365(449774763);
			func_364(1743048395);
			break;
	
		case 1766284049:
			func_365(280705402);
			func_365(1926308480);
			func_364(1766284049);
			break;
	
		case 1822001510:
			func_365(-1612662716);
			func_364(1822001510);
			break;
	
		case 1846061697:
			func_365(-150493654);
			func_365(-1271608261);
			func_365(-1145519186);
			func_364(1846061697);
			break;
	
		case 1926308480:
			func_365(1766284049);
			func_365(280705402);
			func_364(1926308480);
			break;
	
		case 1952610440:
			func_365(1306158345);
			func_365(-223469678);
			func_365(-404698347);
			func_365(1517904467);
			func_364(1952610440);
			break;
	
		case 2016141805:
			func_365(1497516462);
			func_364(2016141805);
			func_365(1010885152);
			func_365(-502324015);
			break;
	
		case 2019386373:
			func_365(-664252410);
			func_365(2109952320);
			func_364(2019386373);
			break;
	
		case 2051822093:
			func_364(2051822093);
			func_365(932909855);
			break;
	
		case 2109952320:
			func_365(2019386373);
			func_365(-664252410);
			func_364(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_368(iParam0))
					func_364(iParam0);
			else if (func_368(iParam0))
				func_365(iParam0);
			break;
	}

	return;
}

void func_228(Hash hParam0) // Position - 0xC3AE Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_369(hParam0))
		func_371(func_370(hParam0));

	return;
}

int func_229() // Position - 0xC3CA Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_369(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_230(Hash hParam0, int iParam1, int iParam2) // Position - 0xC402 Hash - 0xED49A216 ^0x75828FFF
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	num = 0;

	switch (iParam2)
	{
		case 1:
			hash = joaat("PROVISION_EGRET_PLUME_LITTLE");
			hash2 = joaat("PROVISION_EGRET_PLUME_REDDISH");
			hash3 = joaat("PROVISION_EGRET_PLUME_SNOWY");
			hash4 = joaat("provision_ro_flower_lady_of_night");
			break;
	
		case 2:
			hash = joaat("PROVISION_HERON_FEATHER");
			hash2 = joaat("provision_ro_flower_lady_slipper");
			hash3 = joaat("provision_ro_flower_moccasin");
			break;
	
		case 4:
			hash = joaat("PROVISION_GATOR_EGG");
			hash2 = joaat("provision_ro_flower_acunas_star");
			hash3 = joaat("provision_ro_flower_cigar");
			hash4 = joaat("provision_ro_flower_ghost");
			break;
	
		case 8:
			hash = joaat("PROVISION_SPOONBILL_FEATHER");
			hash2 = joaat("provision_ro_flower_night_scented");
			hash3 = joaat("provision_ro_flower_rat_tail");
			hash4 = joaat("provision_ro_flower_spider");
			break;
	
		case 16:
			hash = joaat("provision_ro_flower_clamshell");
			hash2 = joaat("provision_ro_flower_dragons");
			hash3 = joaat("provision_ro_flower_queens");
			hash4 = joaat("provision_ro_flower_sparrows");
			break;
	}

	num2 = func_231(hash);
	num3 = func_231(hash2);
	num4 = func_231(hash3);
	num6 = func_232(hash);
	num7 = func_232(hash2);
	num8 = func_232(hash3);

	if (iParam2 != 2)
	{
		num5 = func_231(hash4);
		num9 = func_232(hash4);
	}

	if (hParam0 == hash)
		if (num2 + iParam1 >= num6)
			num = num + num6;
		else
			num = num + num2 + iParam1;
	else if (num2 >= num6)
		num = num + num6;
	else
		num = num + num2;

	if (hParam0 == hash2)
		if (num3 + iParam1 >= num7)
			num = num + num7;
		else
			num = num + num3 + iParam1;
	else if (num3 >= num7)
		num = num + num7;
	else
		num = num + num3;

	if (hParam0 == hash3)
		if (num4 + iParam1 >= num8)
			num = num + num8;
		else
			num = num + num4 + iParam1;
	else if (num4 >= num8)
		num = num + num8;
	else
		num = num + num4;

	if (iParam2 != 2)
		if (hParam0 == hash4)
			if (num5 + iParam1 >= num9)
				num = num + num9;
			else
				num = num + num5 + iParam1;
		else if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_231(Hash hParam0) // Position - 0xC615 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_104(hParam0, 1, false))
		num = func_55(hParam0, false, false);

	return num;
}

int func_232(Hash hParam0) // Position - 0xC634 Hash - 0xEED5739D ^0xEED5739D
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 5;
	
		case joaat("provision_ro_flower_acunas_star"):
			return 3;
	
		case joaat("provision_ro_flower_cigar"):
			return 7;
	
		case joaat("provision_ro_flower_rat_tail"):
			return 10;
	
		case joaat("PROVISION_HERON_FEATHER"):
			return 20;
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 5;
	
		case joaat("provision_ro_flower_night_scented"):
			return 5;
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 5;
	
		case joaat("provision_ro_flower_lady_of_night"):
			return 15;
	
		case joaat("provision_ro_flower_sparrows"):
			return 10;
	
		case joaat("provision_ro_flower_queens"):
			return 5;
	
		case joaat("provision_ro_flower_spider"):
			return 5;
	
		case joaat("provision_ro_flower_dragons"):
			return 5;
	
		case joaat("provision_ro_flower_lady_slipper"):
			return 7;
	
		case joaat("provision_ro_flower_moccasin"):
			return 10;
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 30;
	
		case joaat("provision_ro_flower_ghost"):
			return 5;
	
		case joaat("PROVISION_GATOR_EGG"):
			return 25;
	
		default:
		
	}

	return 0;
}

int func_233(Hash hParam0) // Position - 0xC70D Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_234(Hash hParam0, int iParam1) // Position - 0xC71B Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_235(Hash hParam0, int iParam1) // Position - 0xC72B Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_10(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_236(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0xC75A Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_235(hParam1, 5) || hParam0 == func_235(hParam1, 6) || hParam0 == func_235(hParam1, 7) || hParam0 == func_235(hParam1, 8) || hParam0 == func_235(hParam1, 9))
	{
		func_226(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_68(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_70(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_237(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xC7DC Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_235(hParam1, 5) || hParam0 == func_235(hParam1, 6) || hParam0 == func_235(hParam1, 7) || hParam0 == func_235(hParam1, 8) || hParam0 == func_235(hParam1, 9))
	{
		if (func_226(hParam1, hParam0, &num, false, 0, false))
		{
			func_68(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_70(51, 0, 0, num, func_9(hParam1, 20), 1, 0);
		}
		else
		{
			func_68(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_70(51, 0, 0, num, func_9(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_238() // Position - 0xC89D Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_174(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

BOOL func_239(Hash hParam0, int iParam1) // Position - 0xC8C6 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_51(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_165(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_254("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_255(&unk, i, num, num2))
			{
			}
			else if (!func_192(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_256(num);
				return true;
			}
		}
	
		func_256(num);
	}

	return false;
}

void func_240(Hash hParam0) // Position - 0xC96E Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_241(Hash hParam0) // Position - 0xC97D Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_372(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_242(Hash hParam0) // Position - 0xC996 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_243(Hash hParam0, var uParam1, var uParam2) // Position - 0xC9A5 Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_244(var uParam0) // Position - 0xCBB1 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_373(i, 1);
	}

	return -358215195;
}

int func_245(int iParam0, int iParam1) // Position - 0xCBEC Hash - 0x9D981F95 ^0x9D981F95
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
	
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
	
		case -1884748965:
			return 32;
	
		case -1586649372:
			return 33;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHIN"):
			return 5;
	
		case -1505978566:
			return 22;
	
		case -1489346253:
			return 38;
	
		case -1364808185:
			return 19;
	
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
	
		case -1197751823:
			return 20;
	
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
	
		case -1130865351:
			return 31;
	
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
	
		case -893163968:
			return 17;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
	
		case -450913544:
			return 18;
	
		case -426430150:
			return 29;
	
		case -358215195:
			return 39;
	
		case -338487716:
			return 11;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
	
		case 304805134:
			return 21;
	
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
	
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
	
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
	
		case 788010710:
			return 34;
	
		case 1108822547:
			return 10;
	
		case 1145151482:
			return 23;
	
		case 1250092473:
			return 16;
	
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
	
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
	
		case 1600962399:
			return 13;
	
		case 1672288269:
			return 15;
	
		case 1742327865:
			return 12;
	
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
	
		case 1788623170:
			return 30;
	
		case 1849504272:
			return 14;
	
		case 1900541263:
			return 37;
	
		case 1958421083:
			return 35;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_246(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xCDBD Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_374();

	if (iParam2 == 39)
	{
		unk = { func_159(hParam0, true, false) };
		iParam2 = func_245(func_244(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_72(hParam0, 866047851) && func_353(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_249(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_375(func_373(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_376(iParam2);
	func_377(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_378(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_378(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_379(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_380(hParam0, iParam2, hParam1, func_1() != -1);

	if (bParam4)
		func_381(&(Global_1946054.f_1378), true, 3);
	else
		func_381(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_382(func_373(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_247(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xCFCA Hash - 0x5AF76643 ^0x5AF76643
{
	func_383(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_248(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0xCFE3 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_384(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_385(num);
	return;
}

BOOL func_249(BOOL bParam0) // Position - 0xD015 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_250() // Position - 0xD026 Hash - 0xB6203BF0 ^0x217DD714
{
	func_386(&(Global_1946054.f_2776));
	func_387(32768);
	func_382(1108822547, 8, 6);
	return;
}

int func_251(int iParam0) // Position - 0xD04D Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_245(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_252(int iParam0) // Position - 0xD0B1 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_388(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_389(num);
	return;
}

void func_253(int iParam0, int iParam1, int iParam2) // Position - 0xD0F5 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_389(num);
	return;
}

BOOL func_254(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xD115 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_167(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_255(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xD13C Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

int func_256(int iParam0) // Position - 0xD177 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

float func_257() // Position - 0xD198 Hash - 0xB0642BCC ^0x4D6FEEA4
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_390())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_391(2);

	if (Global_1347477.f_119)
		return func_391(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_392();
	num3 = func_393();
	num4 = func_394();
	num5 = func_395();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_396());
	num8 = func_391(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_397(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_398(3, num9, num9 > 100f);
	return func_399(num8, -100f, 100f);
}

float func_258() // Position - 0xD2C1 Hash - 0x951B1CCC ^0x7B312694
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_390())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_391(1);

	if (Global_1347477.f_119)
		return func_391(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_392();
	num3 = func_393();
	num4 = func_394();
	num5 = func_395();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_396());
	num8 = func_391(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_397(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_398(2, num9, num9 > 100f);
	return func_399(num8, -100f, 100f);
}

float func_259() // Position - 0xD3EA Hash - 0x4D146F4A ^0xFC60D2FE
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	int value;
	float num9;
	float num10;

	if (func_390())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_391(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_400())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_401())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_391(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_392();
	num3 = func_393();
	num4 = func_394();
	num5 = func_395();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_396());
	num8 = func_391(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_397(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_398(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_391(0);

	return func_399(num8, -100f, 100f);
}

BOOL func_260(int iParam0, int iParam1) // Position - 0xD591 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_261(Hash hParam0) // Position - 0xD5AA Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_262(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0xD5BA Hash - 0x86E39CDA ^0xCF922D1
{
	!func_51(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_163(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_80(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_167(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_263(int iParam0, BOOL bParam1) // Position - 0xD61C Hash - 0x6C404ADF ^0x7D516F33
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946054.f_2657.f_21;
	
		case -1719060085:
			return Global_1946054.f_2657.f_24;
	
		case -999503751:
			if (bParam1)
				return Global_1946054.f_2657.f_20;
			else
				return func_402();
			break;
	
		case -525676072:
			return Global_1946054.f_2657.f_22;
	
		case -413129408:
			return Global_1946054.f_2657.f_25;
	
		case 81053684:
			return Global_1946054.f_2657.f_23;
	}

	return 0;
}

eStackSize func_264(Hash hParam0) // Position - 0xD6AB Hash - 0x9830D1FB ^0x9830D1FB
{
	switch (hParam0)
	{
		case -2114499732:
			return 18;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L"):
			return 32;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H"):
			return 53;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H"):
			return 45;
	
		case -1951220140:
			return 78;
	
		case -1914506115:
			return 71;
	
		case -1826731591:
			return 24;
	
		case -1725704631:
			return 81;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L"):
			return 52;
	
		case -1611873049:
			return 91;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_H"):
			return 37;
	
		case -1476781101:
			return 10;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L"):
			return 56;
	
		case -1303643297:
			return 86;
	
		case -1300731953:
			return 74;
	
		case -1243402388:
			return 66;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H"):
			return 43;
	
		case -1205612021:
			return 70;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L"):
			return 48;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H"):
			return 57;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L"):
			return 34;
	
		case -978578725:
			return 94;
	
		case -926815459:
			return 72;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_L"):
			return 40;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H"):
			return 47;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H"):
			return 31;
	
		case -769081407:
			return 16;
	
		case -659341240:
			return 85;
	
		case -535599244:
			return 89;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L"):
			return 30;
	
		case -409616653:
			return 65;
	
		case -389591806:
			return 73;
	
		case -361635024:
			return 62;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_002_H"):
			return 39;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H"):
			return 59;
	
		case -291256376:
			return 23;
	
		case -272211555:
			return 61;
	
		case -55563408:
			return 64;
	
		case -19271249:
			return 82;
	
		case 65931886:
			return 67;
	
		case 162509669:
			return 3;
	
		case 166243423:
			return 0;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H"):
			return 33;
	
		case 214175524:
			return 84;
	
		case 274995506:
			return 5;
	
		case 294553332:
			return 11;
	
		case joaat("CLOTHING_OUTFIT_AMDSHOP_001_L"):
			return 38;
	
		case 411856831:
			return 88;
	
		case 439606975:
			return 14;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H"):
			return 51;
	
		case joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H"):
			return 29;
	
		case 523337834:
			return 80;
	
		case 594312243:
			return 92;
	
		case 624063935:
			return 9;
	
		case 635948769:
			return 4;
	
		case 688004210:
			return 20;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L"):
			return 36;
	
		case joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L"):
			return 60;
	
		case 800827126:
			return 19;
	
		case 802495462:
			return 75;
	
		case 842905332:
			return 77;
	
		case 890706995:
			return 93;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H"):
			return 55;
	
		case joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L"):
			return 46;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H"):
			return 41;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H"):
			return 49;
	
		case 1156438275:
			return 90;
	
		case 1160643979:
			return 8;
	
		case 1164374808:
			return 7;
	
		case 1201189539:
			return 28;
	
		case 1257427489:
			return 83;
	
		case joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L"):
			return 54;
	
		case 1351927599:
			return 21;
	
		case 1352942778:
			return 26;
	
		case 1371678229:
			return 68;
	
		case 1383300684:
			return 1;
	
		case 1389254668:
			return 58;
	
		case 1460520700:
			return 76;
	
		case 1511551084:
			return 79;
	
		case 1560492757:
			return 15;
	
		case 1661121390:
			return 6;
	
		case 1784889667:
			return 13;
	
		case 1788874135:
			return 12;
	
		case joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H"):
			return 35;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L"):
			return 42;
	
		case joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L"):
			return 44;
	
		case joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L"):
			return 50;
	
		case 1902428294:
			return 17;
	
		case 1964379549:
			return 27;
	
		case 2032023096:
			return 22;
	
		case 2038771525:
			return 87;
	
		case 2051441678:
			return 2;
	
		case 2102263084:
			return 69;
	
		case 2119049229:
			return 25;
	
		default:
		
	}

	return -1;
}

BOOL func_265(eStackSize essParam0) // Position - 0xDABE Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (essParam0 < 0 || essParam0 >= 95)
		return false;

	return true;
}

void func_266(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0xDADD Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_265(essParam0))
		return;

	if (func_403(essParam0))
		return;

	if (!func_404(essParam0))
		func_405(essParam0, true, false);

	hash = func_406(essParam0);

	if (hash != 0 && !(essParam0 >= 0 && essParam0 <= 5))
		if (func_407(essParam0, 512))
			func_248(30, hash, 0, 0, false);

	if (!func_408() && !bParam1 && !func_22(0, false, true))
		func_409(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_410(essParam0, 6);

	if (bParam2)
		if (!func_22(0, false, true))
			func_26(true, 4);

	return;
}

int func_267() // Position - 0xDBA3 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_268(int iParam0, BOOL bParam1) // Position - 0xDBB1 Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_263(iParam0, false) < func_411(iParam0, bParam1);
}

BOOL func_269(Hash hParam0, var uParam1) // Position - 0xDBC9 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_76(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_270(int iParam0) // Position - 0xDC0D Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_245(iParam0, 1) /*3*/] != Global_1946054.f_57[func_245(iParam0, 1) /*11*/];
}

void func_271(int iParam0, Hash hParam1) // Position - 0xDC45 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_72(hParam1, 130796156))
	{
		func_412(hParam1, false);
	}
	else if (func_72(hParam1, 930141731))
	{
		func_412(hParam1, true);
		func_413(iParam0);
	}

	return;
}

void func_272(var uParam0, int iParam1) // Position - 0xDC80 Hash - 0x84556899 ^0xA18AFCFA
{
	int i;

	if (iParam1 == 0)
		return;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->f_1[i] == iParam1)
			return;
	
		if (iParam1 == joaat("LOOTER_PED_IS_MALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_FEMALE") || iParam1 == joaat("LOOTER_PED_IS_FEMALE") && uParam0->f_1[i] == joaat("LOOTER_PED_IS_MALE") || iParam1 == joaat("LOOT_TYPE_NORMAL") && uParam0->f_1[i] == joaat("LOOT_TYPE_SKINNING") || iParam1 == joaat("LOOT_TYPE_SKINNING") && uParam0->f_1[i] == joaat("LOOT_TYPE_NORMAL"))
		{
			uParam0->f_1[i] = iParam1;
			return;
		}
	}

	if (*uParam0 >= 10)
		return;

	uParam0->f_1[*uParam0] = iParam1;
	*uParam0 = *uParam0 + 1;
	return;
}

int func_273(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0xDD61 Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_414(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_415(anParam2, hParam0, num);
	return 1;
}

struct<2> func_274(int iParam0) // Position - 0xDDCA Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_275(int iParam0) // Position - 0xDDDA Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0xDDEC Hash - 0xA17D549C ^0xF8E7520A
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
	
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
	
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
	
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
	
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
	
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
	
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
	
		case 7:
			return "PROVISION_FISH_MUSKIE";
	
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
	
		case 9:
			return "PROVISION_FISH_PERCH";
	
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
	
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
	
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
	
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
	
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
	
		default:
		
	}

	return "FISHTYPE_UNKNOWN";
}

Hash func_277(Hash hParam0) // Position - 0xDEC3 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_416(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_278(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0xDEED Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = sParam5;
	num.f_2 = sParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_417(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_279() // Position - 0xDF50 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_280(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0xDF5D Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_281(BOOL bParam0, var uParam1, var uParam2) // Position - 0xDFC7 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_282(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0xDFDE Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE3;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE3;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE3;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE3;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = { outData.f_2[i /*3*/] };
					return true;
				}
			}
		}
	}

	return false;
}

const char* func_283(const char* sParam0, int iParam1) // Position - 0xE0D1 Hash - 0x9E99F03 ^0x2EDB4D53
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_284(BOOL bParam0, var uParam1, var uParam2) // Position - 0xE0EB Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_285() // Position - 0xE102 Hash - 0x44329226 ^0x73277375
{
	if (Global_1572887.f_12 == -1)
		return 771;

	return 20001;
}

BOOL func_286(int iParam0, int iParam1, int iParam2) // Position - 0xE11D Hash - 0x932A04D5 ^0x39A8988D
{
	return iParam2 & 31 || BUILTIN::SHIFT_LEFT(iParam0 & 1023, 5) || BUILTIN::SHIFT_LEFT(iParam1 & 16383, 15);
}

int func_287(int iParam0, int iParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xE143 Hash - 0x4E72835D ^0x57C5ACE0
{
	BOOL flag;
	int num;

	if (!func_418(iParam2))
		return -1;

	if (iParam0 < 0 || iParam0 > 511)
		return -1;

	if (iParam1 < 0 || iParam1 > 255)
		return -1;

	if (iParam3 < 0 || iParam3 > func_285())
		return -1;

	flag = func_286(iParam0, iParam1, iParam2);
	num = iParam3;
	func_419(num, 0);
	func_420(num, 0);
	func_421(num, 0);
	func_153(num, 0);
	func_422(num, flag);

	if (hParam4 != 0)
		func_423(num, hParam4);

	return num;
}

void func_288(Hash hParam0, int iParam1) // Position - 0xE1E2 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*hParam0 = *hParam0 - *hParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*hParam0 = *hParam0 | -2147483648;
	}
	else
	{
		*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*hParam0 = *hParam0 - *hParam0 & -2147483648;
	}

	return;
}

void func_289(Hash hParam0, int iParam1) // Position - 0xE268 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*hParam0 = *hParam0 - *hParam0 & 62914560;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_290(Hash hParam0, int iParam1) // Position - 0xE2A4 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_144(*hParam0);
	num2 = func_143(*hParam0);

	if (iParam1 < 1 || iParam1 > func_146(num, num2))
		return;

	*hParam0 = *hParam0 - *hParam0 & 4063232;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_291(Hash hParam0, int iParam1) // Position - 0xE2F7 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*hParam0 = *hParam0 - *hParam0 & 126976;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_292(Hash hParam0, int iParam1) // Position - 0xE332 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 4032;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_293(Hash hParam0, int iParam1) // Position - 0xE36B Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*hParam0 = *hParam0 - *hParam0 & 63;
	*hParam0 = *hParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_294(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0xE3A3 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_51(hParam0, 0))
		return 0;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
	{
		!bParam3;
		return 0;
	}

	!bParam3;
	*uParam2 = outData.f_1;
	return 1;
}

struct<4> func_295(BOOL bParam0) // Position - 0xE3F1 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_196(joaat("character"), func_424(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_296(BOOL bParam0) // Position - 0xE40D Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_167(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_196(923904168, func_295(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_196(923904168, func_295(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_196(923904168, func_295(bParam0), -740156546, false);
}

BOOL func_297(Hash hParam0, BOOL bParam1) // Position - 0xE4A2 Hash - 0x62864AB ^0xBC339691
{
	if (func_76(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_74(24);
		else
			return true;

	return false;
}

struct<4> func_298(BOOL bParam0) // Position - 0xE4DB Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_167(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_196(271701509, func_295(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_196(271701509, func_295(bParam0), 12999093, false);
}

BOOL func_299(Hash hParam0, Hash hParam1) // Position - 0xE53F Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_76(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_300(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE59E Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_167(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_301(Hash hParam0) // Position - 0xE5CE Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_425(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_302(var uParam0) // Position - 0xE5EA Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_51(*uParam0, 0))
		return 0;

	switch (*uParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*uParam0 = joaat("consumable_cigarette_box");
			return 1;
	
		case joaat("upgrade_fsh_bait_cricket_tin"):
			*uParam0 = joaat("upgrade_fsh_bait_cricket");
			return 1;
	
		case joaat("consumable_cocaine_chewing_gum_used"):
			*uParam0 = joaat("consumable_cocaine_chewing_gum");
			return 1;
	
		case joaat("consumable_chewing_tobacco_used"):
			*uParam0 = joaat("consumable_chewing_tobacco");
			return 1;
	
		case joaat("upgrade_fsh_bait_worm_can"):
			*uParam0 = joaat("upgrade_fsh_bait_worm");
			return 1;
	
		default:
		
	}

	return 0;
}

BOOL func_303(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0xE666 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_51(hParam0, 0))
		return false;

	unk = { func_159(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_193(398 + i, 1);
	
		if (func_194(hParam0, &unk, hash, false))
		{
			flag = func_195(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_304(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xE6FA Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_51(hParam0, 0))
		return 0;

	guid = { func_196(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_167(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<18> func_305(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0xE742 Hash - 0x84700F53 ^0xB9E7AA96
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

	return hash;
}

void func_306(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xE814 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_307(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0xE82F Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_167(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_308(int iParam0) // Position - 0xE854 Hash - 0x92F940EE ^0x92F940EE
{
	int num;

	num = iParam0;

	if (num >= 1 && num <= 23)
		return 0;
	else if (num >= 24 && num <= 34)
		return 1;
	else if (num >= 35 && num <= 55)
		return 2;

	return 0;
}

float func_309(int iParam0) // Position - 0xE8A8 Hash - 0xBAFBA316 ^0xBAFBA316
{
	switch (iParam0)
	{
		case 1:
			return 5f;
	
		case 2:
			return 20f;
	
		case 3:
			return 10f;
	
		case 4:
			return 10f;
	
		case 5:
			return 20f;
	
		case 6:
			return 10f;
	
		case 7:
			return 15f;
	
		case 8:
			return 15f;
	
		case 9:
			return 20f;
	
		case 10:
			return 5f;
	
		case 11:
			return 5f;
	
		case 12:
			return 10f;
	
		case 13:
			return 20f;
	
		case 14:
			return 30f;
	
		case 15:
			return 5f;
	
		case 16:
			return 5f;
	
		case 17:
			return 3f;
	
		case 18:
			return 20f;
	
		case 19:
			return func_426(iParam0);
	
		case 20:
			return 25f;
	
		case 21:
			return 50f;
	
		case 22:
			return 100f;
	
		case 23:
			return 150f;
	
		case 24:
			return 20f;
	
		case 25:
			return 10f;
	
		case 26:
			return 20f;
	
		case 27:
			return 20f;
	
		case 28:
			return 20f;
	
		case 29:
			return 20f;
	
		case 30:
			return func_426(iParam0);
	
		case 31:
			return 25f;
	
		case 32:
			return 50f;
	
		case 33:
			return 100f;
	
		case 34:
			return 150f;
	
		case 35:
			return 1f;
	
		case 36:
			return 5f;
	
		case 37:
			return 1f;
	
		case 38:
			return 3f;
	
		case 39:
			return 1f;
	
		case 40:
			return 1f;
	
		case 41:
			return 1f;
	
		case 42:
			return 5f;
	
		case 43:
			return 10f;
	
		case 44:
			return 5f;
	
		case 45:
			return 5f;
	
		case 46:
			return 10f;
	
		case 47:
			return 10f;
	
		case 48:
			return 5f;
	
		case 49:
			return 20f;
	
		case 50:
			return func_426(iParam0);
	
		case 51:
			return 25f;
	
		case 52:
			return 50f;
	
		case 53:
			return 100f;
	
		case 54:
			return 150f;
	
		case 55:
			return 5f;
	
		default:
		
	}

	return 0f;
}

BOOL func_310(int iParam0) // Position - 0xEB76 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_74(18);
	
		case 1:
			return func_74(19);
	
		case 2:
			return func_74(20);
	
		default:
		
	}

	return true;
}

int func_311(int iParam0) // Position - 0xEBB4 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_427(Global_40.f_11095.f_11[iParam0]);
}

void func_312(int iParam0, float fParam1, BOOL bParam2) // Position - 0xEBCC Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_1() != -1)
		return;

	if (Global_1347477.f_117 || !func_74(31))
		return;

	num = func_311(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_311(iParam0);

	if (func_428(iParam0) && func_429(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_430(num2, fParam1);
		
			if (fParam1 > (float)func_431(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_62(func_432(iParam0), false);
				
					func_433(iParam0, num3, num4);
					func_434(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_313(int iParam0) // Position - 0xECCE Hash - 0xEB40D7A4 ^0xDA54E8AE
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_314(int iParam0) // Position - 0xECDA Hash - 0x21FAF347 ^0xAF7D8F21
{
	switch (iParam0)
	{
		case 0:
			return joaat("itemtype_player_health");
	
		case 1:
			return joaat("itemtype_player_stamina");
	
		case 2:
			return joaat("itemtype_player_deadeye");
	
		default:
		
	}

	return 0;
}

BOOL func_315(int iParam0, int iParam1) // Position - 0xED15 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_1() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_316(int iParam0) // Position - 0xED48 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_1() != -1)
		if (func_260(iParam0, 4))
			return false;
	else if (func_260(iParam0, 2))
		return false;

	return true;
}

BOOL func_317(int iParam0) // Position - 0xED78 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_260(iParam0, 65536) && !func_260(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_260(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_260(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_318(int iParam0) // Position - 0xEE24 Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_319() // Position - 0xEE37 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

int func_320() // Position - 0xEE46 Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_435(Global_40.f_12019);
}

int func_321() // Position - 0xEE58 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_175(i);
	
		if (func_104(hash, 1, false) || func_327(func_326(hash)))
			num = num + 1;
	}

	return num;
}

int func_322() // Position - 0xEEA1 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_436(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_323() // Position - 0xEEDA Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_332(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_324() // Position - 0xEF13 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_325(int iParam0) // Position - 0xEF25 Hash - 0xB8EC44B7 ^0x693BD882
{
	switch (iParam0)
	{
		case 0:
			return joaat("DOCUMENT_CIG_CARD_GUN_SET");
	
		case 1:
			return joaat("DOCUMENT_CIG_CARD_ART_SET");
	
		case 2:
			return joaat("DOCUMENT_CIG_CARD_LND_SET");
	
		case 3:
			return joaat("DOCUMENT_CIG_CARD_GRL_SET");
	
		case 4:
			return joaat("DOCUMENT_CIG_CARD_PLT_SET");
	
		case 5:
			return joaat("DOCUMENT_CIG_CARD_ACT_SET");
	
		case 6:
			return joaat("DOCUMENT_CIG_CARD_AML_SET");
	
		case 7:
			return joaat("DOCUMENT_CIG_CARD_VEH_SET");
	
		case 8:
			return joaat("DOCUMENT_CIG_CARD_SPT_SET");
	
		case 9:
			return joaat("DOCUMENT_CIG_CARD_INV_SET");
	
		case 10:
			return joaat("DOCUMENT_CIG_CARD_HOR_SET");
	
		case 11:
			return joaat("DOCUMENT_CIG_CARD_PAM_SET");
	
		default:
		
	}

	return 0;
}

BOOL func_326(Hash hParam0) // Position - 0xEFDE Hash - 0x6931DCCD ^0x96AB98B4
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			return 128;
	
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			return true;
	
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			return 16;
	
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			return 8;
	
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			return 256;
	
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			return 2;
	
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			return 1024;
	
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			return 4;
	
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			return 512;
	
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			return 32;
	
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			return 64;
	
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return 2048;
	
		default:
		
	}

	return false;
}

BOOL func_327(BOOL bParam0) // Position - 0xF074 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_328(int iParam0) // Position - 0xF087 Hash - 0x21CE226B ^0x94EF0FFD
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
	
		case 1:
			return "COL_DB_SEND";
	
		case 2:
			return "COL_DB_COLLECT";
	
		default:
		
	}

	return "";
}

int func_329(int iParam0) // Position - 0xF0C2 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 6;
	
		case 2:
			return 7;
	
		case 3:
			return 8;
	
		case 4:
			return 9;
	
		default:
		
	}

	return 5;
}

int func_330(int iParam0) // Position - 0xF107 Hash - 0x499196F8 ^0x499196F8
{
	switch (iParam0)
	{
		case 0:
			return 15;
	
		case 1:
			return 16;
	
		case 2:
			return 17;
	
		case 3:
			return 18;
	
		case 4:
			return 19;
	
		default:
		
	}

	return 15;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0xF150 Hash - 0xA17D549C ^0xEC25B478
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
			return "COL_RO_CLAMSHELL_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return "COL_EP_SNOWY_FOUND";
	
		case joaat("provision_ro_flower_acunas_star"):
			return "COL_RO_ACUNAS_STAR_FOUND";
	
		case joaat("provision_ro_flower_cigar"):
			return "COL_RO_CIGAR_FOUND";
	
		case joaat("provision_ro_flower_rat_tail"):
			return "COL_RO_RAT_TAIL_FOUND";
	
		case joaat("PROVISION_HERON_FEATHER"):
			return "COL_HF_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return "COL_EP_REDDISH_FOUND";
	
		case joaat("provision_ro_flower_night_scented"):
			return "COL_RO_NIGHT_SCENTED_FOUND";
	
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return "COL_EP_LITTLE_FOUND";
	
		case joaat("provision_ro_flower_lady_of_night"):
			return "COL_RO_LADY_OF_NIGHT_FOUND";
	
		case joaat("provision_ro_flower_sparrows"):
			return "COL_RO_SPARROWS_FOUND";
	
		case joaat("provision_ro_flower_queens"):
			return "COL_RO_QUEENS_FOUND";
	
		case joaat("provision_ro_flower_spider"):
			return "COL_RO_SPIDER_FOUND";
	
		case joaat("provision_ro_flower_dragons"):
			return "COL_RO_DRAGONS_FOUND";
	
		case joaat("provision_ro_flower_lady_slipper"):
			return "COL_RO_LADY_SLIPPER_FOUND";
	
		case joaat("provision_ro_flower_moccasin"):
			return "COL_RO_MOCCASIN_FOUND";
	
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return "COL_SF_FOUND";
	
		case joaat("provision_ro_flower_ghost"):
			return "COL_RO_GHOST_FOUND";
	
		case joaat("PROVISION_GATOR_EGG"):
			return "COL_GF_FOUND";
	
		default:
		
	}

	return "";
}

BOOL func_332(Hash hParam0) // Position - 0xF25E Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0xF26E Hash - 0xA17D549C ^0x69A16C5B
{
	switch (hParam0)
	{
		case joaat("legendary_fish_01"):
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
	
		case joaat("legendary_fish_03"):
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
	
		case joaat("legendary_fish_07"):
			return "PROVISION_FISH_PERCH_LEGENDARY";
	
		case joaat("legendary_fish_05"):
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
	
		case joaat("legendary_fish_06"):
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
	
		case joaat("legendary_fish_04"):
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_09"):
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
	
		case joaat("legendary_fish_08"):
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
	
		case joaat("legendary_fish_11"):
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
	
		case joaat("legendary_fish_13"):
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
	
		case joaat("legendary_fish_12"):
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	
		case joaat("legendary_fish_10"):
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
	
		case joaat("legendary_fish_02"):
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
	
		default:
		
	}

	return "";
}

char* func_334(int iParam0) // Position - 0xF32B Hash - 0x21CE226B ^0x85CD9838
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
	
		case 1:
			return "COL_RC_SEND";
	
		case 2:
			return "COL_RC_COLLECT";
	
		default:
		
	}

	return "";
}

BOOL func_335(Hash hParam0) // Position - 0xF366 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_437(hParam0) && func_104(hParam0, 1, false))
		return 1;
	else if (func_438(hParam0) && func_439(hParam0))
		return 1;

	return 0;
}

char* func_336(Hash hParam0) // Position - 0xF3A4 Hash - 0x9E507475 ^0x9EF44954
{
	if (!func_51(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_122(hParam0));
}

int func_337(int iParam0) // Position - 0xF3C8 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

void func_338(BOOL bParam0) // Position - 0xF3DA Hash - 0xB584A39F ^0xFC4CA802
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}

	return;
}

void func_339(int iParam0) // Position - 0xF418 Hash - 0x2EDDC601 ^0xD5F96979
{
	Any itemContextByIndex;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1954819.f_5.f_1))
		return;

	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1954819.f_5.f_1) > iParam0)
	{
		itemContextByIndex = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1954819.f_5.f_1, iParam0);
	
		if (itemContextByIndex == Global_1954819.f_5.f_2[iParam0 /*36*/])
			return;
	}

	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1954819.f_5.f_1, iParam0, "pause_info_panel_list", Global_1954819.f_5.f_2[iParam0 /*36*/]);
	return;
}

void func_340(BOOL bParam0) // Position - 0xF486 Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_341(BOOL bParam0) // Position - 0xF4C0 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_342(BOOL bParam0) // Position - 0xF4FA Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_343(BOOL bParam0) // Position - 0xF534 Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_344(BOOL bParam0) // Position - 0xF557 Hash - 0x15EA8A2D ^0x6EE74130
{
	int promptType;
	Player player;

	promptType = 50;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

void func_345(BOOL bParam0) // Position - 0xF599 Hash - 0xBAD014C9 ^0x3FDE3E28
{
	int promptType;
	Player player;

	promptType = 49;
	player = PLAYER::PLAYER_ID();

	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(player, promptType, 1, false);
	}

	return;
}

Hash func_346(int iParam0) // Position - 0xF5DB Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_245(iParam0, 1) /*3*/];
}

void func_347() // Position - 0xF603 Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_440();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_79(joaat("weapon_revolver_cattleman_john"));
		func_128(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_79(joaat("weapon_melee_knife_john"));
		func_128(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_348(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0xF67B Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_167(false);
	*panParam1 = { func_196(hParam0, func_296(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_349(Hash hParam0) // Position - 0xF6C0 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_350(int iParam0, int iParam1) // Position - 0xF6D6 Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_351(Hash hParam0) // Position - 0xF6EC Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_352(Hash hParam0) // Position - 0xF6FA Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_159(hParam0, true, false) };
	return func_244(unk.f_4);
}

int func_353(Hash hParam0) // Position - 0xF716 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_72(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_72(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_72(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_72(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_72(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_72(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_354(Hash hParam0, var uParam1) // Position - 0xF867 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_245(func_441(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_76(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_355(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xF8DE Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_245(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_249(524288))
	{
		switch (iParam1)
		{
			case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
				num = num + 1;
				break;
		
			case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
				num = num + 1;
				break;
		}
	}

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), bParam2, bParam3);
	return num;
}

BOOL func_356(Hash hParam0) // Position - 0xF949 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
{
	switch (hParam0)
	{
		case joaat("clothing_hl_player_boot_007_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_2"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_3"):
			return true;
	
		case joaat("clothing_hl_player_boot_009_1"):
			return true;
	
		case joaat("clothing_hl_player_boot_022_4"):
			return true;
	
		default:
		
	}

	return false;
}

int func_357(int iParam0) // Position - 0xF98C Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_442(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

Hash func_358(int iParam0) // Position - 0xF9CD Hash - 0xB8EC44B7 ^0xD4FF48D5
{
	switch (iParam0)
	{
		case 0:
			return joaat("PROVISION_BEAVER_TOOTH_LEGENDARY");
	
		case 1:
			return joaat("PROVISION_BISON_HORN_LEGENDARY");
	
		case 2:
			return joaat("PROVISION_BUCK_ANTLER_LEGENDARY");
	
		case 3:
			return joaat("PROVISION_COUGAR_FANG_LEGENDARY");
	
		case 4:
			return joaat("PROVISION_COYOTE_FANG_LEGENDARY");
	
		case 5:
			return joaat("PROVISION_ELK_ANTLER_LEGENDARY");
	
		case 6:
			return joaat("PROVISION_FOX_CLAW_LEGENDARY");
	
		case 7:
			return joaat("provision_lions_paw");
	
		case 8:
			return joaat("PROVISION_MOOSE_ANTLER_LEGENDARY");
	
		case 9:
			return joaat("PROVISION_PANTHER_EYE_LEGENDARY");
	
		case 10:
			return joaat("PROVISION_PRONGHORN_ANTLER_LEGENDARY");
	
		case 11:
			return joaat("PROVISION_RAM_HORN_LEGENDARY");
	
		case 12:
			return joaat("PROVISION_WOLF_HEART_LEGENDARY");
	
		case 13:
			return joaat("PROVISION_ALLIGATOR_LEGENDARY_TOOTH");
	
		case 14:
			return joaat("provision_cc_vintage_handcuffs");
	
		case 15:
			return joaat("provision_bracelet_gold");
	
		case 16:
			return joaat("PROVISION_BEAR_LEGENDARY_CLAW");
	
		case 17:
			return joaat("provision_rc_quartz_chunk");
	
		case 18:
			return joaat("provision_bracelet_silver");
	
		case 19:
			return joaat("PROVISION_BOAR_TUSK_LEGENDARY");
	
		case 20:
			return joaat("provision_rf_wood_cobalt");
	
		case 21:
			return joaat("provision_earring_gold");
	
		case 22:
			return joaat("PROVISION_BUFFALO_HORN_LEGENDARY");
	
		case 23:
			return joaat("provision_rs_abalone_shell_fragment");
	
		case 24:
			return joaat("provision_earring_silver");
	
		case 25:
			return joaat("PROVISION_OLD_BRASS_COMPASS");
	
		default:
		
	}

	return 0;
}

Hash func_359(Hash hParam0) // Position - 0xFB4A Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_443(hParam0, -1);
}

BOOL func_360() // Position - 0xFB59 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_205())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_361(int iParam0) // Position - 0xFB70 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_444(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_362(int iParam0, const char* sParam1, int iParam2) // Position - 0xFBA4 Hash - 0x56940320 ^0x3E008D42
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_360())
		func_278(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_278(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_363(Hash hParam0) // Position - 0xFC10 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_364(int iParam0) // Position - 0xFC20 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_445(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::SET_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::SET_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	
		MISC::SET_BIT(&Global_1058888.f_40497[num2], offset);
	}

	Global_1934765 = 0;
	return;
}

void func_365(int iParam0) // Position - 0xFCB9 Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_445(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&Global_40.f_283[num2], offset);
	}
	else
	{
		num3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	
		if (num3 == 255)
		{
			Global_1058888.f_40497.f_46 = 1;
			MISC::CLEAR_BIT(&Global_1058888.f_40497.f_14[num2], offset);
		}
		else
		{
			MISC::CLEAR_BIT(&Global_1055058[num3 /*116*/].f_72[num2], offset);
		}
	}

	Global_1934765 = 0;
	return;
}

void func_366() // Position - 0xFD3F Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_365(-939420910);
	func_365(-1187950766);
	func_365(356365161);
	func_365(753127042);
	func_365(-2038424081);
	func_365(1884271742);
	func_365(459290420);
	return;
}

void func_367() // Position - 0xFD86 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_365(704802028);
	func_365(588987611);
	func_365(2008888900);
	func_365(1649996811);
	func_365(227918160);
	func_365(168171957);
	func_365(1193080109);
	func_365(-491981251);
	func_365(-639037538);
	func_365(-618620429);
	return;
}

BOOL func_368(int iParam0) // Position - 0xFDE8 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_445(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_369(Hash hParam0) // Position - 0xFE37 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_370(Hash hParam0) // Position - 0xFE47 Hash - 0xEAAB2463 ^0xEAAB2463
{
	switch (hParam0)
	{
		case joaat("exotic_stage_02"):
			return 2;
	
		case joaat("exotic_stage_01"):
			return 1;
	
		case joaat("exotic_stage_05"):
			return 16;
	
		case joaat("exotic_stage_04"):
			return 8;
	
		case joaat("exotic_stage_03"):
			return 4;
	
		default:
		
	}

	return 0;
}

void func_371(int iParam0) // Position - 0xFE8C Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_372(Hash hParam0) // Position - 0xFEA7 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_373(int iParam0, int iParam1) // Position - 0xFEB7 Hash - 0xAD875E21 ^0x4ED1C58
{
	switch (iParam0)
	{
		case 0:
			return joaat("MP_COMPONENT_TYPE_HEAD");
	
		case 1:
			return joaat("MP_COMPONENT_TYPE_HAIR");
	
		case 2:
			return joaat("MP_COMPONENT_TYPE_EYES");
	
		case 3:
			return joaat("MP_COMPONENT_TYPE_TEETH");
	
		case 4:
			return joaat("MP_COMPONENT_TYPE_BEARD");
	
		case 5:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHIN");
	
		case 6:
			return joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS");
	
		case 7:
			return joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE");
	
		case 8:
			return joaat("MP_COMPONENT_TYPE_UPPER_BODY");
	
		case 9:
			return joaat("MP_COMPONENT_TYPE_LOWER_BODY");
	
		case 10:
			return 1108822547;
	
		case 11:
			return -338487716;
	
		case 12:
			return 1742327865;
	
		case 13:
			return 1600962399;
	
		case 14:
			return 1849504272;
	
		case 15:
			return 1672288269;
	
		case 16:
			return 1250092473;
	
		case 17:
			return -893163968;
	
		case 18:
			return -450913544;
	
		case 19:
			return -1364808185;
	
		case 20:
			return -1197751823;
	
		case 21:
			return 304805134;
	
		case 22:
			return -1505978566;
	
		case 23:
			return 1145151482;
	
		case 24:
			return joaat("MP_COMPONENT_TYPE_SATCHEL");
	
		case 25:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_1");
	
		case 26:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_2");
	
		case 27:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_3");
	
		case 28:
			return joaat("MP_COMPONENT_TYPE_LOADOUT_4");
	
		case 29:
			return -426430150;
	
		case 30:
			return 1788623170;
	
		case 31:
			return -1130865351;
	
		case 32:
			return -1884748965;
	
		case 33:
			return -1586649372;
	
		case 34:
			return 788010710;
	
		case 35:
			return 1958421083;
	
		case 36:
			return -1944638739;
	
		case 37:
			return 1900541263;
	
		case 38:
			return -1489346253;
	
		case 39:
			return -358215195;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

void func_374() // Position - 0x1010A Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_375(int iParam0) // Position - 0x10151 Hash - 0x65A082AE ^0x65A082AE
{
	func_382(iParam0, 8, 6);
	return;
}

void func_376(int iParam0) // Position - 0x10162 Hash - 0x20214C72 ^0x20214C72
{
	func_446(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_377(int iParam0, int iParam1) // Position - 0x10177 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_447(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_378(Hash hParam0, int iParam1, int iParam2) // Position - 0x1018E Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_379(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x101A1 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_76(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_448(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_377(num2, num3);
	}

	if (func_270(-1586649372) && func_448(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_377(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_449(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_449(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_377(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_377(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_377(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_356(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_72(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_377(num2, num3);
			}
			break;
	
		case -839140560:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 37;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_377(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_377(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_76(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_377(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_356(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_76(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_377(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_449(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_449(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_377(num2, num3);
			}
			break;
	
		case 698653232:
			if (hParam1 == Global_1946054.f_57[iParam2 /*11*/])
			{
				num2 = 12;
			
				if (uParam0->f_1[num2 /*3*/] == joaat("clothing_hl_player_necktie_004_3"))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_377(num2, num3);
				}
			}
		
			func_449(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_72(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_377(num2, num3);
			}
			break;
	
		case 1868067663:
			func_449(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_377(num2, num3);
			}
			break;
	}

	switch (func_76(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_76(uParam0->f_1[num2 /*3*/]) || func_72(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_377(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_76(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_377(num2, num3);
			}
			break;
	}

	return;
}

Hash func_380(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x107E5 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_450(0);

	if (hParam2 != 0 && func_451(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_452(hParam0, func_373(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_381(var uParam0, BOOL bParam1, int iParam2) // Position - 0x1082B Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	BOOL flag2;
	int num6;

	flag = func_1() != -1;
	flag2 = func_450(0);

	if (func_249(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_373(num, 1);
		
			if (func_453(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_453(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_355(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_454(uParam0);

	if (num3 > 0)
	{
		if (!func_249(524288))
		{
			func_384(524288);
			num2 = num2 - num6;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_373(num, 1);
			
				if (func_453(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_453(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_355(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_377(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_387(524288);

	return;
}

void func_382(int iParam0, int iParam1, int iParam2) // Position - 0x10A48 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_245(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_245(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_245(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_383(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10A87 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_455(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_1() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_456(2, Global_26796.f_776) || Global_1946054.f_1497 != func_406(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_406(Global_40.f_7729);
				Global_1946054.f_1378 = func_406(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_457(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_458(false, true);

	return;
}

void func_384(BOOL bParam0) // Position - 0x10BA6 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_385(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x10BB9 Hash - 0x21CB5355 ^0x21CB5355
{
	int i;
	int num;

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
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946054.f_850 >= 25)
				return;
		
			if (func_459(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_460(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_384(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_459(iParam0))
				return;
		
			func_460(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_384(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_253(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_386(var uParam0) // Position - 0x10DC5 Hash - 0x7C3D914C ^0xB1998A7B
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;

	if (uParam0->f_12)
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_13);

	uParam0->f_12 = 0;
	return;
}

void func_387(BOOL bParam0) // Position - 0x10E23 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_388(int iParam0, int iParam1) // Position - 0x10E3B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_389(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x10E4A Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_459(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_459(20))
				return;
		}
	}

	func_460(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_384(8);
	return;
}

BOOL func_390() // Position - 0x10F4E Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_391(int iParam0) // Position - 0x10F6A Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_392() // Position - 0x10F7C Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_461(13);
	num2 = func_462(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_393() // Position - 0x10FBF Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_394() // Position - 0x10FDA Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_205())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_395() // Position - 0x10FF9 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_396() // Position - 0x1103B Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_397(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11049 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_463(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_398(int iParam0, float fParam1, BOOL bParam2) // Position - 0x11095 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_463(iParam0, 2, false, false);
	str = MISC::VAR_STRING(2, str, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[2], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[2], bParam2);

	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_RED"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_20[2], "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_24[2], "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_28[2], joaat("COLOR_WHITE"));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_32[2], false);
	}

	return;
}

float func_399(float fParam0, float fParam1, float fParam2) // Position - 0x111DB Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_400() // Position - 0x11202 Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_461(12) <= -99f;
}

BOOL func_401() // Position - 0x11216 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_461(12) >= 99f;
}

int func_402() // Position - 0x1122A Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_76(hash) == -999503751)
			if (func_464() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_403(eStackSize essParam0) // Position - 0x1127B Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_265(essParam0))
		return false;

	if (func_407(essParam0, 4))
		return true;

	return false;
}

BOOL func_404(eStackSize essParam0) // Position - 0x112A0 Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_265(essParam0))
		return false;

	if (func_407(essParam0, 2))
		return true;

	return false;
}

void func_405(eStackSize essParam0, BOOL bParam1, BOOL bParam2) // Position - 0x112C5 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_265(essParam0))
		return;

	if (!func_404(essParam0))
	{
		func_410(essParam0, 2);
	
		if (bParam2)
			if (!func_22(0, false, true))
				func_26(true, 4);
	
		if (!func_408() && !bParam1 && !func_22(0, false, true))
			func_409(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_465(essParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_406(eStackSize essParam0) // Position - 0x1133A Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (essParam0)
	{
		case 0:
			return 166243423;
	
		case 1:
			return 1383300684;
	
		case 2:
			return 2051441678;
	
		case 3:
			return 162509669;
	
		case 4:
			return 635948769;
	
		case 5:
			return 274995506;
	
		case 6:
			return 1661121390;
	
		case 7:
			return 1164374808;
	
		case 8:
			return 1160643979;
	
		case 9:
			return 624063935;
	
		case 10:
			return -1476781101;
	
		case 11:
			return 294553332;
	
		case 12:
			return 1788874135;
	
		case 13:
			return 1784889667;
	
		case 14:
			return 439606975;
	
		case 15:
			return 1560492757;
	
		case 16:
			return -769081407;
	
		case 17:
			return 1902428294;
	
		case 18:
			return -2114499732;
	
		case 19:
			return 800827126;
	
		case 20:
			return 688004210;
	
		case 21:
			return 1351927599;
	
		case 22:
			return 2032023096;
	
		case 23:
			return -291256376;
	
		case 24:
			return -1826731591;
	
		case 25:
			return 2119049229;
	
		case 26:
			return 1352942778;
	
		case 27:
			return 1964379549;
	
		case 28:
			return 1201189539;
	
		case 29:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_H");
	
		case 30:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_001_L");
	
		case 31:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_H");
	
		case 32:
			return joaat("CLOTHING_OUTFIT_NEW_RHDSHOP_002_L");
	
		case 33:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_H");
	
		case 34:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_001_L");
	
		case 35:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_H");
	
		case 36:
			return joaat("CLOTHING_OUTFIT_NEW_BLCKSHOP_002_L");
	
		case 37:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_H");
	
		case 38:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_001_L");
	
		case 39:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_H");
	
		case 40:
			return joaat("CLOTHING_OUTFIT_AMDSHOP_002_L");
	
		case 41:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_H");
	
		case 42:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_001_L");
	
		case 43:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_H");
	
		case 44:
			return joaat("CLOTHING_OUTFIT_NEW_VALSHOP_002_L");
	
		case 45:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_H");
	
		case 46:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_001_L");
	
		case 47:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_H");
	
		case 48:
			return joaat("CLOTHING_OUTFIT_NEW_WALSHOP_002_L");
	
		case 49:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_H");
	
		case 50:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_001_L");
	
		case 51:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_H");
	
		case 52:
			return joaat("CLOTHING_OUTFIT_NEW_TBLSHOP_002_L");
	
		case 53:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_H");
	
		case 54:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_001_L");
	
		case 55:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_H");
	
		case 56:
			return joaat("CLOTHING_OUTFIT_NEW_STRSHOP_002_L");
	
		case 57:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_001_H");
	
		case 58:
			return 1389254668;
	
		case 59:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_H");
	
		case 60:
			return joaat("CLOTHING_OUTFIT_NEW_SDSHOP_002_L");
	
		case 61:
			return -272211555;
	
		case 62:
			return -361635024;
	
		case 64:
			return -55563408;
	
		case 65:
			return -409616653;
	
		case 66:
			return -1243402388;
	
		case 67:
			return 65931886;
	
		case 68:
			return 1371678229;
	
		case 69:
			return 2102263084;
	
		case 70:
			return -1205612021;
	
		case 71:
			return -1914506115;
	
		case 72:
			return -926815459;
	
		case 73:
			return -389591806;
	
		case 74:
			return -1300731953;
	
		case 75:
			return 802495462;
	
		case 76:
			return 1460520700;
	
		case 77:
			return 842905332;
	
		case 78:
			return -1951220140;
	
		case 79:
			return 1511551084;
	
		case 80:
			return 523337834;
	
		case 81:
			return -1725704631;
	
		case 82:
			return -19271249;
	
		case 83:
			return 1257427489;
	
		case 84:
			return 214175524;
	
		case 85:
			return -659341240;
	
		case 86:
			return -1303643297;
	
		case 87:
			return 2038771525;
	
		case 88:
			return 411856831;
	
		case 89:
			return -535599244;
	
		case 90:
			return 1156438275;
	
		case 91:
			return -1611873049;
	
		case 92:
			return 594312243;
	
		case 93:
			return 890706995;
	
		case 94:
			return -978578725;
	
		default:
		
	}

	return 0;
}

BOOL func_407(eStackSize essParam0, BOOL bParam1) // Position - 0x1186F Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_265(essParam0))
		return false;

	return Global_40.f_7157[essParam0 /*3*/] && bParam1 != false;
}

BOOL func_408() // Position - 0x11894 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_409(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x118B4 Hash - 0x8EBD6187 ^0x42F0F0AC
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
	num2 = UIFEED::_UI_FEED_POST_HELP_TEXT(&num, &unk13, bParam5);
	return num2;
}

void func_410(eStackSize essParam0, BOOL bParam1) // Position - 0x118EF Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_265(essParam0))
		return;

	Global_40.f_7157[essParam0 /*3*/] = Global_40.f_7157[essParam0 /*3*/] || bParam1;
	return;
}

int func_411(int iParam0, BOOL bParam1) // Position - 0x1191B Hash - 0x14DDA26B ^0xFFF4A8D0
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case -2061583405:
			num = Global_1946054.f_2657.f_26.f_1;
			break;
	
		case -1719060085:
			num = 1;
			break;
	
		case -999503751:
			num = Global_1946054.f_2657.f_26;
			break;
	
		case -525676072:
			num = Global_1946054.f_2657.f_26.f_2;
			break;
	
		case -413129408:
			num = 1;
			break;
	
		case 81053684:
			num = 1;
			break;
	
		default:
			return 0;
	}

	switch (iParam0)
	{
		case -999503751:
			if (num > 0 && !bParam1)
				num = num - 1;
			break;
	}

	return num;
}

void func_412(Hash hParam0, BOOL bParam1) // Position - 0x119BE Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_466(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_75(50);
			else
				func_75(48);
			break;
	
		case 1:
			if (bParam1)
				func_75(51);
			else
				func_75(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_467(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_109();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_109();
			}
			break;
	
		case 3:
			func_75(24);
		
			if (bParam1)
			{
				if (!func_467(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_109();
				}
			}
			break;
	}

	return;
}

void func_413(int iParam0) // Position - 0x11A9D Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_468(0))
				num = num + 1;
		
			if (func_468(2))
				num = num + 1;
		
			if (func_468(4))
				num = num + 1;
		
			if (!func_469(16))
			{
				if (num == 1)
				{
					func_470();
					func_62(456, true);
					func_471(16);
				}
			}
		
			if (!func_469(32))
			{
				if (num >= 3)
				{
					func_470();
					func_62(456, true);
					func_471(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_468(1))
				num = num + 1;
		
			if (func_468(3))
				num = num + 1;
		
			if (func_468(7))
				num = num + 1;
		
			if (!func_469(1))
			{
				if (num == 1)
				{
					func_472();
					func_62(457, true);
					func_471(1);
				}
			}
		
			if (!func_469(2))
			{
				if (num >= 3)
				{
					func_472();
					func_62(457, true);
					func_471(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_468(5))
				num = num + 1;
		
			if (func_468(6))
				num = num + 1;
		
			if (func_468(8))
				num = num + 1;
		
			if (!func_469(4))
			{
				if (num == 1)
				{
					func_473();
					func_62(455, true);
					func_471(4);
				}
			}
		
			if (!func_469(8))
			{
				if (num >= 3)
				{
					func_473();
					func_62(455, true);
					func_471(8);
				}
			}
			break;
	}

	return;
}

void func_414(var uParam0) // Position - 0x11C34 Hash - 0x2CE00B72 ^0x958A4727
{
	func_272(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_272(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_272(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_415(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x11C6E Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_474(anParam0))
		return;

	if (Global_1223851 < 20)
	{
		Global_1223851 = Global_1223851 + 1;
	}
	else
	{
		for (i = 0; i < 19; i = i + 1)
		{
			Global_1223851.f_1[i /*21*/] = { Global_1223851.f_1[i + 1 /*21*/] };
		}
	}

	unk.f_7.f_2.f_1 = 10;
	unk = { *anParam0 };
	unk.f_4 = hParam1;
	unk.f_6 = 1;
	unk.f_7 = { uParam2 };
	Global_1223851.f_1[Global_1223851 - 1 /*21*/] = { unk };
	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_416(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x11D0F Hash - 0x92B705D3 ^0xB783F681
{
	int i;
	Hash hashKey;
	Hash hashKey2;
	var outData;

	outData.f_2 = 5;
	outData.f_18 = 8;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(hParam0, &outData))
	{
		for (i = 0; i < 5; i = i + 1)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/]))
				goto 0xE6;
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(outData.f_2[i /*3*/].f_1))
			{
			}
			else
			{
				hashKey = MISC::GET_HASH_KEY(outData.f_2[i /*3*/]);
				hashKey2 = MISC::GET_HASH_KEY(outData.f_2[i /*3*/].f_1);
			
				if (iParam2 != 0 && outData.f_2[i /*3*/].f_2 != iParam2)
					goto 0xE6;
			
				if (hParam3 != 0 && hashKey2 != hParam3)
					goto 0xE6;
			
				if (hParam4 != 0 && hashKey != hParam4)
					goto 0xE6;
			
				if (hParam5 != 0 && hashKey2 == hParam5)
				{
				}
				else
				{
					*uParam1 = hashKey;
					uParam1->f_1 = hashKey2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
		}
	}

	return false;
}

void func_417(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x11E05 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_418(int iParam0) // Position - 0x11E36 Hash - 0x2BF73E21 ^0x2BF73E21
{
	return iParam0 > 0 && iParam0 < 13;
}

void func_419(int iParam0, int iParam1) // Position - 0x11E4C Hash - 0x298D544D ^0x6D9BD009
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_1 = iParam1;
		return;
	}

	if (iParam1 == 0 || iParam1 == -1)
		func_475(iParam0);
	else
		func_476(iParam0, iParam1);

	func_477();
	return;
}

void func_420(int iParam0, int iParam1) // Position - 0x11E94 Hash - 0xB1BDF10D ^0x396318CE
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_2 = iParam1;
	return;
}

void func_421(int iParam0, int iParam1) // Position - 0x11EB4 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

void func_422(int iParam0, BOOL bParam1) // Position - 0x11ED4 Hash - 0x5CF9514E ^0x8B449709
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/] = bParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/] = bParam1;
	return;
}

void func_423(int iParam0, Hash hParam1) // Position - 0x11EFF Hash - 0x634DE727 ^0xC7F71E9D
{
	if (Global_1572887.f_12 == -1)
	{
		Global_12106[iParam0 /*7*/].f_5 = hParam1;
		return;
	}

	Global_1058888.f_428[iParam0 /*2*/].f_1 = hParam1;
	return;
}

struct<4> func_424() // Position - 0x11F2E Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_425(Hash hParam0, Hash hParam1) // Position - 0x11F3A Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_426(int iParam0) // Position - 0x11F54 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_308(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_427(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_478(num7) - func_478(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_427(float fParam0) // Position - 0x11FBE Hash - 0x3E9B0DE9 ^0x3E9B0DE9
{
	if (fParam0 <= (float)-1)
		return -1;

	if (fParam0 < (float)50)
		return 0;

	if (fParam0 < (float)100)
		return 1;

	if (fParam0 < (float)200)
		return 2;

	if (fParam0 < (float)350)
		return 3;

	if (fParam0 < (float)550)
		return 4;

	if (fParam0 < (float)800)
		return 5;

	if (fParam0 < (float)1100)
		return 6;

	return 7;
}

int func_428(int iParam0) // Position - 0x1204A Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 4:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_429(int iParam0) // Position - 0x12083 Hash - 0xB8632262 ^0xB8632262
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 16:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_430(float fParam0, float fParam1) // Position - 0x12102 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_427(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_478(num));
	num3 = BUILTIN::TO_FLOAT(func_478(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_431(int iParam0) // Position - 0x12175 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_479(iParam0, &num))
		return func_478(num);

	switch (iParam0)
	{
		case 0:
			if (func_480())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_480())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_480())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_432(int iParam0) // Position - 0x12201 Hash - 0xEE6D3E20 ^0xEE6D3E20
{
	switch (iParam0)
	{
		case 0:
			return 246;
	
		case 1:
			return 248;
	
		case 2:
			return 247;
	
		default:
		
	}

	return -1;
}

void func_433(int iParam0, int iParam1, int iParam2) // Position - 0x12233 Hash - 0x29688DE6 ^0x67416512
{
	char* str;
	const char* str2;
	BOOL flag;
	int num;
	const char* str3;
	char* str4;
	char* str5;
	const char* str6;
	int num2;
	Hash hashKey;
	const char* data;

	if (iParam1 == 0)
		return;

	num = iParam1 + 1;

	if (iParam2 != 0)
	{
		str = "RPG_LEVEL_PROGRESS_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, num + 1);
	}
	else
	{
		str = "RPG_LEVEL_INCREASED_TOAST";
		str2 = MISC::VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", num);
		flag = true;
	}

	num = num + func_481(iParam0);
	str3 = func_483(func_482(num, iParam2));
	str5 = func_484(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_485(iParam0));
	num2 = func_486(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_487(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_183(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_488(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_434(int iParam0, int iParam1) // Position - 0x1232B Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

int func_435(BOOL bParam0) // Position - 0x12344 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_436(Hash hParam0) // Position - 0x12369 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_437(Hash hParam0) // Position - 0x12379 Hash - 0xB8632262 ^0xB8632262
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return true;
	
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return true;
	
		default:
		
	}

	return false;
}

int func_438(Hash hParam0) // Position - 0x12420 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 1;
	
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_439(Hash hParam0) // Position - 0x12459 Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_489(&entity, 0, i, &model) && !func_489(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_490(entity, &model);
		
			if (func_51(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_440() // Position - 0x124C5 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_491(Global_35, &unk);
	unk31 = { func_295(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_492(false);
	func_493(7);
	func_494(joaat("kit_bandana"), true, true, false);

	if (func_267() == 1160113249)
	{
		func_494(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_494(-361635024, true, true, true);
	}

	func_495(Global_35, &unk);
	return;
}

int func_441(Hash hParam0) // Position - 0x1254E Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_244(outSlotId);
}

int func_442(int iParam0) // Position - 0x12571 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_443(Hash hParam0, int iParam1) // Position - 0x125F2 Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_167(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_288(&num, year);
	func_289(&num, month);
	func_290(&num, day);
	func_291(&num, hour);
	func_292(&num, minute);
	func_293(&num, second);
	return num;
}

void func_444(int iParam0) // Position - 0x12657 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_274(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_445(int iParam0, int iParam1) // Position - 0x1268A Hash - 0x8FA0E29 ^0xC3F68E87
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
	
		case -2106214197:
			return 104;
	
		case -2101264851:
			return 195;
	
		case -2073072369:
			return 59;
	
		case -2069570138:
			return 25;
	
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
	
		case -2058120606:
			return 197;
	
		case -2038424081:
			return 49;
	
		case -2034257789:
			return 92;
	
		case -2022369555:
			return 265;
	
		case -2021582629:
			return 112;
	
		case -2020023971:
			return 278;
	
		case -1957523409:
			return 208;
	
		case -1952856164:
			return 165;
	
		case -1949204933:
			return 276;
	
		case -1925798111:
			return 41;
	
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
	
		case -1852605133:
			return 10;
	
		case -1847672446:
			return 376;
	
		case -1840704908:
			return 289;
	
		case -1838712533:
			return 26;
	
		case -1838352012:
			return 57;
	
		case -1835851517:
			return 56;
	
		case -1831552326:
			return 123;
	
		case -1825294305:
			return 266;
	
		case -1824738758:
			return 277;
	
		case -1818850842:
			return 253;
	
		case -1799960545:
			return 257;
	
		case -1764522338:
			return 372;
	
		case -1763509974:
			return 141;
	
		case -1741667789:
			return 64;
	
		case -1738165526:
			return 3;
	
		case -1718674470:
			return 23;
	
		case -1717960576:
			return 61;
	
		case -1711895055:
			return 13;
	
		case -1706438978:
			return 233;
	
		case -1700452710:
			return 53;
	
		case -1674179981:
			return 55;
	
		case -1666278201:
			return 33;
	
		case -1612662716:
			return 201;
	
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
	
		case -1582926490:
			return 146;
	
		case -1579419919:
			return 147;
	
		case -1558439474:
			return 301;
	
		case -1556423728:
			return 218;
	
		case -1532284567:
			return 116;
	
		case -1530132748:
			return 311;
	
		case -1524512402:
			return 209;
	
		case -1523910291:
			return 155;
	
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
	
		case -1447311849:
			return 215;
	
		case -1436021162:
			return 172;
	
		case -1433686245:
			return 12;
	
		case -1425209566:
			return 32;
	
		case -1419919497:
			return 22;
	
		case -1414537028:
			return 73;
	
		case -1405998267:
			return 105;
	
		case -1344601768:
			return 314;
	
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
	
		case -1329135070:
			return 140;
	
		case -1318987693:
			return 222;
	
		case -1311865656:
			return 37;
	
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
	
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
	
		case -1282804314:
			return 270;
	
		case -1278074582:
			return 171;
	
		case -1271608261:
			return 98;
	
		case -1257057567:
			return 21;
	
		case -1241340344:
			return 300;
	
		case -1236261996:
			return 235;
	
		case -1232809834:
			return 113;
	
		case -1230112817:
			return 170;
	
		case -1223121209:
			return 126;
	
		case -1215445344:
			return 131;
	
		case -1209597203:
			return 333;
	
		case -1206122982:
			return 156;
	
		case -1187950766:
			return 45;
	
		case -1179948750:
			return 136;
	
		case -1170496998:
			return 46;
	
		case -1164215952:
			return 234;
	
		case -1151084372:
			return 124;
	
		case -1145519186:
			return 100;
	
		case -1124061431:
			return 242;
	
		case -1123615607:
			return 29;
	
		case -1080627546:
			return 378;
	
		case -1077783786:
			return 194;
	
		case -1063147448:
			return 151;
	
		case -1062490780:
			return 79;
	
		case -1060078174:
			return 239;
	
		case -1056767524:
			return 176;
	
		case -1053549743:
			return 58;
	
		case -1029225159:
			return 106;
	
		case -1014145132:
			return 288;
	
		case -978957786:
			return 251;
	
		case -959357075:
			return 36;
	
		case -950054349:
			return 152;
	
		case -939420910:
			return 44;
	
		case -939114198:
			return 221;
	
		case -919512195:
			return 40;
	
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
	
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
	
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
	
		case -879507474:
			return 236;
	
		case -868076593:
			return 84;
	
		case -857964358:
			return 83;
	
		case -853383233:
			return 65;
	
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
	
		case -828139293:
			return 260;
	
		case -811637947:
			return 245;
	
		case -796902762:
			return 88;
	
		case -792853067:
			return 254;
	
		case -789397228:
			return 262;
	
		case -785605431:
			return 250;
	
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
	
		case -764163380:
			return 228;
	
		case -748969569:
			return 78;
	
		case -741351766:
			return 60;
	
		case -736853952:
			return 366;
	
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
	
		case -699277634:
			return 4;
	
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
	
		case -683458244:
			return 80;
	
		case -666014935:
			return 157;
	
		case -664512648:
			return 67;
	
		case -664252410:
			return 191;
	
		case -644722288:
			return 261;
	
		case -640663440:
			return 214;
	
		case -639037538:
			return 185;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

void func_446(int iParam0, int iParam1) // Position - 0x137A3 Hash - 0x19A9221A ^0x79EEA925
{
	int i;
	int num;
	var unk;
	var unk3;

	unk = 39;
	unk3 = 10;
	unk3.f_1 = 39;
	unk3.f_1.f_2 = 39;
	unk3.f_1.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	unk3.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;

	for (i = 0; i < 10; i = i + 1)
	{
		if (i < *iParam0)
		{
			if (func_496(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_496(&iParam0->f_2[i /*2*/], 1))
					func_497(&iParam0->f_2[i /*2*/], 2, 6);
			
				unk3[num /*2*/] = { iParam0->f_2[i /*2*/] };
				num = num + 1;
				iParam0->f_2[i /*2*/] = { unk };
			}
		}
	
		iParam0->f_2[i /*2*/] = { unk };
	}

	for (i = 0; i < num; i = i + 1)
	{
		iParam0->f_2[i /*2*/] = { unk3[i /*2*/] };
	}

	*iParam0 = num;
	return;
}

void func_447(int iParam0, int iParam1, int iParam2) // Position - 0x138CF Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_498(iParam0, 1))
		func_499(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_448(int iParam0, int iParam1) // Position - 0x13916 Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_449(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1392F Hash - 0xE34B9CEC ^0xAFBB60FB
{
	int num;
	int num2;
	int num3;
	int num4;

	num = 0;

	if (bParam4)
		num = 3;

	num2 = 12;
	num3 = 20;
	num4 = 16;

	if (uParam0->f_1[num4 /*3*/].f_1 == 1216705912 || uParam0->f_1[num4 /*3*/].f_1 == 654181853)
	{
		if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
		{
			uParam0->f_1[num4 /*3*/].f_1 = 1334603721;
		}
		else
		{
			uParam0->f_1[num4 /*3*/].f_1 = -1539589426;
			uParam0->f_1[num2 /*3*/].f_1 = joaat("base");
		}
	
		if (bParam2)
			func_377(num2, num);
	
		if (bParam1)
			func_377(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_377(num3, num);
	}

	return;
}

BOOL func_450(int iParam0) // Position - 0x13A1B Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_267();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_451(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x13A41 Hash - 0x3A135443 ^0x969430D9
{
	int i;

	if (hParam2 == 0)
		return -1;

	for (i = 0; i < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(hParam0, bParam1, bParam3); i = i + 1)
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(hParam0, i, bParam1, bParam3) == hParam2)
			return i;
	}

	return -1;
}

BOOL func_452(Hash hParam0, int iParam1, var uParam2) // Position - 0x13A85 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_453(int iParam0, int iParam1) // Position - 0x13A96 Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_245(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_454(var uParam0) // Position - 0x13AB4 Hash - 0x3AB81F84 ^0x2BD03E57
{
	int num;
	int num2;

	num = 25;
	num2 = 0;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	num = 26;

	if (uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
		num2 = num2 + 1;

	return num2;
}

void func_455(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x13AFF Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_1() == -1)
		func_500(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_501(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_456(BOOL bParam0, eStackSize essParam1) // Position - 0x13B75 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_1() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			return Global_26796.f_26[essParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		return Global_36638.f_45.f_350.f_26[essParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_457(eStackSize essParam0, BOOL bParam1, int iParam2) // Position - 0x13BF2 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_502(&(Global_1946054.f_1378), essParam0);
	func_503(2, essParam0, 6);

	if (bParam1)
		func_458(false, true);

	return;
}

void func_458(BOOL bParam0, BOOL bParam1) // Position - 0x13C1A Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_504(0);

	if (bParam0)
	{
		func_384(8);
		func_384(512);
	}
	else
	{
		func_384(8);
		func_384(16);
	}

	return;
}

BOOL func_459(int iParam0) // Position - 0x13C4D Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_460(int iParam0) // Position - 0x13C62 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_461(int iParam0) // Position - 0x13C82 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_462(float fParam0) // Position - 0x13C96 Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_463(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13CB1 Hash - 0xC24B5846 ^0x34E8213A
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					else
						return bParam3 ? "PMPLAYER_CONDITION_TEMPERATURE_COLD" : "PMPLAYER_CONDITION_TEMPERATURE_HOT";
					break;
			
				case 2:
					return bParam2 ? "PMPLAYER_CONDITION_HONOR_GOOD" : "PMPLAYER_CONDITION_HONOR_BAD";
			}
			break;
	
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
			
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
			
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
			
				default:
					break;
			}
			break;
	}

	return "";
}

Hash func_464() // Position - 0x13D5A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_465(eStackSize essParam0) // Position - 0x13D69 Hash - 0xCCDB3731 ^0x4D3BF12
{
	Hash hash;

	hash = func_406(essParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_336(hash);
}

int func_466(Hash hParam0) // Position - 0x13D8C Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_505(hParam0))
		num = 0;
	else if (func_506(hParam0))
		num = 1;
	else if (func_507(hParam0))
		num = 2;
	else if (func_508(hParam0))
		num = 3;

	return num;
}

BOOL func_467(int iParam0) // Position - 0x13DCF Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_104(func_509(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_468(int iParam0) // Position - 0x13E0F Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_104(func_510(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_469(int iParam0) // Position - 0x13E4E Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_470() // Position - 0x13E61 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_1() != -1)
		return;

	func_128(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_311(1);
	func_433(1, num, 0);
	return;
}

void func_471(int iParam0) // Position - 0x13E93 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_472() // Position - 0x13EAA Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_1() != -1)
		return;

	func_128(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_311(2);
	func_433(2, num, 0);
	return;
}

void func_473() // Position - 0x13EDC Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_1() != -1)
		return;

	func_128(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_311(0);
	func_433(0, num, 0);
	return;
}

BOOL func_474(Any anParam0) // Position - 0x13F0E Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

int func_475(int iParam0) // Position - 0x13F44 Hash - 0x4084F232 ^0x4084F232
{
	int num;

	num = func_442(iParam0);

	if (num < 0)
		return 0;

	return func_511(num);
}

int func_476(int iParam0, int iParam1) // Position - 0x13F64 Hash - 0xF3EA5EAF ^0xA48F5774
{
	int num;
	int num2;

	if (*Global_1058888.f_40431 >= 32)
		return -1;

	num = -1;
	num = iParam0;
	num.f_1 = iParam1;

	if (*Global_1058888.f_40431 == 0)
	{
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
		return 0;
	}

	num2 = 0;

	while (num2 < *Global_1058888.f_40431)
	{
		if (iParam0 == Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
		else if (iParam0 > Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			num2 = num2 + 1;
		}
		else if (iParam0 < Global_1058888.f_40431.f_1[num2 /*2*/])
		{
			func_512(num2);
			Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
			return num2;
		}
	}

	if (*Global_1058888.f_40431 < 31)
	{
		num2 = *Global_1058888.f_40431;
		Global_1058888.f_40431.f_1[num2 /*2*/] = { num };
		Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;
	
		if (*Global_1058888.f_40431 > 32)
			Global_1058888.f_40431 = 32;
	
		return num2;
	}

	return -1;
}

void func_477() // Position - 0x140D5 Hash - 0x9BD813B0 ^0x6F082E60
{
	int i;

	for (i = 0; i < *Global_1058888.f_40431; i = i + 1)
	{
	}

	return;
}

int func_478(int iParam0) // Position - 0x140F8 Hash - 0xD14E7A6C ^0x65ACC420
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 0;
	
		case 1:
			return 50;
	
		case 2:
			return 100;
	
		case 3:
			return 200;
	
		case 4:
			return 350;
	
		case 5:
			return 550;
	
		case 6:
			return 800;
	
		case 7:
			return 1100;
	
		default:
		
	}

	return 0;
}

BOOL func_479(int iParam0, var uParam1) // Position - 0x1416E Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_480() // Position - 0x14177 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_481(int iParam0) // Position - 0x14180 Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_167(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_167(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_167(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_482(int iParam0, int iParam1) // Position - 0x141E2 Hash - 0xD5391B76 ^0x65D2732E
{
	var unk;

	if (iParam0 >= 10)
		iParam1 = 0;

	TEXT_LABEL_ASSIGN_STRING(&unk, "TOAST_RPG_LEVEL_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 32);
	return unk;
}

const char* func_483(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x14214 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_484(int iParam0) // Position - 0x14228 Hash - 0x21CE226B ^0xDD480BFE
{
	switch (iParam0)
	{
		case 0:
			return "stamina" /*Stamina*/;
	
		case 1:
			return "health";
	
		case 2:
			return "dead_eye_level_up";
	
		default:
		
	}

	return "";
}

char* func_485(int iParam0) // Position - 0x14263 Hash - 0x21CE226B ^0x6371C0ED
{
	switch (iParam0)
	{
		case 0:
			return "RPG_HEALTH";
	
		case 1:
			return "RPG_STAMINA";
	
		case 2:
			return "RPG_DEADEYE";
	
		default:
		
	}

	return "";
}

int func_486(int iParam0) // Position - 0x1429E Hash - 0x21FAF347 ^0x467E3BE5
{
	switch (iParam0)
	{
		case 0:
			return joaat("toast_rpg_level_health");
	
		case 1:
			return joaat("toast_rpg_level_stamina");
	
		case 2:
			return joaat("toast_rpg_level_deadeye");
	
		default:
		
	}

	return 0;
}

int func_487(int iParam0) // Position - 0x142D9 Hash - 0x5163992 ^0x5163992
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 3;
	
		default:
		
	}

	return 0;
}

int func_488(int iParam0) // Position - 0x14308 Hash - 0x21FAF347 ^0xA8C8F0DA
{
	switch (iParam0)
	{
		case 0:
			return joaat("stats_health");
	
		case 1:
			return joaat("stats_stamina");
	
		case 2:
			return joaat("stats_deadeye");
	
		default:
		
	}

	return 0;
}

BOOL func_489(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x14343 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_513(iParam1) && !func_514(iParam1))
		ped = func_515(iParam1);
	else
		return false;

	func_516(uParam3);
	num = func_517(iParam2);

	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&unk, ped, num, 0))
		return false;

	*uParam0 = unk.f_3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return false;

	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(*uParam0))
		return false;

	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(*uParam0);
	return true;
}

void func_490(Entity eParam0, var uParam1) // Position - 0x143E2 Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_518(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_519(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_491(Ped pedParam0, Any* panParam1) // Position - 0x1442C Hash - 0x2B5AFE28 ^0xF454BB04
{
	var src;
	int i;
	Hash weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	src = 29;
	MISC::COPY_SCRIPT_STRUCT(panParam1, &src, 30);

	for (i = 0; i < 29; i = i + 1)
	{
		weaponHash = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
	
		if (func_192(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_492(BOOL bParam0) // Position - 0x14491 Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_51(hash, 0))
			func_520(hash, false, bParam0);
	
		Global_1946054.f_2657[i] = 0;
	}

	Global_1946054.f_2657.f_20 = 0;
	Global_1946054.f_2657.f_21 = 0;
	Global_1946054.f_2657.f_22 = 0;
	Global_1946054.f_2657.f_23 = 0;
	Global_1946054.f_2657.f_24 = 0;
	Global_1946054.f_2657.f_25 = 0;
	Global_1946054.f_2657.f_19 = 0;
	Global_1946054.f_2657.f_26.f_6 = 0;
	return;
}

void func_493(int iParam0) // Position - 0x1452A Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_1() == -1)
	{
		func_521(352481484);
	
		for (i = 0; i < Global_26796.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_26796[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_26796.f_20;
		Global_1946054.f_2657.f_21 = Global_26796.f_21;
		Global_1946054.f_2657.f_22 = Global_26796.f_22;
		Global_1946054.f_2657.f_23 = Global_26796.f_23;
		Global_1946054.f_2657.f_24 = Global_26796.f_24;
		Global_1946054.f_2657.f_25 = Global_26796.f_25;
		Global_1946054.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		for (i = 0; i < Global_36638.f_45.f_350.f_19; i = i + 1)
		{
			Global_1946054.f_2657[i] = Global_36638.f_45.f_350[i];
		}
	
		Global_1946054.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946054.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946054.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946054.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946054.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946054.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946054.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_76(hash) != -999503751)
			func_522(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_523(hash, false))
			func_524(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_494(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1471A Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_525(hParam0))
		return;

	hash = func_76(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_526(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_526(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_526(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_526(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_526(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_526(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_527(0))
	{
		func_528(hParam0, true);
	
		if (func_267() == 1160113249)
			func_528(func_527(-2125499975), false);
		else
			func_528(func_527(1160113249), false);
	}

	func_529();

	if (func_530(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_167(false), hParam0, 0);

	func_524(hParam0, bParam3);

	if (bParam2)
		func_458(false, false);

	return;
}

void func_495(Ped pedParam0, var uParam1) // Position - 0x14880 Hash - 0xEFD384E2 ^0xD2D4DFA3
{
	int i;
	int weaponHash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	for (i = 0; i < 29; i = i + 1)
	{
		if (uParam1->[i] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, uParam1->[i], 0, false))
				if (func_191(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

BOOL func_496(var uParam0, int iParam1) // Position - 0x14929 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_497(var uParam0, int iParam1, int iParam2) // Position - 0x1493A Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_498(int iParam0, int iParam1) // Position - 0x1494D Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_499(int iParam0, int iParam1) // Position - 0x1495E Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_500(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x14971 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_501(Hash hParam0, int iParam1, eStackSize essParam2) // Position - 0x149CC Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[essParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_502(var uParam0, eStackSize essParam1) // Position - 0x14A36 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_1() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		Global_26796.f_26[essParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_500(&uParam0->f_1[i /*3*/], i, essParam1);
		}
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[essParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_501(&uParam0->f_1[i /*3*/], i, essParam1);
	}

	return;
}

void func_503(BOOL bParam0, eStackSize essParam1, int iParam2) // Position - 0x14AD1 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_1() == -1)
	{
		if (essParam1 == -1)
			essParam1 = Global_26796.f_776;
	
		if (essParam1 > -1 && essParam1 < 5)
			Global_26796.f_26[essParam1 /*120*/] = Global_26796.f_26[essParam1 /*120*/] || bParam0;
	
		return;
	}

	if (essParam1 == -1)
		essParam1 = Global_36638.f_45.f_350.f_1011;

	if (essParam1 > -1 && essParam1 < 5)
		Global_36638.f_45.f_350.f_26[essParam1 /*120*/] = Global_36638.f_45.f_350.f_26[essParam1 /*120*/] || bParam0;

	return;
}

void func_504(int iParam0) // Position - 0x14B59 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_505(Hash hParam0) // Position - 0x14B6A Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_51(hParam0, 0))
		return false;

	if (func_72(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_506(Hash hParam0) // Position - 0x14B94 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_51(hParam0, 0))
		return false;

	if (func_72(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_507(Hash hParam0) // Position - 0x14BBE Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_51(hParam0, 0))
		return false;

	if (func_72(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_508(Hash hParam0) // Position - 0x14BE8 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_51(hParam0, 0))
		return false;

	if (func_72(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_509(int iParam0, int iParam1) // Position - 0x14C12 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_531(iParam0);
	
		case 1:
			return func_532(iParam0);
	
		case 2:
			return func_533(iParam0);
	
		case 3:
			return func_534(iParam0);
	}

	return 0;
}

Hash func_510(int iParam0, int iParam1) // Position - 0x14C6B Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_535(iParam0);
	
		case 1:
			return func_536(iParam0);
	
		case 2:
			return func_537(iParam0);
	
		case 3:
			return func_538(iParam0);
	
		case 4:
			return func_539(iParam0);
	
		case 5:
			return func_540(iParam0);
	
		case 6:
			return func_541(iParam0);
	
		case 7:
			return func_542(iParam0);
	
		case 8:
			return func_543(iParam0);
	}

	return 0;
}

int func_511(int iParam0) // Position - 0x14D1E Hash - 0x78E19743 ^0x6ACC64F5
{
	int i;
	var unk;

	for (i = iParam0; i < *Global_1058888.f_40431; i = i + 1)
	{
		if (i + 1 < 32)
			Global_1058888.f_40431.f_1[i /*2*/] = { Global_1058888.f_40431.f_1[i + 1 /*2*/] };
	}

	unk = -1;

	if (*Global_1058888.f_40431 < 32)
		Global_1058888.f_40431.f_1[*Global_1058888.f_40431 /*2*/] = { unk };

	Global_1058888.f_40431 = *Global_1058888.f_40431 - 1;

	if (*Global_1058888.f_40431 < 0)
		Global_1058888.f_40431 = 0;

	return 1;
}

int func_512(int iParam0) // Position - 0x14DD2 Hash - 0x6DD34799 ^0x352A62D8
{
	int num;
	var unk;

	num = *Global_1058888.f_40431 - 1;
	unk = -1;

	while (num >= iParam0)
	{
		if (num + 1 < 32)
			Global_1058888.f_40431.f_1[num + 1 /*2*/] = { Global_1058888.f_40431.f_1[num /*2*/] };
	
		num = num - 1;
	}

	Global_1058888.f_40431.f_1[iParam0 /*2*/] = { unk };
	Global_1058888.f_40431 = *Global_1058888.f_40431 + 1;

	if (*Global_1058888.f_40431 > 32)
		Global_1058888.f_40431 = 32;

	return 1;
}

BOOL func_513(int iParam0) // Position - 0x14E73 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_544(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_514(int iParam0) // Position - 0x14EAB Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_544(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_513(iParam0))
		return false;

	ped = func_515(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_515(int iParam0) // Position - 0x14EFF Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_544(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_516(var uParam0) // Position - 0x14F2B Hash - 0x6843C143 ^0xA531F0D1
{
	int i;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;

	for (i = 0; i < 10; i = i + 1)
	{
		uParam0->f_10[i /*8*/] = 0;
		uParam0->f_10[i /*8*/].f_1 = 0;
		uParam0->f_10[i /*8*/].f_2 = 0;
		uParam0->f_10[i /*8*/].f_3 = 0;
		uParam0->f_10[i /*8*/].f_4 = 0;
		uParam0->f_10[i /*8*/].f_5 = 0;
		uParam0->f_10[i /*8*/].f_6 = 0;
		uParam0->f_10[i /*8*/].f_7 = 0;
	}

	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	return;
}

int func_517(int iParam0) // Position - 0x14FD2 Hash - 0x1B64DC55 ^0x1B64DC55
{
	switch (iParam0)
	{
		case 0:
			return 4;
	
		case 1:
			return 5;
	
		case 2:
			return 6;
	}

	return 0;
}

void func_518(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1500A Hash - 0x125E1FB8 ^0x58C5F328
{
	*uParam3 = PED::_GET_PED_DAMAGE_CLEANLINESS(pedParam0);
	*uParam2 = FLOCK::_GET_ANIMAL_RARITY(pedParam0);

	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_GET_PED_QUALITY(pedParam0);
	
		switch (*uParam4)
		{
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		
			case 0:
				*uParam1 = 0;
				break;
		
			case 1:
				*uParam1 = 1;
				break;
		}
	}

	return;
}

BOOL func_519(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x1507F Hash - 0xF684EE16 ^0xD8F147D7
{
	int num;
	var unk;
	BOOL flag;

	num = uParam3;
	unk = iParam2;

	if (num < unk)
		iParam2 = num;

	flag = PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(anParam0, pedParam1, iParam2);
	return flag;
}

void func_520(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x150A8 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_76(hParam0))
	{
		case -2061583405:
			flag = func_545(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_545(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_545(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_545(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_545(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_545(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_529();

	if (bParam1)
		func_458(false, false);

	return;
}

void func_521(int iParam0) // Position - 0x15175 Hash - 0x958E8FB2 ^0x9CA4541C
{
	int num;
	int num2;
	var unk;

	unk = -1;
	unk.f_1 = -1;
	unk.f_2 = -1;
	unk.f_3 = -1;
	unk.f_4 = -1;
	unk.f_5 = -1;
	unk.f_6 = -1;
	unk.f_7 = -1;
	unk.f_8 = -1;
	unk.f_13 = -1;
	unk.f_14 = -1;
	unk.f_15 = -1;
	unk.f_16 = -1;
	unk.f_17 = -1;
	unk = { func_305(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_307(&unk, &num, &num2, false))
	{
		if (num2 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946054.f_2657.f_26.f_2 = 5;
					Global_1946054.f_2657.f_26.f_1 = 5;
					Global_1946054.f_2657.f_26 = 5;
					break;
			}
		}
	
		func_256(num);
	}

	return;
}

void func_522(var uParam0, Hash hParam1, int iParam2) // Position - 0x1523F Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_546(iParam2, *uParam0);
	func_547(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_523(Hash hParam0, BOOL bParam1) // Position - 0x15275 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_159(hParam0, false, false) };
	guid = { func_196(hParam0, unk, unk.f_4, false) };

	if (func_304(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_167(false), &guid, bParam1);
	return true;
}

void func_524(Hash hParam0, BOOL bParam1) // Position - 0x152C1 Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_159(hParam0, false, false) };
	guid = { func_196(hParam0, unk, unk.f_4, false) };

	if (func_304(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_167(false), &guid, bParam1);
	return;
}

BOOL func_525(Hash hParam0) // Position - 0x1530B Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_1() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_526(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x15334 Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_548(hash, &unk))
		return 0;

	if (bParam3 && !func_523(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_76(hParam0) != -999503751)
		func_522(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_527(int iParam0) // Position - 0x153DC Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_267();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_528(Hash hParam0, BOOL bParam1) // Position - 0x15407 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_159(hParam0, false, false) };
	guid = { func_196(hParam0, unk, unk.f_4, false) };

	if (func_304(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_167(false), &guid);
	return 1;
}

void func_529() // Position - 0x15453 Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_1() == -1)
	{
		for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
		{
			Global_26796[i] = Global_1946054.f_2657[i];
		}
	
		Global_26796.f_20 = Global_1946054.f_2657.f_20;
		Global_26796.f_21 = Global_1946054.f_2657.f_21;
		Global_26796.f_22 = Global_1946054.f_2657.f_22;
		Global_26796.f_23 = Global_1946054.f_2657.f_23;
		Global_26796.f_24 = Global_1946054.f_2657.f_24;
		Global_26796.f_19 = Global_1946054.f_2657.f_19;
		return;
	}

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		Global_36638.f_45.f_350[i] = Global_1946054.f_2657[i];
	}

	Global_36638.f_45.f_350.f_20 = Global_1946054.f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946054.f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946054.f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946054.f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946054.f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946054.f_2657.f_19;
	return;
}

BOOL func_530(Hash hParam0) // Position - 0x15589 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_550(func_549(hParam0));
}

Hash func_531(int iParam0) // Position - 0x1559B Hash - 0xC02FF737 ^0xE6E3E291
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 2:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 3:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 4:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 5:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 6:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 7:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 8:
			return joaat("provision_reinforced_bandolier_snake");
	
		default:
		
	}

	return 0;
}

Hash func_532(int iParam0) // Position - 0x1562A Hash - 0xC02FF737 ^0x9CC78C98
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 3:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 4:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 5:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 6:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 7:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 8:
			return joaat("provision_reinforced_gunbelt_snake");
	
		default:
		
	}

	return 0;
}

Hash func_533(int iParam0) // Position - 0x156B9 Hash - 0xC02FF737 ^0x26BFE76B
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_holster_gator");
	
		case 1:
			return joaat("provision_reinforced_holster_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 4:
			return joaat("provision_reinforced_holster_cougar");
	
		case 5:
			return joaat("provision_reinforced_holster_deer");
	
		case 6:
			return joaat("provision_reinforced_holster_panther");
	
		case 7:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 8:
			return joaat("provision_reinforced_holster_snake");
	
		default:
		
	}

	return 0;
}

Hash func_534(int iParam0) // Position - 0x15748 Hash - 0xC02FF737 ^0xC89D76B1
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_offhand_gator");
	
		case 1:
			return joaat("provision_reinforced_offhand_bear");
	
		case 2:
			return joaat("provision_reinforced_offhand_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		case 4:
			return joaat("provision_reinforced_offhand_cougar");
	
		case 5:
			return joaat("provision_reinforced_offhand_deer");
	
		case 6:
			return joaat("provision_reinforced_offhand_panther");
	
		case 7:
			return joaat("provision_reinforced_offhand_rabbit");
	
		case 8:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

Hash func_535(int iParam0) // Position - 0x157D7 Hash - 0x51E02475 ^0x6FAD83C9
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_gator");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_gator");
	
		case 2:
			return joaat("provision_reinforced_holster_gator");
	
		case 3:
			return joaat("provision_reinforced_offhand_gator");
	
		default:
		
	}

	return 0;
}

Hash func_536(int iParam0) // Position - 0x15820 Hash - 0x51E02475 ^0x73BA00BD
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_bear");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_bear");
	
		case 2:
			return joaat("provision_reinforced_holster_bear");
	
		case 3:
			return joaat("provision_reinforced_offhand_bear");
	
		default:
		
	}

	return 0;
}

Hash func_537(int iParam0) // Position - 0x15869 Hash - 0x51E02475 ^0xD39CAF97
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_boar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_boar");
	
		case 2:
			return joaat("provision_reinforced_holster_boar");
	
		case 3:
			return joaat("provision_reinforced_offhand_boar");
	
		default:
		
	}

	return 0;
}

Hash func_538(int iParam0) // Position - 0x158B2 Hash - 0x51E02475 ^0xB8F3F001
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_buffalo");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_buffalo");
	
		case 2:
			return joaat("provision_reinforced_holster_buffalo");
	
		case 3:
			return joaat("provision_reinforced_offhand_buffalo");
	
		default:
		
	}

	return 0;
}

Hash func_539(int iParam0) // Position - 0x158FB Hash - 0x51E02475 ^0xCED8E5FA
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_cougar");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_cougar");
	
		case 2:
			return joaat("provision_reinforced_holster_cougar");
	
		case 3:
			return joaat("provision_reinforced_offhand_cougar");
	
		default:
		
	}

	return 0;
}

Hash func_540(int iParam0) // Position - 0x15944 Hash - 0x51E02475 ^0x25F7B61
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_deer");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_deer");
	
		case 2:
			return joaat("provision_reinforced_holster_deer");
	
		case 3:
			return joaat("provision_reinforced_offhand_deer");
	
		default:
		
	}

	return 0;
}

Hash func_541(int iParam0) // Position - 0x1598D Hash - 0x51E02475 ^0xE0DEBCEF
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_panther");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_panther");
	
		case 2:
			return joaat("provision_reinforced_holster_panther");
	
		case 3:
			return joaat("provision_reinforced_offhand_panther");
	
		default:
		
	}

	return 0;
}

Hash func_542(int iParam0) // Position - 0x159D6 Hash - 0x51E02475 ^0x50FB5131
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_rabbit");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_rabbit");
	
		case 2:
			return joaat("provision_reinforced_holster_rabbit");
	
		case 3:
			return joaat("provision_reinforced_offhand_rabbit");
	
		default:
		
	}

	return 0;
}

Hash func_543(int iParam0) // Position - 0x15A1F Hash - 0x51E02475 ^0x8656D204
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_reinforced_bandolier_snake");
	
		case 1:
			return joaat("provision_reinforced_gunbelt_snake");
	
		case 2:
			return joaat("provision_reinforced_holster_snake");
	
		case 3:
			return joaat("provision_reinforced_offhand_snake");
	
		default:
		
	}

	return 0;
}

int func_544(int iParam0) // Position - 0x15A68 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_545(Hash hParam0, int iParam1) // Position - 0x15A81 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_548(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_76(hParam0) != -999503751)
			func_551(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_76(hParam0) != -999503751)
		func_551(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_523(hParam0, true);
	return 1;
}

void func_546(int iParam0, int iParam1) // Position - 0x15B67 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_547(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x15B80 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_552(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_245(func_352(hParam1), 1);
		uParam0->f_1 == -1;
	}
	else
	{
		uParam0->f_1 = iParam2;
	}

	uParam0->f_2 = iParam4;
	*uParam0 = hParam1;
	uParam0->f_3 = 0;

	if (bParam3)
		func_553(uParam0);

	return;
}

BOOL func_548(Hash hParam0, var uParam1) // Position - 0x15BDC Hash - 0x4A27386E ^0xBC93C855
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (hParam0 == Global_1946054.f_2657[*uParam1])
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

int func_549(Hash hParam0) // Position - 0x15C1C Hash - 0x497B15BA ^0x497B15BA
{
	switch (hParam0)
	{
		case -2061583405:
			return 2;
	
		case -1719060085:
			return 16;
	
		case -999503751:
			return 1;
	
		case -525676072:
			return 4;
	
		case -413129408:
			return 32;
	
		case 81053684:
			return 8;
	
		default:
		
	}

	return 0;
}

BOOL func_550(int iParam0) // Position - 0x15C6C Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

void func_551(int iParam0, int iParam1, int iParam2) // Position - 0x15C84 Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_554(iParam1);
	func_555(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_556(&(iParam0->f_26), num2);
	
		if (func_557(iParam0->f_26, &num))
			func_558(num, num2);
	}

	return;
}

void func_552(var uParam0) // Position - 0x15CCD Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_559(&(uParam0->f_3));
	return;
}

void func_553(var uParam0) // Position - 0x15CEB Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_560(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

int func_554(int iParam0) // Position - 0x15D0C Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_555(int iParam0, int iParam1) // Position - 0x15D23 Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_556(var uParam0, int iParam1) // Position - 0x15D6B Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_552(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_557(int iParam0, var uParam1) // Position - 0x15D9C Hash - 0xE231A73F ^0x924E070C
{
	*uParam1 = 0;
	*uParam1 = 0;

	while (*uParam1 < Global_1946054.f_2657.f_19)
	{
		if (Global_1946054.f_2657.f_26.f_7[*uParam1] == iParam0)
			return true;
	
		*uParam1 = *uParam1 + 1;
	}

	return false;
}

void func_558(int iParam0, int iParam1) // Position - 0x15DE0 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_559(var uParam0) // Position - 0x15DF9 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_560(var uParam0, Any anParam1, int iParam2) // Position - 0x15E25 Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_561(func_267());

	if (*uParam0)
		func_559(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_1() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_561(int iParam0) // Position - 0x15E5C Hash - 0xB4860741 ^0xB4860741
{
	if (func_1() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
		
			case -449205311:
				return 0;
		
			case 1160113249:
				return 0;
		
			default:
			
		}
	
		return 0;
	}

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			return 1;
	
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			return 0;
	
		default:
		
	}

	return 0;
}

