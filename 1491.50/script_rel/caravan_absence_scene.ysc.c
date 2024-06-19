#region Local Var
	Vehicle veLocal_0 = 0;
	Object obLocal_1 = 0;
	Ped pedLocal_2 = 0;
	Object obLocal_3 = 0;
	Ped pedLocal_4 = 0;
	Object obLocal_5 = 0;
	Object obLocal_6 = 0;
	Entity eLocal_7 = 0;
	Entity eLocal_8 = 0;
	int iLocal_9 = 0;
	Ped pedLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	Cam caLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 73;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x4692D7A ^0xDF6A8184
{
	int num;
	AnimScene animScene;
	AnimScene animScene2;
	Vehicle vehiclePedIsUsing;
	Ped mount;
	var unk;
	int num2;
	var unk2;
	Vector3 vector;
	BOOL flag;
	BOOL flag2;
	BOOL isAnimSceneLoaded;
	var matrix;
	char* playbackListName;
	float animSceneTime;
	float animSceneTime2;
	int scenario;
	int num3;

	num = 0;
	func_1(&Global_1935630, 8388608);
	num2 = 0;
	unk2 = { -2593.506f, 457.0906f, 145.9973f };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&num2);
		func_3(&Global_1935630, 8388608);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_SCRIPTED_IN_GAME_CUTSCENE"));
		HUD::_0x5651516D947ABC53();
	
		switch (num)
		{
			case 0:
				CAM::DO_SCREEN_FADE_OUT(1500);
				func_4(false);
				WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, false);
				func_5(&num, 1);
				break;
		
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, true);
				
					if (func_6(Global_35))
					{
						mount = PED::GET_MOUNT(Global_35);
						PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(mount, -2589.7825f, 466.6921f, 145.0417f, 75.2096f, true, false, true);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
					{
						vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(Global_35);
						PED::_WARP_PED_OUT_OF_VEHICLE(Global_35);
						ENTITY::_SET_ENTITY_COORDS_AND_HEADING(vehiclePedIsUsing, -2618.0706f, 460.2562f, 144.8576f, 7.2663f, true, false, true);
					}
				
					func_4(true);
					WEAPON::_HOLSTER_PED_WEAPONS(Global_35, false, false, false, true);
					func_7();
					func_8(false);
					func_5(&num, 2);
				}
				break;
		
			case 2:
				num2 = func_9(iScriptParam_0);
				playbackListName = func_10(num2);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(playbackListName))
					num2 = 0;
			
				if (num2 != 0)
				{
					animScene2 = ANIMSCENE::_CREATE_ANIM_SCENE(func_12(func_11("cutscene@", playbackListName, true, 63)), 256, playbackListName, false, true);
				
					if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(animScene2))
						num2 = 0;
					else
						ANIMSCENE::LOAD_ANIM_SCENE(animScene2);
				}
			
				animScene = ANIMSCENE::_CREATE_ANIM_SCENE("script@fast_travel@sky@skytl_0900_01clear", 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(animScene);
			
				if (num2 != 2)
					if (num2 == 1)
						func_13(&unk, false);
				else
					func_14(&unk, false);
			
				Global_40.f_4283.f_574 = Global_40.f_4283.f_574 || num2;
				func_5(&num, 3);
				break;
		
			case 3:
				flag = func_15(num2);
				flag2 = num2 == 0 || ANIMSCENE::IS_ANIM_SCENE_LOADED(animScene2, true, false) && ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(animScene2, "JOHN", &matrix, false, 0, 2);
				isAnimSceneLoaded = ANIMSCENE::IS_ANIM_SCENE_LOADED(animScene, true, false);
			
				if (flag2 && flag && isAnimSceneLoaded && func_16(num2))
				{
					if (num2 != 0)
						func_17(animScene2, num2);
				
					switch (num2)
					{
						case 0:
							vector = { unk2 };
							func_5(&num, 11);
							break;
					
						case 1:
						case 2:
						case 4:
							func_17(animScene2, num2);
							vector = { matrix };
							func_5(&num, 4);
							break;
					
						case 8:
						case 16:
							func_17(animScene2, num2);
							vector = { matrix };
							func_5(&num, 9);
							break;
					}
				
					if (func_18(Global_35, 0))
					{
						ENTITY::SET_ENTITY_COORDS(Global_35, vector, true, false, true, true);
						ENTITY::FREEZE_ENTITY_POSITION(Global_35, true);
					}
				}
				break;
		
			case 4:
				func_19(Global_35, iScriptParam_0.f_1, true, true, 0);
				CLOCK::ADVANCE_CLOCK_TIME_TO(func_20(), 0, 0);
				func_5(&num, 5);
				break;
		
			case 5:
				ANIMSCENE::START_ANIM_SCENE(animScene);
				AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				func_5(&num, 6);
				break;
		
			case 6:
				animSceneTime = ANIMSCENE::_GET_ANIM_SCENE_TIME(animScene);
			
				if (animSceneTime > 1.2f && !CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					CAM::DO_SCREEN_FADE_IN(500);
			
				if (animSceneTime > 8.7f)
					func_5(&num, 7);
				break;
		
			case 7:
				ANIMSCENE::START_ANIM_SCENE(animScene2);
				AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				func_5(&num, 8);
				break;
		
			case 8:
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(animScene2) > 0.9f)
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, false);
			
				if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(animScene2))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				
					if (num2 != 4)
						func_5(&num, 18);
					else
						func_5(&num, 17);
				}
				break;
		
			case 9:
				CAM::DO_SCREEN_FADE_IN(500);
				ANIMSCENE::START_ANIM_SCENE(animScene2);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				func_5(&num, 10);
				break;
		
			case 10:
				if (ANIMSCENE::GET_ANIM_SCENE_PHASE(animScene2) > 0.9f)
					ANIMSCENE::BLOCK_ANIM_SCENE_FADING_NEXT_FRAME(true, false);
			
				if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(animScene2))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_5(&num, 13);
				}
				break;
		
			case 11:
				ANIMSCENE::START_ANIM_SCENE(animScene);
				AUDIO::START_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				func_5(&num, 12);
				break;
		
			case 12:
				animSceneTime2 = ANIMSCENE::_GET_ANIM_SCENE_TIME(animScene);
			
				if (animSceneTime2 > 1.3f && !CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
					CAM::DO_SCREEN_FADE_IN(500);
			
				if (animSceneTime2 > 8.5f)
					func_5(&num, 13);
				break;
		
			case 13:
				func_19(Global_35, iScriptParam_0.f_1, true, true, 0);
				CLOCK::ADVANCE_CLOCK_TIME_TO(func_20(), 0, 0);
				func_5(&num, 14);
				break;
		
			case 14:
				func_21();
			
				if (num2 == 8 || num2 == 16)
				{
					CAM::_REQUEST_LETTER_BOX_NOW(false, false);
					CAM::DO_SCREEN_FADE_IN(1500);
				}
				else
				{
					AUDIO::STOP_AUDIO_SCENE("Mission_Transition_Clouds_Scene");
				}
			
				func_22(&uLocal_12, false);
				func_5(&num, 15);
				break;
		
			case 15:
				if (!CAM::IS_SCREEN_FADED_OUT() && func_23(&uLocal_12) > 6f)
				{
					if (num2 != 0)
					{
						func_5(&num, 16);
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
						func_5(&num, 18);
					}
				}
				break;
		
			case 16:
				ENTITY::SET_ENTITY_COORDS(Global_35, -2571.3723f, 454.4025f, 144.7018f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, 266.6689f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 266.3258f, false, true);
				func_5(&num, 21);
				break;
		
			case 17:
				ENTITY::SET_ENTITY_COORDS(Global_35, -2564.4226f, 403.3554f, 147.3823f, true, false, true, true);
				ENTITY::SET_ENTITY_HEADING(Global_35, 148f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 148f, false, true);
				CAM::DO_SCREEN_FADE_IN(800);
				func_5(&num, 21);
				break;
		
			case 18:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::DOES_CAM_EXIST(caLocal_15))
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						CAM::SET_CAM_ACTIVE(caLocal_15, false);
						CAM::DESTROY_CAM(caLocal_15, false);
					}
				
					scenario = 0;
				
					if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA_HASH(-2519.942f, 420.925f, 146.9122f, joaat("world_human_lean_post_right"), 2f, true))
						scenario = TASK::FIND_SCENARIO_OF_TYPE_HASH(-2519.942f, 420.925f, 146.9122f, joaat("world_human_lean_post_right"), 2f, 1, false);
				
					ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				
					if (TASK::DOES_SCENARIO_POINT_EXIST(scenario))
					{
						TASK::TASK_USE_SCENARIO_POINT(Global_35, scenario, 0, 1300, false, true, 0, false, -1082130432, false);
						func_22(&uLocal_19, false);
						func_5(&num, 19);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
						ENTITY::SET_ENTITY_HEADING(Global_35, 90f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
						func_5(&num, 20);
					}
				}
				break;
		
			case 19:
				if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, -76381094, true) == 1 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
				{
					if (!func_24(&uLocal_16))
					{
						func_22(&uLocal_16, false);
					}
					else if (func_25(&uLocal_16) > 0.3f)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-165f, 1065353216);
						func_5(&num, 20);
					}
				}
				else if (func_25(&uLocal_19) > 2f)
				{
					ENTITY::SET_ENTITY_COORDS(Global_35, -2519.942f, 420.925f, 146.9122f, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(Global_35, 90f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1065353216);
					func_5(&num, 20);
				}
				break;
		
			case 20:
				CAM::DO_SCREEN_FADE_IN(800);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 90f, false, true);
				func_5(&num, 21);
				break;
		
			case 21:
				num3 = func_26(pedLocal_10, 709, 714, false);
			
				if (func_27(num3, true))
					func_28(num3, true, true, false, false);
			
				if (CAM::DOES_CAM_EXIST(caLocal_15))
				{
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::SET_CAM_ACTIVE(caLocal_15, false);
					CAM::DESTROY_CAM(caLocal_15, false);
				}
			
				if (num2 == 2)
					func_14(&unk, true);
				else if (num2 == 1)
					func_13(&unk, true);
			
				if (!func_29(1))
					func_30(joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"), 1, false, 1103626240);
			
				func_2(&num2);
				ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_5(&num, 22);
				break;
		
			case 22:
				SCRIPTS::_REQUEST_THREAD_EXIT(SCRIPTS::GET_ID_OF_THIS_THREAD());
				break;
		}
	
		BUILTIN::WAIT(0);
	}

	func_3(&Global_1935630, 8388608);
	return;
}

void func_1(int iParam0, int iParam1) // Position - 0x89A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_2(var uParam0) // Position - 0x8AB Hash - 0xAD896C62 ^0xAD896C62
{
	func_31(*uParam0);
	return;
}

void func_3(int iParam0, int iParam1) // Position - 0x8BA Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_4(BOOL bParam0) // Position - 0x8CF Hash - 0x9AA8C616 ^0xCCF3BF7F
{
	if (func_32())
		Global_1357509 = 1;

	func_33(joaat("camera_item"));

	if (bParam0 && Global_1935630.f_44 == joaat("weapon_kit_camera"))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1935630.f_44 = joaat("WEAPON_UNARMED");
	}

	return;
}

