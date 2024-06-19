#region Local Var
	int iLocal_0 = 0;
	char* sLocal_1 = 0;
	var uLocal_2 = 2;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	char* sLocal_5 = 0;
	AnimScene ansLocal_6 = 0;
	int iLocal_7 = 2;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	ePedType eptLocal_10 = PED_TYPE_PLAYER_0;
	var uLocal_11 = 2;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 2;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	Entity eLocal_21 = 0;
	Hash hLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	Entity eLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = -1;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 1097859072;
	var uLocal_46 = 1000;
	var uLocal_47 = 1067450368;
	var uLocal_48 = 5000;
	var uLocal_49 = 42;
	var uLocal_50 = 1103626240;
	var uLocal_51 = 1077936128;
	var uLocal_52 = 1106247680;
	var uLocal_53 = 1103101952;
	var uLocal_54 = 1097859072;
	var uLocal_55 = 1103626240;
	int iLocal_56 = 0;
	Volume volLocal_57 = 0;
	var uLocal_58 = 2;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	Volume volLocal_61 = 0;
	BOOL bLocal_62 = 0;
	BOOL bLocal_63 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x578EADC3 ^0x2ED147D9
{
	iLocal_27 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	while (!func_2())
	{
		BUILTIN::WAIT(0);
	}

	func_1();
	return;
}

void func_1() // Position - 0x2D Hash - 0x78D43EE0 ^0x68419099
{
	int i;

	if (eLocal_26 != 0)
		if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_26))
			ENTITY::_UNPIN_MAP_ENTITY(eLocal_26);

	if (bLocal_63)
	{
		func_3();
		bLocal_63 = false;
	}

	if (STREAMING::IS_MODEL_VALID(eptLocal_10))
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(eptLocal_10);

	if (STREAMING::IS_MODEL_VALID(hLocal_22))
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_22);

	for (i = 0; i < iLocal_7; i = i + 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(uLocal_58[i]))
			VOLUME::DELETE_VOLUME(uLocal_58[i]);
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_7[i]))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_7[i]);
	
		if (PHYSICS::DOES_ROPE_EXIST(uLocal_18[i]))
			PHYSICS::DELETE_ROPE(&uLocal_18[i]);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_6))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_6);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_57))
		VOLUME::DELETE_VOLUME(volLocal_57);

	if (VOLUME::DOES_VOLUME_EXIST(volLocal_61))
		VOLUME::DELETE_VOLUME(volLocal_61);

	if (iLocal_27 != -1)
	{
		func_4();
		AUDIO::RELEASE_SOUND_ID(iLocal_27);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2() // Position - 0x10D Hash - 0xB5B40FF4 ^0xB5B40FF4
{
	if (func_5())
		return true;

	if (!bLocal_62)
		bLocal_62 = func_6();

	switch (func_7())
	{
		case 0:
			func_8();
			func_9(1);
			break;
	
		case 1:
			func_10();
			func_9(2);
			break;
	
		case 2:
			if (func_11())
				func_9(3);
			break;
	
		case 3:
			if (func_12())
				func_9(4);
			break;
	
		case 4:
			if (func_13() && func_14())
			{
				if (func_15(12))
				{
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
	
		case 5:
			if (func_17())
				func_9(6);
			break;
	
		case 6:
			if (func_18())
				func_9(8);
			break;
	
		case 7:
			if (func_19())
				func_9(10);
		
			if (func_20())
			{
				bLocal_62 = false;
			
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_6))
					ANIMSCENE::RESET_ANIM_SCENE(ansLocal_6, 0);
			
				func_21(volLocal_61, false, false, true, true, false);
			
				if (func_15(12))
				{
					func_22();
					func_16();
					func_9(9);
				}
				else
				{
					func_9(5);
				}
			}
			break;
	
		case 8:
			if (func_19())
				func_9(10);
		
			func_23();
		
			if (bLocal_62)
			{
				if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_6))
					if (ANIMSCENE::GET_ANIM_SCENE_PHASE(ansLocal_6) < 0.99f)
						return false;
			
				func_4();
				func_24();
				func_9(7);
			}
		
			if (func_25())
			{
				func_24();
				func_9(7);
			}
			break;
	
		case 9:
			if (func_19())
				func_9(10);
		
			if (bLocal_62)
				func_9(7);
			break;
	
		case 10:
			func_4();
			func_26();
			func_9(11);
			break;
	
		case 11:
			if (func_20())
				return true;
			break;
	}

	return false;
}

void func_3() // Position - 0x2E1 Hash - 0xF2003801 ^0xAF8734D7
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_1934765.f_275[i /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			Global_1934765.f_286 = Global_1934765.f_286 + Global_1934765.f_275[i /*2*/].f_1;
			Global_1934765.f_275[i /*2*/] = 0;
			Global_1934765.f_275[i /*2*/].f_1 = 0;
			func_27();
			return;
		}
	}

	return;
}

void func_4() // Position - 0x34A Hash - 0x13FC1A50 ^0x3A93B04E
{
	if (!AUDIO::_HAS_SOUND_ID_FINISHED(iLocal_27))
		AUDIO::_STOP_SOUND_WITH_ID(iLocal_27);

	return;
}

BOOL func_5() // Position - 0x362 Hash - 0x8D05867F ^0x8D05867F
{
	if (func_28() != -1)
		return true;

	if (func_29() != 105)
		return true;

	if (func_30(21) || func_31(21))
		return true;

	return false;
}

BOOL func_6() // Position - 0x39D Hash - 0xFA7D79A7 ^0x461EFEB4
{
	if (MISC::GET_FRAME_COUNT() % 60 == 0)
	{
		if (func_7() == 8 && func_15(12))
			return 1;
	
		if (func_7() == 9 && func_15(3))
			return 1;
	}

	return 0;
}

int func_7() // Position - 0x3E2 Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_0;
}

void func_8() // Position - 0x3EC Hash - 0xE2945E8 ^0x91590700
{
	eptLocal_10 = joaat("a_c_donkey_01");
	hLocal_22 = joaat("p_rho_cottongin_03");
	uLocal_23 = { 1404.0195f, -1324.2677f, 76.7704f };
	uLocal_11[0 /*3*/] = { 1400.7699f, -1315.4026f, 76.6572f };
	uLocal_11[1 /*3*/] = { 1407.9113f, -1332.822f, 76.6569f };
	sLocal_1 = "script@ambient@generic@cotton_gin@action";
	uLocal_2[0] = "DONKEY_0";
	uLocal_2[1] = "DONKEY_1";
	sLocal_5 = "COTTON_PRESS";
	func_32(&uLocal_11[0 /*3*/], 50, 10, false);
	func_32(&uLocal_11[1 /*3*/], 50, 10, false);
	func_33(&uLocal_28, false);
	func_34(&uLocal_28, true);
	func_35(&uLocal_28, true);
	func_36(&uLocal_28, true);
	func_37(&uLocal_28, true);
	func_38(&uLocal_28, true);
	func_39(&uLocal_28, true);
	func_40(&uLocal_28, true);
	func_41(&uLocal_28, true);

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_57))
		volLocal_57 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1439.6456f, -1296.0781f, 78.22333f, 0f, 0f, 15.938334f, 5.460037f, 5.05896f, 3.246991f, "m_volDonkeyPen");

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_61))
		volLocal_61 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1403.8917f, -1324.6616f, 76.657394f, 0f, 0f, 0f, 19.097954f, 13.323952f, 7.186517f, "m_volVehicleAntiGrief");

	iLocal_27 = AUDIO::GET_SOUND_ID();
	return;
}

void func_9(int iParam0) // Position - 0x527 Hash - 0x28DF00E8 ^0x28DF00E8
{
	iLocal_0 = iParam0;
	return;
}

void func_10() // Position - 0x533 Hash - 0xA1EE8FE1 ^0x5A144C4D
{
	STREAMING::REQUEST_MODEL(eptLocal_10, false);
	STREAMING::REQUEST_MODEL(hLocal_22, false);

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_6))
		ansLocal_6 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_1, 1, 0, false, true);

	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_READY() <= 2)
		PED::_RESERVE_AMBIENT_PEDS(2);

	return;
}

BOOL func_11() // Position - 0x56C Hash - 0xA98B07AE ^0x86245B6A
{
	if (!STREAMING::HAS_MODEL_LOADED(eptLocal_10) || !STREAMING::HAS_MODEL_LOADED(hLocal_22))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_6, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(ansLocal_6, true))
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_6);
	
		return false;
	}

	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
		return false;

	return true;
}

BOOL func_12() // Position - 0x5BD Hash - 0x8A907430 ^0x78912A78
{
	if (BUILTIN::VDIST2(Global_36, uLocal_23) > 10000f)
		return false;

	return true;
}

int func_13() // Position - 0x5E0 Hash - 0x291B7294 ^0xE99089DD
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_7[i]))
		{
			iLocal_7[i] = func_42(eptLocal_10, uLocal_11[i /*3*/], 95f, true, true, 0, true, false, false, false, false, false, false);
		
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[i]))
			{
				PED::_SET_PED_SCALE(iLocal_7[i], 0.67f);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[i], 136, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[i], 441, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[i], 297, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[i], 407, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_7[i], 419, true);
				PED::SET_PED_LASSO_HOGTIE_FLAG(iLocal_7[i], 0, false);
				TASK::TASK_STAND_STILL(iLocal_7[i], -1);
				PED::_EQUIP_META_PED_OUTFIT(iLocal_7[i], -937613161);
				PED::_UPDATE_PED_VARIATION(iLocal_7[i], false, true, true, true, false);
			
				if (!VOLUME::DOES_VOLUME_EXIST(uLocal_58[i]))
				{
					uLocal_58[i] = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(joaat("volCylinder"), uLocal_11[i /*3*/], 0f, 0f, 0f, 1.5f, 1.5f, 1f);
					PED::_ATTACH_VOLUME_TO_ENTITY(uLocal_58[i], iLocal_7[i], 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
				}
			}
		
			return 0;
		}
	}

	if (!bLocal_63)
	{
		func_43(10);
		bLocal_63 = true;
	}

	return 1;
}

