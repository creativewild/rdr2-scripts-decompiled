#region Local Var
	BOOL bLocal_0 = 0;
	Hash hLocal_1 = 0;
	Any anLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = 0;
	char* sLocal_20 = 0;
	char* sLocal_21 = 0;
	char* sLocal_22 = 0;
	int iLocal_23 = 0;
	var uLocal_24 = 10;
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
	BOOL bLocal_35 = 0;
	BOOL bLocal_36 = 0;
	BOOL bLocal_37 = 0;
	Hash hLocal_38 = 0;
	Hash hLocal_39 = 0;
	Object obLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	char* sLocal_68 = 0;
	AnimScene ansLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	int iLocal_73 = 0;
	Any anScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xD5CC8DDC ^0xD5CC8DDC
{
	bLocal_0 = 1;
	fLocal_12 = 1f;
	fLocal_13 = 1f;
	sLocal_19 = "mech_skin@BUCK_BUTCHER";
	sLocal_20 = "PBL_BASE";
	sLocal_21 = "PBL_DUMP";
	sLocal_22 = "PBL_DROP_IN";
	ansLocal_69 = -1;
	anLocal_2 = anScriptParam_0;
	uLocal_3 = anScriptParam_0.f_1;
	uLocal_4 = anScriptParam_0.f_2;
	func_1();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_2();

	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}

	func_2();
	return;
}

void func_1() // Position - 0x72 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2() // Position - 0x7A Hash - 0x43FBC4A8 ^0x4278D3E2
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(anLocal_2);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_8();
	else
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_3() // Position - 0x9F Hash - 0x6C387DBE ^0xBAA82875
{
	if (hLocal_1 != 0)
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(hLocal_1) == 0)
			return bLocal_0;
		else
			return true;

	return bLocal_0;
}

void func_4() // Position - 0xC8 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_5() // Position - 0xD0 Hash - 0x3D22DF46 ^0xED7FF9EC
{
	int i;

	for (i = 0; i < SCRIPTS::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_ERRORS); i = i + 1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_ERRORS, i))
		{
			case -843555838:
				func_11(i);
				break;
		
			case -456923784:
				func_10(i);
				break;
		
			case -45008988:
				func_9(i);
				break;
		}
	}

	return;
}

void func_6() // Position - 0x128 Hash - 0xA09054F7 ^0xB25CE9D3
{
	int num;
	BOOL flag;
	int i;
	Vector3 entityCoords;
	BOOL flag2;
	int j;
	Ped ped;

	if (!bLocal_37)
		bLocal_37 = true;

	if (PED::IS_PED_INJURED(Global_35))
	{
		bLocal_0 = false;
	
		if (bLocal_46)
		{
			Global_1914319.f_16855 = 19;
			bLocal_46 = false;
		}
	
		return;
	}

	num = 0;
	flag = false;
	func_12(false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
	PAD::_SET_CONTROL_CONTEXT(5, joaat("tithing"));

	switch (iLocal_73)
	{
		case 0:
			if (func_13(&uLocal_70))
			{
				if (func_14(&uLocal_70) > 3f)
				{
					func_15(&uLocal_70);
					func_16(1);
					func_17(1);
				}
			}
			else
			{
				func_18(&uLocal_70, false);
			}
			break;
	
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("TITHE_DONATION") == false)
				return;
		
			func_19();
			func_18(&uLocal_53, false);
			bLocal_36 = func_20(&hLocal_39, &hLocal_38);
			sLocal_68 = "scenario@MECH@PROP_PLAYER_CAMP_CASH_BOX@EXIT_ALT";
		
			if (ansLocal_69 < 0)
			{
				ansLocal_69 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_68, 0, 0, false, true);
				ANIMSCENE::LOAD_ANIM_SCENE(ansLocal_69);
			}
		
			if (bLocal_36)
			{
				STREAMING::REQUEST_MODEL(hLocal_38, false);
				func_17(6);
			}
			else
			{
				iLocal_44 = func_21(1);
				iLocal_41 = 1;
			
				if (iLocal_44 >= num)
					iLocal_42 = num;
				else
					iLocal_42 = iLocal_44;
			
				hLocal_38 = joaat("p_cs_billstack01x");
				STREAMING::REQUEST_MODEL(hLocal_38, false);
			
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_35) && ANIMSCENE::IS_ANIM_SCENE_LOADED(ansLocal_69, true, false) && func_22())
				{
					func_23();
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Global_35);
				
					if (func_24(iLocal_56) && func_24(iLocal_57) && func_24(iLocal_58))
						func_17(2);
				
					if (Global_1914319.f_16855 == 19)
					{
						Global_1914319.f_16855 = -1;
						bLocal_46 = true;
					}
				}
			}
			break;
	
		case 2:
			if (func_25(iLocal_58, true))
			{
				func_26();
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "HUD_Donate_Sounds", true, 0);
				TASK::_0xD999E379265A4501(Global_35, sLocal_68, 0);
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
		
			if (func_25(iLocal_57, true))
			{
				AUDIO::PLAY_SOUND_FRONTEND("Give_Item_Enter", "HUD_Donate_Sounds", true, 0);
				func_26();
				func_27(true);
				UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("satchel"), joaat("SHOP"));
				iLocal_42 = 0;
				func_17(5);
			}
		
			if (func_25(iLocal_56, true))
			{
				AUDIO::PLAY_SOUND_FRONTEND("Give_Money_Enter", "HUD_Donate_Sounds", true, 0);
				iLocal_42 = num;
				func_26();
				iLocal_61 = func_28("PAY_CASH", joaat("INPUT_GAME_MENU_ACCEPT"), Global_35, 1, 0, false, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_30(iLocal_61, "PAY_CASH", func_29(MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iLocal_42) / 100f, 2), joaat("COLOR_PURE_WHITE")));
				func_31(iLocal_61, 763444929, 0, true);
				iLocal_59 = func_28("SET_CASH_UP", joaat("INPUT_TITHING_INCREASE_AMOUNT"), Global_35, 1, 0, false, 0, 3, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_31(iLocal_59, 763444929, 0, true);
				iLocal_60 = func_28("SET_CASH_DOWN", joaat("INPUT_TITHING_DECREASE_AMOUNT"), Global_35, 1, 0, false, 0, 3, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_31(iLocal_60, 763444929, 0, true);
				iLocal_62 = func_28("BACK_TITHE", joaat("INPUT_GAME_MENU_CANCEL"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
				func_31(iLocal_62, 763444929, 0, true);
				func_17(3);
			}
			break;
	
		case 3:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(763444929, "CASH_TITHE", 1, 0, 0, 0);
		
			if (func_40(iLocal_59, true) || func_25(iLocal_59, true))
				if (func_13(&uLocal_47) == false)
					func_18(&uLocal_47, false);
			else if (func_13(&uLocal_47))
				func_15(&uLocal_47);
		
			if (func_40(iLocal_60, true) || func_25(iLocal_60, true))
				if (func_13(&uLocal_50) == false)
					func_18(&uLocal_50, false);
			else if (func_13(&uLocal_50))
				func_15(&uLocal_50);
		
			if (func_14(&uLocal_47) > func_41() * 15f || func_14(&uLocal_50) > func_41() * 15f)
				if (func_42(0))
					iLocal_41 = 1000;
				else
					iLocal_41 = 0;
			else if (func_14(&uLocal_47) > func_41() * 12f || func_14(&uLocal_50) > func_41() * 12f)
				if (func_42(0))
					iLocal_41 = 100;
				else
					iLocal_41 = 0;
			else if (func_14(&uLocal_47) > func_41() * 9f || func_14(&uLocal_50) > func_41() * 9f)
				if (func_42(2))
					iLocal_41 = 100;
				else
					iLocal_41 = 0;
			else if (func_14(&uLocal_47) > func_41() * 4f || func_14(&uLocal_50) > func_41() * 4f || func_14(&uLocal_53) < 1f)
				if (func_42(5) || func_43())
					iLocal_41 = 100;
				else
					iLocal_41 = 0;
			else if (func_14(&uLocal_47) > func_41() * 3f || func_14(&uLocal_50) > func_41() * 3f)
				iLocal_41 = 4;
			else if (func_14(&uLocal_47) > func_41() * 2f || func_14(&uLocal_50) > func_41() * 2f)
				iLocal_41 = 3;
			else if (func_14(&uLocal_47) > func_41() || func_14(&uLocal_50) > func_41())
				iLocal_41 = 2;
			else
				iLocal_41 = 1;
		
			if (func_25(iLocal_59, true) || func_13(&uLocal_47))
			{
				if (iLocal_41 != 0 && iLocal_42 != iLocal_44)
				{
					if (iLocal_42 + iLocal_41 > iLocal_44)
						iLocal_42 = iLocal_44;
					else
						iLocal_42 = iLocal_42 + iLocal_41;
				
					if (func_44(false))
						AUDIO::_STOP_SOUND_WITH_NAME("Amount_Increase", "HUD_Donate_Sounds");
				
					AUDIO::PLAY_SOUND_FRONTEND("Amount_Increase", "HUD_Donate_Sounds", true, 0);
				}
			
				if (func_44(true))
					func_45(&uLocal_53);
			}
		
			if (func_25(iLocal_60, true) || func_13(&uLocal_50))
			{
				if (iLocal_41 != 0 && iLocal_42 != num)
				{
					if (iLocal_42 - iLocal_41 < num)
						iLocal_42 = num;
					else
						iLocal_42 = iLocal_42 - iLocal_41;
				
					if (func_44(false))
						AUDIO::_STOP_SOUND_WITH_NAME("Amount_Decrease", "HUD_Donate_Sounds");
				
					AUDIO::PLAY_SOUND_FRONTEND("Amount_Decrease", "HUD_Donate_Sounds", true, 0);
				}
			
				if (func_44(true))
					func_45(&uLocal_53);
			}
		
			if (bLocal_45)
			{
				bLocal_45 = false;
			
				if (func_24(iLocal_61))
					func_30(iLocal_61, "PAY_CASH", func_29(MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iLocal_42) / 100f, 2), joaat("COLOR_PURE_WHITE")));
			}
			else
			{
				bLocal_45 = true;
			}
		
			if (func_46(iLocal_61, true))
			{
				if (iLocal_42 > 0)
				{
					AUDIO::PLAY_SOUND_FRONTEND("Donate", "HUD_Donate_Sounds", true, 0);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					func_47();
					func_17(7);
				}
				else
				{
					func_48("BROKE_TITHE", 10000, 0, 0, 0, true);
				}
			}
			else if (func_49(iLocal_62, true))
			{
				func_47();
				func_23();
				func_17(2);
				AUDIO::PLAY_SOUND_FRONTEND("Exit", "HUD_Donate_Sounds", true, 0);
			}
			break;
	
		case 4:
			if (func_32(4))
			{
				if (Global_1935689.f_9431[Global_1935689.f_9437 /*2*/] > 0)
				{
					uLocal_24[iLocal_23] = func_33();
					func_34();
					iLocal_23 = iLocal_23 + 1;
					func_36(func_35(false), false, 0);
					func_37(4);
				}
			}
		
			if (func_32(2))
				func_37(2);
		
			if (func_32(8))
				func_37(8);
		
			if (func_32(16))
				func_37(16);
		
			if (iLocal_23 == 10)
				UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));
		
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("satchel")))
			{
				if (func_33() == 0)
				{
					func_23();
					func_17(2);
				}
				else
				{
					func_17(11);
				}
			}
			break;
	
		case 5:
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("satchel")))
				func_17(4);
			break;
	
		case 6:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_camp@cash_box", "base", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, "script_camp@cash_box", "base") > 0.5f)
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					func_17(7);
				}
			}
			break;
	
		case 7:
			if (STREAMING::HAS_MODEL_LOADED(hLocal_38))
			{
				obLocal_40 = OBJECT::CREATE_OBJECT(hLocal_38, Global_36, true, true, false, false, true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_40, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, -0.04f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			
				if (bLocal_36)
				{
					func_17(9);
				}
				else
				{
					if (iLocal_42 < 100)
						ENTITY::SET_ENTITY_VISIBLE(obLocal_40, false);
				
					func_17(8);
				}
			}
			break;
	
		case 8:
			flag = false;
		
			if (!bLocal_35)
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
					flag = true;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("objectexchange")))
					flag = true;
			}
		
			if (flag)
			{
				bLocal_35 = true;
				func_53(iLocal_42);
				func_47();
				func_17(12);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_40))
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(obLocal_40))
						ENTITY::DETACH_ENTITY(obLocal_40, true, false);
			
				if (func_54(Global_35, 0) && func_54(func_55(0), 0))
					if (func_56(Global_35, func_55(0), true, true) < 20f)
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(func_55(0), Global_35, 17))
							if (func_57(0, false) == false)
								func_58(97);
			
				func_59(iLocal_42, 0, 0, true, 1);
			}
			break;
	
		case 9:
			flag = false;
		
			if (!bLocal_35)
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
					flag = true;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("objectexchange")))
					flag = true;
			}
		
			if (flag)
			{
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_40))
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(obLocal_40))
						ENTITY::DETACH_ENTITY(obLocal_40, true, false);
			
				func_60();
				func_17(12);
				func_39();
				func_61(hLocal_39, 1, false, -142743235, false);
				bLocal_35 = true;
			}
			break;
	
		case 10:
			flag = false;
		
			if (!bLocal_35)
			{
				if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
					flag = true;
			
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("objectexchange")))
					flag = true;
			}
		
			if (flag)
			{
				bLocal_35 = true;
			
				for (i = 0; i < iLocal_23; i = i + 1)
				{
					func_51(uLocal_24[i], func_50(uLocal_24[i], 816454899, false), true);
				}
			
				func_52(MISC::VAR_STRING(10, "GIVE_ITEM_TITHE", func_29(MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iLocal_42) * 0.01f, 2), joaat("COLOR_PURE_WHITE"))), "ITEMTYPE_TEXTURES", joaat("transaction_camp_gang"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
				func_47();
				func_17(12);
			}
			break;
	
		case 11:
			TASK::CLEAR_PED_TASKS(Global_35, true, false);
			func_38(&uLocal_63, true, true);
			func_38(&uLocal_64, true, true);
			func_39();
			func_17(10);
			break;
	
		case 12:
			func_62(iLocal_42);
			func_16(0);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		
			for (j = 0; j < 27; j = j + 1)
			{
				ped = func_55(j);
			
				if (func_63(j) && !func_64(j, 57, true) && ENTITY::DOES_ENTITY_EXIST(ped) && BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(ped, true, false), entityCoords) < 64f)
				{
					func_65(j, 57, true);
					flag2 = true;
				}
			}
		
			if (flag2)
				func_18(&(Global_1359489.f_43), true);
		
			if (func_13(&uLocal_47))
				func_15(&uLocal_47);
		
			if (func_13(&uLocal_50))
				func_15(&uLocal_50);
		
			if (func_13(&uLocal_53))
				func_15(&uLocal_53);
		
			iLocal_41 = 1;
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TITHE_DONATION");
		
			if (bLocal_35)
				func_66(joaat("CSTAG_PLAYER_DONATED_MONEY"), joaat("CSTP_PERSIST_ACROSS_STATES"), 1120952528, 48, 1, true, false);
		
			func_17(13);
			break;
	
		case 13:
			break;
	}

	func_67();
	return;
}

void func_7() // Position - 0xC56 Hash - 0x2E507686 ^0xA5D45145
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	return;
}

void func_8() // Position - 0xC69 Hash - 0xCE5FB49E ^0x89989AD6
{
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_9(int iParam0) // Position - 0xC75 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_68(&eventData);
	}

	return;
}