void func_5(var uParam0, int iParam1) // Position - 0x920 Hash - 0x6140DB6F ^0x6140DB6F
{
	if (*uParam0 != iParam1)
		*uParam0 = iParam1;

	return;
}

BOOL func_6(Ped pedParam0) // Position - 0x935 Hash - 0x6D7E69FC ^0x1FD723DA
{
	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	return PED::IS_PED_ON_MOUNT(pedParam0);
}

void func_7() // Position - 0x950 Hash - 0x57D5D834 ^0x4B7A3B9C
{
	ScrHandle handle;
	BOOL flag;
	ItemSet itemset;
	int itemsetSize;
	int i;
	ScrHandle indexedItemInItemset;
	ScrHandle handle2;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return;

	handle = func_34();
	flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(handle))
		flag = true;

	itemset = ITEMSET::CREATE_ITEMSET(false);

	if (!ITEMSET::IS_ITEMSET_VALID(itemset))
		return;

	ITEMSET::_CLEAR_ITEMSET(itemset);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	if (itemsetSize == 0)
		return;

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset);
		handle2 = indexedItemInItemset;
	
		if (ENTITY::DOES_ENTITY_EXIST(handle2))
		{
			PED::DETACH_CARRIABLE_ENTITY(handle2, false, false);
		
			if (flag && handle2 == handle)
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(handle2, -2589.73f, 462.719f, 145.099f, 1.44f, true, false, true);
			else
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(handle2, -2595.9202f, 474.3518f, 144.948f, 83.4473f, true, false, true);
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return;
}

void func_8(BOOL bParam0) // Position - 0xA40 Hash - 0x6FC90683 ^0xF9E36F55
{
	int i;
	Hash weaponHash;

	if (Global_43891)
		return;

	for (i = 0; i < 30; i = i + 1)
	{
		weaponHash = func_35(Global_35, i, false, true);
	
		if (WEAPON::IS_WEAPON_VALID(weaponHash))
			if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponHash) || func_36(weaponHash))
				if (!bParam0 || i != 7 && i != 9)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash);
	}

	return;
}

int func_9(int iParam0) // Position - 0xAB2 Hash - 0xB2028E9F ^0xA58AD745
{
	int num;
	int i;
	int address;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		address = 0;
		MISC::SET_BIT(&address, i);
		num = address;
	
		if (func_37(iParam0, num))
			if (func_38(num))
				return num;
	}

	return 0;
}

char* func_10(int iParam0) // Position - 0xAF8 Hash - 0xD194F2EF ^0xD194F2EF
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 1:
			str = "PTL_MCS5";
			break;
	
		case 2:
			str = "PTL_MCS4";
			break;
	
		case 4:
			str = "PTL_MCS3";
			break;
	
		case 8:
			str = "PTL_MCS1";
			break;
	
		case 16:
			str = "PTL_MCS2";
			break;
	}

	return str;
}

struct<8> func_11(char* sParam0, char* sParam1, BOOL bParam2, int iParam3) // Position - 0xB55 Hash - 0xB13D7CEF ^0x4DD40A33
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

const char* func_12(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Position - 0xC0C Hash - 0x115DEB2 ^0x766BAF01
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_13(var uParam0, BOOL bParam1) // Position - 0xC20 Hash - 0x8C03A007 ^0xE6107D54
{
	ScrHandle indexedItemInItemset;
	ScrHandle handle;
	int i;
	int entitiesInVolume;
	Volume volume;

	if (!bParam1)
	{
		volume = VOLUME::CREATE_VOLUME_BOX(-2514.243f, 432.0485f, 146.8721f, 0f, 0f, 0f, 2f, 2f, 2f);
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
		entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, *uParam0, 1);
	
		if (entitiesInVolume == 0)
			return;
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
			handle = indexedItemInItemset;
		
			if (ENTITY::DOES_ENTITY_EXIST(handle) && ENTITY::IS_ENTITY_A_PED(handle))
				ENTITY::SET_ENTITY_VISIBLE(handle, bParam1);
		}
	
		func_39(volume);
	}
	else
	{
		entitiesInVolume = ITEMSET::GET_ITEMSET_SIZE(*uParam0);
	
		if (entitiesInVolume == 0)
			return;
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
			handle = indexedItemInItemset;
		
			if (ENTITY::DOES_ENTITY_EXIST(handle) && ENTITY::IS_ENTITY_A_PED(handle))
				ENTITY::SET_ENTITY_VISIBLE(handle, bParam1);
		}
	
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}

	return;
}

void func_14(var uParam0, BOOL bParam1) // Position - 0xD04 Hash - 0x20FDB866 ^0xD1AC3AA2
{
	ScrHandle indexedItemInItemset;
	ScrHandle handle;
	int i;
	int entitiesInVolume;
	Volume volume;

	if (!bParam1)
	{
		func_40(202123401, -1f, true);
		func_41(202123401, 4, false);
		volume = VOLUME::CREATE_VOLUME_BOX(-2547.0442f, 419.89417f, 147.93723f, 0f, 0f, 0f, 25f, 25f, 3f);
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
		entitiesInVolume = ENTITY::_GET_ENTITIES_IN_VOLUME(volume, *uParam0, 1);
	
		if (entitiesInVolume == 0)
			return;
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
			handle = indexedItemInItemset;
		
			if (ENTITY::DOES_ENTITY_EXIST(handle) && ENTITY::IS_ENTITY_A_PED(handle))
				ENTITY::SET_ENTITY_VISIBLE(handle, bParam1);
		}
	
		func_39(volume);
	}
	else
	{
		func_40(202123401, 0f, true);
		func_41(202123401, 0, false);
		entitiesInVolume = ITEMSET::GET_ITEMSET_SIZE(*uParam0);
	
		if (entitiesInVolume == 0)
			return;
	
		for (i = 0; i < entitiesInVolume; i = i + 1)
		{
			indexedItemInItemset = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, *uParam0);
			handle = indexedItemInItemset;
		
			if (ENTITY::DOES_ENTITY_EXIST(handle) && ENTITY::IS_ENTITY_A_PED(handle))
				ENTITY::SET_ENTITY_VISIBLE(handle, bParam1);
		}
	
		ITEMSET::DESTROY_ITEMSET(*uParam0);
	}

	return;
}

int func_15(int iParam0) // Position - 0xE1C Hash - 0xEA2BE6F1 ^0x104FBA16
{
	switch (iParam0)
	{
		case 0:
		case 8:
		case 16:
			return 1;
	
		case 1:
			STREAMING::REQUEST_MODEL(joaat("A_C_Cow"), false);
			STREAMING::REQUEST_MODEL(joaat("p_cs_bucket01x"), false);
			STREAMING::REQUEST_MODEL(joaat("p_stool02x"), false);
			STREAMING::REQUEST_MODEL(joaat("p_val_gate2m02x"), false);
		
			if (STREAMING::HAS_MODEL_LOADED(joaat("A_C_Cow")) && STREAMING::HAS_MODEL_LOADED(joaat("p_cs_bucket01x")) && STREAMING::HAS_MODEL_LOADED(joaat("p_stool02x")) && STREAMING::HAS_MODEL_LOADED(joaat("p_val_gate2m02x")))
				return 1;
			break;
	
		case 2:
			STREAMING::REQUEST_MODEL(joaat("a_c_horse_americanpaint_tobiano"), false);
			STREAMING::REQUEST_MODEL(joaat("p_brushhorse01x"), false);
		
			if (STREAMING::HAS_MODEL_LOADED(joaat("a_c_horse_americanpaint_tobiano")) && STREAMING::HAS_MODEL_LOADED(joaat("p_brushhorse01x")))
				return 1;
			break;
	
		case 4:
			STREAMING::REQUEST_MODEL(joaat("cart06"), false);
			STREAMING::REQUEST_MODEL(joaat("p_haybale03x"), false);
		
			if (STREAMING::HAS_MODEL_LOADED(joaat("cart06")) && STREAMING::HAS_MODEL_LOADED(joaat("p_haybale03x")))
				return 1;
			break;
	}

	return 0;
}

BOOL func_16(int iParam0) // Position - 0xF27 Hash - 0xEDF47DEF ^0x5FA636A9
{
	switch (iParam0)
	{
		case 0:
			return true;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_4))
			{
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_5))
				{
					if (ENTITY::DOES_ENTITY_EXIST(obLocal_6))
					{
						if (eLocal_7 != 0)
						{
							if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_7))
								if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_10))
									if (func_42(714, false))
										pedLocal_10 = func_43(714, true, false, true, true, true);
								else
									return true;
						}
						else
						{
							if (iLocal_11 == 0)
							{
								iLocal_11 = 1;
								eLocal_7 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_val_gate2m02x"), -2515.0278f, 430.2761f, 146.9727f, 11);
							}
						
							return false;
						}
					}
					else
					{
						obLocal_6 = OBJECT::CREATE_OBJECT(joaat("p_stool02x"), -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
						return false;
					}
				}
				else
				{
					obLocal_5 = OBJECT::CREATE_OBJECT(joaat("p_cs_bucket01x"), -2515.2f, 415.7121f, 146.7645f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				pedLocal_4 = func_44(joaat("A_C_Cow"), -2513.1958f, 414.9384f, 146.8074f, 0, true, true, 0, true, true, true, false, false, false, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_4))
					PED::_SET_PED_SCALE(pedLocal_4, 1f);
			
				return false;
			}
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_2))
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_3))
					if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_10))
						if (func_42(709, false))
							pedLocal_10 = func_43(709, true, false, true, true, true);
					else
						return true;
				else
					obLocal_3 = OBJECT::CREATE_OBJECT(joaat("p_brushhorse01x"), -2552.5f, 422.8f, 148.7f, true, true, false, false, true);
			else
				pedLocal_2 = func_44(joaat("a_c_horse_americanpaint_tobiano"), 2552.5f, 424.8f, 148.7f, 0, true, true, 0, true, true, true, false, false, false, false);
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_1))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_10))
						if (func_42(710, false))
							pedLocal_10 = func_43(710, true, false, true, true, true);
					else
						return true;
				}
				else
				{
					obLocal_1 = OBJECT::CREATE_OBJECT(joaat("p_haybale03x"), -2565.1658f, 404.6969f, 147.5132f, true, true, false, false, true);
					return false;
				}
			}
			else
			{
				veLocal_0 = VEHICLE::CREATE_VEHICLE(joaat("cart06"), -2564.7585f, 405.6364f, 147.536f, 0f, true, true, false, false);
				return false;
			}
			break;
	
		case 8:
			if (eLocal_8 != 0)
			{
				if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_8))
					return true;
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					eLocal_8 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_door04x"), -2590.841f, 457.838f, 146.014f, 15);
				}
			
				return false;
			}
			break;
	
		case 16:
			if (eLocal_8 != 0)
			{
				if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_8))
					return true;
			}
			else
			{
				if (iLocal_11 == 0)
				{
					iLocal_11 = 1;
					eLocal_8 = ENTITY::PIN_CLOSEST_MAP_ENTITY(joaat("p_door04x"), -2590.841f, 457.838f, 146.014f, 15);
				}
			
				return false;
			}
			break;
	}

	return false;
}

