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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 20;
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
	eStackSize essLocal_91 = 0;
	eStackSize essLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	Any anLocal_96 = 0;
	Vehicle veLocal_97 = 0;
	Entity eLocal_98 = 0;
	int iLocal_99 = 0;
	BOOL bLocal_100 = 0;
	BOOL bLocal_101 = 0;
	BOOL bLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	AnimScene ansLocal_105 = 0;
	BOOL bLocal_106 = 0;
	eStackSize essScriptParam_0 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x2D995AFB ^0xF715F321
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	if (essScriptParam_0 == -1)
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	Global_1430221.f_4 = 1;
	essLocal_92 = essScriptParam_0;
	func_5(&uLocal_26, 0, &func_2, &func_3, &func_4);
	func_5(&uLocal_26, 1, &func_6, &func_7, &func_8);
	func_5(&uLocal_26, 2, &func_9, &func_10, &func_11);
	func_5(&uLocal_26, 3, &func_12, &func_13, &func_14);
	func_5(&uLocal_26, 4, &func_15, &func_16, &func_17);
	func_5(&uLocal_26, 5, &func_18, &func_19, &func_20);
	func_5(&uLocal_26, 6, &func_21, &func_22, &func_23);
	func_5(&uLocal_26, 7, &func_24, &func_25, &func_26);
	func_5(&uLocal_26, 8, &func_27, &func_28, &func_29);
	func_30(&uLocal_26, 0);

	while (!func_31(true))
	{
		BUILTIN::WAIT(0);
		func_32();
		func_33(&uLocal_26);
	}

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

int func_1() // Position - 0x10D Hash - 0xC73F6D1F ^0x6E4A6A8D
{
	int trainTrackFromTrainVehicle;

	Global_1430221.f_4 = 0;
	func_34(true);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_97) && !ENTITY::IS_ENTITY_DEAD(veLocal_97))
	{
		trainTrackFromTrainVehicle = VEHICLE::_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE(veLocal_97);
	
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(trainTrackFromTrainVehicle))
			VEHICLE::_0x38E7DD70A242D5CB(trainTrackFromTrainVehicle, 1);
	}

	func_36(func_35());
	func_36(func_37());

	if (iLocal_99 != -1)
	{
		func_38(iLocal_99);
		func_39(iLocal_99, 1024);
	}

	if (func_41(1870112085, func_40(false), joaat("SLOTID_SATCHEL"), true) >= 1)
		func_42(1870112085, 1, -142743235, 0, false);

	if (bLocal_106)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_IN(0);
	
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		STREAMING::CLEAR_FOCUS();
	
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			STREAMING::LOAD_SCENE_STOP();
	
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	
		if (bLocal_100)
		{
			TASK::CLEAR_PED_TASKS(func_43(1), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), false);
		}
	
		if (bLocal_101)
		{
			TASK::CLEAR_PED_TASKS(func_43(7), true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), false);
		}
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_105))
		ANIMSCENE::_DELETE_ANIM_SCENE(ansLocal_105);

	func_44(true);
	return 1;
}

void func_2() // Position - 0x216 Hash - 0xCE8CCE42 ^0x333F2CBD
{
	func_45();
	func_46(-1, false, 0, false, false);
	LAW::_0xE94B5E938619712E();
	func_34(false);
	func_47(&(Global_1392581.f_3), 8);
	CAM::DO_SCREEN_FADE_OUT(&func_18);
	bLocal_102 = false;
	essLocal_91 = func_48();
	iLocal_99 = func_49(essLocal_92);
	bLocal_106 = true;

	if (func_51(Global_35, func_43(7), func_50(7), true) && !TASK::IS_PED_IN_WRITHE(func_43(7)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), true);
		bLocal_101 = true;
	}

	if (func_51(Global_35, func_43(1), func_50(1), true) && !TASK::IS_PED_IN_WRITHE(func_43(1)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), true);
		bLocal_100 = true;
	}

	func_52(essLocal_91, false, &uLocal_93, &anLocal_96);

	if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
		STREAMING::LOAD_SCENE_START_SPHERE(uLocal_93, 40f, 0);

	func_53(func_37());
	iLocal_103 = MISC::GET_GAME_TIMER();
	return;
}

int func_3() // Position - 0x2ED Hash - 0xF024B4B6 ^0x3B51E26C
{
	int i;

	LAW::_0xE94B5E938619712E();

	if (!CAM::IS_SCREEN_FADED_OUT())
		return -1;

	if (!bLocal_102)
	{
		func_54(iLocal_99);
		func_55(iLocal_99, 1024);
		func_39(iLocal_99, 2);
		func_39(iLocal_99, 65536);
		func_39(iLocal_99, 4096);
		i = 0;
	
		for (i = 0; i < 8; i = i + 1)
		{
			if (i != iLocal_99)
			{
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[i /*373*/].f_1, true);
				func_55(i, 2);
				VEHICLE::_0x0D5FDF0D36FA10CD(Global_1425371[i /*373*/].f_1);
			}
		}
	
		VEHICLE::DELETE_ALL_TRAINS();
		func_57(func_56(PLAYER::PLAYER_ID()), 250f, true, false, false, false, false);
		bLocal_102 = true;
	}

	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		if (MISC::GET_GAME_TIMER() - iLocal_103 > 20000)
			return 8;
	
		return -1;
	}

	if (Global_1310750.f_16037 != 0)
	{
		func_45();
		func_46(-1, false, 0, false, false);
		return -1;
	}

	if (!STREAMING::IS_LOAD_SCENE_LOADED())
		return -1;

	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1)))
		return -1;

	return 1;
}

void func_4() // Position - 0x401 Hash - 0xC9992D9D ^0x3C9FBEC0
{
	LAW::_0xE94B5E938619712E();
	STREAMING::LOAD_SCENE_STOP();
	STREAMING::CLEAR_FOCUS();
	return;
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x415 Hash - 0x43B9B719 ^0x9756C8D9
{
	int num;

	num = iParam1;

	if (num < 0 || num >= 20)
		return;

	uParam0->f_1[num /*3*/] = iParam2;
	uParam0->f_1[num /*3*/].f_1 = iParam3;
	uParam0->f_1[num /*3*/].f_2 = iParam4;
	return;
}

void func_6() // Position - 0x458 Hash - 0xE345F35C ^0x17EB9DF3
{
	LAW::_0xE94B5E938619712E();

	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
	{
		VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, uLocal_93, anLocal_96);
	}

	iLocal_103 = MISC::GET_GAME_TIMER();
	return;
}

int func_7() // Position - 0x4A0 Hash - 0xC987076A ^0x3EB0662A
{
	LAW::_0xE94B5E938619712E();

	if (!ENTITY::DOES_ENTITY_EXIST(VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1)))
	{
		VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, uLocal_93, anLocal_96);
	
		if (MISC::GET_GAME_TIMER() - iLocal_103 > 20000)
			return 8;
	
		return -1;
	}
	else
	{
		veLocal_97 = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	
		if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
		{
			VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
			VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, uLocal_93, anLocal_96);
		}
	}

	if (!VEHICLE::_HAS_TRAIN_LOADED(veLocal_97))
		return -1;

	return 2;
}

void func_8() // Position - 0x576 Hash - 0xCE5FB49E ^0x68FB32B8
{
	LAW::_0xE94B5E938619712E();
	return;
}

void func_9() // Position - 0x582 Hash - 0x50F5FA1A ^0x4A2734E0
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();

	if (func_41(1870112085, func_40(false), joaat("SLOTID_SATCHEL"), true) >= 1)
		func_42(1870112085, 1, -142743235, 0, false);

	eLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_97, 4);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_98))
		ENTITY::_0x6C31B06E91518269(eLocal_98, 1);

	return;
}

int func_10() // Position - 0x5D7 Hash - 0x32D2386C ^0xC7D3796B
{
	Vector3 entityCoords;
	int num;

	LAW::_0xE94B5E938619712E();

	if (!ENTITY::DOES_ENTITY_EXIST(eLocal_98) || ENTITY::IS_ENTITY_DEAD(eLocal_98))
	{
		eLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_97, 4);
		return -1;
	}
	else
	{
		if (!ENTITY::_0xC2E71D7E0A7B4C89(eLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(eLocal_98, 1);
			return -1;
		}
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eLocal_98, true, false) };
	
		if (!TASK::DOES_SCENARIO_EXIST_IN_AREA(entityCoords, 5f, false, Global_35, false))
		{
			if (MISC::GET_GAME_TIMER() - iLocal_103 > 20000)
			{
				return 8;
			}
			else
			{
				num = MISC::GET_GAME_TIMER() - iLocal_103;
				return -1;
			}
		}
	
		if (!func_58(Global_35, SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS))
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(eLocal_98, true, false), 5f);
	}

	if (func_58(Global_35, SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS))
	{
		func_59(func_56(PLAYER::PLAYER_ID()), 2f, false);
		CAM::SET_CINEMATIC_MODE_ACTIVE(true);
		iLocal_103 = MISC::GET_GAME_TIMER();
		return 3;
	}

	return -1;
}

void func_11() // Position - 0x6AB Hash - 0xCE5FB49E ^0x68FB32B8
{
	LAW::_0xE94B5E938619712E();
	return;
}

void func_12() // Position - 0x6B7 Hash - 0xCE5FB49E ^0x68FB32B8
{
	LAW::_0xE94B5E938619712E();
	return;
}

