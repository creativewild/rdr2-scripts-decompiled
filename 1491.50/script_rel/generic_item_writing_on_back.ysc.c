#region Local Var
	var uLocal_0 = 0;
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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	var uLocal_14 = 0;
	Hash hLocal_15 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF399A4EF ^0xE82340F
{
	var unk;
	int i;
	Hash itemInteractionState;

	fLocal_12 = 1f;
	fLocal_13 = 1f;
	unk.f_5.f_2 = 12;
	unk.f_5.f_64 = 24;
	unk.f_5.f_89 = 24;
	unk.f_150 = 1;
	unk.f_151 = 1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		func_1(&unk);

	unk.f_128 = TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_35);

	if (!func_2(unk.f_128, 0))
		Global_1911772 = 323269915;
	else
		Global_1911772 = unk.f_128;

	unk.f_131 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(unk.f_128);

	for (i = 0; i < unk.f_131; i = i + 1)
	{
		unk.f_5.f_2[i /*5*/] = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(unk.f_128, i);
		unk.f_5.f_2[i /*5*/].f_2 = unk.f_5.f_2[i /*5*/];
		unk.f_5.f_2[i /*5*/].f_1 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(unk.f_128, unk.f_5.f_2[i /*5*/].f_2);
	}

	unk.f_134 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(unk.f_134);
	unk.f_142 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(Global_35) && PED::IS_PED_USING_ANY_SCENARIO(Global_35) && !PED::GET_PED_CONFIG_FLAG(Global_35, 464, true))
		unk.f_142 = 1;

	if (func_3(unk.f_128, -1903335637))
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	else
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);

	while (!func_4())
	{
		unk.f_130 = TASK::GET_ITEM_INTERACTION_STATE(Global_35);
	
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(unk.f_134) && ANIMSCENE::IS_ANIM_SCENE_LOADED(unk.f_134, true, false) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(unk.f_134, false))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(unk.f_134, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
			ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(unk.f_134, Global_35, -1);
			ANIMSCENE::START_ANIM_SCENE(unk.f_134);
		}
	
		itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_35);
	
		if (itemInteractionState == -1215562113 || itemInteractionState == -982676640)
			func_5(&unk);
		else if (itemInteractionState == 579381260 || itemInteractionState == 1510958603)
			func_6(&unk);
	
		BUILTIN::WAIT(0);
	}

	func_1(&unk);
	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

void func_1(var uParam0) // Position - 0x214 Hash - 0xA983754E ^0x70B8627C
{
	func_7(uParam0);

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hLocal_15))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hLocal_15);

	SCRIPTS::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_2(Hash hParam0, int iParam1) // Position - 0x235 Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

BOOL func_3(Hash hParam0, Hash hParam1) // Position - 0x24F Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_4() // Position - 0x280 Hash - 0xB58D3697 ^0x8BB9F578
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return true;

	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return true;

	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
		return true;

	if (!func_8())
		return true;

	return false;
}

void func_5(var uParam0) // Position - 0x2BD Hash - 0x194C6DA7 ^0xCC3C90C1
{
	if (uParam0->f_131 > 0)
	{
		if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
	
		if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE") && PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")))
		{
			if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
			{
				uParam0->f_5.f_1 = 1;
				func_9(uParam0);
			}
		}
	}
	else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
	}

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_TRANSLATE_OVERLAY"));
	else if (uParam0->f_5.f_1)
		func_7(uParam0);

	return;
}

void func_6(var uParam0) // Position - 0x365 Hash - 0x68438FD2 ^0xFCCCB747
{
	if (uParam0->f_131 > 0 && uParam0->f_128 == joaat("DOCUMENT_SLAVE_CATCHER_PHOTO"))
	{
		if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);
	
		if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE") && PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")))
		{
			if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
			{
				uParam0->f_5.f_1 = 1;
				func_9(uParam0);
			}
		}
	}
	else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE"))
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", false, -1);
	}

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_TRANSLATE_OVERLAY"));
	else if (uParam0->f_5.f_1)
		func_7(uParam0);

	return;
}

void func_7(var uParam0) // Position - 0x41D Hash - 0xE9E35ED2 ^0x341683DA
{
	if (uParam0->f_5.f_1 && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}

	return;
}

BOOL func_8() // Position - 0x450 Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_10(1);
}

void func_9(var uParam0) // Position - 0x45D Hash - 0x8454A83A ^0x3A3E1188
{
	int i;
	int j;
	int num;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hLocal_15))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hLocal_15);

	func_11(uParam0);
	hLocal_15 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hLocal_15, "Generic");
	num = 0;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(uParam0->f_128, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_12(&(uParam0->f_5), num, 3, true, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_12(&(uParam0->f_5), num, 1, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

BOOL func_10(int iParam0) // Position - 0x52C Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_13(iParam0);
}

void func_11(var uParam0) // Position - 0x53A Hash - 0x1B68B5CE ^0xC8FC22A6
{
	int i;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_63))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_63);

	for (i = 0; i < 24; i = i + 1)
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_64[i]))
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_64[i]);
	
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_5.f_89[i]))
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_5.f_89[i]);
	}

	for (i = 0; i < uParam0->f_5.f_2; i = i + 1)
	{
		uParam0->f_5.f_2[i /*5*/].f_3 = 0;
	}

	return;
}

void func_12(var uParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x5CE Hash - 0xEA65A004 ^0xEE41A4C7
{
	var unk;

	if (iParam1 >= 24)
		return;

	TEXT_LABEL_ASSIGN_STRING(&unk, "textField", 24);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 24);

	if (bParam4)
		TEXT_LABEL_APPEND_STRING(&unk, "Strike", 24);

	uParam0->f_64[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[iParam1], "style", hParam2);
	TEXT_LABEL_ASSIGN_STRING(&unk, "divider", 24);
	TEXT_LABEL_APPEND_INT(&unk, iParam1, 24);
	uParam0->f_89[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_89[iParam1], "isVisible", bParam3);
	return;
}

BOOL func_13(int iParam0) // Position - 0x661 Hash - 0xA059D395 ^0xE600C05
{
	return func_14(Global_1935496.f_27, iParam0);
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x675 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