int func_14() // Position - 0x721 Hash - 0x35BF7C8A ^0x40ECF491
{
	if (!ENTITY::DOES_ENTITY_EXIST(eLocal_21))
	{
		if (eLocal_26 == 0)
			eLocal_26 = ENTITY::PIN_CLOSEST_MAP_ENTITY(hLocal_22, uLocal_23, 11);
		else if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_26))
			eLocal_21 = ENTITY::_GET_PINNED_MAP_ENTITY(eLocal_26);
	
		return 0;
	}

	return 1;
}

BOOL func_15(int iParam0) // Position - 0x760 Hash - 0x259E3CFD ^0x259E3CFD
{
	int num;

	if (iParam0 == -1)
		return true;

	if (iParam0 == 0)
		return false;

	num = func_45(func_44());

	if (func_46(iParam0, 1))
		if (num >= 6 && num < 12)
			return true;

	if (func_46(iParam0, 2))
		if (num >= 12 && num < 18)
			return true;

	if (func_46(iParam0, 4096))
		if (num >= 11 && num < 14)
			return true;

	if (func_46(iParam0, 4))
		if (num >= 18 && num < 24)
			return true;

	if (func_46(iParam0, 8))
		if (num >= 0 && num < 6)
			return true;

	if (func_46(iParam0, 16))
		if (num >= 20 || num < 7)
			return true;

	if (func_46(iParam0, 1024))
		if (num >= 5 && num < 12)
			return true;

	if (func_46(iParam0, 32))
		if (num >= 5 && num < 22)
			return true;

	if (func_46(iParam0, 64))
		if (num >= 6 && num < 20)
			return true;

	if (func_46(iParam0, 128))
		if (num >= 21 || num < 5)
			return true;

	if (func_46(iParam0, 256))
		if (num >= 22 && num < 24)
			return true;

	if (func_46(iParam0, 512))
		if (num >= 0 && num < 5)
			return true;

	if (func_46(iParam0, 8192))
		if (num >= 6 && num < 20)
			return true;

	if (func_46(iParam0, 2048))
		if (num >= 1 && num < 3)
			return true;

	if (func_46(iParam0, 16384))
		if (num >= 6 && num < 24)
			return true;

	if (func_46(iParam0, 32768))
		if (num >= 21 || num < 6)
			return true;

	if (func_46(iParam0, 65536))
		if (num >= 18 && num < 19)
			return true;

	return false;
}

void func_16() // Position - 0x9B4 Hash - 0x858E1EFA ^0x8F5D893F
{
	int i;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_57))
		return;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[i]))
		{
			func_47(iLocal_7[i], VOLUME::GET_VOLUME_COORDS(volLocal_57) + { 0f, 0f, (float)i * 1f }, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 2, 1073741824);
			TASK::TASK_WANDER_IN_VOLUME(iLocal_7[i], volLocal_57, 1f, 3f, 1);
		}
	}

	return;
}

BOOL func_17() // Position - 0xA20 Hash - 0x4971A0EC ^0xED3E2D68
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_6))
		return false;

	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_6, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(ansLocal_6, true))
			ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_6);
	
		return false;
	}

	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(ansLocal_6, 1404.0195f, -1324.2677f, 76.71f, 0f, 0f, -81f, 2);

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[i]))
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_6, uLocal_2[i], iLocal_7[i], 0);
	}

	if (!ENTITY::IS_ENTITY_DEAD(eLocal_21))
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansLocal_6, sLocal_5, eLocal_21, 0);

	ANIMSCENE::START_ANIM_SCENE(ansLocal_6);
	return true;
}

BOOL func_18() // Position - 0xAC3 Hash - 0x93BA91FB ^0x401DDD28
{
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(eLocal_21) && !ENTITY::IS_ENTITY_DEAD(iLocal_7[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_7[1]))
	{
		for (i = 0; i < 2; i = i + 1)
		{
			if (!PHYSICS::DOES_ROPE_EXIST(uLocal_18[i]))
			{
				uLocal_18[i] = PHYSICS::_ADD_ROPE_2(ENTITY::GET_ENTITY_COORDS(iLocal_7[i], true, false), 0f, 0f, 0f, 1f, 6, true, -1, -1082130432);
				PHYSICS::_0x522FA3F490E2F7AC(uLocal_18[i], 1, 1);
				PHYSICS::_0x8D59079C37C21D78(uLocal_18[i], 2.5f);
				return false;
			}
		}
	
		PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(uLocal_18[0], iLocal_7[0], eLocal_21, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect1");
		PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(uLocal_18[1], iLocal_7[1], eLocal_21, 0f, 0f, 0f, 0f, 0f, 0f, "PH_Harness", "donkeyRopeConnect2");
		return true;
	}

	return false;
}

BOOL func_19() // Position - 0xB91 Hash - 0x412F4549 ^0xCBED455
{
	var unk;

	if (MISC::GET_FRAME_COUNT() % 10 == 0)
	{
		if (func_48(iLocal_7[iLocal_56], 0, &uLocal_28, &unk, 0, 0))
			return true;
	
		if (PED::IS_PED_RESPONDING_TO_THREAT(iLocal_7[iLocal_56]))
			return true;
	
		iLocal_56 = iLocal_56 + 1;
	
		if (iLocal_56 >= 2)
			iLocal_56 = 0;
	}

	return false;
}

BOOL func_20() // Position - 0xBDD Hash - 0x1F3F6E2D ^0x3031CC7C
{
	if (MISC::GET_FRAME_COUNT() % 6 != 0)
		return false;

	if (BUILTIN::VDIST2(Global_36, uLocal_23) < 3600f)
		return false;

	if (CAM::IS_SPHERE_VISIBLE(1439.6456f, -1296.0781f, 78.22333f, 2f) || CAM::IS_SPHERE_VISIBLE(1403.6863f, -1324.1187f, 73.60623f, 9.5f))
		return false;

	return true;
}

void func_21(Volume volParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0xC47 Hash - 0xFDD92D0 ^0xFC369A71
{
	int num;

	num = 8;

	if (bParam1)
		num = num | 72;

	if (bParam2)
		num = num | 131072;

	if (bParam3)
		num = num | 24;

	if (bParam4)
		num = num | 40;

	if (bParam5)
		num = num | 524288;

	MISC::_CLEAR_VOLUME_AREA(volParam0, num);
	return;
}

void func_22() // Position - 0xC9B Hash - 0x3FD00650 ^0xF8DFE56F
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (PHYSICS::DOES_ROPE_EXIST(uLocal_18[i]))
			PHYSICS::DELETE_ROPE(&uLocal_18[i]);
	}

	return;
}

void func_23() // Position - 0xCCC Hash - 0x10E6D38D ^0xE1F73034
{
	if (AUDIO::PREPARE_SOUND("COTTON_GIN", "OFF_MISSION_SOUNDS", -2) && AUDIO::_HAS_SOUND_ID_FINISHED(iLocal_27))
		AUDIO::_PLAY_SOUND_FROM_POSITION_WITH_ID(iLocal_27, "COTTON_GIN", uLocal_23, "OFF_MISSION_SOUNDS", false, 0, true);

	return;
}

void func_24() // Position - 0xD02 Hash - 0xAD5776CD ^0x7C821A10
{
	int i;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_6))
		return;

	ANIMSCENE::SET_ANIM_SCENE_PAUSED(ansLocal_6, true);

	for (i = 0; i < 2; i = i + 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_7[i]))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_6, uLocal_2[i], iLocal_7[i]);
			TASK::TASK_STAND_STILL(iLocal_7[i], -1);
		}
	}

	return;
}

BOOL func_25() // Position - 0xD5B Hash - 0x9B4E4489 ^0x657F545
{
	ItemSet itemSet;
	int matchingEntities;

	if (MISC::GET_FRAME_COUNT() % 20 != 0)
		return false;

	if (BUILTIN::VDIST2(Global_36, uLocal_23) > 625f)
		return false;

	if (!VOLUME::DOES_VOLUME_EXIST(volLocal_61))
		return false;

	itemSet = ITEMSET::CREATE_ITEMSET(true);
	matchingEntities = ENTITY::GET_MATCHING_ENTITIES(volLocal_61, itemSet, 2, 1, 0, 0);
	ITEMSET::DESTROY_ITEMSET(itemSet);

	if (matchingEntities > 0)
		return true;

	return false;
}

void func_26() // Position - 0xDC0 Hash - 0xDE581EF4 ^0x3330B92A
{
	int taskSequenceId;
	int i;

	ANIMSCENE::SET_ANIM_SCENE_PAUSED(ansLocal_6, true);

	for (i = 0; i < 2; i = i + 1)
	{
		if (func_49(iLocal_7[i], 0))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(ansLocal_6, uLocal_2[i], iLocal_7[i]);
		
			if (PHYSICS::DOES_ROPE_EXIST(uLocal_18[i]))
				PHYSICS::DETACH_ROPE_FROM_ENTITY(uLocal_18[i], iLocal_7[i]);
		
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_HORSE_ACTION(0, 1, 0, 0);
			TASK::TASK_FLEE_COORD(0, Global_36, 3, 256, 10000f, 10000, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_7[i], 3f);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_7[i], taskSequenceId);
			PED::SET_PED_KEEP_TASK(iLocal_7[i], true);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	}

	return;
}

void func_27() // Position - 0xE71 Hash - 0x180FA0B2 ^0x7DDAC25F
{
	if (Global_1934765.f_286 > 300)
		Global_1934765.f_286 = 300;

	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_50());
	return;
}

BOOL func_28() // Position - 0xE98 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

eStackSize func_29() // Position - 0xEA6 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

BOOL func_30(int iParam0) // Position - 0xEB4 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return false;

	return func_51(Global_1835011[iParam0 /*74*/].f_1);
}

BOOL func_31(int iParam0) // Position - 0xEE0 Hash - 0xBF7DEF91 ^0x6E26B7C2
{
	if (!(iParam0 > -1 && iParam0 <= 80))
		return 0;

	return func_52(Global_1835011[iParam0 /*74*/].f_1);
}