int func_13() // Position - 0x6C3 Hash - 0x4E3F725D ^0xE288BDB9
{
	if (!CAM::IS_CINEMATIC_CAM_RENDERING())
		iLocal_103 = MISC::GET_GAME_TIMER();

	LAW::_0xE94B5E938619712E();

	if (MISC::GET_GAME_TIMER() - iLocal_103 > 3500)
	{
		VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_97, false);
		VEHICLE::_0xA72B1BF3857B94D7(veLocal_97, true);
		VEHICLE::_0xDD100CE1EBBF37E3(veLocal_97, 0);
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(veLocal_97, false);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		VEHICLE::_0x34BCF6209B9668A7(Global_1425371[iLocal_99 /*373*/].f_1, 1);
		return 4;
	}

	return -1;
}

void func_14() // Position - 0x743 Hash - 0xCE5FB49E ^0x68FB32B8
{
	LAW::_0xE94B5E938619712E();
	return;
}

void func_15() // Position - 0x74F Hash - 0x4BD6542 ^0xC3EA7C82
{
	LAW::_0xE94B5E938619712E();
	iLocal_103 = MISC::GET_GAME_TIMER();
	return;
}

int func_16() // Position - 0x761 Hash - 0x60574EAB ^0x21FAF5DC
{
	LAW::_0xE94B5E938619712E();

	if (MISC::GET_GAME_TIMER() - iLocal_103 > 6000)
	{
		if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
			CAM::DO_SCREEN_FADE_OUT(3000);
	
		if (CAM::IS_SCREEN_FADED_OUT())
			return 5;
	
		return -1;
	}

	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN() && CAM::IS_CINEMATIC_CAM_RENDERING())
		CAM::DO_SCREEN_FADE_IN(1000);

	return -1;
}

void func_17() // Position - 0x7C4 Hash - 0xCE5FB49E ^0x68FB32B8
{
	LAW::_0xE94B5E938619712E();
	return;
}

void func_18() // Position - 0x7D0 Hash - 0x402D38A6 ^0x5755F5E4
{
	LAW::_0xE94B5E938619712E();

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_105))
		ansLocal_105 = ANIMSCENE::_CREATE_ANIM_SCENE(func_60(-1), 0, 0, false, true);

	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(ansLocal_105, true))
		ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_105);

	return;
}

int func_19() // Position - 0x806 Hash - 0xE5AB6776 ^0x46343095
{
	LAW::_0xE94B5E938619712E();

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_105) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_105, false) && CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN() && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_105, true, false))
	{
		ANIMSCENE::START_ANIM_SCENE(ansLocal_105);
		func_52(essLocal_92, true, &uLocal_93, &anLocal_96);
	}

	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(ansLocal_105))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(ansLocal_105, false) && CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_53(func_35());
			func_57(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 40f, true, false, false, false, false);
		}
	
		if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(ansLocal_105) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(ansLocal_105, false))
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			return 6;
		}
	}

	return -1;
}

void func_20() // Position - 0x8BB Hash - 0xD4EB0EF ^0x8AD38BD3
{
	func_36(func_35());
	LAW::_0xE94B5E938619712E();
	return;
}

void func_21() // Position - 0x8CF Hash - 0xA920F6DD ^0x1694E5A9
{
	int num;
	int num2;

	LAW::_0xE94B5E938619712E();
	STREAMING::REQUEST_COLLISION_AT_COORD(uLocal_93);

	if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
		VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, uLocal_93, anLocal_96);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_98))
		ENTITY::_0x6C31B06E91518269(eLocal_98, 1);

	VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(veLocal_97, true);
	VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	iLocal_103 = MISC::GET_GAME_TIMER();
	num = func_61(essLocal_91, essLocal_92);
	func_62(num, 0, 0, false, 1);
	num2 = func_63(essLocal_91, 1);
	func_64(1, num2, -695085701, 1, num);
	return;
}

int func_22() // Position - 0x973 Hash - 0xC93367C3 ^0x5B62580D
{
	Vector3 vector;
	var unk3;
	float radius;
	int trainTrackFromTrainVehicle;
	var unk6;
	float num;
	var unk9;
	float num2;
	int num3;

	LAW::_0xE94B5E938619712E();

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			if (!STREAMING::IS_LOAD_SCENE_LOADED())
				return -1;
		}
		else if (func_65(Global_35, uLocal_93, true) < 1000f)
		{
			vector = { uLocal_93 };
			radius = func_66(veLocal_97, uLocal_93, &unk3);
		
			if (!_IS_NULL_VECTOR(unk3))
				vector = { unk3 };
		
			STREAMING::LOAD_SCENE_START_SPHERE(vector, radius, 1);
			iLocal_103 = MISC::GET_GAME_TIMER();
			return -1;
		}
		else
		{
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iLocal_99 /*373*/].f_1))
			{
				VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, uLocal_93, anLocal_96);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
			}
		
			if (!func_58(Global_35, SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS))
				ENTITY::SET_ENTITY_COORDS(Global_35, uLocal_93, true, false, true, true);
		
			return -1;
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(eLocal_98))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_97))
			{
				veLocal_97 = VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iLocal_99 /*373*/].f_1);
				VEHICLE::_0x718EB706B6E998A0(Global_1425371[iLocal_99 /*373*/].f_1);
				VEHICLE::_0xD0BA1853D76683C8(Global_1425371[iLocal_99 /*373*/].f_1, uLocal_93, anLocal_96);
				return -1;
			}
			else
			{
				eLocal_98 = VEHICLE::GET_TRAIN_CARRIAGE(veLocal_97, 4);
				VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
				VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
				return -1;
			}
		}
		else if (!ENTITY::_0xC2E71D7E0A7B4C89(eLocal_98))
		{
			ENTITY::_0x6C31B06E91518269(eLocal_98, 1);
			return -1;
		}
	}

	if (MISC::GET_GAME_TIMER() - iLocal_103 < 500)
		return -1;

	if (!func_58(Global_35, SCRIPT_TASK_USE_NEAREST_TRAIN_SCENARIO_TO_POS))
	{
		if (TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(eLocal_98, true, false), 5f, false, Global_35, false))
			TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(Global_35, ENTITY::GET_ENTITY_COORDS(eLocal_98, true, false), 5f);
	
		if (CAM::IS_SCREEN_FADED_OUT())
			return -1;
	}

	if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		func_59(func_56(PLAYER::PLAYER_ID()), 2f, false);
		VEHICLE::_SET_TRAIN_STOPS_FOR_STATIONS(veLocal_97, true);
		VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 8f);
		trainTrackFromTrainVehicle = VEHICLE::_GET_TRAIN_TRACK_FROM_TRAIN_VEHICLE(veLocal_97);
		VEHICLE::_0x34BCF6209B9668A7(trainTrackFromTrainVehicle, 1);
		VEHICLE::_0x38E7DD70A242D5CB(trainTrackFromTrainVehicle, 0);
		CAM::DO_SCREEN_FADE_IN(3000);
	
		if (bLocal_100)
		{
			func_68(essLocal_92, &unk6, &num, true);
			func_69(func_43(1), unk6, num, 32, 1073741824);
			TASK::TASK_STAND_STILL(func_43(1), -1);
		}
	
		if (bLocal_101)
		{
			func_68(essLocal_92, &unk9, &num2, false);
			func_69(func_43(7), unk9, num2, 32, 1073741824);
			TASK::TASK_STAND_STILL(func_43(7), -1);
		}
	
		STREAMING::LOAD_SCENE_STOP();
		STREAMING::CLEAR_FOCUS();
		iLocal_104 = MISC::GET_GAME_TIMER();
		return -1;
	}
	else if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || !ENTITY::DOES_ENTITY_EXIST(veLocal_97))
		{
			if (STREAMING::IS_LOAD_SCENE_ACTIVE())
				STREAMING::LOAD_SCENE_STOP();
		
			return 7;
		}
	}

	if (bLocal_100)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(func_43(1), 0f);
	
		if (!func_58(func_43(1), SCRIPT_TASK_STAND_STILL))
			TASK::TASK_STAND_STILL(func_43(1), -1);
	}

	if (bLocal_101)
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(func_43(7), 0f);
	
		if (!func_58(func_43(7), SCRIPT_TASK_STAND_STILL))
			TASK::TASK_STAND_STILL(func_43(7), -1);
	}

	num3 = MISC::GET_GAME_TIMER() - iLocal_104;

	if (num3 < 40000 && !VEHICLE::IS_TRAIN_WAITING_AT_STATION(veLocal_97))
		return -1;

	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(3000);
		STREAMING::CLEAR_FOCUS();
	
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
			STREAMING::LOAD_SCENE_STOP();
	}

	VEHICLE::_0xA7966807953A18EE(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	VEHICLE::_0x15206E88FF7617DF(Global_1425371[iLocal_99 /*373*/].f_1, 0f);
	return 7;
}

void func_23() // Position - 0xD15 Hash - 0xE5F3019B ^0x69BC0324
{
	if (bLocal_100)
	{
		TASK::CLEAR_PED_TASKS(func_43(1), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(1), false);
	}

	if (bLocal_101)
	{
		TASK::CLEAR_PED_TASKS(func_43(7), true, false);
		ENTITY::SET_ENTITY_INVINCIBLE(func_43(7), false);
	}

	LAW::_0xE94B5E938619712E();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	return;
}

void func_24() // Position - 0xD77 Hash - 0x9DAAF5E1 ^0xC80CA1F8
{
	bLocal_106 = false;
	LAW::_0xE94B5E938619712E();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	func_70(&(Global_1392581.f_3), 8);
	iLocal_103 = MISC::GET_GAME_TIMER();
	func_36(func_37());
	return;
}

int func_25() // Position - 0xDAB Hash - 0x48A69A23 ^0x614A8110
{
	LAW::_0xE94B5E938619712E();

	if (MISC::GET_GAME_TIMER() - iLocal_103 > 30000 || !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(PLAYER::PLAYER_PED_ID(), 0) > 0)
		return 8;

	return -1;
}