void func_17(AnimScene ansParam0, int iParam1) // Position - 0x1206 Hash - 0x2DCC9204 ^0xC351EDA3
{
	switch (iParam1)
	{
		case 1:
			if (iLocal_9 == 0)
				pedLocal_10 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_ABE")));
		
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "ABE", pedLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "cow", pedLocal_4, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "p_cs_bucket01x", obLocal_5, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "p_stool02x", obLocal_6, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "p_val_gate2m02x", ENTITY::_GET_PINNED_MAP_ENTITY(eLocal_7), 0);
			break;
	
		case 2:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "JOHN", Global_35, 0);
		
			if (iLocal_9 == 0)
				pedLocal_10 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_DAVID_GEDDES")));
		
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "DavidGeddes", pedLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "Horse_01", pedLocal_2, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "p_brushHorse01x", obLocal_3, 0);
			break;
	
		case 4:
			if (iLocal_9 == 0)
				pedLocal_10 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(PERSCHAR::_0x112DDF56300BC6E5(joaat("PHR_TOM_DICKENS")));
		
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "TomDickens", pedLocal_10, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "CART06", veLocal_0, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "p_hayBale03x", obLocal_1, 0);
			break;
	
		case 8:
		case 16:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "JOHN", Global_35, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "ABIGAILROBERTS", func_45(13), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(ansParam0, "p_door04x", ENTITY::_GET_PINNED_MAP_ENTITY(eLocal_8), 0);
			break;
	}

	return;
}

BOOL func_18(Ped pedParam0, int iParam1) // Position - 0x135C Hash - 0x9BD5E73F ^0xD367FD44
{
	int num;

	if (pedParam0 == 0)
		return false;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return false;

	num = iParam1;

	if (num == 0)
		return true;

	if (func_46(num, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return false;

	if (func_46(num, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return false;

	if (func_46(num, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return false;

	if (func_46(num, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return false;

	if (func_46(num, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return false;

	if (func_46(num, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return false;

	if (func_46(num, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return false;

	if (func_46(num, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return false;

	return true;
}

int func_19(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x145B Hash - 0x72B1BAB5 ^0x553ECF8
{
	Hash hash;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	if (iParam1 == -1)
		return 0;

	hash = func_47(iParam1);

	if (hParam4 != 0)
		hash = hParam4;
	else if (iParam1 > -1 && iParam1 <= 5)
		hash = func_48(iParam1);

	if (bParam3 && func_49(iParam1, 4096) && Global_1946054.f_1497 == hParam4)
		return 1;

	Global_1905941 = iParam1;

	if (iParam1 > 5 || hParam4 != 0 && !func_50(hash, Global_1946054.f_1))
		return 0;

	if (bParam2)
	{
		func_51(Global_40.f_7729, 4096);
		func_52(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}

	if (DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		func_53(pedParam0);

	func_54();

	if (!func_55(iParam1))
		func_57(hash, pedParam0, func_56(iParam1), true, false, true);

	func_58(pedParam0);
	return 1;
}

int func_20() // Position - 0x156A Hash - 0x8B4F5921 ^0x4EA6AAC1
{
	if (func_59(Global_1835011[64 /*74*/].f_1, true))
		return 15;

	return 9;
}

void func_21() // Position - 0x158B Hash - 0x609624C6 ^0x15E61E6
{
	Vector3 vector;
	Vector3 vector2;
	float fov;

	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 0:
			vector = { -2630.748f, 494.9098f, 166.4427f };
			vector2 = { -5.5882f, -0.6052f, -136.2172f };
			fov = 26.8916f;
			break;
	
		case 1:
			vector = { -2607.747f, 313.8794f, 150.8527f };
			vector2 = { 2.8811f, 0f, -29.0874f };
			fov = 37.8065f;
			break;
	
		case 2:
			vector = { -2593.301f, 516.9439f, 145.0856f };
			vector2 = { 1.1034f, -0.6875f, -150.0637f };
			fov = 26.922f;
			break;
	
		case 3:
			vector = { -2578.31f, 439.7971f, 146.6813f };
			vector2 = { 8.7918f, -0.4415f, -129.2381f };
			fov = 37.8087f;
			break;
	
		case 4:
			vector = { -2584.975f, 399.6115f, 150.8719f };
			vector2 = { 1.2934f, -0.2442f, -55.7509f };
			fov = 26.8832f;
			break;
	
		case 5:
		default:
			vector = { -2524.0757f, 428.6737f, 148.6333f };
			vector2 = { 3.7283f, -0.5313f, 119.6752f };
			fov = 42.8312f;
			break;
	}

	caLocal_15 = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), vector, vector2, fov, true, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SHAKE_CAM(caLocal_15, "HAND_SHAKE", 0.1f);
	return;
}

void func_22(var uParam0, BOOL bParam1) // Position - 0x1711 Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_24(uParam0))
		func_60(uParam0);

	return;
}

float func_23(var uParam0) // Position - 0x1731 Hash - 0x5E6CC847 ^0xFCFB84EF
{
	if (!func_24(uParam0))
		return 0f;

	if (func_61(uParam0))
		return uParam0->f_2;

	return func_62() - uParam0->f_1;
}

BOOL func_24(var uParam0) // Position - 0x1763 Hash - 0x5001E582 ^0x5001E582
{
	return func_63(*uParam0, 1);
}

float func_25(var uParam0) // Position - 0x1773 Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_24(uParam0))
		return uParam0->f_1;

	if (func_61(uParam0))
		return uParam0->f_2;

	return func_62() - uParam0->f_1;
}

int func_26(Ped pedParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x17A8 Hash - 0x32945A99 ^0xFCA9036B
{
	PersChar perscharIndexFromPedIndex;
	int i;
	int num;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0) && !bParam3)
		return -1;

	perscharIndexFromPedIndex = PERSCHAR::_GET_PERSCHAR_INDEX_FROM_PED_INDEX(pedParam0);

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(perscharIndexFromPedIndex))
		return -1;

	i = iParam1;

	for (i = iParam1; i <= iParam2; i = i + 1)
	{
		num = i;
	
		if (func_64(num) != 0 && PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_65(num)))
			if (func_65(num) == perscharIndexFromPedIndex)
				return num;
	}

	return -1;
}

BOOL func_27(int iParam0, BOOL bParam1) // Position - 0x1822 Hash - 0x956894C4 ^0x956894C4
{
	if (func_66() != -1)
		return false;

	if (!func_67(iParam0))
		return false;

	if (!func_68(iParam0) && bParam1)
		return false;

	return func_69(iParam0, 1);
}

void func_28(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1860 Hash - 0x9D6C88B4 ^0x9D6C88B4
{
	PersChar persChar;
	Ped perscharPedIndex;

	if (!func_67(iParam0))
		return;

	if (!func_69(iParam0, true))
		return;

	if (!func_69(iParam0, 2))
		return;

	if (!bParam4 && !func_68(iParam0) && func_70(iParam0))
		return;

	func_71(iParam0, true);
	func_72(iParam0);

	if (func_73(func_64(iParam0)))
	{
		persChar = func_65(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return;
	
		PERSCHAR::_0xBB68908CD11AEBDC(persChar);
		PERSCHAR::_0xB65E7F733956CF25(persChar);
	
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(persChar);
	
		perscharPedIndex = PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
	
		if (!PED::IS_PED_INJURED(perscharPedIndex))
			PED::SET_PED_CONFIG_FLAG(perscharPedIndex, 171, false);
	
		if (bParam1)
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(persChar);
	
		func_71(iParam0, 16);
	}

	if (func_69(iParam0, 128) && !bParam3)
		func_74(iParam0, false);

	return;
}

BOOL func_29(int iParam0) // Position - 0x194C Hash - 0xC61C6F56 ^0xC61C6F56
{
	int num;

	if (Global_1934765.f_337 == 0)
		return false;

	num = func_75(iParam0);

	if (num == -1)
		return false;

	return num == Global_1934765.f_338;
}

void func_30(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x197F Hash - 0x33B28556 ^0x33B28556
{
	func_76(iParam0, iParam1, bParam2, iParam3);
	return;
}

void func_31(int iParam0) // Position - 0x1993 Hash - 0x60A62C5E ^0xC3996844
{
	switch (iParam0)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_5))
			{
				OBJECT::DELETE_OBJECT(&obLocal_5);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_cs_bucket01x"));
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_4))
			{
				PED::DELETE_PED(&pedLocal_4);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_C_Cow"));
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_6))
			{
				OBJECT::DELETE_OBJECT(&obLocal_6);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_stool02x"));
			}
		
			if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_7))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_val_gate2m02x"));
				ENTITY::_UNPIN_MAP_ENTITY(eLocal_7);
			}
			break;
	
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_2))
			{
				PED::DELETE_PED(&pedLocal_2);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_horse_americanpaint_tobiano"));
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_3))
			{
				OBJECT::DELETE_OBJECT(&obLocal_3);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_brushhorse01x"));
			}
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_1))
			{
				OBJECT::DELETE_OBJECT(&obLocal_1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_haybale03x"));
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_0))
			{
				VEHICLE::DELETE_VEHICLE(&veLocal_0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cart06"));
			}
			break;
	
		case 8:
		case 16:
			if (ENTITY::IS_MAP_ENTITY_PINNED(eLocal_8))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_door04x"));
				ENTITY::_UNPIN_MAP_ENTITY(eLocal_8);
			}
			break;
	}

	return;
}

BOOL func_32() // Position - 0x1AA5 Hash - 0x3CA1BB47 ^0x6A0D5C15
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("camera_item")) > 0)
		return true;

	return false;
}

BOOL func_33(Hash hParam0) // Position - 0x1ABF Hash - 0x798E6037 ^0xDD3AB35C
{
	int i;

	i = 0;

	for (i = 0; i < Global_1934603.f_161; i = i + 1)
	{
		if (hParam0 == MISC::GET_HASH_KEY(&(Global_1934603[i /*16*/].f_10)))
		{
			func_77(i);
			return true;
		}
	}

	return false;
}

Entity func_34() // Position - 0x1AFF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1900383.f_393;
}

Hash func_35(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B0E Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

BOOL func_36(Hash hParam0) // Position - 0x1B34 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

BOOL func_37(int iParam0, int iParam1) // Position - 0x1B42 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_38(int iParam0) // Position - 0x1B51 Hash - 0xDB95BE3A ^0xF88B3122
{
	switch (iParam0)
	{
		case 1:
			if (func_27(714, false))
				return false;
		
			return true;
	
		case 2:
			if (func_27(709, false))
				return false;
		
			return true;
	
		case 4:
			if (func_27(710, false))
				return false;
		
			return true;
	
		case 8:
		case 16:
			if (func_78(13, true, true))
				return true;
			break;
	}

	return false;
}

void func_39(Volume volParam0) // Position - 0x1BD4 Hash - 0x7DD010A2 ^0x16530136
{
	if (VOLUME::DOES_VOLUME_EXIST(volParam0))
		VOLUME::DELETE_VOLUME(volParam0);

	return;
}

void func_40(Hash hParam0, float fParam1, BOOL bParam2) // Position - 0x1BEB Hash - 0xF11CBF23 ^0xD1C14ADA
{
	func_79(hParam0, false, false);

	if (func_80(hParam0))
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hParam0, fParam1, bParam2);

	return;
}