void func_10(int iParam0) // Position - 0xC9D Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_69(&eventData);
	}

	return;
}

void func_11(int iParam0) // Position - 0xCC5 Hash - 0x5A8C3AF6 ^0xD29C94E1
{
	struct<2> eventData;

	SCRIPTS::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_ERRORS, iParam0, &eventData, 2);

	if (eventData == anLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_70(&eventData);
	}

	return;
}

void func_12(BOOL bParam0) // Position - 0xCED Hash - 0x67777C1C ^0xA5A55B03
{
	if (bParam0)
		func_71(4);

	func_71(2);
	MISC::SET_BIT(&(Global_1955830.f_1), 0);
	return;
}

BOOL func_13(var uParam0) // Position - 0xD0F Hash - 0x5001E582 ^0x5001E582
{
	return func_72(*uParam0, 1);
}

float func_14(var uParam0) // Position - 0xD1F Hash - 0x2DC7EDF0 ^0x2DC7EDF0
{
	if (func_13(uParam0) == false)
		return 0f;

	return func_73(uParam0);
}

void func_15(var uParam0) // Position - 0xD3B Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

void func_16(int iParam0) // Position - 0xD51 Hash - 0x407EDD13 ^0x2C8A0432
{
	Global_1347477.f_118 = iParam0;
	Global_1347477.f_6 = iParam0;
	return;
}

void func_17(int iParam0) // Position - 0xD69 Hash - 0x74B49122 ^0x74B49122
{
	if (iLocal_73 != iParam0)
		iLocal_73 = iParam0;

	return;
}

void func_18(var uParam0, BOOL bParam1) // Position - 0xD7C Hash - 0xA95D0C2 ^0xA95D0C2
{
	if (bParam1 || !func_13(uParam0))
		func_45(uParam0);

	return;
}

void func_19() // Position - 0xD9C Hash - 0x31449C70 ^0xE29DCBA2
{
	Global_1898068.f_1;
	Global_1898068.f_1 = 0;
	return;
}

BOOL func_20(var uParam0, var uParam1) // Position - 0xDB4 Hash - 0xCDC1F096 ^0xCDC1F096
{
	if (Global_1357549.f_1672 != 0 && Global_1357549.f_1673 != 0)
	{
		*uParam0 = Global_1357549.f_1672;
		*uParam1 = Global_1357549.f_1673;
		return 1;
	}

	return 0;
}

int func_21(int iParam0) // Position - 0xDEF Hash - 0x17F3724D ^0x89A0993C
{
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

BOOL func_22() // Position - 0xDFB Hash - 0xE6DDBD0 ^0x1E0C3440
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(PED::GET_PED_BONE_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_35), 22798, 0f, 0f, 0f), PED::GET_PED_BONE_COORDS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_35), 34606, 0f, 0f, 0f), true) < 0.28f)
		return true;

	return false;
}

void func_23() // Position - 0xE39 Hash - 0x74BA6130 ^0x638D0AD4
{
	if (!func_24(iLocal_56))
		iLocal_56 = func_28("MONEY_TITHE", joaat("INPUT_GAME_MENU_ACCEPT"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);

	if (!func_24(iLocal_57))
	{
		iLocal_57 = func_28("TRINK_TITHE", joaat("INPUT_GAME_MENU_OPTION"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);
	
		if (func_74() == 0 && func_75() == 0)
			func_76(iLocal_57, true);
	}

	if (!func_24(iLocal_58))
		iLocal_58 = func_28("LEAVE_TITHE", joaat("INPUT_GAME_MENU_CANCEL"), Global_35, 1, 0, false, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, joaat("SHORT_TIMED_EVENT"), false, false);

	return;
}

BOOL func_24(int iParam0) // Position - 0xF0D Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

BOOL func_25(int iParam0, BOOL bParam1) // Position - 0xF4C Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_24(iParam0))
		return false;

	num = func_77(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_26() // Position - 0xF7F Hash - 0xE97DDBD9 ^0xE97DDBD9
{
	func_38(&iLocal_57, true, true);
	func_38(&iLocal_56, true, true);
	func_38(&iLocal_58, true, true);
	func_38(&iLocal_62, true, true);
	return;
}

void func_27(BOOL bParam0) // Position - 0xFA7 Hash - 0x2FD1AEFA ^0x3EDA7769
{
	if (!bParam0)
		func_78(false);

	Global_1935689.f_2 = bParam0;
	return;
}

// Unhandled jump detected. Output should be considered invalid
int func_28(char* sParam0, Hash hParam1, Ped pedParam2, int iParam3, int iParam4, BOOL bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, Hash hParam14, BOOL bParam15, BOOL bParam16) // Position - 0xFC2 Hash - 0xA9244E74 ^0xC0A4C4ED
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam2))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_79(i, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (pedParam2 == Global_1945188[i /*18*/].f_11 && hParam1 == Global_1945188[i /*18*/].f_4)
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
		func_80(num, hParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, iParam8, 0, pedParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, false, bParam5, 0, hParam14, bParam16);
		return num;
	}

	return 0;
}

const char* func_29(const char* sParam0, int iParam1) // Position - 0x1099 Hash - 0xB0CFF0C3 ^0x5E0C81B6
{
	if (iParam1 == joaat("COLOR_PURE_WHITE"))
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);

	return func_81(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

void func_30(int iParam0, char* sParam1, const char* sParam2) // Position - 0x10CF Hash - 0x63410C5A ^0xA6F87BBC
{
	int num;

	if (!func_24(iParam0))
		return;

	num = func_77(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_TEXT(Global_1945188[num /*18*/].f_3, MISC::VAR_STRING(10, sParam1, sParam2));
	return;
}

void func_31(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1119 Hash - 0x4C8DF022 ^0x193FDB49
{
	int num;

	if (bParam3 && !func_24(iParam0))
		return;

	num = func_77(iParam0);

	if (!HUD::_UI_PROMPT_IS_VALID(Global_1945188[num /*18*/].f_3))
		return;

	HUD::_UI_PROMPT_SET_GROUP(Global_1945188[num /*18*/].f_3, iParam1, iParam2);
	return;
}

BOOL func_32(int iParam0) // Position - 0x1164 Hash - 0xDDC0076D ^0xDDC0076D
{
	return Global_1935689.f_9415 && iParam0 != false;
}

Hash func_33() // Position - 0x1178 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1357549.f_1672;
}

void func_34() // Position - 0x1187 Hash - 0x8BAB71F4 ^0x7B98B2CD
{
	int num;

	num = func_50(func_33(), 816454899, false);

	if (num > 500)
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Large", "Tithe_Donation_Sounds", true, 0);
	else if (num > 250)
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Medium", "Tithe_Donation_Sounds", true, 0);
	else if (num > 0)
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Small", "Tithe_Donation_Sounds", true, 0);

	iLocal_42 = iLocal_42 + num;
	return;
}

BOOL func_35(BOOL bParam0) // Position - 0x11EB Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_82() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_83(bParam0));
}

void func_36(BOOL bParam0, BOOL bParam1, int iParam2) // Position - 0x1209 Hash - 0x26A1604D ^0x9E4BDD24
{
	Global_1935689.f_4 = bParam0;
	Global_1935689.f_15 = iParam2;

	if (bParam0)
		Global_1935689.f_5 = 0;

	if (bParam1 || func_84() && iParam2 == 0)
	{
		func_85(1);
		func_86(1);
	}

	return;
}

void func_37(int iParam0) // Position - 0x124F Hash - 0xB89DF92F ^0xB89DF92F
{
	Global_1935689.f_9415 = Global_1935689.f_9415 - Global_1935689.f_9415 && iParam0;
	return;
}

void func_38(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1270 Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_24(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_77(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_87(num);
	*uParam0 = 0;
	return;
}

void func_39() // Position - 0x12C4 Hash - 0x887AD774 ^0x887AD774
{
	Global_1357549.f_1672 = 0;
	Global_1357549.f_1673 = 0;
	return;
}

BOOL func_40(int iParam0, BOOL bParam1) // Position - 0x12DC Hash - 0x21336878 ^0xD8C1D129
{
	int num;

	if (bParam1 && !func_24(iParam0))
		return false;

	num = func_77(iParam0);

	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1945188[num /*18*/].f_3))
		return PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, Global_1945188[num /*18*/].f_4);

	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1945188[num /*18*/].f_3);
}

float func_41() // Position - 0x1333 Hash - 0x22FB54B8 ^0x22FB54B8
{
	return 0.5f;
}

BOOL func_42(int iParam0) // Position - 0x1340 Hash - 0xE170D927 ^0xD04D02E1
{
	float value;

	if (iLocal_42 % 100 != 0 && iLocal_42 != func_21(1))
	{
		value = (float)iLocal_42 * 0.01f;
	
		if (func_13(&uLocal_47))
			iLocal_42 = BUILTIN::CEIL(value) * 100;
		else
			iLocal_42 = BUILTIN::FLOOR(value) * 100;
	}

	if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, joaat("INPUT_TITHING_INCREASE_AMOUNT")) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, joaat("INPUT_TITHING_DECREASE_AMOUNT")))
		return true;

	iLocal_43 = iLocal_43 + 1;

	if (iLocal_43 > iParam0)
	{
		iLocal_43 = 0;
		return true;
	}

	return false;
}

BOOL func_43() // Position - 0x13C0 Hash - 0x9C2AB030 ^0x9C2AB030
{
	if (func_14(&uLocal_53) < 1f)
	{
		if (func_25(iLocal_59, true))
			return 1;
	
		if (func_25(iLocal_60, true))
			return 1;
	}

	return 0;
}

BOOL func_44(BOOL bParam0) // Position - 0x13F0 Hash - 0x4632B39A ^0xB376F84A
{
	if (iLocal_41 == 1000 || iLocal_41 == 100)
		return true;

	if (bParam0)
		if (iLocal_41 == 0)
			return true;

	return false;
}

void func_45(var uParam0) // Position - 0x1420 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_88(uParam0, 0f);
	return;
}

BOOL func_46(int iParam0, BOOL bParam1) // Position - 0x142F Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_24(iParam0))
		return false;

	num = func_77(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_47() // Position - 0x1487 Hash - 0x6351496D ^0x6351496D
{
	func_38(&iLocal_56, true, true);
	func_38(&iLocal_57, true, true);
	func_38(&iLocal_58, true, true);
	func_38(&iLocal_59, true, true);
	func_38(&iLocal_60, true, true);
	func_38(&iLocal_61, true, true);
	func_38(&iLocal_62, true, true);
	func_38(&uLocal_65, true, true);
	func_38(&uLocal_66, true, true);
	func_38(&uLocal_67, true, true);
	return;
}

int func_48(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x14DF Hash - 0x8EBD6187 ^0x42F0F0AC
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

BOOL func_49(int iParam0, BOOL bParam1) // Position - 0x151A Hash - 0xAAB142C4 ^0x70D6FBCE
{
	int num;

	if (bParam1 && !func_24(iParam0))
		return false;

	num = func_77(iParam0);
	return HUD::_UI_PROMPT_IS_RELEASED(Global_1945188[num /*18*/].f_3);
}

int func_50(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x154D Hash - 0xF91B3803 ^0xF91B3803
{
	var unk;
	int num;
	int i;

	unk = 10;

	if (!func_89(hParam0, hParam1, &unk, &num, bParam2))
	{
		!bParam2;
		return 0;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (unk[i /*2*/] == joaat("currency_cash"))
			return unk[i /*2*/].f_1;
		else if (unk[i /*2*/] == 0)
			break;
	}

	!bParam2;
	return 0;
}

void func_51(int iParam0, int iParam1, BOOL bParam2) // Position - 0x15BA Hash - 0x21E9410E ^0x21E9410E
{
	if (iParam1 <= 0)
		return;

	if (func_90(-1, iParam0, iParam1, &Global_40.f_4283.f_440[0 /*63*/], true, bParam2))
		return;

	if (func_90(-1, iParam0, iParam1, &Global_40.f_4283.f_440[1 /*63*/], true, bParam2))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
			Global_40.f_4283.f_440[1 /*63*/] = func_91(&Global_40.f_4283.f_440[0 /*63*/]);
	
		return;
	}

	func_92(&(Global_40.f_4283.f_440));
	func_90(-1, iParam0, iParam1, &Global_40.f_4283.f_440[1 /*63*/], true, bParam2);
	return;
}

int func_52(const char* sParam0, char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x1659 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_93(sParam0, sParam1, hParam2);
	return num2;
}

void func_53(int iParam0) // Position - 0x16BC Hash - 0x8DB58C6A ^0x8DB58C6A
{
	if (iParam0 <= 0)
		return;

	if (func_90(-1, 0, iParam0, &Global_40.f_4283.f_440[0 /*63*/], true, true))
		return;

	if (func_90(-1, 0, iParam0, &Global_40.f_4283.f_440[1 /*63*/], true, true))
	{
		if (Global_40.f_4283.f_440[1 /*63*/] == 0)
			Global_40.f_4283.f_440[1 /*63*/] = func_91(&Global_40.f_4283.f_440[0 /*63*/]);
	
		return;
	}

	func_92(&(Global_40.f_4283.f_440));
	func_90(-1, 0, iParam0, &Global_40.f_4283.f_440[1 /*63*/], true, true);
	return;
}

int func_54(Ped pedParam0, Object obParam1) // Position - 0x1755 Hash - 0x9BD5E73F ^0xD367FD44
{
	Object object;

	if (pedParam0 == 0)
		return 0;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0))
		return 0;

	object = obParam1;

	if (object == 0)
		return 1;

	if (func_94(object, 1))
		if (PED::IS_PED_FATALLY_INJURED(pedParam0))
			return 0;

	if (func_94(object, 2))
		if (PED::IS_PED_HOGTIED(pedParam0))
			return 0;

	if (func_94(object, 8))
		if (PED::GET_PED_CONFIG_FLAG(pedParam0, 11, false))
			return 0;

	if (func_94(object, 16))
		if (!PED::IS_PED_ON_MOUNT(pedParam0) && !PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			return 0;

	if (func_94(object, 32))
		if (ENTITY::IS_ENTITY_IN_WATER(pedParam0))
			return 0;

	if (func_94(object, 64))
		if (PED::IS_PED_INCAPACITATED(pedParam0))
			return 0;

	if (func_94(object, 128))
		if (PED::IS_PED_RAGDOLL(pedParam0))
			return 0;

	if (func_94(object, 256))
		if (!PED::IS_PED_READY_TO_RENDER(pedParam0))
			return 0;

	return 1;
}

Ped func_55(int iParam0) // Position - 0x1854 Hash - 0x81E6D8DD ^0x27F8E742
{
	if (!func_95(iParam0))
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_1360165[iParam0 /*1157*/]))
		Global_1360165[iParam0 /*1157*/] = 0;

	return Global_1360165[iParam0 /*1157*/];
}

float func_56(Ped pedParam0, Ped pedParam1, BOOL bParam2, BOOL bParam3) // Position - 0x188E Hash - 0xD54E86C ^0xB31A48E2
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0) && bParam3)
		return 0f;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1) && bParam3)
		return 0f;

	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(pedParam0, false, false), ENTITY::GET_ENTITY_COORDS(pedParam1, false, false), bParam2);
}

BOOL func_57(int iParam0, BOOL bParam1) // Position - 0x18D6 Hash - 0xAA2527A1 ^0x8C2C75CE
{
	int num;

	if (!func_95(iParam0))
		return false;

	if (!bParam1)
		if (func_96(iParam0) || func_64(iParam0, 44, true))
			return false;

	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(Global_1360165[iParam0 /*1157*/].f_1) || !PERSCHAR::_0xA8120EBEAF290C7A(Global_1360165[iParam0 /*1157*/].f_1))
		return false;

	num = PERSCHAR::_0xEC254C2C9B0F08F1(Global_1360165[iParam0 /*1157*/].f_1, Global_1360165[iParam0 /*1157*/].f_47);
	return num == joaat("SLEEP");
}

