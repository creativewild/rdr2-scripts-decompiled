#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 1;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	Any anLocal_12 = 0;
	int iLocal_13 = 0;
	Hash hLocal_14 = 0;
	Hash hLocal_15 = 0;
	Interior inLocal_16 = 0;
	Object obLocal_17 = 0;
	Any anLocal_18 = 0;
	int iLocal_19 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xBE93BB47 ^0xA2BC226F
{
	anLocal_12 = anScriptParam_0;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || func_1() != -1)
		func_2(&uLocal_3);

	if (!TASK::DOES_SCENARIO_POINT_EXIST(anScriptParam_0.f_1))
		func_2(&uLocal_3);

	iLocal_13 = anScriptParam_0.f_1;
	uLocal_9 = { TASK::_GET_SCENARIO_POINT_COORDS(anScriptParam_0.f_1, true) };
	hLocal_14 = func_3();
	inLocal_16 = INTERIOR::GET_INTERIOR_AT_COORDS(uLocal_9);

	if (hLocal_14 == joaat("taxidermy_marital_05") || hLocal_14 == joaat("taxidermy_marital_07"))
		func_4(hLocal_14, &hLocal_15);

	while (func_5())
	{
		if (func_6())
			func_2(&uLocal_3);
	
		if (hLocal_14 == joaat("taxidermy_marital_01"))
			func_7(&uLocal_3);
	
		if (hLocal_14 == joaat("taxidermy_marital_02") || hLocal_14 == joaat("taxidermy_marital_03") || hLocal_14 == joaat("taxidermy_marital_04") || hLocal_14 == joaat("taxidermy_marital_05") || hLocal_14 == joaat("taxidermy_marital_06"))
			func_8(&uLocal_3);
	
		if (hLocal_14 != joaat("taxidermy_marital_07"))
		{
		}
		else
		{
			func_9(&uLocal_3);
		}
	
		BUILTIN::WAIT(0);
	}

	func_2(&uLocal_3);
	return;
}

BOOL func_1() // Position - 0x10F Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_2(var uParam0) // Position - 0x11D Hash - 0x2853F600 ^0x66C12A01
{
	if (hLocal_14 == joaat("taxidermy_marital_05") || hLocal_14 == joaat("taxidermy_marital_07"))
		func_10(uParam0);
	else if (INTERIOR::IS_VALID_INTERIOR(inLocal_16))
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(inLocal_16, func_11(hLocal_14, 11)) && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_16, func_11(hLocal_14, 11)))
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(inLocal_16, func_11(hLocal_14, 11), true);

	if (hLocal_14 == joaat("taxidermy_marital_01"))
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_17))
			TASK::_MAKE_OBJECT_CARRIABLE(obLocal_17);

	SCRIPTS::_0xE7282390542F570D(anLocal_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

Hash func_3() // Position - 0x1AB Hash - 0xDD94F74D ^0x984CB79C
{
	int num;

	if (TASK::DOES_SCENARIO_POINT_EXIST(iLocal_13))
		num = BUILTIN::ROUND(TASK::_GET_SCENARIO_POINT_RADIUS(iLocal_13));

	return COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("taxidermy"), joaat("taxidermy_marital"));
}

void func_4(Hash hParam0, var uParam1) // Position - 0x1D8 Hash - 0x77884CF ^0xC54B70F
{
	*uParam1 = COLLECTION::_COLLECTABLE_GET_IPL(hParam0);
	return;
}

BOOL func_5() // Position - 0x1E9 Hash - 0xBC5DFEF2 ^0x4AA877CF
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_2(&uLocal_3);
		return false;
	}

	return true;
}

BOOL func_6() // Position - 0x203 Hash - 0xC019443D ^0xB0227A3E
{
	if (func_1() != -1)
		return true;

	if (PED::IS_PED_INJURED(Global_35))
		return true;

	return false;
}

int func_7(var uParam0) // Position - 0x226 Hash - 0xA26EFAE8 ^0x34B406E3
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76) && func_14(52))
			{
				if (func_15() < 1)
				{
					func_16(joaat("taxidermy_marital_01"));
					func_17(joaat("taxidermy_marital_01"));
					func_18(joaat("taxidermy_marital_01"));
				}
			
				func_19(uParam0, 1);
			}
			else
			{
				func_2(uParam0);
			}
			break;
	
		case 1:
			if (func_15() == func_20() && !func_21(joaat("provision_tm_squirrel_statue"), 1, false))
				if (func_15() == 6 && func_20() == 6 && func_22(joaat("taxidermy_marital_06")))
					func_2(&uLocal_3);
				else if (func_23(uParam0))
					func_19(uParam0, 16);
			else if (func_24(0, false, true))
				func_2(&uLocal_3);
			else
				func_19(uParam0, 2);
			break;
	
		case 2:
			if (func_21(joaat("provision_tm_squirrel_statue"), 1, false))
				func_19(uParam0, 3);
			break;
	
		case 3:
			func_25();
			func_19(uParam0, 4);
			break;
	
		case 4:
			if (func_26())
				func_19(uParam0, 5);
			break;
	
		case 5:
			if (func_27(&(uLocal_3.f_1), "COL_CTX_TAX_MARITAL_PLACE", uLocal_9, 0, joaat("INPUT_CONTEXT_X"), 1.5f, 0, 0, 1, 0, false, 0, false, 0, false, false, joaat("SHORT_TIMED_EVENT"), false))
			{
				if (func_15() == 2)
				{
					func_18(joaat("taxidermy_marital_02"));
					func_16(joaat("taxidermy_marital_02"));
				}
				else if (func_15() == 3)
				{
					func_18(joaat("taxidermy_marital_03"));
					func_16(joaat("taxidermy_marital_03"));
				}
				else if (func_15() == 4)
				{
					func_18(joaat("taxidermy_marital_04"));
					func_16(joaat("taxidermy_marital_04"));
				}
				else if (func_15() == 5)
				{
					func_18(joaat("taxidermy_marital_05"));
					func_16(joaat("taxidermy_marital_05"));
				}
				else if (func_15() == 6)
				{
					func_18(joaat("taxidermy_marital_06"));
					func_16(joaat("taxidermy_marital_06"));
				}
				else if (func_15() == 7)
				{
					func_18(joaat("taxidermy_marital_07"));
				}
			
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1638.4927f, -1361.4097f, 83.4157f, 1f, 20000, 1048576000, 0, 1193033728);
				func_28(48);
				func_29(false, 10);
				BUILTIN::SETTIMERA(0);
				func_19(uParam0, 6);
			}
			break;
	
		case 6:
			if (func_30(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD) || BUILTIN::TIMERA() > 1000)
				if (func_31(&uLocal_3, 0))
					func_19(uParam0, 7);
			break;
	
		case 7:
			if (func_30(Global_35, SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD))
				return 0;
		
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			func_32(&uLocal_3, 0);
		
			if (func_33(&uLocal_3, 0, 1, true, true))
				func_19(uParam0, 8);
			break;
	
		case 8:
			if (func_34(joaat("provision_tm_squirrel_statue"), 1, false, -142743235, false))
				func_19(uParam0, 16);
			break;
	
		case 10:
			break;
	
		case 16:
			iLocal_19 = 4;
			anLocal_18 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("s_squirrelmarston01x"), -1638f, -1360.66f, 85.35f, 1 | iLocal_19);
			func_19(uParam0, 17);
			break;
	
		case 17:
			if (ENTITY::IS_MAP_ENTITY_PINNED(anLocal_18))
			{
				obLocal_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(anLocal_18));
				func_19(uParam0, 18);
			}
			break;
	
		case 18:
			if (hLocal_14 == joaat("taxidermy_marital_01"))
				TASK::MAKE_OBJECT_NOT_CARRIABLE(obLocal_17);
		
			func_19(uParam0, 10);
			break;
	}

	return 0;
}