void func_41(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1C12 Hash - 0xB9FD135E ^0x2A68E0C1
{
	func_79(hParam0, false, false);

	if (func_80(hParam0))
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(hParam0) != iParam1 || bParam2)
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hParam0, iParam1);

	return;
}

BOOL func_42(int iParam0, BOOL bParam1) // Position - 0x1C4B Hash - 0x9F6E755B ^0x9F6E755B
{
	if (!func_67(iParam0))
		return false;

	if (!func_69(iParam0, 2))
		return false;

	if (func_69(iParam0, 32) && !bParam1)
	{
		func_81(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_64(iParam0)));
	
		if (func_66() == -1)
		{
			if (func_69(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_65(iParam0));
				func_71(iParam0, 2048);
			}
		
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_65(iParam0));
		}
	
		return false;
	}

	if (!func_82(iParam0) && func_66() == -1)
		return false;

	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_65(iParam0)))
	{
		func_71(iParam0, 128);
		return true;
	}

	func_81(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_64(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_65(iParam0));

	if (func_69(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_65(iParam0));
		func_71(iParam0, 2048);
	}

	return true;
}

Ped func_43(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x1D36 Hash - 0x816A3A36 ^0x24211010
{
	Ped ped;
	PersChar persChar;

	if (!func_83(iParam0, true))
		return 0;

	if (func_73(func_64(iParam0)))
	{
		persChar = func_65(iParam0);
	
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
			return 0;
	
		if (bParam1)
			if (PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(persChar))
				PERSCHAR::_REVIVE_PERSCHAR(persChar);
	
		PERSCHAR::_0x6759BEE6762E140B(persChar);
		ped = PERSCHAR::_FORCE_SPAWN_PERSCHAR(persChar, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(ped))
			return 0;
	}

	if (bParam4 && !func_68(iParam0) && !ENTITY::IS_ENTITY_DEAD(ped))
	{
		PED::SET_PED_CONFIG_FLAG(ped, 171, bParam5);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, true);
	}

	func_84(iParam0, 1);
	func_85(iParam0);

	if (bParam3)
		func_84(iParam0, 16);

	!bParam2;
	return ped;
}

Ped func_44(ePedType eptParam0, float fParam1, float fParam2, float fParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8, BOOL bParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14) // Position - 0x1DF3 Hash - 0xA2E56CA0 ^0x72EAA6BD
{
	Ped ped;

	ped = PED::CREATE_PED(eptParam0, fParam1, iParam4, bParam5, bParam6, bParam13, bParam14);

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return 0;

	func_86(ped, eptParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return ped;
}

Ped func_45(int iParam0) // Position - 0x1E35 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_87(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

BOOL func_46(int iParam0, int iParam1) // Position - 0x1E6F Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_47(int iParam0) // Position - 0x1E7E Hash - 0xB8EC44B7 ^0xE877E9C4
{
	switch (iParam0)
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

Hash func_48(int iParam0) // Position - 0x23B3 Hash - 0x7B091E14 ^0x2ED2329F
{
	if (iParam0 == -1)
		iParam0 = func_88();

	if (func_66() == -1)
		return Global_26796.f_26[iParam0 /*120*/].f_1;

	return Global_36638.f_45.f_350.f_26[iParam0 /*120*/].f_1;
}

BOOL func_49(int iParam0, BOOL bParam1) // Position - 0x23ED Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_89(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

BOOL func_50(Hash hParam0, int iParam1) // Position - 0x2412 Hash - 0xD3FACC08 ^0xE7B5B402
{
	int num;

	num = func_90(iParam1);
	func_91(&(Global_1946054.f_964), num, hParam0, -897569541, 1, iParam1);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));
	return DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964));
}

void func_51(int iParam0, BOOL bParam1) // Position - 0x244F Hash - 0x5B5DA81B ^0x5B5DA81B
{
	BOOL flag;

	if (!func_89(iParam0))
		return;

	flag = Global_40.f_7157[iParam0 /*3*/] && bParam1;
	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] - flag;
	return;
}

void func_52(int iParam0, BOOL bParam1) // Position - 0x248A Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_89(iParam0))
		return;

	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] || bParam1;
	return;
}

void func_53(Ped pedParam0) // Position - 0x24B6 Hash - 0x446F1BDD ^0x9732CECA
{
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request");
	DECORATOR::DECOR_REMOVE(pedParam0, "metaped_outfit_request_name");
	return;
}

void func_54() // Position - 0x24D4 Hash - 0x8102D3EE ^0x3D957E32
{
	char* animName;

	if (PED::IS_PED_RAGDOLL(Global_35))
		return;

	if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 1, 1))
		return;

	if (!func_92(1))
		return;

	animName = "outfit_change_unarmed";

	switch (Global_1946054.f_859)
	{
		case 0:
			animName = "outfit_change_offhand";
			break;
	
		case 1:
			animName = "outfit_change_longarms";
			break;
	
		case 2:
			animName = "outfit_change_unarmed";
			break;
	}

	TASK::TASK_PLAY_ANIM(Global_35, func_93(), animName, 1090519040, -1056964608, -1, 67108880, 0, false, 0, false, "Satchel_and_ik_hand_helpers_filter", false);
	func_94(1);
	STREAMING::REMOVE_ANIM_DICT(func_93());
	return;
}

BOOL func_55(int iParam0) // Position - 0x2575 Hash - 0x4A181B5A ^0x4A181B5A
{
	return false;
}

int func_56(int iParam0) // Position - 0x257E Hash - 0x3D48653D ^0x3D48653D
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 1;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 1;
	
		case 5:
			return 1;
	
		default:
		
	}

	return 0;
}

void func_57(Hash hParam0, Ped pedParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Position - 0x25CB Hash - 0xBF38E26 ^0xBF38E26
{
	BOOL flag;
	int num;
	Hash hash;
	int num2;
	int num3;

	flag = false;
	num = 0;
	hash = hParam0;
	num2 = -1;
	num3 = func_95(hParam0);

	if (num3 >= 0 && num3 <= 5)
		num2 = num3;

	if (func_66() != -1)
		return;

	func_96();

	if (bParam5)
		if (!func_97(&(Global_1946054.f_1378), &flag, hash, num2, true, 0))
			return;

	if (func_92(32768) && Global_1946054.f_1378.f_1[10 /*3*/] != Global_1946054.f_57[10 /*11*/])
		func_98();

	func_99(num2, true, true, 1, true, true);
	func_100(31, 0, 0, 0, false);
	func_101(0);

	if (!bParam3)
		return;

	if (flag)
		num = 8;

	if (!bParam4)
		if (PED::IS_PED_A_PLAYER(pedParam1))
			func_100(2, num, 2, 0, false);
		else
			func_100(2, num, 3, pedParam1, false);
	else
		func_102(&(Global_1946054.f_1497), pedParam1, true, -1, true, true, true);

	return;
}

void func_58(Ped pedParam0) // Position - 0x26BE Hash - 0x26B6C274 ^0x15424056
{
	PED::_SET_PED_DIRT_CLEANED(pedParam0, 0f, -1, true, true);
	PED::CLEAR_PED_ENV_DIRT(pedParam0);
	PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 10, "ALL");
	PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
	return;
}

BOOL func_59(int iParam0, BOOL bParam1) // Position - 0x26E9 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_103(iParam0))
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

void func_60(var uParam0) // Position - 0x271A Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_104(uParam0, 0f);
	return;
}

BOOL func_61(var uParam0) // Position - 0x2729 Hash - 0x39705408 ^0x39705408
{
	return func_63(*uParam0, 2);
}

float func_62() // Position - 0x2739 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_63(int iParam0, int iParam1) // Position - 0x276B Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

Hash func_64(int iParam0) // Position - 0x277A Hash - 0xB7A722DE ^0xB7A722DE
{
	if (!func_67(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/];
}

PersChar func_65(int iParam0) // Position - 0x2798 Hash - 0xE4DA9E55 ^0x1956E0E8
{
	if (!func_67(iParam0))
		return 0;

	return Global_1895087[iParam0 /*3*/].f_1;
}

BOOL func_66() // Position - 0x27B8 Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

BOOL func_67(int iParam0) // Position - 0x27C6 Hash - 0x958B152F ^0x174871D
{
	return iParam0 > -1 && iParam0 < 954;
}

BOOL func_68(int iParam0) // Position - 0x27DD Hash - 0x9BC71541 ^0x89F7971
{
	if (!func_67(iParam0))
		return false;

	return Global_1895087[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

BOOL func_69(int iParam0, BOOL bParam1) // Position - 0x2802 Hash - 0x3F05A93A ^0x3F05A93A
{
	if (func_66() != -1)
		return false;

	if (!func_67(iParam0))
		return false;

	return Global_24887[iParam0 /*2*/] && bParam1 != false;
}

BOOL func_70(int iParam0) // Position - 0x2830 Hash - 0xC37911D0 ^0x7051484B
{
	if (!func_67(iParam0))
		return false;

	return SCRIPTS::DOES_THREAD_EXIST(Global_1895087[iParam0 /*3*/].f_2);
}

void func_71(int iParam0, BOOL bParam1) // Position - 0x2854 Hash - 0x452DF11A ^0x452DF11A
{
	if (func_66() != -1)
		return;

	if (!func_67(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] - Global_24887[iParam0 /*2*/] && bParam1;
	return;
}

void func_72(int iParam0) // Position - 0x288D Hash - 0x6CFD5248 ^0x5A80A028
{
	Ped ped;

	if (!func_67(iParam0))
		return;

	ped = func_105(iParam0);

	if (ENTITY::DOES_ENTITY_EXIST(ped))
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(ped, false))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);

	Global_1895087[iParam0 /*3*/].f_2 = 0;
	return;
}

BOOL func_73(Hash hParam0) // Position - 0x28D1 Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

int func_74(int iParam0, BOOL bParam1) // Position - 0x28DD Hash - 0x4B9D82B ^0x1C7581CD
{
	if (!func_67(iParam0))
		return 0;

	if (!func_69(iParam0, 2))
		return 0;

	if (func_64(iParam0) == 0)
		return 1;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_65(iParam0)))
		return 1;

	if (func_69(iParam0, true) && !bParam1)
	{
		func_84(iParam0, 128);
		return 1;
	}

	func_71(iParam0, 129);
	func_72(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_65(iParam0));
	func_81(iParam0, 0);
	return 1;
}