void func_58(int iParam0) // Position - 0x195F Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1357549.f_1671 = iParam0;
	return;
}

void func_59(int iParam0, const char* sParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1970 Hash - 0x144F6B91 ^0x144F6B91
{
	func_97(iParam0);

	if (bParam3)
		func_98(iParam0, sParam1, iParam2);

	return;
}

void func_60() // Position - 0x198D Hash - 0xEE9BC762 ^0xAE48FC39
{
	var unk;
	int i;
	int num;
	int num2;

	unk = 7;
	unk[0] = -774242862;
	unk[1] = joaat("MONEY_LOANSHARK_LILLY_DEBT");
	unk[2] = -2100684454;
	unk[3] = joaat("money_loanshark_gwen_debt");
	unk[4] = joaat("MONEY_LOANSHARK_CATFISH_DEBT");
	unk[5] = 513694516;
	unk[6] = 24657440;

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_99(unk[i], 1, false))
		{
			func_100(joaat("CSTAG_FLOW_DEBT_COLLECTED"), true, false);
			func_66(joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"), 1017034651, 1120952528, 2, 1, true, false);
			num = func_101(unk[i]);
			num2 = func_102(unk[i]);
		
			if (num > num2)
				num = num - num2;
			else
				num2 = 0;
		
			func_103(unk[i], 1, -142743235, 0, false);
			func_51(unk[i], num, true);
		
			if (num > 0)
				func_52(MISC::VAR_STRING(2, "FEED_DEBT_RECOVERED", num), "ITEMTYPE_TEXTURES", joaat("transaction_camp_gang"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
		
			if (num2 > 0)
			{
				func_104(num2, false, 1065353216, 1, 752097756);
				func_52(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", num2), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
			}
		}
	}

	return;
}

int func_61(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x1AE1 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_105(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_106(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_107(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_99(hParam0, 1, bParam4))
		return 0;

	statId = { func_108(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_109(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_109(hParam0, false, false) - iParam1 < 0)
		{
			func_61(hParam0, func_109(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_110(hParam0) == joaat("WEAPON"))
		if (!func_111(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_103(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_35(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_107(hParam0, -iParam1, flag, flag2, flag3);

	func_112(hParam0, iParam1);
	return 1;
}

void func_62(int iParam0) // Position - 0x1C55 Hash - 0xA1A0E201 ^0xAADF6375
{
	if (iParam0 > 2000)
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Large", "Tithe_Donation_Sounds", true, 0);
	else if (iParam0 > 500)
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Medium", "Tithe_Donation_Sounds", true, 0);
	else if (iParam0 > 0)
		AUDIO::PLAY_SOUND_FRONTEND("Tithe_Donation_Small", "Tithe_Donation_Sounds", true, 0);

	if (iParam0 > 0)
	{
		if (iParam0 >= 2000)
		{
			func_113(11, 0, 1, 0, 0, false, 1.5f, false);
		}
		else if (iParam0 >= 500)
		{
			if (func_114(Global_1357549.f_1487, true))
			{
				Global_1357549.f_1487 = Global_1899515;
				func_115(&(Global_1357549.f_1487), 0, 0, 24, 0, 0, 0, false);
				func_113(11, 0, 1, 0, 0, false, 1065353216, false);
			}
		}
		else if (func_114(Global_1357549.f_1486, true))
		{
			Global_1357549.f_1486 = Global_1899515;
			func_115(&(Global_1357549.f_1486), 0, 0, 24, 0, 0, 0, false);
			func_113(10, 0, 1, 0, 0, false, 1065353216, false);
		}
	}

	return;
}

BOOL func_63(int iParam0) // Position - 0x1D4C Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

BOOL func_64(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1D6B Hash - 0x6ED0C3E9 ^0xD0355731
{
	int num;
	int offset;

	if (bParam2)
		if (!func_95(iParam0))
			return false;

	func_116(iParam1, &num, &offset);
	return MISC::IS_BIT_SET(Global_1360165[iParam0 /*1157*/].f_58[num], offset);
}

void func_65(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1DA6 Hash - 0xA83ABB27 ^0x3839CF85
{
	int num;
	int offset;

	if (bParam2)
		if (!func_95(iParam0))
			return;

	func_116(iParam1, &num, &offset);
	MISC::SET_BIT(&Global_1360165[iParam0 /*1157*/].f_58[num], offset);
	return;
}

int func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Position - 0x1DE0 Hash - 0x8BF3BA53 ^0xECA3E26
{
	int i;
	eStackSize stackSize;
	int num;
	int num2;
	int j;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
			return 1;
	}

	num = func_117(iParam0);
	num2 = func_118(iParam0);

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == 176656832)
		{
			Global_40.f_4283.f_6[i /*5*/] = iParam0;
			Global_40.f_4283.f_6[i /*5*/].f_2 = iParam1;
			Global_40.f_4283.f_6[i /*5*/].f_3 = num2;
		
			if (iParam3 > 0)
			{
				stackSize = func_119();
				func_115(&stackSize, 0, 0, iParam3, 0, 0, 0, false);
			}
			else
			{
				stackSize = -15;
			}
		
			Global_40.f_4283.f_6[i /*5*/].f_1 = stackSize;
			Global_40.f_4283.f_6[i /*5*/].f_4 = num;
			func_120(iParam0, true);
		
			if (func_121(num))
			{
				for (j = 0; j < 60; j = j + 1)
				{
					if (Global_40.f_4283.f_6[j /*5*/].f_4 == num && Global_40.f_4283.f_6[j /*5*/] != iParam0)
						func_122(&Global_40.f_4283.f_6[j /*5*/], true, false);
				}
			}
		
			if (bParam5)
				if (bParam6)
					func_123(1, iParam0);
				else
					func_124(1, iParam0);
		
			return 1;
		}
	}

	return 0;
}

void func_67() // Position - 0x1F34 Hash - 0x569C87A ^0x81DAA54E
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		switch (iLocal_73)
		{
			case 0:
			case 1:
				return;
		
			case 8:
			case 9:
			case 10:
			case 12:
				return;
		
			default:
			
		}
	
		if (bLocal_46)
		{
			Global_1914319.f_16855 = 19;
			bLocal_46 = false;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_40))
			OBJECT::DELETE_OBJECT(&obLocal_40);
	
		func_125(8192);
		func_39();
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
	
		if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("satchel")))
			UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("satchel"));
	
		func_126();
	
		if (func_127(0, false, true) == false)
			func_128(true, -1);
	
		bLocal_0 = false;
	}

	return;
}

void func_68(var uParam0) // Position - 0x1FDD Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_69(var uParam0) // Position - 0x1FE5 Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_70(var uParam0) // Position - 0x1FED Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_71(int iParam0) // Position - 0x1FF5 Hash - 0x3A524DDA ^0x3A524DDA
{
	Global_1900383.f_316 = Global_1900383.f_316 || iParam0;
	return;
}

BOOL func_72(int iParam0, int iParam1) // Position - 0x200E Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

float func_73(var uParam0) // Position - 0x201D Hash - 0xEA3FCDB ^0x60B224E0
{
	if (!func_13(uParam0))
		return uParam0->f_1;

	if (func_129(uParam0))
		return uParam0->f_2;

	return func_130() - uParam0->f_1;
}

int func_74() // Position - 0x2052 Hash - 0x14F7B29B ^0xFFACA84E
{
	int num;
	int num2;
	int num3;
	int i;
	var unk;

	num = 0;
	unk.f_9 = joaat("SLOTID_NONE");
	func_131("ALL SATCHEL", &num2, &num3, joaat("SLOTID_SATCHEL"), false);

	for (i = 0; i < num3; i = i + 1)
	{
		if (func_132(&unk, i, num2, num3))
			if (func_105(unk.f_4, 0))
				if (func_133(unk.f_4, -111938901))
					num = 1;
	}

	func_134(num2);
	return num;
}

int func_75() // Position - 0x20C7 Hash - 0x14F7B29B ^0xFD5605AD
{
	int num;
	int num2;
	int num3;
	int i;
	var unk;

	num = 0;
	unk.f_9 = joaat("SLOTID_NONE");
	func_131("ALL SATCHEL", &num2, &num3, -1162387149, false);

	for (i = 0; i < num3; i = i + 1)
	{
		if (func_132(&unk, i, num2, num3))
			if (func_105(unk.f_4, 0))
				num = 1;
	}

	func_134(num2);
	return num;
}

void func_76(int iParam0, BOOL bParam1) // Position - 0x212C Hash - 0x2E594B0B ^0x96F335B4
{
	int num;

	if (!func_24(iParam0))
		return;

	num = func_77(iParam0);
	HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[num /*18*/].f_3, !bParam1);
	return;
}

int func_77(int iParam0) // Position - 0x215A Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_78(BOOL bParam0) // Position - 0x2164 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

BOOL func_79(int iParam0, int iParam1) // Position - 0x217E Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_80(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, int iParam9, Volume volParam10, Ped pedParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x219F Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = iParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = pedParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, pedParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(prompt, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(prompt, iParam9);
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
	func_135(iParam0, true);
	func_136(iParam0, true);
	func_137(iParam0, 128);
	return;
}

const char* func_81(const char* sParam0, int iParam1) // Position - 0x2445 Hash - 0x9E99F03 ^0x2C54D932
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_82() // Position - 0x245F Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

int func_83(BOOL bParam0) // Position - 0x246D Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_82() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

BOOL func_84() // Position - 0x24AE Hash - 0x79BF13D1 ^0xA856906C
{
	if (Global_1935689.f_9445 != Global_1935689.f_19.f_203 - 1 || func_139(func_138(0), Global_1935689.f_9440, false) > 0 || Global_1935689.f_9445 == 15)
		return true;

	return false;
}

void func_85(int iParam0) // Position - 0x24F9 Hash - 0x29A8F290 ^0x82294867
{
	Global_1935689.f_11 = iParam0;
	return;
}

void func_86(int iParam0) // Position - 0x2509 Hash - 0x29A8F290 ^0x1CB9B41C
{
	Global_1935689.f_10 = iParam0;
	return;
}

void func_87(int iParam0) // Position - 0x2519 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_140(iParam0))
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

void func_88(var uParam0, float fParam1) // Position - 0x25CC Hash - 0x30433BAB ^0xF854D531
{
	uParam0->f_1 = func_130() - fParam1;
	func_141(uParam0, 1);
	func_142(uParam0, 2);
	uParam0->f_2 = 0f;
	return;
}

BOOL func_89(Hash hParam0, Hash hParam1, var uParam2, var uParam3, BOOL bParam4) // Position - 0x25F2 Hash - 0x271191BA ^0xF79A5B58
{
	var outData;
	int i;

	*uParam3 = 0;

	if (!func_105(hParam0, 0))
		return false;

	outData.f_4 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(hParam0, hParam1, &outData))
		return false;

	!bParam4;
	*uParam3 = outData.f_3;

	if (*uParam2 < outData.f_3)
		return false;

	for (i = 0; i < outData.f_3; i = i + 1)
	{
		!bParam4;
		uParam2->[i /*2*/] = { outData.f_4[i /*2*/] };
	}

	return true;
}

BOOL func_90(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x2672 Hash - 0xE38E8432 ^0x85D2E305
{
	int num;

	if (iParam3->f_62 >= 12)
		return false;

	if (iParam2 <= 0)
		return false;

	num = func_143();
	func_144(iParam2, bParam4);

	if (num != func_143())
	{
		iParam3->f_1[iParam3->f_62 /*5*/] = 0;
		iParam3->f_1[iParam3->f_62 /*5*/].f_3 = -1;
		iParam3->f_1[iParam3->f_62 /*5*/].f_1 = iParam0;
		iParam3->f_1[iParam3->f_62 /*5*/].f_2 = iParam1;
		iParam3->f_1[iParam3->f_62 /*5*/].f_4 = iParam2;
		iParam3->f_62 = iParam3->f_62 + 1;
	
		if (bParam4)
			if (iParam1 == 0)
				func_145(iParam2);
			else if (bParam5)
				func_146(1);
	}

	return true;
}

int func_91(int iParam0) // Position - 0x2713 Hash - 0x3B123F48 ^0x43C62955
{
	int num;
	int i;

	num = *iParam0;

	for (i = 0; i < iParam0->f_62; i = i + 1)
	{
		num = num + iParam0->f_1[i /*5*/].f_4;
	}

	return num;
}

void func_92(var uParam0) // Position - 0x2746 Hash - 0x734024F2 ^0xB6A833B
{
	var src;

	src.f_1 = 12;
	src.f_1.f_1.f_1 = -1;
	src.f_1.f_1.f_3 = -1;
	src.f_1.f_1.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_1 = -1;
	src.f_1.f_1.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_5.f_3 = -1;
	MISC::COPY_SCRIPT_STRUCT(&uParam0->[0 /*63*/], &uParam0->[1 /*63*/], 63);
	MISC::COPY_SCRIPT_STRUCT(&uParam0->[1 /*63*/], &src, 63);
	uParam0->[1 /*63*/] = func_91(&uParam0->[0 /*63*/]);
	return;
}

void func_93(const char* sParam0, char* sParam1, Hash hParam2) // Position - 0x282F Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_94(Object obParam0, Object obParam1) // Position - 0x2860 Hash - 0x178D9C09 ^0x178D9C09
{
	return obParam0 && obParam1 != false;
}

BOOL func_95(int iParam0) // Position - 0x286F Hash - 0xEC8E4F18 ^0xEC8E4F18
{
	return iParam0 > -1;
}

BOOL func_96(int iParam0) // Position - 0x287B Hash - 0xDA629583 ^0xDA629583
{
	return func_147(iParam0, 16, true);
}

void func_97(int iParam0) // Position - 0x288C Hash - 0xEA427C10 ^0xAE8C4401
{
	var statId;

	if (iParam0 <= 0)
		return;

	if (func_21(1) < iParam0)
		iParam0 = func_21(1);

	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	statId = { func_148(joaat("CAREER_CASH")) };
	STATS::_STAT_ID_DECREMENT_INT(&statId, iParam0);
	return;
}

void func_98(int iParam0, const char* sParam1, int iParam2) // Position - 0x28CA Hash - 0xA31E0DC ^0x7E461CC0
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_SPEND";

	func_52(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 1, joaat("COLOR_RED"), 0, 0, 0, true);
	return;
}

BOOL func_99(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x290B Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_105(hParam0, 0))
		return false;

	num = func_110(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_149(hParam0, 1))
			return false;

	return func_109(hParam0, false, bParam2) >= iParam1;
}

int func_100(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2975 Hash - 0x1F89A3D9 ^0x9E235389
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		if (Global_40.f_4283.f_6[i /*5*/] == iParam0)
		{
			func_122(&Global_40.f_4283.f_6[i /*5*/], bParam1, bParam2);
			return 1;
		}
	}

	return 0;
}

int func_101(int iParam0) // Position - 0x29BA Hash - 0x7E0E0DD1 ^0xC894346C
{
	switch (iParam0)
	{
		case -2100684454:
			return 3800;
	
		case joaat("money_loanshark_gwen_debt"):
			return 4500;
	
		case -774242862:
			return 4300;
	
		case joaat("MONEY_LOANSHARK_LILLY_DEBT"):
			return 3600;
	
		case joaat("MONEY_LOANSHARK_CATFISH_DEBT"):
			return 2900;
	
		case 513694516:
			return 4000;
	
		default:
		
	}

	return 0;
}

int func_102(int iParam0) // Position - 0x2A13 Hash - 0x4EC8A911 ^0xA6B618B5
{
	switch (iParam0)
	{
		case -2100684454:
		case joaat("money_loanshark_gwen_debt"):
		case -774242862:
		case joaat("MONEY_LOANSHARK_LILLY_DEBT"):
		case joaat("MONEY_LOANSHARK_CATFISH_DEBT"):
		case 513694516:
			return func_150(joaat("reward_medium"), false, -1);
	
		default:
		
	}

	return 0;
}

BOOL func_103(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2A56 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_105(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_151(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_152(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_153(hParam0, unk, unk.f_4, bParam4) };
	return func_154(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_104(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0x2AC7 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_155())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_52(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_156(num);
			func_157(num, 0, 0);
		}
	
		func_52(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_158(func_148(joaat("CAREER_CASH")), value);
	}

	return;
}

BOOL func_105(Hash hParam0, int iParam1) // Position - 0x2BA3 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

Hash func_106(Hash hParam0, int iParam1) // Position - 0x2BBD Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_105(hParam0, 0))
		return 0;

	num = func_110(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_133(hParam0, 1399091007))
	{
		func_159(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

void func_107(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x2C37 Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_105(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_160())
	{
		func_161(hParam0, iParam1, bParam2, bParam4);
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
		else if (bParam2 && func_163(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_110(hParam0);
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
	else if (!func_164(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_81(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_165(hParam0)), num), num5);

	if (iParam1 == 1 || func_133(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_165(hParam0));

	func_52(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

struct<2> func_108(Hash hParam0) // Position - 0x2E8C Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_105(hParam0, 0))
		return unk;

	if (func_133(hParam0, -305066475))
		if (func_82() == -1)
			if (func_133(hParam0, -537818634))
				return func_148(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_148(joaat("deadeye_items"));
	else if (func_133(hParam0, -537818634))
		return func_148(joaat("medicine_items"));

	if (func_133(hParam0, 2084895747))
		return func_148(joaat("lock_breaker_items"));

	return unk3;
}

int func_109(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F20 Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_105(hParam0, 0))
		return 0;

	num = func_110(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_106(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_166(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_83(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

int func_110(Hash hParam0) // Position - 0x2FA2 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_105(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_111(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x2FCD Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_167(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_169(&unk, func_168(false));

	if (!func_170(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_132(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_154(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_134(num);
	num3 < iParam1;
	return true;
}

void func_112(Hash hParam0, int iParam1) // Position - 0x3098 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_133(hParam0, 606799272))
			func_171(hParam0, iParam1);
	
		if (func_133(hParam0, -1112814642) && func_133(hParam0, -1697809989))
			func_172(hParam0, iParam1, true, false);
	}

	return;
}

void func_113(int iParam0, int iParam1, int iParam2, const char* sParam3, Entity eParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x30EB Hash - 0xA48CCCFA ^0xD20D1AD3
{
	int num;
	int num2;
	int i;

	if (func_82() != -1)
		return;

	if (Global_36616 && func_173(iParam1) != false)
		return;

	num = func_174(iParam0);
	num = BUILTIN::ROUND((float)num * iParam6);

	if (iParam1 != joaat("honor_event_ambient_kill") && iParam1 != joaat("honor_event_ambient_ko") && iParam1 != joaat("honor_event_kill_vermin") && iParam1 != joaat("honor_event_kill_farm_animal") && iParam1 != joaat("honor_event_kill_horse") && iParam1 != joaat("honor_event_trampled_innocent") && iParam1 != joaat("honor_event_abandon_animals"))
	{
		func_175(num, false, iParam0, iParam1, sParam3, eParam4, bParam5, bParam7);
	}
	else
	{
		num2 = -1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (num2 < 0)
				if (Global_1347477.f_155[i /*6*/] == 0)
					num2 = i;
		}
	
		if (num2 >= 0)
			func_176(num2, num, iParam0, iParam1, eParam4, bParam5);
		else
			func_175(num, true, iParam0, iParam1, sParam3, eParam4, bParam5, false);
	}

	return;
}

BOOL func_114(int iParam0, BOOL bParam1) // Position - 0x31EA Hash - 0x10DE2364 ^0x10DE2364
{
	return func_177(func_119(), iParam0, bParam1);
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x31FE Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_178(*iParam0);
	i = func_179(*iParam0);
	num2 = func_180(*iParam0);
	j = func_181(*iParam0);
	k = func_182(*iParam0);
	l = func_183(*iParam0);

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

	for (m = func_184(i, num); num2 > m; m = func_184(i, num))
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

	func_185(iParam0, l, k, j, num2, i, num);
	return;
}

int func_116(int iParam0, var uParam1, var uParam2) // Position - 0x3386 Hash - 0x28CD1A67 ^0x28CD1A67
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

int func_117(int iParam0) // Position - 0x33A3 Hash - 0xF16A350D ^0xF7851618
{
	Any any;
	int num;
	var unk5;

	any = Global_1357549.f_576;
	any.f_1 = 0;
	any.f_3 = iParam0;
	num = 0;

	if (func_186(any, 70005598, &unk5, false))
		num = func_187(unk5);

	return num;
}

int func_118(int iParam0) // Position - 0x33E2 Hash - 0x5374F99F ^0x22946EC9
{
	Any any;
	int num;

	any = Global_1357549.f_576;
	any.f_1 = 0;
	any.f_3 = iParam0;
	num = 1;

	if (func_188(any, -1875502208, &num, false))
	{
	}

	return num;
}

eStackSize func_119() // Position - 0x3419 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_120(int iParam0, BOOL bParam1) // Position - 0x3425 Hash - 0x1E270DC5 ^0x18D204F7
{
	int num;
	int offset;

	func_189(iParam0, &num, &offset);

	if (bParam1)
		MISC::SET_BIT(&Global_1357549.f_1848[num], offset);
	else
		MISC::CLEAR_BIT(&Global_1357549.f_1848[num], offset);

	return;
}

BOOL func_121(int iParam0) // Position - 0x3462 Hash - 0x27CE23B1 ^0x27CE23B1
{
	switch (iParam0)
	{
		case 0:
			return false;
	
		case 1:
			return true;
	
		case 2:
			return true;
	
		case 3:
			return true;
	
		case 4:
			return true;
	
		case 5:
			return false;
	
		case 7:
			return false;
	
		case 8:
			return true;
	
		case 9:
			return true;
	
		case 10:
			return false;
	
		case 11:
			return true;
	
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
			return false;
	
		default:
		
	}

	return false;
}

void func_122(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x356F Hash - 0x24EF2016 ^0x7F590678
{
	if (*iParam0 == 176656832)
		return;

	func_120(*iParam0, false);

	if (bParam1)
		if (bParam2)
			func_123(2, *iParam0);
		else
			func_124(2, *iParam0);

	func_190(iParam0);
	return;
}

void func_123(int iParam0, int iParam1) // Position - 0x35B0 Hash - 0xBEB4F573 ^0xDF718DD5
{
	if (Global_1357549.f_1483 >= 25)
		Global_1357549.f_1483 = 0;

	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/] = iParam0;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_1 = iParam1;
	Global_1357549.f_1407[Global_1357549.f_1483 /*3*/].f_2 = 0;
	Global_1357549.f_1483 = Global_1357549.f_1483 + 1;
	return;
}

void func_124(int iParam0, int iParam1) // Position - 0x3615 Hash - 0xB8F35FB ^0xB8F35FB
{
	if (Global_1357549.f_1406 >= 50)
		return;

	if (Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] != 0)
		return;

	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/] = iParam0;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_1 = iParam1;
	Global_1357549.f_1252[Global_1357549.f_1406 /*3*/].f_2 = 0;
	Global_1357549.f_1403 = Global_1357549.f_1403 + 1;
	Global_1357549.f_1406 = Global_1357549.f_1406 + 1;
	return;
}

void func_125(int iParam0) // Position - 0x369C Hash - 0xE0643F2A ^0xE0643F2A
{
	switch (func_82())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 - Global_1357549.f_1494 && iParam0;
			break;
	}

	return;
}

void func_126() // Position - 0x36D0 Hash - 0x6DA30377 ^0x7C3ACB65
{
	!Global_1898068.f_1;
	Global_1898068.f_1 = 1;
	return;
}

BOOL func_127(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x36E9 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_191())
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
		num = func_192(Global_1898164.f_1[0 /*5*/]);
	
		if (func_193(num) && func_194(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_195(Global_1898164.f_1[0 /*5*/]))
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

void func_128(BOOL bParam0, int iParam1) // Position - 0x38ED Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_196(&Global_0, 8);

	if (!func_197() || func_82() != -1)
		return;

	func_196(&Global_0, 1);
	return;
}

BOOL func_129(var uParam0) // Position - 0x3933 Hash - 0x39705408 ^0x39705408
{
	return func_72(*uParam0, 2);
}

float func_130() // Position - 0x3943 Hash - 0xB5A1F69B ^0x5409CF38
{
	int networkTimeAccurate;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		networkTimeAccurate = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return BUILTIN::TO_FLOAT(networkTimeAccurate) / 1000f;
	}

	return BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}

BOOL func_131(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x3975 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_83(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_132(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x399C Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

BOOL func_133(Hash hParam0, Hash hParam1) // Position - 0x39D7 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

int func_134(int iParam0) // Position - 0x3A08 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_135(int iParam0, BOOL bParam1) // Position - 0x3A29 Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_79(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_136(int iParam0, BOOL bParam1) // Position - 0x3A81 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_137(int iParam0, int iParam1) // Position - 0x3AAA Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

Ped func_138(int iParam0) // Position - 0x3AD2 Hash - 0x992FCD8C ^0xAA6462C3
{
	Ped lastMount;

	if (func_198(iParam0))
	{
		if (func_82() == -1)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (!ENTITY::DOES_ENTITY_EXIST(lastMount))
				lastMount = func_200(func_199(0));
		}
		else
		{
			lastMount = PED::_GET_LAST_MOUNT(func_201());
		}
	}
	else if (func_82() == -1)
	{
		lastMount = func_200(0);
	}
	else
	{
		lastMount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}

	return lastMount;
}

int func_139(Ped pedParam0, Hash hParam1, BOOL bParam2) // Position - 0x3B37 Hash - 0x13E952EA ^0xE3E4C426
{
	int num;

	if (func_202())
	{
		num = func_203(hParam1, false);
	}
	else
	{
		num = func_109(hParam1, bParam2, false);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
			num = num + func_204(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0), hParam1);
	}

	if (hParam1 == Global_1935689.f_1224)
		num = num + 1;

	return num;
}

BOOL func_140(int iParam0) // Position - 0x3B8B Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_79(iParam0, 2);
}

void func_141(var uParam0, int iParam1) // Position - 0x3B9A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_142(var uParam0, int iParam1) // Position - 0x3BAB Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

int func_143() // Position - 0x3BC0 Hash - 0x38870270 ^0x38870270
{
	return Global_40.f_4283.f_324;
}

void func_144(int iParam0, BOOL bParam1) // Position - 0x3BD1 Hash - 0xDB1BD03F ^0xDB1BD03F
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_324 + iParam0 < 0)
		return;

	func_205(Global_40.f_4283.f_324 + iParam0);

	if (bParam1)
		func_206(9, iParam0);

	return;
}

void func_145(int iParam0) // Position - 0x3C13 Hash - 0x34179CA ^0xE7E1836A
{
	if (iParam0 <= 0)
		return;

	if (!func_207(310186733))
	{
		Global_40.f_4283.f_307.f_3 = Global_40.f_4283.f_307.f_3 + iParam0;
	
		if (Global_40.f_4283.f_307.f_3 >= 5000)
			func_208(310186733);
	}

	return;
}

void func_146(int iParam0) // Position - 0x3C64 Hash - 0x78EB69E7 ^0x6462D741
{
	if (iParam0 <= 0)
		return;

	if (!func_207(-1959946884))
	{
		Global_40.f_4283.f_307.f_4 = Global_40.f_4283.f_307.f_4 + iParam0;
	
		if (Global_40.f_4283.f_307.f_4 >= 3)
			func_208(-1959946884);
	}

	return;
}

BOOL func_147(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3CB3 Hash - 0x456A22D3 ^0x456A22D3
{
	if (bParam2)
		if (!func_95(iParam0))
			return false;

	return Global_40.f_4942[iParam0 /*60*/] && bParam1 != false;
}

struct<2> func_148(int iParam0) // Position - 0x3CDD Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

BOOL func_149(Hash hParam0, int iParam1) // Position - 0x3CED Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_105(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_106(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_131("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_132(&unk, i, num, num2))
			{
			}
			else if (!func_209(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_134(num);
				return true;
			}
		}
	
		func_134(num);
	}

	return false;
}

int func_150(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x3D95 Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_99(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_105(hash, 0) && func_133(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

struct<5> func_151(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3E5A Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_210(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_110(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_216(hParam0, -1823706425))
			{
				unk = { func_153(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_216(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_153(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_214(bParam1) };
		
			switch (func_215(hParam0))
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
				unk = { func_153(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_168(bParam1) };
		
			if (bParam2 && func_211(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_212(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_212(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_213(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_217(unk, &unk28, bParam1, false))
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

BOOL func_152(Hash hParam0, int iParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x4118 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_218(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_35(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_83(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

struct<4> func_153(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x4164 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_105(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_83(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_154(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, int iParam5, BOOL bParam6) // Position - 0x4195 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_218(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_217(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_35(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_83(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

BOOL func_155() // Position - 0x4225 Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_219())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_156(int iParam0) // Position - 0x423C Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_220(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_157(int iParam0, const char* sParam1, int iParam2) // Position - 0x4270 Hash - 0x56940320 ^0xAA701A06
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_155())
		func_52(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_52(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

void func_158(var uParam0, var uParam1, int iParam2) // Position - 0x42DC Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

void func_159(Hash hParam0, var uParam1, var uParam2) // Position - 0x42EC Hash - 0x38E6C2DD ^0xA4FE6475
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

BOOL func_160() // Position - 0x44F8 Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_161(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4505 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = bParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = bParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_162(BOOL bParam0, var uParam1, var uParam2) // Position - 0x456F Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_163(Hash hParam0, int iParam1) // Position - 0x4586 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_105(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_164(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x45A5 Hash - 0x92B705D3 ^0xB783F681
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

Hash func_165(Hash hParam0) // Position - 0x4698 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_105(hParam0, 0))
		return 0;

	return hParam0;
}

int func_166(Hash hParam0, BOOL bParam1) // Position - 0x46B1 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_167(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_169(&unk, func_168(false));

	if (!func_170(&unk, &num, &num2, false))
		return 0;

	func_134(num);
	return num2;
}

struct<18> func_167(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x470F Hash - 0x84700F53 ^0xB9E7AA96
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

struct<4> func_168(BOOL bParam0) // Position - 0x47E1 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_83(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_153(923904168, func_210(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_153(923904168, func_210(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_153(923904168, func_210(bParam0), -740156546, false);
}

void func_169(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x4876 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_170(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x4891 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_83(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

void func_171(Hash hParam0, int iParam1) // Position - 0x48B6 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_82() == -1)
	{
		if (func_221(43))
		{
			if (func_133(hParam0, 412399755))
			{
				func_222(joaat("exotic_stage_01"));
			
				if (func_223() == 0)
				{
					func_128(false, 10);
					num = func_224(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_225(hParam0) < func_226(hParam0))
							func_227(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_221(44))
		{
			if (func_133(hParam0, 709057512))
			{
				func_222(joaat("exotic_stage_02"));
			
				if (func_223() == 1)
				{
					func_128(false, 10);
					num = func_224(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_225(hParam0) < func_226(hParam0))
							func_227(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_221(45))
		{
			if (func_133(hParam0, -1478961327))
			{
				func_222(joaat("exotic_stage_03"));
			
				if (func_223() == 2)
				{
					func_128(false, 10);
					num = func_224(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_225(hParam0) < func_226(hParam0))
							func_227(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_221(46))
		{
			if (func_133(hParam0, -1238404098))
			{
				func_222(joaat("exotic_stage_04"));
			
				if (func_223() == 3)
				{
					func_128(false, 10);
					num = func_224(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_225(hParam0) < func_226(hParam0))
							func_227(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_221(47))
		{
			if (func_133(hParam0, 1160548794))
			{
				func_222(joaat("exotic_stage_05"));
			
				if (func_223() == 4)
				{
					func_128(false, 10);
					num = func_224(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_225(hParam0) < func_226(hParam0))
							func_227(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

void func_172(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x4B9A Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_99(func_228(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_229(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_230(hParam0, collectableItemHash, bParam3);
	}

	return;
}

BOOL func_173(int iParam0) // Position - 0x4BFA Hash - 0xA05361F6 ^0xF8A0FD3E
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return 16384;
	
		case joaat("honor_event_antagonize"):
			return 65536;
	
		case joaat("honor_event_steal_wagon"):
			return 8192;
	
		case joaat("honor_event_trampled_innocent"):
			return 4096;
	
		case joaat("honor_event_kill_vermin"):
			return 64;
	
		case joaat("honor_event_kill_farm_animal"):
			return 128;
	
		case joaat("honor_event_long_absence"):
			return 4194304;
	
		case 0:
			return -1;
	
		case joaat("honor_event_wanted_in_camp"):
			return 524288;
	
		case joaat("honor_event_animal_bleedout"):
			return 32768;
	
		case joaat("honor_event_steal_mule"):
			return 2048;
	
		case joaat("honor_event_theft"):
			return 131072;
	
		case joaat("honor_event_kill_horse"):
			return 256;
	
		case joaat("honor_event_steal_donkey"):
			return 1024;
	
		case joaat("honor_event_steal_horse"):
			return 512;
	
		case joaat("honor_event_ambient_kill"):
			return 2;
	
		case joaat("honor_event_item_request"):
			return 2097152;
	
		case joaat("honor_event_ambient_ko"):
			return 4;
	
		case joaat("honor_event_intervened"):
			return 262144;
	
		case joaat("honor_event_scare"):
			return 32;
	
		case joaat("honor_event_donated_game"):
			return 1048576;
	
		case joaat("honor_event_loot_innocent"):
			return 1;
	
		default:
		
	}

	return 0;
}

int func_174(int iParam0) // Position - 0x4D10 Hash - 0xC25EDEC0 ^0x47BF4274
{
	switch (iParam0)
	{
		case 0:
			return -1;
	
		case 1:
			return -2;
	
		case 2:
			return -5;
	
		case 3:
			return -10;
	
		case 4:
			return -20;
	
		case 5:
			return -40;
	
		case 6:
			return -160;
	
		case 7:
			return -320;
	
		case 8:
			return -480;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 2;
	
		case 12:
			return 5;
	
		case 13:
			return 10;
	
		case 14:
			return 20;
	
		case 15:
			return 40;
	
		case 16:
			return 160;
	
		case 17:
			return 640;
	
		case 18:
			return -640;
	
		default:
		
	}

	return 0;
}

void func_175(int iParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, Entity eParam5, BOOL bParam6, BOOL bParam7) // Position - 0x4DF7 Hash - 0x9A51185A ^0x5436E2C3
{
	int num;
	int num2;
	int num3;
	int num4;
	float num5;
	int num6;
	int num7;
	char* str;
	var statId;

	num = func_231();

	if (iParam3 == joaat("honor_event_ambient_kill") || iParam3 == joaat("honor_event_ambient_ko"))
	{
		if (bParam6)
			iParam0 = func_232(iParam0);
	
		if (ENTITY::DOES_ENTITY_EXIST(eParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_override"))
			{
				iParam0 = DECORATOR::DECOR_GET_INT(eParam5, "honor_override") * -1;
				DECORATOR::DECOR_REMOVE(eParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(eParam5, "honor_bank"))
			{
				iParam0 = iParam0 - DECORATOR::DECOR_GET_INT(eParam5, "honor_bank");
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", 0);
			}
		}
	}

	num3 = 240;
	num4 = -240;
	num5 = 1f;

	if (func_233(6))
	{
		num3 = 320;
		num4 = -320;
	
		if (!func_234())
			if (iParam2 >= 0 && iParam2 <= 4 || iParam2 >= 10 && iParam2 <= 14 && iParam3 != joaat("honor_event_animal_bleedout"))
				num5 = 1.5f;
	}

	if (iParam0 > 0)
		num6 = BUILTIN::CEIL((float)iParam0 * num5);
	else
		num6 = BUILTIN::FLOOR((float)iParam0 * num5);

	Global_40.f_11095.f_35 = Global_40.f_11095.f_35 + num6;
	Global_40.f_11095.f_35 = func_235(Global_40.f_11095.f_35, num4, num3);
	num2 = func_231();

	if (num2 != num && num2 != 0 || iParam3 == joaat("honor_event_cheat") || bParam7)
	{
		num7 = func_236(num2);
		func_238(func_237(), false, 4000);
		func_239(Global_40.f_11095.f_35);
	
		if (num7 > Global_40.f_11095.f_36 && num2 > 0 || num7 > Global_40.f_11095.f_37 && num2 < 0)
			if (num2 < 0)
				Global_40.f_11095.f_37 = num7;
			else
				Global_40.f_11095.f_36 = num7;
	
		func_240(false);
	}

	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_158(func_148(joaat("honor_positive_total")), 1);
			Global_1347477.f_204 = 1;
		
			if (ENTITY::DOES_ENTITY_EXIST(eParam5))
				DECORATOR::DECOR_SET_INT(eParam5, "honor_bank", iParam0);
		
			if (!bParam1)
			{
				if (iParam0 > func_174(14))
				{
					str = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					str = "Honor_Increase_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_52(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
				else
					func_52(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", str, 0, true);
			}
		}
		else
		{
			func_158(func_148(joaat("honor_negative_total")), 1);
			Global_1347477.f_204 = 0;
		
			if (!bParam1)
			{
				if (iParam0 < func_174(4))
				{
					str = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					str = "Honor_Decrease_Small";
				}
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					sParam4 = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam3);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
					func_52(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
				else
					func_52(MISC::VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", str, 0, true);
			}
		}
	}

	statId = { func_148(joaat("honor_current")) };
	STATS::STAT_ID_SET_INT(&statId, Global_40.f_11095.f_35, true);

	if (!bParam1)
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);

	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
		func_206(10, 1);

	return;
}

void func_176(int iParam0, int iParam1, int iParam2, int iParam3, Entity eParam4, BOOL bParam5) // Position - 0x519C Hash - 0x686957A ^0x8F82E8D6
{
	Global_1347477.f_155[iParam0 /*6*/] = iParam1;
	Global_1347477.f_155[iParam0 /*6*/].f_2 = iParam2;
	Global_1347477.f_155[iParam0 /*6*/].f_3 = iParam3;
	Global_1347477.f_155[iParam0 /*6*/].f_4 = eParam4;
	Global_1347477.f_155[iParam0 /*6*/].f_5 = bParam5;
	Global_1347477.f_155[iParam0 /*6*/].f_1 = MISC::GET_GAME_TIMER() + 500;
	return;
}

BOOL func_177(eStackSize essParam0, eStackSize essParam1, BOOL bParam2) // Position - 0x51FB Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_242(essParam1) || !func_242(essParam0))
			return true;

	return essParam0 > essParam1;
}

int func_178(int iParam0) // Position - 0x5228 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_179(int iParam0) // Position - 0x524D Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_180(int iParam0) // Position - 0x5260 Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_181(int iParam0) // Position - 0x5273 Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_182(int iParam0) // Position - 0x5286 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_183(int iParam0) // Position - 0x5298 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_184(int iParam0, int iParam1) // Position - 0x52AA Hash - 0x893AC59E ^0x893AC59E
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

void func_185(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x5344 Hash - 0xA65AB937 ^0xA65AB937
{
	func_244(uParam0, iParam6);
	func_245(uParam0, iParam5);
	func_246(uParam0, iParam4);
	func_247(uParam0, iParam3);
	func_248(uParam0, iParam2);
	func_249(uParam0, iParam1);
	return;
}

BOOL func_186(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x537C Hash - 0x6EB69AE6 ^0xE9AB1EC1
{
	var unk;

	uParam0.f_2 = iParam5;
	unk = *uParam6;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk, &uParam0))
	{
		*uParam6 = unk;
		return true;
	}
	else
	{
		bParam7;
	}

	return false;
}

int func_187(int iParam0) // Position - 0x53AC Hash - 0x696B5244 ^0x696B5244
{
	switch (iParam0)
	{
		case joaat("MOOD_JACK"):
			return 26;
	
		case joaat("MOOD_SEAN"):
			return 21;
	
		case joaat("MOOD_PEARSON"):
			return 29;
	
		case joaat("event"):
			return 6;
	
		case joaat("Griefing"):
			return 4;
	
		case joaat("MOOD_KAREN"):
			return 32;
	
		case joaat("MOOD_TRELAWNY"):
			return 35;
	
		case joaat("MOOD_ABIGAIL"):
			return 25;
	
		case joaat("MOOD_SADIE_ADLER"):
			return 24;
	
		case joaat("MOOD_SWANSON"):
			return 33;
	
		case joaat("MOOD_JAVIER"):
			return 15;
	
		case joaat("MOOD_ARTHUR"):
			return 12;
	
		case 1871598:
			return 9;
	
		case joaat("MOOD_LENNY"):
			return 22;
	
		case joaat("MOOD_TILLY"):
			return 34;
	
		case joaat("MOOD_SUSAN_GRIMSHAW"):
			return 31;
	
		case joaat("MOOD_UNCLE"):
			return 17;
	
		case joaat("MOOD_DUTCH"):
			return 13;
	
		case joaat("ARRANGEMENT"):
			return 2;
	
		case joaat("base"):
			return 1;
	
		case joaat("SUPPLY"):
			return 3;
	
		case joaat("MOOD_MOLLY_OSHEA"):
			return 28;
	
		case joaat("MOOD_HOSEA"):
			return 18;
	
		case joaat("MOOD_BILL"):
			return 16;
	
		case joaat("MOOD_MARY_BETH"):
			return 27;
	
		case joaat("MOOD_CHARLES"):
			return 20;
	
		case joaat("MOOD_STRAUSS"):
			return 30;
	
		case joaat("MOOD_ODRISCOLL"):
			return 23;
	
		case joaat("MOOD_MICAH"):
			return 19;
	
		case joaat("Vignette"):
			return 10;
	
		case joaat("FLOW_FIRST_VISIT"):
			return 8;
	
		case joaat("flow"):
			return 7;
	
		case joaat("MOOD_JOHN"):
			return 14;
	
		case joaat("VIG_CAMP_ONLY"):
			return 11;
	
		default:
		
	}

	return 0;
}

BOOL func_188(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int* piParam6, BOOL bParam7) // Position - 0x552D Hash - 0x75EEBFEF ^0xD9E5F860
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(piParam6, &uParam0))
		return true;
	else
		bParam7;

	return false;
}

int func_189(var uParam0, var uParam1, var uParam2) // Position - 0x5553 Hash - 0x44294A7 ^0x44294A7
{
	int num;

	num = func_250(uParam0, 1);
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return 1;
}

void func_190(int iParam0) // Position - 0x5575 Hash - 0xE426C523 ^0x42DA665A
{
	*iParam0 = 176656832;
	iParam0->f_1 = -15;
	iParam0->f_2 = 1017034651;
	iParam0->f_3 = 0;
	iParam0->f_4 = 0;
	return;
}

BOOL func_191() // Position - 0x559F Hash - 0x2C13EB06 ^0x38F12C8A
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

int func_192(int iParam0) // Position - 0x55F2 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_195(iParam0))
		return -1;

	return func_252(func_251(iParam0));
}

BOOL func_193(int iParam0) // Position - 0x5612 Hash - 0x5A094C43 ^0x5A094C43
{
	return iParam0 > -1 && iParam0 < 200;
}

BOOL func_194(int iParam0, int iParam1) // Position - 0x5628 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_195(int iParam0) // Position - 0x5637 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_196(Hash hParam0, int iParam1) // Position - 0x566A Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_197() // Position - 0x567D Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_198(BOOL bParam0) // Position - 0x569C Hash - 0x96106777 ^0x8FA2F1AF
{
	Ped lastMount;

	if (func_82() == -1)
	{
		if (Global_1914319.f_17370 || bParam0 || Global_1914319.f_16855 == 2)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (lastMount != func_200(7))
				return true;
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			lastMount = PED::GET_MOUNT(Global_35);
		
			if (lastMount != func_200(7))
				return true;
		}
	}
	else
	{
		lastMount = PED::_GET_LAST_MOUNT(func_201());
	
		if (lastMount != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			return true;
	}

	return false;
}

int func_199(int iParam0) // Position - 0x5727 Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

Ped func_200(int iParam0) // Position - 0x5740 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_199(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

Ped func_201() // Position - 0x576C Hash - 0x14A4F660 ^0xC2F042AC
{
	return PLAYER::GET_PLAYER_PED(255);
}

BOOL func_202() // Position - 0x577A Hash - 0x41DEC386 ^0x41DEC386
{
	if (func_94(Global_1935689.f_9436, 1) || func_94(Global_1935689.f_9436, 2) || func_94(Global_1935689.f_9436, 4))
		return true;

	return false;
}

int func_203(Hash hParam0, BOOL bParam1) // Position - 0x57BA Hash - 0xDC5E36FA ^0x81D9138B
{
	Ped ped;
	int num;

	num = func_109(hParam0, bParam1, false);

	if (func_94(Global_1935689.f_9436, 1))
	{
		ped = func_200(func_199(0));
		num = num + func_204(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_94(Global_1935689.f_9436, 2))
	{
		ped = func_200(func_199(1));
		num = num + func_204(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	if (func_94(Global_1935689.f_9436, 4))
	{
		ped = func_200(func_199(6));
		num = num + func_204(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), hParam0);
	}

	return num;
}

int func_204(int iParam0, Hash hParam1) // Position - 0x5850 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_105(hParam1, 0))
		return 0;

	guid = { func_253(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

void func_205(int iParam0) // Position - 0x588E Hash - 0x7237E1A2 ^0x63CC75B6
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_324 = iParam0;
	statId = { func_148(joaat("CAMP_FUNDS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_206(int iParam0, int iParam1) // Position - 0x58C1 Hash - 0x969A241 ^0xB7B020D1
{
	Hash chalHash;
	Hash goalHash;

	if (!func_254(iParam0))
		return 0;

	if (!func_197())
		return 0;

	if (!func_255(iParam0, &chalHash, &goalHash))
		return 0;

	if (chalHash == joaat("SP_ACHIEVEMENTS") && Global_1572887.f_12 != -1)
		return 0;

	STATS::CHAL_ADD_GOAL_PROGRESS_INT(chalHash, goalHash, iParam1);
	return 1;
}

BOOL func_207(int iParam0) // Position - 0x591C Hash - 0x3FBD8F15 ^0xE5437CE8
{
	if (!func_256(iParam0))
		return false;

	return MISC::IS_BIT_SET(Global_40.f_4283.f_307, func_257(iParam0, 1));
}

void func_208(int iParam0) // Position - 0x5946 Hash - 0x9F8F0F90 ^0x2EEF429D
{
	if (!func_256(iParam0))
		return;

	MISC::SET_BIT(&(Global_40.f_4283.f_307), func_257(iParam0, 1));
	return;
}

BOOL func_209(Hash hParam0) // Position - 0x596F Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

struct<4> func_210(BOOL bParam0) // Position - 0x598A Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_153(joaat("character"), func_258(), joaat("SLOTID_NONE"), bParam0);
}

BOOL func_211(Hash hParam0, BOOL bParam1) // Position - 0x59A6 Hash - 0x62864AB ^0xBC339691
{
	if (func_215(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_233(24);
		else
			return true;

	return false;
}

BOOL func_212(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0x59DF Hash - 0x4285A587 ^0x4285A587
{
	return func_259(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_213(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0x59F7 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_260(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_214(BOOL bParam0) // Position - 0x5A18 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_83(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_153(271701509, func_210(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_153(271701509, func_210(bParam0), 12999093, false);
}

Hash func_215(Hash hParam0) // Position - 0x5A7C Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_105(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

BOOL func_216(Hash hParam0, Hash hParam1) // Position - 0x5AA7 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_215(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_217(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x5B06 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_83(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_218(Hash hParam0) // Position - 0x5B36 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

BOOL func_219() // Position - 0x5B4C Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

void func_220(int iParam0) // Position - 0x5B5D Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_148(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

BOOL func_221(int iParam0) // Position - 0x5B90 Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_82() != -1)
		return false;

	return func_261(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_222(Hash hParam0) // Position - 0x5BB3 Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_262(hParam0))
		func_264(func_263(hParam0));

	return;
}

int func_223() // Position - 0x5BCF Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_262(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_224(Hash hParam0, int iParam1, int iParam2) // Position - 0x5C07 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_225(hash);
	num3 = func_225(hash2);
	num4 = func_225(hash3);

	if (iParam2 != 2)
		num5 = func_225(hash4);

	num6 = func_226(hash);
	num7 = func_226(hash2);
	num8 = func_226(hash3);

	if (iParam2 != 2)
		num9 = func_226(hash4);

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

int func_225(Hash hParam0) // Position - 0x5D80 Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_99(hParam0, 1, false))
		num = func_109(hParam0, false, false);

	return num;
}

int func_226(Hash hParam0) // Position - 0x5D9F Hash - 0xEED5739D ^0xEED5739D
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

void func_227(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x5E78 Hash - 0x2D6CF941 ^0x6DDB15F7
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
		
			if (func_197() && func_265(38) || func_221(38))
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
			if (func_197() && func_265(39) || func_221(39))
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
			if (func_197() && func_265(41) || func_221(41))
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
			num = func_266(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_197() && func_265(49) || func_221(49))
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
			num = func_266(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_267(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_268(iParam0, hash, hash2);
	func_269(iParam0, hash, unk, str5, str4);
	func_270(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_271(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_272(iParam0, hash, hash2, iParam6);
	func_273(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

Hash func_228(Hash hParam0, int iParam1) // Position - 0x62B5 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_274(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_229(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x62E4 Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_228(hParam1, 5) || hParam0 == func_228(hParam1, 6) || hParam0 == func_228(hParam1, 7) || hParam0 == func_228(hParam1, 8) || hParam0 == func_228(hParam1, 9))
	{
		func_275(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_227(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_276(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_230(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x6366 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_228(hParam1, 5) || hParam0 == func_228(hParam1, 6) || hParam0 == func_228(hParam1, 7) || hParam0 == func_228(hParam1, 8) || hParam0 == func_228(hParam1, 9))
	{
		if (func_275(hParam1, hParam0, &num, false, 0, false))
		{
			func_227(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_276(51, 0, 0, num, func_266(hParam1, 20), 1, 0);
		}
		else
		{
			func_227(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_276(51, 0, 0, num, func_266(hParam1, 20), 1, 0);
		}
	}

	return;
}

int func_231() // Position - 0x6427 Hash - 0x990ADDDC ^0x7D78C12
{
	Hash hash;

	hash = func_277();

	if (hash <= -320)
		return -320;

	if (hash <= -280)
		return -280;

	if (hash <= -240)
		return -240;

	if (hash <= -200)
		return -200;

	if (hash <= -160)
		return -160;

	if (hash <= -120)
		return -120;

	if (hash <= -80)
		return -80;

	if (hash <= -40)
		return -40;

	if (hash >= 320)
		return 320;

	if (hash >= 280)
		return 280;

	if (hash >= 240)
		return 240;

	if (hash >= 200)
		return 200;

	if (hash >= 160)
		return 160;

	if (hash >= 120)
		return 120;

	if (hash >= 80)
		return 80;

	if (hash >= 40)
		return 40;

	return 0;
}

int func_232(int iParam0) // Position - 0x653A Hash - 0xFA6423C1 ^0xB73AD7F1
{
	float num;
	float value;

	if (func_82() != -1)
		return iParam0;

	if (Global_1347477.f_2 + 120000 < MISC::GET_GAME_TIMER())
	{
		Global_1347477.f_3 = 1;
		Global_1347477.f_2 = MISC::GET_GAME_TIMER();
		return iParam0;
	}

	num = 1f;
	Global_1347477.f_2 = MISC::GET_GAME_TIMER();
	Global_1347477.f_3 = Global_1347477.f_3 + 1;

	if (Global_1347477.f_3 >= 10)
		num = 2f;
	else if (Global_1347477.f_3 >= 3)
		num = 1.5f;

	value = BUILTIN::TO_FLOAT(iParam0) * num;
	value = MISC::ABSF(value) < 1f ? value < 0f ? -1f : 1f : value;
	return BUILTIN::CEIL(value);
}

BOOL func_233(int iParam0) // Position - 0x65DF Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_279(iParam0))
		return false;

	return func_280(iParam0);
}

BOOL func_234() // Position - 0x65FB Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_82() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

Hash func_235(Hash hParam0, Hash hParam1, Hash hParam2) // Position - 0x6620 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (hParam0 > hParam2)
		return hParam2;
	else if (hParam0 < hParam1)
		return hParam1;

	return hParam0;
}

int func_236(int iParam0) // Position - 0x6645 Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
		case -320:
		case 320:
			return 8;
	
		case -280:
		case 280:
			return 7;
	
		case -240:
		case 240:
			return 6;
	
		case -200:
		case 200:
			return 5;
	
		case -160:
		case 160:
			return 4;
	
		case -120:
		case 120:
			return 3;
	
		case -80:
		case 80:
			return 2;
	
		case -40:
		case 40:
			return 1;
	
		case 0:
			return 0;
	}

	return 0;
}

Hash func_237() // Position - 0x66FC Hash - 0xA46C8CCA ^0x71ABACD2
{
	if (Global_40.f_11095.f_35 <= -320)
		return 1;
	else if (Global_40.f_11095.f_35 <= -280)
		return 2;
	else if (Global_40.f_11095.f_35 <= -240)
		return 3;
	else if (Global_40.f_11095.f_35 <= -200)
		return 4;
	else if (Global_40.f_11095.f_35 <= -160)
		return 5;
	else if (Global_40.f_11095.f_35 <= -120)
		return 6;
	else if (Global_40.f_11095.f_35 <= -80)
		return 7;
	else if (Global_40.f_11095.f_35 < 0)
		return 8;
	else if (Global_40.f_11095.f_35 <= 40)
		return 9;
	else if (Global_40.f_11095.f_35 >= 320)
		return 16;
	else if (Global_40.f_11095.f_35 >= 280)
		return 15;
	else if (Global_40.f_11095.f_35 >= 240)
		return 14;
	else if (Global_40.f_11095.f_35 >= 200)
		return 13;
	else if (Global_40.f_11095.f_35 >= 160)
		return 12;
	else if (Global_40.f_11095.f_35 >= 120)
		return 11;
	else if (Global_40.f_11095.f_35 >= 80)
		return 10;

	return 9;
}

void func_238(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x6854 Hash - 0x25ED411C ^0xE6F9BEA9
{
	func_281(MISC::GET_GAME_TIMER() + iParam2, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1954819.f_1.f_2.f_1, hParam0);
	func_282(hParam0);
	return;
}

void func_239(Hash hParam0) // Position - 0x6880 Hash - 0x1FF74488 ^0xA40278BB
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_16[2], false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[0 /*36*/].f_32[2], true);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_20[2], func_283(hParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[0 /*36*/].f_24[2], "pausemenu_player");
	return;
}

// Unhandled jump detected. Output should be considered invalid
void func_240(BOOL bParam0) // Position - 0x68E4 Hash - 0x9BEFE017 ^0x9BEFE017
{
	int num;
	Hash unlockHash;
	Hash hash;
	BOOL flag;
	int num2;
	int i;

	flag = false;

	if (func_284(&num2))
	{
		if (num2 <= 0)
			return;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_285(i, &hash, &num))
			{
				if (!func_105(hash, 0))
				{
				}
				else
				{
					unlockHash = func_286(hash);
				
					if (UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						if (bParam0)
							UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, false);
						else
							goto 0xB5;
				
					if (func_110(hash) == joaat("weapon_mod"))
						if (num == 1014511709)
							flag = func_231() <= -160;
						else if (num == joaat("SHOP_HONOR_GOOD_4"))
							flag = func_231() >= 160;
					else
						flag = num == func_287();
				
					if (flag)
					{
						UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
						flag = false;
					}
				}
			}
		}
	}

	return;
}

const char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x69A5 Hash - 0xA17D549C ^0xC4B551D0
{
	switch (iParam0)
	{
		case joaat("honor_event_abandon_animals"):
			return "HONOR_EVENT_ABANDON_ANIMALS";
	
		case joaat("honor_event_antagonize"):
			return "HONOR_EVENT_ANTAGONIZE";
	
		case joaat("honor_event_cruel_death"):
			return "HONOR_EVENT_CRUEL_DEATH";
	
		case joaat("honor_event_cheat"):
			return "HONOR_EVENT_CHEAT";
	
		case joaat("honor_event_steal_wagon"):
			return "HONOR_EVENT_STEAL_WAGON";
	
		case joaat("honor_event_trampled_innocent"):
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
	
		case joaat("honor_event_kill_vermin"):
			return "HONOR_EVENT_KILL_VERMIN";
	
		case joaat("honor_event_kill_farm_animal"):
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
	
		case joaat("honor_event_long_absence"):
			return "HONOR_EVENT_LONG_ABSENCE";
	
		case joaat("honor_event_wanted_in_camp"):
			return "HONOR_EVENT_WANTED_IN_CAMP";
	
		case joaat("honor_event_animal_bleedout"):
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
	
		case joaat("honor_event_steal_mule"):
			return "HONOR_EVENT_STEAL_MULE";
	
		case joaat("honor_event_theft"):
			return "HONOR_EVENT_THEFT";
	
		case joaat("honor_event_kill_horse"):
			return "HONOR_EVENT_KILL_HORSE";
	
		case joaat("honor_event_justice_served"):
			return "HONOR_EVENT_JUSTICE_SERVED";
	
		case joaat("honor_event_steal_donkey"):
			return "HONOR_EVENT_STEAL_DONKEY";
	
		case joaat("honor_event_steal_horse"):
			return "HONOR_EVENT_STEAL_HORSE";
	
		case joaat("honor_event_ambient_kill"):
			return "HONOR_EVENT_AMBIENT_KILL";
	
		case joaat("honor_event_item_request"):
			return "HONOR_EVENT_ITEM_REQUEST";
	
		case joaat("honor_event_ambient_ko"):
			return "HONOR_EVENT_AMBIENT_KO";
	
		case joaat("honor_event_intervened"):
			return "HONOR_EVENT_INTERVENED";
	
		case joaat("honor_event_scare"):
			return "HONOR_EVENT_SCARE";
	
		case joaat("honor_event_donated_game"):
			return "HONOR_EVENT_DONATED_GAME";
	
		case joaat("honor_event_loot_innocent"):
			return "HONOR_EVENT_LOOT_INNOCENT";
	
		default:
		
	}

	return "";
}

BOOL func_242(eStackSize essParam0) // Position - 0x6AF1 Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (essParam0 == -15)
		return false;

	num = func_183(essParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_182(essParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_181(essParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_178(essParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_179(essParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_180(essParam0);

	if (num6 < 1 || num6 > func_184(num5, num4))
		return false;

	return true;
}

var func_243(BOOL bParam0, var uParam1, var uParam2) // Position - 0x6BCD Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_244(var uParam0, int iParam1) // Position - 0x6BE4 Hash - 0xD05180BA ^0x39589262
{
	if (iParam1 < 0)
		return;

	if (iParam1 > 1930 || iParam1 < 1866)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 1898)
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(1898 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1 - 1898, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_245(var uParam0, int iParam1) // Position - 0x6C6A Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_246(var uParam0, int iParam1) // Position - 0x6CA6 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_179(*uParam0);
	num2 = func_178(*uParam0);

	if (iParam1 < 1 || iParam1 > func_184(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_247(var uParam0, int iParam1) // Position - 0x6CF9 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_248(var uParam0, int iParam1) // Position - 0x6D34 Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_249(var uParam0, int iParam1) // Position - 0x6D6D Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

int func_250(int iParam0, int iParam1) // Position - 0x6DA5 Hash - 0x99A93628 ^0x27AE8C83
{
	switch (iParam0)
	{
		case joaat("CSTAG_MOOD_LENNY_DEFAULT"):
			return 129;
	
		case joaat("CSTAG_ARRANGEMENT_COL_TEARDOWN"):
			return 13;
	
		case joaat("CSTAG_FLOW_MUD4_POST"):
			return 383;
	
		case joaat("CSTAG_MOOD_MARYBETH_UPBEAT"):
			return 179;
	
		case -2104294676:
			return 83;
	
		case joaat("CSTAG_MOOD_KIERAN_PRISONER"):
			return 145;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST3_POST"):
			return 297;
	
		case joaat("CSTAG_MOOD_MOLLY_DOWN"):
			return 185;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_WNT2_POST"):
			return 259;
	
		case joaat("CSTAG_FLOW_RMARY2_POST"):
			return 393;
	
		case joaat("CSTAG_FLOW_FUS1_POST"):
			return 440;
	
		case joaat("CSTAG_MOOD_MOLLY_BEAVER"):
			return 190;
	
		case joaat("CSTAG_PLAYER_GONE_SOFT"):
			return 351;
	
		case joaat("CSTAG_EVENT_HSO_LOWKEY"):
			return 277;
	
		case joaat("CSTAG_MOOD_TILLY_BEAVER"):
			return 244;
	
		case -2033572567:
			return 92;
	
		case joaat("CSTAG_FLOW_MUD1_POST"):
			return 380;
	
		case joaat("CSTAG_MOOD_SEAN_COLTER"):
			return 125;
	
		case -2006082799:
			return 56;
	
		case -1994410205:
			return 499;
	
		case joaat("CSTAG_FLOW_RDOPN_POST"):
			return 457;
	
		case joaat("CSTAG_MOOD_HOSEA_DRUNK"):
			return 96;
	
		case joaat("CSTAG_FLOW_RNATV1_POST"):
			return 435;
	
		case joaat("CSTAG_FLOW_RDOWN2_POST"):
			return 387;
	
		case joaat("CSTAG_FLOW_BRT3_ACTIVE"):
			return 285;
	
		case joaat("CSTAG_FLOW_RMARY4_POST"):
			return 460;
	
		case joaat("CSTAG_MOOD_SEAN_UPBEAT"):
			return 124;
	
		case joaat("CSTAG_FLOW_MOB1_POST"):
			return 423;
	
		case joaat("CSTAG_FLOW_NTV3_PRE"):
			return 320;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_LATE"):
			return 309;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_SETUP"):
			return 29;
	
		case joaat("CSTAG_MOOD_KAREN_COLTER"):
			return 225;
	
		case joaat("CSTAG_MOOD_KIERAN_UPBEAT"):
			return 142;
	
		case -1885734028:
			return 110;
	
		case joaat("CSTAG_FLOW_RMUD33_POST"):
			return 396;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_DST1_POST"):
			return 257;
	
		case -1856459307:
			return 219;
	
		case -1837343824:
			return 496;
	
		case joaat("CSTAG_FLOW_RCTAX_STATUE_MISSING"):
			return 326;
	
		case joaat("CSTAG_MOOD_SWANSON_UPBEAT"):
			return 233;
	
		case joaat("CSTAG_MOOD_PEARSON_UPBEAT"):
			return 197;
	
		case joaat("CSTAG_MOOD_HOSEA_COLTER"):
			return 98;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_B"):
			return 18;
	
		case -1818590041:
			return 246;
	
		case joaat("CSTAG_MOOD_HOSEA_UPBEAT"):
			return 97;
	
		case joaat("CSTAG_FLOW_DST2_ACTIVE"):
			return 273;
	
		case joaat("CSTAG_MOOD_BILL_ANNOYED"):
			return 77;
	
		case joaat("CSTAG_BCH_BASE"):
			return 10;
	
		case joaat("CSTAG_SP_SWAMP_WEIRDO_POST"):
			return 331;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_TEARDOWN"):
			return 16;
	
		case joaat("CSTAG_FLOW_NTV2_POST"):
			return 454;
	
		case joaat("CSTAG_FLOW_GRY2_POST"):
			return 411;
	
		case joaat("CSTAG_MOOD_MICAH_BEAVER"):
			return 108;
	
		case joaat("CSTAG_MOOD_LENNY_ANNOYED"):
			return 131;
	
		case joaat("CSTAG_EVENT_SDB_LOWKEY"):
			return 312;
	
		case joaat("CSTAG_MOOD_TRELAWNY_ANNOYED"):
			return 249;
	
		case joaat("CSTAG_MOOD_PEARSON_DRUNK"):
			return 196;
	
		case joaat("CSTAG_MOOD_KIERAN_DOWN"):
			return 139;
	
		case joaat("CSTAG_FLOW_BRT3_POST"):
			return 405;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_C"):
			return 22;
	
		case joaat("CSTAG_FLOW_RBNP12_POST"):
			return 415;
	
		case joaat("CSTAG_FLOW_MOB4_POST"):
			return 426;
	
		case joaat("CSTAG_MOOD_TRELAWNY_COLTER"):
			return 252;
	
		case -1584659518:
			return 210;
	
		case joaat("CSTAG_FLOW_RSTR1_POST"):
			return 409;
	
		case -1565979762:
			return 507;
	
		case joaat("CSTAG_MOOD_ABIGAIL_DOWN"):
			return 158;
	
		case joaat("CSTAG_MOOD_UNCLE_UPBEAT"):
			return 88;
	
		case joaat("CSTAG_MOOD_CHARLES_DOWN"):
			return 112;
	
		case joaat("CSTAG_FLOW_IND3_POST"):
			return 422;
	
		case joaat("CSTAG_FLOW_RBCH11_POST"):
			return 483;
	
		case joaat("CSTAG_HONOR_LOW"):
			return 338;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_A"):
			return 17;
	
		case joaat("CSTAG_FLOW_MUD5_POST"):
			return 413;
	
		case joaat("CSTAG_MOOD_JOHN_DEFAULT"):
			return 57;
	
		case joaat("CSTAG_FLOW_SUS1_POST"):
			return 437;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_C"):
			return 27;
	
		case joaat("CSTAG_VIG_CHARLES_ITM1_PRE"):
			return 369;
	
		case joaat("CSTAG_FLOW_RABI3_POST"):
			return 482;
	
		case joaat("CSTAG_MOOD_KAREN_DRUNK"):
			return 223;
	
		case joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"):
			return 280;
	
		case -1426009748:
			return 119;
	
		case joaat("CSTAG_MOOD_PEARSON_BEAVER"):
			return 199;
	
		case joaat("CSTAG_FLOW_MAR2_POST"):
			return 472;
	
		case joaat("CSTAG_FLOW_FUD1_FISHING_POST"):
			return 289;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_B"):
			return 21;
	
		case joaat("CSTAG_FLOW_RE_PBR_HONOR_LOW_POST"):
			return 329;
	
		case joaat("CSTAG_FLOW_MOB5_POST"):
			return 427;
	
		case joaat("CSTAG_FLOW_BOU1_POST"):
			return 377;
	
		case joaat("CSTAG_MOOD_LENNY_BEAVER"):
			return 135;
	
		case joaat("CSTAG_FLOW_LAR1_POST"):
			return 470;
	
		case joaat("CSTAG_MOOD_STRAUSS_DRUNK"):
			return 205;
	
		case joaat("CSTAG_MOOD_SADIE_DEFAULT"):
			return 148;
	
		case joaat("CSTAG_FLOW_RCLDN1_PRE"):
			return 311;
	
		case joaat("CSTAG_FLOW_WNT1_POST"):
			return 373;
	
		case -1333840726:
			return 236;
	
		case -1318290630:
			return 254;
	
		case joaat("CSTAG_MOOD_CHARLES_DRUNK"):
			return 114;
	
		case joaat("CSTAG_EVENT_CLM_UPBEAT"):
			return 294;
	
		case joaat("CSTAG_MOOD_STRAUSS_UPBEAT"):
			return 206;
	
		case joaat("CSTAG_MOOD_SWANSON_DEFAULT"):
			return 229;
	
		case joaat("CSTAG_FLOW_GNG1_POST"):
			return 445;
	
		case -1235200494:
			return 165;
	
		case joaat("CSTAG_FLOW_RDOPN_PRE"):
			return 318;
	
		case joaat("CSTAG_MOOD_SEAN_DEFAULT"):
			return 120;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_B"):
			return 26;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_TEARDOWN"):
			return 23;
	
		case joaat("CSTAG_FLOW_CA_FS01_POST"):
			return 327;
	
		case joaat("CSTAG_FLOW_GUA1_POST"):
			return 442;
	
		case joaat("CSTAG_PRG_BASE"):
			return 9;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_UTP2_POST"):
			return 284;
	
		case -1171086122:
			return 41;
	
		case joaat("CSTAG_MOOD_KIERAN_DEFAULT"):
			return 138;
	
		case -1152282847:
			return 33;
	
		case joaat("CSTAG_ARRANGEMENT_SDB_A"):
			return 25;
	
		case joaat("CSTAG_MOOD_TILLY_DEFAULT"):
			return 238;
	
		case joaat("CSTAG_MOOD_TRELAWNY_DEFAULT"):
			return 247;
	
		case joaat("CSTAG_FLOW_RABI3_OPEN"):
			return 324;
	
		case -1061998329:
			return 164;
	
		case joaat("CSTAG_MOOD_JACK_DRUNK"):
			return 169;
	
		case joaat("CSTAG_FLOW_RHMR0_POST"):
			return 391;
	
		case -1045864225:
			return 510;
	
		case joaat("CSTAG_MOOD_JOHN_DOWN"):
			return 58;
	
		case joaat("CSTAG_MOOD_JOHN_UPBEAT"):
			return 61;
	
		case joaat("CSTAG_FLOW_RJCK2_POST"):
			return 485;
	
		case -978287173:
			return 12;
	
		case joaat("CSTAG_FLOW_RMUD32_POST"):
			return 395;
	
		case joaat("CSTAG_VIG_MUD3A_WNT"):
			return 359;
	
		case joaat("CSTAG_FLOW_SAD2_POST"):
			return 486;
	
		case joaat("CSTAG_FLOW_RBCH21_POST"):
			return 484;
	
		case joaat("CSTAG_MOOD_BILL_DOWN"):
			return 76;
	
		case joaat("CSTAG_MOOD_MOLLY_DRUNK"):
			return 187;
	
		case joaat("CSTAG_FLOW_RPRSN_POST"):
			return 374;
	
		case joaat("CSTAG_MOOD_JACK_BEAVER"):
			return 172;
	
		case joaat("CSTAG_MOOD_JACK_UPBEAT"):
			return 170;
	
		case joaat("CSTAG_MOOD_MOLLY_ANNOYED"):
			return 186;
	
		case joaat("CSTAG_COL_BASE"):
			return 2;
	
		case joaat("CSTAG_MOOD_UNCLE_ANNOYED"):
			return 86;
	
		case -830432609:
			return 492;
	
		case joaat("CSTAG_MOOD_SADIE_DOWN"):
			return 149;
	
		case joaat("CSTAG_MOOD_DUTCH_UPBEAT"):
			return 52;
	
		case joaat("CSTAG_FLOW_GUA2_POST"):
			return 439;
	
		case -818926670:
			return 200;
	
		case joaat("CSTAG_MOOD_TILLY_COLTER"):
			return 243;
	
		case joaat("CSTAG_EVENT_CLM_LOWKEY"):
			return 293;
	
		case joaat("CSTAG_HSO_BASE"):
			return 3;
	
		case joaat("CSTAG_MOOD_JAVIER_ANNOYED"):
			return 68;
	
		case joaat("CSTAG_MOOD_MARYBETH_COLTER"):
			return 180;
	
		case -803062666:
			return 65;
	
		case joaat("CSTAG_MOOD_MICAH_UPBEAT"):
			return 106;
	
		case joaat("CSTAG_FLOW_DST1_POST"):
			return 372;
	
		case joaat("CSTAG_FLOW_CA_CR03_POST"):
			return 302;
	
		case joaat("CSTAG_FLOW_SADIE_TRAUMATIZED"):
			return 275;
	
		case joaat("CSTAG_VIG_CLM_ONLY"):
			return 362;
	
		case joaat("CSTAG_FLOW_RMNR1_POST"):
			return 461;
	
		case joaat("CSTAG_MOOD_TRELAWNY_UPBEAT"):
			return 251;
	
		case joaat("CSTAG_MOOD_TILLY_UPBEAT"):
			return 242;
	
		case joaat("CSTAG_FLOW_GUA3_POST"):
			return 443;
	
		case joaat("CSTAG_FLOW_WNT2_POST"):
			return 375;
	
		case joaat("CSTAG_MOOD_UNCLE_COLTER"):
			return 89;
	
		case joaat("CSTAG_EVENT_PEARSON_RESERVED"):
			return 341;
	
		case joaat("CSTAG_MOOD_MARYBETH_DEFAULT"):
			return 175;
	
		case -671103079:
			return 504;
	
		case joaat("CSTAG_EVENT_SDB_UPBEAT"):
			return 313;
	
		case joaat("CSTAG_FLOW_DEBT_COLLECTED"):
			return 345;
	
		case -650501093:
			return 509;
	
		case joaat("CSTAG_MOOD_HOSEA_DOWN"):
			return 94;
	
		case joaat("CSTAG_FLOW_BRT2_POST"):
			return 404;
	
		case -636774257:
			return 146;
	
		case joaat("CSTAG_PLAYER_DONATED_FOOD"):
			return 343;
	
		case joaat("CSTAG_MOOD_SWANSON_COLTER"):
			return 234;
	
		case joaat("CSTAG_FLOW_BRT1_POST"):
			return 403;
	
		case joaat("CSTAG_MOOD_MICAH_ANNOYED"):
			return 104;
	
		case -604891653:
			return 237;
	
		case joaat("CSTAG_FLOW_SAD3_POST"):
			return 487;
	
		case joaat("CSTAG_FLOW_MOB2_POST"):
			return 424;
	
		case joaat("CSTAG_FLOW_WNT2_OUTRO"):
			return 261;
	
		case joaat("CSTAG_FLOW_UTP2_POST"):
			return 400;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"):
			return 266;
	
		case joaat("CSTAG_MOOD_SWANSON_DRUNK"):
			return 232;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_SAL1_POST"):
			return 283;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT_POST"):
			return 310;
	
		case joaat("CSTAG_HONOR_HIGH"):
			return 337;
	
		case -534913305:
			return 174;
	
		case joaat("CSTAG_FLOW_SMG2_POST"):
			return 444;
	
		case joaat("CSTAG_MOOD_TRELAWNY_BEAVER"):
			return 253;
	
		case joaat("CSTAG_HR_PRHMA_VISIT_POST"):
			return 330;
	
		case joaat("CSTAG_GRIEFING_LAW_ENCOUNTER"):
			return 39;
	
		case -453449739:
			return 182;
	
		case joaat("CSTAG_MOOD_KIERAN_ANNOYED"):
			return 140;
	
		case joaat("CSTAG_FLOW_AB21_POST"):
			return 469;
	
		case joaat("CSTAG_MOOD_SADIE_ANNOYED"):
			return 150;
	
		case joaat("CSTAG_MOOD_JOHN_ANNOYED"):
			return 59;
	
		case joaat("CSTAG_MOOD_LENNY_UPBEAT"):
			return 133;
	
		case joaat("CSTAG_MOOD_KIERAN_DRUNK"):
			return 141;
	
		case joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"):
			return 308;
	
		case joaat("CSTAG_FLOW_RDTC1_POST"):
			return 418;
	
		case -399703928:
			return 155;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RBRT0_POST"):
			return 295;
	
		case -381477663:
			return 37;
	
		case joaat("CSTAG_ARRANGEMENT_BVH_TEARDOWN"):
			return 30;
	
		case joaat("CSTAG_FLOW_MUD3_POST"):
			return 382;
	
		case joaat("CSTAG_FLOW_CA_FS02_POST"):
			return 303;
	
		case joaat("CSTAG_FLOW_SAD5_POST"):
			return 489;
	
		case joaat("CSTAG_FLOW_MAR8_UNCLE_RECOVER"):
			return 323;
	
		case joaat("CSTAG_FLOW_DST3_ACTIVE"):
			return 288;
	
		case joaat("CSTAG_FLOW_WNT1_ACTIVE"):
			return 260;
	
		case -317452243:
			return 128;
	
		case joaat("CSTAG_FLOW_MAR4_POST"):
			return 473;
	
		case joaat("CSTAG_MOOD_PEARSON_DOWN"):
			return 194;
	
		case joaat("CSTAG_FLOW_RCLDN2_POST"):
			return 431;
	
		case joaat("CSTAG_MOOD_JAVIER_DOWN"):
			return 67;
	
		case joaat("CSTAG_ARRANGEMENT_CLM_SETUP"):
			return 24;
	
		case joaat("CSTAG_FLOW_CA_CR04_POST"):
			return 317;
	
		case joaat("CSTAG_FLOW_MUD2_PRE"):
			return 269;
	
		case joaat("CSTAG_NEW_CAMP_FIRST_VISIT"):
			return 505;
	
		case joaat("CSTAG_FLOW_RCTAX2_POST"):
			return 490;
	
		case joaat("CSTAG_VIG_HSO_ONLY"):
			return 357;
	
		case joaat("CSTAG_FLOW_MOB3_POST"):
			return 425;
	
		case joaat("CSTAG_FLOW_TRN1_POST"):
			return 464;
	
		case joaat("CSTAG_FLOW_ODR4_POST"):
			return 429;
	
		case joaat("CSTAG_SUPPLY_HIGH"):
			return 34;
	
		case joaat("CSTAG_MOOD_STRAUSS_ANNOYED"):
			return 204;
	
		case joaat("CSTAG_FLOW_CRN1_POST"):
			return 406;
	
		case joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"):
			return 354;
	
		case joaat("CSTAG_FLOW_MAR5_POST"):
			return 474;
	
		case joaat("CSTAG_PLAYER_DONATED_MONEY"):
			return 344;
	
		case joaat("CSTAG_VIG_CLM_BASE"):
			return 361;
	
		case joaat("CSTAG_FLOW_RABI1_POST"):
			return 385;
	
		case -170673728:
			return 156;
	
		case -165538585:
			return 127;
	
		case joaat("CSTAG_FLOW_WNT4_POST"):
			return 376;
	
		case joaat("CSTAG_FLOW_SDN1_POST"):
			return 438;
	
		case joaat("CSTAG_FLOW_FUS2_POST"):
			return 441;
	
		case joaat("CSTAG_MOOD_CHARLES_ANNOYED"):
			return 113;
	
		case joaat("CSTAG_MOOD_KAREN_ANNOYED"):
			return 222;
	
		case joaat("CSTAG_MOOD_HOSEA_ANNOYED"):
			return 95;
	
		case joaat("CSTAG_MOOD_SADIE_DRUNK"):
			return 151;
	
		case joaat("CSTAG_MOOD_STRAUSS_BEAVER"):
			return 208;
	
		case joaat("CSTAG_FLOW_CA_CR01_POST"):
			return 316;
	
		case joaat("CSTAG_MOOD_HOSEA_DEFAULT"):
			return 93;
	
		case joaat("CSTAG_FLOW_RUFUS_RECOVER"):
			return 325;
	
		case joaat("CSTAG_FLOW_GRY2_PRE"):
			return 290;
	
		case -98209688:
			return 55;
	
		case joaat("CSTAG_MOOD_TILLY_DOWN"):
			return 239;
	
		case joaat("CSTAG_FLOW_FIRST_VISIT_RSAD1_POST"):
			return 287;
	
		case joaat("CSTAG_ARRANGEMENT_HSO_C"):
			return 19;
	
		case joaat("CSTAG_MOOD_MICAH_DRUNK"):
			return 105;
	
		case -58291054:
			return 201;
	
		case joaat("CSTAG_EVENT_DUTCH_PIPE"):
			return 342;
	
		case joaat("CSTAG_EVENT_OPTIONAL_HONOR_MIS_POST"):
			return 353;
	
		case -21372580:
			return 46;
	
		case joaat("CSTAG_FLOW_TRN3_POST"):
			return 466;
	
		case -8269375:
			return 137;
	
		case joaat("CSTAG_PLAYER_OPEN_WORLD_CRAZY"):
			return 350;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

BOOL func_251(int iParam0) // Position - 0x84B4 Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_252(BOOL bParam0) // Position - 0x84F2 Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

struct<4> func_253(int iParam0, Hash hParam1) // Position - 0x8505 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_288(iParam0) };
	return func_289(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_254(int iParam0) // Position - 0x8527 Hash - 0xB0C53BA8 ^0xB0C53BA8
{
	if (iParam0 <= -1 || iParam0 >= 17)
		return false;

	return true;
}

BOOL func_255(int iParam0, var uParam1, var uParam2) // Position - 0x8546 Hash - 0xB903AED3 ^0x206B1C87
{
	if (!func_254(iParam0))
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

BOOL func_256(int iParam0) // Position - 0x8715 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1959946884:
		case -1784068921:
		case -1642438278:
		case -1349086674:
		case 310186733:
		case 456315479:
		case 471747275:
		case 1166592425:
		case 1486898918:
		case 1500419820:
			return true;
	
		default:
		
	}

	return false;
}

int func_257(int iParam0, int iParam1) // Position - 0x8766 Hash - 0x69E301C1 ^0x69E301C1
{
	switch (iParam0)
	{
		case -1959946884:
			return 6;
	
		case -1784068921:
			return 7;
	
		case -1642438278:
			return 2;
	
		case -1349086674:
			return 8;
	
		case 310186733:
			return 5;
	
		case 456315479:
			return 9;
	
		case 471747275:
			return 3;
	
		case 1166592425:
			return 4;
	
		case 1486898918:
			return 0;
	
		case 1500419820:
			return 1;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

struct<4> func_258() // Position - 0x87ED Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_259(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x87F9 Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_105(hParam0, 0))
		return 0;

	guid = { func_153(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_83(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_260(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x8841 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_83(false);
	*panParam1 = { func_153(hParam0, func_168(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_261(int iParam0, BOOL bParam1) // Position - 0x8886 Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_290(iParam0))
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

BOOL func_262(Hash hParam0) // Position - 0x88B7 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_263(Hash hParam0) // Position - 0x88C7 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_264(int iParam0) // Position - 0x890C Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_265(int iParam0) // Position - 0x8927 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_82() != -1)
		return false;

	if (!func_193(iParam0))
		return false;

	return func_291(Global_1347702[iParam0 /*49*/].f_15);
}

int func_266(Hash hParam0, int iParam1) // Position - 0x8957 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_274(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_267(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x8986 Hash - 0xF20034E5 ^0xBE1DA39E
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_292() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_293(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_294(), 12);
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
			else if (func_295() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_296(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_295(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_266(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_297(), 13);
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
			else if (func_298() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_299(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_298(), 10);
			break;
	}

	return sParam3;
}

BOOL func_268(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x8C73 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_269(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0x8D20 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_270(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0x8D4C Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_271(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0x8D9B Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_300(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_99(hash, 1, false) || func_302(func_301(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_300(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_300(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_295() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_304(i)), func_304(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_296() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_304(i)), func_304(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_304(i)), func_304(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_228(iParam3, func_305(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_225(hash) - iParam7 >= func_266(iParam3, func_306(i));
				else
					flag = func_225(hash) >= func_266(iParam3, func_306(i));
			else if (hParam4 == hash)
				flag = func_225(hash) + iParam7 >= func_266(iParam3, func_306(i));
			else
				flag = func_225(hash) >= func_266(iParam3, func_306(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_308(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
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
				flag = func_298() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_310(i)), func_310(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_299() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_310(i)), func_310(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_310(i)), func_310(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_228(iParam3, func_305(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_225(hash) - iParam7 >= 1;
				else
					flag = func_311(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_311(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_312(hash)), func_312(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_272(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0x9110 Hash - 0x3C34F826 ^0xF737CEC0
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
		if (func_297() >= 13)
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

BOOL func_273(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0x9219 Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_195(func_313(0)) && func_314(0) == 1 || func_314(0) == 8 || func_314(0) == 6)
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

BOOL func_274(int iParam0, var uParam1) // Position - 0x92BB Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_315(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

BOOL func_275(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0x92E8 Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_311(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_311(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_311(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_311(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_311(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_311(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash) && func_311(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_311(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_311(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_311(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash) && func_311(hash2) && func_311(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_311(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_311(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_311(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_311(hash) && func_311(hash2) && func_311(hash3) && func_311(hash4))
			return true;
	}

	return false;
}

void func_276(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x97AD Hash - 0xD806FABF ^0x7387D18A
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
		
			if (func_197() && func_265(38) || func_221(38))
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
		
			if (func_197() && func_265(39) || func_221(39))
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
		
			if (func_197() && func_265(49) || func_221(49))
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
		if (func_197() && func_265(38) || func_221(38))
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
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_318(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_317(iParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_197() && func_265(39) || func_221(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_197() && func_265(49) || func_221(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_316(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

Hash func_277() // Position - 0x9D5B Hash - 0xC5B83CF5 ^0xDBC2A9A7
{
	return Global_40.f_11095.f_35;
}

var func_278(BOOL bParam0, var uParam1, var uParam2) // Position - 0x9D6B Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_279(int iParam0) // Position - 0x9D82 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_280(int iParam0) // Position - 0x9D95 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_281(int iParam0, BOOL bParam1) // Position - 0x9DBF Hash - 0xE5C16A63 ^0x600C7934
{
	Global_1954819.f_1 = iParam0;

	if (bParam1)
		func_319(bParam1);

	return;
}

void func_282(Hash hParam0) // Position - 0x9DDA Hash - 0x246AED7E ^0x92A2F577
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("HonorMeterValue"), hParam0);
	return;
}

char* func_283(Hash hParam0) // Position - 0x9DED Hash - 0x8FB6A40C ^0xCD335B5E
{
	if (hParam0 <= -320)
		return "HONOR_BAD_8";
	else if (hParam0 <= -280)
		return "HONOR_BAD_7";
	else if (hParam0 <= -240)
		return "HONOR_BAD_6";
	else if (hParam0 <= -200)
		return "HONOR_BAD_5";
	else if (hParam0 <= -160)
		return "HONOR_BAD_4";
	else if (hParam0 <= -120)
		return "HONOR_BAD_3";
	else if (hParam0 <= -80)
		return "HONOR_BAD_2";
	else if (hParam0 < 0)
		return "HONOR_BAD_1";
	else if (hParam0 <= 40)
		return "HONOR_GOOD_1";
	else if (hParam0 >= 320)
		return "HONOR_GOOD_8";
	else if (hParam0 >= 280)
		return "HONOR_GOOD_7";
	else if (hParam0 >= 240)
		return "HONOR_GOOD_6";
	else if (hParam0 >= 200)
		return "HONOR_GOOD_5";
	else if (hParam0 >= 160)
		return "HONOR_GOOD_4";
	else if (hParam0 >= 120)
		return "HONOR_GOOD_3";
	else if (hParam0 >= 80)
		return "HONOR_GOOD_2";

	return "HONOR_GOOD_1";
}

BOOL func_284(var uParam0) // Position - 0x9F0E Hash - 0x89D7A86C ^0xC5CDC47A
{
	var unk;

	if (!func_274(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -2103982008;
		*uParam0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&unk);
		return true;
	}

	return false;
}

BOOL func_285(int iParam0, var uParam1, var uParam2) // Position - 0x9F56 Hash - 0x2D6E55B7 ^0xC1202559
{
	var unk;
	var unk6;

	if (!func_274(23, &unk))
		return false;

	unk.f_2 = 1781729525;

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		unk.f_2 = -57097983;
		unk.f_3 = iParam0;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
		{
			unk.f_2 = 2027336698;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam1 = unk6;
			unk.f_2 = 316053773;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&unk6, &unk);
			*uParam2 = unk6;
			return true;
		}
	}

	return false;
}

Hash func_286(Hash hParam0) // Position - 0x9FD6 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

int func_287() // Position - 0x9FE0 Hash - 0xE17CEFF5 ^0x60DBA116
{
	int num;

	num = func_231();

	switch (num)
	{
		case 120:
		case 160:
		case 200:
			return joaat("SHOP_HONOR_LOW");
	
		case 240:
		case 280:
		case 320:
			return joaat("SHOP_HONOR_HIGH");
	
		default:
		
	}

	return joaat("SHOP_HONOR_AMORAL");
}

struct<5> func_288(int iParam0) // Position - 0xA02F Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_289(iParam0, joaat("character"), func_258(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_289(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0xA05C Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_105(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

int func_290(int iParam0) // Position - 0xA089 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_195(iParam0))
		return -1;

	return func_320(iParam0);
}

BOOL func_291(int iParam0) // Position - 0xA0A5 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_290(iParam0);
	return num == 3 || num == 4;
}

int func_292() // Position - 0xA0C3 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_99(func_321(i), 1, false))
			num = num + 1;
	}

	return num;
}

int func_293() // Position - 0xA0F8 Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_322(Global_40.f_12019);
}

int func_294() // Position - 0xA10A Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_321(i);
	
		if (func_99(hash, 1, false) || func_302(func_301(hash)))
			num = num + 1;
	}

	return num;
}

int func_295() // Position - 0xA153 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_323(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_296() // Position - 0xA18C Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_324(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_297() // Position - 0xA1C5 Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_308(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_298() // Position - 0xA1FE Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

int func_299() // Position - 0xA210 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_300(int iParam0) // Position - 0xA222 Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_301(Hash hParam0) // Position - 0xA2DB Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_302(BOOL bParam0) // Position - 0xA371 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0xA384 Hash - 0xA17D549C ^0xF5F44E9F
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

char* func_304(int iParam0) // Position - 0xA434 Hash - 0x21CE226B ^0x89964C59
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

int func_305(int iParam0) // Position - 0xA46F Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_306(int iParam0) // Position - 0xA4B4 Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0xA4FD Hash - 0xA17D549C ^0x11149C5C
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

BOOL func_308(Hash hParam0) // Position - 0xA60B Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0xA61B Hash - 0xA17D549C ^0xC2EBC0E6
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

char* func_310(int iParam0) // Position - 0xA6D8 Hash - 0x21CE226B ^0x82F08A11
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

BOOL func_311(Hash hParam0) // Position - 0xA713 Hash - 0x5C411CF ^0x5C411CF
{
	if (func_325(hParam0) && func_99(hParam0, 1, false))
		return 1;
	else if (func_326(hParam0) && func_327(hParam0))
		return 1;

	return 0;
}

char* func_312(Hash hParam0) // Position - 0xA751 Hash - 0x9E507475 ^0x27D399AE
{
	if (!func_105(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_165(hParam0));
}

int func_313(int iParam0) // Position - 0xA775 Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_314(int iParam0) // Position - 0xA787 Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

BOOL func_315(int iParam0) // Position - 0xA79B Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_316(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, const char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0xA7B1 Hash - 0x51CE9407 ^0x19439D00
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

int func_317(int iParam0) // Position - 0xA828 Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), iParam0);
}

int func_318(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xA83B Hash - 0xB88D7AA5 ^0x36259347
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

void func_319(BOOL bParam0) // Position - 0xA89C Hash - 0x970FE035 ^0x92589DF6
{
	func_328(bParam0);
	Global_1954819.f_1.f_1 = bParam0;

	if (bParam0 == true)
		HUD::_ENABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));
	else
		HUD::_DISABLE_HUD_CONTEXT(joaat("HUD_CTX_HONOR_SHOW"));

	return;
}

int func_320(int iParam0) // Position - 0xA8CF Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_329(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

Hash func_321(int iParam0) // Position - 0xA910 Hash - 0xB8EC44B7 ^0x693BD882
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

int func_322(BOOL bParam0) // Position - 0xA9C9 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_323(Hash hParam0) // Position - 0xA9EE Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

BOOL func_324(Hash hParam0) // Position - 0xA9FE Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_325(Hash hParam0) // Position - 0xAA0E Hash - 0xB8632262 ^0xB8632262
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

int func_326(Hash hParam0) // Position - 0xAAB5 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_327(Hash hParam0) // Position - 0xAAEE Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_330(&entity, 0, i, &model) && !func_330(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_331(entity, &model);
		
			if (func_105(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_328(BOOL bParam0) // Position - 0xAB5A Hash - 0x246AED7E ^0xB30D729F
{
	COMPAPP::_0xB6FD96420C0126A1(joaat("HonorMeterVisible"), bParam0);
	return;
}

int func_329(int iParam0) // Position - 0xAB6D Hash - 0x6EC15CF9 ^0xE613EBE0
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

BOOL func_330(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0xABEE Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_332(iParam1) && !func_333(iParam1))
		ped = func_200(iParam1);
	else
		return false;

	func_334(uParam3);
	num = func_335(iParam2);

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

void func_331(Entity eParam0, var uParam1) // Position - 0xAC8D Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_336(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_337(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

BOOL func_332(int iParam0) // Position - 0xACD7 Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_199(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_333(int iParam0) // Position - 0xAD0F Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_199(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_332(iParam0))
		return false;

	ped = func_200(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

void func_334(var uParam0) // Position - 0xAD63 Hash - 0x6843C143 ^0xA531F0D1
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

int func_335(int iParam0) // Position - 0xAE0A Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_336(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0xAE42 Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_337(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0xAEB7 Hash - 0xF684EE16 ^0xD8F147D7
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