int func_32(var uParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xF0C Hash - 0x3FCE88FF ^0x3FCE88FF
{
	var groundZ;
	int num;
	BOOL flag;
	BOOL flag2;
	Vector3 vector;

	if (func_53(*uParam0, 0f, 0f, 0f))
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

void func_33(var uParam0, BOOL bParam1) // Position - 0x1003 Hash - 0x80C5A75F ^0xCEA3E822
{
	if (bParam1)
	{
		uParam0->f_1 = 0;
		func_54(uParam0, true);
		func_55(uParam0, true);
		func_56(uParam0, true);
		func_57(uParam0, true);
		func_58(uParam0, true);
		func_39(uParam0, true);
		func_59(uParam0, true);
	}
	else
	{
		uParam0->f_1 = -1;
		func_54(uParam0, false);
		func_55(uParam0, false);
		func_56(uParam0, false);
		func_57(uParam0, false);
		func_58(uParam0, false);
		func_39(uParam0, false);
		func_59(uParam0, false);
	}

	return;
}

void func_34(var uParam0, BOOL bParam1) // Position - 0x107F Hash - 0x97140DD8 ^0x96C23302
{
	if (bParam1)
		func_60(&(uParam0->f_1), 256);
	else
		func_61(&(uParam0->f_1), 256);

	return;
}

void func_35(var uParam0, BOOL bParam1) // Position - 0x10A5 Hash - 0xB272A69C ^0x2A37F53B
{
	if (bParam1)
		func_60(&(uParam0->f_1), 4);
	else
		func_61(&(uParam0->f_1), 4);

	return;
}

void func_36(var uParam0, BOOL bParam1) // Position - 0x10C7 Hash - 0xF7B0944E ^0xC84C2F80
{
	if (bParam1)
		func_60(&(uParam0->f_1), 2);
	else
		func_61(&(uParam0->f_1), 2);

	return;
}

void func_37(var uParam0, BOOL bParam1) // Position - 0x10E9 Hash - 0x8AC5A45 ^0x8880FB31
{
	if (bParam1)
		func_60(&(uParam0->f_1), 1);
	else
		func_61(&(uParam0->f_1), 1);

	return;
}

void func_38(var uParam0, BOOL bParam1) // Position - 0x110B Hash - 0xC115F03A ^0x2E6EAB19
{
	if (bParam1)
		func_60(&(uParam0->f_1), 16);
	else
		func_61(&(uParam0->f_1), 16);

	return;
}

void func_39(var uParam0, BOOL bParam1) // Position - 0x112F Hash - 0x9CA625A6 ^0x5835CEE9
{
	if (bParam1)
		func_61(uParam0, 1024);
	else
		func_60(uParam0, 1024);

	return;
}

void func_40(var uParam0, BOOL bParam1) // Position - 0x1151 Hash - 0x97140DD8 ^0xBDBF7A5
{
	if (bParam1)
		func_60(&(uParam0->f_1), 2048);
	else
		func_61(&(uParam0->f_1), 2048);

	return;
}

void func_41(var uParam0, BOOL bParam1) // Position - 0x1177 Hash - 0x3BE1C7D2 ^0x3BE1C7D2
{
	if (bParam1)
		func_61(uParam0, 128);
	else
		func_60(uParam0, 128);

	return;
}

Ped func_42(ePedType eptParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1197 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_62(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

void func_43(int iParam0) // Position - 0x11D9 Hash - 0x299A116B ^0x246DE950
{
	int num;

	if (iParam0 > 150)
		iParam0 = 150;

	iParam0 > Global_1934765.f_286 - 150;

	if (func_63(&num))
	{
		if (Global_1934765.f_275[num /*2*/].f_1 != iParam0)
		{
			Global_1934765.f_286 = Global_1934765.f_286 + Global_1934765.f_275[num /*2*/].f_1;
			Global_1934765.f_275[num /*2*/].f_1 = iParam0;
			Global_1934765.f_286 = Global_1934765.f_286 - iParam0;
			STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_50());
		}
	
		return;
	}

	num = func_64();

	if (num == -1)
		return;

	Global_1934765.f_275[num /*2*/].f_1 = iParam0;
	Global_1934765.f_275[num /*2*/] = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1934765.f_286 = Global_1934765.f_286 - iParam0;
	STREAMING::SET_POPULATION_BUDGET_MULTIPLIER(func_50());
	return;
}

eStackSize func_44() // Position - 0x12A6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

int func_45(eStackSize essParam0) // Position - 0x12B2 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(essParam0, 12) & 31;
}

BOOL func_46(int iParam0, int iParam1) // Position - 0x12C5 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_47(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x12D4 Hash - 0xF46E0F16 ^0xED4BA72A
{
	Vehicle vehiclePedIsIn;
	Ped pedIndexFromEntityIndex;
	Ped mount;
	BOOL pedCrouchMovement;
	BOOL isEntityAPed;
	var height;
	Ped pedIndexFromEntityIndex2;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	isEntityAPed = ENTITY::IS_ENTITY_A_PED(pedParam0);

	if (isEntityAPed)
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
		pedCrouchMovement = PED::GET_PED_CROUCH_MOVEMENT(pedIndexFromEntityIndex);
	
		if (PED::IS_PED_RAGDOLL(pedIndexFromEntityIndex))
			PED::_SET_PED_TO_DISABLE_RAGDOLL(pedIndexFromEntityIndex, true);
	}

	pedParam0 == func_65(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_66(pedParam0))
		if (func_67(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_68(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_47(vehiclePedIsIn, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_47(mount, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_68(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_68(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_68(iParam5, 129))
	{
		if (func_68(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_68(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_68(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_68(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_66(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_68(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_68(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

BOOL func_48(Ped pedParam0, Entity eParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x1556 Hash - 0xED93B9E0 ^0x288D4ED6
{
	int frameCount;

	frameCount = MISC::GET_FRAME_COUNT();

	if (frameCount > uParam2->f_5)
		func_69(uParam2, true, frameCount);

	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (iParam5 > 0f)
			uParam2->f_12 = iParam5;
		else
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(pedParam0, true, false));
	
		if (!(uParam2->f_1 & 128 != 0))
		{
			if (func_70(pedParam0, uParam2))
			{
				*uParam3 = 128;
				func_71(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_27)
		{
			if (!(uParam2->f_1 & 8 != 0))
			{
				if (func_72(pedParam0, uParam2))
				{
					*uParam3 = 8;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_73(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 8;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 32 != 0)
			{
				if (func_74(pedParam0, uParam2))
				{
					*uParam3 = 64;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_26 && func_75(PLAYER::PLAYER_ID(), false, true, uParam2->f_1 & 524288 == 0))
		{
			if (!(uParam2->f_1 & 16384 != 0))
			{
				*uParam3 = 16384;
				func_71(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_25)
		{
			if (func_76(uParam2, 1065353216))
			{
				if (!(uParam2->f_1 & 4 != 0))
				{
					if (func_77(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 4;
						func_71(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			
				if (!(uParam2->f_1 & 256 != 0))
				{
					if (func_78(Global_35, pedParam0, uParam2))
					{
						*uParam3 = 256;
						func_71(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 16 != 0))
		{
			if (uParam2->f_5 - Global_1935630.f_29 < 300)
			{
				if (func_79(Global_35, pedParam0, uParam2, false))
				{
					*uParam3 = 16;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_79(Global_35, pedParam0, uParam2, true))
			{
				*uParam3 = 16;
				func_71(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_80(pedParam0, uParam2))
				{
					*uParam3 = 32;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (func_81(&pedParam0, uParam2))
				{
					*uParam3 = 4096;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!(uParam2->f_1 & 2 != 0))
			{
				if (func_82(uParam2, 4000))
				{
					if (func_83(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, false, *uParam2 & 256 != 0) && func_84(uParam2, pedParam0) && func_85(uParam2, pedParam0))
					{
						*uParam3 = 2;
						func_71(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 2 != 0))
		{
			if (uParam2->f_12 < 4f)
			{
				if (func_83(pedParam0, Global_1935630.f_41, *uParam2 & 128 != 0, true, *uParam2 & 256 != 0) && func_84(uParam2, pedParam0) && func_85(uParam2, pedParam0))
				{
					*uParam3 = 2;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_86(pedParam0, Global_1935630.f_41))
							{
								func_87();
								*uParam3 = 2;
								func_71(pedParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (func_86(pedParam0, Global_1935630.f_41))
						{
							func_87();
							*uParam3 = 2;
							func_71(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		
			if (uParam2->f_12 < 10f)
			{
				if (func_88(uParam2, pedParam0) || uParam2->f_9 > 0 && func_89() - uParam2->f_9 < 2000)
				{
					if (PED::IS_PED_RAGDOLL(pedParam0))
					{
						func_87();
						*uParam3 = 2;
						func_71(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_90())
					{
						if (func_86(pedParam0, Global_1935630.f_42))
						{
							func_87();
							*uParam3 = 2;
							func_71(pedParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
	
		if (!(uParam2->f_1 & 1024 != 0))
		{
			if (func_91(uParam2, pedParam0))
			{
				*uParam3 = 1024;
				func_71(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!(uParam2->f_1 & 2048 != 0))
			{
				if (func_92(pedParam0, eParam1, uParam2))
				{
					*uParam3 = 2048;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_93(pedParam0, uParam2))
					{
						*uParam3 = 8192;
						func_71(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		
			if (*uParam2 & 64 != 0)
			{
				if (func_94(pedParam0, uParam2))
				{
					*uParam3 = 32768;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_95(uParam2, 4000))
				{
					if (func_96(&pedParam0, uParam2))
					{
						*uParam3 = 512;
						func_71(pedParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
	
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_97(pedParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_71(pedParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!(uParam2->f_1 & 1 != 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		{
			if (func_98(uParam2, pedParam0))
			{
				*uParam3 = 1;
				func_71(pedParam0, uParam2, *uParam3);
				return true;
			}
		}
	}

	return false;
}

BOOL func_49(Ped pedParam0, int iParam1) // Position - 0x1B7F Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_68(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_68(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_68(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_68(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_68(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_68(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_68(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_68(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

float func_50() // Position - 0x1C7E Hash - 0xC6C7E40 ^0x14F37B93
{
	return func_99(150f, BUILTIN::TO_FLOAT(Global_1934765.f_286)) / BUILTIN::TO_FLOAT(300);
}

BOOL func_51(int iParam0) // Position - 0x1CA2 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_100(iParam0);
	return num == 3 || num == 4;
}

int func_52(int iParam0) // Position - 0x1CC0 Hash - 0x8EF26C67 ^0x9855652A
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
	
		num = func_101(iParam0);
	}

	if (num == 1)
		return 1;

	if (num == 2)
		return 1;

	return 0;
}

BOOL func_53(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5) // Position - 0x1D2B Hash - 0x4D0D3D49 ^0xB736304C
{
	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_54(var uParam0, BOOL bParam1) // Position - 0x1D54 Hash - 0x57EE9974 ^0x57EE9974
{
	if (bParam1)
		func_61(uParam0, 4);
	else
		func_60(uParam0, 4);

	return;
}

void func_55(var uParam0, BOOL bParam1) // Position - 0x1D72 Hash - 0x776268CE ^0x776268CE
{
	if (bParam1)
		func_61(uParam0, 8);
	else
		func_60(uParam0, 8);

	return;
}

void func_56(var uParam0, BOOL bParam1) // Position - 0x1D92 Hash - 0x6E38DCCC ^0x27E8693B
{
	if (bParam1)
	{
		func_61(uParam0, 16);
	}
	else
	{
		func_60(uParam0, 67108864);
		func_60(uParam0, 16);
	}

	return;
}

void func_57(var uParam0, BOOL bParam1) // Position - 0x1DBD Hash - 0x82AFDBEA ^0x82AFDBEA
{
	if (bParam1)
		func_61(uParam0, 32);
	else
		func_60(uParam0, 32);

	return;
}

void func_58(var uParam0, BOOL bParam1) // Position - 0x1DDD Hash - 0x7BFDDC82 ^0x7BFDDC82
{
	if (bParam1)
		func_61(uParam0, 64);
	else
		func_60(uParam0, 64);

	return;
}

void func_59(var uParam0, BOOL bParam1) // Position - 0x1DFD Hash - 0xC16273CD ^0x19098BB1
{
	if (bParam1)
		func_61(uParam0, 1048576);
	else
		func_60(uParam0, 1048576);

	return;
}

void func_60(var uParam0, int iParam1) // Position - 0x1E21 Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

void func_61(var uParam0, int iParam1) // Position - 0x1E36 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_62(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x1E47 Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_102(eptParam1))
		{
			func_103(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_104(pedParam0, 0, true);
	
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
			func_105(pedParam0, false);
			flag = true;
		}
	
		func_106(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_63(var uParam0) // Position - 0x1F28 Hash - 0xB9A83C95 ^0x1D119752
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[i /*2*/], false) && Global_1934765.f_275[i /*2*/] == SCRIPTS::GET_ID_OF_THIS_THREAD())
		{
			*uParam0 = i;
			return true;
		}
	}

	return false;
}

int func_64() // Position - 0x1F74 Hash - 0x7DC7EE6A ^0xA1EBC045
{
	int i;

	for (i = 0; i < 5; i = i + 1)
	{
		if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1934765.f_275[i /*2*/], false))
			return i;
	}

	return -1;
}

Ped func_65(Ped pedParam0) // Position - 0x1FA8 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_66(Ped pedParam0) // Position - 0x1FB2 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_67(Ped pedParam0) // Position - 0x1FE4 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_68(int iParam0, int iParam1) // Position - 0x2026 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_69(var uParam0, BOOL bParam1, int iParam2) // Position - 0x2035 Hash - 0x37D64B11 ^0xE7060A9E
{
	func_107(iParam2);

	if (Global_1572887.f_12 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return;
	
		if (Global_1935630.f_12)
			return;
	}
	else
	{
		if (!Global_1224589.f_6)
			return;
	
		if (Global_1224589.f_7)
			return;
	}

	if (bParam1)
		uParam0->f_10 = 0;

	uParam0->f_5 = iParam2;

	if (Global_1572887.f_12 == -1)
		uParam0->f_13 = Global_1935630.f_44;
	else
		uParam0->f_13 = func_108(0);

	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
				if (!(*uParam0 & 33554432 != 0))
					if (uParam0->f_13 == joaat("weapon_thrown_dynamite"))
						if (PED::IS_PED_PLANTING_BOMB(Global_35))
							func_61(uParam0, 33554432);
					else if (!(*uParam0 & 8192 != 0))
						if (func_109(true))
							func_61(uParam0, 33554432);
				else if (!PED::IS_PED_PLANTING_BOMB(Global_35) && !func_109(true) || *uParam0 & 8192 != 0)
					func_60(uParam0, 33554432);
			break;
	
		case 1:
			break;
	
		case 2:
			break;
	
		case 3:
			break;
	}

	if (!(uParam0->f_1 & 1024 != 0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		{
			if (func_110(uParam0))
				uParam0->f_15 = func_89();
		}
		else if (uParam0->f_15 > 0)
		{
			if (func_89() - uParam0->f_15 > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}

	uParam0->f_6 = uParam0->f_6 + 1;

	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7 = uParam0->f_7 + 1;
	
		if (uParam0->f_7 > 4)
			uParam0->f_7 = 0;
	}

	func_111(uParam0);
	return;
}

BOOL func_70(Ped pedParam0, var uParam1) // Position - 0x2200 Hash - 0x3A755B4E ^0xDBAC23C2
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Ped pedIndexFromEntityIndex;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_acquaintance_ped_dead"):
		case joaat("event_ped_seen_dead_ped"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("event_dead_ped_found"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent))
				return false;
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
		
			if (!PED::IS_PED_HUMAN(pedIndexFromEntityIndex))
				return false;
		
			if (DECORATOR::DECOR_EXIST_ON(pedIndexFromEntityIndex, "bIgnoreDamageChecking"))
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_33)
				return false;
		
			if (pedIndexFromEntityIndex == Global_1935630.f_32)
				return false;
		
			if (!func_112(pedParam0, uParam1, pedIndexFromEntityIndex))
				return false;
		
			if (func_113(pedParam0, pedIndexFromEntityIndex) <= func_114(uParam1))
				return true;
			break;
	}

	return false;
}

void func_71(Ped pedParam0, var uParam1, int iParam2) // Position - 0x22D7 Hash - 0x7B438605 ^0x99F8E9DA
{
	if (iParam2 != 16384)
		uParam1->f_10 = pedParam0;

	if (func_115(iParam2, 1, 1, 1, 0))
		func_61(uParam1, 2048);

	uParam1->f_16 = iParam2;
	func_116(uParam1, true);
	func_117();
	return;
}

BOOL func_72(Ped pedParam0, var uParam1) // Position - 0x2314 Hash - 0x48FE638E ^0x6AD20F95
{
	float num;
	float num2;
	int num3;
	int num4;

	num = 85f;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_118(pedParam0, !(*uParam1 & 268435456 != 0), !(*uParam1 & 536870912 != 0), !(*uParam1 & 1073741824 != 0), 0, false))
		{
			if (uParam1->f_12 < 5f)
				num = 95f;
			else if (uParam1->f_12 < 15f)
				num = 90f;
		
			num2 = func_119(uParam1);
		
			if (func_120(uParam1, pedParam0, num, num2))
			{
				if (uParam1->f_2 == 0)
					uParam1->f_2 = MISC::GET_GAME_TIMER();
			
				num3 = MISC::GET_GAME_TIMER() - uParam1->f_2;
				num4 = func_121(uParam1);
			
				if (uParam1->f_2 != 0)
				{
					if (num3 > num4)
					{
						func_116(uParam1, true);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (num3 > 500)
						{
							func_116(uParam1, true);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

BOOL func_73(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x23FB Hash - 0x899101A2 ^0xBCA80002
{
	float num;
	float num2;

	if (eParam1 == 0)
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(eParam1))
		return false;

	num = 85f;

	if (func_122(eParam1, !(*uParam2 & 268435456 != 0), !(*uParam2 & 536870912 != 0), !(*uParam2 & 1073741824 != 0), 0))
	{
		if (uParam2->f_12 < 5f)
			num = 95f;
		else if (uParam2->f_12 < 15f)
			num = 90f;
	
		num2 = func_119(uParam2);
	
		if (func_120(uParam2, pedParam0, num, num2))
		{
			if (uParam2->f_2 == 0)
				uParam2->f_2 = MISC::GET_GAME_TIMER();
		
			if (uParam2->f_2 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_2 > func_121(uParam2))
				{
					func_116(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_74(Ped pedParam0, var uParam1) // Position - 0x24D1 Hash - 0xC62373A5 ^0xD1ADE674
{
	Entity entity;
	Ped pedIndexFromEntityIndex;
	Entity outEntity;
	float customDistance;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &entity))
		return false;

	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
		if (outEntity == entity)
			return false;

	if (!ENTITY::IS_ENTITY_A_PED(entity))
		return false;

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entity);

	if (func_112(pedParam0, uParam1, pedIndexFromEntityIndex))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_3 > func_121(uParam1))
		{
			customDistance = func_119(uParam1);
		
			if (uParam1->f_12 < customDistance)
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17))
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, customDistance, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, customDistance, -1082130432, -1082130432))
						return true;
		}
	}

	return false;
}

BOOL func_75(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x25DA Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_123(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return 0;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return 0;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return 0;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return 1;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return 0;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return 1;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return 1;

	return 0;
}

BOOL func_76(var uParam0, int iParam1) // Position - 0x270F Hash - 0x7EB9A53B ^0xCA234572
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_89();
	num2 = num - uParam0->f_8;

	if ((float)num2 > iParam1 * 1000f)
		return true;

	return false;
}

BOOL func_77(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x2746 Hash - 0xCE2053EC ^0x1CC9B32D
{
	float num;
	int shotNearRecentlyTime;
	float num2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			num = func_124(uParam2);
		
			if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED"))
				PED::_0xD355E2F1BB41087E(pedParam1, num);
			else if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_0xEA522F991E120D45(Global_1935630.f_46))
				PED::_0xD355E2F1BB41087E(pedParam1, 5f);
			else
				PED::_0xD355E2F1BB41087E(pedParam1, num);
		}
	
		if (!WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) || Global_1935630.f_46 == joaat("WEAPON_UNARMED") || WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
		{
			num2 = 3f;
			shotNearRecentlyTime = 3000;
		}
		else
		{
			num2 = 1f;
			shotNearRecentlyTime = 1000;
		}
	
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), pedParam1, shotNearRecentlyTime) && PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= num2)
		{
			if (func_85(uParam2, pedParam1))
			{
				func_116(uParam2, true);
				return true;
			}
		}
	}

	return false;
}

BOOL func_78(Ped pedParam0, Ped pedParam1, var uParam2) // Position - 0x284D Hash - 0x7A43493E ^0x1475EBFE
{
	var weaponHash;

	if (uParam2->f_12 < (float)func_125(uParam2))
	{
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && !WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
		{
			if (func_85(uParam2, pedParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(pedParam0) <= 1f)
				{
					func_116(uParam2, true);
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_79(Ped pedParam0, Ped pedParam1, var uParam2, BOOL bParam3) // Position - 0x28B8 Hash - 0x8CBDE6BD ^0xE1F008CE
{
	Vector3 entityCoords;
	int num;
	var outCoords;
	var outCoords2;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, true) };
	num = func_126(uParam2);

	if (!bParam3)
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_116(uParam2, true);
					return true;
				}
				break;
		
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), entityCoords, uParam2->f_27))
				{
					func_116(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords, false, false);
				
					if (func_127(pedParam1, entityCoords, outCoords))
					{
						func_116(uParam2, true);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (num)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), entityCoords, uParam2->f_22))
				{
					func_116(uParam2, true);
					return true;
				}
				break;
		
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), entityCoords, uParam2->f_22))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(pedParam1, joaat("weapon_thrown_dynamite"), uParam2->f_26, &outCoords2, false, false);
				
					if (func_127(pedParam1, entityCoords, outCoords2))
					{
						func_116(uParam2, true);
						return true;
					}
				}
				break;
		}
	}

	return false;
}

BOOL func_80(Ped pedParam0, var uParam1) // Position - 0x2A00 Hash - 0xEB9C0B04 ^0x4A60CD30
{
	int i;
	float num;
	var unk;
	Vector3 entityCoords;
	BOOL flag;
	BOOL flag2;

	unk = 2;
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	flag = *uParam1 & 4096 != 0;

	for (i = 0; i < Global_1935630.f_39; i = i + 1)
	{
		if (!func_112(pedParam0, uParam1, Global_1935630.f_34[i]) || pedParam0 == Global_1935630.f_34[i])
		{
		}
		else
		{
			flag2 = func_128(Global_1935630.f_34[i]);
			num = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false), entityCoords);
		
			if (func_129(Global_1935630.f_34[i]))
			{
				if (num < 35f)
				{
					if (DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") || DECORATOR::DECOR_EXIST_ON(Global_1935630.f_34[i], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB"))
					{
						unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
						unk[1 /*3*/] = { entityCoords };
						uParam1->f_10 = pedParam0;
						return true;
					}
				}
			}
		
			if (func_130(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_131(uParam1, pedParam0, num, flag, flag2))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
			else if (func_132(uParam1, pedParam0, num, i))
			{
				unk[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1935630.f_34[i], false, false) };
				unk[1 /*3*/] = { entityCoords };
				uParam1->f_10 = pedParam0;
				return true;
			}
		}
	}

	return false;
}

BOOL func_81(var uParam0, var uParam1) // Position - 0x2BDC Hash - 0xF223CED2 ^0xA472D0A4
{
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	var entityCoords;
	var entityCoords2;

	if (!EVENT::_0x1D1B448D719415AB(*uParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(*uParam0, 0, 0);

	switch (recentEvent)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("event_shocking_window_smashed"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*uParam0, recentEvent, 0, 0);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(sourceEntityFromEvent, false, false) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(tar, false, false) };
			EVENT::_0x1A5C5D350068A673(*uParam0, 0);
			return true;
	}

	return false;
}

BOOL func_82(var uParam0, int iParam1) // Position - 0x2C54 Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_89();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

int func_83(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2C83 Hash - 0x8119700D ^0x42D5A76B
{
	Ped entity2;
	Vehicle playersLastVehicle;
	Entity entity;

	entity2 = PLAYER::PLAYER_PED_ID();

	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(pedParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(pedParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, entity2, true, true))
				return 1;
		
			playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		
			if (!ENTITY::IS_ENTITY_DEAD(playersLastVehicle))
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, playersLastVehicle, true, true))
					return 1;
		
			if (PED::IS_PED_ON_MOUNT(entity2))
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(entity2)))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PED::GET_MOUNT(entity2), true, true))
						return 1;
			else if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
				if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
						return 1;
		}
	}
	else if (!bParam2)
	{
		if (func_133(entity2, &entity))
			if (PED::IS_PED_RAGDOLL(pedParam0) || PED::_0x947E43F544B6AB34(pedParam0, PLAYER::PLAYER_ID(), 10, 1000) || !bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
				return 1;
	}

	if (!bParam2)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (func_134(entity2, pedParam0))
		return 1;

	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == pedParam0)
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
			return 1;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (PED::IS_PED_BEING_JACKED(pedParam0))
			if (PED::GET_PEDS_JACKER(pedParam0) == entity2)
				return 1;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(entity2, 8, 0))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam0))
			return 1;

	return 0;
}

int func_84(var uParam0, Ped pedParam1) // Position - 0x2E09 Hash - 0x42A83B1F ^0x797DD61B
{
	int _int;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam1, "iDamageFrame"))
		return 1;

	_int = DECORATOR::DECOR_GET_INT(pedParam1, "iDamageFrame");

	if (_int < 0)
		DECORATOR::DECOR_SET_INT(pedParam1, "iDamageFrame", uParam0->f_5);
	else if (uParam0->f_5 > _int + 10)
		return 1;

	return 0;
}

BOOL func_85(var uParam0, Ped pedParam1) // Position - 0x2E59 Hash - 0xA4C024EF ^0xFFB65FFB
{
	if (func_135(uParam0))
		return true;

	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam1, 400))
		return true;

	if (PED::IS_PED_DEAD_OR_DYING(pedParam1, true))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 8, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(pedParam1))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 16, 0) || PED::GET_PED_CONFIG_FLAG(pedParam1, 10, true))
		return false;

	if (PED::_GET_LASSO_TARGET(Global_35) != 0)
		return true;

	if (!PED::IS_PED_RAGDOLL(pedParam1))
		return true;

	return false;
}

BOOL func_86(Ped pedParam0, Ped pedParam1) // Position - 0x2EF6 Hash - 0xB0548679 ^0x1C6DC58A
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, pedParam1, true, true))
			return true;
	
		if (func_136(pedParam0, pedParam1, true, true) < 4f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, pedParam1) && PED::IS_PED_RAGDOLL(pedParam0))
				return true;
	}

	return false;
}

void func_87() // Position - 0x2F43 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

BOOL func_88(var uParam0, Ped pedParam1) // Position - 0x2F4B Hash - 0x6BE02E92 ^0x188EF1A2
{
	Vehicle vehiclePedIsUsing;
	var entityCoords;
	int actual;
	int expected;
	int i;
	Ped pedInDraftHarness;

	vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);

	if (vehiclePedIsUsing != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(vehiclePedIsUsing)))
	{
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam1, false, false) };
	
		if (func_137(vehiclePedIsUsing, pedParam1, entityCoords))
		{
			uParam0->f_9 = func_89();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(vehiclePedIsUsing, &expected, &actual))
		{
			if (expected <= 0)
			{
				return false;
			}
			else if (actual == expected)
			{
				for (i = 0; i < actual; i = i + 1)
				{
					pedInDraftHarness = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(vehiclePedIsUsing, i);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInDraftHarness))
					{
						if (func_138(pedInDraftHarness, entityCoords, true) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedInDraftHarness, pedParam1))
							{
								uParam0->f_9 = func_89();
								return true;
							}
						}
					}
				}
			}
		}
	}

	return false;
}

int func_89() // Position - 0x300C Hash - 0xE698BCC8 ^0x3E64CD04
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return networkTimeAccurate;
	}

	return MISC::GET_GAME_TIMER();
}

BOOL func_90() // Position - 0x302A Hash - 0xAD122F0E ^0xC8AE0775
{
	if (Global_1935630.f_42 == 0)
		return false;

	if (Global_1935630.f_42 == Global_1935630.f_40)
		return false;

	if (Global_1935630.f_43 <= 0)
		return false;

	if (func_89() - Global_1935630.f_43 >= 10000)
		return false;

	return true;
}

BOOL func_91(var uParam0, Ped pedParam1) // Position - 0x3077 Hash - 0xD0836592 ^0x2A09A5E1
{
	float num;
	int num2;
	int num3;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_14))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam1))
		return false;

	num = func_114(uParam0);

	if (uParam0->f_12 > func_139(uParam0) && uParam0->f_12 > num)
		return false;

	num3 = func_140(pedParam1);
	num2 = func_141(uParam0->f_14);

	if (num3 == num2 || num3 == 2 || num2 == 2)
		if (uParam0->f_12 <= num || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, Global_35, true, false) == 1 || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, uParam0->f_14, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, uParam0->f_14, 17) && PED::CAN_PED_SEE_ENTITY(pedParam1, uParam0->f_14, true, false) == 1)
			return true;

	return false;
}