int func_75(int iParam0) // Position - 0x2960 Hash - 0xBD29D98D ^0x5F4424B6
{
	int i;

	if (Global_1934765.f_337 == 0)
		return -1;

	for (i = 0; i < Global_1934765.f_337; i = i + 1)
	{
		if (Global_1934765.f_318[i /*3*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_76(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x29A7 Hash - 0xB3DF5EA7 ^0xB3DF5EA7
{
	int num;

	num = func_75(iParam1);

	if (num == -1)
	{
		func_106(iParam0, iParam1, iParam3);
		func_107(bParam2, iParam3);
		return;
	}

	if (iParam0 != Global_1934765.f_318[num /*3*/])
	{
		func_108(num);
		func_106(iParam0, iParam1, iParam3);
		Global_1934765.f_338 = -1;
		func_107(bParam2, iParam3);
		return;
	}

	return;
}

void func_77(int iParam0) // Position - 0x2A05 Hash - 0xBEE7BE6F ^0x7416FECE
{
	var unk;

	if (iParam0 < 0 || iParam0 >= 10)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1934603[iParam0 /*16*/].f_10)))
		return;

	Global_1934603[iParam0 /*16*/] = { unk };
	Global_1934603.f_161 = Global_1934603.f_161 - 1;

	if (Global_1934603.f_161 < 0)
		Global_1934603.f_161 = 0;

	return;
}

BOOL func_78(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2A65 Hash - 0x9D8E22CB ^0x9D8E22CB
{
	if (!func_87(iParam0))
		return false;

	if (bParam1)
		return func_109(iParam0, 26, true);

	if (bParam2)
		if (!func_18(func_45(iParam0), 0))
			return false;

	if (!func_110(iParam0, true, false))
		return false;

	if (func_109(iParam0, 44, true))
		return false;

	return true;
}

Hash func_79(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2AC5 Hash - 0xEC5804B5 ^0x15A1D925
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0))
		if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);
		else
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, false, false, 0, 0, false);
	else if (NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051081.f_15[0]) && bParam1)
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(hParam0))
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(hParam0, true, true, false, Global_1051081.f_15[0], 0, false);

	if (bParam2)
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(hParam0, true);

	return hParam0;
}

BOOL func_80(Hash hParam0) // Position - 0x2B69 Hash - 0xCD60E05 ^0x368E4BC
{
	if (func_111(hParam0))
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hParam0);

	return false;
}

void func_81(int iParam0, PersChar pchParam1) // Position - 0x2B84 Hash - 0x9642AD01 ^0x291C3DA3
{
	if (!func_67(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_1 = pchParam1;
	return;
}

BOOL func_82(int iParam0) // Position - 0x2BA5 Hash - 0xF5815C8D ^0xF5815C8D
{
	if (!func_67(iParam0))
		return false;

	if (!func_69(iParam0, 2))
		return false;

	return true;
}

BOOL func_83(int iParam0, BOOL bParam1) // Position - 0x2BCB Hash - 0x5C4302E7 ^0x5C4302E7
{
	if (!func_67(iParam0))
		return false;

	if (func_69(iParam0, true) && !func_68(iParam0) && func_70(iParam0))
		return false;

	if (!func_69(iParam0, 2))
		return false;

	if (!bParam1)
		if (!func_112(iParam0, false))
			return false;

	return true;
}

void func_84(int iParam0, BOOL bParam1) // Position - 0x2C2B Hash - 0x61515A20 ^0x61515A20
{
	if (func_66() != -1)
		return;

	if (!func_67(iParam0))
		return;

	Global_24887[iParam0 /*2*/] = Global_24887[iParam0 /*2*/] || bParam1;
	return;
}

void func_85(int iParam0) // Position - 0x2C5C Hash - 0x5A948764 ^0xFC1342AE
{
	if (!func_67(iParam0))
		return;

	Global_1895087[iParam0 /*3*/].f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	return;
}

void func_86(Ped pedParam0, ePedType eptParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7) // Position - 0x2C7F Hash - 0x34B16A84 ^0xB920827
{
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) || ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	flag = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(eptParam1));

	if (!bParam7)
	{
		if (func_113(eptParam1))
		{
			func_114(pedParam0, joaat("META_OUTFIT_DEFAULT"));
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
			func_115(pedParam0, 0, true);
	
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
			func_116(pedParam0, false);
			flag = true;
		}
	
		func_117(pedParam0, iParam2);
	}

	if (flag)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

BOOL func_87(int iParam0) // Position - 0x2D60 Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

int func_88() // Position - 0x2D6C Hash - 0x2BA7679 ^0x402F4D9C
{
	if (func_66() == -1)
		return Global_26796.f_776;

	return Global_36638.f_45.f_350.f_1011;
}

BOOL func_89(int iParam0) // Position - 0x2D90 Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

int func_90(int iParam0) // Position - 0x2DAF Hash - 0x68D06F4A ^0x14E98A5E
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_118();

	if (func_66() == -1)
		if (iParam0 == 1160113249)
			num = 1583685020;
		else
			num = -572793833;
	else
		num = -2109211296;

	return num;
}

void func_91(Any* panParam0, int iParam1, Hash hParam2, int iParam3, int iParam4, int iParam5) // Position - 0x2DF2 Hash - 0x2E9AB941 ^0x44CE1BA8
{
	*panParam0 = iParam1;
	panParam0->f_1 = hParam2;
	panParam0->f_2 = iParam3;
	panParam0->f_3 = iParam4;
	panParam0->f_4 = iParam5;
	panParam0->f_6 = 0;
	panParam0->f_5 = 0;
	return;
}

BOOL func_92(BOOL bParam0) // Position - 0x2E21 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

char* func_93() // Position - 0x2E32 Hash - 0x306ACA3A ^0xDA6904FC
{
	return "MECH_INVENTORY@CLOTHING@OUTFIT_CHANGE";
}

void func_94(BOOL bParam0) // Position - 0x2E3E Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

int func_95(Hash hParam0) // Position - 0x2E56 Hash - 0x9830D1FB ^0x9830D1FB
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

void func_96() // Position - 0x3269 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

BOOL func_97(var uParam0, var uParam1, Hash hParam2, int iParam3, BOOL bParam4, int iParam5) // Position - 0x32B0 Hash - 0x27046CB6 ^0xE856FDF2
{
	int num;

	if (!func_119(uParam0, iParam3, hParam2) && !func_120(uParam0, hParam2, uParam1, false, bParam4, false, 0))
		return false;

	num = 10;

	if (func_92(32768))
		if (!*uParam1 || *uParam1 && uParam0->f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
			func_121(1108822547);
		else
			func_122(1108822547);

	func_123(uParam0, false, 0);
	func_124(iParam5);
	return true;
}

void func_98() // Position - 0x333A Hash - 0xB6203BF0 ^0x217DD714
{
	func_125(&(Global_1946054.f_2776));
	func_94(32768);
	func_126(1108822547, 8, 6);
	return;
}

void func_99(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x3361 Hash - 0x733B4F28 ^0x96B1E20F
{
	int num;
	int num2;

	num2 = 1;

	if (bParam2)
		if (iParam0 == -1 || iParam0 == func_88() || bParam5)
			func_127();

	if (func_66() == -1)
	{
		num = Global_40.f_7729;
	
		if (DECORATOR::DECOR_EXIST_ON(Global_35, "playerChangeOutfits") && DECORATOR::DECOR_GET_BOOL(Global_35, "playerChangeOutfits"))
			num = Global_1905941;
	
		if (bParam4 && num > 5 && func_128(Global_1946054.f_1497))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				num = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_47(Global_40.f_7729);
				Global_1946054.f_1378 = func_47(Global_40.f_7729);
				iParam3 = 1;
			}
		}
	
		num2 = func_56(num);
	}

	if (iParam3 && num2)
		func_129(iParam0, false, 6);

	if (bParam1)
		func_130(false, true);

	func_124(0);
	return;
}

void func_100(int iParam0, int iParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x34B2 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_131(16384);

	num = iParam0;
	num.f_1 = iParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_132(num);
	return;
}

void func_101(int iParam0) // Position - 0x34E4 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_133(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_134(num);
	return;
}

void func_102(Hash hParam0, Ped pedParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x3528 Hash - 0xABE0892F ^0x49EF76F7
{
	int i;
	int num;
	Hash componentHash;
	int num2;
	BOOL isMp;

	isMp = func_66() != -1;
	Global_1946054.f_857 = 0;

	if (iParam3 == -1 && bParam6)
	{
		PED::_RESET_PED_COMPONENTS(pedParam1);
	
		if (!isMp)
		{
			if (Global_1347477.f_189 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_189);
		
			if (Global_1946054.f_1 == -2125499975 || Global_1946054.f_1 == -449205311 && Global_1347477.f_190 != 0)
				PED::_EQUIP_META_PED_OUTFIT(pedParam1, Global_1347477.f_190);
		
			func_131(262144);
		}
	}
	else
	{
		bParam6 = false;
	
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_135(pedParam1, 29, isMp, true, 0);
			func_135(pedParam1, 31, isMp, true, 0);
			func_135(pedParam1, 30, isMp, true, 0);
			func_135(pedParam1, 22, isMp, true, 0);
			func_135(pedParam1, 37, isMp, true, 0);
		}
	}

	if (func_92(32768) && func_136(1108822547, 8) && func_137(10, iParam3))
		func_138(pedParam1, false, true);

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num2 = func_139(num, 1);
		
			if (func_136(num2, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || hParam0->f_1[num /*3*/] == 0)
			{
			}
			else
			{
				componentHash = hParam0->f_1[num /*3*/];
			
				if (!func_137(num, iParam3))
				{
				}
				else if (func_136(num2, 6) || hParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/] || hParam0->f_1[num /*3*/].f_1 == 289238755)
				{
					if (!func_136(num2, 1) || bParam2)
					{
						Global_1946054.f_857 = Global_1946054.f_857 + 1;
					
						if (!bParam6)
							func_135(pedParam1, num, isMp, true, 0);
					
						if (hParam0->f_1[num /*3*/].f_1 == 289238755)
							Global_1946054.f_2456[num /*2*/].f_1 = 289238755;
					
						func_140(num2, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if (!bParam2 && hParam0->f_1[num /*3*/] == Global_1946054.f_2456[num /*2*/] && hParam0->f_1[num /*3*/].f_1 == Global_1946054.f_2456[num /*2*/].f_1)
						{
						}
						else
						{
							if (Global_1946054.f_57[num /*11*/].f_1 > 1)
								func_135(pedParam1, num, isMp, true, hParam0->f_1[num /*3*/]);
						
							Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
							Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
						
							if (func_136(num2, 1))
								func_126(num2, 1, 6);
						
							Global_1946054.f_857 = Global_1946054.f_857 + 1;
							PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
						
							if (hParam0->f_1[num /*3*/].f_1 != 0)
								PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
						}
					}
				
					Global_1946054.f_2456[num /*2*/] = hParam0->f_1[num /*3*/];
					Global_1946054.f_2456[num /*2*/].f_1 = hParam0->f_1[num /*3*/].f_1;
				
					if (func_136(num2, 1))
						func_126(num2, 1, 6);
				
					Global_1946054.f_857 = Global_1946054.f_857 + 1;
					PED::_APPLY_SHOP_ITEM_TO_PED(pedParam1, componentHash, false, isMp, false);
				
					if (hParam0->f_1[num /*3*/].f_1 != 0)
						PED::_UPDATE_SHOP_ITEM_WEARABLE_STATE(pedParam1, componentHash, hParam0->f_1[num /*3*/].f_1, 0, isMp, 1);
				}
			}
		}
	}

	if (Global_1946054.f_857 <= 0)
		return;

	if (bParam4)
	{
		PED::_0xAAB86462966168CE(pedParam1, isMp);
		PED::_UPDATE_PED_VARIATION(pedParam1, false, true, true, true, bParam5);
	}

	return;
}