int func_8(var uParam0) // Position - 0x594 Hash - 0xC171BD25 ^0xE5A7705E
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76))
				func_19(uParam0, 11);
			else
				func_2(uParam0);
			break;
	
		case 11:
			if (func_21(joaat("provision_tm_squirrel_statue"), 1, false))
				func_2(uParam0);
			else if (func_15() == func_20())
				func_2(uParam0);
			else if (func_15() == 2)
				if (hLocal_14 == joaat("taxidermy_marital_02"))
					if (func_24(0, false, true))
						func_2(&uLocal_3);
					else
						func_19(uParam0, 14);
				else
					func_2(uParam0);
			else if (func_15() == 3)
				if (hLocal_14 == joaat("taxidermy_marital_03"))
					if (func_24(0, false, true))
						func_2(&uLocal_3);
					else
						func_19(uParam0, 14);
				else
					func_2(uParam0);
			else if (func_15() == 4)
				if (hLocal_14 == joaat("taxidermy_marital_04"))
					if (func_24(0, false, true))
						func_2(&uLocal_3);
					else
						func_19(uParam0, 14);
				else
					func_2(uParam0);
			else if (func_15() == 5)
				if (hLocal_14 == joaat("taxidermy_marital_05"))
					if (func_24(0, false, true))
						func_2(&uLocal_3);
					else
						func_19(uParam0, 13);
				else
					func_2(uParam0);
			else if (func_15() == 6)
				if (hLocal_14 == joaat("taxidermy_marital_06"))
					if (func_24(0, false, true))
						func_2(&uLocal_3);
					else
						func_19(uParam0, 14);
				else
					func_2(uParam0);
			break;
	
		case 13:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
				if (func_35(uParam0))
					func_19(uParam0, 15);
			break;
	
		case 14:
			if (func_23(uParam0))
			{
				if (hLocal_14 == joaat("taxidermy_marital_03"))
					TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL_CHIMNEY", true);
			
				func_19(uParam0, 15);
			}
			break;
	
		case 15:
			if (func_21(joaat("provision_tm_squirrel_statue"), 1, false))
			{
				func_28(48);
				func_29(false, 10);
			
				if (hLocal_14 == joaat("taxidermy_marital_03"))
					TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL_CHIMNEY", false);
			
				if (hLocal_14 == joaat("taxidermy_marital_05"))
					func_19(uParam0, 19);
				else
					func_2(uParam0);
			}
			break;
	
		case 19:
			break;
	}

	return 0;
}

int func_9(var uParam0) // Position - 0x7C2 Hash - 0x4645B740 ^0xDA5FD265
{
	switch (func_12(uParam0))
	{
		case 0:
			if (func_13(76))
				if (func_15() == 6 && func_20() == 6 && func_22(joaat("taxidermy_marital_06")))
					func_19(uParam0, 12);
				else
					func_2(uParam0);
			else
				func_2(uParam0);
			break;
	
		case 12:
			if (func_24(0, false, true))
				func_2(&uLocal_3);
			else
				func_19(uParam0, 13);
			break;
	
		case 13:
			if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
				if (func_35(uParam0))
					func_19(uParam0, 15);
			break;
	
		case 15:
			if (func_21(joaat("provision_tm_squirrel_statue"), 1, false))
			{
				func_28(48);
				func_29(false, 10);
				func_36(15, 1);
				func_17(joaat("taxidermy_marital_07"));
				func_19(uParam0, 19);
			}
			break;
	
		case 19:
			break;
	}

	return 0;
}

int func_10(var uParam0) // Position - 0x8B1 Hash - 0x9564D625 ^0x9564D625
{
	if (func_37(hLocal_15))
		func_38(hLocal_15);

	return 1;
}

char* func_11(Hash hParam0, int iParam1) // Position - 0x8C9 Hash - 0x6DF13EDC ^0xEA5D371C
{
	var unk;
	var unk6;

	if (!func_39(17, &unk))
		return "";

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&unk6, &unk);
	return func_40(unk6);
}

int func_12(var uParam0) // Position - 0x901 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_13(int iParam0) // Position - 0x90C Hash - 0x7F255B4B ^0xCD4BFF4B
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	if (Global_1572887.f_12 == -1)
		return func_41(Global_1835011[iParam0 /*74*/].f_1, true);

	return UNLOCK::UNLOCK_IS_UNLOCKED(Global_1835011[iParam0 /*74*/].f_2) && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1835011[iParam0 /*74*/].f_2);
}

BOOL func_14(int iParam0) // Position - 0x96B Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_1() != -1)
		return false;

	if (!func_42(iParam0))
		return false;

	return func_41(Global_1347702[iParam0 /*49*/].f_15, true);
}

int func_15() // Position - 0x99C Hash - 0xA6EA0C1A ^0xB20CD39B
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_43(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_marital"))))
			num = num + 1;
	}

	return num;
}

void func_16(int iParam0) // Position - 0x9D8 Hash - 0x52E0C575 ^0xB8AD94F1
{
	Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/] = func_44();
	func_46(&Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/], 0, 0, func_45(iParam0, 16), func_45(iParam0, 17), 0, 0, false);
	return;
}

void func_17(Hash hParam0) // Position - 0xA21 Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_18(Hash hParam0) // Position - 0xA30 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_19(var uParam0, int iParam1) // Position - 0xA3F Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

int func_20() // Position - 0xA4C Hash - 0xA6EA0C1A ^0xB20CD39B
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_47(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_marital"))))
			num = num + 1;
	}

	return num;
}

BOOL func_21(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0xA88 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_48(hParam0, 0))
		return false;

	num = func_49(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_50(hParam0, 1))
			return false;

	return func_51(hParam0, false, bParam2) >= iParam1;
}

BOOL func_22(int iParam0) // Position - 0xAF2 Hash - 0x77B6ABB5 ^0xDBD1E46
{
	if (func_52(Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/]))
		if (func_53(Global_40.f_12019.f_27[func_45(iParam0, 15) /*2*/], true))
			return true;
		else
			return false;

	return false;
}

BOOL func_23(var uParam0) // Position - 0xB39 Hash - 0x81D304A0 ^0xC36767E8
{
	PERSISTENCE::PERSISTENCE_REMOVE_ALL_ENTITIES_IN_AREA(func_54(hLocal_14), 10f);

	if (INTERIOR::IS_VALID_INTERIOR(inLocal_16))
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(inLocal_16, func_11(hLocal_14, 11)))
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_16, func_11(hLocal_14, 11)))
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(inLocal_16, func_11(hLocal_14, 11), 0);

	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(inLocal_16, func_11(hLocal_14, 11)))
		return true;

	return false;
}