void func_26() // Position - 0xDEB Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_27() // Position - 0xDF3 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_28() // Position - 0xDFB Hash - 0x4CB2E200 ^0xE4AB59A
{
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return -1;
}

void func_29() // Position - 0xE0D Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_30(var uParam0, int iParam1) // Position - 0xE15 Hash - 0xD78A7B45 ^0xD78A7B45
{
	int num;

	num = iParam1;

	if (num < 0 || num >= 20)
		return;

	*uParam0 = num;
	func_71(uParam0);
	return;
}

BOOL func_31(BOOL bParam0) // Position - 0xE41 Hash - 0xD5646B1 ^0x7FAD7A3A
{
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

	return false;
}

void func_32() // Position - 0xE9D Hash - 0x6942A1E1 ^0xD3CB479E
{
	if (uLocal_26.f_62 != 7 && uLocal_26.f_62 != 8)
	{
		if (uLocal_26.f_62 != -1)
		{
			VEHICLE::SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(true);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		
			if (uLocal_26.f_62 != 0 && uLocal_26.f_62 != 1)
				CAM::FORCE_CINEMATIC_RENDERING_THIS_UPDATE(true);
		
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::_0x5651516D947ABC53();
		}
	
		PAD::DISABLE_ALL_CONTROL_ACTIONS(PLAYER_CONTROL);
	}

	return;
}

void func_33(var uParam0) // Position - 0xEF2 Hash - 0x69FC886C ^0xA13BCC6F
{
	int num;

	num = 0;

	if (uParam0->f_62 != -1 && uParam0->f_64 == -1)
	{
		uParam0->f_1[uParam0->f_62 /*3*/].f_1();
		uParam0->f_64 = StackVal;
	}

	while (uParam0->f_64 != -1)
	{
		if (uParam0->f_62 != -1)
			uParam0->f_1[uParam0->f_62 /*3*/].f_2();
	
		uParam0->f_62 = uParam0->f_64;
		uParam0->f_1[uParam0->f_62 /*3*/]();
		uParam0->f_1[uParam0->f_62 /*3*/].f_1();
		uParam0->f_64 = StackVal;
		num = num + 1;
	
		if (num > 10)
			break;
	}

	return;
}

void func_34(BOOL bParam0) // Position - 0xF76 Hash - 0x5D1342E6 ^0x2E0382D7
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_72(&Global_1935630, 4194304);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_73(&Global_1935630, 4194304);
	}

	MISC::ENABLE_DISPATCH_SERVICE(DT_BikerBackup, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceRiders, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceVehicleRequest, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitPulledOver, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceAutomobileWaitCruising, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_Gangs, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatHelicopter, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_PoliceBoat, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(DT_ArmyVehicle, bParam0);
	return;
}

char* func_35() // Position - 0x1019 Hash - 0xBAF7C719 ^0xBAF7C719
{
	return "FastTravel_Train_Ticket_Clouds_Sequence_Scene";
}

void func_36(char* sParam0) // Position - 0x1023 Hash - 0x690E6520 ^0x1F6FF12D
{
	AUDIO::STOP_AUDIO_SCENE(sParam0);
	return;
}

char* func_37() // Position - 0x1031 Hash - 0xA2CDF3C4 ^0xA2CDF3C4
{
	return "FastTravel_Train_Ticket_Sequence_Scene";
}

void func_38(int iParam0) // Position - 0x103C Hash - 0x7D366319 ^0x7D366319
{
	func_39(iParam0, 16);
	return;
}

void func_39(int iParam0, BOOL bParam1) // Position - 0x104C Hash - 0x1A79E98B ^0x1A79E98B
{
	if (!func_74(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] - Global_40.f_11029[iParam0 /*5*/] && bParam1;
	return;
}

struct<4> func_40(BOOL bParam0) // Position - 0x1083 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_76(joaat("character"), func_75(), joaat("SLOTID_NONE"), bParam0);
}

int func_41(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x109F Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_77(hParam0, 0))
		return 0;

	guid = { func_76(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_78(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_42(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x10E7 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_77(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_79(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_80(hParam0, iParam1, hParam2, iParam3, bParam4);

	unk6 = { func_76(hParam0, unk, unk.f_4, bParam4) };
	return func_81(hParam0, &unk6, &unk, iParam1, hParam2, iParam3, bParam4);
}

Ped func_43(int iParam0) // Position - 0x1158 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_82(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_44(BOOL bParam0) // Position - 0x1184 Hash - 0x7248E6C9 ^0xFE629142
{
	int i;
	int j;

	if (bParam0)
	{
		VEHICLE::_0x2A7413168F6CD5A8();
	
		for (i = 0; i <= 4; i = i + 1)
		{
			func_55(i, 4096);
		
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[i /*373*/].f_1))
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[i /*373*/].f_1, false);
		}
	}
	else
	{
		for (j = 0; j <= 4; j = j + 1)
		{
			if (VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[j /*373*/].f_1))
				VEHICLE::_0xF8F7DA13CFBD4532(Global_1425371[j /*373*/].f_1, true);
		}
	
		VEHICLE::_0x4C05B42A8D937796();
		VEHICLE::_0x16B86A49E072AA85();
	}

	if (func_83() == -1)
		Global_1430221.f_1 = !bParam0;

	return;
}

void func_45() // Position - 0x1225 Hash - 0x18ACD9D3 ^0xB2ADEAB8
{
	if (!func_84(Global_1327479))
		return;

	if (SCRIPTS::DOES_SCRIPT_EXIST(&(Global_1310750[Global_1327479 /*111*/].f_40)))
		if (SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1310750[Global_1327479 /*111*/].f_40)))
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1310750[Global_1327479 /*111*/].f_40));

	func_85(0);
	Global_1327479 = -1;
	Global_1310750.f_16075 = 0;
	Global_1310750.f_16076 = 0;
	Global_1310750.f_16103 = { 0f, 0f, 0f };
	return;
}

void func_46(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1298 Hash - 0xEF5C52D ^0xEF5C52D
{
	int i;
	int num;

	bParam1;

	if (func_86() == 0 && !bParam1)
		return;

	for (i = 0; i < 4; i = i + 1)
	{
		num = Global_1310750.f_13321[i /*9*/];
	
		if (func_84(num) && !func_87(num, iParam2) && !bParam3 || !func_88(num) && !bParam4 || !func_89(num))
			if (num != iParam0)
				func_90(i);
	}

	return;
}

void func_47(BOOL bParam0, int iParam1) // Position - 0x1326 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*bParam0 = *bParam0 || iParam1;
	return;
}

eStackSize func_48() // Position - 0x1337 Hash - 0x4228A1C2 ^0x45DCDFAE
{
	return Global_1894899.f_2;
}

int func_49(int iParam0) // Position - 0x1345 Hash - 0xDEA9D7E7 ^0xDEA9D7E7
{
	switch (iParam0)
	{
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
	}

	return 0;
}

float func_50(int iParam0) // Position - 0x1394 Hash - 0x9BB7FBA3 ^0xA973C68A
{
	Ped model;
	int rank;
	int defaultMaxAttributeRank;
	float num;
	Any any;
	int rank2;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;

	iParam0 = func_82(iParam0);

	if (iParam0 == -1)
		return -1f;

	if (iParam0 >= 7)
		return -1f;

	model = func_91(iParam0);

	if (!STREAMING::IS_MODEL_VALID(model))
		return -1f;

	rank = func_92(iParam0);
	defaultMaxAttributeRank = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(model, 7);
	num = TASK::_0xEB67D4E056C85A81(rank);
	any = TASK::_0x78D8C1D4EB80C588(rank);

	if (rank >= defaultMaxAttributeRank)
		return num;

	rank2 = func_92(iParam0) + 1;
	num2 = func_93(iParam0);
	num3 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank));
	num4 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(model, 7, rank2));
	num5 = num2 - num3;
	num6 = num4 - num3;
	num7 = num5 / num6;
	num8 = func_94(num, any, num7);
	return num8;
}

BOOL func_51(Ped pedParam0, Ped pedParam1, float fParam2, BOOL bParam3) // Position - 0x144E Hash - 0x6DF7EDD6 ^0x5000CFB6
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return false;

	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(pedParam1, bParam3, false)) <= fParam2 * fParam2)
		return true;

	return false;
}

void func_52(eStackSize essParam0, BOOL bParam1, var uParam2, var uParam3) // Position - 0x1496 Hash - 0x9BE24A0D ^0x9BE24A0D
{
	switch (essParam0)
	{
		case 5:
			if (bParam1)
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2643.1f, -1482.2f, 45.5f };
				*uParam3 = 0;
			}
			break;
	
		case 23:
			if (bParam1)
			{
				*uParam2 = { -1143f, -545.4f, 86.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1067.0186f, -604.0603f, 78.0298f };
				*uParam3 = 0;
			}
			break;
	
		case 28:
			if (bParam1)
			{
				*uParam2 = { -1280f, 477.1f, 93.7f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -1333.3279f, 374.2152f, 94.938f };
				*uParam3 = 0;
			}
			break;
	
		case 69:
			if (bParam1)
			{
				*uParam2 = { 1529.7f, 477.9f, 90.2f };
				*uParam3 = 1;
			}
			else
			{
				*uParam2 = { 1529.5947f, 405.6096f, 89.3616f };
				*uParam3 = 1;
			}
			break;
	
		case 76:
			if (bParam1)
			{
				*uParam2 = { -190.6f, 589.1f, 113.2f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { -136.938f, 659.54f, 112.672f };
				*uParam3 = 0;
			}
			break;
	
		case 78:
			if (bParam1)
			{
				*uParam2 = { 2884.136f, 1211.7716f, 44.32313f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 2978.219f, 1344.3f, 42.941f };
				*uParam3 = 0;
			}
			break;
	
		case 105:
			if (bParam1)
			{
				*uParam2 = { 1196.2f, -1281.2f, 76.6f };
				*uParam3 = 0;
			}
			else
			{
				*uParam2 = { 1307.31f, -1382.5f, 75.3375f };
				*uParam3 = 0;
			}
			break;
	}

	return;
}