int func_103(int iParam0) // Position - 0x3871 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_141(iParam0))
		return -1;

	return func_142(iParam0);
}

void func_104(var uParam0, float fParam1) // Position - 0x388D Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_62() - fParam1;
	func_143(uParam0, 1);
	func_144(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

Ped func_105(int iParam0) // Position - 0x38B3 Hash - 0x9E175D46 ^0xBCF88463
{
	PersChar persChar;

	persChar = func_65(iParam0);

	if (persChar == 0)
		return 0;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(persChar))
		return 0;

	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(persChar);
}

void func_106(int iParam0, int iParam1, int iParam2) // Position - 0x38E1 Hash - 0xEA998704 ^0x55894B72
{
	if (iParam1 == -1)
		return;

	if (Global_1934765.f_337 >= 6)
		return;

	Global_1934765.f_318[Global_1934765.f_337 /*3*/] = iParam0;
	Global_1934765.f_318[Global_1934765.f_337 /*3*/].f_1 = iParam1;
	Global_1934765.f_318[Global_1934765.f_337 /*3*/].f_2 = iParam2;
	Global_1934765.f_337 = Global_1934765.f_337 + 1;
	return;
}

void func_107(BOOL bParam0, int iParam1) // Position - 0x394A Hash - 0xF8FB6EAE ^0xDB91070A
{
	int num;

	if (MISC::IS_BIT_SET(Global_1934765.f_301, 1))
		return;

	num = func_145();

	if (num < 0)
		return;

	if (num >= 6)
		return;

	if (num == Global_1934765.f_338)
		return;

	if (func_146(Global_1934765.f_318[num /*3*/], bParam0, iParam1))
		Global_1934765.f_338 = num;

	return;
}

void func_108(int iParam0) // Position - 0x39AD Hash - 0x6C99900E ^0x6C99900E
{
	int i;

	if (Global_1934765.f_337 == 0)
		return;

	if (Global_1934765.f_337 > 1)
	{
		for (i = iParam0; i <= Global_1934765.f_337 - 2; i = i + 1)
		{
			MISC::COPY_SCRIPT_STRUCT(&Global_1934765.f_318[i /*3*/], &Global_1934765.f_318[i + 1 /*3*/], 3);
		}
	}

	Global_1934765.f_337 = Global_1934765.f_337 - 1;
	return;
}

BOOL func_109(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3A16 Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_87(iParam0))
			return false;

	func_147(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

BOOL func_110(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3A51 Hash - 0xE0196EFD ^0xE0196EFD
{
	if (!func_87(iParam0))
		return false;

	if (func_148(iParam0, 32, true))
		return false;

	if (!func_148(iParam0, 2, true))
		return false;

	if (!func_148(iParam0, 4, true))
		return false;

	if (func_109(iParam0, 33, true))
		return false;

	if (func_149(iParam0))
		return false;

	if (func_150(iParam0))
		if (!bParam2)
			return false;

	if (!bParam1)
		if (Global_1357549.f_1497 == iParam0)
			return false;

	return true;
}

BOOL func_111(Hash hParam0) // Position - 0x3ADE Hash - 0x5681CDD4 ^0x5681CDD4
{
	return hParam0 != 0;
}

BOOL func_112(int iParam0, BOOL bParam1) // Position - 0x3AEA Hash - 0xB10222FA ^0xCD9754C3
{
	if (func_66() != -1)
		return false;

	if (!func_67(iParam0))
		return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_65(iParam0)))
		return false;

	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_105(iParam0)))
		return false;

	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_65(iParam0));
}

BOOL func_113(ePedType eptParam0) // Position - 0x3B42 Hash - 0x5000025C ^0x5000025C
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

void func_114(Ped pedParam0, Hash hParam1) // Position - 0x3F95 Hash - 0xEA1C858E ^0xD43C85A5
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
	{
		if (func_151(pedParam0, hParam1))
		{
			if (func_152(pedParam0, hParam1))
			{
				if (func_153(pedParam0, hParam1))
				{
					PED::_APPLY_PED_META_PED_OUTFIT(DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request"), pedParam0, true, false);
					func_53(pedParam0);
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

void func_115(Ped pedParam0, int iParam1, BOOL bParam2) // Position - 0x4041 Hash - 0x6668C7E2 ^0xE9524C34
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return;

	PED::REMOVE_TAG_FROM_META_PED(pedParam0, joaat("HATS"), 1);

	if (bParam2)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_116(Ped pedParam0, BOOL bParam1) // Position - 0x4071 Hash - 0xC422C7A4 ^0x3D93F520
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	PED::_EQUIP_META_PED_OUTFIT(pedParam0, joaat("META_HORSE_SADDLE_ONLY"));

	if (bParam1)
		PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);

	return;
}

void func_117(Ped pedParam0, int iParam1) // Position - 0x40B6 Hash - 0xF0F93A59 ^0xE762BF9D
{
	if (iParam1 == 1)
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 0f);
	else
		PED::_SET_CHAR_EXPRESSION(pedParam0, 41611, 1f);

	return;
}

int func_118() // Position - 0x40DD Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_119(var uParam0, int iParam1, Hash hParam2) // Position - 0x40EB Hash - 0xF7A7FB9C ^0xF7A7FB9C
{
	if (iParam1 == -1)
		return false;

	if (hParam2 != 0 && func_48(iParam1) != hParam2)
		return false;

	if (func_154(2, iParam1))
	{
		func_155(uParam0, iParam1);
		return true;
	}

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_120(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, int iParam6) // Position - 0x412D Hash - 0xC258D89B ^0x96AA147F
{
	int num;
	int i;
	BOOL flag;
	int num2;
	int num3;

	num3 = func_90(iParam6);
	num3.f_1 = hParam1;
	num3.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&num3);

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
		return false;

	DATAFILE::_PARSEDDATA_GET_BOOL(&flag, &num3, -1516819610);
	DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 2049745650);
	*uParam2 = flag;
	Global_1946054.f_2652 = 0;

	if (!flag && !bParam3)
		func_157(uParam0, func_156(num), true);

	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&num3))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1409451727))
		{
		}
		else
		{
			num2 = num;
			i = func_158(num2, 1);
		
			if (i < 0 || i > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, joaat("Component")))
			{
			}
			else
			{
				Global_1946054.f_2612[Global_1946054.f_2652] = i;
				Global_1946054.f_2652 = Global_1946054.f_2652 + 1;
				uParam0->f_1[i /*3*/] = num;
			
				if (bParam5)
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1441384))
						uParam0->f_1[i /*3*/].f_1 = joaat("base");
					else
						goto 0x157;
			
				if (!DATAFILE::_PARSEDDATA_GET_SECTION(&num, &num3, 1194786549))
					if (func_159(num2) && func_160(uParam0->f_1[i /*3*/], num2, &num))
						uParam0->f_1[i /*3*/].f_1 = num;
				else
					uParam0->f_1[i /*3*/].f_1 = num;
			}
		}
	}

	if (flag)
	{
		for (i = 0; i < Global_1946054.f_2652; i = i + 1)
		{
			func_161(uParam0, uParam0->f_1[Global_1946054.f_2612[i] /*3*/], Global_1946054.f_2612[i], false, false);
		}
	}

	if (bParam4)
		*uParam0 = hParam1;

	return true;
}

void func_121(int iParam0) // Position - 0x42E2 Hash - 0x65A082AE ^0x65A082AE
{
	func_126(iParam0, 8, 6);
	return;
}

void func_122(int iParam0) // Position - 0x42F3 Hash - 0x65A082AE ^0x65A082AE
{
	func_140(iParam0, 8, 6);
	return;
}

