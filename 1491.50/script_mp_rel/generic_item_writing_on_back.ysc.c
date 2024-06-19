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
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	Hash hLocal_20 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF19621D6 ^0x69E06444
{
	var unk;
	int i;
	Hash itemInteractionState;

	fLocal_14 = 1f;
	fLocal_15 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1();

	unk.f_5.f_2 = 12;
	unk.f_5.f_64 = 11;
	unk.f_5.f_76 = 11;
	unk.f_124 = 1;
	unk.f_125 = 1;
	unk.f_102 = TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_33);

	if (!func_2(unk.f_102, 0))
		Global_1913442 = 0;
	else
		Global_1913442 = unk.f_102;

	unk.f_105 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(unk.f_102);

	for (i = 0; i < unk.f_105; i = i + 1)
	{
		unk.f_5.f_2[i /*5*/] = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(unk.f_102, i);
		unk.f_5.f_2[i /*5*/].f_2 = unk.f_5.f_2[i /*5*/];
		unk.f_5.f_2[i /*5*/].f_1 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(unk.f_102, unk.f_5.f_2[i /*5*/].f_2);
	}

	unk.f_108 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(unk.f_108);
	unk.f_116 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_33) && PED::IS_PED_USING_ANY_SCENARIO(Global_33) && !PED::GET_PED_CONFIG_FLAG(Global_33, 464, true))
		unk.f_116 = 1;

	if (func_3(unk.f_102, -1903335637))
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	else
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);

	while (!func_4())
	{
		unk.f_104 = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
	
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(unk.f_108) && ANIMSCENE::IS_ANIM_SCENE_LOADED(unk.f_108, true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(unk.f_108, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(unk.f_108, Global_34, ENTITY::GET_ENTITY_ROTATION(Global_33, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(unk.f_108, Global_33, -1);
			ANIMSCENE::START_ANIM_SCENE(unk.f_108);
		}
	
		itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_33);
	
		if (itemInteractionState == -1215562113 || itemInteractionState == -982676640)
		{
			if (unk.f_105 > 0)
			{
				if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
					PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
			
				if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")))
				{
					if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) != 0)
					{
					}
					else
					{
						func_5(&unk);
					}
				}
			}
			else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
			{
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
			}
		}
		else
		{
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE"))
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
		
			if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
				UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("translation_overlay"));
		}
	
		BUILTIN::WAIT(0);
	}

	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x27B Hash - 0x58E9C4FB ^0x90143243
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hLocal_20))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hLocal_20);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(Hash hParam0, int iParam1) // Position - 0x296 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_3(Hash hParam0, Hash hParam1) // Position - 0x2B0 Hash - 0x99BEDC80 ^0x850557FF
{
	if (!func_2(hParam0, 0))
		return func_7(func_6(hParam0), hParam1);

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_4() // Position - 0x2F1 Hash - 0xF19574D9 ^0x9DA90882
{
	if (Global_1572887.f_14 == 0 && func_8(false, false))
		return true;

	if (ENTITY::IS_ENTITY_DEAD(Global_33))
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return true;

	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
		return true;

	if (!func_9())
		return true;

	return false;
}

void func_5(var uParam0) // Position - 0x348 Hash - 0x454BAD1E ^0xEF9A6E81
{
	int i;
	int j;
	int num;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hLocal_20))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hLocal_20);

	func_10(uParam0);
	hLocal_20 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hLocal_20, "Generic");
	num = 0;

	for (j = 0; j < uParam0->f_105; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(uParam0->f_102, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_11(&(uParam0->f_5), num, 3, true, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_11(&(uParam0->f_5), num, 1, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

Hash func_6(Hash hParam0) // Position - 0x417 Hash - 0xC9D82232 ^0xC9D82232
{
	return hParam0;
}

BOOL func_7(Hash hParam0, Hash hParam1) // Position - 0x421 Hash - 0xD0E10453 ^0x5A74626C
{
	if (!func_12(hParam0, 2))
		return 0;

	if (hParam1 == 0)
		return 0;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return 1;

	return 0;
}

BOOL func_8(BOOL bParam0, BOOL bParam1) // Position - 0x457 Hash - 0x8CDC02F2 ^0xDB4E8541
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

BOOL func_9() // Position - 0x537 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_13(1);
}

void func_10(var uParam0) // Position - 0x544 Hash - 0x50F536B6 ^0x6EBB4896
{
	int i;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_63))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);

	for (i = 0; i < 11; i = i + 1)
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_64[i]))
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[i]);
	
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_76[i]))
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_76[i]);
	}

	for (i = 0; i < uParam0->f_5.f_2; i = i + 1)
	{
		uParam0->f_5.f_2[i /*5*/].f_3 = 0;
	}

	return;
}

void func_11(var uParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5D8 Hash - 0x7C5658D8 ^0xB1813BE5
{
	var unk;

	if (iParam1 >= 11)
		return;

	TEXT_LABEL_ASSIGN_STRING(&unk, "textField", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 16);

	if (bParam4)
		TEXT_LABEL_APPEND_STRING(&unk, "Strike", 16);

	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", hParam2);
	TEXT_LABEL_ASSIGN_STRING(&unk, "divider", 16);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 16);
	uParam0->f_76[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_76[iParam1], "isVisible", bParam3);
	return;
}

BOOL func_12(Hash hParam0, int iParam1) // Position - 0x66B Hash - 0x2B935ABB ^0x3E9B8BD9
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(hParam0, iParam1);
}

BOOL func_13(int iParam0) // Position - 0x685 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_14(iParam0);
}

BOOL func_14(int iParam0) // Position - 0x693 Hash - 0xA059D395 ^0x8E0849E2
{
	return func_15(Global_1940085.f_38, iParam0);
}

BOOL func_15(int iParam0, int iParam1) // Position - 0x6A7 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