void func_53(char* sParam0) // Position - 0x165F Hash - 0xE4891C9B ^0x530C3C51
{
	AUDIO::START_AUDIO_SCENE(sParam0);
	return;
}

Vehicle func_54(int iParam0) // Position - 0x166E Hash - 0xD6FCDEE8 ^0xA17CE125
{
	if (!func_74(iParam0))
		return 0;

	if (!VEHICLE::_DOES_TRAIN_EXIST_ON_TRACK(Global_1425371[iParam0 /*373*/].f_1))
		return 0;

	func_55(iParam0, 16);
	return VEHICLE::_GET_TRAIN_VEHICLE_FROM_TRACK_INDEX(Global_1425371[iParam0 /*373*/].f_1);
}

void func_55(int iParam0, BOOL bParam1) // Position - 0x16B2 Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_74(iParam0))
		return;

	Global_40.f_11029[iParam0 /*5*/] = Global_40.f_11029[iParam0 /*5*/] || bParam1;
	return;
}

Vector3 func_56(Player plParam0) // Position - 0x16DE Hash - 0xFD8C75C2 ^0xB4859571
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false, false);
}

void func_57(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x16F2 Hash - 0x5BA5D77C ^0xF663B46C
{
	int num;

	num = 3490746;

	if (bParam4)
		num = num | 1;

	if (bParam5)
		num = num | 72;

	if (bParam6)
		num = num | 6;

	if (bParam7)
		num = num | 524288;

	if (bParam8)
		num = num | 131072;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

BOOL func_58(Ped pedParam0, eScriptTaskHash esthParam1) // Position - 0x174A Hash - 0x37FB14EB ^0x7E496A4A
{
	int scriptTaskStatus;

	scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1, true);

	if (scriptTaskStatus == 1 || scriptTaskStatus == 0)
		return true;

	return false;
}

void func_59(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Position - 0x1773 Hash - 0xDCCB3575 ^0xAC48C8F6
{
	int num;

	num = 16384;

	if (bParam4)
		num = num | 524288;

	MISC::CLEAR_AREA(vParam0, fParam3, num);
	return;
}

const char* func_60(int iParam0) // Position - 0x179A Hash - 0x87657D28 ^0x87657D28
{
	char* str;
	const char* str2;
	const char* str3;

	str = "script@respawn@sky@SkyTL_";
	str2 = func_98(func_97(func_95(iParam0), func_96(), true, 63));
	str3 = func_98(func_97(str, str2, true, 63));
	return str3;
}

int func_61(eStackSize essParam0, eStackSize essParam1) // Position - 0x17D1 Hash - 0xB59825A8 ^0x1933F258
{
	switch (essParam0)
	{
		case 5:
			switch (essParam1)
			{
				case 23:
					return 750;
			
				case 28:
					return 1250;
			
				case 69:
					return 320;
			
				case 76:
					return 1000;
			
				case 78:
					return 510;
			
				case 105:
					return 480;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (essParam1)
			{
				case 5:
					return 750;
			
				case 28:
					return 420;
			
				case 69:
					return 630;
			
				case 76:
					return 460;
			
				case 78:
					return 1050;
			
				case 105:
					return 390;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (essParam1)
			{
				case 5:
					return 1250;
			
				case 23:
					return 420;
			
				case 69:
					return 920;
			
				case 76:
					return 360;
			
				case 78:
					return 880;
			
				case 105:
					return 750;
			
				default:
					break;
			}
			break;
	
		case 69:
			switch (essParam1)
			{
				case 5:
					return 320;
			
				case 23:
					return 630;
			
				case 28:
					return 920;
			
				case 76:
					return 220;
			
				case 78:
					return 440;
			
				case 105:
					return 590;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (essParam1)
			{
				case 5:
					return 1000;
			
				case 23:
					return 460;
			
				case 28:
					return 360;
			
				case 69:
					return 220;
			
				case 78:
					return 670;
			
				case 105:
					return 790;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (essParam1)
			{
				case 5:
					return 510;
			
				case 23:
					return 1050;
			
				case 28:
					return 880;
			
				case 69:
					return 440;
			
				case 76:
					return 670;
			
				case 105:
					return 840;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (essParam1)
			{
				case 5:
					return 480;
			
				case 23:
					return 390;
			
				case 28:
					return 750;
			
				case 69:
					return 590;
			
				case 76:
					return 790;
			
				case 78:
					return 840;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

void func_62(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1A4F Hash - 0x144F6B91 ^0x144F6B91
{
	func_99(iParam0);

	if (bParam3)
		func_100(iParam0, sParam1, iParam2);

	return;
}

int func_63(eStackSize essParam0, int iParam1) // Position - 0x1A6C Hash - 0x8A1A59F3 ^0x8A1A59F3
{
	if (iParam1 == 11)
		return 101;
	else if (iParam1 == 32)
		return 126;
	else if (iParam1 == 34)
		return 127;

	switch (essParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 17:
					return 22;
			
				case 31:
					return 118;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 141;
			
				case 6:
					return 143;
			
				case 26:
					return 142;
			
				case 27:
					return 144;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 39;
			
				case 1:
					return 46;
			
				case 2:
					return 45;
			
				case 3:
					return 42;
			
				case 4:
					return 41;
			
				case 6:
					return 43;
			
				case 7:
					return 47;
			
				case 8:
					return 37;
			
				case 9:
					return 44;
			
				case 10:
					return 38;
			
				case 12:
					return 48;
			
				case 13:
					return 49;
			
				case 14:
					return 50;
			
				case 15:
					return 36;
			
				case 18:
					return 55;
			
				case 21:
					return 54;
			
				case 22:
					return 51;
			
				case 29:
					return 109;
			
				case 30:
					return 110;
			
				case 31:
					return 111;
			
				case 33:
					return 52;
			
				default:
					break;
			}
			break;
	
		case 9:
			switch (iParam1)
			{
				case 0:
					return 145;
			
				case 6:
					return 147;
			
				case 19:
					return 58;
			
				case 26:
					return 146;
			
				case 27:
					return 148;
			
				default:
					break;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 18:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 18:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 23:
			switch (iParam1)
			{
				case 1:
					return 24;
			
				case 2:
					return 23;
			
				default:
					break;
			}
			break;
	
		case 26:
			switch (iParam1)
			{
				case 2:
					return 65;
			
				case 3:
					return 61;
			
				case 9:
					return 63;
			
				case 10:
					return 60;
			
				case 20:
					return 62;
			
				case 22:
					return 64;
			
				case 29:
					return 114;
			
				case 31:
					return 115;
			
				case 33:
					return 66;
			
				default:
					break;
			}
			break;
	
		case 28:
			switch (iParam1)
			{
				case 1:
					return 88;
			
				case 2:
					return 89;
			
				case 3:
					return 87;
			
				default:
					break;
			}
			break;
	
		case 38:
			switch (iParam1)
			{
				case 1:
					return 15;
			
				case 2:
					return 14;
			
				case 3:
					return 7;
			
				case 7:
					return 17;
			
				case 8:
					return 9;
			
				case 9:
					return 13;
			
				case 10:
					return 10;
			
				case 15:
					return 6;
			
				case 21:
					return 12;
			
				case 22:
					return 16;
			
				case 29:
					return 106;
			
				case 30:
					return 107;
			
				case 31:
					return 108;
			
				case 33:
					return 11;
			
				default:
					break;
			}
			break;
	
		case 65:
			switch (iParam1)
			{
				case 31:
					return 119;
			
				default:
					break;
			}
			break;
	
		case 69:
			switch (iParam1)
			{
				case 1:
					return 21;
			
				case 2:
					return 20;
			
				case 3:
					return 19;
			
				case 4:
					return 18;
			
				case 31:
					return 105;
			
				default:
					break;
			}
			break;
	
		case 71:
			switch (iParam1)
			{
				case 0:
					return 137;
			
				case 6:
					return 139;
			
				case 19:
					return 56;
			
				case 26:
					return 138;
			
				case 27:
					return 140;
			
				default:
					break;
			}
			break;
	
		case 76:
			switch (iParam1)
			{
				case 0:
					return 73;
			
				case 1:
					return 78;
			
				case 2:
					return 77;
			
				case 3:
					return 74;
			
				case 6:
					return 75;
			
				case 8:
					return 69;
			
				case 9:
					return 76;
			
				case 10:
					return 72;
			
				case 15:
					return 68;
			
				case 20:
					return 79;
			
				case 22:
					return 80;
			
				case 29:
					return 102;
			
				case 30:
					return 103;
			
				case 31:
					return 104;
			
				case 33:
					return 70;
			
				default:
					break;
			}
			break;
	
		case 78:
			switch (iParam1)
			{
				case 1:
					return 3;
			
				case 2:
					return 2;
			
				case 6:
					return 0;
			
				case 22:
					return 1;
			
				case 29:
					return 120;
			
				case 31:
					return 121;
			
				default:
					break;
			}
			break;
	
		case 79:
			switch (iParam1)
			{
				case 0:
					return 128;
			
				case 6:
					return 130;
			
				case 19:
					return 59;
			
				case 26:
					return 129;
			
				case 27:
					return 131;
			
				default:
					break;
			}
			break;
	
		case 82:
			switch (iParam1)
			{
				case 31:
					return 122;
			
				default:
					break;
			}
			break;
	
		case 90:
		case MICRO:
			switch (iParam1)
			{
				case 18:
					return 34;
			
				default:
					break;
			}
			break;
	
		case 92:
			switch (iParam1)
			{
				case 1:
					return 85;
			
				case 2:
					return 86;
			
				case 4:
					return 82;
			
				case 9:
					return 84;
			
				case 30:
					return 116;
			
				case 31:
					return 117;
			
				default:
					break;
			}
			break;
	
		case 98:
			switch (iParam1)
			{
				case 0:
					return 132;
			
				case 6:
					return 134;
			
				case 19:
					return 57;
			
				case 26:
					return 133;
			
				case 27:
					return 135;
			
				default:
					break;
			}
			break;
	
		case 101:
			switch (iParam1)
			{
				case 9:
					return 35;
			
				default:
					break;
			}
			break;
	
		case 105:
			switch (iParam1)
			{
				case 1:
					return 31;
			
				case 2:
					return 30;
			
				case 3:
					return 28;
			
				case 4:
					return 27;
			
				case 6:
					return 29;
			
				case 10:
					return 26;
			
				case 15:
					return 25;
			
				case 22:
					return 32;
			
				case 29:
					return 112;
			
				case 31:
					return 113;
			
				case 33:
					return 33;
			
				default:
					break;
			}
			break;
	
		case 110:
			switch (iParam1)
			{
				case 31:
					return 124;
			
				default:
					break;
			}
			break;
	
		case 113:
			switch (iParam1)
			{
				case 18:
					return 67;
			
				default:
					break;
			}
			break;
	
		case 115:
			switch (iParam1)
			{
				case 3:
					return 90;
			
				case 6:
					return 91;
			
				case 9:
					return 94;
			
				case 10:
					return 92;
			
				case 33:
					return 93;
			
				default:
					break;
			}
			break;
	
		case 117:
			switch (iParam1)
			{
				case 1:
					return 100;
			
				case 2:
					return 99;
			
				case 31:
					return 123;
			
				default:
					break;
			}
			break;
	
		case 120:
			switch (iParam1)
			{
				case 2:
					return 96;
			
				case 3:
					return 95;
			
				default:
					break;
			}
			break;
	
		case 123:
			switch (iParam1)
			{
				case 4:
					return 98;
			
				default:
					break;
			}
			break;
	
		case 127:
			switch (iParam1)
			{
				case 4:
					return 125;
			
				default:
					break;
			}
			break;
	}

	return -1;
}

void func_64(int iParam0, int iParam1, Hash hParam2, int iParam3, int iParam4) // Position - 0x2280 Hash - 0xFBAEB84E ^0x4E7CDE1B
{
	func_101(iParam1, hParam2);
	func_102(iParam1, iParam4);
	func_103(iParam1, iParam4);
	TELEMETRY::_TELEMETRY_SHOP_PURCHASE(func_104(iParam0), func_105(iParam1), hParam2, iParam3, iParam4);
	return;
}

float func_65(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x22B9 Hash - 0x3DAE1415 ^0x2267FA69
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), vParam1, bParam4);
}

float func_66(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, var uParam4) // Position - 0x22E1 Hash - 0xA770C4F8 ^0xC3D6E311
{
	Vector3 stationCoordsFromTrainStationData;
	int stationIndex;
	int currentTrackForTrain;
	float distanceBetweenCoords;

	distanceBetweenCoords = 40f;

	if (!_IS_NULL_VECTOR(vParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0))
		{
			stationIndex = VEHICLE::_0x1180A2974D251B7B(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0));
			currentTrackForTrain = VEHICLE::_GET_CURRENT_TRACK_FOR_TRAIN(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0));
		
			if (stationIndex >= 0)
			{
				stationCoordsFromTrainStationData = { VEHICLE::_GET_STATION_COORDS_FROM_TRAIN_STATION_DATA(currentTrackForTrain, stationIndex) };
			
				if (!_IS_NULL_VECTOR(stationCoordsFromTrainStationData))
				{
					*uParam4 = { func_106(vParam1, stationCoordsFromTrainStationData) };
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(stationCoordsFromTrainStationData, vParam1, true);
				}
			}
		}
	}

	if (distanceBetweenCoords > 100f)
		distanceBetweenCoords = 100f;

	return distanceBetweenCoords;
}

BOOL _IS_NULL_VECTOR(float fParam0, var uParam1, var uParam2) // Position - 0x237A Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

void func_68(eStackSize essParam0, var uParam1, var uParam2, BOOL bParam3) // Position - 0x23A4 Hash - 0xDC85C364 ^0xDC85C364
{
	switch (essParam0)
	{
		case 5:
			if (!bParam3)
				*uParam1 = { 2755.556f, -1418.4911f, 45.2074f };
			else
				*uParam1 = { 2756.556f, -1418.4911f, 45.2074f };
		
			*uParam2 = 145f;
			break;
	
		case 23:
			if (!bParam3)
				*uParam1 = { -1101.9226f, -574.2673f, 81.27955f };
			else
				*uParam1 = { -1102.9226f, -574.2673f, 81.27955f };
		
			*uParam2 = 0.85f;
			break;
	
		case 28:
			if (!bParam3)
				*uParam1 = { -1314.0752f, 387.03778f, 94.41888f };
			else
				*uParam1 = { -1315.0752f, 387.03778f, 94.41888f };
		
			*uParam2 = 72.5f;
			break;
	
		case 69:
			*uParam1 = { 1521.3335f, 419.06198f, 88.96367f };
		
			if (!bParam3)
				*uParam1 = { 1521.3335f, 419.06198f, 88.96367f };
			else
				*uParam1 = { 1522.3335f, 419.06198f, 88.96367f };
		
			*uParam2 = 4f;
			break;
	
		case 76:
			if (!bParam3)
				*uParam1 = { -168.79456f, 646.74176f, 112.53888f };
			else
				*uParam1 = { -169.79456f, 646.74176f, 112.53888f };
		
			*uParam2 = -122f;
			break;
	
		case 78:
			if (!bParam3)
				*uParam1 = { 2920.6404f, 1273.347f, 43.50124f };
			else
				*uParam1 = { 2921.6404f, 1273.347f, 43.50124f };
		
			*uParam2 = 2f;
			break;
	
		case 105:
			if (!bParam3)
				*uParam1 = { 1256.5093f, -1317.039f, 75.2567f };
			else
				*uParam1 = { 1257.5093f, -1317.039f, 75.2567f };
		
			*uParam2 = 2f;
			break;
	}

	return;
}

void func_69(Ped pedParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, int iParam5, int iParam6) // Position - 0x257B Hash - 0xF46E0F16 ^0xED4BA72A
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

	pedParam0 == func_107(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE();

	if (func_108(pedParam0))
		if (func_109(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0)))
			PHYSICS::_UNHITCH_HORSE(pedParam0);

	if (func_110(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
	
		if (PED::IS_PED_ON_VEHICLE(pedIndexFromEntityIndex, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedIndexFromEntityIndex, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn) && !ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_69(vehiclePedIsIn, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(pedIndexFromEntityIndex))
		{
			mount = PED::GET_MOUNT(pedIndexFromEntityIndex);
		
			if (ENTITY::DOES_ENTITY_EXIST(mount) && !ENTITY::IS_ENTITY_DEAD(mount))
			{
				iParam5 = iParam5 - iParam5 & 4;
				func_69(mount, vParam1, fParam4, iParam5, iParam6);
			}
		
			return;
		}
	}

	if (!func_110(iParam5, 32))
		if (isEntityAPed && ENTITY::IS_ENTITY_ATTACHED(pedParam0))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), false, true);

	if (func_110(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(pedParam0, false);
		}
	}
	else if (func_110(iParam5, 129))
	{
		if (func_110(iParam5, 128))
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &height))
				vParam1.f_2 = height;
	
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(pedParam0, vParam1, func_110(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(pedParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(pedParam0, vParam1, fParam4, true, func_110(iParam5, 32), true);
	}

	if (isEntityAPed)
	{
		if (!func_110(iParam5, 16))
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), pedCrouchMovement, 0, false);
	
		if (func_108(pedParam0))
		{
			pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0);
			PHYSICS::_UNHITCH_HORSE(pedIndexFromEntityIndex2);
		
			if (!func_110(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(pedIndexFromEntityIndex2, true, false);
				TASK::TASK_STAND_STILL(pedIndexFromEntityIndex2, -1);
			}
		}
	
		PED::SET_PED_CLOTH_PIN_FRAMES(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0), true);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedParam0) == Global_35 && !func_110(iParam5, 64))
		{
			!CAM::IS_SCREEN_FADED_OUT();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		}
	}

	return;
}

void func_70(BOOL bParam0, int iParam1) // Position - 0x27FD Hash - 0x9815F445 ^0x9815F445
{
	*bParam0 = *bParam0 - *bParam0 && iParam1;
	return;
}

void func_71(var uParam0) // Position - 0x2812 Hash - 0x255D2CF2 ^0x673C50AE
{
	uParam0->f_62 = -1;
	uParam0->f_64 = *uParam0;
	return;
}

void func_72(int iParam0, int iParam1) // Position - 0x2826 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_73(int iParam0, int iParam1) // Position - 0x283B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_74(int iParam0) // Position - 0x284C Hash - 0xB32B029D ^0xB32B029D
{
	if (iParam0 <= -1 || iParam0 >= 13)
		return false;

	return true;
}

struct<4> func_75() // Position - 0x286B Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

struct<4> func_76(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x2877 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_77(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_78(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_77(Hash hParam0, int iParam1) // Position - 0x28A8 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

int func_78(BOOL bParam0) // Position - 0x28C2 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_83() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

struct<5> func_79(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2903 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_40(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_111(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_118(hParam0, -1823706425))
			{
				unk = { func_76(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_118(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_76(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_116(bParam1) };
		
			switch (func_117(hParam0))
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
				unk = { func_76(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_112(bParam1) };
		
			if (bParam2 && func_113(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_114(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_114(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_115(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_119(unk, &unk28, bParam1, false))
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

BOOL func_80(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x2BC0 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_120(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_121(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_78(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

BOOL func_81(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x2C0C Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_120(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_119(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_121(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_78(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

int func_82(int iParam0) // Position - 0x2C9C Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_83() // Position - 0x2CB5 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_84(int iParam0) // Position - 0x2CC3 Hash - 0xC80B63B8 ^0xC80B63B8
{
	return iParam0 > -1 && iParam0 < 120;
}

void func_85(int iParam0) // Position - 0x2CD9 Hash - 0x29A8F290 ^0x8EC25CC8
{
	Global_1327479.f_3 = iParam0;
	return;
}

int func_86() // Position - 0x2CE9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1310750.f_16037;
}

BOOL func_87(int iParam0, int iParam1) // Position - 0x2CF8 Hash - 0x2AF6C326 ^0x2AF6C326
{
	if (!func_84(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/] && iParam1 != false;
}

BOOL func_88(int iParam0) // Position - 0x2D1B Hash - 0x23BA4BD8 ^0x6ABCB1DC
{
	if (!func_84(iParam0))
		return false;

	if (func_122(64) && func_123(iParam0))
		return true;

	return Global_1310750[iParam0 /*111*/].f_46;
}

BOOL func_89(int iParam0) // Position - 0x2D53 Hash - 0xE4DA9E55 ^0x745EA523
{
	if (!func_84(iParam0))
		return false;

	return Global_1310750[iParam0 /*111*/].f_47;
}

void func_90(int iParam0) // Position - 0x2D73 Hash - 0xA37733A1 ^0x23C2C6AE
{
	int num;

	if (iParam0 == -1)
		return;

	if (!func_84(Global_1310750.f_13321[iParam0 /*9*/]))
		return;

	num = Global_1310750.f_13321[iParam0 /*9*/];
	PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1310750.f_13321[iParam0 /*9*/].f_5, 523);
	Global_1310750[num /*111*/].f_48 = 0;
	func_124(iParam0);
	Global_1310750.f_16037 = Global_1310750.f_16037 - 1;
	return;
}

Ped func_91(int iParam0) // Position - 0x2DDC Hash - 0xACA56E21 ^0xC662170B
{
	iParam0 = func_82(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_9;
}

int func_92(int iParam0) // Position - 0x2E0F Hash - 0x597C32BE ^0xE9FB4574
{
	iParam0 = func_82(iParam0);

	if (iParam0 == -1)
		return -1;

	if (iParam0 >= 7)
		return -1;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372;
}

float func_93(int iParam0) // Position - 0x2E43 Hash - 0xA0CA40C2 ^0xBDFFE947
{
	iParam0 = func_82(iParam0);

	if (iParam0 == -1)
		return 0f;

	if (iParam0 >= 7)
		return 0f;

	return Global_40.f_1095.f_1[iParam0 /*436*/].f_372.f_1;
}

float func_94(float fParam0, Any anParam1, float fParam2) // Position - 0x2E79 Hash - 0xC55BBAAC ^0xC55BBAAC
{
	return ((1f - fParam2) * fParam0) + (fParam2 * anParam1);
}

char* func_95(int iParam0) // Position - 0x2E8E Hash - 0x6C397BC1 ^0x96014A11
{
	if (func_125(524288))
		return "0600_";

	if (iParam0 == -1)
		if (func_126(23, 2))
			return "0000_";
		else if (func_126(2, 5))
			return "0300_";
		else if (func_126(5, 8))
			return "0600_";
		else if (func_126(8, 11))
			return "0900_";
		else if (func_126(11, 14))
			return "1200_";
		else if (func_126(14, 17))
			return "1500_";
		else if (func_126(17, 20))
			return "1800_";
		else if (func_126(20, 23))
			return "2100_";
		else
			return "1200_";

	switch (iParam0)
	{
		case 0:
			if (func_127())
				return "2100_";
			else
				return "0000_";
			break;
	
		case 6:
			if (func_127())
				return "0300_";
			else
				return "0600_";
			break;
	
		case 12:
			if (func_127())
				return "0900_";
			else
				return "1200_";
			break;
	
		case 18:
			if (func_127())
				return "1500_";
			else
				return "1800_";
			break;
	}

	return "1200_";
}

char* func_96() // Position - 0x2FD1 Hash - 0xA69877B0 ^0x6FB2D69A
{
	int num;

	num = func_128();

	if (func_125(524288))
		return "01Clear";

	switch (num)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("OVERCAST"):
		case joaat("Fog"):
		case joaat("Shower"):
		case joaat("snow"):
		case joaat("sleet"):
		case joaat("SNOWLIGHT"):
			return "03Clouds";
	
		case joaat("sandstorm"):
		case joaat("overcastdark"):
		case joaat("BLIZZARD"):
		case joaat("whiteout"):
		case joaat("hurricane"):
		case joaat("rain"):
		case joaat("hail"):
		case joaat("Thunderstorm"):
		case joaat("groundblizzard"):
			return "04Storm";
	
		case joaat("highpressure"):
		case joaat("clouds"):
		case joaat("Misty"):
		case joaat("SUNNY"):
		case joaat("snowclearing"):
			return "01Clear";
	
		default:
		
	}

	return "01Clear";
}

struct<8> func_97(char* sParam0, const char* sParam1, BOOL bParam2, int iParam3) // Position - 0x3097 Hash - 0xB13D7CEF ^0x4DD40A33
{
	int lengthOfLiteralString;
	int lengthOfLiteralString2;
	var unk;
	var unk9;
	var unk17;

	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);

	if (lengthOfLiteralString >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_0x806862E5D266CF38(sParam0, lengthOfLiteralString - iParam3, lengthOfLiteralString), 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam0, 64);

	lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(&unk);

	if (lengthOfLiteralString2 >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk9, HUD::_0x806862E5D266CF38(sParam1, lengthOfLiteralString2 - iParam3, lengthOfLiteralString2), 64);
	else
		TEXT_LABEL_ASSIGN_STRING(&unk9, sParam1, 64);

	lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&unk9);

	if (bParam2)
		if (lengthOfLiteralString + lengthOfLiteralString2 >= iParam3)
			TEXT_LABEL_ASSIGN_STRING(&unk9, HUD::_0x806862E5D266CF38(&unk9, lengthOfLiteralString, lengthOfLiteralString2), 64);
	else if (lengthOfLiteralString + lengthOfLiteralString2 >= iParam3)
		TEXT_LABEL_ASSIGN_STRING(&unk, HUD::_0x806862E5D266CF38(&unk, lengthOfLiteralString2, lengthOfLiteralString), 64);

	unk17 = { unk };
	TEXT_LABEL_APPEND_STRING(&unk17, &unk9, 64);
	return unk17;
}

const char* func_98(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0x314E Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_99(int iParam0) // Position - 0x3162 Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_129(1) < iParam0)
		iParam0 = func_129(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_130(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_100(int iParam0, const char* sParam1, int iParam2) // Position - 0x31A0 Hash - 0x645D1D89 ^0xCDD3D18A
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_131(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

int func_101(int iParam0, Hash hParam1) // Position - 0x31DF Hash - 0x58D31149 ^0x58D31149
{
	int num;

	if (func_83() == false)
		return 1;

	if (!func_77(hParam1, 0))
		return 0;

	num = func_132(iParam0);

	if (num >= 25 || num <= -1)
		return 0;

	Global_20710[num /*45*/] = hParam1;
	return 1;
}

int func_102(int iParam0, int iParam1) // Position - 0x322A Hash - 0x4C623868 ^0x4C623868
{
	int num;

	if (func_83() == false)
		return 1;

	if (iParam1 <= 0)
		return 0;

	num = func_132(iParam0);

	if (num >= 25 || num <= -1)
		return 0;

	func_133(func_130(joaat("LIFETIME_MONEY_SPENT_IN_SHOPS")), iParam1);
	Global_20710[num /*45*/].f_43 = Global_20710[num /*45*/].f_43 + iParam1;
	return 1;
}

int func_103(int iParam0, int iParam1) // Position - 0x328B Hash - 0x4C623868 ^0x4C623868
{
	int num;

	if (func_83() == false)
		return 1;

	if (iParam1 <= 0)
		return 0;

	num = func_132(iParam0);

	if (num >= 25 || num <= -1)
		return 0;

	Global_20710[num /*45*/].f_44 = Global_20710[num /*45*/].f_44 + iParam1;
	return 1;
}

int func_104(int iParam0) // Position - 0x32DD Hash - 0xB8EC44B7 ^0x486668F8
{
	switch (iParam0)
	{
		case 0:
			return joaat("st_doctor");
	
		case 1:
			return joaat("st_train_station");
	
		case 2:
			return joaat("st_post_office");
	
		case 3:
			return joaat("st_general");
	
		case 4:
			return joaat("st_fence");
	
		case 5:
			return joaat("st_horse_fence");
	
		case 6:
			return joaat("st_gunsmith");
	
		case 7:
			return joaat("st_tailor");
	
		case 8:
			return joaat("st_barber");
	
		case 9:
			return joaat("st_horse_shop");
	
		case 10:
			return joaat("st_butcher");
	
		case 11:
			return joaat("st_dynamic");
	
		case 12:
			return joaat("ST_MARKET");
	
		case 13:
			return joaat("ST_FRENCH_MARKET");
	
		case 14:
			return -1227686818;
	
		case 15:
			return joaat("st_bank");
	
		case 17:
			return joaat("st_bait");
	
		case 18:
			return joaat("st_trapper");
	
		case 19:
			return joaat("st_pearson");
	
		case 20:
			return joaat("st_hotel");
	
		case 21:
			return joaat("st_photo_studio");
	
		case 22:
			return joaat("ST_NEWSPAPER_BOY");
	
		case 23:
			return joaat("st_weapon_mod_store");
	
		case 24:
			return joaat("st_clothing");
	
		case 25:
			return joaat("st_camp_shaving");
	
		case 26:
			return joaat("st_quartermaster");
	
		case 27:
			return joaat("st_horse_trainer");
	
		case 28:
			return joaat("st_blacksmith");
	
		case 29:
			return joaat("st_bountyhunting_mp_return");
	
		case 30:
			return joaat("st_coach");
	
		case 31:
			return -732027686;
	
		case 32:
			return joaat("st_wilderness_supplies");
	
		case 33:
			return joaat("st_bartender");
	
		case 34:
			return joaat("st_handheld");
	
		default:
		
	}

	return 0;
}

int func_105(int iParam0) // Position - 0x34CA Hash - 0xB8EC44B7 ^0x92674BDE
{
	switch (iParam0)
	{
		case 0:
			return joaat("shop_asb_gunsmith");
	
		case 1:
			return joaat("shop_asb_newspaper_boy");
	
		case 2:
			return joaat("shop_asb_post_office");
	
		case 3:
			return joaat("shop_asb_train_station");
	
		case 4:
			return 548657065;
	
		case 5:
			return 243086140;
	
		case 6:
			return joaat("shop_blk_bank");
	
		case 7:
			return joaat("shop_blk_general_store");
	
		case 8:
			return joaat("shop_blk_gunsmith");
	
		case 9:
			return joaat("shop_blk_barber");
	
		case 10:
			return joaat("shop_blk_butcher");
	
		case 11:
			return joaat("shop_blk_bartender");
	
		case 12:
			return joaat("shop_blk_photo_studio");
	
		case 13:
			return joaat("shop_blk_horse_shop");
	
		case 14:
			return joaat("shop_blk_post_office");
	
		case 15:
			return joaat("SHOP_BLK_TRAIN_STATION");
	
		case 16:
			return joaat("shop_blk_newspaper_boy");
	
		case 17:
			return joaat("shop_blk_tailor");
	
		case 18:
			return joaat("shop_emr_fence");
	
		case 19:
			return joaat("shop_emr_general_store");
	
		case 20:
			return joaat("shop_emr_post_office");
	
		case 21:
			return joaat("shop_emr_train_station");
	
		case 22:
			return joaat("shop_lag_bait_store");
	
		case 23:
			return joaat("shop_rgg_post_office");
	
		case 24:
			return joaat("shop_rgg_train_station");
	
		case 25:
			return joaat("shop_rho_bank");
	
		case 26:
			return joaat("shop_rho_butcher");
	
		case 27:
			return joaat("shop_rho_fence");
	
		case 28:
			return joaat("shop_rho_general_store");
	
		case 29:
			return joaat("shop_rho_gunsmith");
	
		case 30:
			return joaat("shop_rho_post_office");
	
		case 31:
			return joaat("shop_rho_train_station");
	
		case 32:
			return joaat("shop_rho_newspaper_boy");
	
		case 33:
			return joaat("shop_rho_bartender");
	
		case 34:
			return -305029900;
	
		case 35:
			return joaat("shop_scm_horse_shop");
	
		case 36:
			return joaat("shop_sdn_bank");
	
		case 37:
			return joaat("shop_sdn_barber");
	
		case 38:
			return joaat("shop_sdn_butcher");
	
		case 39:
			return joaat("shop_sdn_doctor");
	
		case 40:
			return joaat("shop_sdn_exotic");
	
		case 41:
			return joaat("shop_sdn_fence");
	
		case 42:
			return joaat("shop_sdn_general_store");
	
		case 43:
			return joaat("shop_sdn_gunsmith");
	
		case 44:
			return joaat("shop_sdn_horse_shop");
	
		case 45:
			return joaat("shop_sdn_post_office");
	
		case 46:
			return joaat("shop_sdn_train_station");
	
		case 47:
			return joaat("shop_sdn_tailor");
	
		case 48:
			return joaat("shop_sdn_market");
	
		case 49:
			return joaat("SHOP_SDN_FRENCH_MARKET01");
	
		case 50:
			return -1673339528;
	
		case 51:
			return joaat("shop_sdn_newspaper_boy");
	
		case 52:
			return joaat("shop_sdn_bartender");
	
		case 53:
			return joaat("shop_sdn_bartender_slum");
	
		case 54:
			return joaat("shop_sdn_photo_studio");
	
		case 55:
			return joaat("shop_sdn_trapper");
	
		case 56:
			return 878376253;
	
		case 57:
			return 1388932648;
	
		case 58:
			return -2076086367;
	
		case 59:
			return 1529797091;
	
		case 60:
			return joaat("shop_str_butcher");
	
		case 61:
			return joaat("shop_str_general_store");
	
		case 62:
			return joaat("rage_p2_3") /* collision: shop_str_welcome_center */;
	
		case 63:
			return joaat("shop_str_horse_shop");
	
		case 64:
			return joaat("shop_str_newspaper_boy");
	
		case 65:
			return joaat("shop_str_post_office");
	
		case 66:
			return joaat("shop_str_bartender");
	
		case 67:
			return 1008537949;
	
		case 68:
			return joaat("shop_val_bank");
	
		case 69:
			return joaat("shop_val_barber");
	
		case 70:
			return joaat("shop_val_bartender");
	
		case 71:
			return joaat("SHOP_VAL_BARTENDER_KEANE");
	
		case 72:
			return joaat("shop_val_butcher");
	
		case 73:
			return joaat("shop_val_doctor");
	
		case 74:
			return joaat("shop_val_general_store");
	
		case 75:
			return joaat("shop_val_gunsmith");
	
		case 76:
			return joaat("shop_val_horse_shop");
	
		case 77:
			return joaat("shop_val_post_office");
	
		case 78:
			return joaat("shop_val_train_station");
	
		case 79:
			return joaat("shop_val_hotel");
	
		case 80:
			return joaat("shop_val_newspaper_boy");
	
		case 81:
			return joaat("shop_val_bartender_slum");
	
		case 82:
			return joaat("SHOP_VAN_FENCE");
	
		case 83:
			return joaat("shop_van_bartender");
	
		case 84:
			return joaat("shop_van_horse_shop");
	
		case 85:
			return joaat("shop_van_train_station");
	
		case 86:
			return joaat("shop_van_post_office");
	
		case 87:
			return joaat("shop_wal_general_store");
	
		case 88:
			return joaat("shop_wal_train_station");
	
		case 89:
			return joaat("shop_wal_post_office");
	
		case 90:
			return joaat("shop_tbl_general_store");
	
		case 91:
			return joaat("shop_tbl_gunsmith");
	
		case 92:
			return joaat("shop_tbl_butcher");
	
		case 93:
			return joaat("shop_tbl_bartender");
	
		case 94:
			return joaat("shop_tbl_horse_shop");
	
		case 95:
			return joaat("shop_amd_general_store");
	
		case 96:
			return joaat("shop_amd_post_office");
	
		case 97:
			return joaat("shop_amd_bartender");
	
		case 98:
			return joaat("shop_ryc_fence");
	
		case 99:
			return joaat("shop_ben_post_office");
	
		case 100:
			return joaat("shop_ben_train_station");
	
		case 101:
			return joaat("shop_dynamic");
	
		case 102:
			return joaat("shop_val_bountyhunting_mp_return");
	
		case 103:
			return joaat("shop_val_coach");
	
		case 104:
			return joaat("shop_val_horse_fence_mp");
	
		case 105:
			return joaat("shop_emr_horse_fence_mp");
	
		case 106:
			return joaat("shop_blk_bountyhunting_mp_return");
	
		case 107:
			return joaat("shop_blk_coach");
	
		case 108:
			return joaat("shop_blk_horse_fence_mp");
	
		case 109:
			return joaat("shop_sdn_bountyhunting_mp_return");
	
		case 110:
			return joaat("shop_sdn_coach");
	
		case 111:
			return joaat("shop_sdn_horse_fence_mp");
	
		case 112:
			return joaat("shop_rho_bountyhunting_mp_return");
	
		case 113:
			return joaat("shop_rho_horse_fence_mp");
	
		case 114:
			return joaat("shop_str_bountyhunting_mp_return");
	
		case 115:
			return joaat("shop_str_horse_fence_mp");
	
		case 116:
			return joaat("shop_van_coach");
	
		case 117:
			return joaat("shop_van_horse_fence_mp");
	
		case 118:
			return joaat("shop_lag_horse_fence_mp");
	
		case 119:
			return joaat("shop_ckt_horse_fence_mp");
	
		case 120:
			return joaat("shop_asb_bountyhunting_mp_return");
	
		case 121:
			return joaat("shop_asb_horse_fence_mp");
	
		case 122:
			return joaat("shop_but_horse_fence_mp");
	
		case 123:
			return joaat("shop_ben_horse_fence_mp");
	
		case 124:
			return joaat("shop_map_horse_fence_mp");
	
		case 125:
			return joaat("shop_thl_fence");
	
		case 126:
			return joaat("shop_wilderness_supplies");
	
		case 127:
			return joaat("shop_anywhere_handheld");
	
		case 128:
			return joaat("shop_bvh_doctor");
	
		case 129:
			return joaat("shop_bvh_general_store");
	
		case 130:
			return joaat("shop_bvh_gunsmith");
	
		case 131:
			return joaat("shop_bvh_horse_trainer");
	
		case 132:
			return joaat("shop_clm_doctor");
	
		case 133:
			return joaat("shop_clm_general_store");
	
		case 134:
			return joaat("shop_clm_gunsmith");
	
		case 135:
			return joaat("shop_clm_horse_trainer");
	
		case 136:
			return joaat("shop_clm_horse_fence");
	
		case 137:
			return joaat("shop_hso_doctor");
	
		case 138:
			return joaat("shop_hso_general_store");
	
		case 139:
			return joaat("shop_hso_gunsmith");
	
		case 140:
			return joaat("shop_hso_horse_trainer");
	
		case 141:
			return joaat("SHOP_LAK_DOCTOR");
	
		case 142:
			return joaat("SHOP_LAK_GENERAL_STORE");
	
		case 143:
			return joaat("SHOP_LAK_GUNSMITH");
	
		case 144:
			return joaat("SHOP_LAK_HORSE_TRAINER");
	
		case 145:
			return joaat("shop_shb_doctor");
	
		case 146:
			return joaat("shop_shb_general_store");
	
		case 147:
			return joaat("shop_shb_gunsmith");
	
		case 148:
			return joaat("shop_shb_horse_trainer");
	
		case 149:
			return joaat("shop_weapon_mod_store");
	
		case 150:
			return joaat("shop_clothing");
	
		case 151:
			return joaat("shop_camp_shaving");
	
		case 152:
			return joaat("shop_wardrobe");
	
		default:
		
	}

	return 0;
}

Vector3 func_106(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x3D39 Hash - 0x81B8B1C6 ^0xE59CD2A2
{
	float num;

	num = (fParam0 + uParam3) * 0.5f;
	num.f_1 = (fParam0.f_1 + uParam3.f_1) * 0.5f;
	num.f_2 = (fParam0.f_2 + uParam3.f_2) * 0.5f;
	return num;
}

Ped func_107(Ped pedParam0) // Position - 0x3D78 Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

BOOL func_108(Ped pedParam0) // Position - 0x3D82 Hash - 0x7410A97D ^0x34EB7DBA
{
	Hash entityModel;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!ENTITY::IS_ENTITY_A_PED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(entityModel);
}

BOOL func_109(Ped pedParam0) // Position - 0x3DB4 Hash - 0x7462ED7A ^0x2A6FBCB0
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0))
		return false;

	if (PED::IS_PED_USING_SCENARIO_HASH(pedParam0, joaat("PROP_HitchingPost")))
		return true;

	return false;
}

BOOL func_110(int iParam0, int iParam1) // Position - 0x3DF6 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_111(Hash hParam0) // Position - 0x3E05 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_77(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

struct<4> func_112(BOOL bParam0) // Position - 0x3E30 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_78(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_76(923904168, func_40(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_76(923904168, func_40(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_76(923904168, func_40(bParam0), -740156546, false);
}

BOOL func_113(Hash hParam0, BOOL bParam1) // Position - 0x3EC5 Hash - 0x62864AB ^0xBC339691
{
	if (func_117(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_134(24);
		else
			return true;

	return false;
}

BOOL func_114(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x3EFE Hash - 0x4285A587 ^0x4285A587
{
	return func_41(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_115(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x3F16 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_135(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_116(BOOL bParam0) // Position - 0x3F37 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_78(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_76(271701509, func_40(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_76(271701509, func_40(bParam0), 12999093, false);
}

Hash func_117(Hash hParam0) // Position - 0x3F9B Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_77(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_118(Hash hParam0, Hash hParam1) // Position - 0x3FC6 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_117(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_119(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x4027 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_78(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_120(Hash hParam0) // Position - 0x4057 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_121(BOOL bParam0) // Position - 0x406D Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_83() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_78(bParam0));
}

BOOL func_122(int iParam0) // Position - 0x408B Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1310750.f_16035 && iParam0 != false;
}

BOOL func_123(int iParam0) // Position - 0x409F Hash - 0x169E8D3F ^0x169E8D3F
{
	return func_87(iParam0, Global_1310750.f_16072 | 64);
}

void func_124(int iParam0) // Position - 0x40B7 Hash - 0x3D0B339A ^0xB87B2B3D
{
	int i;

	if (Global_1310750.f_13321[iParam0 /*9*/] != -1)
		Global_1310750[Global_1310750.f_13321[iParam0 /*9*/] /*111*/].f_48 = 0;

	Global_1310750.f_13321[iParam0 /*9*/] = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_1 = -1;
	Global_1310750.f_13321[iParam0 /*9*/].f_2 = { 0f, 0f, 0f };
	Global_1310750.f_13321[iParam0 /*9*/].f_5 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_1310750.f_13321[iParam0 /*9*/].f_6[i] = -1881652455;
	}

	return;
}

BOOL func_125(BOOL bParam0) // Position - 0x4144 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1392040 && bParam0 != false;
}

BOOL func_126(int iParam0, int iParam1) // Position - 0x4155 Hash - 0x47F9E16C ^0x979A6503
{
	return func_136(CLOCK::GET_CLOCK_HOURS(), iParam0, iParam1);
}

BOOL func_127() // Position - 0x4169 Hash - 0xEE877ACE ^0xCCE9C802
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65536), 0))
		return true;

	return false;
}

var func_128() // Position - 0x418A Hash - 0x1372AFBD ^0xAE723118
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

int func_129(int iParam0) // Position - 0x41B4 Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

struct<2> func_130(int iParam0) // Position - 0x41C0 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

int func_131(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Position - 0x41D0 Hash - 0x72075C17 ^0x3AC6D3FB
{
	int num;
	var unk13;
	int num2;

	num = -2;
	num.f_1 = iParam5;
	num.f_2 = iParam6;
	num.f_3 = iParam7;
	num = 450;
	unk13.f_1 = sParam0;
	unk13.f_2 = sParam1;
	unk13.f_3 = hParam2;
	unk13.f_4 = iParam3;
	unk13.f_5 = iParam4;
	unk13.f_6 = 0;
	num2 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&num, &unk13, bParam8);
	func_137(sParam0, sParam1, hParam2);
	return num2;
}

int func_132(int iParam0) // Position - 0x4233 Hash - 0x1497AC6A ^0x1497AC6A
{
	if (!(iParam0 > -1 && iParam0 < 153))
		return -1;

	switch (iParam0)
	{
		case 0:
		case 8:
		case 29:
		case 43:
		case 75:
		case 91:
		case 130:
		case 134:
		case 139:
		case 143:
		case 147:
			return 6;
	
		case 1:
		case 16:
		case 32:
		case 51:
		case 64:
		case 80:
			return 22;
	
		case 2:
		case 14:
		case 20:
		case 23:
		case 30:
		case 45:
		case 65:
		case 77:
		case 86:
		case 89:
		case 96:
		case 99:
			return 2;
	
		case 3:
		case 15:
		case 21:
		case 24:
		case 31:
		case 46:
		case 78:
		case 85:
		case 88:
		case 100:
			return 1;
	
		case 4:
		case 5:
		case 34:
		case 55:
		case 67:
			return 18;
	
		case 6:
		case 25:
		case 36:
		case 68:
			return 15;
	
		case 7:
		case 19:
		case 28:
		case 42:
		case 61:
		case 74:
		case 87:
		case 90:
		case 95:
		case 129:
		case 133:
		case 138:
		case 142:
		case 146:
			return 3;
	
		case 9:
		case 37:
		case 69:
			return 8;
	
		case 10:
		case 26:
		case 38:
		case 60:
		case 72:
		case 92:
			return 10;
	
		case 11:
		case 33:
		case 52:
		case 53:
		case 66:
		case 70:
		case 71:
		case 81:
		case 83:
		case 93:
		case 97:
			return 33;
	
		case 12:
		case 54:
			return 21;
	
		case 13:
		case 35:
		case 44:
		case 63:
		case 76:
		case 84:
		case 94:
			return 9;
	
		case 17:
		case 47:
			return 7;
	
		case 18:
		case 27:
		case 41:
		case 82:
		case 98:
		case 125:
			return 4;
	
		case 22:
			return 17;
	
		case 39:
		case 73:
		case 128:
		case 132:
		case 137:
		case 141:
		case 145:
			return 0;
	
		case 48:
			return 12;
	
		case 49:
			return 13;
	
		case 50:
			return 14;
	
		case 56:
		case 57:
		case 58:
		case 59:
			return 19;
	
		case 62:
		case 79:
			return 20;
	
		case 101:
			return 11;
	
		case 102:
		case 106:
		case 109:
		case 112:
		case 114:
		case 120:
			return 29;
	
		case 103:
		case 107:
		case 110:
		case 116:
			return 30;
	
		case 104:
		case 105:
		case 108:
		case 111:
		case 113:
		case 115:
		case 117:
		case 118:
		case 119:
		case 121:
		case 122:
		case 123:
		case 124:
			return 31;
	
		case 126:
			return 32;
	
		case 127:
			return 34;
	
		case 131:
		case 135:
		case 140:
		case 144:
		case 148:
			return 27;
	
		case 136:
			return 5;
	
		case 149:
			return 23;
	
		case 150:
			return 24;
	
		case 151:
			return 25;
	
		case 152:
			return 24;
	
		default:
		
	}

	return -1;
}

void func_133(var uParam0, var uParam1, int iParam2) // Position - 0x4687 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

BOOL func_134(int iParam0) // Position - 0x4697 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_138(iParam0))
		return false;

	return func_139(iParam0);
}

BOOL func_135(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x46B3 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_78(false);
	*panParam1 = { func_76(hParam0, func_112(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_136(int iParam0, int iParam1, int iParam2) // Position - 0x46F8 Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return 0;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return 0;

	if (iParam1 == iParam2)
		return 1;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return 1;

	if (!flag)
		return 0;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return 1;

	return 0;
}

void func_137(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x47A1 Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_138(int iParam0) // Position - 0x47D2 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_139(int iParam0) // Position - 0x47E5 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