void func_123(var uParam0, BOOL bParam1, int iParam2) // Position - 0x4304 Hash - 0xE06CF505 ^0xBC49746F
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;
	int num5;
	BOOL flag;
	int num6;
	int num7;

	flag = func_66() != -1;
	num6 = func_162(0);

	if (func_92(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_139(num, 1);
		
			if (func_136(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_136(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_163(uParam0->f_1[num /*3*/], num5, num6, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num7 = func_164(uParam0);

	if (num3 > 0)
	{
		if (!func_92(524288))
		{
			func_131(524288);
			num2 = num2 - num7;
		}
	
		for (i = num3; i <= 38; i = i + 1)
		{
			num = Global_1946054.f_57.f_430[i];
		
			if (num <= -1 || num >= 39)
			{
			}
			else
			{
				num5 = func_139(num, 1);
			
				if (func_136(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_136(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_163(uParam0->f_1[num /*3*/], num5, num6, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_165(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num7 < 31)
		func_94(524288);

	return;
}

void func_124(int iParam0) // Position - 0x4521 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

void func_125(var uParam0) // Position - 0x4532 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_126(int iParam0, int iParam1, int iParam2) // Position - 0x4590 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_158(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_158(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_158(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_127() // Position - 0x45CF Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1497 = Global_1946054.f_1378;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1497.f_1[i /*3*/] = { Global_1946054.f_1378.f_1[i /*3*/] };
	}

	return;
}

BOOL func_128(Hash hParam0) // Position - 0x4616 Hash - 0x3C376408 ^0xEF328608
{
	int num;
	BOOL num2;

	num = func_90(0);
	num2 = 0;
	func_91(&(Global_1946054.f_964), num, hParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&(Global_1946054.f_964)))
		return false;

	if (!DATAFILE::_PARSEDDATA_GET_BOOL(&num2, &(Global_1946054.f_964), -1516819610))
		return false;

	return num2;
}

void func_129(int iParam0, BOOL bParam1, int iParam2) // Position - 0x4674 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_166(&(Global_1946054.f_1378), iParam0);
	func_167(2, iParam0, 6);

	if (bParam1)
		func_130(false, true);

	return;
}

void func_130(BOOL bParam0, BOOL bParam1) // Position - 0x469C Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_124(0);

	if (bParam0)
	{
		func_131(8);
		func_131(512);
	}
	else
	{
		func_131(8);
		func_131(16);
	}

	return;
}

void func_131(BOOL bParam0) // Position - 0x46CF Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_132(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x46E2 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_168(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_169(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_131(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_168(iParam0))
				return;
		
			func_169(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_131(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_170(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

BOOL func_133(int iParam0, int iParam1) // Position - 0x48EE Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_134(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x48FD Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_168(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_168(20))
				return;
		}
	}

	func_169(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_131(8);
	return;
}

void func_135(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3, Hash hParam4) // Position - 0x4A01 Hash - 0x767FA5CE ^0x6D58A5B0
{
	int i;
	Hash shopItemComponentCategory;
	int num;

	num = func_139(iParam1, 1);

	if (!bParam2 && num == joaat("MP_COMPONENT_TYPE_BEARD"))
		bParam3 = false;

	if (hParam4 != 0)
		if (num == 1108822547)
			shopItemComponentCategory = func_171(hParam4);
		else if (hParam4 != Global_1946054.f_57[iParam1 /*11*/])
			shopItemComponentCategory = PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(hParam4, PED::_GET_META_PED_TYPE(pedParam0), bParam2);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0, bParam2);
		}
	}
	else
	{
		for (i = 0; i < Global_1946054.f_57[iParam1 /*11*/].f_1; i = i + 1)
		{
			if (Global_1946054.f_57[iParam1 /*11*/].f_2[i] != shopItemComponentCategory)
				PED::REMOVE_TAG_FROM_META_PED(pedParam0, Global_1946054.f_57[iParam1 /*11*/].f_2[i], 0);
		}
	}

	return;
}

BOOL func_136(int iParam0, int iParam1) // Position - 0x4AFE Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_158(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

BOOL func_137(int iParam0, int iParam1) // Position - 0x4B1C Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_138(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4B35 Hash - 0x1EA557EC ^0xC168425
{
	int num;

	num = 10;

	if (func_136(1108822547, 6))
	{
		if (bParam2)
		{
			func_135(pedParam0, num, func_66() != -1, false, 0);
			func_140(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		PED::_SET_META_PED_TAG(pedParam0, Global_1946054.f_2776.f_1, Global_1946054.f_2776.f_3[0], Global_1946054.f_2776.f_3[1], Global_1946054.f_2776.f_3[2], Global_1946054.f_2776.f_8, Global_1946054.f_2776.f_9, Global_1946054.f_2776.f_10, Global_1946054.f_2776.f_11);
		func_126(1108822547, 1, 6);
	}

	Global_1946054.f_857 = Global_1946054.f_857 + 1;

	if (!bParam1)
		return;

	PED::_UPDATE_PED_VARIATION(pedParam0, false, true, true, true, false);
	return;
}

int func_139(int iParam0, int iParam1) // Position - 0x4BFD Hash - 0xE1D12727 ^0xA46110B3
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

void func_140(int iParam0, int iParam1, int iParam2) // Position - 0x4E4C Hash - 0x10354A04 ^0xEB1297F4
{
	Global_1946054.f_57[func_158(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_158(iParam0, 1) /*11*/].f_10 || iParam1;
	return;
}

BOOL func_141(int iParam0) // Position - 0x4E79 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

int func_142(int iParam0) // Position - 0x4EAC Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_172(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

void func_143(var uParam0, int iParam1) // Position - 0x4EED Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_144(var uParam0, int iParam1) // Position - 0x4EFE Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_145() // Position - 0x4F13 Hash - 0x2C17305E ^0xAC9C59AD
{
	int num;
	int num2;
	int i;
	int num3;

	num = -1;
	num2 = -1;

	if (Global_1934765.f_337 <= 0)
		return -1;

	for (i = Global_1934765.f_337 - 1; i >= 0; i = i + -1)
	{
		num3 = func_173(Global_1934765.f_318[i /*3*/].f_1);
	
		if (num3 > num)
		{
			num = num3;
			num2 = i;
		}
	}

	return num2;
}

BOOL func_146(int iParam0, BOOL bParam1, int iParam2) // Position - 0x4F6E Hash - 0x86B49223 ^0x985A3B09
{
	int num;
	int i;
	Hash weatherType;

	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 0))
		return false;

	if (MISC::IS_BIT_SET(Global_1934765.f_301, 1))
		return false;

	if (iParam0 == 15)
		return false;

	if (iParam0 == 0)
	{
		MISC::_0x243CEDE8F916B994();
		return false;
	}

	num = func_174(iParam0, 1);

	for (i = 0; i < 24; i = i + 1)
	{
		weatherType = func_175(i, 1);
	
		if (weatherType == 0 || weatherType == -1439599467)
		{
		}
		else if (MISC::IS_BIT_SET(Global_1934765.f_302[num], i))
		{
			MISC::_0xD3F943B88F55376A(weatherType);
		}
		else
		{
			MISC::_0x2916B30DC6C41179(weatherType);
		}
	}

	return func_176(iParam0, bParam1, iParam2);
}

int func_147(int iParam0, var uParam1, var uParam2) // Position - 0x5020 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

BOOL func_148(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x503D Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_87(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

BOOL func_149(int iParam0) // Position - 0x5067 Hash - 0xDA629583 ^0xDA629583
{
	return func_148(iParam0, 16, true);
}

BOOL func_150(int iParam0) // Position - 0x5078 Hash - 0x29FCCE6A ^0xA230F605
{
	if (Global_40.f_4942[iParam0 /*60*/].f_59 != 0)
		return true;

	return false;
}

BOOL func_151(Ped pedParam0, Hash hParam1) // Position - 0x5095 Hash - 0x902FAF7B ^0x852CA371
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

BOOL func_152(Ped pedParam0, Hash hParam1) // Position - 0x50C3 Hash - 0xA54F3032 ^0xA2F87D0B
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

BOOL func_153(Ped pedParam0, Hash hParam1) // Position - 0x5114 Hash - 0xA54F3032 ^0xA2F87D0B
{
	Hash _int;
	int _int2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	if (!DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request") || !DECORATOR::DECOR_EXIST_ON(pedParam0, "metaped_outfit_request_name"))
		return false;

	_int = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request_name");

	if (!func_151(pedParam0, _int))
		return true;

	if (_int != hParam1)
		return false;

	_int2 = DECORATOR::DECOR_GET_INT(pedParam0, "metaped_outfit_request");
	return PED::_HAS_META_PED_OUTFIT_LOADED(_int2);
}

BOOL func_154(BOOL bParam0, int iParam1) // Position - 0x5186 Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			return Global_26796.f_26[iParam1 /*120*/] && bParam0 != false;
	
		return false;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		return Global_36638.f_45.f_350.f_26[iParam1 /*120*/] && bParam0 != false;

	return false;
}

void func_155(var uParam0, int iParam1) // Position - 0x5203 Hash - 0x532E3FFC ^0x8CC1CDDF
{
	int i;

	if (func_66() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		*uParam0 = Global_26796.f_26[iParam1 /*120*/].f_1;
	
		for (i = 0; i < 39; i = i + 1)
		{
			uParam0->f_1[i /*3*/] = { Global_26796.f_26[iParam1 /*120*/].f_1.f_1[i /*3*/] };
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	*uParam0 = Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1;

	for (i = 0; i < 39; i = i + 1)
	{
		uParam0->f_1[i /*3*/] = { Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[i /*3*/] };
	}

	return;
}

int func_156(int iParam0) // Position - 0x52BD Hash - 0xE69D9203 ^0x5667FA7E
{
	switch (iParam0)
	{
		case -2125161702:
			return 131072;
	
		case -1932005642:
			return 65536;
	
		case -1925540957:
			return 32768;
	
		case -1886898087:
			return 16496;
	
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
	
		case -1678578495:
			return 16384;
	
		case -1674046782:
			return 139376;
	
		case -1283403230:
			return 2048;
	
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
	
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
	
		case -1062102573:
			return 32833;
	
		case -915377750:
			return 1024;
	
		case -884591393:
			return 96;
	
		case -663436545:
			return 112;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
	
		case -376594188:
			return -1;
	
		case -366477279:
			return 0;
	
		case -141044514:
			return 4208;
	
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 128;
	
		case 75507907:
			return 8192;
	
		case 315750675:
			return 524288;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 512;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 256;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
	
		case 836721350:
			return 20480;
	
		case 884232794:
			return 8304;
	
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
	
		case 1024778115:
			return 4096;
	
		case 1042019528:
			return 1136;
	
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
	
		case 1481630954:
			return 262256;
	
		case 1929486675:
			return 262144;
	
		default:
		
	}

	return 0;
}

// Unhandled jump detected. Output should be considered invalid
void func_157(var uParam0, int iParam1, BOOL bParam2) // Position - 0x5445 Hash - 0xBA3A30EB ^0xCBF87037
{
	int i;
	Hash hash;
	Hash hash2;
	int num;

	for (i = 0; i < 39; i = i + 1)
	{
		if (func_177(&uParam0->f_1[i /*3*/], 2))
		{
			num = func_139(i, 1);
		
			if (func_137(i, iParam1))
			{
				hash2 = { func_178(i, -1) };
			
				if (hash2 != Global_1946054.f_57[i /*11*/] && hash2 != 0 && uParam0->f_1[i /*3*/] != hash2 || uParam0->f_1[i /*3*/].f_1 != hash2.f_1)
					uParam0->f_1[i /*3*/] = { hash2 };
			
				if (func_136(num, 4))
					func_126(num, 4, 6);
			}
			else
			{
				func_140(num, 4, 6);
				goto 0xC9;
			}
		}
	
		if (bParam2)
		{
			hash = Global_1946054.f_57[i /*11*/];
			uParam0->f_1[i /*3*/] = { hash };
		}
	}

	return;
}

int func_158(int iParam0, int iParam1) // Position - 0x551A Hash - 0x9D981F95 ^0x9D981F95
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

int func_159(int iParam0) // Position - 0x56EB Hash - 0x9D8F4245 ^0x3C0C5BB1
{
	int num;
	var unk;

	Global_1946054.f_964.f_2 = 0;

	if (func_66() == -1)
		num = -380731322;
	else
		num = 1226838104;

	func_91(&(Global_1946054.f_964), num, -367421157, 1409451727, 1, iParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1946054.f_964));

	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&unk, &(Global_1946054.f_964), 1409451727))
		return 0;

	return 1;
}

int func_160(var uParam0, int iParam1, var uParam2) // Position - 0x5756 Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return 1;
}

void func_161(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5767 Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	int num3;
	int num4;

	num2 = 12;
	num3 = func_179(uParam0->f_1[iParam2 /*3*/]);
	num4 = 0;

	if (bParam3)
		num4 = 3;

	if (func_137(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_165(num2, num4);
	}

	if (func_180(-1586649372) && func_137(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_165(num2, num4);
	}

	switch (num3)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_181(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_181(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_165(num2, num4);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_165(num2, num4);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_165(num2, num4);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_182(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_183(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_165(num2, num4);
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
						func_165(num2, num4);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_165(num2, num4);
				}
			
				num2 = 35;
			
				if (-923693316 == func_179(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_165(num2, num4);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_182(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_179(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_165(num2, num4);
				}
			}
			break;
	
		case -497931013:
			func_181(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_181(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_165(num2, num4);
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
						func_165(num2, num4);
				}
			}
		
			func_181(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_183(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_165(num2, num4);
			}
			break;
	
		case 1868067663:
			func_181(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_165(num2, num4);
			}
			break;
	}

	switch (func_179(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_179(uParam0->f_1[num2 /*3*/]) || func_183(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_165(num2, num4);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_179(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_165(num2, num4);
			}
			break;
	}

	return;
}

int func_162(int iParam0) // Position - 0x5DAB Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_118();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_163(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x5DD1 Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_158(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_92(524288))
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

	num = num + PED::_0x31B2E7F2E3C58B89(hParam0, joaat("base"), iParam2, bParam3);
	return num;
}

int func_164(var uParam0) // Position - 0x5E3C Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_165(int iParam0, int iParam1) // Position - 0x5E87 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_184(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_166(var uParam0, int iParam1) // Position - 0x5E9E Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_66() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_185(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_186(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_167(BOOL bParam0, int iParam1, int iParam2) // Position - 0x5F39 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		if (iParam1 > -1 && iParam1 < 5)
			Global_26796.f_26[iParam1 /*120*/] = Global_26796.f_26[iParam1 /*120*/] || bParam0;
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	if (iParam1 > -1 && iParam1 < 5)
		Global_36638.f_45.f_350.f_26[iParam1 /*120*/] = Global_36638.f_45.f_350.f_26[iParam1 /*120*/] || bParam0;

	return;
}

BOOL func_168(int iParam0) // Position - 0x5FC1 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_169(int iParam0) // Position - 0x5FD6 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

void func_170(int iParam0, var uParam1, var uParam2) // Position - 0x5FF6 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = uParam2;
	num = iParam0;
	num.f_2 = uParam1;
	func_134(num);
	return;
}

Hash func_171(Hash hParam0) // Position - 0x6016 Hash - 0xBBE66644 ^0xEC72F4B4
{
	int num;

	num = func_179(hParam0);

	switch (num)
	{
		case -2061583405:
			return joaat("HATS");
	
		case -525676072:
			return joaat("MASKS_LARGE");
	
		default:
		
	}

	return 0;
}

int func_172(int iParam0) // Position - 0x604B Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_173(int iParam0) // Position - 0x60CC Hash - 0xE68823E9 ^0xE68823E9
{
	switch (iParam0)
	{
		case 0:
			return 6;
	
		case 1:
			return 5;
	
		case 2:
			return 4;
	
		case 3:
			return 3;
	
		case 4:
			return 2;
	
		case 5:
			return 1;
	
		default:
		
	}

	return -1;
}

int func_174(int iParam0, int iParam1) // Position - 0x6119 Hash - 0x14CC7C0F ^0x14CC7C0F
{
	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_CH2_END"):
			return 3;
	
		case joaat("WEATHER_GROUP_CH2_MID"):
			return 4;
	
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			return 6;
	
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			return 8;
	
		case joaat("WEATHER_GROUP_GOOD"):
			return 7;
	
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			return 10;
	
		case joaat("WEATHER_GROUP_IN_CAMP"):
			return 9;
	
		case 0:
			return 13;
	
		case 15:
			return 14;
	
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			return 2;
	
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			return 11;
	
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			return 0;
	
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			return 12;
	
		case joaat("WEATHER_GROUP_BAD"):
			return 1;
	
		case joaat("WEATHER_GROUP_CH2_START"):
			return 5;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

Hash func_175(int iParam0, int iParam1) // Position - 0x61D7 Hash - 0xE1D12727 ^0xBB8F4D82
{
	switch (iParam0)
	{
		case 0:
			return joaat("BLIZZARD");
	
		case 1:
			return joaat("clouds");
	
		case 2:
			return joaat("DRIZZLE");
	
		case 3:
			return joaat("Fog");
	
		case 4:
			return joaat("groundblizzard");
	
		case 5:
			return joaat("hail");
	
		case 6:
			return joaat("highpressure");
	
		case 7:
			return joaat("hurricane");
	
		case 8:
			return joaat("Misty");
	
		case 9:
			return joaat("OVERCAST");
	
		case 10:
			return joaat("overcastdark");
	
		case 11:
			return joaat("rain");
	
		case 12:
			return joaat("sandstorm");
	
		case 13:
			return joaat("Shower");
	
		case 14:
			return joaat("sleet");
	
		case 15:
			return joaat("snow");
	
		case 16:
			return joaat("snowclearing");
	
		case 17:
			return joaat("SNOWLIGHT");
	
		case 18:
			return joaat("SUNNY");
	
		case 19:
			return joaat("THUNDER");
	
		case 20:
			return joaat("Thunderstorm");
	
		case 21:
			return joaat("whiteout");
	
		case 22:
			return 0;
	
		case 23:
			return -1439599467;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

BOOL func_176(int iParam0, BOOL bParam1, int iParam2) // Position - 0x6342 Hash - 0xA86A1B90 ^0x42F8DE60
{
	int num;
	Hash prevWeatherTypeHashName;
	int offset;
	Hash nextWeatherTypeHashName;
	int offset2;
	Hash weather;
	int num2;
	int offset3;
	int num3;
	int randomWeatherTypeIndex;
	Hash weatherType;
	Hash weatherType2;

	if (!MISC::IS_BIT_SET(Global_1934765.f_301, 0))
		return 0;

	num = func_174(iParam0, 1);

	if (num < 0 || num >= 15)
		return 0;

	prevWeatherTypeHashName = MISC::_GET_PREV_WEATHER_TYPE_HASH_NAME();
	offset = func_187(prevWeatherTypeHashName, 1);

	if (offset < 0 || offset > 31)
		return 0;

	nextWeatherTypeHashName = MISC::_GET_NEXT_WEATHER_TYPE_HASH_NAME();
	offset2 = func_187(nextWeatherTypeHashName, 1);

	if (offset2 < 0 || offset2 > 31)
		return 0;

	MISC::_GET_FORCED_WEATHER(&weather, &num2);
	offset3 = func_187(weather, 1);

	if (num2 != 0 && !bParam1)
		return 0;

	if (weather != 0)
		if (MISC::IS_BIT_SET(Global_1934765.f_302[num], offset3))
			return 1;
	else if (MISC::IS_BIT_SET(Global_1934765.f_302[num], offset) && MISC::IS_BIT_SET(Global_1934765.f_302[num], offset2))
		return 1;

	num3 = 0;

	while (num3 < 20)
	{
		num3 = num3 + 1;
		randomWeatherTypeIndex = MISC::_GET_RANDOM_WEATHER_TYPE_INDEX();
	
		if (!MISC::IS_BIT_SET(Global_1934765.f_302[num], randomWeatherTypeIndex))
		{
		}
		else
		{
			weatherType = func_175(randomWeatherTypeIndex, 1);
		
			if (weatherType == 0 || weatherType == -1439599467)
			{
			}
			else
			{
				if (bParam1)
					MISC::SET_WEATHER_TYPE(weatherType, true, false, false, 0, false);
				else
					MISC::SET_WEATHER_TYPE(weatherType, true, false, true, iParam2, false);
			
				return 1;
			}
		}
	}

	switch (iParam0)
	{
		case joaat("WEATHER_GROUP_CH2_END"):
			weatherType2 = joaat("highpressure");
			break;
	
		case joaat("WEATHER_GROUP_CH2_MID"):
			weatherType2 = joaat("SUNNY");
			break;
	
		case joaat("WEATHER_GROUP_CH3_DROUGHT"):
			weatherType2 = joaat("SUNNY");
			break;
	
		case joaat("WEATHER_GROUP_GOOD_VISIBILITY"):
			weatherType2 = joaat("highpressure");
			break;
	
		case joaat("WEATHER_GROUP_GOOD"):
			weatherType2 = joaat("SUNNY");
			break;
	
		case joaat("WEATHER_GROUP_LIGHT_PRECIPITATION"):
			weatherType2 = joaat("OVERCAST");
			break;
	
		case joaat("WEATHER_GROUP_IN_CAMP"):
			weatherType2 = joaat("clouds");
			break;
	
		case joaat("WEATHER_GROUP_BAD_VISIBILITY"):
			weatherType2 = joaat("Fog");
			break;
	
		case joaat("WEATHER_GROUP_NO_PRECIPITATION"):
			weatherType2 = joaat("clouds");
			break;
	
		case joaat("WEATHER_GROUP_ATMOSPHERIC"):
			weatherType2 = joaat("Misty");
			break;
	
		case joaat("WEATHER_GROUP_THUNDERSTORM"):
			weatherType2 = joaat("Thunderstorm");
			break;
	
		case joaat("WEATHER_GROUP_BAD"):
			weatherType2 = joaat("rain");
			break;
	
		case joaat("WEATHER_GROUP_CH2_START"):
			weatherType2 = joaat("clouds");
			break;
	
		default:
			weatherType2 = joaat("OVERCAST");
			break;
	}

	if (bParam1)
		MISC::SET_WEATHER_TYPE(weatherType2, true, false, false, 0, false);
	else
		MISC::SET_WEATHER_TYPE(weatherType2, false, false, true, iParam2, false);

	return 1;
}

BOOL func_177(var uParam0, int iParam1) // Position - 0x65B7 Hash - 0x718DD1EF ^0xD9260236
{
	return uParam0->f_2 && iParam1 != false;
}

Vector3 func_178(int iParam0, int iParam1) // Position - 0x65C8 Hash - 0x6854E748 ^0xA730727C
{
	if (func_66() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		return Global_26796.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	return Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

int func_179(Hash hParam0) // Position - 0x6627 Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_188(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_180(int iParam0) // Position - 0x6652 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_158(iParam0, 1) /*3*/] != Global_1946054.f_57[func_158(iParam0, 1) /*11*/];
}

void func_181(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x668A Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_165(num2, num);
	
		if (bParam1)
			func_165(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_165(num3, num);
	}

	return;
}

BOOL func_182(Hash hParam0) // Position - 0x6776 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

BOOL func_183(Hash hParam0, Hash hParam1) // Position - 0x67B9 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

void func_184(int iParam0, int iParam1, int iParam2) // Position - 0x67EA Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_189(iParam0, 1))
		func_190(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

void func_185(var uParam0, int iParam1, int iParam2) // Position - 0x6831 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_186(var uParam0, int iParam1, int iParam2) // Position - 0x688C Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

int func_187(Hash hParam0, int iParam1) // Position - 0x68F6 Hash - 0x664F26AA ^0x664F26AA
{
	switch (hParam0)
	{
		case joaat("DRIZZLE"):
			return 2;
	
		case -1439599467:
			return 23;
	
		case joaat("sandstorm"):
			return 12;
	
		case joaat("THUNDER"):
			return 19;
	
		case joaat("OVERCAST"):
			return 9;
	
		case joaat("Fog"):
			return 3;
	
		case joaat("Shower"):
			return 13;
	
		case joaat("snow"):
			return 15;
	
		case joaat("highpressure"):
			return 6;
	
		case 0:
			return 22;
	
		case joaat("sleet"):
			return 14;
	
		case joaat("overcastdark"):
			return 10;
	
		case joaat("SNOWLIGHT"):
			return 17;
	
		case joaat("BLIZZARD"):
			return 0;
	
		case joaat("whiteout"):
			return 21;
	
		case joaat("clouds"):
			return 1;
	
		case joaat("hurricane"):
			return 7;
	
		case joaat("rain"):
			return 11;
	
		case joaat("Misty"):
			return 8;
	
		case joaat("SUNNY"):
			return 18;
	
		case joaat("snowclearing"):
			return 16;
	
		case joaat("hail"):
			return 5;
	
		case joaat("Thunderstorm"):
			return 20;
	
		case joaat("groundblizzard"):
			return 4;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_188(Hash hParam0, int iParam1) // Position - 0x6A17 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_189(int iParam0, int iParam1) // Position - 0x6A31 Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_190(int iParam0, int iParam1) // Position - 0x6A42 Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

