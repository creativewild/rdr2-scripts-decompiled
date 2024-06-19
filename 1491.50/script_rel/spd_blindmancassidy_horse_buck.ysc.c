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
	int iLocal_14 = 0;
	Ped pedLocal_15 = 0;
	int iLocal_16 = 0;
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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4BABD440 ^0x2232F0E3
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
		func_1();

	while (true)
	{
		BUILTIN::WAIT(0);
	
		if (func_3(4, func_2(4), &uLocal_17, pedLocal_15))
			func_1();
	
		switch (iLocal_14)
		{
			case 0:
				func_4(&uLocal_17);
				func_5(1);
				break;
		
			case 1:
				func_5(2);
				break;
		
			case 2:
				if (func_6())
				{
					if (!func_7(4, 536870912))
					{
						func_8(4, 536870912, true);
						func_5(3);
					}
				}
				break;
		
			case 3:
				if (func_9())
					func_5(4);
				break;
		
			case 4:
				func_1();
				break;
		}
	}

	return;
}

void func_1() // Position - 0xB7 Hash - 0x6F216258 ^0x46B7766
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_15))
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_15);

	func_10(&uLocal_17);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_2(int iParam0) // Position - 0xD9 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11623[iParam0 /*8*/];
}

BOOL func_3(int iParam0, int iParam1, var uParam2, Ped pedParam3) // Position - 0xEB Hash - 0x540B5813 ^0x255543BD
{
	eStackSize stackSize;
	eStackSize stackSize2;
	eStackSize stackSize3;
	BOOL flag;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (uParam2->f_1)
			if (func_11(0) == 1 || func_11(0) == 2 || func_11(0) == 8 || func_12(Global_1935630, 2048))
				func_13(uParam2, 2);
	
		if (uParam2->f_2)
			if (func_11(0) == 11)
				func_13(uParam2, 4);
	
		if (uParam2->f_4)
			if (func_11(0) == 6)
				func_13(uParam2, 8);
	
		if (uParam2->f_5)
			if (Global_1394141.f_1328)
				func_13(uParam2, 16);
	}

	if (MISC::GET_FRAME_COUNT() % 30 == 0)
	{
		if (uParam2->f_6)
		{
			if (!(func_14(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && func_14(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				stackSize = func_15();
				stackSize2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				stackSize3 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
			
				if (func_14(stackSize3) > func_14(stackSize2))
					if (func_14(stackSize) > func_14(stackSize3) + 1 || func_14(stackSize) < func_14(stackSize2))
						func_13(uParam2, 32);
				else if (func_14(stackSize) > func_14(stackSize3) + 1 && func_14(stackSize) < func_14(stackSize2))
					func_13(uParam2, 32);
			}
		}
	
		if (uParam2->f_7)
		{
			flag = false;
		
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
					if (func_16(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_16(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]) || func_17(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || func_17(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
						flag = true;
			
				if (!flag)
					if (!func_18(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
						func_13(uParam2, 64);
			}
		}
	
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (func_19(&pedParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || func_20(&pedParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!func_21(&(uParam2->f_13)))
					{
						func_22(&(uParam2->f_13), 0f);
					}
					else if (func_23(&(uParam2->f_13)) >= uParam2->f_16)
					{
						func_24(&(uParam2->f_13));
						func_13(uParam2, 512);
					}
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (func_21(&(uParam2->f_13)))
						func_24(&(uParam2->f_13));
				
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
	
		if (uParam2->f_9)
			if (func_25())
				func_13(uParam2, 1024);
	
		if (uParam2->f_10)
			if (func_26())
				func_13(uParam2, 2048);
	
		if (func_12(Global_1935630, 16384) || Global_1430231.f_4)
			func_13(uParam2, 128);
	
		if (func_27(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
			func_13(uParam2, 256);
	}

	if (func_28(*uParam2, 2) || func_28(*uParam2, 4) || func_28(*uParam2, 8) || func_28(*uParam2, 16) || func_28(*uParam2, 32) || func_28(*uParam2, 64) || func_28(*uParam2, 128) || func_28(*uParam2, 256) || func_28(*uParam2, 512) || func_28(*uParam2, 1024) || func_28(*uParam2, 2048))
		return true;

	return false;
}

void func_4(var uParam0) // Position - 0x509 Hash - 0xF1BCCAC6 ^0x1CB2916A
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
	return;
}

void func_5(int iParam0) // Position - 0x558 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_14 = iParam0;
	return;
}

BOOL func_6() // Position - 0x564 Hash - 0x3720D60F ^0xDAEF599C
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return false;

	if (!PED::IS_PED_ON_MOUNT(Global_35) || !PED::IS_PED_FULLY_ON_MOUNT(Global_35, true))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
		return false;

	if (PED::_GET_ACTIVE_ANIMAL_OWNER(PED::GET_MOUNT(Global_35)) == Global_35)
		return false;

	if (func_29(PED::GET_MOUNT(Global_35), 1041577989))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_15))
	{
		pedLocal_15 = PED::GET_MOUNT(Global_35);
		iLocal_16 = MISC::GET_GAME_TIMER() + 2000;
		return false;
	}

	if (MISC::GET_GAME_TIMER() < iLocal_16)
		return false;

	TASK::TASK_HORSE_ACTION(PED::GET_MOUNT(Global_35), 2, 0, 0);
	return true;
}

BOOL func_7(int iParam0, int iParam1) // Position - 0x612 Hash - 0x331B7828 ^0x84AB2DAA
{
	return func_30(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

void func_8(int iParam0, int iParam1, BOOL bParam2) // Position - 0x62C Hash - 0x97FB121D ^0x1129C9CA
{
	if (bParam2)
		func_31(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);
	else
		func_32(&(Global_40.f_11623[iParam0 /*8*/].f_1), iParam1);

	return;
}

BOOL func_9() // Position - 0x660 Hash - 0xC6FB5787 ^0x3E9FDAC4
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_15))
		return false;

	if (func_29(PED::GET_MOUNT(Global_35), 1041577989))
		return false;

	if (func_29(pedLocal_15, 518218985))
		return true;

	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(pedLocal_15, false);
	TASK::TASK_FLEE_PED(pedLocal_15, Global_35, 3, 0, -1f, -1, 0);
	return false;
}

void func_10(var uParam0) // Position - 0x6B5 Hash - 0xDFB6596B ^0xFDA355C
{
	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_18))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_18);

	if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_19))
		ITEMSET::DESTROY_ITEMSET(uParam0->f_19);

	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_20))
		VOLUME::DELETE_VOLUME(uParam0->f_20);

	if (func_21(&(uParam0->f_13)))
		func_24(&(uParam0->f_13));

	return;
}

