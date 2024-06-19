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
	BOOL bLocal_15 = 0;
	BOOL bLocal_16 = 0;
	BOOL bLocal_17 = 0;
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	Hash hLocal_20 = 0;
	Hash hLocal_21 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x210A9B40 ^0x23FB876F
{
	var unk;

	fLocal_12 = 1f;
	fLocal_13 = 1f;
	iLocal_19 = -1;
	unk.f_5.f_2 = 12;
	unk.f_5.f_64 = 24;
	unk.f_5.f_89 = 24;
	unk.f_150 = 1;
	unk.f_151 = 1;
	unk.f_147 = 1;
	unk.f_127 = uScriptParam_0.f_1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		unk.f_144 = 1;
		func_1(&unk, &Global_1911866);
	}

	if (func_2())
		TASK::TASK_STOP_LEADING_HORSE(Global_35);

	unk.f_134 = ANIMSCENE::_CREATE_ANIM_SCENE("lightrig@player_journal", 0, "plMain", false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(unk.f_134);
	unk.f_142 = 0;

	if (MISC::GET_GAME_TIMER() >= Global_1911773 && MISC::GET_GAME_TIMER() >= Global_36632)
	{
		unk.f_119.f_4 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
		unk.f_142 = 1;
	}

	Global_1911773 = 0;
	Global_36634 = false;
	Global_36635 = 0;

	if (MISC::GET_GAME_TIMER() < Global_36615 || unk.f_142)
	{
		Global_36634 = true;
		Global_36635 = 1;
	}

	if (Global_1935689.f_9439 == 0 || MISC::GET_GAME_TIMER() <= Global_1935496.f_59.f_2 + 3000)
		Global_36634 = true;

	while (func_3(&unk, &Global_1911866))
	{
		unk.f_130 = TASK::GET_ITEM_INTERACTION_STATE(Global_35);
	
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(unk.f_134) && ANIMSCENE::IS_ANIM_SCENE_LOADED(unk.f_134, true, false))
		{
			if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(unk.f_134, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(unk.f_134, Global_36, ENTITY::GET_ENTITY_ROTATION(Global_35, 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(unk.f_134, Global_35, -1);
					ANIMSCENE::START_ANIM_SCENE(unk.f_134);
				}
			}
			else if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(unk.f_134, false))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(unk.f_134, true);
			}
		}
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DUCK"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_HORSE_MELEE"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_ATTACK"), false);
		CAM::_DISABLE_CINEMATIC_MODE_THIS_FRAME();
	
		if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(joaat("HUD_CTX_TRANSLATE_OVERLAY"));
	
		if (unk.f_142)
			func_4(&unk, &Global_1911866);
		else
			func_5(&unk, &Global_1911866);
	
		func_6(&unk, &Global_1911866);
		BUILTIN::WAIT(0);
	}

	func_1(&unk, &Global_1911866);
	return;
}

void func_1(var uParam0, var uParam1) // Position - 0x237 Hash - 0x8DEEC49C ^0xDE1C3ECA
{
	if (func_7() && !Global_1935689.f_9)
	{
		if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			SCRIPTS::TERMINATE_THIS_THREAD();
	
		return;
	}

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
		UIAPPS::_CLOSE_UIAPP_BY_HASH(joaat("translation_overlay"));

	if (uParam0->f_141)
		func_8(uParam0, uParam1);

	if (uParam0->f_145)
		func_9(uParam0->f_1.f_1);

	func_10(uParam0, uParam1);
	func_11(uParam0);
	func_12(uParam0);

	if (uParam0->f_144)
		func_13(uParam0, uParam1);

	if (!uParam0->f_143)
	{
		if (!uParam1->[0 /*9*/].f_1)
			func_14(0);
		else
			Global_1911894[0 /*6*/].f_1 = 4;
	
		func_14(2);
		func_14(1);
		func_15(uParam1);
	}
	else
	{
		func_16(uParam0, uParam1);
	}

	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		SCRIPTS::TERMINATE_THIS_THREAD();

	return;
}

BOOL func_2() // Position - 0x306 Hash - 0xA095694D ^0x506AFF8
{
	Ped ped;
	Ped ledHorseFromPed;

	ped = PLAYER::PLAYER_PED_ID();

	if (!ENTITY::DOES_ENTITY_EXIST(ped))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ped, true))
		return false;

	if (!TASK::_IS_PED_LEADING_HORSE(ped))
		return false;

	ledHorseFromPed = TASK::_GET_LED_HORSE_FROM_PED(ped);

	if (!ENTITY::DOES_ENTITY_EXIST(ledHorseFromPed))
		return false;

	if (PED::IS_PED_DEAD_OR_DYING(ledHorseFromPed, true))
		return false;

	if (!PED::CAN_PED_BE_MOUNTED(ledHorseFromPed))
		return false;

	return true;
}

BOOL func_3(var uParam0, var uParam1) // Position - 0x371 Hash - 0xC457B44D ^0x846F6551
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		return false;

	if (func_17(uParam0, uParam1) && MISC::GET_GAME_TIMER() >= Global_36615 || !func_18(Global_1911772))
	{
		uParam0->f_144 = 1;
		return false;
	}

	return true;
}

int func_4(var uParam0, var uParam1) // Position - 0x3B5 Hash - 0xAED62A62 ^0x7B1675C4
{
	if (*uParam0 > 0)
		func_19(uParam0, uParam1);

	switch (*uParam0)
	{
		case 0:
			uParam0->f_127 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, joaat("primaryitem"));
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				func_20(uParam0, &uParam1->[0 /*9*/]);
				func_21(uParam0, uParam1);
				func_22(uParam0, uParam1->[0 /*9*/]);
				func_19(uParam0, uParam1);
				func_23(uParam0, 4);
			}
			break;
	
		case 4:
			if (func_24(uParam1->[0 /*9*/], uParam0->f_130))
			{
				func_25(uParam1->[0 /*9*/]);
				func_26(uParam0, uParam1, true);
				func_23(uParam0, 6);
			}
			break;
	
		case 6:
			func_27(uParam0, &uParam1->[0 /*9*/]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
		
			if (func_30(uParam1->[0 /*9*/], uParam0->f_130))
				if (func_31(uParam1->[0 /*9*/], -674618190))
					func_23(uParam0, 7);
				else
					func_23(uParam0, 8);
			else if (func_32(Global_36622[3], true))
				func_33(uParam0, uParam1->[0 /*9*/]);
		
			func_11(uParam0);
			break;
	
		case 7:
			uParam0->f_119.f_3 = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_119.f_4);
			uParam0->f_119 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_119.f_4, true) };
			TASK::_0x4161648394262FDF(uParam0->f_119, 1f);
		
			if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_119.f_4))
				uParam0->f_119.f_4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(uParam0->f_119, uParam0->f_119.f_3, 1f, 1, false);
		
			uParam0->f_119.f_5 = TASK::GET_PROP_FOR_SCENARIO_POINT(uParam0->f_119.f_4, "PrimaryItem");
			uParam0->f_119.f_6 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_119.f_5);
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_119.f_6, uParam1->[0 /*9*/].f_3, 0, 0);
			func_23(uParam0, 9);
			break;
	
		case 8:
			if (func_34(uParam1->[0 /*9*/]) && !uParam0->f_149)
			{
				func_35(uParam1->[0 /*9*/], 1, false, false, false, 752097756, 0, 0, 0, false);
				uParam0->f_149 = 1;
			}
		
			func_23(uParam0, 9);
			break;
	}

	return 0;
}

int func_5(var uParam0, var uParam1) // Position - 0x5B0 Hash - 0x359EBC2F ^0x981615C
{
	if (*uParam0 > 0)
		func_19(uParam0, uParam1);

	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
				uParam0->f_127 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, joaat("primaryitem"));
		
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127))
			{
				uParam1->[0 /*9*/] = func_36(uParam0);
				func_37(uParam0, uParam1->[0 /*9*/]);
				func_21(uParam0, uParam1);
				func_22(uParam0, uParam1->[0 /*9*/]);
				func_19(uParam0, uParam1);
				func_20(uParam0, &uParam1->[0 /*9*/]);
				func_38(uParam0, uParam1);
			
				if (Global_1911894[0 /*6*/].f_1 == 2)
				{
					func_39(&uParam1->[0 /*9*/], 0);
					func_40(uParam0, uParam1);
				}
			
				func_23(uParam0, 2);
			}
			break;
	
		case 2:
			if (func_39(&uParam1->[0 /*9*/], 0) && func_41(uParam0, uParam1))
				func_23(uParam0, 3);
			break;
	
		case 3:
			if (func_40(uParam0, uParam1))
				func_23(uParam0, 4);
			break;
	
		case 4:
			if (func_24(uParam1->[0 /*9*/], uParam0->f_130))
			{
				func_26(uParam0, uParam1, true);
				func_25(uParam1->[0 /*9*/]);
				func_23(uParam0, 5);
			}
			break;
	
		case 5:
			func_27(uParam0, &uParam1->[0 /*9*/]);
			func_28(uParam0, uParam1);
			func_29(uParam0, uParam1);
		
			if (func_30(uParam1->[0 /*9*/], uParam0->f_130))
			{
				func_23(uParam0, 9);
			}
			else if (func_42(Global_36622[2]) && func_43(Global_36622[2], true))
			{
				func_23(uParam0, 9);
				uParam0->f_144 = 1;
				Global_1935689.f_9 = 1;
				Global_36633 = MISC::GET_GAME_TIMER() + 10000;
				func_44(true);
			}
			else if (func_32(Global_36622[3], true))
			{
				func_33(uParam0, uParam1->[0 /*9*/]);
			}
			else if (!Global_36634 && func_45(uParam0))
			{
				uParam0->f_143 = 1;
				func_23(uParam0, 9);
			}
		
			func_11(uParam0);
			break;
	}

	return 0;
}

int func_6(var uParam0, var uParam1) // Position - 0x7A8 Hash - 0x97DFAD04 ^0xB50B1440
{
	Hash itemInteractionState;

	Global_1935496.f_59.f_4 = MISC::GET_GAME_TIMER() + 5000;

	if (Global_36621 == 1)
	{
		itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_35);
	
		if (itemInteractionState == func_46(Global_1911772))
			Global_36621 = 2;
	}

	switch (*uParam0)
	{
		case 9:
			func_1(uParam0, uParam1);
			break;
	}

	return 0;
}

BOOL func_7() // Position - 0x7FB Hash - 0xC24BA3AE ^0xF178BF44
{
	return Global_1935689.f_1 || Global_1935689 == 1;
}

void func_8(var uParam0, var uParam1) // Position - 0x815 Hash - 0x562CED31 ^0xE8ED1F16
{
	Hash hash;
	var label;
	const char* str;

	switch (uParam1->[0 /*9*/])
	{
		case joaat("DOCUMENT_GUNSLINGER_1_NOTE"):
		case -691125380:
		case -287018478:
		case 305626647:
			if (uParam1->[0 /*9*/] == joaat("DOCUMENT_GUNSLINGER_1_NOTE"))
				hash = 84;
			else if (uParam1->[0 /*9*/] == -691125380)
				hash = 86;
			else if (uParam1->[0 /*9*/] == -287018478)
				hash = 87;
			else if (uParam1->[0 /*9*/] == 305626647)
				hash = 88;
		
			if (func_47(hash) && !func_48(hash))
			{
				func_49(hash, true);
			
				if (func_50(0, false, true))
					func_51(hash, 2);
				else
					func_52(hash);
			
				if (!func_53(26, 32))
				{
					if (func_54(84, false) || func_48(84) && func_54(86, false) || func_48(86) && func_54(87, false) || func_48(87) && func_54(88, false) || func_48(88))
					{
						TEXT_LABEL_COPY(&label, { Global_1347702[26 /*49*/].f_1 }, 3);
						TEXT_LABEL_APPEND_STRING(&label, "_obj2", 24);
					
						if (HUD::DOES_TEXT_LABEL_EXIST(&label) && UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(26), func_56(26)))
						{
							str = func_57(0, &label, 0, 0, -1, -1);
							func_58(26, &label, str, -1082130432);
							func_51(26, 32);
						}
					}
				}
			}
			break;
	}

	return;
}

int func_9(int iParam0) // Position - 0x98C Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_10(var uParam0, var uParam1) // Position - 0x9AD Hash - 0xE578D434 ^0xCA70F34A
{
	var label;
	const char* str;

	switch (uParam1->[0 /*9*/])
	{
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2A"):
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE2B"):
			if (func_47(110) && !func_48(110))
			{
				func_49(110, true);
				func_60(109, false);
			}
			break;
	
		case joaat("DOCUMENT_LETTER_MAYOR_INVITE"):
			if (func_47(109) && !func_48(109))
			{
				func_49(109, true);
				func_59(109);
				TEXT_LABEL_COPY(&label, { Global_1347702[109 /*49*/].f_1 }, 3);
				TEXT_LABEL_APPEND_STRING(&label, "_obj", 24);
			
				if (HUD::DOES_TEXT_LABEL_EXIST(&label) && UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(109), func_56(109)))
				{
					str = func_57(0, &label, 0, 0, -1, -1);
					func_58(109, &label, str, -1082130432);
				}
			}
			break;
	}

	return;
}

void func_11(var uParam0) // Position - 0xA71 Hash - 0xC0F0F1C7 ^0x3937F20B
{
	if (uParam0->f_5.f_1 && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}

	return;
}

void func_12(var uParam0) // Position - 0xAA4 Hash - 0x1B68B5CE ^0xC8FC22A6
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

void func_13(var uParam0, var uParam1) // Position - 0xB38 Hash - 0xC63DE01E ^0xC63DE01E
{
	Hash hash;

	hash = uParam1->[0 /*9*/];

	if (*uParam0 == 0 && hash == 0)
		hash = Global_1911772;

	if (hash != 0)
	{
		if (func_46(hash) != 0)
			TASK::_0xB35370D5353995CB(Global_35, func_46(hash), 1048576000);
	
		if (uParam0->f_142 && func_34(hash) && !func_61(hash, 1, false) && !uParam0->f_149)
		{
			func_35(hash, 1, false, 0, 0, 752097756, 0, 0, 0, 0);
			uParam0->f_149 = 1;
		}
	}

	return;
}

void func_14(int iParam0) // Position - 0xBC3 Hash - 0xBD578226 ^0x58965C2C
{
	Global_1911894[iParam0 /*6*/].f_1 = 3;
	Global_1911894[iParam0 /*6*/] = 0;
	Global_1911894[iParam0 /*6*/].f_5 = 0;
	return;
}

void func_15(var uParam0) // Position - 0xBEA Hash - 0x8FD544BB ^0x12513572
{
	if (!Global_1935689.f_9)
	{
		if (func_31(Global_1911772, -1472964441) || func_31(Global_1911772, 1841149704) || func_31(Global_1911772, 566155764) || func_31(Global_1911772, -228153877))
		{
			Global_1935496.f_59.f_6 = 1;
			Global_1935496.f_59.f_7 = 1;
			Global_1935496.f_59.f_1 = Global_1911772;
			Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
		}
	}

	Global_1911772 = 0;
	Global_36632 = 0;
	Global_36621 = 2;
	Global_1911866[0 /*9*/].f_2 = 0;
	func_62(uParam0);
	return;
}

void func_16(var uParam0, var uParam1) // Position - 0xC8C Hash - 0xBF003C73 ^0x477EA759
{
	if (uParam0->f_141)
		func_8(uParam0, uParam1);

	if (uParam0->f_136)
		func_63(uParam1);
	else
		func_64(uParam1);

	if (uParam0->f_145)
		func_9(uParam0->f_1.f_1);

	func_65(uParam1);
	uParam1->[0 /*9*/].f_2 = 0;
	Global_1911772 = uParam1->[0 /*9*/];
	func_66(uParam1->[0 /*9*/], false, true, 0, 0f);
	GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
	Global_36632 = MISC::GET_GAME_TIMER() + 3000;
	return;
}

BOOL func_17(var uParam0, var uParam1) // Position - 0xD01 Hash - 0xAE0707D ^0x8E54A3F8
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
		return true;

	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_35))
		return true;

	if (!func_67(16))
		return true;

	if (!uParam0->f_144 && *uParam0 > 4 && func_68(uParam1->[0 /*9*/]))
		return true;

	return false;
}

BOOL func_18(Hash hParam0) // Position - 0xD59 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE2"):
		case -904734609:
		case -595619260:
		case -31140163:
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE3"):
		case 1760651454:
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE1"):
			return true;
	}

	return false;
}

void func_19(var uParam0, var uParam1) // Position - 0xD9B Hash - 0x79CD7A0A ^0xD5CFE43B
{
	if (!uParam0->f_148)
	{
		if (func_24(uParam1->[0 /*9*/], uParam0->f_130))
		{
			func_26(uParam0, uParam1, false);
			uParam0->f_148 = 1;
		}
	}

	return;
}

void func_20(var uParam0, var uParam1) // Position - 0xDCA Hash - 0xC45352D ^0x258FCA36
{
	var outData;

	*uParam1 = func_36(uParam0);
	uParam1->f_4 = func_69(*uParam1, -949239683);
	uParam1->f_1 = func_70(uParam1->f_4);

	if (uParam1->f_1)
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam1, &outData))
			uParam1->f_5.f_2 = outData.f_4;

	func_37(uParam0, *uParam1);
	return;
}

void func_21(var uParam0, var uParam1) // Position - 0xE23 Hash - 0x670385B5 ^0xFB78968A
{
	uParam0->f_146 = 1;

	switch (TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_35))
	{
		case joaat("DOCUMENT_RCM_SLAVE_LEDGER"):
			hLocal_20 = joaat("ui_doc_sc_diary");
			TXD::REQUEST_STREAMED_TXD(hLocal_20, false);
			break;
	
		case joaat("DOCUMENT_LEDGER_VALENTINE_JAIL"):
			hLocal_20 = joaat("ui_book_valentine_jail_ledger");
			TXD::REQUEST_STREAMED_TXD(hLocal_20, false);
			break;
	
		case joaat("PROVISION_RCM_BLACK_BOOK"):
			hLocal_20 = joaat("ui_doc_sc_ledger");
			TXD::REQUEST_STREAMED_TXD(hLocal_20, false);
			break;
	
		case joaat("document_mary_beth_journal"):
			if (func_71() == 2)
				hLocal_20 = joaat("ui_doc_mb_diary2");
			else if (func_71() == 6 || func_71() == 3)
				hLocal_20 = joaat("ui_doc_mb_diary3");
			else
				hLocal_20 = joaat("ui_doc_mb_diary1");
		
			TXD::REQUEST_STREAMED_TXD(hLocal_20, false);
			break;
	}

	return;
}

void func_22(var uParam0, Hash hParam1) // Position - 0xECA Hash - 0xC405F557 ^0x2222ED00
{
	if (func_31(hParam1, -98816307))
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
	else
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", true, -1);

	if (func_31(hParam1, -1903335637))
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", true, -1);
	else
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_DOCUMENT_FLIP_AVAILABLE", false, -1);

	if (uParam0->f_146)
	{
		if (func_31(hParam1, -98816307))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_TAKE_AVAILABLE", false, -1);
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_RETURN_AVAILABLE", true, -1);
		}
	}

	func_72(uParam0);
	return;
}

void func_23(var uParam0, int iParam1) // Position - 0xF57 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_24(Hash hParam0, int iParam1) // Position - 0xF64 Hash - 0xDB76EF08 ^0x947E1C4
{
	switch (func_69(hParam0, -949239683))
	{
		case -1565009253:
			if (iParam1 == -2077441721)
				return true;
			break;
	
		case -1273369295:
			if (iParam1 == -1340223099)
				return true;
			break;
	
		case -1239610997:
			if (iParam1 == 1087288635 || iParam1 == 1761334567 || iParam1 == 504129763)
				return true;
			break;
	
		case -1229959999:
			if (iParam1 == -1791047090)
				return true;
			break;
	
		case -1050374492:
			if (iParam1 == 760057945)
				return true;
			break;
	
		case -873135685:
			if (iParam1 == -1570312122 || iParam1 == -1563464392)
				return true;
			break;
	
		case -793205628:
			if (iParam1 == 136592566 || iParam1 == 16062911)
				return true;
			break;
	
		case -164980960:
			if (iParam1 == 2000759837)
				return true;
			break;
	
		case 10252101:
			if (iParam1 == -487508500)
				return true;
			break;
	
		case 24248412:
			if (iParam1 == 416212934)
				return true;
			break;
	
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE"))
				return true;
			break;
	
		case 632545869:
			if (iParam1 == -212251684 || iParam1 == -1401979141 || iParam1 == -1983586928)
				return true;
			break;
	
		case 733893097:
			if (iParam1 == 1972630951)
				return true;
			break;
	
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_BASE"))
				return true;
			break;
	
		case 1513351077:
			if (iParam1 == -1043439814)
				return true;
			break;
	
		case 1712126263:
			if (iParam1 == -1424266966)
				return true;
			break;
	
		case 1894156335:
			if (iParam1 == 374699583)
				return true;
			break;
	}

	return false;
}

void func_25(var uParam0) // Position - 0x115C Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

int func_26(var uParam0, var uParam1, BOOL bParam2) // Position - 0x1164 Hash - 0xD246EEFC ^0x64A5FCA0
{
	if (!uParam0->f_146)
	{
		if (!Global_36634 && bParam2)
		{
			if (!func_73(uParam1->[2 /*9*/], 0))
			{
				Global_36627[1] = false;
			
				if (func_42(Global_36622[1]))
					func_74(Global_36622[1], false, true);
			}
			else
			{
				Global_36627[1] = true;
			
				if (func_42(Global_36622[1]))
					func_74(Global_36622[1], true, true);
			}
		
			if (!func_73(uParam1->[1 /*9*/], 0))
			{
				Global_36627[0] = false;
			
				if (func_42(Global_36622[0]))
					func_74(Global_36622[0], false, true);
			}
			else
			{
				Global_36627[0] = true;
			
				if (func_42(Global_36622[0]))
					func_74(Global_36622[0], true, true);
			}
		}
	
		Global_36627[3] = func_75(uParam0, &uParam1->[0 /*9*/]);
	
		if (func_42(Global_36622[3]))
			func_74(Global_36622[3], Global_36627[3], true);
	
		if (uParam1->[0 /*9*/] == joaat("DOCUMENT_BANKROB_NEWSCLIP"))
			Global_36636 = 1;
	
		Global_36621 = 1;
	}

	if (uParam0->f_142)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INSPECT_ZOOM"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DOCUMENT_PAGE_NEXT"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_DOCUMENT_PAGE_PREV"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_A"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_CONTEXT_B"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_INSPECT_OPEN_SATCHEL"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_TAB_RIGHT"), false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, joaat("INPUT_GAME_MENU_TAB_LEFT"), false);
	}

	return 1;
}

void func_27(var uParam0, var uParam1) // Position - 0x12DE Hash - 0xF894815A ^0x1536A4A5
{
	int i;
	int num;

	if (!func_24(*uParam1, uParam0->f_130) && !func_76(*uParam1, uParam0->f_130))
	{
		if (!uParam0->f_138)
		{
			if (func_77(Global_36622[0], true))
				uParam0->f_139 = 0;
			else
				uParam0->f_139 = 1;
		
			if (func_77(Global_36622[1], true))
				uParam0->f_140 = 0;
			else
				uParam0->f_140 = 1;
		
			for (i = 0; i < 4; i = i + 1)
			{
				func_78(&Global_36622[i], false);
			}
		
			uParam0->f_138 = 1;
		}
	}
	else if (uParam0->f_138)
	{
		func_79(uParam0, uParam1);
	
		for (i = 0; i < 3; i = i + 1)
		{
			num = i;
		
			if (num == 0 && !uParam0->f_139 || num == 1 && !uParam0->f_140 || num != 1 && num != 0)
				func_78(&Global_36622[num], true);
		}
	
		uParam0->f_138 = 0;
	}

	return;
}

void func_28(var uParam0, var uParam1) // Position - 0x13D8 Hash - 0xEFD559E0 ^0xA62E62CA
{
	if (!uParam0->f_141 && func_80(uParam1->[0 /*9*/], uParam0->f_130))
	{
		uParam0->f_141 = 1;
		func_81(uParam1->[0 /*9*/]);
	}

	return;
}

void func_29(var uParam0, var uParam1) // Position - 0x1408 Hash - 0xD55F9E5C ^0xB9A7C721
{
	Hash itemInteractionState;

	if (!UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")) && uParam0->f_131 > 0)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, joaat("INPUT_CONTEXT_X")))
			if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
				func_82(uParam0, uParam1);
	
		if (iLocal_19 == -1)
			func_83(uParam0);
	
		itemInteractionState = TASK::GET_ITEM_INTERACTION_STATE(Global_35);
	
		if (!bLocal_15)
		{
			if (itemInteractionState == -271999469 || itemInteractionState == 1088578020)
			{
				bLocal_15 = true;
				iLocal_18 = iLocal_18 + 1;
			}
		}
		else if (itemInteractionState == 1087288635 || itemInteractionState == 504129763 || itemInteractionState == -1809475494 || itemInteractionState == 1854147388)
		{
			bLocal_15 = false;
		}
	
		if (!bLocal_16)
		{
			if (itemInteractionState == 447737959 || itemInteractionState == 847337666)
			{
				bLocal_16 = true;
				iLocal_18 = iLocal_18 - 1;
			}
		}
		else if (itemInteractionState == 1087288635 || itemInteractionState == 504129763 || itemInteractionState == -1809475494 || itemInteractionState == 1854147388)
		{
			bLocal_16 = false;
		}
	
		if (iLocal_18 == 0)
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "BOOK_BLOCK_PAGE_PREV"))
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BOOK_BLOCK_PAGE_PREV", true, -1);
		else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "BOOK_BLOCK_PAGE_PREV"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BOOK_BLOCK_PAGE_PREV", false, -1);
	
		if (iLocal_18 >= iLocal_19)
			if (!PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
				PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BOOK_BLOCK_PAGE_NEXT", true, -1);
		else if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_35, "BOOK_BLOCK_PAGE_NEXT"))
			PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "BOOK_BLOCK_PAGE_NEXT", false, -1);
	}

	if (!bLocal_17 && hLocal_20 != 0)
	{
		if (TXD::HAS_STREAMED_TXD_LOADED(hLocal_20))
		{
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_35, 0), hLocal_20, 0, 0);
			bLocal_17 = true;
		}
	}

	return;
}

BOOL func_30(Hash hParam0, int iParam1) // Position - 0x15D1 Hash - 0x886E7192 ^0x308D70B7
{
	switch (func_69(hParam0, -949239683))
	{
		case -1565009253:
			if (iParam1 == -672448089 || iParam1 == 1505672707)
				return true;
			break;
	
		case -1273369295:
			if (iParam1 == 1434623772 || iParam1 == 1708036133)
				return true;
			break;
	
		case -1229959999:
			if (iParam1 == 779637421 || iParam1 == 1184806339)
				return true;
			break;
	
		case -1050374492:
			if (iParam1 == -13228069 || iParam1 == -733273327)
				return true;
			break;
	
		case -873135685:
			if (iParam1 == 676329346 || iParam1 == 1940752053)
				return true;
			break;
	
		case -164980960:
			if (iParam1 == 1096961806 || iParam1 == -1142551033)
				return true;
			break;
	
		case 10252101:
			if (iParam1 == -838154919 || iParam1 == 384644694)
				return true;
			break;
	
		case 24248412:
			if (iParam1 == -587250236 || iParam1 == -503655797)
				return true;
			break;
	
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_FRONT_OUTRO"))
				return true;
			break;
	
		case 733893097:
			if (iParam1 == 329918092 || iParam1 == 1320390176)
				return true;
			break;
	
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_OUTRO") || iParam1 == joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_FLIP_TO_FRONT_OUTRO"))
				return true;
			break;
	
		case 1513351077:
			if (iParam1 == -1855297853 || iParam1 == 327088472)
				return true;
			break;
	
		case 1712126263:
			if (iParam1 == 1918075176 || iParam1 == -1661733570)
				return true;
			break;
	
		case 1894156335:
			if (iParam1 == 2067181640 || iParam1 == -1286256799)
				return true;
			break;
	}

	return false;
}

BOOL func_31(Hash hParam0, Hash hParam1) // Position - 0x17FF Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_32(int iParam0, BOOL bParam1) // Position - 0x1830 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_42(iParam0))
		return false;

	num = func_84(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_33(var uParam0, Hash hParam1) // Position - 0x1863 Hash - 0x8E10A62A ^0xBBD158A9
{
	if (func_31(hParam1, -1227898937))
	{
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("newspaper")) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_85(uParam0, hParam1);
		}
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_85(uParam0, hParam1);
	}

	return;
}

BOOL func_34(Hash hParam0) // Position - 0x18D6 Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE2"):
		case -31140163:
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE3"):
		case joaat("DOCUMENT_SERIAL_KILLER_CLUE1"):
			return 0;
	}

	return 1;
}