BOOL func_24(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xBA1 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_55())
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
		num = func_56(Global_1898164.f_1[0 /*5*/]);
	
		if (func_42(num) && func_57(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_58(Global_1898164.f_1[0 /*5*/]))
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

void func_25() // Position - 0xDA5 Hash - 0x74926EC3 ^0xE3AEC337
{
	STREAMING::REQUEST_MODEL(joaat("s_squirrelmarston01x"), false);
	return;
}

BOOL func_26() // Position - 0xDB7 Hash - 0x11DC3931 ^0x22DA5EF6
{
	return STREAMING::HAS_MODEL_LOADED(joaat("s_squirrelmarston01x"));
}

BOOL func_27(var uParam0, char* sParam1, var uParam2, var uParam3, var uParam4, Player plParam5, Hash hParam6, float fParam7, int iParam8, int iParam9, int iParam10, const char* sParam11, BOOL bParam12, Volume volParam13, BOOL bParam14, int iParam15, BOOL bParam16, BOOL bParam17, Hash hParam18, BOOL bParam19) // Position - 0xDC8 Hash - 0x253B3071 ^0xCB11B4C7
{
	int num;

	if (!func_59(*uParam0))
	{
		num = 0;
	
		if (bParam17)
			num = 5;
	
		if (!ENTITY::IS_ENTITY_DEAD(plParam5))
		{
			*uParam0 = func_60(sParam1, hParam6, plParam5, iParam10, iParam9, false, iParam15, num, 1070386381, 570, 4000, 10, 1073741824, 0, hParam18, false, false);
			func_61(*uParam0, fParam7, true);
		}
		else if (volParam13 != 0)
		{
			*uParam0 = func_62(sParam1, hParam6, volParam13, iParam10, iParam9, iParam15, num, 570, 4000, 10, 1073741824, 0, hParam18, false);
		}
		else
		{
			if (_IS_NULL_VECTOR(uParam2))
				return false;
		
			*uParam0 = func_64(sParam1, hParam6, uParam2, fParam7, iParam10, iParam9, iParam15, num, 570, 4000, 10, 1073741824, 0, hParam18, false);
		}
	
		if (iParam8 != 0f)
		{
			func_65(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(iParam8)), true);
		
			if (BUILTIN::CEIL(MISC::ABSF(iParam8)) > func_66(1))
				func_67(*uParam0, false, true);
		}
	
		!MISC::IS_STRING_NULL_OR_EMPTY(sParam11);
	
		if (bParam19)
			func_68(*uParam0, false, true);
	
		return false;
	}

	if (!bParam16)
		if (func_69(*uParam0, false))
			if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
				func_67(*uParam0, false, true);
		else if (!PED::IS_PED_CARRYING_SOMETHING(Global_35))
			func_67(*uParam0, true, true);

	if (iParam8 != 0f)
		if (BUILTIN::CEIL(MISC::ABSF(iParam8)) > func_66(1))
			func_67(*uParam0, false, true);

	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(plParam5) && ENTITY::IS_ENTITY_DEAD(plParam5))
		{
			if (func_59(*uParam0))
			{
				func_70(uParam0, true, true);
				return false;
			}
		}
	}

	if (!bParam17 && func_71(*uParam0, true) || bParam17 && func_72(*uParam0, true))
	{
		if (!bParam14)
			if (iParam8 < 0f)
				func_73(BUILTIN::CEIL(MISC::ABSF(iParam8)), 0, 0, true, 1);
			else if (iParam8 > 0f)
				func_74(BUILTIN::CEIL(MISC::ABSF(iParam8)), false, 1065353216, 1, 0, 0, 1, 752097756);
	
		func_70(uParam0, true, true);
		return true;
	}

	return false;
}

void func_28(int iParam0) // Position - 0xFEB Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_1() != -1)
		return;

	num = func_75(iParam0);
	value = func_76(iParam0);

	if (Global_1347477.f_117 || !func_77(31) || !func_78(num))
		return;

	if (value <= 0f)
		return;

	if (func_79(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_80(num, Global_40.f_11095.f_11[num] + value, false);
	func_83(MISC::VAR_STRING(6, func_81(iParam0), value), "itemtype_textures", func_82(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_29(BOOL bParam0, int iParam1) // Position - 0x10E7 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_84(&Global_0, 8);

	if (!func_85() || func_1() != -1)
		return;

	func_84(&Global_0, 1);
	return;
}

BOOL func_30(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x112D Hash - 0xBA023B92 ^0x16E0B707
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (esthParam1 == SCRIPT_TASK_DRIVE_BY && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedParam0))
				return true;
		
			if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true) == 0)
				return true;
		}
	}

	return false;
}

BOOL func_31(var uParam0, int iParam1) // Position - 0x1186 Hash - 0x59C4B4DF ^0xBAE91F41
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2[iParam1]))
		uParam0->f_2[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_86(iParam1), 0, 0, false, true);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_2[iParam1]))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2[iParam1], true, false))
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2[iParam1]);

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_2[iParam1], true, false))
		return false;

	if (!func_87(uParam0, iParam1))
		return false;

	switch (iParam1)
	{
		case 0:
			if (func_88())
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2[iParam1], "JOHN", Global_35, 0);
		
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2[iParam1], "squirrel", uParam0->f_5, 0);
			uParam0->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			break;
	}

	return true;
}

void func_32(var uParam0, int iParam1) // Position - 0x1256 Hash - 0x29644AA6 ^0x73DEA5AE
{
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_2[iParam1], false))
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_2[iParam1]);

	return;
}

BOOL func_33(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x127B Hash - 0x21ED761E ^0x13EA554D
{
	if (bParam3)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(uParam0->f_2[iParam1], func_89(iParam2)) && !ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_2[iParam1], func_89(iParam2)))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(uParam0->f_2[iParam1], func_89(iParam2));
			return false;
		}
	}

	if (bParam4)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_2[iParam1], func_89(iParam2)))
		{
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_2[iParam1], func_89(iParam2), true);
			return true;
		}
	}

	return false;
}