int func_11(int iParam0) // Position - 0x709 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_12(int iParam0, int iParam1) // Position - 0x71D Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_13(var uParam0, int iParam1) // Position - 0x72C Hash - 0xF55E891F ^0xF55E891F
{
	func_33(uParam0, iParam1);
	return;
}

int func_14(eStackSize essParam0) // Position - 0x73C Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

eStackSize func_15() // Position - 0x74F Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

BOOL func_16(eStackSize essParam0) // Position - 0x75B Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_34(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_17(eStackSize essParam0) // Position - 0x787 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(essParam0 > -1 && essParam0 <= 80))
		return false;

	return func_35(Global_1835011[essParam0 /*74*/].f_1);
}

BOOL func_18(int iParam0) // Position - 0x7B3 Hash - 0x1EF5D3F8 ^0x1EF5D3F8
{
	int num;

	num = func_36();

	switch (iParam0)
	{
		case 0:
			switch (num)
			{
				case joaat("highpressure"):
				case joaat("SUNNY"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 1:
			switch (num)
			{
				case joaat("OVERCAST"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("SUNNY"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 2:
			switch (num)
			{
				case joaat("DRIZZLE"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("highpressure"):
				case joaat("overcastdark"):
				case joaat("SNOWLIGHT"):
				case joaat("clouds"):
				case joaat("Misty"):
				case joaat("SUNNY"):
				case joaat("snowclearing"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 3:
			switch (num)
			{
				case joaat("DRIZZLE"):
				case joaat("THUNDER"):
				case joaat("OVERCAST"):
				case joaat("Fog"):
				case joaat("Shower"):
				case joaat("snow"):
				case joaat("highpressure"):
				case joaat("sleet"):
				case joaat("overcastdark"):
				case joaat("clouds"):
				case joaat("rain"):
				case joaat("Misty"):
				case joaat("SUNNY"):
				case joaat("snowclearing"):
					return true;
			
				default:
					return false;
			}
			break;
	
		case 4:
			return true;
	
		case 5:
			switch (num)
			{
				case joaat("Fog"):
				case joaat("Misty"):
					return true;
			}
			break;
	}

	return false;
}

int func_19(var uParam0, var uParam1, float fParam2, float fParam3) // Position - 0x931 Hash - 0xEC5EE76 ^0xF05CBEF1
{
	var entityForwardVector;
	var unk3;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	unk3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { fParam2, fParam2, fParam2 }) };

	if (func_37(uParam1, unk3, fParam3))
		return 1;

	return 0;
}

int func_20(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5) // Position - 0x97D Hash - 0x6D0071AD ^0xDBED4C65
{
	float scaleX;
	Ped ped;
	var entityForwardVector;
	Vector3 vector;
	var entityCoords;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
	
		return 0;
	}

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vector = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + (entityForwardVector * { fParam3, fParam3, fParam3 }) };

	if (!func_38(uParam2, &ped, vector, fParam3, fParam4))
	{
		if (VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1);
			POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(*uParam1);
			VOLUME::DELETE_VOLUME(*uParam1);
		}
	
		return 0;
	}
	else
	{
		if (!VOLUME::DOES_VOLUME_EXIST(*uParam1))
		{
			scaleX = fParam4 + 1f;
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vector, 0f, 0f, 0f, scaleX, scaleX, scaleX, "SPDClearWagonsMount");
			POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	
		if (!func_39(ped, false))
			func_40(&ped, entityCoords, 1083179008);
	
		return 1;
	}

	return 0;
}

BOOL func_21(var uParam0) // Position - 0xA83 Hash - 0x5001E582 ^0x5001E582
{
	return func_41(*uParam0, 1);
}

void func_22(var uParam0, float fParam1) // Position - 0xA93 Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_42() - fParam1;
	func_43(uParam0, 1);
	func_44(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

int func_23(var uParam0) // Position - 0xAB9 Hash - 0xE440ADBD ^0x7BE35012
{
	if (!func_21(uParam0))
		return BUILTIN::ROUND(uParam0->f_1 * 1000f);

	if (func_45(uParam0))
		return BUILTIN::ROUND(uParam0->f_2 * 1000f);

	return func_46() - BUILTIN::ROUND(uParam0->f_1 * 1000f);
}

void func_24(var uParam0) // Position - 0xB0C Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_25() // Position - 0xB22 Hash - 0x4228A1C2 ^0x341213A7
{
	return Global_1392040.f_6;
}

BOOL func_26() // Position - 0xB30 Hash - 0xD6D2CD3 ^0x182E32DD
{
	if (Global_1914319.f_18941.f_17)
		return true;

	return false;
}

BOOL func_27(BOOL bParam0, int iParam1) // Position - 0xB49 Hash - 0x320397CF ^0x320397CF
{
	return func_30(*bParam0, iParam1);
}

BOOL func_28(int iParam0, int iParam1) // Position - 0xB5A Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_29(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0xB69 Hash - 0xBA023B92 ^0x16E0B707
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

BOOL func_30(BOOL bParam0, int iParam1) // Position - 0xBC2 Hash - 0x178D9C09 ^0x178D9C09
{
	return bParam0 && iParam1 != false;
}

void func_31(BOOL bParam0, int iParam1) // Position - 0xBD1 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

void func_32(BOOL bParam0, int iParam1) // Position - 0xBE2 Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_33(var uParam0, int iParam1) // Position - 0xBF7 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_34(int iParam0) // Position - 0xC08 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_47(iParam0);
	return num == 3 || num == 4;
}

BOOL func_35(int iParam0) // Position - 0xC26 Hash - 0x8EF26C67 ^0x9855652A
{
	int num;

	if (Global_1572887.f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
			return 0;
	
		num = Global_12106[iParam0 /*7*/].f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
			return 0;
	
		num = func_48(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

var func_36() // Position - 0xC91 Hash - 0x1372AFBD ^0xAE723118
{
	var weatherType1;
	var weatherType2;
	float percentWeather2;
	var unk;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.75f)
		unk = weatherType1;
	else
		unk = weatherType2;

	return unk;
}

BOOL func_37(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Position - 0xCBB Hash - 0x51EADDF ^0xFEE9A233
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	if (ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}

	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

BOOL func_38(var uParam0, var uParam1, Vector3 vParam2, var uParam3, var uParam4, float fParam5, float fParam6) // Position - 0xCFB Hash - 0x34D99C7D ^0x8190E5BB
{
	ScrHandle indexedItemInItemset;
	int i;
	int entitiesNearPoint;

	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);

	entitiesNearPoint = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam2, fParam6, *uParam0, 1);

	for (i = 0; i < entitiesNearPoint; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
		*uParam1 = indexedItemInItemset;
	
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*uParam1)))
				{
					if (func_49(Global_35, *uParam1, false))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
	}

	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

BOOL func_39(Ped pedParam0, BOOL bParam1) // Position - 0xD90 Hash - 0x4B9AB644 ^0x1F788987
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (bParam1)
			return PED::IS_PED_DEAD_OR_DYING(pedParam0, true);
		else
			return ENTITY::IS_ENTITY_DEAD(pedParam0);

	return true;
}

void func_40(var uParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4) // Position - 0xDBD Hash - 0x186008F8 ^0xE9F0BC58
{
	if (!func_29(*uParam0, 518218985))
	{
		TASK::CLEAR_PED_TASKS(*uParam0, true, false);
		TASK::TASK_FLEE_COORD(*uParam0, vParam1, 6, 0, iParam4, -1, 0);
	}

	return;
}

BOOL func_41(int iParam0, int iParam1) // Position - 0xDEF Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_42() // Position - 0xDFE Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

void func_43(var uParam0, int iParam1) // Position - 0xE30 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_44(var uParam0, int iParam1) // Position - 0xE41 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

BOOL func_45(var uParam0) // Position - 0xE56 Hash - 0x39705408 ^0x39705408
{
	return func_41(*uParam0, 2);
}

int func_46() // Position - 0xE66 Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

int func_47(int iParam0) // Position - 0xE84 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_50(iParam0))
		return -1;

	return func_48(iParam0);
}

int func_48(int iParam0) // Position - 0xEA0 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_51(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_49(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0xEE1 Hash - 0xF928BABC ^0xEB0637CA
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1) && !ENTITY::IS_ENTITY_DEAD(pedParam1))
			if (bParam2)
				return PED::IS_PED_FULLY_ON_MOUNT(pedParam0, true) && PED::GET_MOUNT(pedParam0) == pedParam1;
			else
				return PED::IS_PED_ON_MOUNT(pedParam0) && PED::GET_MOUNT(pedParam0) == pedParam1;

	return false;
}

BOOL func_50(int iParam0) // Position - 0xF4B Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_51(int iParam0) // Position - 0xF7E Hash - 0x6EC15CF9 ^0xE613EBE0
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