int func_35(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x1906 Hash - 0x11449F01 ^0x11449F01
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

	if (!func_73(hParam0, 0))
		return 0;

	if (!func_86(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_87(hParam0, &value, iParam1))
		return 0;

	func_88(hParam0, bParam2);
	lootTableKey = 0;

	if (func_89(hParam0, false, false) == 0)
	{
		if (func_90(hParam0))
		{
			hash = func_91(hParam0);
			collectableSubcategory = func_92(hash);
			num = func_93(collectableSubcategory) + 1;
			func_94(hash);
		
			if (func_95(38))
				func_96(483, false);
			else
				func_96(482, false);
		
			if (num == func_97(collectableSubcategory))
			{
				func_35(func_98(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_99() && func_100(4))
				{
					if (func_99() && func_101(38) || func_95(38))
					{
						func_103(38, func_98(collectableSubcategory), 0, 0, func_102(), false, -1, false);
						func_104(2);
					}
					else
					{
						func_103(38, func_98(collectableSubcategory), 0, 0, func_102(), false, -1, false);
						func_104(1);
					}
				}
			}
			else if (func_99() && func_100(4))
			{
				if (func_99() && func_101(38) || func_95(38))
				{
					func_103(38, 0, 0, 0, func_102(), false, -1, false);
					func_104(2);
				}
				else
				{
					func_103(38, 0, 0, 0, func_102(), false, -1, false);
					func_104(1);
				}
			}
		
			if (func_99() && func_100(4))
				if (!Global_1914319.f_17376)
					if (func_99() && func_101(38) || func_95(38))
						func_105(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_105(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_106(hParam0) == joaat("CLOTHING"))
		if (!func_31(hParam0, 866047851) && !func_31(hParam0, -1979000645) && !func_31(hParam0, 1248798204))
			flag = true;

	if (func_107(hParam0, 8388608) && !func_108(28))
		func_109(28);

	if (!flag)
	{
		if (func_31(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_110(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_112(func_111(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_113() == -1)
						func_114(ammoTypeForWeapon);
				
					if (func_115(false) && func_116(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_117(hParam0, value, hParam5);
					
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
					if (func_113() == -1)
						func_114(hParam0);
				
					if (func_115(false) && func_116(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_117(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_106(hParam0) == joaat("WEAPON"))
		{
			if (!func_118(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_106(hParam0) == joaat("AMMO") && func_119(hParam0))
		{
			if (!func_120(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_31(hParam0, 866047851))
		{
			func_121(hParam0);
		}
		else if (func_31(hParam0, 2000026003))
		{
			func_122(hParam0);
		}
		else if (func_31(hParam0, -103750053))
		{
			func_124(func_123(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_124(func_125(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_31(hParam0, -121341956) && !func_31(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_126(Global_1835011[4 /*74*/].f_1, true))
					func_96(498, false);
		
			if (func_31(hParam0, -2017733358) || func_31(hParam0, -1369131378))
				func_127(hParam0);
		}
		else if (func_31(hParam0, -136654233))
		{
			if (func_31(hParam0, -1021472396))
			{
			}
		}
		else if (func_31(hParam0, -1466706512) && func_31(hParam0, 1147021565))
		{
			func_96(484, false);
		}
		else if (func_31(hParam0, 1147021565) && func_31(hParam0, -524514947))
		{
		}
		else if (func_31(hParam0, 554195525))
		{
		}
		else if (func_31(hParam0, 589988438))
		{
			if (func_128())
			{
				func_129(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_31(hParam0, 787083290) && func_31(hParam0, 949916894))
		{
			func_130(hParam0);
		}
		else if (func_31(hParam0, -1718133314))
		{
			func_131(hParam0);
		}
		else if (func_31(hParam0, -1738650224))
		{
			func_132(hParam0);
		}
		else if (func_31(hParam0, -1112814642) && func_31(hParam0, 949916894))
		{
			func_133(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_31(hParam0, 1841149704))
		{
			func_134();
		}
		else if (func_31(hParam0, 606799272))
		{
			func_135(hParam0, iParam1);
			func_136(hParam0);
		}
		else if (func_31(hParam0, -1112814642) && func_31(hParam0, -1697809989))
		{
			func_137(hParam0, 0, false, false);
		}
		else if (func_31(hParam0, -2017733358) || func_31(hParam0, -1369131378))
		{
			func_127(hParam0);
		}
		else if (func_31(hParam0, -1921346699))
		{
			if (func_113() != -1)
				return 0;
		
			func_138(hParam0, hParam5, eParam8);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_31(hParam0, 1192444843))
		{
			switch (hParam0)
			{
				case joaat("upgrade_fsh_bait_lure_swamp"):
					if (!func_61(471514780, 1, false))
						func_35(471514780, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_lake"):
					if (!func_61(526074061, 1, false))
						func_35(526074061, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_swamp"):
					if (!func_61(-967317137, 1, false))
						func_35(-967317137, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_river"):
					if (!func_61(670273567, 1, false))
						func_35(670273567, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_leg_lure_lake"):
					if (!func_61(215778062, 1, false))
						func_35(215778062, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			
				case joaat("upgrade_fsh_bait_lure_river"):
					if (!func_61(-1045488665, 1, false))
						func_35(-1045488665, 1, false, false, false, 752097756, 0, 0, 0, false);
					break;
			}
		}
		else if (func_31(hParam0, -839724752) && func_107(hParam0, 4))
		{
			if (!func_95(42))
				func_139(hParam0);
		}
		else if (func_31(hParam0, 1399091007))
		{
			func_140(hParam0, &lootTableKey);
			bParam2 = true;
			flag2 = true;
		}
		else if (func_31(hParam0, 1248798204))
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
				func_35(hash2, 1, true, false, false, 752097756, 0, 0, 0, false);
		}
	
		switch (hParam0)
		{
			case joaat("upgrade_upg_mortar_pestle"):
				if (func_113() == -1)
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
					func_158(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_158(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_158(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_148(499813453, joaat("treasure_hunt_loot_01"), false);
				func_149(499813453, false);
				func_150(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_148(390004462, joaat("treasure_hunt_loot_17"), false);
				func_149(390004462, false);
				func_154(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_148(6410548, joaat("treasure_hunt_loot_23"), false);
				func_149(6410548, false);
				func_155(8);
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
				func_148(6410548, joaat("treasure_hunt_loot_22"), false);
				func_149(6410548, false);
				func_155(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_109(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_141(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_142(&hash3, false))
					func_116(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_158(594, 1934060482, true, true);
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
					func_158(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_96(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_148(6410548, joaat("treasure_hunt_loot_21"), false);
				func_149(6410548, false);
				func_155(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_96(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_35(func_159(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_35(func_160(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_158(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_148(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_149(-220219788, false);
				func_152(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_108(1))
					func_96(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_148(666607663, joaat("treasure_hunt_loot_07"), false);
				func_149(666607663, false);
				func_151(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_157(241, func_156(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_148(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_149(-220219788, false);
				func_152(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_157(242, func_156(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_96(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_157(240, func_156(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_148(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_149(-220219788, false);
				func_152(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_148(390004462, joaat("treasure_hunt_loot_16"), false);
				func_149(390004462, false);
				func_154(1);
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
				func_148(499813453, joaat("treasure_hunt_loot_03"), false);
				func_149(499813453, false);
				func_150(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_148(666607663, joaat("treasure_hunt_loot_06"), false);
				func_149(666607663, false);
				func_151(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_148(218622660, joaat("treasure_hunt_loot_14"), false);
				func_149(218622660, false);
				func_153(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_148(666607663, joaat("treasure_hunt_loot_05"), false);
				func_149(666607663, false);
				func_151(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_113() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_141(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_148(218622660, joaat("treasure_hunt_loot_13"), false);
				func_149(218622660, false);
				func_153(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_148(6410548, joaat("treasure_hunt_loot_20"), false);
				func_149(6410548, false);
				func_155(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_96(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_96(491, false);
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
				func_148(499813453, joaat("treasure_hunt_loot_02"), false);
				func_149(499813453, false);
				func_150(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_96(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_143();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_144();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_145();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_146();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_147();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_148(390004462, joaat("treasure_hunt_loot_18"), false);
				func_149(390004462, false);
				func_154(4);
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
		func_161(&hash4);
	
		if (!func_162(hash4, value, hParam5))
			return 0;
		else if (!func_115(false))
			return 1;
	
		if (func_106(hParam0) == joaat("CLOTHING"))
			func_163(hParam0);
	
		if (func_31(hParam0, -1979000645))
			func_164(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_115(false))
		{
			num2.f_1 = 10;
			num2.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_35, false, false, lootTableKey, &num2, 0);
		
			for (i = 0; i < num2; i = i + 1)
			{
				func_35(num2.f_1[i], num2.f_12[i], false, false, false, -897553835, 0, 0, 0, false);
			}
		}
		else
		{
			func_165(lootTableKey, 0);
		}
	}

	statId = { func_166(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_167(hParam0);

	if (iParam6 > 0f)
	{
		if (func_31(hParam0, -839724752))
			func_168(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_169(hParam0, value, false, flag3, 0);
	}

	return 1;
}

Hash func_36(var uParam0) // Position - 0x2B9B Hash - 0x32CA11F7 ^0x7CB1CE55
{
	Hash _int;

	if (uParam0->f_142)
	{
		if (DECORATOR::DECOR_EXIST_ON(uParam0->f_127, "letter_item"))
		{
			_int = DECORATOR::DECOR_GET_INT(uParam0->f_127, "letter_item");
		}
		else
		{
			_int = TASK::GET_ITEM_INTERACTION_ITEM_ID(Global_35);
		
			if (!func_73(_int, 0))
				_int = 323269915;
		}
	
		Global_1911772 = _int;
	}
	else
	{
		_int = Global_1911772;
	}

	return _int;
}

void func_37(var uParam0, Any anParam1) // Position - 0x2BF9 Hash - 0x2374F27F ^0xFA77C453
{
	int i;

	uParam0->f_131 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_LABEL_TYPES(anParam1);

	for (i = 0; i < uParam0->f_131; i = i + 1)
	{
		uParam0->f_5.f_2[i /*5*/] = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_TYPE(anParam1, i);
		uParam0->f_5.f_2[i /*5*/].f_2 = uParam0->f_5.f_2[i /*5*/];
		uParam0->f_5.f_2[i /*5*/].f_1 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(anParam1, uParam0->f_5.f_2[i /*5*/].f_2);
	}

	return;
}

void func_38(var uParam0, var uParam1) // Position - 0x2C66 Hash - 0xED62B70C ^0xED62B70C
{
	func_170(uParam0, uParam1->[0 /*9*/]);
	func_171(uParam0, uParam1);

	if (uParam1->[1 /*9*/] != 0)
		func_172(1, uParam1->[1 /*9*/]);
	else
		func_14(1);

	func_173(uParam0, uParam1);

	if (uParam1->[2 /*9*/] != 0)
		func_172(2, uParam1->[2 /*9*/]);
	else
		func_14(2);

	func_174(uParam1);
	func_175(uParam1);
	return;
}

int func_39(var uParam0, int iParam1) // Position - 0x2CCE Hash - 0xBAC06518 ^0x7B2CADE6
{
	Hash txdHash;

	if (uParam0->f_1)
	{
		return 1;
	}
	else if (func_176(*uParam0, &txdHash, joaat("Inventory"), joaat("ui_itemviewer"), 0, 0))
	{
		if (TXD::DOES_STREAMED_TXD_EXIST(txdHash))
		{
			TXD::REQUEST_STREAMED_TXD(txdHash, false);
			uParam0->f_3 = txdHash;
		}
	}

	return 1;
}

BOOL func_40(var uParam0, var uParam1) // Position - 0x2D16 Hash - 0xCFF740DC ^0xCFF740DC
{
	if (func_177(uParam0, &uParam1->[0 /*9*/]))
	{
		func_172(0, uParam1->[0 /*9*/]);
		func_178(uParam0, uParam1);
		return true;
	}

	return false;
}

int func_41(var uParam0, var uParam1) // Position - 0x2D44 Hash - 0x6565581A ^0x6565581A
{
	return 1;
}

BOOL func_42(int iParam0) // Position - 0x2D4D Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

BOOL func_43(int iParam0, BOOL bParam1) // Position - 0x2D8C Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_42(iParam0))
		return false;

	num = func_84(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_44(BOOL bParam0) // Position - 0x2DE4 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

BOOL func_45(var uParam0) // Position - 0x2DFE Hash - 0x8E17540C ^0x6CC7D307
{
	BOOL num;

	num = 0;
	uParam0->f_136 = 0;

	if (func_32(Global_36622[1], true))
	{
		num = 1;
		uParam0->f_136 = 1;
		func_78(&Global_36622[1], !uParam0->f_151);
		func_78(&Global_36622[0], true);
	}

	if (func_32(Global_36622[0], true))
	{
		num = 1;
		func_78(&Global_36622[0], !uParam0->f_150);
		func_78(&Global_36622[1], true);
	}

	return num;
}

Hash func_46(Hash hParam0) // Position - 0x2E6B Hash - 0x49053431 ^0x13BD88EB
{
	switch (func_69(hParam0, -949239683))
	{
		case -1565009253:
			return -672448089;
	
		case -1273369295:
			return 1434623772;
	
		case -1229959999:
			return 779637421;
	
		case -1050374492:
			return -13228069;
	
		case -873135685:
			return 486187924;
	
		case -164980960:
			return 1096961806;
	
		case 10252101:
			return -838154919;
	
		case 24248412:
			return -1079287506;
	
		case 82200319:
			return joaat("DOCUMENT_INSPECT@NEWSPAPER_OUTRO");
	
		case 733893097:
			return 329918092;
	
		case 871191033:
			return joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_OUTRO");
	
		case 1513351077:
			return -1855297853;
	
		case 1712126263:
			return 1918075176;
	
		case 1894156335:
			return 2067181640;
	}

	return 0;
}

BOOL func_47(Hash hParam0) // Position - 0x2F73 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

BOOL func_48(Hash hParam0) // Position - 0x2F89 Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_113() != -1)
		return false;

	if (!func_47(hParam0))
		return false;

	return func_126(Global_1347702[hParam0 /*49*/].f_15, true);
}

int func_49(Hash hParam0, BOOL bParam1) // Position - 0x2FBA Hash - 0xCA5491A8 ^0x3140F2AC
{
	if (bParam1)
		if (func_179(Global_1347702[hParam0 /*49*/].f_12, 2097152))
			if (func_126(Global_1835011[59 /*74*/].f_1, true))
				return 0;
		else if (func_179(Global_1347702[hParam0 /*49*/].f_12, 256))
			if (!func_126(Global_1835011[59 /*74*/].f_1, true))
				return 0;

	return func_180(hParam0);
}

BOOL func_50(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3026 Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_181())
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
		num = func_182(Global_1898164.f_1[0 /*5*/]);
	
		if (func_47(num) && func_179(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_183(Global_1898164.f_1[0 /*5*/]))
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

void func_51(Hash hParam0, BOOL bParam1) // Position - 0x322A Hash - 0xD9457448 ^0xD9457448
{
	Global_40.f_490.f_402[hParam0] = Global_40.f_490.f_402[hParam0] || bParam1;
	return;
}

void func_52(Hash hParam0) // Position - 0x324F Hash - 0xC300184D ^0xC300184D
{
	func_184();

	if (!func_47(hParam0))
		return;

	Global_40.f_1093 = Global_1347702[hParam0 /*49*/];
	return;
}

BOOL func_53(Hash hParam0, BOOL bParam1) // Position - 0x3276 Hash - 0x7A9B781A ^0x7A9B781A
{
	return Global_40.f_490.f_402[hParam0] && bParam1 != false;
}

BOOL func_54(Hash hParam0, BOOL bParam1) // Position - 0x3290 Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_113() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == hParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

int func_55(Hash hParam0) // Position - 0x32ED Hash - 0xA3643963 ^0xF9EF53C7
{
	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[hParam0 /*49*/].f_12 & 33554432 != 0)
		return 1;

	return 3;
}

Hash func_56(Hash hParam0) // Position - 0x3323 Hash - 0x7D845FB3 ^0x8C761B1C
{
	const char* str;

	str = Global_1347702[hParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&str);
}

const char* func_57(int iParam0,  Param1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x333D Hash - 0xAAA10C27 ^0x5F94E968
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, Param1, iParam4);
	
		case 2:
			return MISC::VAR_STRING(2, Param1, iParam4, iParam5);
	
		case 3:
			return MISC::VAR_STRING(10, Param1, iParam2);
	
		case 4:
			return MISC::VAR_STRING(42, Param1, iParam2, iParam3);
	}

	return MISC::VAR_STRING(2, func_185(Param1));
}

void func_58(int iParam0, const char* sParam1, const char* sParam2, int iParam3) // Position - 0x33B2 Hash - 0x680C4C3F ^0xCB675611
{
	int num;

	if (Global_1347702[iParam0 /*49*/].f_12 & 67108864 != 0)
		return;

	num = func_55(iParam0);

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(num, func_56(iParam0)))
		return;

	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(num, func_56(iParam0), MISC::GET_HASH_KEY(sParam1), sParam2, iParam3 >= 0.9f, false, false);
	return;
}

void func_59(Hash hParam0) // Position - 0x340A Hash - 0x653603B ^0x6B1D5D13
{
	var unk;
	const char* str;
	const char* str2;
	eBlipSprite sprite;
	eBlipSprite icon;
	eBlipSprite hashKey;
	int num;

	if (Global_1347702[hParam0 /*49*/].f_12 & 67108864 != 0)
		return;

	sprite = func_186(hParam0, false);
	icon = sprite;
	hashKey = sprite;

	if (hParam0 == 82 || hParam0 == 83)
		hashKey = MISC::GET_HASH_KEY("LAW_UI_DUTCH_GANG");

	TEXT_LABEL_COPY(&unk, { Global_1347702[hParam0 /*49*/].f_3 }, 8);
	TEXT_LABEL_APPEND_STRING(&unk, "_DESC", 64);
	num = func_55(hParam0);
	UILOG::_UILOG_ADD_ENTRY_HASH(num, func_56(hParam0), Global_1347702[hParam0 /*49*/].f_24, hashKey, MISC::GET_HASH_KEY(&unk), Global_1347702[hParam0 /*49*/].f_37);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(num, func_56(hParam0), icon, MISC::GET_HASH_KEY("toast_log_blips"));

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str) && !MISC::IS_STRING_NULL_OR_EMPTY(str2))
		UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(num, func_56(hParam0), MISC::GET_HASH_KEY(str), MISC::GET_HASH_KEY(str2));

	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(num, func_56(hParam0)))
		func_51(hParam0, 4);

	return;
}

void func_60(Hash hParam0, BOOL bParam1) // Position - 0x34FD Hash - 0x5EEEE2EA ^0x7DE8FB38
{
	if (Global_1347702[hParam0 /*49*/].f_12 & 67108864 != 0)
		return;

	if (!func_53(hParam0, 4))
		return;

	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(func_55(hParam0), func_56(hParam0)))
		return;

	if (bParam1)
	{
		if (func_53(hParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_55(hParam0), func_56(hParam0), 1, "");
		}
	
		func_51(hParam0, 8);
	}
	else
	{
		if (func_53(hParam0, 16))
		{
		}
		else
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(func_55(hParam0), func_56(hParam0), 0, "");
		}
	
		func_187(hParam0, 8);
	}

	return;
}

BOOL func_61(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x359F Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_73(hParam0, 0))
		return false;

	num = func_106(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_188(hParam0, 1))
			return false;

	return func_89(hParam0, false, bParam2) >= iParam1;
}

void func_62(var uParam0) // Position - 0x3609 Hash - 0xA4DD7C3 ^0x2192A444
{
	uParam0->[0 /*9*/] = 0;
	uParam0->[0 /*9*/].f_1 = 0;
	uParam0->[0 /*9*/].f_2 = 0;
	uParam0->[0 /*9*/].f_3 = 0;
	uParam0->[0 /*9*/].f_4 = 0;
	uParam0->[0 /*9*/].f_5 = 0;
	uParam0->[0 /*9*/].f_5.f_1 = 0;
	uParam0->[0 /*9*/].f_5.f_2 = 0;
	uParam0->[0 /*9*/].f_5.f_3 = 0;
	func_65(uParam0);
	return;
}

void func_63(var uParam0) // Position - 0x3663 Hash - 0x7DBE30D6 ^0xC0E19F9B
{
	uParam0->[0 /*9*/] = uParam0->[2 /*9*/];
	uParam0->[0 /*9*/].f_1 = uParam0->[2 /*9*/].f_1;
	uParam0->[0 /*9*/].f_3 = uParam0->[2 /*9*/].f_3;
	uParam0->[0 /*9*/].f_4 = uParam0->[2 /*9*/].f_4;
	uParam0->[0 /*9*/].f_5 = uParam0->[2 /*9*/].f_5;
	uParam0->[0 /*9*/].f_5.f_1 = uParam0->[2 /*9*/].f_5.f_1;
	uParam0->[0 /*9*/].f_5.f_2 = uParam0->[2 /*9*/].f_5.f_2;
	uParam0->[0 /*9*/].f_5.f_3 = uParam0->[2 /*9*/].f_5.f_3;
	uParam0->[0 /*9*/].f_2 = 0;
	return;
}

void func_64(var uParam0) // Position - 0x36EB Hash - 0xD31813AD ^0x1D25FB9E
{
	uParam0->[0 /*9*/] = uParam0->[1 /*9*/];
	uParam0->[0 /*9*/].f_1 = uParam0->[1 /*9*/].f_1;
	uParam0->[0 /*9*/].f_3 = uParam0->[1 /*9*/].f_3;
	uParam0->[0 /*9*/].f_4 = uParam0->[1 /*9*/].f_4;
	uParam0->[0 /*9*/].f_5 = uParam0->[1 /*9*/].f_5;
	uParam0->[0 /*9*/].f_5.f_1 = uParam0->[1 /*9*/].f_5.f_1;
	uParam0->[0 /*9*/].f_5.f_2 = uParam0->[1 /*9*/].f_5.f_2;
	uParam0->[0 /*9*/].f_5.f_3 = uParam0->[1 /*9*/].f_5.f_3;
	uParam0->[0 /*9*/].f_2 = 0;
	return;
}

void func_65(var uParam0) // Position - 0x3773 Hash - 0x7EE54F18 ^0xA7AE657D
{
	uParam0->[2 /*9*/] = 0;
	uParam0->[2 /*9*/].f_1 = 0;
	uParam0->[2 /*9*/].f_2 = 0;
	uParam0->[2 /*9*/].f_3 = 0;
	uParam0->[2 /*9*/].f_4 = 0;
	uParam0->[2 /*9*/].f_5 = 0;
	uParam0->[2 /*9*/].f_5.f_1 = 0;
	uParam0->[2 /*9*/].f_5.f_2 = 0;
	uParam0->[2 /*9*/].f_5.f_3 = 0;
	uParam0->[1 /*9*/] = 0;
	uParam0->[1 /*9*/].f_1 = 0;
	uParam0->[1 /*9*/].f_2 = 0;
	uParam0->[1 /*9*/].f_3 = 0;
	uParam0->[1 /*9*/].f_4 = 0;
	uParam0->[1 /*9*/].f_5 = 0;
	uParam0->[1 /*9*/].f_5.f_1 = 0;
	uParam0->[1 /*9*/].f_5.f_2 = 0;
	uParam0->[1 /*9*/].f_5.f_3 = 0;
	return;
}

int func_66(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, float fParam4) // Position - 0x3813 Hash - 0x5AD1F9FD ^0x42FC5FEC
{
	Hash interactionAnimHash;

	switch (func_69(hParam0, -949239683))
	{
		case -1565009253:
			if (!bParam1)
			{
				interactionAnimHash = 1254219723;
			
				if (bParam2)
					interactionAnimHash = -2077441721;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case -1273369295:
			if (!bParam1)
			{
				interactionAnimHash = -27851152;
			
				if (bParam2)
					interactionAnimHash = -1340223099;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case -1229959999:
			if (!bParam1)
			{
				interactionAnimHash = 1159762194;
			
				if (bParam2)
					interactionAnimHash = -1791047090;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case -1050374492:
			if (!bParam1)
			{
				interactionAnimHash = 343713021;
			
				if (bParam2)
					interactionAnimHash = 760057945;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case -873135685:
			if (!bParam1)
			{
				interactionAnimHash = -1418730365;
			
				if (bParam2)
					interactionAnimHash = -1570312122;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case -164980960:
			if (!bParam1)
			{
				interactionAnimHash = -138141811;
			
				if (bParam2)
					interactionAnimHash = 2000759837;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 10252101:
			if (!bParam1)
			{
				interactionAnimHash = -1246302402;
			
				if (bParam2)
					interactionAnimHash = -487508500;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 24248412:
			if (!bParam1)
			{
				interactionAnimHash = 1014486005;
			
				if (bParam2)
					interactionAnimHash = 416212934;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 82200319:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@NEWSPAPER_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 733893097:
			if (!bParam1)
			{
				interactionAnimHash = 436157482;
			
				if (bParam2)
					interactionAnimHash = 1972630951;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 871191033:
			if (!bParam1)
			{
				interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_INTRO");
			
				if (bParam2)
					interactionAnimHash = joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_BASE");
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 1513351077:
			if (!bParam1)
			{
				interactionAnimHash = 889797228;
			
				if (bParam2)
					interactionAnimHash = -1043439814;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 1712126263:
			if (!bParam1)
			{
				interactionAnimHash = 1589555562;
			
				if (bParam2)
					interactionAnimHash = -1424266966;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	
		case 1894156335:
			if (!bParam1)
			{
				interactionAnimHash = 1801769345;
			
				if (bParam2)
					interactionAnimHash = 374699583;
			
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), hParam0, interactionAnimHash, 1, iParam3, fParam4);
				return 1;
			}
			break;
	}

	return 0;
}

BOOL func_67(int iParam0) // Position - 0x3B2F Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_189(iParam0);
}

BOOL func_68(Hash hParam0) // Position - 0x3B3D Hash - 0xBFE07B66 ^0x7CF1C952
{
	return func_31(hParam0, 566155764) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Map"));
}

int func_69(Hash hParam0, int iParam1) // Position - 0x3B5F Hash - 0x7A1C2599 ^0xFF9B5634
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

BOOL func_70(int iParam0) // Position - 0x3BA9 Hash - 0xAD766E45 ^0x99868738
{
	if (iParam0 == 82200319)
		return 1;

	return 0;
}

int func_71() // Position - 0x3BC0 Hash - 0xA8AC36F9 ^0xA8AC36F9
{
	return Global_40.f_4283;
}

void func_72(var uParam0) // Position - 0x3BCE Hash - 0x50D621B0 ^0x9B104FE8
{
	if (uParam0->f_131 > 0)
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);

	return;
}

BOOL func_73(Hash hParam0, int iParam1) // Position - 0x3BEE Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_74(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3C08 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_42(iParam0))
		return;

	num = func_84(iParam0);

	if (bParam1)
	{
		func_190(iParam0, 4);
		func_191(num, true);
		func_192(num, true);
	}
	else
	{
		func_193(iParam0, 4);
		func_192(num, false);
	}

	return;
}

BOOL func_75(var uParam0, var uParam1) // Position - 0x3C57 Hash - 0xCC356685 ^0xBBDA1B1
{
	BOOL flag;

	if (func_24(*uParam1, uParam0->f_130))
		flag = !func_31(*uParam1, 1051234725);

	if (func_76(*uParam1, uParam0->f_130))
		flag = func_31(*uParam1, 601161511);

	return flag;
}

BOOL func_76(Hash hParam0, int iParam1) // Position - 0x3C9A Hash - 0xDB76EF08 ^0x45A19FF7
{
	switch (func_69(hParam0, -949239683))
	{
		case -1565009253:
			if (iParam1 == -498826883)
				return true;
			break;
	
		case -1273369295:
			if (iParam1 == -277062447)
				return true;
			break;
	
		case -1229959999:
			if (iParam1 == 391077233)
				return true;
			break;
	
		case -1050374492:
			if (iParam1 == 1010970643)
				return true;
			break;
	
		case -873135685:
			if (iParam1 == -180517239)
				return true;
			break;
	
		case -164980960:
			if (iParam1 == 1641476577)
				return true;
			break;
	
		case 10252101:
			if (iParam1 == -358392831)
				return true;
			break;
	
		case 24248412:
			if (iParam1 == -2082844535)
				return true;
			break;
	
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIPPED_BASE"))
				return true;
			break;
	
		case 733893097:
			if (iParam1 == -1222090749)
				return true;
			break;
	
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_FLIPPED_BASE"))
				return true;
			break;
	
		case 1513351077:
			if (iParam1 == 382283982)
				return true;
			break;
	
		case 1712126263:
			if (iParam1 == 2110129666)
				return true;
			break;
	
		case 1894156335:
			if (iParam1 == 690458252)
				return true;
			break;
	}

	return false;
}

BOOL func_77(int iParam0, BOOL bParam1) // Position - 0x3DF6 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_42(iParam0))
		return false;

	return !func_194(iParam0, 4);
}

void func_78(int iParam0, BOOL bParam1) // Position - 0x3E1B Hash - 0x46B3F171 ^0x46B3F171
{
	if (func_42(*iParam0))
		func_74(*iParam0, bParam1, true);

	return;
}

void func_79(var uParam0, var uParam1) // Position - 0x3E37 Hash - 0xE59010A2 ^0xE59010A2
{
	func_78(&Global_36622[3], func_75(uParam0, uParam1));
	return;
}

BOOL func_80(Hash hParam0, int iParam1) // Position - 0x3E51 Hash - 0xDB76EF08 ^0x8DABBCD3
{
	switch (func_69(hParam0, -949239683))
	{
		case -1565009253:
			if (iParam1 == 961781775)
				return true;
			break;
	
		case -1273369295:
			if (iParam1 == 527714016)
				return true;
			break;
	
		case -1229959999:
			if (iParam1 == 1942589213)
				return true;
			break;
	
		case -1050374492:
			if (iParam1 == 557096072)
				return true;
			break;
	
		case -873135685:
			if (iParam1 == 1275147506)
				return true;
			break;
	
		case -164980960:
			if (iParam1 == 251586723)
				return true;
			break;
	
		case 10252101:
			if (iParam1 == 687211918)
				return true;
			break;
	
		case 24248412:
			if (iParam1 == 224513019)
				return true;
			break;
	
		case 82200319:
			if (iParam1 == joaat("DOCUMENT_INSPECT@NEWSPAPER_FLIP_TO_BACK"))
				return true;
			break;
	
		case 733893097:
			if (iParam1 == 88279163)
				return true;
			break;
	
		case 871191033:
			if (iParam1 == joaat("DOCUMENT_INSPECT@Paper_D2_H32_Rolled_FLIP_TO_BACK"))
				return true;
			break;
	
		case 1513351077:
			if (iParam1 == 676223146)
				return true;
			break;
	
		case 1712126263:
			if (iParam1 == 699685523)
				return true;
			break;
	
		case 1894156335:
			if (iParam1 == 554041952)
				return true;
			break;
	}

	return false;
}

void func_81(var uParam0) // Position - 0x3FAD Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_82(var uParam0, var uParam1) // Position - 0x3FB5 Hash - 0x35BD1C29 ^0x7E1E27E7
{
	int i;
	int j;
	int num;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(hLocal_21))
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(hLocal_21);

	func_12(uParam0);
	hLocal_21 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hLocal_21, "Generic");
	num = 0;
	iLocal_19 = -1;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(uParam1->[0 /*9*/], uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case 1410847083:
					func_195(&(uParam0->f_5), num, 0, true, false);
					num = num + 1;
					break;
			
				case 1724675796:
					func_195(&(uParam0->f_5), num, 1, true, false);
					num = num + 1;
					break;
			
				default:
					switch (uParam1->[0 /*9*/])
					{
						case joaat("document_mary_beth_journal"):
							if (func_71() == 2)
								if (i < 3)
									func_196(&(uParam0->f_5), j, &num, 2, true);
							else if (func_71() == 6 || func_71() == 3)
								func_196(&(uParam0->f_5), j, &num, 2, true);
							else if (i < 2)
								func_196(&(uParam0->f_5), j, &num, 2, true);
						
							TXD::REQUEST_STREAMED_TXD(hLocal_20, false);
							break;
					
						default:
							func_196(&(uParam0->f_5), j, &num, 2, true);
							break;
					}
					break;
			}
		}
	}

	return;
}

void func_83(var uParam0) // Position - 0x4114 Hash - 0x54785B85 ^0x7C205700
{
	int i;
	int j;

	iLocal_19 = -1;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case 1410847083:
				case 1724675796:
					break;
			
				default:
					if (!uParam0->f_5.f_2[j /*5*/].f_3)
					{
						iLocal_19 = iLocal_19 + 1;
						uParam0->f_5.f_2[j /*5*/].f_4 = iLocal_19;
					}
				
					uParam0->f_5.f_2[j /*5*/].f_3 = 1;
					break;
			}
		}
	}

	return;
}

int func_84(int iParam0) // Position - 0x41A4 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_85(var uParam0, Hash hParam1) // Position - 0x41AE Hash - 0x37667EFC ^0x5222FD8F
{
	Hash entryId;

	entryId = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, "Generic");

	if (func_31(hParam1, 1104960349))
	{
		func_197(uParam0, hParam1);
	}
	else if (func_31(hParam1, 1989861793))
	{
		func_198(uParam0, hParam1);
	}
	else if (func_31(hParam1, -772152977))
	{
		func_199(uParam0, hParam1);
	}
	else if (func_31(hParam1, -2081717885))
	{
		func_200(uParam0, hParam1);
	}
	else if (func_69(hParam1, 1224357681) == joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"))
	{
		func_201(uParam0, hParam1);
	}
	else if (func_31(hParam1, -1227898937))
	{
		uParam0->f_135 = 0;
		func_202(uParam0, hParam1);
	}
	else
	{
		func_203(uParam0, hParam1);
	}

	return;
}

BOOL func_86(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x427C Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_113() == -1)
	{
		if (func_204(hParam0) && func_205(hParam0))
		{
			func_206(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_87(Hash hParam0, var uParam1, int iParam2) // Position - 0x42D3 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_207(hParam0, uParam1);
	unk = { func_208(hParam0, false, true) };
	num = func_209(hParam0, &unk, false, false);
	num2 = func_210(hParam0, false);

	if (num > 1 && !func_211() && num2 + iParam2 >= num)
		if (func_31(hParam0, -2051813666))
			func_96(583, true);
		else
			func_96(582, false);

	if (func_212(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_88(Hash hParam0, BOOL bParam1) // Position - 0x436F Hash - 0xB66258E7 ^0x1C70D810
{
	if (bParam1)
		return;

	switch (func_69(hParam0, -949239683))
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

int func_89(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x441B Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_73(hParam0, 0))
		return 0;

	num = func_106(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_213(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_214(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_215(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_90(Hash hParam0) // Position - 0x449D Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_113() != -1)
		return false;

	return func_91(hParam0) != 0;
}

Hash func_91(Hash hParam0) // Position - 0x44B9 Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_216(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_217(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_92(Hash hParam0) // Position - 0x44F5 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_93(Hash hParam0) // Position - 0x4503 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_216(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_92(collectableItemHash))
			if (func_61(func_217(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_94(Hash hParam0) // Position - 0x4550 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_218(48);
	func_219(false, -1);
	return;
}

BOOL func_95(int iParam0) // Position - 0x456B Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_113() != -1)
		return false;

	return func_126(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_96(int iParam0, BOOL bParam1) // Position - 0x458E Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_220(iParam0, &num, &num2);

	if (!func_221(iParam0, num, num2, bParam1))
		return;

	func_222(num, num2);
	return;
}

int func_97(Hash hParam0) // Position - 0x45BB Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_98(Hash hParam0) // Position - 0x45CE Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_99() // Position - 0x45E1 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_100(int iParam0) // Position - 0x4600 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_113() != -1)
		return false;

	return func_126(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_101(Hash hParam0) // Position - 0x4623 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_113() != -1)
		return false;

	if (!func_47(hParam0))
		return false;

	return func_223(Global_1347702[hParam0 /*49*/].f_15);
}

int func_102() // Position - 0x4653 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_61(func_224(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_103(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x4688 Hash - 0x2D6CF941 ^0xE66CE76D
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
		
			if (func_99() && func_101(38) || func_95(38))
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
			if (func_99() && func_101(39) || func_95(39))
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
			if (func_99() && func_101(41) || func_95(41))
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
			num = func_225(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_99() && func_101(49) || func_95(49))
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
			num = func_225(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_226(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_227(iParam0, hash, hash2);
	func_228(iParam0, hash, unk, str5, str4);
	func_229(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_230(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_231(iParam0, hash, hash2, iParam6);
	func_232(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_104(int iParam0) // Position - 0x4AC3 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_105(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x4ADA Hash - 0xD806FABF ^0x48C0668E
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
		
			if (func_99() && func_101(38) || func_95(38))
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
		
			if (func_99() && func_101(39) || func_95(39))
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
		
			if (func_99() && func_101(49) || func_95(49))
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
		if (func_99() && func_101(38) || func_95(38))
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
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_235(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_98(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_99() && func_101(39) || func_95(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_99() && func_101(49) || func_95(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

int func_106(Hash hParam0) // Position - 0x5086 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_73(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_107(Hash hParam0, int iParam1) // Position - 0x50B1 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_73(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_108(int iParam0) // Position - 0x50D0 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_236(iParam0))
		return false;

	return func_237(iParam0);
}

void func_109(int iParam0) // Position - 0x50EC Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_236(iParam0))
		return;

	func_238(iParam0);
	func_239(iParam0);
	return;
}

Hash func_110(Hash hParam0) // Position - 0x510D Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_73(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_111(Hash hParam0, BOOL bParam1) // Position - 0x5138 Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_73(hash, 0))
		if (bParam1)
			if (func_240(hash) || func_241(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_112(Hash hParam0, BOOL bParam1) // Position - 0x52BE Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_73(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

BOOL func_113() // Position - 0x52EA Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_114(Hash hParam0) // Position - 0x52F8 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_242(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_115(BOOL bParam0) // Position - 0x5332 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_113() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_215(bParam0));
}

BOOL func_116(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x5350 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_208(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_243(398 + i, 1);
		
			if (func_244(hParam0, &unk, hash, false))
			{
				if (func_245(hParam0, &unk6, hash))
				{
					unk28 = { func_246(hParam0, unk, hash, false) };
					func_247(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_115(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_117(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_248(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_117(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x54A2 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_119(hParam0))
		return false;

	if (!func_115(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_118(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x54DD Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_112(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_113() == -1)
		{
			func_114(weaponHash);
		
			if (hParam1 == 1248274121)
				func_249(weaponHash);
		}
	
		if (!func_212(hParam0, &unk, 1, false, false))
		{
			func_206(hParam0, 1, false, uParam2, hParam1);
			num = func_250(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_116(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_116(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_116(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_251())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_252(weaponHash))
				{
					func_116(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_116(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_253(Global_35, 2, false, true);
			
				if (func_242(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_108(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_242(weaponHash2) && func_108(24))
					if (!func_116(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_116(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_116(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_96(480, true);

	return true;
}

BOOL func_119(Hash hParam0) // Position - 0x56E9 Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_120(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x56F7 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_119(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_242(weaponTypeFromAmmoType))
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

	if (func_61(joaat("provision_trinket_crow_beak"), 1, false) && hParam2 == -897553835)
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
		func_157(func_254(hParam0), func_156(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_113() == -1)
			if (func_126(Global_1835011[14 /*74*/].f_1, true))
				func_96(416, false);

	if (num == 0)
		return false;

	if (func_115(false))
	{
		if (func_117(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_162(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_121(Hash hParam0) // Position - 0x5840 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_255() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_256(Global_35, hParam0, &unk))
			func_141(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_147();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_147();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_145();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_143();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_147();
			break;
	}

	return;
}

void func_122(Hash hParam0) // Position - 0x5947 Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_258();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_145();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_257();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_143();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_146();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_144();
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
			func_147();
			break;
	}

	return;
}

struct<2> func_123(int iParam0) // Position - 0x5B32 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_124(var uParam0, var uParam1, int iParam2) // Position - 0x5B44 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_125(int iParam0, int iParam1) // Position - 0x5B54 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_126(int iParam0, BOOL bParam1) // Position - 0x5B6A Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_259(iParam0))
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

void func_127(Hash hParam0) // Position - 0x5B9B Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_31(hParam0, -2017733358);

	if (func_260() < 3)
		if (flag)
			if (func_262(func_261(hParam0), hParam0))
				func_157(79, func_156(func_261(hParam0)), true);
			else
				func_157(78, func_156(func_261(hParam0)), true);
		else
			func_157(80, func_156(func_263(hParam0)), true);

	return;
}

BOOL func_128() // Position - 0x5C08 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_264(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_264(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_264(joaat("document_arthur_high_bounty_1"), 400) || func_264(joaat("document_arthur_high_bounty_2"), 400) || func_264(joaat("document_arthur_has_poster_1"), 400) || func_264(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_129(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x5C7E Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_265(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_266(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_267(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_130(Hash hParam0) // Position - 0x5CC5 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_103(43, 0, 0, joaat("exotic_stage_01"), func_272(1), false, -1, false);
			func_273(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_103(39, 0, 0, 0, 0, false, 1, false);
			func_105(39, 0, 0, 0, 0, -1, 0);
			func_269(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_103(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_105(51, 0, 0, 0, 0, -1, 0);
			func_268(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_103(43, 0, 0, joaat("exotic_stage_02"), func_272(2), false, -1, false);
			func_273(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_103(43, 0, 0, joaat("exotic_stage_03"), func_272(4), false, -1, false);
			func_273(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_103(49, 0, 0, 0, 0, false, 1, false);
			func_105(49, 0, 0, 0, 0, -1, 0);
			func_271(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_103(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_105(51, 0, 0, 0, 0, -1, 0);
			func_268(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_103(41, 0, 0, 0, 0, false, 1, false);
			func_105(41, 0, 0, 0, 0, -1, 0);
			func_270(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_103(43, 0, 0, joaat("exotic_stage_05"), func_272(16), false, -1, false);
			func_273(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_103(43, 0, 0, joaat("exotic_stage_04"), func_272(8), false, -1, false);
			func_273(8);
			break;
	}

	return;
}

void func_131(Hash hParam0) // Position - 0x5E5B Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_274() == 1)
	{
		if (func_95(39))
		{
			func_96(342, false);
		}
		else
		{
			func_96(343, false);
			func_269(1);
		}
	}

	if (func_274() >= 30)
		func_96(344, false);

	func_103(39, 0, 0, 0, 0, false, -1, false);
	func_105(39, 0, 0, func_274(), 30, 1, 0);
	return;
}

void func_132(Hash hParam0) // Position - 0x5EBA Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_275() == 1)
	{
		if (func_95(49))
		{
			func_96(409, false);
		}
		else
		{
			func_96(410, false);
			func_271(1);
		}
	}

	if (func_275() >= 10)
		func_96(411, false);

	func_103(49, 0, 0, 0, 0, false, -1, false);
	func_105(49, 0, 0, func_275(), 10, 1, 0);
	return;
}

void func_133(Hash hParam0) // Position - 0x5F19 Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_96(438, false);
			func_276(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_103(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_105(51, 0, 0, num, func_225(joaat("taxidermy_order_05"), 20), 1, 0);
			func_268(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_276(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_103(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_105(51, 0, 0, num, func_225(joaat("taxidermy_order_04"), 20), 1, 0);
			func_268(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_276(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_103(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_105(51, 0, 0, num, func_225(joaat("taxidermy_order_03"), 20), 1, 0);
			func_268(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_96(437, false);
			func_96(440, false);
			func_276(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_103(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_105(51, 0, 0, num, func_225(joaat("taxidermy_order_01"), 20), 1, 0);
			func_268(1);
			func_277(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_276(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_103(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_105(51, 0, 0, num, func_225(joaat("taxidermy_order_02"), 20), 1, 0);
			func_268(8);
			break;
	
		default:
			func_96(439, false);
			break;
	}

	return;
}

void func_134() // Position - 0x6107 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_135(Hash hParam0, int iParam1) // Position - 0x612B Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_113() == -1)
	{
		if (!func_95(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_96(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_96(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_96(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_96(400, false);
		}
		else if (func_31(hParam0, 412399755))
		{
			func_278(joaat("exotic_stage_01"));
		
			if (func_279() == 0)
			{
				func_219(false, 10);
				num2 = func_280(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_281(hParam0) < func_282(hParam0))
					{
						func_103(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_105(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_95(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_96(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_96(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_96(401, false);
		}
		else if (func_31(hParam0, 709057512))
		{
			func_278(joaat("exotic_stage_02"));
		
			if (func_279() == 1)
			{
				func_219(false, 10);
				num2 = func_280(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_281(hParam0) < func_282(hParam0))
					{
						func_103(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_105(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_95(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_96(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_96(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_96(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_96(398, false);
		}
		else if (func_31(hParam0, -1478961327))
		{
			func_278(joaat("exotic_stage_03"));
		
			if (func_279() == 2)
			{
				func_219(false, 10);
				num2 = func_280(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_283(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_284(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_218(48);
					}
				
					if (func_281(hParam0) < func_282(hParam0))
					{
						func_103(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_105(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_281(hParam0) < func_282(hParam0))
					{
						func_103(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_105(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_95(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_96(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_96(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_96(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_96(406, false);
		}
		else if (func_31(hParam0, -1238404098))
		{
			func_278(joaat("exotic_stage_04"));
		
			if (func_279() == 3)
			{
				func_219(false, 10);
				num2 = func_280(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_281(hParam0) < func_282(hParam0))
					{
						func_103(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_105(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_95(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_96(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_96(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_96(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_96(403, false);
		}
		else if (func_31(hParam0, 1160548794))
		{
			func_278(joaat("exotic_stage_05"));
		
			if (func_279() == 4)
			{
				func_219(false, 10);
				num2 = func_280(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_281(hParam0) < func_282(hParam0))
					{
						func_103(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_105(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_136(Hash hParam0) // Position - 0x6644 Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_283(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_284(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_218(48);
		}
	}

	return;
}

void func_137(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x6684 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_61(func_285(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_286(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_287(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_138(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x66E4 Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_113() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_129(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_129(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_129(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_129(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_129(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_129(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_129(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_129(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_129(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_288())
				func_129(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_129(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_129(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_129(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_129(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_129(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_129(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_129(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_129(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_129(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_129(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_129(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_129(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_129(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_129(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_129(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_129(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_129(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_139(Hash hParam0) // Position - 0x6ABC Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_95(41))
		func_96(363, false);
	else
		func_96(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_289(joaat("legendary_fish_02"));
			func_290(joaat("legendary_fishing_spot_02"));
			func_291(joaat("legendary_fishing_spot_02"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_289(joaat("legendary_fish_06"));
			func_290(joaat("legendary_fishing_spot_06"));
			func_291(joaat("legendary_fishing_spot_06"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_289(joaat("legendary_fish_13"));
			func_290(joaat("legendary_fishing_spot_13"));
			func_291(joaat("legendary_fishing_spot_13"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_289(joaat("legendary_fish_03"));
			func_290(joaat("legendary_fishing_spot_03"));
			func_291(joaat("legendary_fishing_spot_03"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_289(joaat("legendary_fish_08"));
			func_290(joaat("legendary_fishing_spot_08"));
			func_291(joaat("legendary_fishing_spot_08"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_289(joaat("legendary_fish_12"));
			func_290(joaat("legendary_fishing_spot_12"));
			func_291(joaat("legendary_fishing_spot_12"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_289(joaat("legendary_fish_05"));
			func_290(joaat("legendary_fishing_spot_05"));
			func_291(joaat("legendary_fishing_spot_05"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_289(joaat("legendary_fish_04"));
			func_290(joaat("legendary_fishing_spot_04"));
			func_291(joaat("legendary_fishing_spot_04"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_289(joaat("legendary_fish_14"));
			func_290(joaat("legendary_fishing_spot_14"));
			func_291(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_289(joaat("legendary_fish_09"));
			func_290(joaat("legendary_fishing_spot_09"));
			func_291(joaat("legendary_fishing_spot_09"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_289(joaat("legendary_fish_07"));
			func_290(joaat("legendary_fishing_spot_07"));
			func_291(joaat("legendary_fishing_spot_07"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_289(joaat("legendary_fish_01"));
			func_290(joaat("legendary_fishing_spot_01"));
			func_291(joaat("legendary_fishing_spot_01"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_289(joaat("legendary_fish_11"));
			func_290(joaat("legendary_fishing_spot_11"));
			func_291(joaat("legendary_fishing_spot_11"));
			func_219(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_289(joaat("legendary_fish_10"));
			func_290(joaat("legendary_fishing_spot_10"));
			func_291(joaat("legendary_fishing_spot_10"));
			func_219(false, 10);
			break;
	}

	return;
}

void func_140(Hash hParam0, var uParam1) // Position - 0x6D3B Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_292(hParam0, uParam1, &unk);
	return;
}

int func_141(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x6D4D Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_208(hParam1, true, false) };
		iParam3 = func_293(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_295(hParam1, hParam2, func_294(iParam3, 1), bParam4, bParam9))
		return 0;

	func_296(true, func_113() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_298(32768) && hParam1 != Global_1946054.f_57[func_294(iParam3, 1) /*11*/])
			{
				func_299();
				func_297(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_294(iParam3, 1) /*11*/])
				func_297(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_297(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_300(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_297(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_301(0);
			func_302(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_297(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_142(var uParam0, BOOL bParam1) // Position - 0x6EBC Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_253(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_253(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_303("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_304(&unk, i, num, num2))
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
	
		func_9(num);
	
		if (*uParam0 != 0)
			return true;
	}

	return false;
}

void func_143() // Position - 0x6F85 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_144() // Position - 0x6F9F Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_145() // Position - 0x6FD4 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_146() // Position - 0x6FF0 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_147() // Position - 0x700A Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_305();
	func_306();
	func_307();
	return;
}

void func_148(int iParam0, int iParam1, BOOL bParam2) // Position - 0x7021 Hash - 0x968DA278 ^0x42BB4D8F
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

void func_149(int iParam0, BOOL bParam1) // Position - 0x73F8 Hash - 0x922C415B ^0x750A900A
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
	func_233(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_150(int iParam0) // Position - 0x750E Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_151(int iParam0) // Position - 0x7529 Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_152(int iParam0) // Position - 0x7544 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_153(int iParam0) // Position - 0x755F Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_154(int iParam0) // Position - 0x757A Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_155(int iParam0) // Position - 0x7595 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_156(Hash hParam0) // Position - 0x75B0 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_73(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_157(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x75C9 Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_220(iParam0, &num, &num2);

	if (!func_221(iParam0, num, num2, bParam2))
		return;

	if (!func_308(iParam0, 1024))
		return;

	func_222(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_158(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7629 Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_220(iParam0, &num, &num2);

	if (!func_221(iParam0, num, num2, bParam2))
		return;

	if (!func_308(iParam0, 1024))
		return;

	func_222(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_159() // Position - 0x76A4 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_216())
		return func_160();

	endRange = func_216() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_216(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_309(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_217(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_160() // Position - 0x771E Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_216());
	return func_217(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_161(var uParam0) // Position - 0x7741 Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_162(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x7796 Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_73(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_208(hParam0, false, true) };
	unk6 = { func_246(hParam0, unk, unk.f_4, false) };
	return func_310(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_163(Hash hParam0) // Position - 0x77E5 Hash - 0x90E372CB ^0xEE55522E
{
	int num;
	Hash hash;
	Hash hash2;

	if (func_113() != -1)
		return;

	switch (func_110(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_297(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			num = func_312(hParam0);
		
			if (func_313(num))
				func_314(num, num >= 0 && num <= 5, true);
			else
				func_297(30, hParam0, 0, 0, false);
		
			if (func_315() == -2125499975 || func_315() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_297(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_315() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_297(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_316(-525676072, false))
				if (func_317(-525676072, &hash))
					func_297(33, hash, 0, 0, false);
		
			func_297(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_311(81053684, false) <= 0)
				func_297(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_318(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_141(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_109(24);
	
		if (func_142(&hash2, false))
			func_116(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_164(Hash hParam0) // Position - 0x79B7 Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_31(hParam0, 943695443))
		func_319(0, hParam0);
	else if (func_31(hParam0, -2096528786))
		func_319(1, hParam0);
	else if (func_31(hParam0, -1094167013))
		func_319(2, hParam0);
	else if (func_31(hParam0, 1936654645))
		func_319(3, hParam0);
	else if (func_31(hParam0, 1306489306))
		func_319(4, hParam0);
	else if (func_31(hParam0, 435762317))
		func_319(5, hParam0);
	else if (func_31(hParam0, 1259363210))
		func_319(6, hParam0);
	else if (func_31(hParam0, 881398259))
		func_319(7, hParam0);
	else if (func_31(hParam0, -541549214))
		func_319(8, hParam0);
	else if (func_31(hParam0, 130796156))
		func_319(-1, hParam0);

	return;
}

int func_165(Hash hParam0, int iParam1) // Position - 0x7AAD Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_320(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_321(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_166(Hash hParam0) // Position - 0x7AD6 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_73(hParam0, 0))
		return unk;

	if (func_31(hParam0, -305066475))
		if (func_113() == -1)
			if (func_31(hParam0, -537818634))
				return func_322(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_322(joaat("deadeye_items"));
	else if (func_31(hParam0, -537818634))
		return func_322(joaat("medicine_items"));

	if (func_31(hParam0, 2084895747))
		return func_322(joaat("lock_breaker_items"));

	return unk3;
}

void func_167(Hash hParam0) // Position - 0x7B6A Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_113() == -1)
				if (func_126(Global_1835011[4 /*74*/].f_1, true))
					func_96(109, true);
			break;
	}

	return;
}

void func_168(Hash hParam0, int iParam1) // Position - 0x7BA3 Hash - 0x3053C451 ^0x5C0EDAF0
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_323(0));
	func_326(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_325(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_169(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x7BE3 Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_73(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_327())
	{
		func_328(hParam0, iParam1, bParam2, bParam4);
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
		else if (bParam2 && func_107(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_106(hParam0);
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
	else if (!func_330(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_331(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_156(hParam0)), num), num5);

	if (iParam1 == 1 || func_31(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_156(hParam0));

	func_326(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

int func_170(var uParam0, var uParam1) // Position - 0x7E38 Hash - 0xF1B2F4A1 ^0x49A647D2
{
	int i;
	int num;
	var unk;

	if (func_303("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), joaat("SLOTID_SATCHEL"), false))
	{
		uParam0->f_145 = 1;
		i = 0;
		num = 0;
	
		if (uParam0->f_1 > 0)
		{
			unk.f_9 = joaat("SLOTID_NONE");
		
			for (i = uParam0->f_1 - 1; i >= 0; i = i + -1)
			{
				if (!func_304(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
				{
				}
				else
				{
					if (uParam1 == unk.f_4)
					{
						uParam0->f_1.f_2 = i;
						uParam0->f_1.f_3 = num;
					}
				
					if (Global_1935689.f_9439 == 0)
					{
						if (func_332(&unk, 0, true))
							num = num + 1;
					
						if (num >= 16)
							return 1;
					}
				}
			}
		
			return 1;
		}
	}

	return 0;
}

BOOL func_171(var uParam0, var uParam1) // Position - 0x7EF0 Hash - 0x49B557A3 ^0x6DB1C669
{
	var unk;
	int i;
	BOOL flag;

	if (uParam0->f_1.f_2 + 1 >= uParam0->f_1)
	{
		uParam1->[2 /*9*/] = 0;
		return false;
	}

	if (Global_36634)
		return false;

	unk.f_9 = joaat("SLOTID_NONE");
	i = 0;
	flag = false;

	for (i = uParam0->f_1.f_2 + 1; i <= uParam0->f_1 - 1; i = i + 1)
	{
		if (func_304(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_333(uParam1->[0 /*9*/], unk.f_4))
			{
				if (!flag)
				{
					uParam1->[1 /*9*/] = unk.f_4;
					flag = true;
				}
				else
				{
					uParam0->f_150 = 0;
					return flag;
				}
			}
		}
	}

	if (!flag)
		uParam1->[1 /*9*/] = 0;

	return flag;
}

void func_172(int iParam0, Hash hParam1) // Position - 0x7F9E Hash - 0xB96CAE86 ^0xDAFA9881
{
	if (!func_31(hParam1, 747873593) && !func_31(hParam1, joaat("CI_TAG_FOLDER_LETTERS")) && !func_31(hParam1, joaat("CI_TAG_FOLDER_NOTES")))
		return;

	if (hParam1 != Global_1911894[iParam0 /*6*/])
	{
		Global_1911894[iParam0 /*6*/].f_1 = 3;
		Global_1911894[iParam0 /*6*/] = hParam1;
		Global_1911894[iParam0 /*6*/].f_5 = 0;
	}

	return;
}

BOOL func_173(var uParam0, var uParam1) // Position - 0x800B Hash - 0x3520A53 ^0xA8B698E5
{
	var unk;
	int i;
	int num;
	int num2;
	BOOL flag;

	unk.f_9 = joaat("SLOTID_NONE");
	i = 0;
	num = 16 - uParam0->f_1.f_3;

	if (Global_36634)
		return false;

	flag = false;

	for (i = uParam0->f_1.f_2 - 1; i >= 0; i = i + -1)
	{
		if (Global_1935689.f_9439 == 0)
		{
			num2 = num2 + 1;
		
			if (num2 >= num)
				return false;
		}
	
		if (func_304(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_333(uParam1->[0 /*9*/], unk.f_4))
			{
				if (!flag)
				{
					uParam1->[2 /*9*/] = unk.f_4;
					flag = true;
				}
				else
				{
					uParam0->f_151 = 0;
					return flag;
				}
			}
		}
	}

	if (!flag)
		uParam1->[2 /*9*/] = 0;

	return flag;
}

void func_174(var uParam0) // Position - 0x80C2 Hash - 0x70905DA9 ^0x70905DA9
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_73(uParam0->[i /*9*/], 0))
			func_334(&uParam0->[i /*9*/]);
	}

	return;
}

void func_175(var uParam0) // Position - 0x80F4 Hash - 0xFDB128B0 ^0x6FE0DE4A
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_73(uParam0->[i /*9*/], 0))
			uParam0->[i /*9*/].f_4 = func_69(uParam0->[i /*9*/], -949239683);
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_176(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x8133 Hash - 0x92B705D3 ^0xB783F681
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

BOOL func_177(var uParam0, var uParam1) // Position - 0x8229 Hash - 0xE7E68C2A ^0xEBD68818
{
	if (uParam1->f_2)
		return true;

	if (uParam1->f_1)
	{
		return true;
	}
	else if (uParam1->f_3 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_127) && TXD::HAS_STREAMED_TXD_LOADED(uParam1->f_3))
		{
			if (!uParam1->f_2)
			{
				OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_127, uParam1->f_3, 0, 0);
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(uParam1->f_3);
			}
		
			uParam1->f_2 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}

	return true;
}

int func_178(var uParam0, var uParam1) // Position - 0x8299 Hash - 0x7D48C204 ^0x7D48C204
{
	return 0;
}

BOOL func_179(int iParam0, int iParam1) // Position - 0x82A2 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_180(Hash hParam0) // Position - 0x82B1 Hash - 0x749A091D ^0x749A091D
{
	int i;

	if (func_48(hParam0))
		return 0;

	if (func_54(hParam0, false))
	{
		func_335(hParam0);
		return 1;
	}
	else
	{
		for (i = 0; i < Global_40.f_450; i = i + 1)
		{
			if (Global_40.f_450[i] == -1)
			{
				func_335(hParam0);
				Global_40.f_450[i] = hParam0;
				Global_40.f_1094 = Global_40.f_1094 + 1;
				Global_1430257 = i;
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_181() // Position - 0x832D Hash - 0x2C13EB06 ^0x38F12C8A
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

Hash func_182(int iParam0) // Position - 0x8380 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_183(iParam0))
		return -1;

	return func_337(func_336(iParam0));
}

BOOL func_183(int iParam0) // Position - 0x83A0 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < 771;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_184() // Position - 0x83D3 Hash - 0xDFECB6AC ^0xDFECB6AC
{
	int num;
	Hash i;

	num = Global_40.f_1093;
	Global_40.f_1093 = -1;

	if (func_338(num))
	{
		for (i = 0; i < Global_1347702; i = i + 1)
		{
			if (func_47(i) && Global_1347702[i /*49*/] == num)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[i /*49*/].f_37))
				{
					func_339(i, false);
					func_341(i, func_340(i), false, false);
				}
			}
		}
	}

	return;
}

 func_185( Param0) // Position - 0x8447 Hash - 0xC9D82232 ^0xC9D82232
{
	return Param0;
}

eBlipSprite func_186(Hash hParam0, BOOL bParam1) // Position - 0x8451 Hash - 0x16E1F4C ^0xED8629A6
{
	if (hParam0 == 22 || hParam0 == 23)
		return joaat("blip_scm_dorkins");
	else if (hParam0 == 26)
		return joaat("blip_rc_calloway");
	else if (hParam0 == 30 || hParam0 == 33 || hParam0 == 36)
		return joaat("blip_rc_chain_gang");
	else if (hParam0 == 53 || hParam0 == 55)
		return joaat("blip_rc_crackpot");
	else if (hParam0 == 58)
		return joaat("blip_shop_doctor");
	else if (hParam0 == 60 || hParam0 == 61)
		return joaat("blip_scm_strauss");
	else if (hParam0 == 71 || hParam0 == 74 || hParam0 == 75)
		return joaat("blip_scm_evelyn");
	else if (hParam0 == 77)
		return joaat("blip_rc_art");
	else if (hParam0 == 82 || hParam0 == 83)
		return joaat("blip_ambient_gang_leader");
	else if (hParam0 == 89)
		return joaat("blip_rc_kitty");
	else if (hParam0 == 101)
		return joaat("blip_rc_albert");
	else if (hParam0 == 115)
		return joaat("blip_scm_eagle_flies");
	else if (hParam0 == 117 || hParam0 == 118 || hParam0 == 119)
		return joaat("blip_rc_oh_brother");
	else if (hParam0 == 121)
		if (bParam1 || func_126(Global_1347702[hParam0 /*49*/].f_15, true))
			return joaat("blip_rc_obediah_hinton");
	else if (hParam0 == 127)
		return joaat("blip_rc_lightning");
	else if (hParam0 == 136)
		return joaat("blip_rc_slave_catcher");
	else if (hParam0 == 143)
		return joaat("blip_rc_odd_fellows");
	else if (hParam0 == 147)
		if (bParam1 || func_126(Global_1347702[hParam0 /*49*/].f_15, true))
			return joaat("blip_rc_war_veteran");

	if (hParam0 == 151)
		return -1176045274;

	return Global_1347702[hParam0 /*49*/].f_36;
}

void func_187(Hash hParam0, BOOL bParam1) // Position - 0x865C Hash - 0x6C273DD6 ^0x6C273DD6
{
	Global_40.f_490.f_402[hParam0] = Global_40.f_490.f_402[hParam0] - Global_40.f_490.f_402[hParam0] && bParam1;
	return;
}

BOOL func_188(Hash hParam0, int iParam1) // Position - 0x868F Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_73(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_213(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_303("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_304(&unk, i, num, num2))
			{
			}
			else if (!func_242(unk.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(unk.f_4) == hash)
			{
				func_9(num);
				return true;
			}
		}
	
		func_9(num);
	}

	return false;
}

BOOL func_189(int iParam0) // Position - 0x8737 Hash - 0xA059D395 ^0xE600C05
{
	return func_342(Global_1935496.f_27, iParam0);
}

void func_190(int iParam0, int iParam1) // Position - 0x874B Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_191(int iParam0, BOOL bParam1) // Position - 0x877E Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_194(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_192(int iParam0, BOOL bParam1) // Position - 0x87D6 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_193(int iParam0, int iParam1) // Position - 0x87FF Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_194(int iParam0, int iParam1) // Position - 0x8827 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

void func_195(var uParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8848 Hash - 0x99C4924D ^0x2915B5F1
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

void func_196(var uParam0, int iParam1, var uParam2, Hash hParam3, BOOL bParam4) // Position - 0x88E1 Hash - 0x29EF7F8D ^0x44ED5AB7
{
	var unk;

	if (*uParam2 >= 24)
		return;

	if (!uParam0->f_2[iParam1 /*5*/].f_3)
	{
		iLocal_19 = iLocal_19 + 1;
		uParam0->f_2[iParam1 /*5*/].f_4 = iLocal_19;
	}

	uParam0->f_2[iParam1 /*5*/].f_3 = 1;
	TEXT_LABEL_ASSIGN_STRING(&unk, "textField", 16);
	TEXT_LABEL_APPEND_INT(&unk, *uParam2, 16);
	uParam0->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[*uParam2], "text", *uParam0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_64[*uParam2], "style", hParam3);
	TEXT_LABEL_ASSIGN_STRING(&unk, "divider", 16);
	TEXT_LABEL_APPEND_INT(&unk, *uParam2, 16);
	uParam0->f_89[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_63, &unk);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_89[*uParam2], "isVisible", bParam4);
	*uParam2 = *uParam2 + 1;
	return;
}

void func_197(var uParam0, Hash hParam1) // Position - 0x89A8 Hash - 0x7799F092 ^0x38A0024A
{
	int i;
	int j;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_195(&(uParam0->f_5), 1, 2, true, false);
					break;
			
				case -139224928:
					func_195(&(uParam0->f_5), 4, 1, true, false);
					break;
			
				case -29447330:
					func_195(&(uParam0->f_5), 5, 2, true, false);
					break;
			
				case 159464507:
					func_195(&(uParam0->f_5), 6, 1, true, false);
					break;
			
				case 276123595:
					func_195(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1175698187:
					func_195(&(uParam0->f_5), 7, 2, false, false);
					break;
			
				case 1410847083:
					func_195(&(uParam0->f_5), 0, 0, true, false);
					break;
			
				case 1724675796:
					func_195(&(uParam0->f_5), 2, 1, true, false);
					break;
			}
		}
	}

	return;
}

void func_198(var uParam0, Hash hParam1) // Position - 0x8AB2 Hash - 0xF209FECA ^0xC3164B84
{
	int i;
	int j;
	int num;

	num = 0;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_195(&(uParam0->f_5), num, 2, true, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_195(&(uParam0->f_5), num, 0, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

void func_199(var uParam0, Hash hParam1) // Position - 0x8B4F Hash - 0x7799F092 ^0x38A0024A
{
	int i;
	int j;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_195(&(uParam0->f_5), 2, 3, true, false);
					break;
			
				case -29447330:
					func_195(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 276123595:
					func_195(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1410847083:
					func_195(&(uParam0->f_5), 0, 0, true, false);
					break;
			}
		}
	}

	uParam0->f_5 = hParam1;
	func_195(&(uParam0->f_5), 1, 1, true, false);
	return;
}

void func_200(var uParam0, Hash hParam1) // Position - 0x8C17 Hash - 0xF209FECA ^0xC3164B84
{
	int i;
	int j;
	int num;

	num = 0;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (hParam1)
			{
				case -975275394:
				case -670753077:
				case -530731136:
				case -284144411:
				case 333354629:
				case 640727849:
					switch (uParam0->f_5.f_2[j /*5*/])
					{
						case -641080715:
							func_195(&(uParam0->f_5), num, 5, false, func_31(hParam1, -1804424566));
							num = num + 1;
							break;
					
						case 276123595:
							func_195(&(uParam0->f_5), num, 5, false, false);
							num = num + 1;
							break;
					
						case 1410847083:
							func_195(&(uParam0->f_5), num, 1, true, false);
							num = num + 1;
							break;
					
						case 1724675796:
							func_195(&(uParam0->f_5), num, 6, true, false);
							num = num + 1;
							break;
					}
					break;
			
				default:
					switch (uParam0->f_5.f_2[j /*5*/])
					{
						case -641080715:
							func_195(&(uParam0->f_5), num, 2, false, false);
							num = num + 1;
							break;
					
						case 1410847083:
							func_195(&(uParam0->f_5), num, 1, true, false);
							num = num + 1;
							break;
					
						case 1724675796:
							func_195(&(uParam0->f_5), num, 3, true, false);
							num = num + 1;
							break;
					}
					break;
			}
		}
	}

	return;
}

void func_201(var uParam0, Hash hParam1) // Position - 0x8D8C Hash - 0x7799F092 ^0x38A0024A
{
	int i;
	int j;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -641080715:
					func_195(&(uParam0->f_5), 3, 0, true, false);
					break;
			
				case -139224928:
					func_195(&(uParam0->f_5), 2, 0, true, false);
					break;
			
				case -29447330:
					func_195(&(uParam0->f_5), 5, 3, true, false);
					break;
			
				case 276123595:
					func_195(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 852595847:
					func_195(&(uParam0->f_5), 7, 3, true, false);
					break;
			
				case 1175698187:
					func_195(&(uParam0->f_5), 6, 3, true, false);
					break;
			
				case 1410847083:
					func_195(&(uParam0->f_5), 0, 1, true, false);
					break;
			
				case 1488412754:
					func_195(&(uParam0->f_5), 8, 3, true, false);
					break;
			
				case 1724675796:
					func_195(&(uParam0->f_5), 1, 0, true, false);
					break;
			}
		}
	}

	return;
}

void func_202(var uParam0, Hash hParam1) // Position - 0x8EAC Hash - 0x2B6CE800 ^0x4C12B1B
{
	int num;
	Hash hash;
	int i;
	Hash value;
	BOOL flag;

	if (uParam0->f_135 < 0 || uParam0->f_135 >= 12)
		return;

	num = uParam0->f_135;

	if (num == 0)
	{
		switch (hParam1)
		{
			case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			case 1566650197:
			case 1767753378:
				if (func_344(func_343(3)) == 0)
					num = 0;
				else
					num = 1;
				break;
		}
	}

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");

	for (i = 0; i < 15; i = i + 1)
	{
		value = 0;
	
		if (i < uParam0->f_5.f_2[num /*5*/].f_1)
		{
			if (uParam0->f_5.f_2[num /*5*/].f_2 == 0)
			{
			}
			else if (ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(hParam1, uParam0->f_5.f_2[num /*5*/].f_2) == 0)
			{
			}
			else
			{
				value = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[num /*5*/].f_2, i);
				flag = true;
			
				if (value == joaat("NONE") || value == 0)
					flag = false;
			
				func_345(i, hash, flag, value);
			}
		}
	
		flag = true;
	
		if (value == joaat("NONE") || value == 0)
			flag = false;
	
		func_345(i, hash, flag, value);
	}

	return;
}

void func_203(var uParam0, Hash hParam1) // Position - 0x8FAA Hash - 0x7799F092 ^0x38A0024A
{
	int i;
	int j;
	var unk;

	for (j = 0; j < uParam0->f_131; j = j + 1)
	{
		for (i = 0; i < uParam0->f_5.f_2[j /*5*/].f_1; i = i + 1)
		{
			uParam0->f_5 = ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(hParam1, uParam0->f_5.f_2[j /*5*/].f_2, i);
		
			switch (uParam0->f_5.f_2[j /*5*/])
			{
				case -2016692014:
				case 1724675796:
					func_346(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -1720361947:
				case -139224928:
					func_346(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -641080715:
				case -29447330:
				case 276123595:
					func_346(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			
				case 159464507:
				case 1410847083:
					func_346(hParam1, &(uParam0->f_5), &unk, 0);
					break;
			
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_346(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			}
		}
	}

	return;
}

BOOL func_204(Hash hParam0) // Position - 0x90A4 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_106(hParam0) == joaat("WEAPON");
}

BOOL func_205(Hash hParam0) // Position - 0x90B8 Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_113() != -1)
		return false;

	if (func_107(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_212(hParam0, &unk, 1, false, false);

	return func_61(hParam0, 1, false);
}

void func_206(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0x90FC Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_106(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_112(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_241(weaponHash))
	{
		if (func_113() == -1)
			func_114(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_89(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_169(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_207(Hash hParam0, var uParam1) // Position - 0x91A3 Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_31(hParam0, 58855631))
	{
		func_347(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_208(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x91D1 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_348(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_106(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_352(hParam0, -1823706425))
			{
				unk = { func_246(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_352(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_246(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_351(bParam1) };
		
			switch (func_110(hParam0))
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
				unk = { func_246(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_349(bParam1) };
		
			if (bParam2 && func_350(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_244(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_244(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_245(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_353(unk, &unk28, bParam1, false))
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

int func_209(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x948E Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_73(hParam0, 0))
		return 0;

	if (!func_115(false))
		bParam2 = true;

	if (bParam2 || !func_354(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_215(bParam3), hParam0);
}

int func_210(Hash hParam0, BOOL bParam1) // Position - 0x94DC Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_119(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_215(bParam1), hParam0, false);
}

BOOL func_211() // Position - 0x9506 Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_113() != -1)
		return false;

	if (!func_99())
		return false;

	if (!func_126(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[2 /*74*/].f_1, true) && func_126(Global_1347702[120 /*49*/].f_15, true) && !func_126(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[37 /*74*/].f_1, true) && !func_126(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[57 /*74*/].f_1, true) && !func_126(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[26 /*74*/].f_1, true) && !func_126(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_126(Global_1835011[62 /*74*/].f_1, true) && func_126(Global_1835011[63 /*74*/].f_1, true) && !func_126(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[75 /*74*/].f_1, true) && !func_126(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_126(Global_1835011[76 /*74*/].f_1, true) && !func_126(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[40 /*74*/].f_1, true) && func_126(Global_1835011[41 /*74*/].f_1, true) && !func_126(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[62 /*74*/].f_1, true) && func_126(Global_1835011[63 /*74*/].f_1, true) && !func_126(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_126(Global_1835011[65 /*74*/].f_1, true) && func_126(Global_1835011[66 /*74*/].f_1, true) && !func_126(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_212(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x974C Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_355(&hParam0);

	if (!func_73(hParam0, 0))
		return 0;

	if (!func_115(false))
		bParam3 = true;

	if (func_204(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_349(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_244(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_245(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_350(hParam0, true))
				if (!func_244(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_245(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_356(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_209(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_354(hParam0))
		inventoryItemCountWithItemid = func_357(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_215(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

Hash func_213(Hash hParam0, int iParam1) // Position - 0x9891 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_73(hParam0, 0))
		return 0;

	num = func_106(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_31(hParam0, 1399091007))
	{
		func_292(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_214(Hash hParam0, BOOL bParam1) // Position - 0x990B Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_358(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_359(&unk, func_349(false));

	if (!func_360(&unk, &num, &num2, false))
		return 0;

	func_9(num);
	return num2;
}

int func_215(BOOL bParam0) // Position - 0x9969 Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_113() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_216() // Position - 0x99AA Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_217(Hash hParam0) // Position - 0x99BC Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_218(int iParam0) // Position - 0x99CA Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_113() != -1)
		return;

	num = func_361(iParam0);
	value = func_362(iParam0);

	if (Global_1347477.f_117 || !func_108(31) || !func_363(num))
		return;

	if (value <= 0f)
		return;

	if (func_364(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_365(num, Global_40.f_11095.f_11[num] + value, false);
	func_326(MISC::VAR_STRING(6, func_366(iParam0), value), "itemtype_textures", func_367(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_219(BOOL bParam0, int iParam1) // Position - 0x9AC9 Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_368(&Global_0, 8);

	if (!func_99() || func_113() != -1)
		return;

	func_368(&Global_0, 1);
	return;
}

void func_220(int iParam0, var uParam1, var uParam2) // Position - 0x9B0F Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_221(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x9B2B Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_369(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_370(iParam0))
		return false;

	if (func_371(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_308(iParam0, 1) || func_372(32768))
		if (!func_308(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_373())
		return false;

	return true;
}

void func_222(int iParam0, int iParam1) // Position - 0x9BCD Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_223(int iParam0) // Position - 0x9BF1 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_259(iParam0);
	return num == 3 || num == 4;
}

Hash func_224(int iParam0) // Position - 0x9C0F Hash - 0xB8EC44B7 ^0x693BD882
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

int func_225(Hash hParam0, int iParam1) // Position - 0x9CC8 Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_374(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_226(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x9CF7 Hash - 0xF20034E5 ^0x365F04E9
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_102() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_375(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_376(), 12);
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
			else if (func_274() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_377(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_274(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_225(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_378(), 13);
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
			else if (func_275() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_379(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_275(), 10);
			break;
	}

	return sParam3;
}

BOOL func_227(int iParam0, Hash hParam1, Hash hParam2) // Position - 0x9FE4 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_228(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0xA091 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_229(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0xA0BD Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_230(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0xA10C Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_380(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_61(hash, 1, false) || func_382(func_381(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_380(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_380(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_274() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_383(i)), func_383(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_377() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_383(i)), func_383(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_383(i)), func_383(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_285(iParam3, func_384(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_281(hash) - iParam7 >= func_225(iParam3, func_385(i));
				else
					flag = func_281(hash) >= func_225(iParam3, func_385(i));
			else if (hParam4 == hash)
				flag = func_281(hash) + iParam7 >= func_225(iParam3, func_385(i));
			else
				flag = func_281(hash) >= func_225(iParam3, func_385(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_387(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
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
				flag = func_275() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_389(i)), func_389(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_379() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_389(i)), func_389(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_389(i)), func_389(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_285(iParam3, func_384(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_281(hash) - iParam7 >= 1;
				else
					flag = func_390(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_390(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_391(hash)), func_391(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_231(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0xA481 Hash - 0x3C34F826 ^0xD390643D
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
		if (func_378() >= 13)
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

BOOL func_232(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xA58A Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_183(func_392(0)) && func_393(0) == 1 || func_393(0) == 8 || func_393(0) == 6)
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

int func_233(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0xA62C Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0xA6A3 Hash - 0xA17D549C ^0x1849DCBE
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

int func_235(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xA753 Hash - 0xB88D7AA5 ^0x36259347
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

BOOL func_236(int iParam0) // Position - 0xA7B4 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_237(int iParam0) // Position - 0xA7C7 Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_238(int iParam0) // Position - 0xA7F1 Hash - 0x48EBE6BD ^0x358C7E90
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

void func_239(int iParam0) // Position - 0xA82B Hash - 0x3ECC2C39 ^0xB51AFDB0
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_99() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_96(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_99() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_96(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_99() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_96(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_99() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_235("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_96(589, false);
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
			func_394(true);
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
			func_395(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_395(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_395(3);
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
		
			if (func_113() == -1)
			{
				if (!func_318(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_402(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_251())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_61(hash, 1, false))
						func_162(hash, 1, 752097756);
				
					func_141(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_396(true);
			break;
	
		case 34:
			func_397(true);
			break;
	
		case 35:
			func_398(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_399(false);
			break;
	
		case 38:
			func_400(false);
			break;
	
		case 39:
			func_401(false);
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
			func_403();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_113() == -1)
				if (!func_61(1013902307, 1, false))
					func_162(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_113() == -1)
				if (!func_61(786809402, 1, false))
					func_162(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_113() == -1)
			{
				if (!func_61(1013902307, 1, false))
					func_162(1013902307, 1, 752097756);
			
				if (!func_61(142640135, 1, false))
					func_162(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_113() == -1)
			{
				if (!func_61(786809402, 1, false))
					func_162(786809402, 1, 752097756);
			
				if (!func_61(-518019409, 1, false))
					func_162(-518019409, 1, 752097756);
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

BOOL func_240(Hash hParam0) // Position - 0xAE53 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_241(Hash hParam0) // Position - 0xAE7B Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_242(Hash hParam0) // Position - 0xAEA3 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_243(int iParam0, int iParam1) // Position - 0xAEBE Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_244(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xD00B Hash - 0x4285A587 ^0x4285A587
{
	return func_357(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_245(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xD023 Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_404(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_246(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xD044 Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_73(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_215(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_247(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0xD075 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_405(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_353(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_115(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_215(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_248(Hash hParam0, int iParam1) // Position - 0xD105 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_406(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_249(Hash hParam0) // Position - 0xD14D Hash - 0x708BD33E ^0x6E6ACA4F
{
	char* propertyName;
	char* propertyName2;
	int value;

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
	value = func_407();
	func_408(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_250(Hash hParam0) // Position - 0xD21C Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_409(hParam0))
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

BOOL func_251() // Position - 0xD298 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_113() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_252(Hash hParam0) // Position - 0xD2BD Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_253(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xD2CF Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_254(Hash hParam0) // Position - 0xD2F5 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_108(50))
			{
				if (!func_108(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_108(51))
			{
				if (!func_108(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_255() // Position - 0xD361 Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_256(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0xD372 Hash - 0x4FC4FA99 ^0x540DBE26
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

	if (!func_73(hParam1, 0))
		return false;

	if (func_106(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_113() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_110(hParam1) == -999503751)
		return true;

	num = func_410(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_31(hParam1, 866047851))
	{
		num2 = func_294(num, 1);
	
		if (func_411(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
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
		
			if (Global_1946054.f_1497.f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_31(hParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
	
		case -1505978566:
			if (func_412(1868067663, &unk))
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
			num5 = func_413(componentHash, num, metaPedType, isMP);
			num4 = func_413(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
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
			hash = func_110(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
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
			hash = func_110(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_31(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_414(Global_1946054.f_1497.f_1[num2 /*3*/]))
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

void func_257() // Position - 0xD682 Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_258() // Position - 0xD6A3 Hash - 0xDC6E219D ^0xBD2A18DD
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

int func_259(int iParam0) // Position - 0xD6F8 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_183(iParam0))
		return -1;

	return func_415(iParam0);
}

int func_260() // Position - 0xD714 Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_61(func_416(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_261(Hash hParam0) // Position - 0xD746 Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_262(int iParam0, Hash hParam1) // Position - 0xD7DC Hash - 0x33707815 ^0xEA5B7C5C
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

	if (func_61(hash, 1, false) && func_61(hash2, 1, false))
		return true;

	return false;
}

Hash func_263(Hash hParam0) // Position - 0xD93D Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_264(Hash hParam0, int iParam1) // Position - 0xDA04 Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_417(hParam0);

	if (num != -15)
	{
		func_408(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_418(num, true);
	}

	return false;
}

int func_265(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xDA36 Hash - 0xE2402AAF ^0x47ECB962
{
	float num;
	int num2;
	int i;
	Hash hash;

	if (iParam2 != -1)
		return iParam2;

	num = 1f;

	if (bParam1 && func_61(joaat("provision_trinket_elk_antler"), 1, false))
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
		
			if (func_73(hash, 0) && func_31(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_266(int iParam0, const char* sParam1, int iParam2) // Position - 0xDAFB Hash - 0x4DF85B80 ^0x4CB64A24
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_326(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_267(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xDB3C Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_419())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_326(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_420(num);
			func_421(num, 0, 0);
		}
	
		func_326(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_124(func_322(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_268(int iParam0) // Position - 0xDC18 Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_269(int iParam0) // Position - 0xDC33 Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_270(int iParam0) // Position - 0xDC4E Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_271(int iParam0) // Position - 0xDC69 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_272(int iParam0) // Position - 0xDC84 Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_281(hash);
	num3 = func_281(hash2);
	num4 = func_281(hash3);
	num6 = func_282(hash);
	num7 = func_282(hash2);
	num8 = func_282(hash3);

	if (iParam0 != 2)
	{
		num5 = func_281(hash4);
		num9 = func_282(hash4);
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

void func_273(int iParam0) // Position - 0xDDF7 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_274() // Position - 0xDE12 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_422(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_275() // Position - 0xDE4B Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_276(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0xDE5D Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_390(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_390(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_390(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_390(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_390(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_390(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash) && func_390(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_390(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_390(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_390(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash) && func_390(hash2) && func_390(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_390(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_390(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_390(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_390(hash) && func_390(hash2) && func_390(hash3) && func_390(hash4))
			return true;
	}

	return false;
}

void func_277(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE322 Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_425();
			func_423(iParam0);
			break;
	
		case -1925798111:
			func_423(-1925798111);
			func_424(-919512195);
			func_424(420709909);
			func_424(1703426636);
			break;
	
		case -1838352012:
			func_424(-1674179981);
			func_424(-1835851517);
			func_423(-1838352012);
			break;
	
		case -1835851517:
			func_424(-1674179981);
			func_424(-1838352012);
			func_423(-1835851517);
			break;
	
		case -1738165526:
			func_423(-1738165526);
			func_424(0);
			func_424(473295046);
			break;
	
		case -1717960576:
			func_424(210001842);
			func_423(-1717960576);
			break;
	
		case -1674179981:
			func_424(-1835851517);
			func_424(-1838352012);
			func_423(-1674179981);
			break;
	
		case -1612662716:
			func_424(1822001510);
			func_423(-1612662716);
			break;
	
		case -1414537028:
			func_424(38162571);
			func_424(1350391819);
			func_424(54073871);
			func_423(-1414537028);
			break;
	
		case -1311865656:
			func_423(-1311865656);
			func_424(1509509592);
			func_424(-959357075);
			func_424(405586984);
			break;
	
		case -1271608261:
			func_424(-150493654);
			func_424(1846061697);
			func_424(-1145519186);
			func_423(-1271608261);
			break;
	
		case -1223121209:
			func_423(-1223121209);
			func_424(630808005);
			break;
	
		case -1145519186:
			func_424(-150493654);
			func_424(-1271608261);
			func_424(1846061697);
			func_423(-1145519186);
			break;
	
		case -1124061431:
			func_424(198200492);
			func_423(-1124061431);
			func_424(52706132);
			func_424(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_423(-1080627546);
			else
				func_424(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_424(-538889627);
			func_424(-538880323);
			func_424(-1056767524);
			func_423(iParam0);
			break;
	
		case -959357075:
			func_423(-959357075);
			func_424(1509509592);
			func_424(405586984);
			func_424(-1311865656);
			break;
	
		case -919512195:
			func_423(-919512195);
			func_424(-1925798111);
			func_424(420709909);
			func_424(1703426636);
			break;
	
		case -664252410:
			func_424(2019386373);
			func_424(2109952320);
			func_423(-664252410);
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
			func_426();
			func_423(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_423(-524145696);
			else
				func_424(-524145696);
		
			func_424(1626481264);
			func_424(282809459);
			break;
	
		case -502324015:
			func_424(1497516462);
			func_424(2016141805);
			func_424(1010885152);
			func_423(-502324015);
			break;
	
		case -434590080:
			func_424(1376646519);
			func_424(931649776);
			func_424(1743048395);
			func_424(449774763);
			func_423(-434590080);
			break;
	
		case -404698347:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-223469678);
			func_424(1517904467);
			func_423(-404698347);
			break;
	
		case -259123672:
			func_424(198200492);
			func_424(-1124061431);
			func_424(52706132);
			func_423(-259123672);
			break;
	
		case -223469678:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-404698347);
			func_424(1517904467);
			func_423(-223469678);
			break;
	
		case -150493654:
			func_424(-1271608261);
			func_424(1846061697);
			func_424(-1145519186);
			func_423(-150493654);
			break;
	
		case 0:
			func_423(0);
			func_424(473295046);
			func_424(-1738165526);
			break;
	
		case 38162571:
			func_424(-1414537028);
			func_424(1350391819);
			func_424(54073871);
			func_423(38162571);
			break;
	
		case 52706132:
			func_424(198200492);
			func_424(-1124061431);
			func_423(52706132);
			func_424(-259123672);
			break;
	
		case 54073871:
			func_424(-1414537028);
			func_424(38162571);
			func_424(1350391819);
			func_423(54073871);
			break;
	
		case 198200492:
			func_423(198200492);
			func_424(-1124061431);
			func_424(52706132);
			func_424(-259123672);
			break;
	
		case 210001842:
			func_424(-1717960576);
			func_423(210001842);
			break;
	
		case 280705402:
			func_424(1766284049);
			func_424(1926308480);
			func_423(280705402);
			break;
	
		case 282809459:
			func_423(282809459);
			func_424(1626481264);
			func_424(-524145696);
			break;
	
		case 405586984:
			func_423(405586984);
			func_424(1509509592);
			func_424(-959357075);
			func_424(-1311865656);
			break;
	
		case 420709909:
			func_423(420709909);
			func_424(-919512195);
			func_424(-1925798111);
			func_424(1703426636);
			break;
	
		case 439465264:
			if (func_427(1609506757))
				if (bParam1)
					func_423(439465264);
				else
					func_424(439465264);
			break;
	
		case 449774763:
			func_424(1376646519);
			func_424(931649776);
			func_424(-434590080);
			func_424(1743048395);
			func_423(449774763);
			break;
	
		case 473295046:
			func_423(473295046);
			func_424(0);
			func_424(-1738165526);
			break;
	
		case 630808005:
			func_423(630808005);
			func_424(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_423(885203519);
			else
				func_424(885203519);
			break;
	
		case 931649776:
			func_424(1376646519);
			func_424(-434590080);
			func_424(1743048395);
			func_424(449774763);
			func_423(931649776);
			break;
	
		case 932909855:
			func_423(932909855);
			func_424(2051822093);
			break;
	
		case 1010885152:
			func_424(1497516462);
			func_424(2016141805);
			func_423(1010885152);
			func_424(-502324015);
			break;
	
		case 1306158345:
			func_424(1952610440);
			func_424(-223469678);
			func_424(-404698347);
			func_424(1517904467);
			func_423(1306158345);
			break;
	
		case 1350391819:
			func_424(-1414537028);
			func_424(38162571);
			func_424(54073871);
			func_423(1350391819);
			break;
	
		case 1376646519:
			func_424(931649776);
			func_424(-434590080);
			func_424(1743048395);
			func_424(449774763);
			func_423(1376646519);
			break;
	
		case 1453909576:
			func_423(1453909576);
			func_424(1643531967);
			break;
	
		case 1497516462:
			func_423(1497516462);
			func_424(2016141805);
			func_424(1010885152);
			func_424(-502324015);
			break;
	
		case 1509509592:
			func_423(1509509592);
			func_424(405586984);
			func_424(-959357075);
			func_424(-1311865656);
			break;
	
		case 1517904467:
			func_424(1306158345);
			func_424(1952610440);
			func_424(-223469678);
			func_424(-404698347);
			func_423(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_424(439465264);
				func_423(1609506757);
			}
			else
			{
				func_424(1609506757);
				func_424(439465264);
			}
			break;
	
		case 1626481264:
			func_423(1626481264);
			func_424(-524145696);
			func_424(282809459);
			break;
	
		case 1643531967:
			func_423(1643531967);
			func_424(1453909576);
			break;
	
		case 1703426636:
			func_423(1703426636);
			func_424(-919512195);
			func_424(-1925798111);
			func_424(420709909);
			break;
	
		case 1743048395:
			func_424(1376646519);
			func_424(931649776);
			func_424(-434590080);
			func_424(449774763);
			func_423(1743048395);
			break;
	
		case 1766284049:
			func_424(280705402);
			func_424(1926308480);
			func_423(1766284049);
			break;
	
		case 1822001510:
			func_424(-1612662716);
			func_423(1822001510);
			break;
	
		case 1846061697:
			func_424(-150493654);
			func_424(-1271608261);
			func_424(-1145519186);
			func_423(1846061697);
			break;
	
		case 1926308480:
			func_424(1766284049);
			func_424(280705402);
			func_423(1926308480);
			break;
	
		case 1952610440:
			func_424(1306158345);
			func_424(-223469678);
			func_424(-404698347);
			func_424(1517904467);
			func_423(1952610440);
			break;
	
		case 2016141805:
			func_424(1497516462);
			func_423(2016141805);
			func_424(1010885152);
			func_424(-502324015);
			break;
	
		case 2019386373:
			func_424(-664252410);
			func_424(2109952320);
			func_423(2019386373);
			break;
	
		case 2051822093:
			func_423(2051822093);
			func_424(932909855);
			break;
	
		case 2109952320:
			func_424(2019386373);
			func_424(-664252410);
			func_423(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_427(iParam0))
					func_423(iParam0);
			else if (func_427(iParam0))
				func_424(iParam0);
			break;
	}

	return;
}

void func_278(Hash hParam0) // Position - 0xEE45 Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_428(hParam0))
		func_430(func_429(hParam0));

	return;
}

int func_279() // Position - 0xEE61 Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_428(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_280(Hash hParam0, int iParam1, int iParam2) // Position - 0xEE99 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_281(hash);
	num3 = func_281(hash2);
	num4 = func_281(hash3);
	num6 = func_282(hash);
	num7 = func_282(hash2);
	num8 = func_282(hash3);

	if (iParam2 != 2)
	{
		num5 = func_281(hash4);
		num9 = func_282(hash4);
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

int func_281(Hash hParam0) // Position - 0xF0AC Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_61(hParam0, 1, false))
		num = func_89(hParam0, false, false);

	return num;
}

int func_282(Hash hParam0) // Position - 0xF0CB Hash - 0xEED5739D ^0xEED5739D
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

int func_283(Hash hParam0) // Position - 0xF1A4 Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_284(Hash hParam0, int iParam1) // Position - 0xF1B2 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_285(Hash hParam0, int iParam1) // Position - 0xF1C2 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_374(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_286(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0xF1F1 Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_285(hParam1, 5) || hParam0 == func_285(hParam1, 6) || hParam0 == func_285(hParam1, 7) || hParam0 == func_285(hParam1, 8) || hParam0 == func_285(hParam1, 9))
	{
		func_276(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_103(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_105(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_287(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0xF273 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_285(hParam1, 5) || hParam0 == func_285(hParam1, 6) || hParam0 == func_285(hParam1, 7) || hParam0 == func_285(hParam1, 8) || hParam0 == func_285(hParam1, 9))
	{
		if (func_276(hParam1, hParam0, &num, false, 0, false))
		{
			func_103(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_105(51, 0, 0, num, func_225(hParam1, 20), 1, 0);
		}
		else
		{
			func_103(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_105(51, 0, 0, num, func_225(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_288() // Position - 0xF334 Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_223(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_289(Hash hParam0) // Position - 0xF35D Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_290(Hash hParam0) // Position - 0xF36C Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_431(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_291(Hash hParam0) // Position - 0xF385 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_292(Hash hParam0, var uParam1, var uParam2) // Position - 0xF394 Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_293(var uParam0) // Position - 0xF5A0 Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_432(i, 1);
	}

	return -358215195;
}

int func_294(int iParam0, int iParam1) // Position - 0xF5DB Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_295(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xF7AC Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_433();

	if (iParam2 == 39)
	{
		unk = { func_208(hParam0, true, false) };
		iParam2 = func_294(func_293(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_31(hParam0, 866047851) && func_411(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_298(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_434(func_432(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_435(iParam2);
	func_436(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_437(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_437(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_438(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_439(hParam0, iParam2, hParam1, func_113() != -1);

	if (bParam4)
		func_440(&(Global_1946054.f_1378), true, 3);
	else
		func_440(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_441(func_432(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_296(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xF9B9 Hash - 0x5AF76643 ^0x5AF76643
{
	func_442(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_297(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0xF9D2 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_443(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_444(num);
	return;
}

BOOL func_298(BOOL bParam0) // Position - 0xFA04 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_299() // Position - 0xFA15 Hash - 0xB6203BF0 ^0x217DD714
{
	func_445(&(Global_1946054.f_2776));
	func_446(32768);
	func_441(1108822547, 8, 6);
	return;
}

int func_300(int iParam0) // Position - 0xFA3C Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_294(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_301(int iParam0) // Position - 0xFAA0 Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_447(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_448(num);
	return;
}

void func_302(int iParam0, int iParam1, int iParam2) // Position - 0xFAE4 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_448(num);
	return;
}

BOOL func_303(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0xFB04 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_215(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_304(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0xFB2B Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

float func_305() // Position - 0xFB66 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_449())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_450(2);

	if (Global_1347477.f_119)
		return func_450(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_451();
	num3 = func_452();
	num4 = func_453();
	num5 = func_454();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_455());
	num8 = func_450(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_456(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_457(3, num9, num9 > 100f);
	return func_458(num8, -100f, 100f);
}

float func_306() // Position - 0xFC8F Hash - 0x951B1CCC ^0x7B312694
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

	if (func_449())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_450(1);

	if (Global_1347477.f_119)
		return func_450(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_451();
	num3 = func_452();
	num4 = func_453();
	num5 = func_454();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_455());
	num8 = func_450(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_456(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_457(2, num9, num9 > 100f);
	return func_458(num8, -100f, 100f);
}

float func_307() // Position - 0xFDB8 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_449())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_450(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_459())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_460())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_450(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_451();
	num3 = func_452();
	num4 = func_453();
	num5 = func_454();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_455());
	num8 = func_450(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_456(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_457(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_450(0);

	return func_458(num8, -100f, 100f);
}

BOOL func_308(int iParam0, int iParam1) // Position - 0xFF5F Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_309(Hash hParam0) // Position - 0xFF78 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_310(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0xFF88 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_73(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_212(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_115(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_215(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_311(int iParam0, BOOL bParam1) // Position - 0xFFEA Hash - 0xC13DA752 ^0x7357EDC7
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
				return func_461();
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

int func_312(Hash hParam0) // Position - 0x10088 Hash - 0x9830D1FB ^0x9830D1FB
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

BOOL func_313(int iParam0) // Position - 0x1049B Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

void func_314(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x104BA Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_313(iParam0))
		return;

	if (func_462(iParam0))
		return;

	if (!func_463(iParam0))
		func_464(iParam0, true, false);

	hash = func_465(iParam0);

	if (hash != 0 && !(iParam0 >= 0 && iParam0 <= 5))
		if (func_466(iParam0, 512))
			func_297(30, hash, 0, 0, false);

	if (!func_467() && !bParam1 && !func_50(0, false, true))
		func_468(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_469(iParam0, 6);

	if (bParam2)
		if (!func_50(0, false, true))
			func_219(true, 4);

	return;
}

int func_315() // Position - 0x10580 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_316(int iParam0, BOOL bParam1) // Position - 0x1058E Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_311(iParam0, false) < func_470(iParam0, bParam1);
}

BOOL func_317(Hash hParam0, var uParam1) // Position - 0x105A6 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_110(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_318(int iParam0) // Position - 0x105EA Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_294(iParam0, 1) /*3*/] != Global_1946054.f_57[func_294(iParam0, 1) /*11*/];
}

void func_319(int iParam0, Hash hParam1) // Position - 0x10622 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_31(hParam1, 130796156))
	{
		func_471(hParam1, false);
	}
	else if (func_31(hParam1, 930141731))
	{
		func_471(hParam1, true);
		func_472(iParam0);
	}

	return;
}

void func_320(var uParam0, int iParam1) // Position - 0x1065D Hash - 0x84556899 ^0xA18AFCFA
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

int func_321(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x1073E Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_473(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_474(anParam2, hParam0, num);
	return 1;
}

struct<2> func_322(int iParam0) // Position - 0x107A7 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

var func_323(int iParam0) // Position - 0x107B7 Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x107C9 Hash - 0xA17D549C ^0x909F91CF
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

Hash func_325(Hash hParam0) // Position - 0x108A0 Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_176(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_326(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x108CA Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_475(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_327() // Position - 0x1092D Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_328(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x1093A Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_329(BOOL bParam0, var uParam1, var uParam2) // Position - 0x109A4 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_330(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x109BB Hash - 0x92B705D3 ^0xB783F681
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

const char* func_331(const char* sParam0, int iParam1) // Position - 0x10AAE Hash - 0x9E99F03 ^0x42C8AC37
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_332(var uParam0, int iParam1, BOOL bParam2) // Position - 0x10AC8 Hash - 0x58578E17 ^0xA6EA6348
{
	if (bParam2)
		if (!func_476(uParam0->f_9))
			return false;

	if (!func_477(uParam0->f_4))
		return false;

	if (!func_478(uParam0->f_4, iParam1, false))
		return false;

	if (!func_479(uParam0->f_4))
		return false;

	if (func_480(false))
		if (!func_73(uParam0->f_4, 0) || uParam0->f_11 <= 0)
			return false;

	if (Global_1935689.f_9440 == 0 && !func_481())
		func_482(uParam0->f_4);

	return true;
}

BOOL func_333(Hash hParam0, Hash hParam1) // Position - 0x10B5C Hash - 0x9D305ADC ^0xED1BD779
{
	switch (func_69(hParam1, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			if (Global_1935689.f_9439 != 1061777683 || func_69(hParam0, 1224357681) == func_69(hParam1, 1224357681))
				return true;
			break;
	}

	return false;
}

void func_334(var uParam0) // Position - 0x10BFE Hash - 0xA0478F20 ^0x9FF689C1
{
	var outData;

	if (func_70(uParam0->f_4))
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam0, &outData))
			uParam0->f_5.f_2 = outData.f_4;

	return;
}

void func_335(Hash hParam0) // Position - 0x10C2A Hash - 0xBF830D7B ^0xC31B9D5D
{
	int num;
	int i;

	if (Global_1347702[hParam0 /*49*/].f_13 & 2 == 0)
	{
		num = 0;
	
		for (i = 0; i <= 4; i = i + 1)
		{
			if (func_483(Global_1347702[hParam0 /*49*/].f_29[i]))
				func_485(&num, func_484(Global_1347702[hParam0 /*49*/].f_29[i]));
		}
	
		if (num == 0)
			func_486(&(Global_1347702[hParam0 /*49*/].f_13), 2);
		else if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
			if (func_488(num, Global_1347702[hParam0 /*49*/].f_15, 1, Global_1347702[hParam0 /*49*/].f_27, func_487()))
				func_486(&(Global_1347702[hParam0 /*49*/].f_13), 2);
		else
			func_486(&(Global_1347702[hParam0 /*49*/].f_13), 2);
	}

	return;
}

BOOL func_336(int iParam0) // Position - 0x10CEF Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_337(BOOL bParam0) // Position - 0x10D2D Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_338(int iParam0) // Position - 0x10D40 Hash - 0x82195F64 ^0x82195F64
{
	return iParam0 > -1 && iParam0 <= 81;
}

void func_339(Hash hParam0, BOOL bParam1) // Position - 0x10D56 Hash - 0x13B9FDF3 ^0x834B1029
{
	if (!func_47(hParam0))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
	{
		func_489(&(Global_1347702[hParam0 /*49*/].f_14));
		func_490(&(Global_1347702[hParam0 /*49*/].f_13), 16);
		func_491(hParam0);
	
		if (!func_492(PLAYER::PLAYER_ID(), true, false, true) || Global_43891 || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1347702[hParam0 /*49*/].f_40, false);
			func_490(&(Global_1347702[hParam0 /*49*/].f_13), 4096);
			func_493(&(Global_1347702[hParam0 /*49*/].f_37));
		}
		else
		{
			func_494(hParam0, 16384);
			func_495(hParam0, true, func_340(hParam0));
		}
	}

	return;
}

Vector3 func_340(Hash hParam0) // Position - 0x10E0C Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_47(hParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_496(hParam0, &unk))
		Global_1347702[hParam0 /*49*/].f_24 = { unk };

	return Global_1347702[hParam0 /*49*/].f_24;
}

void func_341(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x10E52 Hash - 0x8D139366 ^0xCA824361
{
	int num;
	BOOL flag;
	BOOL flag2;
	var unk;
	eBlipSprite sprite;

	if (!func_47(hParam0))
		return;

	if (Global_1347702[hParam0 /*49*/].f_13 & 256 != 0 && func_50(0, false, true))
		return;

	if (Global_1347702[hParam0 /*49*/].f_12 & 16 != 0)
		return;

	if (Global_1347702[hParam0 /*49*/].f_36 == BLIP_HIGHER)
		return;

	if (func_372(32768))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
		return;

	Global_1347702[hParam0 /*49*/].f_38 = func_497(hParam0);

	if (!bParam5 && func_498(hParam0))
	{
		Global_1347702[hParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[hParam0 /*49*/].f_38, func_499(hParam0), Global_1347702[hParam0 /*49*/].f_18);
	
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
			return;
	
		MAP::SET_BLIP_SPRITE(Global_1347702[hParam0 /*49*/].f_37, Global_1347702[hParam0 /*49*/].f_36, true);
	}
	else
	{
		Global_1347702[hParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_COORDS(Global_1347702[hParam0 /*49*/].f_38, vParam1);
	
		if (!MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
			return;
	
		MAP::SET_BLIP_SPRITE(Global_1347702[hParam0 /*49*/].f_37, Global_1347702[hParam0 /*49*/].f_36, true);
	}

	if (hParam0 == 61)
	{
		func_500(8);
	}
	else if (hParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[hParam0 /*49*/].f_37, "BLIP_THOMAS_DOWNES");
	}
	else if (hParam0 == 95)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_SEAN"));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[hParam0 /*49*/].f_37, "BLIP_RHMRB");
	}
	else if (hParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[hParam0 /*49*/].f_37, "BLIP_RCFSH");
	}
	else if (hParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[hParam0 /*49*/].f_37, "BLIP_RCDIN");
	}
	else if (hParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[hParam0 /*49*/].f_37, "BLIP_RCRKF");
	}
	else if (hParam0 == 44 || hParam0 == 45 || hParam0 == 46 || hParam0 == 47 || hParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1347702[hParam0 /*49*/].f_37, "BLIP_RCEXO");
	}

	func_501(hParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[hParam0 /*49*/].f_37, 64, hParam0);

	if (func_113() == -1)
	{
		func_502(hParam0);
		num = func_503(Global_40.f_4283);
	
		if (func_504(num) && func_505(Global_1888801[num /*35*/].f_13))
		{
			flag = true;
			flag2 = func_506(num);
		}
	
		if (func_507(hParam0, flag, num))
			func_508(Global_1347702[hParam0 /*49*/].f_15, flag2, flag, num);
	}

	if (bParam4)
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
			return;

	if (Global_1347702[hParam0 /*49*/].f_13 & 1 == 0)
	{
		func_486(&(Global_1347702[hParam0 /*49*/].f_13), 1);
	
		if (!func_498(hParam0) || func_179(Global_1347702[hParam0 /*49*/].f_12, 1) || func_179(Global_1347702[hParam0 /*49*/].f_12, 512) || func_509(Global_1347702[hParam0 /*49*/].f_13, 2048))
			MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	}

	if (Global_1347702[hParam0 /*49*/].f_13 & 32768 == 0)
		if (Global_1347702[hParam0 /*49*/].f_36 == joaat("blip_rc") && Global_1347702[hParam0 /*49*/].f_12 & 1 == 0 && Global_1347702[hParam0 /*49*/].f_12 & 2 != 0)
			MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		else
			func_486(&(Global_1347702[hParam0 /*49*/].f_13), 32768);

	if (Global_1347702[hParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[hParam0] & 2 == 0)
	{
		if (func_510(hParam0))
		{
			if (hParam0 == 97)
				func_96(185, false);
			else
				func_96(186, true);
		}
		else
		{
			TEXT_LABEL_COPY(&unk, { Global_1347702[hParam0 /*49*/].f_3 }, 3);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 24);
			sprite = Global_1347702[hParam0 /*49*/].f_37;
			Global_1347702[hParam0 /*49*/].f_40 = func_468(MISC::VAR_STRING(2, &unk, sprite), 10000, 0, 0, 0, true);
		}
	
		func_51(hParam0, 2);
	}

	return;
}

BOOL func_342(int iParam0, int iParam1) // Position - 0x112A9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_343(int iParam0) // Position - 0x112B8 Hash - 0x7647021A ^0xF0097466
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_344(int iParam0) // Position - 0x112CA Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_183(iParam0))
		return -1;

	return func_511(iParam0);
}

void func_345(int iParam0, Hash hParam1, BOOL bParam2, Hash hParam3) // Position - 0x112E6 Hash - 0x41148AF9 ^0x9953FB5C
{
	Hash hash;

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "style", func_513(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "isVisible", bParam2);

	if (bParam2)
		DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "text", hParam3);
	else
		DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "text", 0);

	return;
}

void func_346(Hash hParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x1133B Hash - 0x4011D718 ^0x2A4A96EF
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_514(hParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", hParam3);
		*uParam2 = *uParam2 + 1;
	}

	return;
}

int func_347(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x11398 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_73(hParam0, 0))
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

struct<4> func_348(BOOL bParam0) // Position - 0x113E6 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_246(joaat("character"), func_515(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_349(BOOL bParam0) // Position - 0x11402 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_215(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_246(923904168, func_348(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_246(923904168, func_348(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_246(923904168, func_348(bParam0), -740156546, false);
}

BOOL func_350(Hash hParam0, BOOL bParam1) // Position - 0x11497 Hash - 0x62864AB ^0xBC339691
{
	if (func_110(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_108(24);
		else
			return true;

	return false;
}

struct<4> func_351(BOOL bParam0) // Position - 0x114D0 Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_215(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_246(271701509, func_348(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_246(271701509, func_348(bParam0), 12999093, false);
}

BOOL func_352(Hash hParam0, Hash hParam1) // Position - 0x11534 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_110(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_353(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x11593 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_215(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_354(Hash hParam0) // Position - 0x115C3 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_516(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_355(var uParam0) // Position - 0x115DF Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_73(*uParam0, 0))
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

BOOL func_356(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x1165B Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_73(hParam0, 0))
		return false;

	unk = { func_208(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_243(398 + i, 1);
	
		if (func_244(hParam0, &unk, hash, false))
		{
			flag = func_245(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_357(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x116EF Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_73(hParam0, 0))
		return 0;

	guid = { func_246(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_215(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<18> func_358(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x11737 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_359(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x11809 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_360(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x11824 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_215(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_361(int iParam0) // Position - 0x11849 Hash - 0x92F940EE ^0x92F940EE
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

float func_362(int iParam0) // Position - 0x1189D Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_517(iParam0);
	
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
			return func_517(iParam0);
	
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
			return func_517(iParam0);
	
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

BOOL func_363(int iParam0) // Position - 0x11B6B Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_108(18);
	
		case 1:
			return func_108(19);
	
		case 2:
			return func_108(20);
	
		default:
		
	}

	return true;
}

int func_364(int iParam0) // Position - 0x11BA9 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_518(Global_40.f_11095.f_11[iParam0]);
}

void func_365(int iParam0, float fParam1, BOOL bParam2) // Position - 0x11BC1 Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_113() != -1)
		return;

	if (Global_1347477.f_117 || !func_108(31))
		return;

	num = func_364(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_364(iParam0);

	if (func_519(iParam0) && func_520(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_521(num2, fParam1);
		
			if (fParam1 > (float)func_522(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_96(func_523(iParam0), false);
				
					func_524(iParam0, num3, num4);
					func_525(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_366(int iParam0) // Position - 0x11CC3 Hash - 0xEB40D7A4 ^0xFFCDA3EC
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_367(int iParam0) // Position - 0x11CCF Hash - 0x21FAF347 ^0xAF7D8F21
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

void func_368(Hash hParam0, int iParam1) // Position - 0x11D0A Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_369(int iParam0, int iParam1) // Position - 0x11D1D Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_113() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_370(int iParam0) // Position - 0x11D50 Hash - 0x3E25647A ^0x3E25647A
{
	if (func_113() != -1)
		if (func_308(iParam0, 4))
			return false;
	else if (func_308(iParam0, 2))
		return false;

	return true;
}

BOOL func_371(int iParam0) // Position - 0x11D80 Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_308(iParam0, 65536) && !func_308(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_308(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_308(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_372(int iParam0) // Position - 0x11E2C Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_373() // Position - 0x11E3F Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_374(int iParam0, var uParam1) // Position - 0x11E4E Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_526(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_375() // Position - 0x11E7B Hash - 0xA91AE85E ^0xA91AE85E
{
	return func_527(Global_40.f_12019);
}

int func_376() // Position - 0x11E8D Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_224(i);
	
		if (func_61(hash, 1, false) || func_382(func_381(hash)))
			num = num + 1;
	}

	return num;
}

int func_377() // Position - 0x11ED6 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_528(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_378() // Position - 0x11F0F Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_387(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_379() // Position - 0x11F48 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_380(int iParam0) // Position - 0x11F5A Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_381(Hash hParam0) // Position - 0x12013 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_382(BOOL bParam0) // Position - 0x120A9 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_383(int iParam0) // Position - 0x120BC Hash - 0x21CE226B ^0x3B011BB1
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

int func_384(int iParam0) // Position - 0x120F7 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_385(int iParam0) // Position - 0x1213C Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x12185 Hash - 0xA17D549C ^0x1944E8E5
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

BOOL func_387(Hash hParam0) // Position - 0x12293 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x122A3 Hash - 0xA17D549C ^0x1D3233F4
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

char* func_389(int iParam0) // Position - 0x12360 Hash - 0x21CE226B ^0xD9934F38
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

BOOL func_390(Hash hParam0) // Position - 0x1239B Hash - 0x5C411CF ^0x5C411CF
{
	if (func_529(hParam0) && func_61(hParam0, 1, false))
		return 1;
	else if (func_530(hParam0) && func_531(hParam0))
		return 1;

	return 0;
}

char* func_391(Hash hParam0) // Position - 0x123D9 Hash - 0x9E507475 ^0x90459A91
{
	if (!func_73(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_156(hParam0));
}

int func_392(int iParam0) // Position - 0x123FD Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_393(int iParam0) // Position - 0x1240F Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_394(BOOL bParam0) // Position - 0x12423 Hash - 0xB584A39F ^0xFC4CA802
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

void func_395(int iParam0) // Position - 0x12461 Hash - 0x2EDDC601 ^0xD5F96979
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

void func_396(BOOL bParam0) // Position - 0x124CF Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_397(BOOL bParam0) // Position - 0x12509 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_398(BOOL bParam0) // Position - 0x12543 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_399(BOOL bParam0) // Position - 0x1257D Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_400(BOOL bParam0) // Position - 0x125A0 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_401(BOOL bParam0) // Position - 0x125E2 Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_402(int iParam0) // Position - 0x12624 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_294(iParam0, 1) /*3*/];
}

void func_403() // Position - 0x1264C Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_532();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_114(joaat("weapon_revolver_cattleman_john"));
		func_162(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_114(joaat("weapon_melee_knife_john"));
		func_162(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_404(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x126C4 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_215(false);
	*panParam1 = { func_246(hParam0, func_349(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_405(Hash hParam0) // Position - 0x12709 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_406(int iParam0, int iParam1) // Position - 0x1271F Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_407() // Position - 0x12735 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_408(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x12741 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_533(*uParam0);
	i = func_534(*uParam0);
	num2 = func_535(*uParam0);
	j = func_536(*uParam0);
	k = func_537(*uParam0);
	l = func_538(*uParam0);

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

	for (m = func_539(i, num); num2 > m; m = func_539(i, num))
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

	func_540(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_409(Hash hParam0) // Position - 0x128C9 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_410(Hash hParam0) // Position - 0x128D7 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_208(hParam0, true, false) };
	return func_293(unk.f_4);
}

int func_411(Hash hParam0) // Position - 0x128F3 Hash - 0xAD4E1DF8 ^0x7BAA459F
{
	int num;
	int num2;

	num = 0;
	num2 = 22;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_31(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 37;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_31(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 12;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_31(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 29;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_31(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 30;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_31(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	num2 = 31;

	if (hParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && func_31(hParam0->f_1[num2 /*3*/], 866047851))
		num = num + 1;

	return num;
}

BOOL func_412(Hash hParam0, var uParam1) // Position - 0x12A44 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_294(func_541(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_110(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_413(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x12ABB Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_294(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_298(524288))
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

BOOL func_414(Hash hParam0) // Position - 0x12B26 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

int func_415(int iParam0) // Position - 0x12B69 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_542(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

Hash func_416(int iParam0) // Position - 0x12BAA Hash - 0xB8EC44B7 ^0xD4FF48D5
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

int func_417(Hash hParam0) // Position - 0x12D27 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_543(hParam0, -1);
}

BOOL func_418(int iParam0, BOOL bParam1) // Position - 0x12D36 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_544(func_407(), iParam0, bParam1);
}

BOOL func_419() // Position - 0x12D4A Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_255())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_420(int iParam0) // Position - 0x12D61 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_545(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_421(int iParam0, const char* sParam1, int iParam2) // Position - 0x12D95 Hash - 0x56940320 ^0x257D0B2A
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_419())
		func_326(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_326(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_422(Hash hParam0) // Position - 0x12E01 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_423(int iParam0) // Position - 0x12E11 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_546(iParam0, 1);
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

void func_424(int iParam0) // Position - 0x12EAA Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_546(iParam0, 1);
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

void func_425() // Position - 0x12F30 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_424(-939420910);
	func_424(-1187950766);
	func_424(356365161);
	func_424(753127042);
	func_424(-2038424081);
	func_424(1884271742);
	func_424(459290420);
	return;
}

void func_426() // Position - 0x12F77 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_424(704802028);
	func_424(588987611);
	func_424(2008888900);
	func_424(1649996811);
	func_424(227918160);
	func_424(168171957);
	func_424(1193080109);
	func_424(-491981251);
	func_424(-639037538);
	func_424(-618620429);
	return;
}

BOOL func_427(int iParam0) // Position - 0x12FD9 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_546(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_428(Hash hParam0) // Position - 0x13028 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_429(Hash hParam0) // Position - 0x13038 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_430(int iParam0) // Position - 0x1307D Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_431(Hash hParam0) // Position - 0x13098 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_432(int iParam0, int iParam1) // Position - 0x130A8 Hash - 0xE1D12727 ^0xA46110B3
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

void func_433() // Position - 0x132F7 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_434(int iParam0) // Position - 0x1333E Hash - 0x65A082AE ^0x65A082AE
{
	func_441(iParam0, 8, 6);
	return;
}

void func_435(int iParam0) // Position - 0x1334F Hash - 0x20214C72 ^0x20214C72
{
	func_547(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_436(int iParam0, int iParam1) // Position - 0x13364 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_548(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_437(Hash hParam0, int iParam1, int iParam2) // Position - 0x1337B Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_438(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1338E Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_110(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_549(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_436(num2, num3);
	}

	if (func_318(-1586649372) && func_549(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_436(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_550(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_550(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_436(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_414(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_31(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
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
						func_436(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_110(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_414(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_110(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_436(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_550(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_550(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
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
						func_436(num2, num3);
				}
			}
		
			func_550(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_31(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case 1868067663:
			func_550(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	}

	switch (func_110(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_110(uParam0->f_1[num2 /*3*/]) || func_31(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_110(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_436(num2, num3);
			}
			break;
	}

	return;
}

Hash func_439(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x139D2 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_551(0);

	if (hParam2 != 0 && func_552(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_553(hParam0, func_432(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_440(var uParam0, BOOL bParam1, int iParam2) // Position - 0x13A18 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_113() != -1;
	flag2 = func_551(0);

	if (func_298(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_432(num, 1);
		
			if (func_554(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_554(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_413(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_555(uParam0);

	if (num3 > 0)
	{
		if (!func_298(524288))
		{
			func_443(524288);
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
				num5 = func_432(num, 1);
			
				if (func_554(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_554(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_413(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_436(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_446(524288);

	return;
}

void func_441(int iParam0, int iParam1, int iParam2) // Position - 0x13C35 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_442(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x13C74 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_556(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_113() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_557(2, Global_26796.f_776) || Global_1946054.f_1497 != func_465(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_465(Global_40.f_7729);
				Global_1946054.f_1378 = func_465(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_558(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_559(false, true);

	return;
}

void func_443(BOOL bParam0) // Position - 0x13D93 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_444(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x13DA6 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_560(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_561(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_443(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_560(iParam0))
				return;
		
			func_561(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_443(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_302(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_445(var uParam0) // Position - 0x13FB2 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_446(BOOL bParam0) // Position - 0x14010 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_447(int iParam0, int iParam1) // Position - 0x14028 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_448(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x14037 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_560(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_560(20))
				return;
		}
	}

	func_561(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_443(8);
	return;
}

BOOL func_449() // Position - 0x1413B Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_450(int iParam0) // Position - 0x14157 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_451() // Position - 0x14169 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_562(13);
	num2 = func_563(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_452() // Position - 0x141AC Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_453() // Position - 0x141C7 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_255())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_454() // Position - 0x141E6 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_455() // Position - 0x14228 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_456(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14236 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_564(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_457(int iParam0, float fParam1, BOOL bParam2) // Position - 0x14282 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_564(iParam0, 2, false, false);
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

float func_458(float fParam0, float fParam1, float fParam2) // Position - 0x143C8 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_459() // Position - 0x143EF Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_562(12) <= -99f;
}

BOOL func_460() // Position - 0x14403 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_562(12) >= 99f;
}

int func_461() // Position - 0x14417 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_110(hash) == -999503751)
			if (func_565() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_462(int iParam0) // Position - 0x14468 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_313(iParam0))
		return false;

	if (func_466(iParam0, 4))
		return true;

	return false;
}

BOOL func_463(int iParam0) // Position - 0x1448D Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_313(iParam0))
		return false;

	if (func_466(iParam0, 2))
		return true;

	return false;
}

void func_464(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x144B2 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_313(iParam0))
		return;

	if (!func_463(iParam0))
	{
		func_469(iParam0, 2);
	
		if (bParam2)
			if (!func_50(0, false, true))
				func_219(true, 4);
	
		if (!func_467() && !bParam1 && !func_50(0, false, true))
			func_468(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_566(iParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_465(int iParam0) // Position - 0x14527 Hash - 0xB8EC44B7 ^0xE877E9C4
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

BOOL func_466(int iParam0, BOOL bParam1) // Position - 0x14A5C Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_313(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

BOOL func_467() // Position - 0x14A81 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_468(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x14AA1 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_469(int iParam0, BOOL bParam1) // Position - 0x14ADC Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_313(iParam0))
		return;

	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] || bParam1;
	return;
}

int func_470(int iParam0, BOOL bParam1) // Position - 0x14B08 Hash - 0x14DDA26B ^0xFFF4A8D0
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

void func_471(Hash hParam0, BOOL bParam1) // Position - 0x14BAB Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_567(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_109(50);
			else
				func_109(48);
			break;
	
		case 1:
			if (bParam1)
				func_109(51);
			else
				func_109(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_568(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_143();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_143();
			}
			break;
	
		case 3:
			func_109(24);
		
			if (bParam1)
			{
				if (!func_568(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_143();
				}
			}
			break;
	}

	return;
}

void func_472(int iParam0) // Position - 0x14C8A Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_569(0))
				num = num + 1;
		
			if (func_569(2))
				num = num + 1;
		
			if (func_569(4))
				num = num + 1;
		
			if (!func_570(16))
			{
				if (num == 1)
				{
					func_571();
					func_96(456, true);
					func_572(16);
				}
			}
		
			if (!func_570(32))
			{
				if (num >= 3)
				{
					func_571();
					func_96(456, true);
					func_572(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_569(1))
				num = num + 1;
		
			if (func_569(3))
				num = num + 1;
		
			if (func_569(7))
				num = num + 1;
		
			if (!func_570(1))
			{
				if (num == 1)
				{
					func_573();
					func_96(457, true);
					func_572(1);
				}
			}
		
			if (!func_570(2))
			{
				if (num >= 3)
				{
					func_573();
					func_96(457, true);
					func_572(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_569(5))
				num = num + 1;
		
			if (func_569(6))
				num = num + 1;
		
			if (func_569(8))
				num = num + 1;
		
			if (!func_570(4))
			{
				if (num == 1)
				{
					func_574();
					func_96(455, true);
					func_572(4);
				}
			}
		
			if (!func_570(8))
			{
				if (num >= 3)
				{
					func_574();
					func_96(455, true);
					func_572(8);
				}
			}
			break;
	}

	return;
}

void func_473(var uParam0) // Position - 0x14E21 Hash - 0x2CE00B72 ^0x958A4727
{
	func_320(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_320(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_320(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_474(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x14E5B Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_575(anParam0))
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

void func_475(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x14EFC Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_476(int iParam0) // Position - 0x14F2D Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1162387149:
		case joaat("SLOTID_SATCHEL"):
			return true;
	}

	return false;
}

BOOL func_477(Hash hParam0) // Position - 0x14F51 Hash - 0xA177C2D7 ^0x45332B51
{
	int num;

	num = func_106(hParam0);

	if (num == joaat("WEAPON") && hParam0 != joaat("weapon_kit_binoculars") && hParam0 != joaat("weapon_kit_camera"))
		return false;

	if (num == joaat("Money") && hParam0 != joaat("money_loanshark_gwen_debt"))
		return false;

	switch (num)
	{
		case joaat("horse_equipment"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("emote"):
		case joaat("weapon_mod"):
		case joaat("fee"):
		case joaat("active_card"):
		case joaat("AMMO"):
		case joaat("weapon_decoration"):
		case joaat("ability_card"):
		case joaat("GOLD"):
		case joaat("Component"):
		case joaat("Minigame"):
		case joaat("ADVERT"):
		case joaat("core_item"):
		case joaat("passive_card"):
			return false;
	
		case joaat("CLOTHING"):
			switch (func_110(hParam0))
			{
				case -525676072:
					if (hParam0 == joaat("kit_mask_grey_cloth"))
						return true;
					else
						return false;
					break;
			
				case 81053684:
					return true;
			
				default:
					return false;
			}
			break;
	}

	if (func_110(hParam0) == -829303394)
		return false;

	return true;
}

BOOL func_478(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x15069 Hash - 0xB6B420BD ^0x591AD86
{
	BOOL flag;

	flag = false;

	if (iParam1 == 0 || iParam1 == -2074770370 || bParam2 || func_480(false))
		flag = true;

	if (!bParam2)
		if (!func_73(hParam0, 0) || hParam0 == 1259508039 || hParam0 == joaat("kit_wardrobe"))
			return false;

	if (!flag && func_576(hParam0))
		return false;

	switch (iParam1)
	{
		case -2074770370:
			if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
				return func_578(hParam0, iParam1);
			else if (func_69(hParam0, -949239683) == -1337515701 && hParam0 != joaat("kit_player_pocketwatch"))
				return true;
			else
				return func_31(hParam0, -111938901);
			break;
	
		case -1666604090:
			return func_31(hParam0, -193035453);
	
		case -1559802791:
			return func_31(hParam0, 1422457563);
	
		case -1268291907:
			return func_31(hParam0, 1360707454);
	
		case -693134279:
			return func_107(hParam0, 8388608);
	
		case -283002878:
		case 0:
			if (!func_480(false))
			{
				if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
					return true;
			
				if (func_478(hParam0, -1559802791, true) || func_478(hParam0, -1268291907, true) || func_478(hParam0, -96974025, true) || func_478(hParam0, -1666604090, true) || func_478(hParam0, 1561961676, true) || func_478(hParam0, -156634416, true) || func_478(hParam0, 1061777683, true) || func_478(hParam0, -2074770370, true) || func_478(hParam0, -693134279, true) || func_478(hParam0, -182626652, true) || func_577(hParam0))
					return true;
			}
			else
			{
				return true;
			}
			break;
	
		case -182626652:
			if (func_579(hParam0, Global_1914319.f_16855.f_1))
				return true;
			break;
	
		case -156634416:
			return func_31(hParam0, -928967997);
	
		case -96974025:
			return func_31(hParam0, 1009210113);
	
		case 1061777683:
			return func_31(hParam0, 747873593);
	
		case 1561961676:
			return func_31(hParam0, -111938901);
	}

	return false;
}

BOOL func_479(Hash hParam0) // Position - 0x15318 Hash - 0xB65FA383 ^0xB65FA383
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}

	if (func_480(false) && Global_1914319.f_16855 == 2)
	{
		if (!func_580(hParam0))
			return false;
	}
	else
	{
		switch (hParam0)
		{
			case joaat("DOCUMENT_CIG_CARD_INV_SET"):
			case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
			case joaat("DOCUMENT_CIG_CARD_ART_SET"):
			case joaat("DOCUMENT_CIG_CARD_LND_SET"):
			case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
			case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
			case joaat("DOCUMENT_CIG_CARD_AML_SET"):
			case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
			case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
			case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
			case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
				return false;
		}
	}

	if (func_113() == false)
		if (func_31(hParam0, -805003139))
			if (!UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
				return false;

	if (func_106(hParam0) == joaat("UPGRADE") && !(func_31(hParam0, -1540973036) || func_31(hParam0, 1192444843)))
		return false;

	return true;
}

BOOL func_480(BOOL bParam0) // Position - 0x15419 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_481() // Position - 0x15449 Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1935689.f_10;
}

void func_482(var uParam0) // Position - 0x15457 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1935689.f_9440 = uParam0;
	return;
}

BOOL func_483(int iParam0) // Position - 0x15468 Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

int func_484(int iParam0) // Position - 0x15487 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_485(var uParam0, int iParam1) // Position - 0x15496 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_486(int iParam0, int iParam1) // Position - 0x154A7 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_487() // Position - 0x154B8 Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_488(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x154C8 Hash - 0x2F357F29 ^0x2F357F29
{
	int i;

	if (func_113() != -1)
		return true;

	if (iParam2 == 0 && func_50(0, true, true))
		return false;

	if (Global_1879534)
		return false;

	if (func_581(iParam0, iParam1))
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_582(i, &iParam0))
		{
			Global_40.f_4942[i /*60*/].f_59 = iParam1;
		
			if (iParam3 == iParam4)
				func_583(i, 512, true);
			else
				func_584(i, 512, true);
		}
	}

	return true;
}

void func_489(var uParam0) // Position - 0x15558 Hash - 0x4918B04C ^0x4918B04C
{
	*uParam0 = 0;
	return;
}

void func_490(int iParam0, int iParam1) // Position - 0x15564 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_491(Hash hParam0) // Position - 0x15579 Hash - 0xD7FDBA69 ^0xCD0FDBA9
{
	if (func_585(179) || func_585(180))
		if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
			if (Global_1347702[hParam0 /*49*/].f_37 == Global_1905944.f_5698)
				func_586(1);

	if (func_587(179))
		func_588(179);

	if (func_587(180))
		func_588(180);

	return;
}

BOOL func_492(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x155DE Hash - 0x1083E71B ^0xE27096E9
{
	if (func_589(plParam0, bParam1, bParam2, bParam3))
		return true;

	if (bParam1)
		if (LAW::_ARE_WITNESSES_PENDING(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

void func_493(eBlipSprite ebsParam0) // Position - 0x1560E Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*ebsParam0))
		MAP::REMOVE_BLIP(ebsParam0);

	return;
}

void func_494(Hash hParam0, int iParam1) // Position - 0x15626 Hash - 0x35B60260 ^0x5D185E4D
{
	int i;

	if (!func_47(hParam0))
		return;

	func_590(&(Global_1347702[hParam0 /*49*/].f_14), iParam1);
	func_590(&(Global_1347702[hParam0 /*49*/].f_14), 2);
	func_591(&(Global_1347702[hParam0 /*49*/].f_12), 16384);
	func_490(&(Global_1347702[hParam0 /*49*/].f_13), 32);

	if (iParam1 != 16384)
	{
		for (i = 0; i < Global_40.f_450; i = i + 1)
		{
			if (func_47(Global_40.f_450[i]))
			{
				if (Global_40.f_450[i] == hParam0)
				{
					Global_1430257 = i;
					break;
				}
			}
		}
	}

	return;
}

void func_495(Hash hParam0, BOOL bParam1, var uParam2, var uParam3, var uParam4) // Position - 0x156C3 Hash - 0x1D42FDF4 ^0x4350D410
{
	if (!func_47(hParam0))
		return;

	if (Global_1347702[hParam0 /*49*/].f_13 & 32 != 0)
		return;
	else if (Global_1347702[hParam0 /*49*/].f_13 & 4096 != 0)
		if (bParam1)
			return;

	func_491(hParam0);

	if (Global_1347702[hParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[hParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	
		if (bParam1)
			MAP::REMOVE_BLIP(&(Global_1347702[hParam0 /*49*/].f_37));
	
		func_341(hParam0, func_499(hParam0), false, true);
	}
	else if (Global_1347702[hParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	
		if (bParam1)
			MAP::REMOVE_BLIP(&(Global_1347702[hParam0 /*49*/].f_37));
	
		func_341(hParam0, uParam2, false, true);
	}
	else if (!bParam1)
	{
		func_341(hParam0, uParam2, false, false);
	}

	MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
	func_486(&(Global_1347702[hParam0 /*49*/].f_13), 4096);
	return;
}

BOOL func_496(Hash hParam0, var uParam1) // Position - 0x157CE Hash - 0xF607B79C ^0x9512C6CD
{
	if (hParam0 == 90)
	{
		if (func_344(Global_1347702[hParam0 /*49*/].f_15) != 0)
		{
			Global_1347702[hParam0 /*49*/].f_18 = 80f;
			*uParam1 = { 1015.1127f, 159.72952f, 103.01753f };
			return true;
		}
	}
	else if (hParam0 == 96)
	{
		if (Global_1347702[hParam0 /*49*/].f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return true;
		}
		else
		{
			*uParam1 = { -1629.7104f, -1338.3771f, 82.0174f };
			return true;
		}
	}

	return false;
}

Blip func_497(Hash hParam0) // Position - 0x15864 Hash - 0xBD05D4EC ^0x11B65A46
{
	int num;

	num = joaat("BLIP_STYLE_RCM");

	if (!func_47(hParam0))
		return num;

	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		num = joaat("BLIP_STYLE_MISSION");
	else if (Global_1347702[hParam0 /*49*/].f_12 & 512 != 0)
		if (Global_40.f_1093 == Global_1347702[hParam0 /*49*/])
			num = joaat("BLIP_STYLE_RCM_TRACKED");
		else
			num = joaat("BLIP_STYLE_RCM");
	else if (Global_40.f_1093 == Global_1347702[hParam0 /*49*/])
		num = joaat("BLIP_STYLE_RCM_TRACKED");
	else
		num = joaat("BLIP_STYLE_RCM");

	return num;
}

BOOL func_498(Hash hParam0) // Position - 0x158F7 Hash - 0xA89AC49 ^0x69E11C5C
{
	if (func_113() != -1)
		return false;

	if (!func_47(hParam0))
		return false;

	if (Global_1347702[hParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[hParam0 /*49*/].f_13 & 2048 != 0)
		return false;

	if (Global_1347702[hParam0 /*49*/].f_18 > -1f)
		return true;

	return false;
}

Vector3 func_499(Hash hParam0) // Position - 0x1595A Hash - 0x563C355B ^0x563C355B
{
	switch (hParam0)
	{
		case 4:
			return 1794.0404f, -1314.7915f, 43.0923f;
	
		case 26:
			return -235.2066f, 763.6583f, 117.085f;
	
		case 30:
			return 1288.87f, -1397.85f, 77.93f;
	
		case 32:
			return 1234.24f, -1425.58f, 71.18f;
	
		case 33:
			return 905.92f, -421.19f, 88.23f;
	
		case 36:
			return -2476.07f, 832.13f, 141.25f;
	
		case 38:
			return -329.32f, -366.6f, 87f;
	
		case 39:
			return 97.4f, -212.47f, 111.6f;
	
		case 41:
			return 337.3075f, -684.5404f, 41.8362f;
	
		case 43:
			return 2586.4937f, -1009.1538f, 43.24f;
	
		case 49:
			return -2178.646f, -245.6886f, 191.1569f;
	
		case 51:
			return -1709.38f, -335.07f, 176.95f;
	
		case 53:
			return 2480.1f, -1377.69f, 45.32f;
	
		case 56:
			return 2011.776f, -504.0132f, 40.983f;
	
		case 57:
			return 1383.38f, -1336.83f, 77.59f;
	
		case 65:
			return -2095.11f, 656.32f, 119.87f;
	
		case 69:
			return 2943.93f, 1377.15f, 43.22f;
	
		case 70:
			return 2945.42f, 1342.78f, 43.92f;
	
		case 77:
			return 2793.35f, -1174.5f, 46.89f;
	
		case 78:
			return 2734.3586f, -1207.6818f, 48.6752f;
	
		case 80:
			return 2740.808f, -1312.8052f, 46.648f;
	
		case 81:
			return 2503.7546f, -1164.5312f, 48.1928f;
	
		case 84:
			return -73.18f, -392.3f, 70.84f;
	
		case 88:
			return 2480.53f, -399.62f, 41.42f;
	
		case 89:
			return 1576.261f, -251.85f, 79.21f;
	
		case 91:
			return 1496.3479f, -1083.2855f, 54.1105f;
	
		case 92:
			return 1407.31f, 316.83f, 88.9555f;
	
		case 94:
			return 1414.4f, 248.2f, 88.85f;
	
		case 101:
			return -1378.6558f, -735.3399f, 90.8243f;
	
		case 102:
			return -1666.59f, 610.82f, 124.03f;
	
		case 103:
			return 1356.44f, 533.95f, 86.12f;
	
		case 104:
			return 2407f, -585.32f, 40.66f;
	
		case 105:
			return -219.25f, 212.93f, 94.15f;
	
		case 116:
			return 211.99f, 512.98f, 126.54f;
	
		case 117:
			return -329.2f, 797.9f, 116.89f;
	
		case 118:
			return -300.3652f, 814.9069f, 117.4111f;
	
		case 119:
			return -1043.9886f, 434.5095f, 53.6802f;
	
		case 121:
			return 2520.88f, 421.94f, 65.91f;
	
		case 127:
			return 2834.68f, -1048.04f, 42.86f;
	
		case 133:
			return 2688.4268f, -1121.7657f, 49.6782f;
	
		case 135:
			return -576.08f, 524.9f, 97.86f;
	
		case 136:
			return 1248.01f, -1280.07f, 75.17f;
	
		case 143:
			return 2954.45f, 523.05f, 44.47f;
	
		case 144:
			return 2304.697f, -0.13289f, 45.70486f;
	
		case 146:
			return -585.6761f, -347.21603f, 81.28532f;
	
		case 151:
			return 556.271f, 172.08f, 133.34348f;
	
		case 152:
			return 556.271f, 172.08f, 133.34348f;
	
		default:
		
	}

	return Global_1347702[hParam0 /*49*/].f_24;
}

void func_500(int iParam0) // Position - 0x15DDE Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_113())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 || iParam0;
			break;
	}

	return;
}

void func_501(Hash hParam0) // Position - 0x15E0A Hash - 0x61A76EF4 ^0x86150C0D
{
	if (!func_498(hParam0))
	{
		if (Global_1347702[hParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
					MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			
				func_486(&(Global_1347702[hParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
		
			func_490(&(Global_1347702[hParam0 /*49*/].f_13), 32);
		}
	}

	return;
}

void func_502(Hash hParam0) // Position - 0x15EAD Hash - 0xAC04978C ^0x82563A0D
{
	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_KEY_MISSION"));
	
		switch (hParam0)
		{
			case 140:
			case 142:
				MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_JOB_LOANSHARK"));
				break;
		}
	}

	return;
}

int func_503(int iParam0) // Position - 0x15F04 Hash - 0x84838E68 ^0x84838E68
{
	switch (iParam0)
	{
		case -1:
			return -1;
	
		case 0:
			return 43;
	
		case 1:
			return 71;
	
		case 2:
			return 98;
	
		case 3:
			return 9;
	
		case 4:
			return 58;
	
		case 5:
			return 4;
	
		case 6:
			return 79;
	
		case 7:
			return 22;
	
		case 8:
			return 37;
	
		default:
		
	}

	iParam0 != -1;
	return -1;
}

BOOL func_504(int iParam0) // Position - 0x15F87 Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_505(int iParam0) // Position - 0x15F9D Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

BOOL func_506(int iParam0) // Position - 0x15FC6 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_592(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_593(iParam0))
			if (BUILTIN::VDIST(Global_36, func_594(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_594(iParam0), false) <= func_595();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_595();
	}

	return func_596();
}

BOOL func_507(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x16056 Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37) && Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[hParam0 /*49*/].f_27 == iParam2;

	return false;
}

void func_508(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x1609A Hash - 0x436A2EB9 ^0x436A2EB9
{
	int num;
	Hash hash;
	Hash styleHash;

	if (!func_183(iParam0))
		return;

	switch (func_597(iParam0))
	{
		case 1:
			num = func_182(iParam0);
		
			if (func_598(num, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
				if (func_599(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_599(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[num /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[num /*74*/].f_27, styleHash);
			
				if (!func_600(num))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_601(&Global_1835011[num /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[num /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			hash = func_182(iParam0);
		
			if (func_602(hash, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_497(hash))
				{
					case joaat("BLIP_STYLE_RCM_BOUNTY"):
						styleHash = joaat("BLIP_STYLE_RCM_BOUNTY_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM"):
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_MISSION"):
						styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
						break;
				
					case joaat("BLIP_STYLE_RCM_TRACKED"):
						styleHash = joaat("BLIP_STYLE_RCM_TRACKED_HIDDEN");
						break;
				
					default:
						styleHash = joaat("BLIP_STYLE_RCM_HIDDEN");
						break;
				}
			}
			else
			{
				styleHash = func_497(hash);
			}
		
			if (Global_1347702[hash /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[hash /*49*/].f_37, styleHash);
				func_502(hash);
				Global_1347702[hash /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

BOOL func_509(int iParam0, int iParam1) // Position - 0x16296 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_510(Hash hParam0) // Position - 0x162A5 Hash - 0x38C3233C ^0x38C3233C
{
	if (hParam0 == 97 || hParam0 == 99 || hParam0 == 6)
		return true;

	return false;
}

int func_511(int iParam0) // Position - 0x162CF Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x162EE Hash - 0xA17D549C ^0x9BCF9046
{
	switch (iParam0)
	{
		case 0:
			return "ArticleHeading";
	
		case 1:
			return "ArticleSubHeading1";
	
		case 2:
			return "ArticleSubHeading2";
	
		case 3:
			return "ArticleSubHeading3";
	
		case 4:
			return "ArticleSubHeading4";
	
		case 5:
			return "ArticleBody1";
	
		case 6:
			return "ArticleBody2";
	
		case 7:
			return "ArticleBody3";
	
		case 8:
			return "ArticleBody4";
	
		case 9:
			return "ArticleBody5";
	
		case 10:
			return "ArticleBody6";
	
		case 11:
			return "ArticleBody7";
	
		case 12:
			return "ArticleBody8";
	
		case 13:
			return "ArticleBody9";
	
		case 14:
			return "ArticleBody10";
	
		default:
		
	}

	return "";
}

Hash func_513(int iParam0) // Position - 0x163C5 Hash - 0x8A42746 ^0x8A42746
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 3;
	
		case 3:
			return 3;
	
		case 4:
			return 3;
	
		default:
		
	}

	return 4;
}

char* func_514(Hash hParam0, int iParam1) // Position - 0x16408 Hash - 0x42D82A11 ^0xE6D4EC6D
{
	switch (iParam1)
	{
		case 0:
			return "textField0";
	
		case 1:
			return "textField1";
	
		case 2:
			return "textField2";
	
		case 3:
			return "textField3";
	
		case 4:
			return "textField4";
	
		case 5:
			return "textField5";
	
		case 6:
			return "textField6";
	
		case 7:
			return "textField7";
	}

	return "";
}

struct<4> func_515() // Position - 0x1649C Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_516(Hash hParam0, Hash hParam1) // Position - 0x164A8 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_517(int iParam0) // Position - 0x164C2 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_361(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_518(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_603(num7) - func_603(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_518(float fParam0) // Position - 0x1652C Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_519(int iParam0) // Position - 0x165B8 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_520(int iParam0) // Position - 0x165F1 Hash - 0xB8632262 ^0xB8632262
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

int func_521(float fParam0, float fParam1) // Position - 0x16670 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_518(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_603(num));
	num3 = BUILTIN::TO_FLOAT(func_603(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_522(int iParam0) // Position - 0x166E3 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_604(iParam0, &num))
		return func_603(num);

	switch (iParam0)
	{
		case 0:
			if (func_605())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_605())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_605())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_523(int iParam0) // Position - 0x1676F Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_524(int iParam0, int iParam1, int iParam2) // Position - 0x167A1 Hash - 0x29688DE6 ^0xE6AECA16
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

	num = num + func_606(iParam0);
	str3 = func_608(func_607(num, iParam2));
	str5 = func_609(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_610(iParam0));
	num2 = func_611(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_612(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_233(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_613(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_525(int iParam0, int iParam1) // Position - 0x16899 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_526(int iParam0) // Position - 0x168B2 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_527(BOOL bParam0) // Position - 0x168C8 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_528(Hash hParam0) // Position - 0x168ED Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_529(Hash hParam0) // Position - 0x168FD Hash - 0xB8632262 ^0xB8632262
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

int func_530(Hash hParam0) // Position - 0x169A4 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_531(Hash hParam0) // Position - 0x169DD Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_614(&entity, 0, i, &model) && !func_614(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_615(entity, &model);
		
			if (func_73(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_532() // Position - 0x16A49 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_616(Global_35, &unk);
	unk31 = { func_348(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_617(false);
	func_618(7);
	func_619(joaat("kit_bandana"), true, true, false);

	if (func_315() == 1160113249)
	{
		func_619(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_619(-361635024, true, true, true);
	}

	func_620(Global_35, &unk);
	return;
}

int func_533(int iParam0) // Position - 0x16AD2 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_534(int iParam0) // Position - 0x16AF7 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_535(int iParam0) // Position - 0x16B0A Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_536(int iParam0) // Position - 0x16B1D Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_537(int iParam0) // Position - 0x16B30 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_538(int iParam0) // Position - 0x16B42 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_539(int iParam0, int iParam1) // Position - 0x16B54 Hash - 0x893AC59E ^0x893AC59E
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

void func_540(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x16BEE Hash - 0xA65AB937 ^0xA65AB937
{
	func_622(uParam0, iParam6);
	func_623(uParam0, iParam5);
	func_624(uParam0, iParam4);
	func_625(uParam0, iParam3);
	func_626(uParam0, iParam2);
	func_627(uParam0, iParam1);
	return;
}

int func_541(Hash hParam0) // Position - 0x16C26 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_293(outSlotId);
}

int func_542(int iParam0) // Position - 0x16C49 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_543(Hash hParam0, int iParam1) // Position - 0x16CCA Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_215(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_622(&num, year);
	func_623(&num, month);
	func_624(&num, day);
	func_625(&num, hour);
	func_626(&num, minute);
	func_627(&num, second);
	return num;
}

BOOL func_544(int iParam0, int iParam1, BOOL bParam2) // Position - 0x16D2F Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_628(iParam1) || !func_628(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_545(int iParam0) // Position - 0x16D5C Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_322(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_546(int iParam0, int iParam1) // Position - 0x16D8F Hash - 0x8FA0E29 ^0xC3F68E87
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

void func_547(int iParam0, int iParam1) // Position - 0x17EA8 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_629(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_629(&iParam0->f_2[i /*2*/], 1))
					func_630(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_548(int iParam0, int iParam1, int iParam2) // Position - 0x17FD4 Hash - 0x92468DBF ^0x901F6E3B
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_631(iParam0, 1))
		func_632(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_549(int iParam0, int iParam1) // Position - 0x1801C Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_550(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x18035 Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_436(num2, num);
	
		if (bParam1)
			func_436(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_436(num3, num);
	}

	return;
}

BOOL func_551(int iParam0) // Position - 0x18121 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_315();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_552(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x18147 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_553(Hash hParam0, int iParam1, var uParam2) // Position - 0x1818B Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_554(int iParam0, int iParam1) // Position - 0x1819C Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_294(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_555(var uParam0) // Position - 0x181BA Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_556(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x18205 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_113() == -1)
		func_633(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_634(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_557(BOOL bParam0, int iParam1) // Position - 0x1827B Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_113() == -1)
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

void func_558(int iParam0, BOOL bParam1, int iParam2) // Position - 0x182F8 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_635(&(Global_1946054.f_1378), iParam0);
	func_636(2, iParam0, 6);

	if (bParam1)
		func_559(false, true);

	return;
}

void func_559(BOOL bParam0, BOOL bParam1) // Position - 0x18320 Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_637(0);

	if (bParam0)
	{
		func_443(8);
		func_443(512);
	}
	else
	{
		func_443(8);
		func_443(16);
	}

	return;
}

BOOL func_560(int iParam0) // Position - 0x18353 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_561(int iParam0) // Position - 0x18368 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_562(int iParam0) // Position - 0x18388 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_563(float fParam0) // Position - 0x1839C Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_564(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x183B7 Hash - 0xC24B5846 ^0x863261C9
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

Hash func_565() // Position - 0x18460 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_566(int iParam0) // Position - 0x1846F Hash - 0xCCDB3731 ^0x965A7AB5
{
	Hash hash;

	hash = func_465(iParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_391(hash);
}

int func_567(Hash hParam0) // Position - 0x18492 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_638(hParam0))
		num = 0;
	else if (func_639(hParam0))
		num = 1;
	else if (func_640(hParam0))
		num = 2;
	else if (func_641(hParam0))
		num = 3;

	return num;
}

BOOL func_568(int iParam0) // Position - 0x184D5 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_61(func_642(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_569(int iParam0) // Position - 0x18515 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_61(func_643(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_570(int iParam0) // Position - 0x18554 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_571() // Position - 0x18567 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_113() != -1)
		return;

	func_162(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_364(1);
	func_524(1, num, 0);
	return;
}

void func_572(int iParam0) // Position - 0x18599 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_573() // Position - 0x185B0 Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_113() != -1)
		return;

	func_162(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_364(2);
	func_524(2, num, 0);
	return;
}

void func_574() // Position - 0x185E2 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_113() != -1)
		return;

	func_162(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_364(0);
	func_524(0, num, 0);
	return;
}

BOOL func_575(Any anParam0) // Position - 0x18614 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_576(Hash hParam0) // Position - 0x1864A Hash - 0x94D015F5 ^0x14C4310B
{
	int i;

	for (i = 0; i < Global_1935689.f_19.f_1; i = i + 1)
	{
		if (func_644(hParam0, Global_1935689.f_19.f_2[i /*2*/]))
			return true;
	}

	return false;
}

BOOL func_577(Hash hParam0) // Position - 0x18685 Hash - 0x41E81FD3 ^0x6129C7A4
{
	if (func_31(hParam0, -839724752))
		return func_31(hParam0, 1937586541);

	return false;
}

BOOL func_578(Hash hParam0, int iParam1) // Position - 0x186AA Hash - 0xD64A2C8D ^0x52F52E2B
{
	if (func_31(hParam0, 173360570))
		return 0;

	switch (Global_1935689.f_17)
	{
		case 1:
			if (iParam1 == -2074770370)
				if (func_31(hParam0, joaat("ci_tag_item_meat_animal")) || func_31(hParam0, -839724752) || func_31(hParam0, -136654233))
					return 1;
			break;
	
		case 2:
			if (iParam1 == -2074770370)
				if (func_31(hParam0, joaat("ci_tag_item_meat_animal")) || func_31(hParam0, -839724752) || func_31(hParam0, -136654233) || func_31(hParam0, 554195525) || func_31(hParam0, -1238310989) || func_31(hParam0, 2127114599) || func_31(hParam0, -1864584831) || func_31(hParam0, 1068498601) || func_31(hParam0, 1967571132))
					return 1;
			break;
	
		default:
			break;
	}

	return 0;
}

BOOL func_579(Hash hParam0, int iParam1) // Position - 0x187C8 Hash - 0xCF0E4834 ^0xCF0E4834
{
	if (iParam1 == 101)
		return func_645(hParam0);

	if (func_646(hParam0, iParam1))
		return false;

	return func_647(hParam0, iParam1);
}

BOOL func_580(Hash hParam0) // Position - 0x187FA Hash - 0x242F1AF ^0x1D0FE23F
{
	Hash hash;

	if (hParam0 != 0)
	{
		if (func_107(hParam0, 8388608))
		{
			hash = func_285(func_648(hParam0), 10);
		
			if (hash != 0 && func_61(hash, 1, false))
			{
				Global_1901328.f_94 = 1;
				return func_649(func_648(hParam0), hParam0);
			}
			else if (hParam0 == func_285(func_650(hParam0), 5))
			{
				if (!func_48(39))
					return false;
				else
					return true;
			}
			else if (hParam0 == func_285(func_651(hParam0), 5))
			{
				if (!func_48(49))
					return false;
				else
					return true;
			}
			else if (func_652(hParam0))
			{
				if (!func_48(41))
					return false;
				else
					return func_654(func_653(hParam0), 5, false);
			}
			else if (func_655(hParam0))
			{
				if (func_61(-1813857561, 1, false))
					if (!func_48(48))
						return false;
					else
						return true;
				else
					return false;
			}
			else if (func_656(hParam0))
			{
				if (!func_48(38))
					return false;
				else
					return true;
			}
			else if (hParam0 == -1813857561)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

BOOL func_581(int iParam0, int iParam1) // Position - 0x18940 Hash - 0x4134D2DF ^0x8D80BF31
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_582(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_582(int iParam0, var uParam1) // Position - 0x18990 Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_483(iParam0))
		return false;

	num = func_484(iParam0);
	return *uParam1 && num != false;
}

void func_583(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x189B6 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_483(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_584(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x189E7 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_483(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

BOOL func_585(int iParam0) // Position - 0x18A23 Hash - 0x854AC499 ^0x54AC68DD
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1905944.f_22[iParam0 /*9*/].f_1;

	return false;
}

void func_586(int iParam0) // Position - 0x18A4B Hash - 0xF6DB87B5 ^0xF6DB87B5
{
	func_657(true);
	return;
}

BOOL func_587(int iParam0) // Position - 0x18A58 Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_220(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_588(int iParam0) // Position - 0x18A7C Hash - 0xAD18F8AE ^0xAD18F8AE
{
	int num;
	int num2;

	func_220(iParam0, &num, &num2);
	func_658(num, num2);
	return;
}

BOOL func_589(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x18A96 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_659(bParam1, bParam2, bParam3);

	if (Global_1572887.f_12 != -1)
		if (plParam0 == Global_1224589.f_5)
			if (!Global_1224589.f_6)
				return false;
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
			return false;
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(plParam0)))
		return false;

	if (LAW::IS_LAW_INCIDENT_ACTIVE(plParam0))
	{
		LAW::_0xCBFB4951F2E3934C(plParam0, &data);
	
		if (bParam3 || data.f_10 > 0 || PLAYER::GET_PLAYER_WANTED_LEVEL(plParam0) > 0)
			return true;
	}
	else if (bParam2 && !(LAW::_0x148E7AC8141C9E64(plParam0) == 1370593166))
	{
		return false;
	}

	for (i = 0; i < 24; i = i + 1)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(plParam0, i, &crimeType))
			if (crimeType.f_10 && bParam3 || LAW::_0xDAEFDFDB2AEECE37(crimeType, crimeType.f_7) > 0)
				return true;
	}

	if (bParam1)
		if (LAW::ARE_WITNESSES_ACTIVE(plParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(plParam0, false, 0))
			if (bParam3 || LAW::_0xE083BEDA81709891(plParam0) > 0)
				return true;

	return false;
}

void func_590(var uParam0, int iParam1) // Position - 0x18BCB Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_591(int iParam0, int iParam1) // Position - 0x18BDC Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_592(int iParam0) // Position - 0x18BED Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return false;
	}

	return true;
}

BOOL func_593(int iParam0) // Position - 0x18C1D Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_594(int iParam0) // Position - 0x18C3B Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (iParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_595() // Position - 0x18C72 Hash - 0x97B49396 ^0x97B49396
{
	switch (Global_40.f_4283)
	{
		case 2:
		case 6:
		case 7:
		case 8:
			return 70f;
	}

	return 25f;
}

BOOL func_596() // Position - 0x18CAE Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_597(int iParam0) // Position - 0x18CBE Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_183(iParam0))
		return 0;

	return func_660(func_336(iParam0));
}

BOOL func_598(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x18CDE Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_661(iParam0, bParam2, iParam3))
		return true;

	return false;
}

BOOL func_599(int iParam0, int iParam1) // Position - 0x18D00 Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (iParam1 != -1)
		return false;

	if (func_662(iParam0))
	{
		switch (iParam0)
		{
			case 14:
			case 34:
				return false;
		}
	}

	switch (iParam0)
	{
		case 5:
		case 8:
		case 10:
		case 12:
		case 13:
		case 14:
		case 18:
		case 21:
		case 27:
		case 28:
		case 29:
		case 34:
		case 40:
		case 41:
		case 44:
		case 46:
		case 48:
		case 51:
		case 54:
		case 55:
		case 63:
			return true;
	}

	return false;
}

BOOL func_600(int iParam0) // Position - 0x18DC4 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_663(iParam0);
}

BOOL func_601(int iParam0, int iParam1) // Position - 0x18DD2 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

BOOL func_602(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x18DE3 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_507(hParam0, bParam2, iParam3))
		return true;

	return false;
}

int func_603(int iParam0) // Position - 0x18E05 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_604(int iParam0, var uParam1) // Position - 0x18E7B Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_605() // Position - 0x18E84 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_606(int iParam0) // Position - 0x18E8D Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_215(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_215(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_215(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_607(int iParam0, int iParam1) // Position - 0x18EEF Hash - 0xD5391B76 ^0x13B70653
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

const char* func_608(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x18F21 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_609(int iParam0) // Position - 0x18F35 Hash - 0x21CE226B ^0x62635CE1
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

char* func_610(int iParam0) // Position - 0x18F70 Hash - 0x21CE226B ^0xB64DAF85
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

int func_611(int iParam0) // Position - 0x18FAB Hash - 0x21FAF347 ^0x467E3BE5
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

int func_612(int iParam0) // Position - 0x18FE6 Hash - 0x5163992 ^0x5163992
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

int func_613(int iParam0) // Position - 0x19015 Hash - 0x21FAF347 ^0xA8C8F0DA
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

BOOL func_614(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x19050 Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_664(iParam1) && !func_665(iParam1))
		ped = func_666(iParam1);
	else
		return false;

	func_667(uParam3);
	num = func_668(iParam2);

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

void func_615(Entity eParam0, var uParam1) // Position - 0x190EF Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_669(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_670(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_616(Ped pedParam0, Any* panParam1) // Position - 0x19139 Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_242(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_617(BOOL bParam0) // Position - 0x1919E Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_73(hash, 0))
			func_671(hash, false, bParam0);
	
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

void func_618(int iParam0) // Position - 0x19237 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_113() == -1)
	{
		func_672(352481484);
	
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
	
		if (func_110(hash) != -999503751)
			func_673(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_674(hash, false))
			func_675(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_619(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x19427 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_676(hParam0))
		return;

	hash = func_110(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_677(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_677(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_677(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_677(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_677(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_677(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_678(0))
	{
		func_679(hParam0, true);
	
		if (func_315() == 1160113249)
			func_679(func_678(-2125499975), false);
		else
			func_679(func_678(1160113249), false);
	}

	func_680();

	if (func_681(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_215(false), hParam0, 0);

	func_675(hParam0, bParam3);

	if (bParam2)
		func_559(false, false);

	return;
}

void func_620(Ped pedParam0, var uParam1) // Position - 0x1958D Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_241(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

var func_621(BOOL bParam0, var uParam1, var uParam2) // Position - 0x19636 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_622(var uParam0, int iParam1) // Position - 0x1964D Hash - 0xD05180BA ^0x39589262
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

void func_623(var uParam0, int iParam1) // Position - 0x196D3 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_624(var uParam0, int iParam1) // Position - 0x1970F Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_534(*uParam0);
	num2 = func_533(*uParam0);

	if (iParam1 < 1 || iParam1 > func_539(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_625(var uParam0, int iParam1) // Position - 0x19762 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_626(var uParam0, int iParam1) // Position - 0x1979D Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_627(var uParam0, int iParam1) // Position - 0x197D6 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_628(int iParam0) // Position - 0x1980E Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_538(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_537(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_536(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_533(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_534(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_535(iParam0);

	if (num6 < 1 || num6 > func_539(num5, num4))
		return false;

	return true;
}

BOOL func_629(var uParam0, int iParam1) // Position - 0x198EA Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_630(var uParam0, int iParam1, int iParam2) // Position - 0x198FB Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_631(int iParam0, int iParam1) // Position - 0x1990E Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_632(int iParam0, int iParam1) // Position - 0x1991F Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_633(Hash hParam0, int iParam1, int iParam2) // Position - 0x19932 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_634(Hash hParam0, int iParam1, int iParam2) // Position - 0x1998D Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_635(var uParam0, int iParam1) // Position - 0x199F7 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_113() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_633(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_634(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_636(BOOL bParam0, int iParam1, int iParam2) // Position - 0x19A92 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_113() == -1)
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

void func_637(int iParam0) // Position - 0x19B1A Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_638(Hash hParam0) // Position - 0x19B2B Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_73(hParam0, 0))
		return false;

	if (func_31(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_639(Hash hParam0) // Position - 0x19B55 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_73(hParam0, 0))
		return false;

	if (func_31(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_640(Hash hParam0) // Position - 0x19B7F Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_73(hParam0, 0))
		return false;

	if (func_31(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_641(Hash hParam0) // Position - 0x19BA9 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_73(hParam0, 0))
		return false;

	if (func_31(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_642(int iParam0, int iParam1) // Position - 0x19BD3 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_682(iParam0);
	
		case 1:
			return func_683(iParam0);
	
		case 2:
			return func_684(iParam0);
	
		case 3:
			return func_685(iParam0);
	}

	return 0;
}

Hash func_643(int iParam0, int iParam1) // Position - 0x19C2C Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_686(iParam0);
	
		case 1:
			return func_687(iParam0);
	
		case 2:
			return func_688(iParam0);
	
		case 3:
			return func_689(iParam0);
	
		case 4:
			return func_690(iParam0);
	
		case 5:
			return func_691(iParam0);
	
		case 6:
			return func_692(iParam0);
	
		case 7:
			return func_693(iParam0);
	
		case 8:
			return func_694(iParam0);
	}

	return 0;
}

BOOL func_644(Hash hParam0, int iParam1) // Position - 0x19CDF Hash - 0x930C4241 ^0x2C8F95BA
{
	return iParam1 == func_69(hParam0, 1224357681);
}

BOOL func_645(Hash hParam0) // Position - 0x19CF5 Hash - 0xA839C3B7 ^0xFE515ADA
{
	int i;
	int num;

	i = 0;
	num = Global_1914319.f_17378.f_1010.f_201;

	if (hParam0 != 0)
	{
		if (num < 200)
		{
			for (i = 0; i < num; i = i + 1)
			{
				if (Global_1914319.f_17378.f_1010[i] == hParam0)
					return 1;
			}
		}
	}

	return 0;
}

BOOL func_646(Hash hParam0, int iParam1) // Position - 0x19D46 Hash - 0xBD05594F ^0xF2BC2977
{
	if (func_113() == -1)
		if (iParam1 == 61)
			if (func_31(hParam0, 1490540191))
				return true;

	return false;
}

BOOL func_647(Hash hParam0, int iParam1) // Position - 0x19D70 Hash - 0x83A1723C ^0x83A1723C
{
	var unk;
	int num;
	Hash hash;

	if (hParam0 == 0)
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_695(iParam1);

	if (num == -1)
		return 0;

	if (!func_374(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_696(num);

	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
	{
		hash = hParam0;
		unk.f_2 = 549615901;
		unk.f_3 = hash;
	
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(unk.f_1), &unk))
			return 1;
	}

	return 0;
}

Hash func_648(Hash hParam0) // Position - 0x19DF2 Hash - 0x26530429 ^0xECF5329B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			return joaat("taxidermy_order_05");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			return joaat("taxidermy_order_04");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			return joaat("taxidermy_order_03");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			return joaat("taxidermy_order_01");
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			return joaat("taxidermy_order_02");
	
		default:
		
	}

	return 0;
}

BOOL func_649(Hash hParam0, Hash hParam1) // Position - 0x19E49 Hash - 0x97EE4136 ^0x97EE4136
{
	int num;

	num = func_225(hParam0, 20);

	if (num == 5)
		if (func_654(hParam0, 5, false) && func_654(hParam0, 6, false) && func_654(hParam0, 7, false) && func_654(hParam0, 8, false) && func_654(hParam0, 9, false))
			return func_107(hParam1, 8388608);
	else if (num == 4)
		if (func_654(hParam0, 5, false) && func_654(hParam0, 6, false) && func_654(hParam0, 7, false) && func_654(hParam0, 8, false))
			return func_107(hParam1, 8388608);
	else if (num == 3)
		if (func_654(hParam0, 5, false) && func_654(hParam0, 6, false) && func_654(hParam0, 7, false))
			return func_107(hParam1, 8388608);
	else if (num == 2)
		if (func_654(hParam0, 5, false) && func_654(hParam0, 6, false))
			return func_107(hParam1, 8388608);

	return false;
}

Hash func_650(Hash hParam0) // Position - 0x19F6E Hash - 0xB8EC44B7 ^0x1B1A64FC
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_14"):
			return joaat("bone_13");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_06"):
			return joaat("bone_05");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_25"):
			return joaat("bone_24");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_11"):
			return joaat("bone_10");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_03"):
			return joaat("bone_02");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_28"):
			return joaat("bone_27");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_09"):
			return joaat("bone_08");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_22"):
			return joaat("bone_21");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_21"):
			return joaat("bone_20");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_17"):
			return joaat("bone_16");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_24"):
			return joaat("bone_23");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_07"):
			return joaat("bone_06");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_18"):
			return joaat("bone_17");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_15"):
			return joaat("bone_14");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_23"):
			return joaat("bone_22");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_08"):
			return joaat("bone_07");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_20"):
			return joaat("bone_19");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_19"):
			return joaat("bone_18");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_04"):
			return joaat("bone_03");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_27"):
			return joaat("bone_26");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_01"):
			return joaat("bone_00");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_30"):
			return joaat("bone_29");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_12"):
			return joaat("bone_11");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_02"):
			return joaat("bone_01");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_29"):
			return joaat("bone_28");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_10"):
			return joaat("bone_09");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_26"):
			return joaat("bone_25");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_16"):
			return joaat("bone_15");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_05"):
			return joaat("bone_04");
	
		case joaat("DOCUMENT_DINO_BONES_MAILER_LETTER_13"):
			return joaat("bone_12");
	
		default:
		
	}

	return 0;
}

Hash func_651(Hash hParam0) // Position - 0x1A123 Hash - 0xB8EC44B7 ^0xCC0DC7B6
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_08"):
			return joaat("rock_07_hrt");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_07"):
			return joaat("rock_06_hrt");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_03"):
			return joaat("rock_02_cml");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_09"):
			return joaat("rock_08_roa");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_04"):
			return joaat("rock_03_cml");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_05"):
			return joaat("rock_04_bgv");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_06"):
			return joaat("rock_05_bgv");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_01"):
			return joaat("rock_00_grz");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_02"):
			return joaat("rock_01_grz");
	
		case joaat("DOCUMENT_ROCK_CARVINGS_MAILER_LETTER_10"):
			return joaat("rock_09_roa");
	
		default:
		
	}

	return 0;
}

BOOL func_652(Hash hParam0) // Position - 0x1A1C0 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
		case joaat("provision_fish_muskie_legendary"):
		case joaat("provision_fish_bluegill_legendary"):
		case joaat("provision_fish_lake_sturgeon_legendary"):
		case joaat("provision_fish_redfin_pickerel_legendary"):
		case joaat("provision_fish_steelhead_trout_legendary"):
		case joaat("provision_fish_longnose_gar_legendary"):
		case joaat("provision_fish_largemouth_bass_legendary"):
		case joaat("provision_fish_rock_bass_legendary"):
		case joaat("provision_fish_perch_legendary"):
		case joaat("provision_fish_bullhead_catfish_legendary"):
		case joaat("provision_fish_sockeye_salmon_legendary"):
		case joaat("provision_fish_smallmouth_bass_legendary"):
			return true;
	}

	return false;
}

Hash func_653(Hash hParam0) // Position - 0x1A226 Hash - 0xB8EC44B7 ^0x75D9F70F
{
	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			return joaat("legendary_fish_02");
	
		case joaat("provision_fish_muskie_legendary"):
			return joaat("legendary_fish_06");
	
		case joaat("provision_fish_bluegill_legendary"):
			return joaat("legendary_fish_13");
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			return joaat("legendary_fish_03");
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			return joaat("legendary_fish_08");
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			return joaat("legendary_fish_12");
	
		case joaat("provision_fish_longnose_gar_legendary"):
			return joaat("legendary_fish_05");
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			return joaat("legendary_fish_04");
	
		case joaat("provision_fish_rock_bass_legendary"):
			return joaat("legendary_fish_09");
	
		case joaat("provision_fish_perch_legendary"):
			return joaat("legendary_fish_07");
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			return joaat("legendary_fish_01");
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			return joaat("legendary_fish_11");
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			return joaat("legendary_fish_10");
	
		default:
		
	}

	return 0;
}

BOOL func_654(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1A2ED Hash - 0xC1832837 ^0xFC89CC12
{
	Hash hash;

	hash = func_285(hParam0, iParam1);

	if (hash == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT") || hash == joaat("provision_fish_bullhead_catfish_legendary") || hash == joaat("provision_fish_chain_pickerel_legendary") || hash == joaat("provision_fish_perch_legendary") || hash == joaat("provision_fish_redfin_pickerel_legendary") || hash == joaat("provision_fish_rock_bass_legendary") || hash == joaat("provision_fish_bluegill_legendary"))
	{
		if (func_61(hash, 1, false))
		{
			if (bParam2)
			{
				Global_1901328.f_94 = 1;
				func_697(hash, 1, false, -142743235, false);
			}
		
			return true;
		}
	}
	else if (hash == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT") || hash == joaat("provision_fish_lake_sturgeon_legendary") || hash == joaat("provision_fish_longnose_gar_legendary") || hash == joaat("provision_fish_muskie_legendary") || hash == joaat("provision_fish_largemouth_bass_legendary") || hash == joaat("provision_fish_smallmouth_bass_legendary") || hash == joaat("provision_fish_sockeye_salmon_legendary") || hash == joaat("provision_fish_steelhead_trout_legendary"))
	{
		if (func_698(hash, bParam2))
			return true;
	}

	return false;
}

BOOL func_655(Hash hParam0) // Position - 0x1A4F6 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("provision_ro_flower_clamshell"):
		case joaat("provision_ro_flower_acunas_star"):
		case joaat("provision_ro_flower_cigar"):
		case joaat("provision_ro_flower_rat_tail"):
		case joaat("provision_ro_flower_night_scented"):
		case joaat("provision_ro_flower_lady_of_night"):
		case joaat("provision_ro_flower_sparrows"):
		case joaat("provision_ro_flower_queens"):
		case joaat("provision_ro_flower_spider"):
		case joaat("provision_ro_flower_dragons"):
		case joaat("provision_ro_flower_lady_slipper"):
		case joaat("provision_ro_flower_moccasin"):
		case joaat("provision_ro_flower_ghost"):
			return true;
	}

	return false;
}

BOOL func_656(Hash hParam0) // Position - 0x1A55C Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_CIG_CARD_INV_SET"):
		case joaat("DOCUMENT_CIG_CARD_ACT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GRL_SET"):
		case joaat("DOCUMENT_CIG_CARD_ART_SET"):
		case joaat("DOCUMENT_CIG_CARD_LND_SET"):
		case joaat("DOCUMENT_CIG_CARD_PAM_SET"):
		case joaat("DOCUMENT_CIG_CARD_SPT_SET"):
		case joaat("DOCUMENT_CIG_CARD_AML_SET"):
		case joaat("DOCUMENT_CIG_CARD_PLT_SET"):
		case joaat("DOCUMENT_CIG_CARD_GUN_SET"):
		case joaat("DOCUMENT_CIG_CARD_HOR_SET"):
		case joaat("DOCUMENT_CIG_CARD_VEH_SET"):
			return true;
	}

	return false;
}

void func_657(BOOL bParam0) // Position - 0x1A5BC Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_658(int iParam0, int iParam1) // Position - 0x1A5CC Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_659(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A5F0 Hash - 0xC9655EC3 ^0x88C9AFE1
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

int func_660(BOOL bParam0) // Position - 0x1A68E Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_661(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1A69B Hash - 0x561CE123 ^0xB84B7B4C
{
	if (iParam0 == 18)
		return false;

	if (iParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
		return true;

	return false;
}

BOOL func_662(int iParam0) // Position - 0x1A6E8 Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_699(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

BOOL func_663(int iParam0) // Position - 0x1A718 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

BOOL func_664(int iParam0) // Position - 0x1A73C Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_700(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_665(int iParam0) // Position - 0x1A774 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_700(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_664(iParam0))
		return false;

	ped = func_666(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_666(int iParam0) // Position - 0x1A7C8 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_700(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_667(var uParam0) // Position - 0x1A7F4 Hash - 0x6843C143 ^0xA531F0D1
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

int func_668(int iParam0) // Position - 0x1A89B Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_669(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1A8D3 Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_670(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x1A948 Hash - 0xF684EE16 ^0xD8F147D7
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

void func_671(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A971 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_110(hParam0))
	{
		case -2061583405:
			flag = func_701(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_701(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_701(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_701(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_701(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_701(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_680();

	if (bParam1)
		func_559(false, false);

	return;
}

void func_672(int iParam0) // Position - 0x1AA3E Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_358(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_360(&unk, &num, &num2, false))
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
	
		func_9(num);
	}

	return;
}

void func_673(var uParam0, Hash hParam1, int iParam2) // Position - 0x1AB08 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_702(iParam2, *uParam0);
	func_703(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_674(Hash hParam0, BOOL bParam1) // Position - 0x1AB3E Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_208(hParam0, false, false) };
	guid = { func_246(hParam0, unk, unk.f_4, false) };

	if (func_357(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_215(false), &guid, bParam1);
	return true;
}

void func_675(Hash hParam0, BOOL bParam1) // Position - 0x1AB8A Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_208(hParam0, false, false) };
	guid = { func_246(hParam0, unk, unk.f_4, false) };

	if (func_357(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_215(false), &guid, bParam1);
	return;
}

BOOL func_676(Hash hParam0) // Position - 0x1ABD4 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_113() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_677(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1ABFD Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_704(hash, &unk))
		return 0;

	if (bParam3 && !func_674(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_110(hParam0) != -999503751)
		func_673(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_678(int iParam0) // Position - 0x1ACA5 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_315();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_679(Hash hParam0, BOOL bParam1) // Position - 0x1ACD0 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_208(hParam0, false, false) };
	guid = { func_246(hParam0, unk, unk.f_4, false) };

	if (func_357(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_215(false), &guid);
	return 1;
}

void func_680() // Position - 0x1AD1C Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_113() == -1)
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

BOOL func_681(Hash hParam0) // Position - 0x1AE52 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_706(func_705(hParam0));
}

Hash func_682(int iParam0) // Position - 0x1AE64 Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_683(int iParam0) // Position - 0x1AEF3 Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_684(int iParam0) // Position - 0x1AF82 Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_685(int iParam0) // Position - 0x1B011 Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_686(int iParam0) // Position - 0x1B0A0 Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_687(int iParam0) // Position - 0x1B0E9 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_688(int iParam0) // Position - 0x1B132 Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_689(int iParam0) // Position - 0x1B17B Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_690(int iParam0) // Position - 0x1B1C4 Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_691(int iParam0) // Position - 0x1B20D Hash - 0x51E02475 ^0x25F7B61
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

Hash func_692(int iParam0) // Position - 0x1B256 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_693(int iParam0) // Position - 0x1B29F Hash - 0x51E02475 ^0x50FB5131
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

Hash func_694(int iParam0) // Position - 0x1B2E8 Hash - 0x51E02475 ^0x8656D204
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

int func_695(int iParam0) // Position - 0x1B331 Hash - 0x1497AC6A ^0x1497AC6A
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

int func_696(int iParam0) // Position - 0x1B785 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_707(iParam0);
}

int func_697(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x1B793 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_73(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_213(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_169(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_61(hParam0, 1, bParam4))
		return 0;

	statId = { func_166(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_89(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_89(hParam0, false, false) - iParam1 < 0)
		{
			func_697(hParam0, func_89(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_106(hParam0) == joaat("WEAPON"))
		if (!func_708(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_709(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_115(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_169(hParam0, -iParam1, flag, flag2, flag3);

	func_710(hParam0, iParam1);
	return 1;
}

BOOL func_698(Hash hParam0, BOOL bParam1) // Position - 0x1B907 Hash - 0xD42AA8CA ^0x22FA3BAF
{
	Entity entityFromItem;
	int num;
	var unk;
	Hash hash;
	ItemSet itemset;
	int itemsetSize;
	int i;
	int num2;
	var unk12;
	var unk13;
	var unk14;
	Ped pedIndexFromEntityIndex;
	int j;
	Hash hash2;
	Ped pedIndexFromEntityIndex2;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_35))
	{
		unk = 10;
		itemset = ITEMSET::CREATE_ITEMSET(false);
		PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, itemset);
	
		if (ITEMSET::IS_ITEMSET_VALID(itemset))
		{
			itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);
		
			for (i = 0; i < itemsetSize; i = i + 1)
			{
				entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
			
				if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
				{
				}
				else if (ENTITY::GET_IS_ANIMAL(entityFromItem) || ENTITY::_GET_IS_BIRD(entityFromItem))
				{
					pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
					num = func_711(pedIndexFromEntityIndex, &unk);
					hash2 = func_712(entityFromItem);
				
					if (hash2 == hParam0)
					{
						if (bParam1)
						{
							Global_1901328.f_94 = 1;
							ENTITY::_DELETE_CARRIABLE(&entityFromItem);
							func_169(hash2, -1, false, false, false);
							Global_1901328.f_94 = 0;
						}
					
						ITEMSET::DESTROY_ITEMSET(itemset);
						return true;
					}
				
					for (j = 0; j < num; j = j + 1)
					{
						if (unk[j] == hParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&entityFromItem);
								func_169(unk[j], -1, false, false, false);
								Global_1901328.f_94 = 0;
							}
						
							ITEMSET::DESTROY_ITEMSET(itemset);
							return true;
						}
					}
				}
				else
				{
					pedIndexFromEntityIndex2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
					func_669(pedIndexFromEntityIndex2, &unk12, &unk13, &num2, &unk14);
				
					if (func_670(&hash, pedIndexFromEntityIndex2, num2, unk12))
					{
						if (hash == hParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&entityFromItem);
								func_169(hash, -1, false, false, false);
								Global_1901328.f_94 = 0;
							}
						
							ITEMSET::DESTROY_ITEMSET(itemset);
							return true;
						}
					}
				}
			}
		
			ITEMSET::DESTROY_ITEMSET(itemset);
		}
		else
		{
			return false;
		}
	}

	return func_713(hParam0, bParam1);
}

BOOL func_699(int iParam0) // Position - 0x1BA94 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_714(&(iParam0->f_29), 62))
	{
		switch (func_715())
		{
			case 1:
				if (!func_714(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_714(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_714(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_714(&(iParam0->f_29), 32))
					if (func_714(&(iParam0->f_29), 2))
						if (func_536(func_407()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

int func_700(int iParam0) // Position - 0x1BB3E Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_701(Hash hParam0, int iParam1) // Position - 0x1BB57 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_704(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_110(hParam0) != -999503751)
			func_716(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_110(hParam0) != -999503751)
		func_716(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_674(hParam0, true);
	return 1;
}

void func_702(int iParam0, int iParam1) // Position - 0x1BC3D Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_703(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1BC56 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_717(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_294(func_410(hParam1), 1);
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
		func_718(uParam0);

	return;
}

BOOL func_704(Hash hParam0, var uParam1) // Position - 0x1BCB2 Hash - 0x4A27386E ^0xBC93C855
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

int func_705(Hash hParam0) // Position - 0x1BCF2 Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_706(int iParam0) // Position - 0x1BD42 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

int func_707(int iParam0) // Position - 0x1BD5A Hash - 0xB8EC44B7 ^0x486668F8
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

BOOL func_708(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1BF47 Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_358(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_359(&unk, func_349(false));

	if (!func_360(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_304(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_247(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_9(num);
	num3 < iParam1;
	return true;
}

BOOL func_709(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1C012 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_73(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_208(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_719(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_246(hParam0, unk, unk.f_4, bParam4) };
	return func_247(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_710(Hash hParam0, int iParam1) // Position - 0x1C083 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_31(hParam0, 606799272))
			func_720(hParam0, iParam1);
	
		if (func_31(hParam0, -1112814642) && func_31(hParam0, -1697809989))
			func_137(hParam0, iParam1, true, false);
	}

	return;
}

int func_711(Ped pedParam0, Any* panParam1) // Position - 0x1C0D6 Hash - 0xC08B2C8D ^0x93715860
{
	int damageCleanliness;
	int skinningQuality;
	var unk;
	var unk2;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_669(pedParam0, &skinningQuality, &unk, &damageCleanliness, &unk2);
	num = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(panParam1, pedParam0, damageCleanliness, skinningQuality);
	return num;
}

Hash func_712(Entity eParam0) // Position - 0x1C124 Hash - 0xC81C18F9 ^0xACAAEE80
{
	Ped pedIndexFromEntityIndex;
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return 0;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (!ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
		return 0;

	func_669(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);

	if (func_670(&num2, pedIndexFromEntityIndex, num, unk))
	{
	}

	return num2;
}

BOOL func_713(Hash hParam0, BOOL bParam1) // Position - 0x1C180 Hash - 0xB6F8966C ^0x3A39AAD0
{
	int num;
	int num2;
	int i;
	var unk;
	var unk19;
	Ped ped;
	int num3;

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
	unk19.f_9 = joaat("SLOTID_NONE");
	unk.f_1 = joaat("SLOTID_SATCHEL");
	ped = func_721(0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_722(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), &unk, &num, &num2))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_304(&unk19, i, num, num2))
			{
				if (hParam0 == unk19.f_4)
				{
					if (bParam1)
					{
						num3 = 1;
						func_723(&ped, hParam0, &num3, true, -142743235);
					}
				
					func_9(num);
					return 1;
				}
			}
		}
	
		func_9(num);
	}

	return 0;
}

BOOL func_714(var uParam0, int iParam1) // Position - 0x1C272 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_715() // Position - 0x1C292 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

void func_716(int iParam0, int iParam1, int iParam2) // Position - 0x1C29E Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_724(iParam1);
	func_725(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_726(&(iParam0->f_26), num2);
	
		if (func_727(iParam0->f_26, &num))
			func_728(num, num2);
	}

	return;
}

void func_717(var uParam0) // Position - 0x1C2E7 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_729(&(uParam0->f_3));
	return;
}

void func_718(var uParam0) // Position - 0x1C305 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_730(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

BOOL func_719(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1C326 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_405(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_115(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_215(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

void func_720(Hash hParam0, int iParam1) // Position - 0x1C372 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_113() == -1)
	{
		if (func_95(43))
		{
			if (func_31(hParam0, 412399755))
			{
				func_278(joaat("exotic_stage_01"));
			
				if (func_279() == 0)
				{
					func_219(false, 10);
					num = func_731(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_281(hParam0) < func_282(hParam0))
							func_103(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_95(44))
		{
			if (func_31(hParam0, 709057512))
			{
				func_278(joaat("exotic_stage_02"));
			
				if (func_279() == 1)
				{
					func_219(false, 10);
					num = func_731(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_281(hParam0) < func_282(hParam0))
							func_103(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_95(45))
		{
			if (func_31(hParam0, -1478961327))
			{
				func_278(joaat("exotic_stage_03"));
			
				if (func_279() == 2)
				{
					func_219(false, 10);
					num = func_731(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_281(hParam0) < func_282(hParam0))
							func_103(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_95(46))
		{
			if (func_31(hParam0, -1238404098))
			{
				func_278(joaat("exotic_stage_04"));
			
				if (func_279() == 3)
				{
					func_219(false, 10);
					num = func_731(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_281(hParam0) < func_282(hParam0))
							func_103(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_95(47))
		{
			if (func_31(hParam0, 1160548794))
			{
				func_278(joaat("exotic_stage_05"));
			
				if (func_279() == 4)
				{
					func_219(false, 10);
					num = func_731(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_281(hParam0) < func_282(hParam0))
							func_103(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

Ped func_721(int iParam0) // Position - 0x1C656 Hash - 0x992FCD8C ^0xAA6462C3
{
	Ped lastMount;

	if (func_732(iParam0))
	{
		if (func_113() == -1)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (!ENTITY::DOES_ENTITY_EXIST(lastMount))
				lastMount = func_666(func_700(0));
		}
		else
		{
			lastMount = PED::_GET_LAST_MOUNT(func_733());
		}
	}
	else if (func_113() == -1)
	{
		lastMount = func_666(0);
	}
	else
	{
		lastMount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}

	return lastMount;
}

BOOL func_722(int iParam0, Any* panParam1, var uParam2, int* piParam3) // Position - 0x1C6BB Hash - 0x691EB829 ^0xDB420511
{
	*uParam2 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(iParam0, panParam1, piParam3);

	if (*uParam2 >= 0)
		return true;

	return false;
}

int func_723(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4) // Position - 0x1C6DC Hash - 0x69EE725C ^0x4869D6F1
{
	int inventoryIdFromPed;
	int num;
	var statId;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*uParam0);
	num = func_734(inventoryIdFromPed, hParam1);

	if (func_735(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_166(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		if (func_736(hParam1))
		{
			func_737(*uParam0, hParam1, *uParam2);
		}
		else
		{
			func_737(*uParam0, hParam1, *uParam2);
			func_738(*uParam0, hParam1, *uParam2, true);
		}
	
		num2 = num - func_734(inventoryIdFromPed, hParam1);
		*uParam2 = *uParam2 - num2;
		return 1;
	}

	return 0;
}

int func_724(int iParam0) // Position - 0x1C784 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_725(int iParam0, int iParam1) // Position - 0x1C79B Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_726(var uParam0, int iParam1) // Position - 0x1C7E3 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_717(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_727(int iParam0, var uParam1) // Position - 0x1C814 Hash - 0xE231A73F ^0x924E070C
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

void func_728(int iParam0, int iParam1) // Position - 0x1C858 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_729(var uParam0) // Position - 0x1C871 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_730(var uParam0, Any anParam1, int iParam2) // Position - 0x1C89D Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_739(func_315());

	if (*uParam0)
		func_729(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_113() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_731(Hash hParam0, int iParam1, int iParam2) // Position - 0x1C8D4 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_281(hash);
	num3 = func_281(hash2);
	num4 = func_281(hash3);

	if (iParam2 != 2)
		num5 = func_281(hash4);

	num6 = func_282(hash);
	num7 = func_282(hash2);
	num8 = func_282(hash3);

	if (iParam2 != 2)
		num9 = func_282(hash4);

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

BOOL func_732(BOOL bParam0) // Position - 0x1CA4D Hash - 0x96106777 ^0x8FA2F1AF
{
	Ped lastMount;

	if (func_113() == -1)
	{
		if (Global_1914319.f_17370 || bParam0 || Global_1914319.f_16855 == 2)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (lastMount != func_666(7))
				return true;
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			lastMount = PED::GET_MOUNT(Global_35);
		
			if (lastMount != func_666(7))
				return true;
		}
	}
	else
	{
		lastMount = PED::_GET_LAST_MOUNT(func_733());
	
		if (lastMount != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			return true;
	}

	return false;
}

Ped func_733() // Position - 0x1CAD8 Hash - 0x14A4F660 ^0xC2F042AC
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_734(int iParam0, Hash hParam1) // Position - 0x1CAE6 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_73(hParam1, 0))
		return 0;

	guid = { func_740(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_735(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1CB24 Hash - 0x4239382B ^0xCA53D4CD
{
	int inventoryIdFromPed;
	int num;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);

	if (func_741(pedParam0))
	{
		num = func_742(pedParam0);
	
		if (func_73(hParam1, 0))
			if (func_736(hParam1))
				func_743(num, hParam1, iParam2);
	}

	return func_744(inventoryIdFromPed, hParam1, iParam2, bParam3, hParam4);
}

BOOL func_736(Hash hParam0) // Position - 0x1CB70 Hash - 0x32CFAC25 ^0x32CFAC25
{
	int i;
	int num;
	Hash hash;

	if (!func_745(hParam0))
		return false;

	for (i = 0; i < 57; i = i + 1)
	{
		num = func_746(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

int func_737(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x1CBB2 Hash - 0x40489E01 ^0xFB04AC2C
{
	int i;
	Hash peltId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return iParam2;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	peltId = hParam1;

	for (i = 2; i >= 0; i = i + -1)
	{
		if (PED::_GET_PELT_FROM_HORSE(pedParam0, i) == peltId)
		{
			PED::_CLEAR_PELT_FROM_HORSE(pedParam0, peltId);
			iParam2 = iParam2 - 1;
		}
	
		if (iParam2 <= 0)
			break;
	}

	return iParam2;
}

int func_738(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x1CC1A Hash - 0x83735129 ^0x5FB639F3
{
	Hash hash;
	ItemSet itemset;
	Entity entityFromItem;
	int i;
	int itemsetSize;
	int num;
	var unk;
	var unk2;
	var unk3;
	Ped pedIndexFromEntityIndex;

	if (!PED::IS_PED_CARRYING_SOMETHING(pedParam0))
		return iParam2;

	itemset = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(pedParam0, itemset);
	itemsetSize = ITEMSET::GET_ITEMSET_SIZE(itemset);

	for (i = 0; i < itemsetSize; i = i + 1)
	{
		if (iParam2 == 0)
			break;
	
		entityFromItem = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(i, itemset));
	
		if (!ENTITY::DOES_ENTITY_EXIST(entityFromItem))
		{
		}
		else
		{
			if (ENTITY::IS_ENTITY_A_PED(entityFromItem))
			{
				pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityFromItem);
				func_669(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);
				func_670(&hash, pedIndexFromEntityIndex, num, unk);
			
				if (!func_73(hash, 0))
					hash = func_747(entityFromItem);
			}
			else
			{
				hash = func_747(entityFromItem);
			}
		
			if (hash == hParam1)
			{
				PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
			
				if (bParam3)
				{
					func_748(entityFromItem);
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

int func_739(int iParam0) // Position - 0x1CCFA Hash - 0xB4860741 ^0xB4860741
{
	if (func_113() == -1)
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

struct<4> func_740(int iParam0, Hash hParam1) // Position - 0x1CD51 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_749(iParam0) };
	return func_750(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_741(Ped pedParam0) // Position - 0x1CD73 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_742(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_742(Ped pedParam0) // Position - 0x1CDB1 Hash - 0xD44AE303 ^0xA29D7F05
{
	int i;

	if (pedParam0 == 0)
		return -1;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return -1;

	for (i = 0; i < 7; i = i + 1)
	{
		if (pedParam0 == Global_1900383[i /*45*/])
			return i;
	}

	return -1;
}

void func_743(int iParam0, Hash hParam1, int iParam2) // Position - 0x1CDF6 Hash - 0xAC28FF72 ^0xA969E0AB
{
	Hash hash;
	int num;

	iParam0 = func_700(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	hash = func_751(hParam1);
	num = func_752(hash, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] - iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = func_753(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num], 0, 10);
	return;
}

BOOL func_744(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1CE83 Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_73(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_754(iParam0, hParam1, 1))
		return 0;

	statId = { func_166(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_734(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_734(iParam0, hParam1) - iParam2 < 0)
		{
			func_744(iParam0, hParam1, func_89(hParam1, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_755(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!func_115(false))
		bParam3 = true;

	if (!bParam3 && hParam1 != 1309979101)
		func_169(hParam1, -iParam2, flag, flag2, flag3);

	return 1;
}

BOOL func_745(Hash hParam0) // Position - 0x1CF66 Hash - 0x33F7D399 ^0xEB534519
{
	if (!func_73(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_746(int iParam0, int iParam1) // Position - 0x1CF83 Hash - 0xE1D12727 ^0xC55B8D95
{
	switch (iParam0)
	{
		case 0:
			return joaat("provision_beaver_fur");
	
		case 1:
			return joaat("PROVISION_BEAVER_FUR_POOR");
	
		case 2:
			return joaat("PROVISION_BEAVER_FUR_PRISTINE");
	
		case 3:
			return joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE");
	
		case 4:
			return joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE");
	
		case 5:
			return joaat("provision_boar_skin");
	
		case 6:
			return joaat("PROVISION_BOAR_SKIN_POOR");
	
		case 7:
			return joaat("PROVISION_BOAR_SKIN_PRISTINE");
	
		case 8:
			return joaat("provision_buck_fur");
	
		case 9:
			return joaat("PROVISION_BUCK_FUR_POOR");
	
		case 10:
			return joaat("PROVISION_BUCK_FUR_PRISTINE");
	
		case 11:
			return joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE");
	
		case 12:
			return joaat("provision_cougar_fur");
	
		case 13:
			return joaat("PROVISION_COUGAR_FUR_POOR");
	
		case 14:
			return joaat("PROVISION_COUGAR_FUR_PRISTINE");
	
		case 15:
			return joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE");
	
		case 16:
			return joaat("provision_coyote_fur");
	
		case 17:
			return joaat("PROVISION_COYOTE_FUR_POOR");
	
		case 18:
			return joaat("PROVISION_COYOTE_FUR_PRISTINE");
	
		case 19:
			return joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE");
	
		case 20:
			return joaat("provision_deer_hide");
	
		case 21:
			return joaat("PROVISION_DEER_HIDE_POOR");
	
		case 22:
			return joaat("PROVISION_DEER_HIDE_PRISTINE");
	
		case 23:
			return joaat("provision_fox_fur");
	
		case 24:
			return joaat("PROVISION_FOX_FUR_POOR");
	
		case 25:
			return joaat("PROVISION_FOX_FUR_PRISTINE");
	
		case 26:
			return joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE");
	
		case 27:
			return joaat("provision_goat_hair");
	
		case 28:
			return joaat("PROVISION_GOAT_HAIR_POOR");
	
		case 29:
			return joaat("PROVISION_GOAT_HAIR_PRISTINE");
	
		case 30:
			return joaat("provision_javelina_skin");
	
		case 31:
			return joaat("PROVISION_JAVELINA_SKIN_POOR");
	
		case 32:
			return joaat("PROVISION_JAVELINA_SKIN_PRISTINE");
	
		case 33:
			return joaat("provision_loanshark_skins");
	
		case 34:
			return joaat("provision_panther_fur");
	
		case 35:
			return joaat("PROVISION_PANTHER_FUR_POOR");
	
		case 36:
			return joaat("PROVISION_PANTHER_FUR_PRISTINE");
	
		case 37:
			return joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE");
	
		case 38:
			return joaat("provision_pig_skin");
	
		case 39:
			return joaat("PROVISION_PIG_SKIN_POOR");
	
		case 40:
			return joaat("PROVISION_PIG_SKIN_PRISTINE");
	
		case 41:
			return joaat("provision_pronghorn_fur");
	
		case 42:
			return joaat("PROVISION_PRONGHORN_FUR_POOR");
	
		case 43:
			return joaat("PROVISION_PRONGHORN_FUR_PRISTINE");
	
		case 44:
			return joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE");
	
		case 45:
			return joaat("provision_ram_hide");
	
		case 46:
			return joaat("PROVISION_RAM_HIDE_POOR");
	
		case 47:
			return joaat("PROVISION_RAM_HIDE_PRISTINE");
	
		case 48:
			return joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE");
	
		case 49:
			return joaat("provision_sheep_wool");
	
		case 50:
			return joaat("PROVISION_SHEEP_WOOL_POOR");
	
		case 51:
			return joaat("PROVISION_SHEEP_WOOL_PRISTINE");
	
		case 52:
			return joaat("provision_wolf_fur");
	
		case 53:
			return joaat("PROVISION_WOLF_FUR_POOR");
	
		case 54:
			return joaat("PROVISION_WOLF_FUR_PRISTINE");
	
		case 55:
			return joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE");
	
		case 56:
			return 0;
	
		default:
		
	}

	iParam1 >= 1;
	return iParam1;
}

Hash func_747(Entity eParam0) // Position - 0x1D2BC Hash - 0x715B29E5 ^0xAF0BC29E
{
	Hash carriableFromEntity;
	Ped pedIndexFromEntityIndex;

	if (!ENTITY::DOES_ENTITY_EXIST(eParam0))
		return 0;

	carriableFromEntity = ENTITY::_GET_CARRIABLE_FROM_ENTITY(eParam0);

	if (carriableFromEntity == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(eParam0))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
			carriableFromEntity = func_756(pedIndexFromEntityIndex);
		}
	}

	return carriableFromEntity;
}

void func_748(Entity eParam0) // Position - 0x1D2FB Hash - 0xC5AA53DE ^0x680DD5A
{
	Ped pedIndexFromEntityIndex;
	int num;
	int num2;
	var unk;
	int num3;
	int i;

	if (!ENTITY::IS_ENTITY_A_PED(eParam0))
		return;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);
	num = 878851736;
	num2 = Global_40.f_4283;

	if (func_757(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex), num2))
	{
		num = -1708424762;
	}
	else
	{
		unk = 10;
		func_711(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0), &unk);
	
		for (i = 0; i < 10; i = i + 1)
		{
			if (!func_73(unk[i], 0))
			{
			}
			else if (!func_758(unk[i]))
			{
			}
			else
			{
				num3 = func_759(unk[i], num2);
			
				if (func_760(num3, num))
					num = num3;
			}
		}
	}

	func_761(&num);

	if (func_760(num, Global_1357549.f_1492))
		Global_1357549.f_1492 = num;

	return;
}

struct<5> func_749(int iParam0) // Position - 0x1D3C5 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_750(iParam0, joaat("character"), func_515(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_750(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x1D3F2 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_73(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

Hash func_751(Hash hParam0) // Position - 0x1D41F Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_736(hParam0))
		return 0;

	return hParam0;
}

int func_752(Hash hParam0, int iParam1) // Position - 0x1D437 Hash - 0x5E5FF029 ^0x5E5FF029
{
	switch (hParam0)
	{
		case joaat("provision_beaver_fur"):
			return 0;
	
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 7;
	
		case joaat("provision_deer_hide"):
			return 20;
	
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
	
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 29;
	
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 1;
	
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 17;
	
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 43;
	
		case joaat("PROVISION_COYOTE_LEGENDARY_FUR_PRISTINE"):
			return 19;
	
		case joaat("provision_javelina_skin"):
			return 30;
	
		case joaat("provision_sheep_wool"):
			return 49;
	
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 40;
	
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 22;
	
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 42;
	
		case joaat("PROVISION_BUCK_LEGENDARY_FUR_PRISTINE"):
			return 11;
	
		case joaat("provision_buck_fur"):
			return 8;
	
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 18;
	
		case joaat("PROVISION_RAM_LEGENDARY_HIDE_PRISTINE"):
			return 48;
	
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 10;
	
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 21;
	
		case joaat("provision_ram_hide"):
			return 45;
	
		case joaat("provision_panther_fur"):
			return 34;
	
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 39;
	
		case joaat("PROVISION_BEAVER_LEGENDARY_FUR_PRISTINE"):
			return 3;
	
		case joaat("PROVISION_PRONGHORN_LEGENDARY_FUR_PRISTINE"):
			return 44;
	
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 31;
	
		case joaat("provision_pig_skin"):
			return 38;
	
		case 0:
			return 56;
	
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 53;
	
		case joaat("provision_fox_fur"):
			return 23;
	
		case joaat("provision_cougar_fur"):
			return 12;
	
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 25;
	
		case joaat("PROVISION_WOLF_LEGENDARY_FUR_PRISTINE"):
			return 55;
	
		case joaat("provision_pronghorn_fur"):
			return 41;
	
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 54;
	
		case joaat("PROVISION_PANTHER_LEGENDARY_FUR_PRISTINE"):
			return 37;
	
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 28;
	
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 2;
	
		case joaat("provision_wolf_fur"):
			return 52;
	
		case joaat("provision_coyote_fur"):
			return 16;
	
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 6;
	
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 51;
	
		case joaat("PROVISION_COUGAR_LEGENDARY_FUR_PRISTINE"):
			return 15;
	
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 35;
	
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 9;
	
		case joaat("PROVISION_FOX_LEGENDARY_FUR_PRISTINE"):
			return 26;
	
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 24;
	
		case joaat("provision_goat_hair"):
			return 27;
	
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 50;
	
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 47;
	
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 46;
	
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
	
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 32;
	
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 36;
	
		case joaat("provision_loanshark_skins"):
			return 33;
	
		case joaat("PROVISION_BOAR_LEGENDARY_SKIN_PRISTINE"):
			return 4;
	
		case joaat("provision_boar_skin"):
			return 5;
	
		default:
		
	}

	iParam1 >= 1;
	return -1;
}

int func_753(int iParam0, int iParam1, int iParam2) // Position - 0x1D6C3 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_754(int iParam0, Hash hParam1, int iParam2) // Position - 0x1D6E8 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_73(hParam1, 0))
		return false;

	return func_734(iParam0, hParam1) >= iParam2;
}

BOOL func_755(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x1D70A Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_73(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_749(iParam0) };
	unk6 = { func_750(iParam0, hParam1, unk, unk.f_4) };
	return func_762(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

Hash func_756(Ped pedParam0) // Position - 0x1D759 Hash - 0xF32C828D ^0x75879223
{
	int num;
	var unk;
	var unk2;
	var unk3;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	if (!ENTITY::GET_IS_ANIMAL(pedParam0) && !ENTITY::_GET_IS_BIRD(pedParam0))
		return 0;

	func_669(pedParam0, &unk, &unk2, &num, &unk3);
	func_670(&num2, pedParam0, num, unk);

	if (num2 != 0)
		return num2;

	switch (num)
	{
		case 0:
			return joaat("PROVISION_ANIMAL_CARCASS_POOR");
	
		case 1:
			return joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY");
	
		case 2:
			return joaat("PROVISION_ANIMAL_CARCASS_PERFECT");
	
		default:
		
	}

	return joaat("PROVISION_ANIMAL_CARCASS_POOR");
}

BOOL func_757(Hash hParam0, int iParam1) // Position - 0x1D7E6 Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (iParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("a_c_duck_01"):
				case joaat("A_C_Rabbit_01"):
				case joaat("a_c_pronghorn_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("a_c_buck_01"):
				case joaat("a_c_turkey_01"):
				case joaat("a_c_turkey_02"):
				case joaat("a_c_fishrainbowtrout_01_lg"):
				case joaat("a_c_fishrainbowtrout_01_ms"):
				case joaat("a_c_deer_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("a_c_alligator_01"):
				case joaat("a_c_alligator_02"):
				case joaat("a_c_alligator_03"):
				case joaat("a_c_fishlargemouthbass_01_ms"):
				case joaat("a_c_fishlargemouthbass_01_lg"):
				case joaat("a_c_carolinaparakeet_01"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("a_c_elk_01"):
				case joaat("a_c_fishsalmonsockeye_01_ms"):
				case joaat("a_c_fishsalmonsockeye_01_lg"):
				case joaat("a_c_fishsalmonsockeye_01_ml"):
				case joaat("a_c_quail_01"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_758(Hash hParam0) // Position - 0x1D8C3 Hash - 0x6BAA9EF6 ^0x42D7C39C
{
	if (func_31(hParam0, -839724752) || func_31(hParam0, joaat("ci_tag_item_meat_animal")) || func_31(hParam0, 1286414894))
		return true;

	return false;
}

int func_759(Hash hParam0, int iParam1) // Position - 0x1D900 Hash - 0xC5733D28 ^0xFB197C4
{
	if (!func_73(hParam0, 0))
		return 878851736;

	if (!func_758(hParam0))
		return 878851736;

	if (func_763(hParam0, iParam1))
		return -1708424762;
	else if (func_31(hParam0, -1690954218))
		return -1760041550;
	else if (func_31(hParam0, 1149630095))
		return -1760041550;
	else if (func_31(hParam0, 194498509))
		return 116793994;
	else if (func_31(hParam0, 43251425))
		return 1869130580;

	return 1869130580;
}

BOOL func_760(int iParam0, int iParam1) // Position - 0x1D9A9 Hash - 0xD4119D7E ^0x719C18FD
{
	var unk;
	int num;
	int num2;
	int i;

	unk = 10;
	unk[0] = 878851736;
	unk[1] = 1762298001;
	unk[2] = 1869130580;
	unk[3] = 1336518004;
	unk[4] = 116793994;
	unk[5] = 515084529;
	unk[6] = -1760041550;
	unk[7] = -1977068039;
	unk[8] = -1708424762;
	unk[9] = -399865011;
	num = -1;
	num2 = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam0)
		{
			num = i;
			break;
		}
	}

	if (num == -1)
		return false;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (unk[i] == iParam1)
		{
			num2 = i;
			break;
		}
	}

	if (num2 == -1)
		return false;

	return num > num2;
}

void func_761(var uParam0) // Position - 0x1DA86 Hash - 0x4298C46 ^0x74410755
{
	if (Global_40.f_4283.f_313 > 1)
	{
		switch (*uParam0)
		{
			case -1760041550:
				*uParam0 = -1977068039;
				break;
		
			case -1708424762:
				*uParam0 = -399865011;
				break;
		
			case 116793994:
				*uParam0 = 515084529;
				break;
		
			case 878851736:
				*uParam0 = 1762298001;
				break;
		
			case 1869130580:
				*uParam0 = 1336518004;
				break;
		}
	}

	return;
}

BOOL func_762(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x1DAF9 Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_405(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_764(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_763(Hash hParam0, int iParam1) // Position - 0x1DB71 Hash - 0xF5E57FDF ^0xF5E57FDF
{
	switch (iParam1)
	{
		case 1:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
				case joaat("provision_fish_steelhead_trout_poor"):
				case joaat("provision_fish_steelhead_trout"):
				case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
				case joaat("provision_fish_largemouth_bass"):
				case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
				case joaat("provision_fish_largemouth_bass_poor"):
					return true;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (hParam0)
			{
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
				case joaat("provision_fish_sockeye_salmon_poor"):
				case joaat("PROVISION_MATURE_VENISON"):
				case joaat("provision_fish_sockeye_salmon"):
				case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
					return true;
			
				default:
					break;
			}
			break;
	}

	return false;
}

BOOL func_764(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x1DCA2 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