BOOL func_34(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x12FF Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_48(hParam0, 0))
		return false;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_90(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return false;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_91(hParam0, -iParam1, flag, flag2, flag3);
	
		return false;
	}

	if (!func_21(hParam0, 1, bParam4))
		return false;

	statId = { func_92(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_51(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_51(hParam0, false, false) - iParam1 < 0)
		{
			func_34(hParam0, func_51(hParam0, false, false), bParam2, hParam3, bParam4);
			return false;
		}
	}

	if (func_49(hParam0) == joaat("WEAPON"))
		if (!func_93(hParam0, iParam1, false, hParam3))
			return false;
	else if (!func_94(hParam0, iParam1, hParam3, bParam2, bParam4))
		return false;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_95(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_91(hParam0, -iParam1, flag, flag2, flag3);

	func_96(hParam0, iParam1);
	return true;
}

BOOL func_35(var uParam0) // Position - 0x1473 Hash - 0x6E4B7F44 ^0x6E4B7F44
{
	func_97(hLocal_15);
	return true;
}

int func_36(int iParam0, int iParam1) // Position - 0x1482 Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_98(iParam0))
		return 0;

	if (!func_85())
		return 0;

	if (!func_99(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_37(Hash hParam0) // Position - 0x14DD Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

void func_38(Hash hParam0) // Position - 0x14E9 Hash - 0x7DD010A2 ^0xA0826F55
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REMOVE_IPL_HASH(hParam0);

	return;
}

BOOL func_39(int iParam0, var uParam1) // Position - 0x1500 Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_100(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

char* func_40(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x152D Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

BOOL func_41(int iParam0, BOOL bParam1) // Position - 0x1541 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_101(iParam0))
	{
		case 5:
			return 1;
	
		case 6:
			if (bParam1)
				return 1;
			break;
	}

	return 0;
}

BOOL func_42(int iParam0) // Position - 0x1572 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_43(Hash hParam0) // Position - 0x1588 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

eStackSize func_44() // Position - 0x1598 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_45(Hash hParam0, int iParam1) // Position - 0x15A4 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_39(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

void func_46(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x15D3 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_102(*essParam0);
	i = func_103(*essParam0);
	num2 = func_104(*essParam0);
	j = func_105(*essParam0);
	k = func_106(*essParam0);
	l = func_107(*essParam0);

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

	for (m = func_108(i, num); num2 > m; m = func_108(i, num))
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

	func_109(essParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_47(Hash hParam0) // Position - 0x175B Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_48(Hash hParam0, int iParam1) // Position - 0x176B Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_49(Hash hParam0) // Position - 0x1785 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_48(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_50(Hash hParam0, int iParam1) // Position - 0x17B0 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_48(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_90(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_110("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_111(&unk, i, num, num2))
			{
			}
			else if (!func_112(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_113(num);
				return true;
			}
		}
	
		func_113(num);
	}

	return false;
}

int func_51(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1857 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_48(hParam0, 0))
		return 0;

	num = func_49(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_90(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_114(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_52(eStackSize essParam0) // Position - 0x18D9 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_107(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_106(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_105(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_102(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_103(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_104(essParam0);

	if (num6 < 1 || num6 > func_108(num5, num4))
		return false;

	return true;
}

BOOL func_53(eStackSize essParam0, BOOL bParam1) // Position - 0x19B5 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_116(func_44(), essParam0, bParam1);
}

Vector3 func_54(Hash hParam0) // Position - 0x19C9 Hash - 0x4CB488BA ^0x4CB488BA
{
	switch (hParam0)
	{
		case joaat("taxidermy_marital_03"):
			return -1637.18f, -1359.381f, 84.3f;
	
		case joaat("taxidermy_marital_02"):
			return -1636.28f, -1354.913f, 84.3f;
	
		case joaat("taxidermy_marital_06"):
			return -1599.82f, -1417.758f, 84.7f;
	
		case joaat("taxidermy_marital_04"):
			return -1646.48f, -1355.488f, 86.7f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

BOOL func_55() // Position - 0x1A3C Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_56(int iParam0) // Position - 0x1A8F Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_58(iParam0))
		return -1;

	return func_118(func_117(iParam0));
}

BOOL func_57(int iParam0, int iParam1) // Position - 0x1AAF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_58(int iParam0) // Position - 0x1ABE Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

BOOL func_59(int iParam0) // Position - 0x1AF1 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

// Unhandled jump detected. Output should be considered invalid
int func_60(char* sParam0, Hash hParam1, Player plParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0x1B30 Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(plParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_119(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (plParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
					if (iParam3 <= Global_1945188[i /*18*/])
						return i;
			
				goto 0x8C;
			}
		}
	
		if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_120(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, plParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

void func_61(int iParam0, float fParam1, BOOL bParam2) // Position - 0x1C07 Hash - 0x9018D919 ^0x90AC92B6
{
	int num;

	if (bParam2 && !func_59(iParam0))
		return;

	if (fParam1 <= 0f)
		return;

	num = func_121(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	Global_1945188[num /*18*/].f_9 = fParam1;
	HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(Global_1945188[num /*18*/].f_3, fParam1);
	return;
}

int func_62(char* sParam0, Hash hParam1, Volume volParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, Hash hParam12, BOOL bParam13) // Position - 0x1C66 Hash - 0x90EF6909 ^0x581337A9
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!VOLUME::DOES_VOLUME_EXIST(volParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_119(i, 2))
			if (volParam2 == Global_1945188[i /*18*/].f_10 && hParam1 == Global_1945188[i /*18*/].f_4)
				return i;
		else if (num == 0)
			num = i;
	}

	if (num != 0)
	{
		func_120(num, hParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, volParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, iParam10, iParam11, 1065353216, false, false, 0, hParam12, bParam13);
		return num;
	}

	return 0;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x1D26 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_64(char* sParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, Hash hParam15, BOOL bParam16) // Position - 0x1D50 Hash - 0x8FE94EEE ^0x148ED6A8
{
	int i;
	int num;
	int num2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (_IS_NULL_VECTOR(uParam2))
		return 0;

	if (fParam5 <= 0f)
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_119(i, 2))
		{
			if (func_122(uParam2, Global_1945188[i /*18*/].f_6, 0.01f, true) && hParam1 == Global_1945188[i /*18*/].f_4)
			{
				num2 = i;
				return num2;
			}
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_120(num, hParam1, sParam0, 4, iParam6, iParam7, uParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, false, false, 0, hParam15, bParam16);
		return num;
	}

	return 0;
}

void func_65(int iParam0, char* sParam1, int iParam2, BOOL bParam3) // Position - 0x1E2E Hash - 0x2048C918 ^0x83757B6C
{
	int num;

	if (bParam3 && !func_59(iParam0))
		return;

	num = func_121(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(2, sParam1, iParam2));
	return;
}

int func_66(int iParam0) // Position - 0x1E7E Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_67(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1E8A Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_59(iParam0))
		return;

	num = func_121(iParam0);

	if (bParam1)
	{
		func_123(iParam0, 4);
		func_124(num, true);
		func_125(num, true);
	}
	else
	{
		func_126(iParam0, 4);
		func_125(num, false);
	}

	return;
}

void func_68(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1ED9 Hash - 0x139797B1 ^0x139797B1
{
	int num;

	if (bParam2 && !func_59(iParam0))
		return;

	num = func_121(iParam0);
	func_124(num, bParam1);
	return;
}

BOOL func_69(int iParam0, BOOL bParam1) // Position - 0x1F05 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_59(iParam0))
		return false;

	return !func_119(iParam0, 4);
}

void func_70(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F2A Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_59(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_121(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_127(num);
	*uParam0 = 0;
	return;
}

BOOL func_71(int iParam0, BOOL bParam1) // Position - 0x1F7E Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_59(iParam0))
		return false;

	num = func_121(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

BOOL func_72(int iParam0, BOOL bParam1) // Position - 0x1FB1 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_59(iParam0))
		return false;

	num = func_121(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_73(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2009 Hash - 0x144F6B91 ^0x144F6B91
{
	func_128(iParam0);

	if (bParam3)
		func_129(iParam0, sParam1, iParam2);

	return;
}

void func_74(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, int iParam6, Hash hParam7) // Position - 0x2026 Hash - 0x63AC4944 ^0x63AC4944
{
	if (!bParam1)
		func_130(iParam0, sParam4, iParam5);

	func_131(iParam0, bParam1, iParam2, iParam3, hParam7);
	return;
}

int func_75(int iParam0) // Position - 0x204C Hash - 0x92F940EE ^0x92F940EE
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

float func_76(int iParam0) // Position - 0x20A0 Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_132(iParam0);
	
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
			return func_132(iParam0);
	
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
			return func_132(iParam0);
	
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

BOOL func_77(int iParam0) // Position - 0x236E Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_133(iParam0))
		return false;

	return func_134(iParam0);
}

BOOL func_78(int iParam0) // Position - 0x238A Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_77(18);
	
		case 1:
			return func_77(19);
	
		case 2:
			return func_77(20);
	
		default:
		
	}

	return true;
}

int func_79(int iParam0) // Position - 0x23C8 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_135(Global_40.f_11095.f_11[iParam0]);
}

void func_80(int iParam0, float fParam1, BOOL bParam2) // Position - 0x23E0 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_1() != -1)
		return;

	if (Global_1347477.f_117 || !func_77(31))
		return;

	num = func_79(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_79(iParam0);

	if (func_136(iParam0) && func_137(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_138(num2, fParam1);
		
			if (fParam1 > (float)func_139(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_141(func_140(iParam0), false);
				
					func_142(iParam0, num3, num4);
					func_143(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_81(int iParam0) // Position - 0x24E2 Hash - 0xD13F1127 ^0xD13F1127
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_82(int iParam0) // Position - 0x24ED Hash - 0x21FAF347 ^0xAF7D8F21
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

int func_83(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x2528 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_144(sParam0, sParam1, hParam2);
	return num2;
}

void func_84(Hash hParam0, int iParam1) // Position - 0x258B Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_85() // Position - 0x259E Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

char* func_86(int iParam0) // Position - 0x25BD Hash - 0x81BDC89C ^0x81BDC89C
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "script@rcm@txd@ig@ig2_squirrel_on_mantel";
			break;
	}

	return str;
}

BOOL func_87(var uParam0, int iParam1) // Position - 0x25E2 Hash - 0x2713009E ^0x1A65734B
{
	switch (iParam1)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
				uParam0->f_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("s_squirrelmarston01x"), -1637.467f, -1365.5267f, 83.4029f, true, true, false, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
				return false;
			break;
	}

	return true;
}

BOOL func_88() // Position - 0x2638 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_1() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

char* func_89(int iParam0) // Position - 0x265D Hash - 0x130255A1 ^0x7FD3E7B9
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = "pl_IG2_MAIN_ACTION";
			break;
	
		case 1:
			str = "pl_IG2_PLACE_SQUIRREL";
			break;
	
		case 2:
			str = "pl_IG2_PLACE_SQUIRREL2";
			break;
	
		case 3:
			str = "pl_IG2_PLACE_SQUIRREL3";
			break;
	
		case 4:
			str = "pl_IG2_PLACE_SQUIRREL4";
			break;
	}

	return str;
}

Hash func_90(Hash hParam0, int iParam1) // Position - 0x26BC Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_48(hParam0, 0))
		return 0;

	num = func_49(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_145(hParam0, 1399091007))
	{
		func_146(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_91(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2736 Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_48(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_147())
	{
		func_148(hParam0, iParam1, bParam2, bParam4);
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
		if (bParam3 || bParam4)
			TEXT_LABEL_ASSIGN_STRING(&unk, num == 1 ? "ITEM_GET_PUMP" : "ITEM_GET_PUMP_MULT", 32);
		else if (bParam2 && func_150(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_49(hParam0);
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
	else if (!func_151(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_153(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_152(hParam0)), num), num5);

	if (iParam1 == 1 || func_145(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_152(hParam0));

	func_83(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

struct<2> func_92(Hash hParam0) // Position - 0x2988 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_48(hParam0, 0))
		return unk;

	if (func_145(hParam0, -305066475))
		if (func_1() == -1)
			if (func_145(hParam0, -537818634))
				return func_154(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_154(joaat("deadeye_items"));
	else if (func_145(hParam0, -537818634))
		return func_154(joaat("medicine_items"));

	if (func_145(hParam0, 2084895747))
		return func_154(joaat("lock_breaker_items"));

	return unk3;
}

BOOL func_93(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x2A1C Hash - 0x17E58D7C ^0xB0311DE1
{
	var unk;
	int num;
	int num2;
	var unk19;
	var unk33;
	int i;
	int num3;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return false;

	unk = { func_155(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_157(&unk, func_156(false));

	if (!func_158(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_111(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_159(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_113(num);
	num3 < iParam1;
	return true;
}

BOOL func_94(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2AE7 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_48(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_160(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_161(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_162(hParam0, unk, unk.f_4, bParam4) };
	return func_159(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

BOOL func_95(BOOL bParam0) // Position - 0x2B58 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_1() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_115(bParam0));
}

void func_96(Hash hParam0, int iParam1) // Position - 0x2B76 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_145(hParam0, 606799272))
			func_163(hParam0, iParam1);
	
		if (func_145(hParam0, -1112814642) && func_145(hParam0, -1697809989))
			func_164(hParam0, iParam1, true, false);
	}

	return;
}

void func_97(Hash hParam0) // Position - 0x2BC9 Hash - 0x78302BA0 ^0x558F2DE9
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(hParam0))
		STREAMING::REQUEST_IPL_HASH(hParam0);

	return;
}

BOOL func_98(int iParam0) // Position - 0x2BE1 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_99(int iParam0, var uParam1, var uParam2) // Position - 0x2C00 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_98(iParam0))
		return false;

	switch (iParam0)
	{
		case 0:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP1");
			break;
	
		case 1:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP2");
			break;
	
		case 2:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP3");
			break;
	
		case 3:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP4");
			break;
	
		case 4:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_CHP5");
			break;
	
		case 5:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_GOLDRUSH");
			break;
	
		case 6:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_MINIGAMES");
			break;
	
		case 7:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_B_AND_E");
			break;
	
		case 8:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RCKPT");
			break;
	
		case 9:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_TO_POOR");
			break;
	
		case 10:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_HONOR");
			break;
	
		case 11:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_RC");
			break;
	
		case 12:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BOUNTY");
			break;
	
		case 13:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_UPGR_W");
			break;
	
		case 14:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_BEAR");
			break;
	
		case 15:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_ART");
			break;
	
		case 16:
			*uParam1 = joaat("SP_ACHIEVEMENTS");
			*uParam2 = joaat("ACH_COLLECT");
			break;
	
		default:
			return false;
	}

	return true;
}

BOOL func_100(int iParam0) // Position - 0x2DCF Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_101(int iParam0) // Position - 0x2DE5 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_58(iParam0))
		return -1;

	return func_165(iParam0);
}

int func_102(eStackSize essParam0) // Position - 0x2E01 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(essParam0, 26) & 31 * MISC::IS_BIT_SET(essParam0, 31) ? -1 : 1) + 1898;
}

int func_103(eStackSize essParam0) // Position - 0x2E26 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 22) & 15;
}

int func_104(eStackSize essParam0) // Position - 0x2E39 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 17) & 31;
}

int func_105(eStackSize essParam0) // Position - 0x2E4C Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

int func_106(eStackSize essParam0) // Position - 0x2E5F Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 6) & 63;
}

int func_107(eStackSize essParam0) // Position - 0x2E71 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 0) & 63;
}

int func_108(int iParam0, int iParam1) // Position - 0x2E83 Hash - 0x893AC59E ^0x893AC59E
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

void func_109(eStackSize essParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2F1D Hash - 0xA65AB937 ^0xA65AB937
{
	func_167(essParam0, iParam6);
	func_168(essParam0, iParam5);
	func_169(essParam0, iParam4);
	func_170(essParam0, iParam3);
	func_171(essParam0, iParam2);
	func_172(essParam0, iParam1);
	return;
}

BOOL func_110(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x2F55 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_115(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_111(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2F7C Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_112(Hash hParam0) // Position - 0x2FB7 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

int func_113(int iParam0) // Position - 0x2FD2 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

int func_114(Hash hParam0, BOOL bParam1) // Position - 0x2FF3 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_155(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_157(&unk, func_156(false));

	if (!func_158(&unk, &num, &num2, false))
		return 0;

	func_113(num);
	return num2;
}

int func_115(BOOL bParam0) // Position - 0x3051 Hash - 0x58DE66BA ^0xF4629DE1
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

BOOL func_116(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x3092 Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_52(essParam1) || !func_52(essParam0))
			return true;

	return essParam0 > essParam1;
}

BOOL func_117(int iParam0) // Position - 0x30BF Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_118(BOOL bParam0) // Position - 0x30FD Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_119(int iParam0, int iParam1) // Position - 0x3110 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_120(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Player plParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x3131 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = plParam11;
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_5 = iParam12;
	Global_1945188[iParam0 /*18*/].f_1 = 2;
	Global_1945188[iParam0 /*18*/].f_17 = -1;
	prompt = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam1);

	if (hParam23 != 0)
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(prompt, hParam23);

	HUD::_UI_PROMPT_SET_TEXT(prompt, sParam2);

	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, fParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, plParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, fParam9);
	}

	HUD::_UI_PROMPT_SET_PRIORITY(prompt, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(prompt, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 18, true);

	if (bParam22)
		HUD::_0x53CE46C01A089DA1(prompt, true);

	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, false);
			break;
	
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(prompt, iParam16);
			break;
	
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(prompt, true);
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(prompt);
			break;
	
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(prompt, hParam24);
			break;
	
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(prompt, iParam16, iParam15);
		
			if (bParam25)
				HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 24, true);
			break;
	
		case 7:
			HUD::_UI_PROMPT_SET_MASH_MODE(prompt, iParam17);
			break;
	
		case 8:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(prompt, iParam16, iParam17);
			break;
	
		case 9:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(prompt, iParam17, iParam18, iParam19);
			break;
	
		case 11:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(prompt, 1f / BUILTIN::TO_FLOAT(iParam17), iParam18, 0f, iParam19);
			break;
	
		case 13:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(prompt);
			break;
	
		case 14:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(prompt, iParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(prompt, 10, true);
			break;
	
		case 15:
			HUD::_UI_PROMPT_SET_TARGET_MODE(prompt, 0.5f, 0.1f, 0);
			break;
	}

	HUD::_UI_PROMPT_REGISTER_END(prompt);
	Global_1945188[iParam0 /*18*/].f_3 = prompt;
	func_124(iParam0, true);
	func_125(iParam0, true);
	func_126(iParam0, 128);
	return;
}

int func_121(int iParam0) // Position - 0x33D7 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

BOOL func_122(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6, BOOL bParam7) // Position - 0x33E1 Hash - 0x5B2C7E35 ^0x6A87462A
{
	if (fParam6 < 0f)
		fParam6 = 0f;

	if (MISC::ABSF(fParam0 - uParam3) <= fParam6)
		if (MISC::ABSF(fParam0.f_1 - uParam3.f_1) <= fParam6)
			if (!bParam7 || MISC::ABSF(fParam0.f_2 - uParam3.f_2) <= fParam6)
				return true;

	return false;
}

void func_123(int iParam0, int iParam1) // Position - 0x3436 Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_124(int iParam0, BOOL bParam1) // Position - 0x3469 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_119(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_125(int iParam0, BOOL bParam1) // Position - 0x34C1 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_126(int iParam0, int iParam1) // Position - 0x34EA Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

void func_127(int iParam0) // Position - 0x3512 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_173(iParam0))
		return;

	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_DELETE(Global_1945188[iParam0 /*18*/].f_3);

	Global_1945188[iParam0 /*18*/].f_4 = 0;
	Global_1945188[iParam0 /*18*/] = 1;
	Global_1945188[iParam0 /*18*/].f_16 = 0;
	Global_1945188[iParam0 /*18*/].f_1 = 0;
	Global_1945188[iParam0 /*18*/].f_6 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_12 = { 0f, 0f, 0f };
	Global_1945188[iParam0 /*18*/].f_9 = 0f;
	Global_1945188[iParam0 /*18*/].f_10 = 0;
	Global_1945188[iParam0 /*18*/].f_11 = 0;
	Global_1945188[iParam0 /*18*/].f_2 = 1;
	Global_1945188[iParam0 /*18*/].f_15 = -1f;
	return;
}

void func_128(int iParam0) // Position - 0x35C5 Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_66(1) < iParam0)
		iParam0 = func_66(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_154(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_129(int iParam0, const char* sParam1, int iParam2) // Position - 0x3603 Hash - 0xA31E0DC ^0x7951C131
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

void func_130(int iParam0, const char* sParam1, int iParam2) // Position - 0x3644 Hash - 0x4DF85B80 ^0x72574381
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_131(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x3685 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_174())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_83(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_175(num);
			func_176(num, 0, 0);
		}
	
		func_83(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_177(func_154(joaat("CAREER_CASH")), value);
	}

	return;
}

float func_132(int iParam0) // Position - 0x3761 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_75(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_135(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_178(num7) - func_178(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

BOOL func_133(int iParam0) // Position - 0x37CB Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_134(int iParam0) // Position - 0x37DE Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

int func_135(float fParam0) // Position - 0x3808 Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

	if (fParam0 < (float)&func_7)
		return 4;

	if (fParam0 < (float)800)
		return 5;

	if (fParam0 < (float)1100)
		return 6;

	return 7;
}

int func_136(int iParam0) // Position - 0x3894 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_137(int iParam0) // Position - 0x38CD Hash - 0xB8632262 ^0xB8632262
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

int func_138(float fParam0, float fParam1) // Position - 0x394C Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_135(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_178(num));
	num3 = BUILTIN::TO_FLOAT(func_178(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_139(int iParam0) // Position - 0x39BF Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_179(iParam0, &num))
		return func_178(num);

	switch (iParam0)
	{
		case 0:
			if (func_180())
				return &func_7;
			else
				return 100;
			break;
	
		case 1:
			if (func_180())
				return &func_7;
			else
				return 50;
			break;
	
		case 2:
			if (func_180())
				return &func_7;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_140(int iParam0) // Position - 0x3A4B Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_141(int iParam0, BOOL bParam1) // Position - 0x3A7D Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_181(iParam0, &num, &num2);

	if (!func_182(iParam0, num, num2, bParam1))
		return;

	func_183(num, num2);
	return;
}

void func_142(int iParam0, int iParam1, int iParam2) // Position - 0x3AAA Hash - 0x29688DE6 ^0x87D11BF8
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

	num = num + func_184(iParam0);
	str3 = func_186(func_185(num, iParam2));
	str5 = func_187(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_188(iParam0));
	num2 = func_189(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_190(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_192(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_191(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_143(int iParam0, int iParam1) // Position - 0x3BA2 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

void func_144(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x3BBB Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_145(Hash hParam0, Hash hParam1) // Position - 0x3BEC Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

void func_146(Hash hParam0, var uParam1, var uParam2) // Position - 0x3C1D Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_147() // Position - 0x3E29 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_148(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x3E36 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_149(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3EA0 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_150(Hash hParam0, int iParam1) // Position - 0x3EB7 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_48(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_151(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x3ED6 Hash - 0x92B705D3 ^0xB783F681
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

Hash func_152(Hash hParam0) // Position - 0x3FC9 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_48(hParam0, 0))
		return 0;

	return hParam0;
}

const char* func_153(const char* sParam0, int iParam1) // Position - 0x3FE2 Hash - 0x9E99F03 ^0x49BEA81E
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

struct<2> func_154(int iParam0) // Position - 0x3FFC Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

struct<18> func_155(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x4010 Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_156(BOOL bParam0) // Position - 0x40E2 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_115(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_162(923904168, func_193(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_162(923904168, func_193(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_162(923904168, func_193(bParam0), -740156546, false);
}

void func_157(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4177 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_158(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x4192 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_115(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_159(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0x41B7 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_194(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_195(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_95(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_115(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

struct<5> func_160(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4247 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_193(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_49(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_201(hParam0, -1823706425))
			{
				unk = { func_162(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_201(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_162(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_199(bParam1) };
		
			switch (func_200(hParam0))
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
				unk = { func_162(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_156(bParam1) };
		
			if (bParam2 && func_196(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_197(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_197(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_198(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_195(unk, &unk28, bParam1, false))
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

BOOL func_161(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4504 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_194(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_95(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_115(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

struct<4> func_162(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x4550 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_48(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_115(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

void func_163(Hash hParam0, int iParam1) // Position - 0x4581 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_1() == -1)
	{
		if (func_202(43))
		{
			if (func_145(hParam0, 412399755))
			{
				func_203(joaat("exotic_stage_01"));
			
				if (func_204() == 0)
				{
					func_29(false, 10);
					num = func_205(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_206(hParam0) < func_207(hParam0))
							func_208(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_202(44))
		{
			if (func_145(hParam0, 709057512))
			{
				func_203(joaat("exotic_stage_02"));
			
				if (func_204() == 1)
				{
					func_29(false, 10);
					num = func_205(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_206(hParam0) < func_207(hParam0))
							func_208(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_202(45))
		{
			if (func_145(hParam0, -1478961327))
			{
				func_203(joaat("exotic_stage_03"));
			
				if (func_204() == 2)
				{
					func_29(false, 10);
					num = func_205(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_206(hParam0) < func_207(hParam0))
							func_208(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_202(46))
		{
			if (func_145(hParam0, -1238404098))
			{
				func_203(joaat("exotic_stage_04"));
			
				if (func_204() == 3)
				{
					func_29(false, 10);
					num = func_205(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_206(hParam0) < func_207(hParam0))
							func_208(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_202(47))
		{
			if (func_145(hParam0, 1160548794))
			{
				func_203(joaat("exotic_stage_05"));
			
				if (func_204() == 4)
				{
					func_29(false, 10);
					num = func_205(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_206(hParam0) < func_207(hParam0))
							func_208(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

void func_164(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4865 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_21(func_209(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_210(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_211(hParam0, collectableItemHash, bParam3);
	}

	return;
}

int func_165(int iParam0) // Position - 0x48C5 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_212(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

var func_166(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4906 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_167(eStackSize essParam0, int iParam1) // Position - 0x491D Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*essParam0 = *essParam0 - *essParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*essParam0 = *essParam0 | -2147483648;
	}
	else
	{
		*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*essParam0 = *essParam0 - *essParam0 & -2147483648;
	}

	return;
}

void func_168(eStackSize essParam0, int iParam1) // Position - 0x49A3 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*essParam0 = *essParam0 - *essParam0 & 62914560;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_169(eStackSize essParam0, int iParam1) // Position - 0x49DF Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_103(*essParam0);
	num2 = func_102(*essParam0);

	if (iParam1 < 1 || iParam1 > func_108(num, num2))
		return;

	*essParam0 = *essParam0 - *essParam0 & 4063232;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_170(eStackSize essParam0, int iParam1) // Position - 0x4A32 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*essParam0 = *essParam0 - *essParam0 & 126976;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_171(eStackSize essParam0, int iParam1) // Position - 0x4A6D Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*essParam0 = *essParam0 - *essParam0 & 4032;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_172(eStackSize essParam0, int iParam1) // Position - 0x4AA6 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*essParam0 = *essParam0 - *essParam0 & 63;
	*essParam0 = *essParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_173(int iParam0) // Position - 0x4ADE Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_119(iParam0, 2);
}

BOOL func_174() // Position - 0x4AED Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_213())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_175(int iParam0) // Position - 0x4B04 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_214(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_176(int iParam0, const char* sParam1, int iParam2) // Position - 0x4B38 Hash - 0x56940320 ^0xA92DCC7D
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_174())
		func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_83(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

void func_177(var uParam0, var uParam1, int iParam2) // Position - 0x4BA4 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

int func_178(int iParam0) // Position - 0x4BB4 Hash - 0xD14E7A6C ^0x65ACC420
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
			return &func_7;
	
		case 6:
			return 800;
	
		case 7:
			return 1100;
	
		default:
		
	}

	return 0;
}

BOOL func_179(int iParam0, var uParam1) // Position - 0x4C2A Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_180() // Position - 0x4C33 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_181(int iParam0, var uParam1, var uParam2) // Position - 0x4C3C Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_182(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4C58 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_215(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_216(iParam0))
		return false;

	if (func_217(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_218(iParam0, 1) || func_219(32768))
		if (!func_218(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_220())
		return false;

	return true;
}

void func_183(int iParam0, int iParam1) // Position - 0x4CFA Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

int func_184(int iParam0) // Position - 0x4D1E Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_115(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_185(int iParam0, int iParam1) // Position - 0x4D80 Hash - 0xD5391B76 ^0x8E1BF75E
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

const char* func_186(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x4DB2 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_187(int iParam0) // Position - 0x4DC6 Hash - 0x277D0C4A ^0xD56CF088
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

char* func_188(int iParam0) // Position - 0x4E00 Hash - 0x277D0C4A ^0xDE32506A
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

int func_189(int iParam0) // Position - 0x4E3A Hash - 0x21FAF347 ^0x467E3BE5
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

int func_190(int iParam0) // Position - 0x4E75 Hash - 0x5163992 ^0x5163992
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

int func_191(int iParam0) // Position - 0x4EA4 Hash - 0x21FAF347 ^0xA8C8F0DA
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

int func_192(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0x4EDF Hash - 0x51CE9407 ^0x19439D00
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

struct<4> func_193(BOOL bParam0) // Position - 0x4F56 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_162(joaat("character"), func_221(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_194(Hash hParam0) // Position - 0x4F72 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_195(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x4F88 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_115(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_196(Hash hParam0, BOOL bParam1) // Position - 0x4FB8 Hash - 0x62864AB ^0xBC339691
{
	if (func_200(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_77(24);
		else
			return true;

	return false;
}

BOOL func_197(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x4FF1 Hash - 0x4285A587 ^0x4285A587
{
	return func_222(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_198(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x5009 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_223(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_199(BOOL bParam0) // Position - 0x502A Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_115(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_162(271701509, func_193(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_162(271701509, func_193(bParam0), 12999093, false);
}

Hash func_200(Hash hParam0) // Position - 0x508E Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_48(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_201(Hash hParam0, Hash hParam1) // Position - 0x50B9 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_200(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_202(int iParam0) // Position - 0x5118 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_1() != -1)
		return false;

	return func_41(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_203(Hash hParam0) // Position - 0x513B Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_224(hParam0))
		func_226(func_225(hParam0));

	return;
}

int func_204() // Position - 0x5157 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_224(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_205(Hash hParam0, int iParam1, int iParam2) // Position - 0x518F Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_206(hash);
	num3 = func_206(hash2);
	num4 = func_206(hash3);

	if (iParam2 != 2)
		num5 = func_206(hash4);

	num6 = func_207(hash);
	num7 = func_207(hash2);
	num8 = func_207(hash3);

	if (iParam2 != 2)
		num9 = func_207(hash4);

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

	if (iParam2 != 2)
		if (num5 >= num9)
			num = num + num9;
		else
			num = num + num5;

	return num;
}

int func_206(Hash hParam0) // Position - 0x5308 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_21(hParam0, 1, false))
		num = func_51(hParam0, false, false);

	return num;
}

int func_207(Hash hParam0) // Position - 0x5327 Hash - 0xEED5739D ^0xEED5739D
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

void func_208(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x5400 Hash - 0x2D6CF941 ^0xAC09E0AF
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
		
			if (func_85() && func_227(38) || func_202(38))
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
			if (func_85() && func_227(39) || func_202(39))
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
			if (func_85() && func_227(41) || func_202(41))
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
			num = func_45(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_85() && func_227(49) || func_202(49))
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
			num = func_45(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_228(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_229(iParam0, hash, hash2);
	func_230(iParam0, hash, unk, str5, str4);
	func_231(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_232(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_233(iParam0, hash, hash2, iParam6);
	func_234(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

Hash func_209(Hash hParam0, int iParam1) // Position - 0x583D Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_39(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_210(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x586C Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_209(hParam1, 5) || hParam0 == func_209(hParam1, 6) || hParam0 == func_209(hParam1, 7) || hParam0 == func_209(hParam1, 8) || hParam0 == func_209(hParam1, 9))
	{
		func_235(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_208(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_236(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_211(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x58EE Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_209(hParam1, 5) || hParam0 == func_209(hParam1, 6) || hParam0 == func_209(hParam1, 7) || hParam0 == func_209(hParam1, 8) || hParam0 == func_209(hParam1, 9))
	{
		if (func_235(hParam1, hParam0, &num, false, 0, false))
		{
			func_208(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_236(51, 0, 0, num, func_45(hParam1, 20), 1, 0);
		}
		else
		{
			func_208(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_236(51, 0, 0, num, func_45(hParam1, 20), 1, 0);
		}
	}

	return;
}

int func_212(int iParam0) // Position - 0x59AF Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_213() // Position - 0x5A30 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_214(int iParam0) // Position - 0x5A41 Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_154(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

BOOL func_215(int iParam0, int iParam1) // Position - 0x5A74 Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_1() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_216(int iParam0) // Position - 0x5AA7 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_1() != -1)
		if (func_218(iParam0, 4))
			return false;
	else if (func_218(iParam0, 2))
		return false;

	return true;
}

BOOL func_217(int iParam0) // Position - 0x5AD7 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_218(iParam0, 65536) && !func_218(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_218(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_218(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_218(int iParam0, int iParam1) // Position - 0x5B83 Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_219(int iParam0) // Position - 0x5B9C Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_220() // Position - 0x5BAF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

struct<4> func_221() // Position - 0x5BBE Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_222(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x5BCA Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_48(hParam0, 0))
		return 0;

	guid = { func_162(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_115(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_223(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x5C12 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_115(false);
	*panParam1 = { func_162(hParam0, func_156(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_224(Hash hParam0) // Position - 0x5C57 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_225(Hash hParam0) // Position - 0x5C67 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_226(int iParam0) // Position - 0x5CAC Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_227(int iParam0) // Position - 0x5CC7 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_1() != -1)
		return false;

	if (!func_42(iParam0))
		return false;

	return func_237(Global_1347702[iParam0 /*49*/].f_15);
}

char* func_228(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5CF7 Hash - 0xF20034E5 ^0xC2F9FC9B
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_238() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_239(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_240(), 12);
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
			else if (func_241() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_242(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_241(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_45(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_243(), 13);
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
			else if (func_244() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_245(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_244(), 10);
			break;
	}

	return sParam3;
}

BOOL func_229(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x5FE4 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_230(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x6091 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_231(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x60BD Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_232(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x610C Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_246(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_21(hash, 1, false) || func_248(func_247(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_246(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_246(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_241() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_250(i)), func_250(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_242() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_250(i)), func_250(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_250(i)), func_250(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_209(iParam3, func_251(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_206(hash) - iParam7 >= func_45(iParam3, func_252(i));
				else
					flag = func_206(hash) >= func_45(iParam3, func_252(i));
			else if (hParam4 == hash)
				flag = func_206(hash) + iParam7 >= func_45(iParam3, func_252(i));
			else
				flag = func_206(hash) >= func_45(iParam3, func_252(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_254(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
				flag = true;
			else if (iParam5 == 8)
				flag = true;
			else
				flag = false;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, hParam2, 0)), flag, true, false);
		}
	
		if (hParam2 == joaat("rock_carvings"))
		{
			if (i == 0)
			{
				flag = func_244() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_256(i)), func_256(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_245() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_256(i)), func_256(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_256(i)), func_256(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_209(iParam3, func_251(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_206(hash) - iParam7 >= 1;
				else
					flag = func_257(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_257(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_258(hash)), func_258(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_233(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x6481 Hash - 0x3C34F826 ^0x64F21A3B
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
		if (func_243() >= 13)
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

BOOL func_234(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x658A Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_58(func_259(0)) && func_260(0) == 1 || func_260(0) == 8 || func_260(0) == 6)
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

BOOL func_235(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x662A Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_257(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_257(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_257(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_257(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_257(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_257(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash) && func_257(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_257(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_257(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_257(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash) && func_257(hash2) && func_257(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_257(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_257(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_257(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_257(hash) && func_257(hash2) && func_257(hash3) && func_257(hash4))
			return true;
	}

	return false;
}

void func_236(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6AEF Hash - 0xD806FABF ^0x4D165CF6
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
		
			if (func_85() && func_227(38) || func_202(38))
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
		
			if (func_85() && func_227(39) || func_202(39))
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
		
			if (func_85() && func_227(49) || func_202(49))
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
		if (func_85() && func_227(38) || func_202(38))
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
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_262(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_261(iParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_85() && func_227(39) || func_202(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_85() && func_227(49) || func_202(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_192(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

BOOL func_237(int iParam0) // Position - 0x709D Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_101(iParam0);
	return num == 3 || num == 4;
}

int func_238() // Position - 0x70BB Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_21(func_263(i), 1, false))
			num = num + 1;
	}

	return num;
}

int func_239() // Position - 0x70F0 Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_264(Global_40.f_12019);
}

int func_240() // Position - 0x7102 Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_263(i);
	
		if (func_21(hash, 1, false) || func_248(func_247(hash)))
			num = num + 1;
	}

	return num;
}

int func_241() // Position - 0x714B Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_265(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_242() // Position - 0x7184 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_266(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_243() // Position - 0x71BD Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_254(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_244() // Position - 0x71F6 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

int func_245() // Position - 0x7208 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_246(int iParam0) // Position - 0x721A Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_247(Hash hParam0) // Position - 0x72D3 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_248(BOOL bParam0) // Position - 0x7369 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x737C Hash - 0xA17D549C ^0xA8EE5BA8
{
	switch (iParam0)
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

char* func_250(int iParam0) // Position - 0x742B Hash - 0x277D0C4A ^0x5EE10D0
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

int func_251(int iParam0) // Position - 0x7465 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_252(int iParam0) // Position - 0x74AA Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(Hash hParam0) // Position - 0x74F3 Hash - 0xA17D549C ^0xF3A2FCCF
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

BOOL func_254(Hash hParam0) // Position - 0x7600 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x7610 Hash - 0xA17D549C ^0xB5F44D2E
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

char* func_256(int iParam0) // Position - 0x76CC Hash - 0x277D0C4A ^0x21E7C866
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

BOOL func_257(Hash hParam0) // Position - 0x7706 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_267(hParam0) && func_21(hParam0, 1, false))
		return 1;
	else if (func_268(hParam0) && func_269(hParam0))
		return 1;

	return 0;
}

char* func_258(Hash hParam0) // Position - 0x7744 Hash - 0x1377EBA6 ^0x3B38F66D
{
	if (!func_48(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_152(hParam0));
}

int func_259(int iParam0) // Position - 0x7767 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_260(int iParam0) // Position - 0x7779 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

int func_261(int iParam0) // Position - 0x778D Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_262(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0x77A0 Hash - 0xB88D7AA5 ^0x36259347
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

Hash func_263(int iParam0) // Position - 0x7801 Hash - 0xB8EC44B7 ^0x693BD882
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

int func_264(BOOL bParam0) // Position - 0x78BA Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_265(Hash hParam0) // Position - 0x78DF Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_266(Hash hParam0) // Position - 0x78EF Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_267(Hash hParam0) // Position - 0x78FF Hash - 0xB8632262 ^0xB8632262
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

int func_268(Hash hParam0) // Position - 0x79A6 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_269(Hash hParam0) // Position - 0x79DF Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_270(&entity, 0, i, &model) && !func_270(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_271(entity, &model);
		
			if (func_48(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

BOOL func_270(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x7A4B Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_272(iParam1) && !func_273(iParam1))
		ped = func_274(iParam1);
	else
		return false;

	func_275(uParam3);
	num = func_276(iParam2);

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

void func_271(Entity eParam0, var uParam1) // Position - 0x7AEA Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_277(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_278(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

BOOL func_272(int iParam0) // Position - 0x7B34 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_279(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_273(int iParam0) // Position - 0x7B6C Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_279(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_272(iParam0))
		return false;

	ped = func_274(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_274(int iParam0) // Position - 0x7BC0 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_279(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_275(var uParam0) // Position - 0x7BEC Hash - 0x6843C143 ^0xA531F0D1
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

int func_276(int iParam0) // Position - 0x7C93 Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_277(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x7CCB Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_278(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x7D40 Hash - 0xF684EE16 ^0xD8F147D7
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

int func_279(int iParam0) // Position - 0x7D69 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