BOOL func_92(Ped pedParam0, Entity eParam1, var uParam2) // Position - 0x3193 Hash - 0xE4FFEDE ^0xE432D572
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;

	if (uParam2->f_12 > 4f)
		return false;

	flag = *uParam2 & 256 != 0;
	flag2 = *uParam2 & 524288 != 0;
	flag3 = *uParam2 & 128 != 0;
	return func_142(pedParam0, eParam1, flag, flag3, uParam2->f_12, flag2);
}

BOOL func_93(Ped pedParam0, var uParam1) // Position - 0x31DB Hash - 0x23BB3370 ^0x36BD6CCF
{
	Ped jackTarget;
	Hash recentEvent;
	Entity sourceEntityFromEvent;
	Entity tar;
	Ped pedIndexFromEntityIndex;
	Ped pedIndexFromEntityIndex2;

	if (*uParam1 & 67108864 != 0)
		return true;

	if (Global_1935630.f_24)
		return true;

	if (*uParam1 & 33554432 != 0)
	{
		if (func_143(pedParam0, uParam1, true))
			return true;
	
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17) && PED::CAN_PED_SEE_ENTITY(pedParam0, Global_35, true, false) == 1)
			return true;
	}

	jackTarget = PED::GET_JACK_TARGET(Global_35);

	if (ENTITY::DOES_ENTITY_EXIST(jackTarget) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(jackTarget, true))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return true;

	if (!EVENT::_0x1D1B448D719415AB(pedParam0))
		return false;

	recentEvent = EVENT::_EVENT_GET_RECENT_EVENT(pedParam0, 0, 0);

	if (recentEvent == 0)
		return false;

	switch (recentEvent)
	{
		case joaat("event_shocking_seen_ped_robbed"):
		case joaat("event_shocking_seen_ped_intimidated"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("event_shocking_mount_stolen"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (pedIndexFromEntityIndex != Global_35)
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(pedIndexFromEntityIndex2))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			return true;
	
		case joaat("event_shocking_entity_hogtied"):
			sourceEntityFromEvent = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
			tar = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(pedParam0, recentEvent, 0, 0);
		
			if (!ENTITY::IS_ENTITY_A_PED(sourceEntityFromEvent) || !ENTITY::IS_ENTITY_A_PED(tar))
			{
				EVENT::_0x1A5C5D350068A673(pedParam0, 0);
				return false;
			}
		
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(sourceEntityFromEvent);
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(tar);
		
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, pedIndexFromEntityIndex, -1082130432, -1082130432, -1082130432, -1082130432) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, pedIndexFromEntityIndex, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!func_144(uParam1, pedParam0))
						if (func_138(pedIndexFromEntityIndex, Global_36, true) < 7f)
							return true;
			break;
	}

	return false;
}

BOOL func_94(Ped pedParam0, var uParam1) // Position - 0x3434 Hash - 0xB0E3CEF5 ^0x6602867A
{
	if (!func_145(0))
		return false;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
			return true;

	return false;
}

BOOL func_95(var uParam0, int iParam1) // Position - 0x346D Hash - 0xEBE56966 ^0xD1622B8
{
	int num;
	int num2;

	if (uParam0->f_8 <= 0)
		return true;

	num = func_89();
	num2 = num - uParam0->f_8;

	if (num2 > iParam1)
		return true;

	return false;
}

BOOL func_96(var uParam0, var uParam1) // Position - 0x349C Hash - 0x7B43AD8E ^0x2B906BDE
{
	return PED::_GET_IS_PED_BEING_ROBBED(*uParam0, PLAYER::PLAYER_ID(), false);
}

BOOL func_97(Ped pedParam0, var uParam1) // Position - 0x34B0 Hash - 0xA06525EC ^0x3DA5C48E
{
	if (!PED::IS_PED_HUMAN(pedParam0))
		return false;

	if (uParam1->f_4 == 0)
		uParam1->f_4 = func_89();
	else if (func_89() - uParam1->f_4 > func_146(uParam1))
		return func_147(pedParam0, uParam1, false, -1082130432);

	return false;
}

BOOL func_98(var uParam0, Ped pedParam1) // Position - 0x34FD Hash - 0x321E75A6 ^0x6B4DDFA8
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedParam1);

	if (!ENTITY::DOES_ENTITY_EXIST(pedSourceOfDeath))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIgnoreDamageChecking"))
		return false;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);

	if (Global_35 == pedIndexFromEntityIndex || Global_1935630.f_40 == pedIndexFromEntityIndex)
		return true;

	return false;
}

float func_99(float fParam0, float fParam1) // Position - 0x3550 Hash - 0x99935A7D ^0x99935A7D
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

int func_100(int iParam0) // Position - 0x3567 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_148(iParam0))
		return -1;

	return func_101(iParam0);
}

int func_101(int iParam0) // Position - 0x3583 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_149(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

BOOL func_102(ePedType eptParam0) // Position - 0x35C4 Hash - 0x5000025C ^0x5000025C
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

void func_103(Ped pedParam0, Hash hParam1) // Position - 0x3A17 Hash - 0xEA1C858E ^0xAC9B2BB2
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_150(pedParam0, hParam1))
		{
			if (func_151(pedParam0, hParam1))
			{
				if (func_152(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_153(pedParam0);
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

void func_104(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x3AC1 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_105(Ped pedParam0, BOOL bParam1) // Position - 0x3AF1 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_106(Ped pedParam0, int iParam1) // Position - 0x3B36 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

void func_107(int iParam0) // Position - 0x3B5D Hash - 0xE5B9C958 ^0xF9A51EF
{
	int num;
	Hash* weaponHash;

	if (Global_22 & 4 != 0)
		return;

	num = iParam0 - Global_1935630.f_38;
	Global_1935630.f_27 = func_154();

	if (Global_1935630.f_27)
		Global_1935630.f_28 = MISC::GET_GAME_TIMER();

	if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_35, &weaponHash))
			{
			}
			else
			{
				weaponHash = Global_1935630.f_44;
			}
		
			Global_1935630.f_46 = weaponHash;
		}
	}

	switch (num)
	{
		case 0:
			func_155(&(Global_1935630.f_34), &(Global_1935630.f_39));
			Global_1935630.f_38 = iParam0;
			break;
	
		case 1:
			Global_1935630.f_30 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
		
			if (!Global_1935630.f_30)
				if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
					Global_1935630.f_30 = PED::_GET_LASSO_TARGET(Global_35) != 0;
			break;
	
		case 2:
			switch (Global_1935630.f_46)
			{
				case joaat("WEAPON_LASSO"):
					Global_1935630.f_25 = 0;
					break;
			
				default:
					if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46) && WEAPON::_IS_WEAPON_SILENT(Global_1935630.f_46))
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 3f;
					else
						Global_1935630.f_25 = PED::TIME_SINCE_PED_LAST_SHOT(Global_35) <= 1f;
				
					if (Global_1935630.f_25)
						Global_1935630.f_29 = MISC::GET_FRAME_COUNT();
					break;
			}
			break;
	
		default:
			Global_1935630.f_38 = iParam0 + 1;
			break;
	}

	Global_22 = Global_22 | 4;
	return;
}

var func_108(int iParam0) // Position - 0x3CC9 Hash - 0x85F4CB4C ^0x85F4CB4C
{
	return Global_1109000.f_266[iParam0 /*3*/];
}

BOOL func_109(BOOL bParam0) // Position - 0x3CDC Hash - 0xBA1E2285 ^0xBA1E2285
{
	var unk;
	var unk2;

	if (func_156(bParam0, &unk, &unk2))
		return true;

	return false;
}

BOOL func_110(var uParam0) // Position - 0x3CF6 Hash - 0xA6E07A0A ^0x31605A1E
{
	Ped ped;

	ped = Global_1935630.f_40;

	if (func_28() == -1)
		if (Global_1935630.f_40 == 0)
			ped = func_157(uParam0);
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_40) || !Global_1954819.f_992[3])
		ped = func_157(uParam0);

	if (ped == 0)
		return false;

	if (func_141(ped) == -1)
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(ped, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(ped, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return false;

	uParam0->f_14 = ped;
	return true;
}

void func_111(var uParam0) // Position - 0x3D90 Hash - 0x256C27DD ^0x256C27DD
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
		func_158(uParam0);

	return;
}

BOOL func_112(Ped pedParam0, var uParam1, Ped pedParam2) // Position - 0x3DB7 Hash - 0x7FBD27D8 ^0x4C0BB7C4
{
	int num;
	int num2;
	Hash pedRelationshipGroupHash;
	Hash pedRelationshipGroupHash2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!PED::IS_PED_HUMAN(pedParam2))
		num2 = func_141(pedParam2);
	else
		num2 = func_140(pedParam2);

	if (!PED::IS_PED_HUMAN(pedParam0))
		num = func_141(pedParam0);
	else
		num = func_140(pedParam0);

	if (num2 == num)
		if (num2 != -1)
			return true;

	if (func_46(*uParam1, 8388608))
		return true;

	pedRelationshipGroupHash = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam0);
	pedRelationshipGroupHash2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(pedParam2);

	switch (pedRelationshipGroupHash)
	{
		case joaat("rel_civmale"):
		case joaat("rel_re_victim"):
		case joaat("rel_civnative"):
		case joaat("rel_pinkertons"):
		case joaat("rel_guama_law"):
		case joaat("rel_cop"):
		case joaat("rel_civfemale"):
			switch (pedRelationshipGroupHash2)
			{
				case joaat("rel_civmale"):
				case joaat("rel_re_victim"):
				case joaat("rel_civnative"):
				case joaat("rel_civfemale"):
					return true;
			}
			break;
	}

	if (pedRelationshipGroupHash == pedRelationshipGroupHash2)
		return true;

	return false;
}

float func_113(Ped pedParam0, Ped pedParam1) // Position - 0x3EB0 Hash - 0xF9959663 ^0xF9959663
{
	return func_136(pedParam0, pedParam1, true, true);
}

float func_114(var uParam0) // Position - 0x3EC2 Hash - 0xD73B9827 ^0xDE12990D
{
	return uParam0->f_26;
}

BOOL func_115(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x3ECE Hash - 0x5A9E12AC ^0x5A9E12AC
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 2048:
			return true;
	
		case 4:
		case 16:
			return bParam1;
	
		case 8:
			return bParam2;
	
		case 32:
		case 64:
		case 128:
			return bParam3;
	
		case 8192:
			return bParam4;
	
		default:
		
	}

	return false;
}

void func_116(var uParam0, BOOL bParam1) // Position - 0x3F33 Hash - 0x562373AA ^0xDBA63849
{
	if (bParam1)
		func_61(uParam0, 134217728);
	else
		func_60(uParam0, 134217728);

	return;
}

void func_117() // Position - 0x3F59 Hash - 0x66B46B05 ^0x51003404
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		CAM::STOP_GAMEPLAY_HINT(false);

	return;
}

BOOL func_118(Ped pedParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x3F6D Hash - 0x7ED53456 ^0xD7A590DD
{
	Ped ped;
	Player playerIndex;
	Entity outEntity;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	if (Global_1935630.f_44 == joaat("WEAPON_LASSO") && Global_1935630.f_27)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(outEntity) && pedParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity))
			return false;
	}

	if (Global_1935630.f_40 != 0)
		if (PED::_GET_RIDER_OF_MOUNT(Global_1935630.f_40, true) == pedParam0)
			return false;

	if (bParam3)
		if (WEAPON::IS_PED_ARMED(ped, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0) && func_136(ped, pedParam0, true, true) <= 4f)
			return true;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, pedParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, pedParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_159(ped, 0)))
			if (func_160(pedParam0, 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

float func_119(var uParam0) // Position - 0x40CE Hash - 0xD73B9827 ^0x8CE07B2A
{
	return uParam0->f_17;
}

BOOL func_120(var uParam0, Ped pedParam1, float fParam2, float fParam3) // Position - 0x40DA Hash - 0x8FF3FF1B ^0x45FC6EEC
{
	float num;

	if (uParam0->f_12 > fParam3)
		return false;

	num = -1f;

	if (!func_46(*uParam0, 4194304))
		num = fParam3;

	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_35, -1f, fParam3, -1f, num))
		return true;

	if (*uParam0 & 32768 != 0)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_35, 17))
			return true;

	return false;
}

int func_121(var uParam0) // Position - 0x413B Hash - 0xD73B9827 ^0x372EC0B
{
	return uParam0->f_18;
}

BOOL func_122(Entity eParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x4147 Hash - 0x838BDEFB ^0xB1D5C032
{
	Ped ped;
	Player playerIndex;

	if (ENTITY::IS_ENTITY_DEAD(eParam0))
		return false;

	ped = PLAYER::PLAYER_PED_ID();

	if (ENTITY::IS_ENTITY_DEAD(ped))
		return false;

	playerIndex = PLAYER::GET_PLAYER_INDEX();

	if (PLAYER::IS_PLAYER_DEAD(playerIndex))
		return false;

	bParam3;

	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(playerIndex, eParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(playerIndex, eParam0))
		if (bParam1 && WEAPON::IS_PED_ARMED(ped, 4) || bParam2 && WEAPON::IS_PED_ARMED(ped, 2))
			return true;

	if (PLAYER::IS_PLAYER_FREE_AIMING(playerIndex))
		if (WEAPON::_IS_WEAPON_SNIPER(func_159(ped, 0)))
			if (func_161(ENTITY::GET_ENTITY_COORDS(eParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
				return true;

	return false;
}

int func_123(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4209 Hash - 0xC9655EC3 ^0x88C9AFE1
{
	if (Global_1935630.f_18)
		if (bParam2 || Global_1935630.f_19 > 0 || Global_1935630.f_17 > 0)
			return 1;
	else if (bParam1 && !(Global_1935630.f_15 == 1370593166))
		return 0;

	if (Global_1935630.f_20 > 0 || bParam2 && Global_1935630.f_20 > -1)
		return 1;

	if (bParam0)
		if (Global_1935630.f_13)
			if (bParam2 || Global_1935630.f_21 > 0)
				return 1;

	return 0;
}

float func_124(var uParam0) // Position - 0x42A7 Hash - 0xD73B9827 ^0x9F7F0764
{
	return uParam0->f_23;
}

int func_125(var uParam0) // Position - 0x42B3 Hash - 0xD73B9827 ^0x303D0BA3
{
	return uParam0->f_21;
}

int func_126(var uParam0) // Position - 0x42BF Hash - 0xB202FF2A ^0xFD1BAB10
{
	int num;

	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 1;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 1:
			switch (uParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 0;
					break;
			}
			break;
	
		case 2:
			switch (uParam0->f_6)
			{
				case 1:
					num = 2;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	
		case 3:
			switch (uParam0->f_6)
			{
				case 1:
					num = 1;
					break;
			
				case 2:
					num = 0;
					break;
			
				case 3:
					num = 2;
					break;
			}
			break;
	
		case 4:
			switch (uParam0->f_6)
			{
				case 1:
					num = 0;
					break;
			
				case 2:
					num = 2;
					break;
			
				case 3:
					num = 1;
					break;
			}
			break;
	}

	if (*uParam0 & 16777216 != 0)
		if (num == 2)
			num = 0;

	return num;
}

BOOL func_127(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, Vector3 vParam4, var uParam5, var uParam6) // Position - 0x43FC Hash - 0xB38C72E2 ^0xD400E0B7
{
	if (func_162(pedParam0, vParam4, 0.5f))
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(pedParam0, vParam4, 17))
			return true;

	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
		return true;

	return false;
}

BOOL func_128(Ped pedParam0) // Position - 0x443F Hash - 0x4A20E6BA ^0x550F792B
{
	if (PED::GET_PED_CONFIG_FLAG(pedParam0, 9, false))
	{
		if (Global_1935630.f_44 == joaat("WEAPON_UNARMED"))
			return 1;
	
		if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_46))
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_46) || WEAPON::IS_WEAPON_BOW(Global_1935630.f_46))
				return 1;
	}

	if (func_163(pedParam0, 200, false, true))
		return 1;

	return 0;
}

BOOL func_129(Ped pedParam0) // Position - 0x44A5 Hash - 0x966B8CCF ^0xFAFF1653
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (PED::_IS_THIS_MODEL_A_HORSE(entityModel))
		return true;

	return false;
}

BOOL func_130(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x44D1 Hash - 0xF74D67F4 ^0x88DBF437
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_164(pedParam1))
			return false;

	num = 5f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_131(var uParam0, Ped pedParam1, float fParam2, BOOL bParam3, BOOL bParam4) // Position - 0x4518 Hash - 0xA25E5C03 ^0xFB206DE4
{
	float num;

	if (bParam3)
		return false;

	if (bParam4)
		if (func_164(pedParam1))
			return false;

	num = 10f;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x900CA00CE703E1E2(pedParam1);

	if (fParam2 < num)
		return true;

	return false;
}

BOOL func_132(var uParam0, Ped pedParam1, float fParam2, int iParam3) // Position - 0x4563 Hash - 0xBD53E6FC ^0x2E9374BE
{
	float num;

	num = 40f;

	if (func_164(pedParam1))
		return false;

	if (*uParam0 & 65536 != 0)
		num = PED::_0x2BA9D7BF629F920C(pedParam1);

	if (fParam2 < num)
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam1, Global_1935630.f_34[iParam3], 17))
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam1, Global_1935630.f_34[iParam3], -1082130432, -1082130432, -1082130432, -1082130432))
				return true;

	return false;
}

BOOL func_133(Ped pedParam0, var uParam1) // Position - 0x45DC Hash - 0x64FF5121 ^0xD9ABCD76
{
	if (!TASK::_IS_PED_LEADING_HORSE(pedParam0))
		return false;

	*uParam1 = TASK::_GET_LED_HORSE_FROM_PED(pedParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(*uParam1, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(*uParam1))
		return false;

	return true;
}

BOOL func_134(Ped pedParam0, Ped pedParam1) // Position - 0x4629 Hash - 0x32A55AFE ^0x7FDC2FE
{
	if (PED::_GET_LASSO_TARGET(pedParam0) == pedParam1)
		return true;

	if (func_165(pedParam0, true, 0, false) != joaat("WEAPON_LASSO"))
		return false;

	if (PED::IS_PED_PERFORMING_MELEE_ACTION(pedParam0, 16, 0))
		if (PED::GET_MELEE_TARGET_FOR_PED(pedParam0) == pedParam1)
			return true;

	return false;
}

BOOL func_135(var uParam0) // Position - 0x4671 Hash - 0x21EEA2C5 ^0x21EEA2C5
{
	return !(*uParam0 & 2 != 0);
}

float func_136(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4681 Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_137(Vehicle veParam0, Ped pedParam1, var uParam2, var uParam3, var uParam4) // Position - 0x46C9 Hash - 0x94A6C6F0 ^0xC51111A6
{
	float num;

	num = func_138(veParam0, uParam2, true);

	if (num < 4f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veParam0, pedParam1))
			return true;

	return false;
}

float func_138(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x46F5 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_139(var uParam0) // Position - 0x471D Hash - 0xD73B9827 ^0x4905FA06
{
	return uParam0->f_24;
}

int func_140(Ped pedParam0) // Position - 0x4729 Hash - 0x161BE138 ^0x34D0530F
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedParam0, true))
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseOwnerTeamB"))
		return 1;

	return -1;
}

int func_141(Ped pedParam0) // Position - 0x477D Hash - 0x10A6562 ^0x8E918C35
{
	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseScriptCreator") || DECORATOR::DECOR_GET_INT(pedParam0, "HorseScriptCreator") != SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME())
		return -1;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamA"))
		return 0;

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(pedParam0, "HorseTeamB"))
		return 1;

	return -1;
}

BOOL func_142(Ped pedParam0, Entity eParam1, BOOL bParam2, BOOL bParam3, float fParam4, BOOL bParam5) // Position - 0x47E9 Hash - 0x89708384 ^0x6760E23F
{
	BOOL flag;
	Entity entity;
	float num;

	if (Global_1935630.f_40 != 0)
		flag = true;

	if (!ENTITY::IS_ENTITY_DEAD(eParam1))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(eParam1, PLAYER::PLAYER_PED_ID(), true, true))
			return 1;

	if (flag)
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, Global_1935630.f_40, true, true))
			return 1;

	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (PED::_0x947E43F544B6AB34(pedParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
			if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;
	
		if (bParam3)
			if (func_133(Global_35, &entity))
				if (fParam4 < 4f)
					if (PED::IS_PED_RAGDOLL(pedParam0) || !bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(entity, pedParam0))
						return 1;
	}

	if (bParam3)
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(pedParam0, 400))
			return 1;

	if (fParam4 <= 0f)
		num = func_136(pedParam0, PLAYER::PLAYER_PED_ID(), false, true);
	else
		num = fParam4;

	if (num < 1f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0))
			if (!bParam2)
				return 1;
			else if (PED::IS_PED_RAGDOLL(pedParam0))
				return 1;

	if (flag)
		if (func_136(pedParam0, Global_1935630.f_40, false, true) < 2.5f)
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1935630.f_40, pedParam0))
				if (!bParam2)
					return 1;
				else if (PED::IS_PED_RAGDOLL(pedParam0))
					return 1;

	return 0;
}

BOOL func_143(Ped pedParam0, var uParam1, BOOL bParam2) // Position - 0x4959 Hash - 0x3E8B6245 ^0x84E29058
{
	Ped ped;
	Ped ped2;

	func_156(true, &ped, &ped2);

	if (!ENTITY::DOES_ENTITY_EXIST(ped) && !ENTITY::DOES_ENTITY_EXIST(ped2))
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ped != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
					if (!bParam2 || !func_144(uParam1, ped))
						return true;

	if (ENTITY::DOES_ENTITY_EXIST(ped2))
		if (ped2 != pedParam0)
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, Global_35, 17))
				if (!bParam2 || !func_144(uParam1, ped2))
					if (func_138(ped2, Global_36, true) < 5f)
						return true;

	return false;
}

BOOL func_144(var uParam0, Ped pedParam1) // Position - 0x4A47 Hash - 0x27FC2906 ^0x84B3F8B6
{
	Hash pedRelationshipGroupDefaultHash;

	if (DECORATOR::DECOR_EXIST_ON(pedParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(pedParam1, "bIsCriminal"))
		return true;

	if (PED::GET_PED_CONFIG_FLAG(pedParam1, 4, false))
		return true;

	pedRelationshipGroupDefaultHash = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(pedParam1);

	switch (pedRelationshipGroupDefaultHash)
	{
		case joaat("rel_gang_odriscoll"):
		case joaat("rel_gang_skinner_brothers"):
		case joaat("rel_gunslingers"):
		case joaat("rel_gang_creole"):
		case joaat("rel_gang_lemoyne_raiders"):
		case joaat("rel_gang_murfree_brood"):
		case joaat("rel_criminals"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_145(int iParam0) // Position - 0x4ABD Hash - 0x548D1D18 ^0x4AC0DF7D
{
	if (func_166())
		return false;

	return func_167(Global_1347702[58 /*49*/].f_15, true);
}

int func_146(var uParam0) // Position - 0x4ADF Hash - 0xD73B9827 ^0xAC2E3C80
{
	return uParam0->f_20;
}

BOOL func_147(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0x4AEB Hash - 0x9E17B061 ^0x19F2F061
{
	if (!bParam2)
		if (uParam1->f_4 == 0)
			return 0;

	if (iParam3 < 0f)
		iParam3 = uParam1->f_12;

	if (PED::IS_PED_FACING_PED(pedParam0, Global_35, 90f))
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(pedParam0, Global_35, -1082130432, -1082130432, -1082130432, -1082130432))
			return 1;
	else if (iParam3 < 1.5f)
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(pedParam0, Global_35))
			return 1;

	return 0;
}

BOOL func_148(int iParam0) // Position - 0x4B66 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_149(int iParam0) // Position - 0x4B99 Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_150(Ped pedParam0, Hash hParam1) // Position - 0x4C1A Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_151(Ped pedParam0, Hash hParam1) // Position - 0x4C48 Hash - 0xA54F3032 ^0xEB14A9F2
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

BOOL func_152(Ped pedParam0, Hash hParam1) // Position - 0x4C99 Hash - 0xA54F3032 ^0xEB14A9F2
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_150(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

void func_153(Ped pedParam0) // Position - 0x4D0B Hash - 0x446F1BDD ^0x92301E55
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

BOOL func_154() // Position - 0x4D29 Hash - 0x60155C48 ^0x6CED0E68
{
	if (func_168())
		return false;

	if (Global_1572887.f_12 == -1)
	{
		if (Global_1935630.f_44 == joaat("WEAPON_LASSO"))
			return PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, joaat("INPUT_ATTACK"));
	
		return PED::GET_PED_RESET_FLAG(Global_35, 311);
	}
	else
	{
		return Global_1954819.f_992[2];
	}

	return false;
}

void func_155(int iParam0, int iParam1) // Position - 0x4D7F Hash - 0x787BB1AC ^0x11099E69
{
	int num;
	int i;
	Player player;

	player = PLAYER::PLAYER_ID();

	if (!PLAYER::_0x72AD59F7B7FB6E24(player, 200))
	{
		*iParam1 = 0;
		return;
	}

	if (PLAYER::_0x1A6E84F13C952094(player, 200, iParam0))
	{
		for (i = 0; i < *iParam0; i = i + 1)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iParam0->[i]))
			{
			}
			else if (!PED::IS_PED_HUMAN(iParam0->[i]) && !(DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON(iParam0->[i], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam0->[i], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				num = num + 1;
			}
		}
	}

	*iParam1 = num;
	return;
}

BOOL func_156(BOOL bParam0, var uParam1, var uParam2) // Position - 0x4E27 Hash - 0x2A9340EF ^0xAD765E32
{
	BOOL num;
	Ped lassoTarget;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_32))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_32))
		{
			*uParam1 = Global_1935630.f_32;
			num = 1;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_33))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1935630.f_33))
		{
			if (PED::IS_PED_HOGTIED(Global_1935630.f_33) || ENTITY::IS_ENTITY_DEAD(Global_1935630.f_33))
			{
				*uParam2 = Global_1935630.f_33;
				num = 1;
			}
		}
	}

	if (Global_1935630.f_30 && !PED::IS_PED_INJURED(Global_35))
	{
		lassoTarget = PED::_GET_LASSO_TARGET(Global_35);
	
		if (ENTITY::DOES_ENTITY_EXIST(lassoTarget))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(lassoTarget))
			{
				*uParam1 = lassoTarget;
				num = 1;
			}
		}
	}

	return num;
}

Ped func_157(var uParam0) // Position - 0x4EEE Hash - 0xF229F24F ^0x47381422
{
	Ped pedIndexFromEntityIndex;
	Entity outEntity;

	if (pedIndexFromEntityIndex == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, joaat("INPUT_INTERACT_LOCKON_DETACH_HORSE")))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &outEntity, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(outEntity))
				{
					if (ENTITY::IS_ENTITY_A_PED(outEntity))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(outEntity)))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(outEntity);
							return pedIndexFromEntityIndex;
						}
					}
				}
			}
		}
	}

	if (uParam0->f_6 == 3)
	{
		if (pedIndexFromEntityIndex == 0)
			if (!Global_1935630.f_12)
				pedIndexFromEntityIndex = PED::_0x4B19F171450E0D4F(Global_35);
	
		if (pedIndexFromEntityIndex == 0)
			pedIndexFromEntityIndex = PED::_GET_LASSO_TARGET(Global_35);
	
		if (pedIndexFromEntityIndex != 0)
			if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex)))
					pedIndexFromEntityIndex = 0;
	}

	return pedIndexFromEntityIndex;
}

void func_158(var uParam0) // Position - 0x4F96 Hash - 0x59730BCA ^0xE779676B
{
	int i;

	if (Global_1935630.f_38 == 0)
	{
		func_60(uParam0, 67108864);
	
		for (i = 0; i < Global_1935630.f_39; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1935630.f_34[i]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1935630.f_34[i]))
				{
					func_61(uParam0, 67108864);
					break;
				}
			}
		}
	}

	return;
}

Hash func_159(Ped pedParam0, int iParam1) // Position - 0x4FFB Hash - 0xB13A3864 ^0x7FBAE642
{
	Hash weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true, iParam1, false);
	return weaponHash;
}

BOOL func_160(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x5012 Hash - 0x2C51465B ^0x98B13A1D
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (func_161(ENTITY::GET_ENTITY_COORDS(pedParam0, true, false), fParam1, fParam2, fParam3, fParam4))
			return true;

	return false;
}

BOOL func_161(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, float fParam6) // Position - 0x5040 Hash - 0xBF2250D5 ^0x34592C3E
{
	float screenX;
	float screenY;
	int hudScreenPositionFromWorldPosition;

	hudScreenPositionFromWorldPosition = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &screenX, &screenY);

	if (hudScreenPositionFromWorldPosition == 0)
		if (screenX > fParam3 && screenX < fParam4 && screenY > fParam5 && screenY < fParam6)
			return true;

	return false;
}

BOOL func_162(Ped pedParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x508A Hash - 0xE63CB60C ^0x5133A9E3
{
	float entityForwardVector;
	Vector3 vector;

	entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	vector = { uParam1 - ENTITY::GET_ENTITY_COORDS(pedParam0, false, false) };
	return ((entityForwardVector * vector) + (entityForwardVector.f_1 * vector.f_1)) / BUILTIN::VDIST(vector, 0f, 0f, 0f) > fParam4;
}

BOOL func_163(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x50CB Hash - 0x1D055735 ^0x5D260F19
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(pedParam0))
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, joaat("WEAPON_UNARMED"), iParam1))
			return true;
		else if (!bParam2)
			if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1935630.f_44) || Global_1935630.f_44 == joaat("weapon_melee_knife"))
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(pedParam0, Global_1935630.f_44, iParam1))
						return true;

	return false;
}

BOOL func_164(Ped pedParam0) // Position - 0x5144 Hash - 0xF2F988FE ^0xA63CD631
{
	Hash scenarioPointTypePedIsUsing;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	if (!PED::IS_PED_USING_ANY_SCENARIO(pedParam0))
		return false;

	scenarioPointTypePedIsUsing = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(pedParam0);

	if (scenarioPointTypePedIsUsing == 0)
		return false;

	if (scenarioPointTypePedIsUsing == joaat("world_player_sleep_ground") || scenarioPointTypePedIsUsing == joaat("PROP_PLAYER_SLEEP_A_FRAME_TENT_PLAYER_CAMPS") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_arm") || scenarioPointTypePedIsUsing == joaat("world_human_sleep_ground_pillow") || scenarioPointTypePedIsUsing == joaat("world_animal_dog_sleeping") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow") || scenarioPointTypePedIsUsing == joaat("prop_player_prpty_save_game") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_left") || scenarioPointTypePedIsUsing == joaat("prop_human_sleep_bed_pillow_right"))
		return true;

	if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_a_frame") || scenarioPointTypePedIsUsing == joaat("world_player_sleep_bedroll"))
	{
		scenarioPointTypePedIsUsing = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(pedParam0);
	
		if (scenarioPointTypePedIsUsing == joaat("prop_player_sleep_tent_male_a"))
			return true;
	
		return false;
	}

	return false;
}

int func_165(Ped pedParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x522C Hash - 0xDD2F88C2 ^0x29E97850
{
	int weaponHash;

	weaponHash = joaat("WEAPON_UNARMED");

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || !PED::IS_PED_HUMAN(pedParam0))
		return weaponHash;

	if (WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam1, iParam2, bParam3))
		return weaponHash;

	return weaponHash;
}

BOOL func_166() // Position - 0x526E Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_28() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_167(int iParam0, BOOL bParam1) // Position - 0x5293 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_100(iParam0))
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

BOOL func_168() // Position - 0x52C4 Hash - 0x50F36DAB ^0xF55A49EF
{
	switch (Global_1935630.f_44)
	{
		case joaat("weapon_melee_lantern"):
		case joaat("weapon_kit_binoculars"):
		case joaat("weapon_melee_lantern_electric"):
		case joaat("weapon_melee_davy_lantern"):
			return true;
	
		default:
		
	}

	return false;
}

