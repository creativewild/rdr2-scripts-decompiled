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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 15;
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
	var uLocal_33 = 15;
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
	var uLocal_49 = 15;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void main() // Position - 0x0 Hash - 0xF399A4EF ^0xE82340F
{
	var unk;

	fLocal_12 = 1f;
	fLocal_13 = 1f;
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

void func_1(var uParam0, var uParam1) // Position - 0x234 Hash - 0x8DEEC49C ^0xDE1C3ECA
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

BOOL func_2() // Position - 0x303 Hash - 0xA095694D ^0x506AFF8
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

BOOL func_3(var uParam0, var uParam1) // Position - 0x36E Hash - 0xC457B44D ^0x846F6551
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

int func_4(var uParam0, var uParam1) // Position - 0x3B2 Hash - 0xAED62A62 ^0x7B1675C4
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

int func_5(var uParam0, var uParam1) // Position - 0x5AD Hash - 0x359EBC2F ^0x981615C
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

int func_6(var uParam0, var uParam1) // Position - 0x7A5 Hash - 0x97DFAD04 ^0xB50B1440
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

BOOL func_7() // Position - 0x7F8 Hash - 0xC24BA3AE ^0xF178BF44
{
	return Global_1935689.f_1 || Global_1935689 == 1;
}

void func_8(var uParam0, var uParam1) // Position - 0x812 Hash - 0x562CED31 ^0xE8ED1F16
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

int func_9(int iParam0) // Position - 0x989 Hash - 0x6B3C6310 ^0x48F4F81A
{
	if (iParam0 < 0)
		return 0;

	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_10(var uParam0, var uParam1) // Position - 0x9AA Hash - 0xE578D434 ^0xCA70F34A
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

void func_11(var uParam0) // Position - 0xA6E Hash - 0xC0F0F1C7 ^0x3937F20B
{
	if (uParam0->f_5.f_1 && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
	{
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		uParam0->f_5.f_1 = 0;
	}

	return;
}

void func_12(var uParam0) // Position - 0xAA1 Hash - 0x1B68B5CE ^0xC8FC22A6
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

void func_13(var uParam0, var uParam1) // Position - 0xB35 Hash - 0xC63DE01E ^0xC63DE01E
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

void func_14(int iParam0) // Position - 0xBC0 Hash - 0xBD578226 ^0x58965C2C
{
	Global_1911894[iParam0 /*6*/].f_1 = 3;
	Global_1911894[iParam0 /*6*/] = 0;
	Global_1911894[iParam0 /*6*/].f_5 = 0;
	return;
}

void func_15(var uParam0) // Position - 0xBE7 Hash - 0x8FD544BB ^0x12513572
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

void func_16(var uParam0, var uParam1) // Position - 0xC89 Hash - 0xBF003C73 ^0x477EA759
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

BOOL func_17(var uParam0, var uParam1) // Position - 0xCFE Hash - 0xAE0707D ^0x8E54A3F8
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

BOOL func_18(Hash hParam0) // Position - 0xD56 Hash - 0xE48228D0 ^0xE48228D0
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

void func_19(var uParam0, var uParam1) // Position - 0xD98 Hash - 0x79CD7A0A ^0xD5CFE43B
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

void func_20(var uParam0, var uParam1) // Position - 0xDC7 Hash - 0xC45352D ^0x258FCA36
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

void func_21(var uParam0, var uParam1) // Position - 0xE20 Hash - 0x3E2C8B64 ^0xFC63E2A9
{
	HUD::TEXT_BLOCK_REQUEST("NEWS");
	uParam1->[0 /*9*/].f_5.f_3 = func_71(uParam1->[0 /*9*/]);
	uLocal_15.f_50 = func_72(uParam1->[0 /*9*/]);
	uLocal_15.f_51 = func_73(uParam0, uParam1->[0 /*9*/]);
	uLocal_15.f_52 = 0;

	if (uLocal_15.f_50 != -1)
	{
		if (Global_40.f_9479[uLocal_15.f_50 /*4*/].f_1 != -1)
		{
			func_74(Global_40.f_9479[uLocal_15.f_50 /*4*/].f_1, &(uLocal_15.f_2));
			uLocal_15.f_52 = uLocal_15.f_52 + 1;
		}
	
		if (Global_40.f_9479[uLocal_15.f_50 /*4*/].f_2 != -1)
		{
			func_74(Global_40.f_9479[uLocal_15.f_50 /*4*/].f_2, &(uLocal_15.f_18));
			uLocal_15.f_52 = uLocal_15.f_52 + 1;
		}
	
		func_75(Global_40.f_9479[uLocal_15.f_50 /*4*/].f_3, &(uLocal_15.f_34));
	}

	return;
}

void func_22(var uParam0, Hash hParam1) // Position - 0xEE8 Hash - 0x2ED87F6F ^0xF11F6F78
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

	func_76(uParam0);
	return;
}

void func_23(var uParam0, int iParam1) // Position - 0xF75 Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_24(Hash hParam0, int iParam1) // Position - 0xF82 Hash - 0xDB76EF08 ^0x947E1C4
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

void func_25(Hash hParam0) // Position - 0x117A Hash - 0xBD513CA ^0xC2B79D09
{
	switch (hParam0)
	{
		case -2114196387:
		case 1824375265:
			func_49(129, true);
			break;
	
		case -1030126569:
			if (!func_78(Global_40.f_11623[11 /*8*/].f_1, 4194304))
				func_79(&(Global_40.f_11623[11 /*8*/].f_1), 4194304);
			break;
	
		case joaat("DOCUMENT_TREASURE_MAP_LS_HORSECHASE"):
			func_77(Global_1392626[7 /*32*/].f_3, 1);
			break;
	}

	func_80(hParam0);
	func_81(hParam0);
	func_82(hParam0);
	return;
}

int func_26(var uParam0, var uParam1, BOOL bParam2) // Position - 0x11FF Hash - 0xD246EEFC ^0x64A5FCA0
{
	if (!uParam0->f_146)
	{
		if (!Global_36634 && bParam2)
		{
			if (!func_83(uParam1->[2 /*9*/], 0))
			{
				Global_36627[1] = false;
			
				if (func_42(Global_36622[1]))
					func_84(Global_36622[1], false, true);
			}
			else
			{
				Global_36627[1] = true;
			
				if (func_42(Global_36622[1]))
					func_84(Global_36622[1], true, true);
			}
		
			if (!func_83(uParam1->[1 /*9*/], 0))
			{
				Global_36627[0] = false;
			
				if (func_42(Global_36622[0]))
					func_84(Global_36622[0], false, true);
			}
			else
			{
				Global_36627[0] = true;
			
				if (func_42(Global_36622[0]))
					func_84(Global_36622[0], true, true);
			}
		}
	
		Global_36627[3] = func_85(uParam0, &uParam1->[0 /*9*/]);
	
		if (func_42(Global_36622[3]))
			func_84(Global_36622[3], Global_36627[3], true);
	
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

void func_27(var uParam0, var uParam1) // Position - 0x1379 Hash - 0xF894815A ^0x1536A4A5
{
	int i;
	int num;

	if (!func_24(*uParam1, uParam0->f_130) && !func_86(*uParam1, uParam0->f_130))
	{
		if (!uParam0->f_138)
		{
			if (func_87(Global_36622[0], true))
				uParam0->f_139 = 0;
			else
				uParam0->f_139 = 1;
		
			if (func_87(Global_36622[1], true))
				uParam0->f_140 = 0;
			else
				uParam0->f_140 = 1;
		
			for (i = 0; i < 4; i = i + 1)
			{
				func_88(&Global_36622[i], false);
			}
		
			uParam0->f_138 = 1;
		}
	}
	else if (uParam0->f_138)
	{
		func_89(uParam0, uParam1);
	
		for (i = 0; i < 3; i = i + 1)
		{
			num = i;
		
			if (num == 0 && !uParam0->f_139 || num == 1 && !uParam0->f_140 || num != 1 && num != 0)
				func_88(&Global_36622[num], true);
		}
	
		uParam0->f_138 = 0;
	}

	return;
}

void func_28(var uParam0, var uParam1) // Position - 0x1473 Hash - 0xEFD559E0 ^0xA62E62CA
{
	if (!uParam0->f_141 && func_90(uParam1->[0 /*9*/], uParam0->f_130))
	{
		uParam0->f_141 = 1;
		func_91(uParam1->[0 /*9*/]);
	}

	return;
}

void func_29(var uParam0, var uParam1) // Position - 0x14A3 Hash - 0x35F05B52 ^0x35F05B52
{
	func_92(uParam0, &uLocal_15, uParam1->[0 /*9*/]);
	return;
}

BOOL func_30(Hash hParam0, int iParam1) // Position - 0x14B8 Hash - 0x886E7192 ^0x308D70B7
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

BOOL func_31(Hash hParam0, Hash hParam1) // Position - 0x16E6 Hash - 0x34B85114 ^0xAAD93A99
{
	if (hParam0 == 0)
		return false;

	if (hParam1 == 0)
		return false;

	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(hParam0, hParam1, joaat("TAG_ITEM_PROPERTY")))
		return true;

	return false;
}

BOOL func_32(int iParam0, BOOL bParam1) // Position - 0x1717 Hash - 0xAAB142C4 ^0x20EFEF89
{
	int num;

	if (bParam1 && !func_42(iParam0))
		return false;

	num = func_93(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_33(var uParam0, Hash hParam1) // Position - 0x174A Hash - 0x8E10A62A ^0xBBD158A9
{
	if (func_31(hParam1, -1227898937))
	{
		if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("newspaper")) == 0)
		{
			uParam0->f_5.f_1 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
			func_94(uParam0, hParam1);
		}
	}
	else if (UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(joaat("translation_overlay"), joaat("GENERIC")) == 0)
	{
		uParam0->f_5.f_1 = 1;
		AUDIO::PLAY_SOUND_FRONTEND("READ", "HUD_SHOP_SOUNDSET", true, 0);
		func_94(uParam0, hParam1);
	}

	return;
}

BOOL func_34(Hash hParam0) // Position - 0x17BD Hash - 0xBF3EFB31 ^0xBF3EFB31
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

int func_35(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, Hash hParam5, int iParam6, int iParam7, Entity eParam8, BOOL bParam9) // Position - 0x17ED Hash - 0x11449F01 ^0x11449F01
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

	if (!func_83(hParam0, 0))
		return 0;

	if (!func_95(hParam0, iParam1, bParam2, hParam5))
		return 0;

	if (!func_96(hParam0, &value, iParam1))
		return 0;

	func_97(hParam0, bParam2);
	lootTableKey = 0;

	if (func_98(hParam0, false, false) == 0)
	{
		if (func_99(hParam0))
		{
			hash = func_100(hParam0);
			collectableSubcategory = func_101(hash);
			num = func_102(collectableSubcategory) + 1;
			func_103(hash);
		
			if (func_104(38))
				func_105(483, false);
			else
				func_105(482, false);
		
			if (num == func_106(collectableSubcategory))
			{
				func_35(func_107(collectableSubcategory), 1, false, false, false, 752097756, 0, 0, 0, false);
			
				if (func_108() && func_109(4))
				{
					if (func_108() && func_110(38) || func_104(38))
					{
						func_112(38, func_107(collectableSubcategory), 0, 0, func_111(), false, -1, false);
						func_113(2);
					}
					else
					{
						func_112(38, func_107(collectableSubcategory), 0, 0, func_111(), false, -1, false);
						func_113(1);
					}
				}
			}
			else if (func_108() && func_109(4))
			{
				if (func_108() && func_110(38) || func_104(38))
				{
					func_112(38, 0, 0, 0, func_111(), false, -1, false);
					func_113(2);
				}
				else
				{
					func_112(38, 0, 0, 0, func_111(), false, -1, false);
					func_113(1);
				}
			}
		
			if (func_108() && func_109(4))
				if (!Global_1914319.f_17376)
					if (func_108() && func_110(38) || func_104(38))
						func_114(38, COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_DICTIONARY(joaat("CIGARETTE_CARDS"), collectableSubcategory), COLLECTION::_COLLECTABLE_CATEGORY_GET_TOAST_TEXTURE_NAME(joaat("CIGARETTE_CARDS"), collectableSubcategory), num, 12, 0, collectableSubcategory);
					else
						func_114(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), num, 12, 0, collectableSubcategory);
		}
	}

	if (func_115(hParam0) == joaat("CLOTHING"))
		if (!func_31(hParam0, 866047851) && !func_31(hParam0, -1979000645) && !func_31(hParam0, 1248798204))
			flag = true;

	if (func_116(hParam0, 8388608) && !func_117(28))
		func_118(28);

	if (!flag)
	{
		if (func_31(hParam0, -1588156645))
		{
			bParam2 = true;
			flag2 = true;
		
			if (func_119(hParam0) == -1447088266)
			{
				ammoTypeForWeapon = func_121(func_120(hParam0, true), false);
			
				if (WEAPON::IS_WEAPON_VALID(ammoTypeForWeapon))
				{
					if (func_122() == -1)
						func_123(ammoTypeForWeapon);
				
					if (func_124(false) && func_125(ammoTypeForWeapon, 0, false, true, 0, false, hParam5, false))
					{
						func_126(hParam0, value, hParam5);
					
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
					if (func_122() == -1)
						func_123(hParam0);
				
					if (func_124(false) && func_125(hParam0, 0, false, true, 0, false, hParam5, false))
					{
						func_126(ammoTypeForWeapon, value, hParam5);
					
						if (!bParam9)
							bParam2 = false;
					}
				}
			}
		}
		else if (func_115(hParam0) == joaat("WEAPON"))
		{
			if (!func_127(hParam0, hParam5, &bParam2, bParam3, bParam4))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_115(hParam0) == joaat("AMMO") && func_128(hParam0))
		{
			if (!func_129(hParam0, &value, hParam5))
				bParam2 = true;
		
			flag2 = true;
		}
		else if (func_31(hParam0, 866047851))
		{
			func_130(hParam0);
		}
		else if (func_31(hParam0, 2000026003))
		{
			func_131(hParam0);
		}
		else if (func_31(hParam0, -103750053))
		{
			func_133(func_132(joaat("claws_collected")), value);
		}
		else if (hParam0 == joaat("provision_alligator_tooth"))
		{
			func_133(func_134(joaat("COLLECTED"), joaat("alligator_tooth")), value);
		}
		else if (func_31(hParam0, -121341956) && !func_31(hParam0, 606799272))
		{
			if (hParam0 != joaat("weapon_kit_detector") && hParam0 != 1993672959)
				if (func_135(Global_1835011[4 /*74*/].f_1, true))
					func_105(498, false);
		
			if (func_31(hParam0, -2017733358) || func_31(hParam0, -1369131378))
				func_136(hParam0);
		}
		else if (func_31(hParam0, -136654233))
		{
			if (func_31(hParam0, -1021472396))
			{
			}
		}
		else if (func_31(hParam0, -1466706512) && func_31(hParam0, 1147021565))
		{
			func_105(484, false);
		}
		else if (func_31(hParam0, 1147021565) && func_31(hParam0, -524514947))
		{
		}
		else if (func_31(hParam0, 554195525))
		{
		}
		else if (func_31(hParam0, 589988438))
		{
			if (func_137())
			{
				func_138(joaat("reward_small"), false, 1065353216, 1, 0, 0, false, -1);
				bParam2 = true;
				flag2 = true;
			}
		}
		else if (func_31(hParam0, 787083290) && func_31(hParam0, 949916894))
		{
			func_139(hParam0);
		}
		else if (func_31(hParam0, -1718133314))
		{
			func_140(hParam0);
		}
		else if (func_31(hParam0, -1738650224))
		{
			func_141(hParam0);
		}
		else if (func_31(hParam0, -1112814642) && func_31(hParam0, 949916894))
		{
			func_142(hParam0);
		}
		else if (hParam0 == joaat("document_player_journal"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (func_31(hParam0, 1841149704))
		{
			func_143();
		}
		else if (func_31(hParam0, 606799272))
		{
			func_144(hParam0, iParam1);
			func_145(hParam0);
		}
		else if (func_31(hParam0, -1112814642) && func_31(hParam0, -1697809989))
		{
			func_146(hParam0, 0, false, false);
		}
		else if (func_31(hParam0, -2017733358) || func_31(hParam0, -1369131378))
		{
			func_136(hParam0);
		}
		else if (func_31(hParam0, -1921346699))
		{
			if (func_122() != -1)
				return 0;
		
			func_147(hParam0, hParam5, eParam8);
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
		else if (func_31(hParam0, -839724752) && func_116(hParam0, 4))
		{
			if (!func_104(42))
				func_148(hParam0);
		}
		else if (func_31(hParam0, 1399091007))
		{
			func_149(hParam0, &lootTableKey);
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
				if (func_122() == -1)
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
					func_167(595, -103579, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_167(595, -1531530025, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("consumable_tonic"):
			case joaat("consumable_potent_tonic"):
				if (MISC::GET_GAME_TIMER() >= Global_1935689.f_9447 + 60000)
				{
					func_167(594, -1228016946, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				func_157(499813453, joaat("treasure_hunt_loot_01"), false);
				func_158(499813453, false);
				func_159(1);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				func_157(390004462, joaat("treasure_hunt_loot_17"), false);
				func_158(390004462, false);
				func_163(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				func_157(6410548, joaat("treasure_hunt_loot_23"), false);
				func_158(6410548, false);
				func_164(8);
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
				func_157(6410548, joaat("treasure_hunt_loot_22"), false);
				func_158(6410548, false);
				func_164(4);
				break;
		
			case joaat("upgrade_offhand_holster"):
				func_118(24);
			
				if (Global_1946054.f_1497.f_1[27 /*3*/] == Global_1946054.f_57[27 /*11*/])
					func_150(PLAYER::PLAYER_PED_ID(), joaat("upgrade_offhand_holster"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, false);
			
				if (func_151(&hash3, false))
					func_125(hash3, 0, false, bParam4, 3, false, 752097756, false);
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
					func_167(594, 1934060482, true, true);
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
					func_167(594, 1110018439, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("kit_gun_oil"):
				func_105(486, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				func_157(6410548, joaat("treasure_hunt_loot_21"), false);
				func_158(6410548, false);
				func_164(2);
				break;
		
			case joaat("consumable_cigarette_box"):
				func_105(485, false);
			
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3 == 0)
					func_35(func_168(), 1, false, false, false, 752097756, 0, 0, 0, false);
				else
					func_35(func_169(), 1, false, false, false, 752097756, 0, 0, 0, false);
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
					func_167(594, 1408511260, true, true);
					Global_1935689.f_9447 = MISC::GET_GAME_TIMER();
				}
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				func_157(-220219788, joaat("treasure_hunt_loot_09"), false);
				func_158(-220219788, false);
				func_161(1);
				break;
		
			case joaat("consumable_coffee_gnds_reg"):
				if (func_117(1))
					func_105(487, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				func_157(666607663, joaat("treasure_hunt_loot_07"), false);
				func_158(666607663, false);
				func_160(4);
				break;
		
			case joaat("consumable_valerian_root"):
				func_166(241, func_165(joaat("consumable_valerian_root")), false);
				break;
		
			case joaat("weapon_kit_binoculars"):
				break;
		
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				flag2 = true;
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				func_157(-220219788, joaat("treasure_hunt_loot_11"), false);
				func_158(-220219788, false);
				func_161(4);
				break;
		
			case joaat("consumable_aged_pirate_rum"):
				func_166(242, func_165(joaat("consumable_aged_pirate_rum")), false);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("consumable_hair_tonic"):
				func_105(488, false);
				break;
		
			case joaat("consumable_ginseng_elixier"):
				func_166(240, func_165(joaat("consumable_ginseng_elixier")), false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				func_157(-220219788, joaat("treasure_hunt_loot_10"), false);
				func_158(-220219788, false);
				func_161(2);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_sml_fancy");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				func_157(390004462, joaat("treasure_hunt_loot_16"), false);
				func_158(390004462, false);
				func_163(1);
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
				func_157(499813453, joaat("treasure_hunt_loot_03"), false);
				func_158(499813453, false);
				func_159(4);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				func_157(666607663, joaat("treasure_hunt_loot_06"), false);
				func_158(666607663, false);
				func_160(2);
				break;
		
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("ARROW_BUNDLE");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				func_157(218622660, joaat("treasure_hunt_loot_14"), false);
				func_158(218622660, false);
				func_162(2);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				func_157(666607663, joaat("treasure_hunt_loot_05"), false);
				func_158(666607663, false);
				func_160(1);
				break;
		
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
		
			case joaat("upgrade_bandolier"):
				if (func_122() == -1 && Global_1946054.f_1497.f_1[25 /*3*/] == Global_1946054.f_57[25 /*11*/])
					func_150(PLAYER::PLAYER_PED_ID(), joaat("upgrade_bandolier"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), true, true, true, false, true, false);
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				func_157(218622660, joaat("treasure_hunt_loot_13"), false);
				func_158(218622660, false);
				func_162(1);
				break;
		
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				flag2 = true;
				lootTableKey = joaat("jbox_lrg_poor");
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				func_157(6410548, joaat("treasure_hunt_loot_20"), false);
				func_158(6410548, false);
				func_164(1);
				break;
		
			case joaat("upgrade_upg_coffee_kit"):
				func_105(496, false);
				break;
		
			case joaat("consumable_hair_grease"):
				func_105(491, false);
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
				func_157(499813453, joaat("treasure_hunt_loot_02"), false);
				func_158(499813453, false);
				func_159(2);
				break;
		
			case joaat("clothing_legendary_east_outfit"):
				func_105(415, false);
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_152();
				Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
				func_153();
				Global_40.f_11095.f_55 = Global_40.f_11095.f_55 + 0.1f;
				Global_40.f_11095.f_57 = Global_40.f_11095.f_57 + 0.1f;
				Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
				Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
				func_154();
				Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
				func_155();
				Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
				Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
				Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
				func_156();
				break;
		
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				func_157(390004462, joaat("treasure_hunt_loot_18"), false);
				func_158(390004462, false);
				func_163(4);
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
		func_170(&hash4);
	
		if (!func_171(hash4, value, hParam5))
			return 0;
		else if (!func_124(false))
			return 1;
	
		if (func_115(hParam0) == joaat("CLOTHING"))
			func_172(hParam0);
	
		if (func_31(hParam0, -1979000645))
			func_173(hParam0);
	}
	else if (lootTableKey != 0)
	{
		if (func_124(false))
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
			func_174(lootTableKey, 0);
		}
	}

	statId = { func_175(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
		STATS::_STAT_ID_INCREMENT_INT(&statId, value);

	func_176(hParam0);

	if (iParam6 > 0f)
	{
		if (func_31(hParam0, -839724752))
			func_177(hParam0, iParam6);
	}
	else if (!bParam2)
	{
		flag3 = hParam5 == 1248274121;
		func_178(hParam0, value, false, flag3, 0);
	}

	return 1;
}

Hash func_36(var uParam0) // Position - 0x2A82 Hash - 0xD3DA5CD8 ^0xEA277B8
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
		
			if (!func_83(_int, 0))
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

void func_37(var uParam0, Any anParam1) // Position - 0x2ADE Hash - 0x2374F27F ^0xFA77C453
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

void func_38(var uParam0, var uParam1) // Position - 0x2B4B Hash - 0xED62B70C ^0xED62B70C
{
	func_179(uParam0, uParam1->[0 /*9*/]);
	func_180(uParam0, uParam1);

	if (uParam1->[1 /*9*/] != 0)
		func_181(1, uParam1->[1 /*9*/]);
	else
		func_14(1);

	func_182(uParam0, uParam1);

	if (uParam1->[2 /*9*/] != 0)
		func_181(2, uParam1->[2 /*9*/]);
	else
		func_14(2);

	func_183(uParam1);
	func_184(uParam1);
	return;
}

int func_39(var uParam0, int iParam1) // Position - 0x2BB3 Hash - 0xBAC06518 ^0x7B2CADE6
{
	Hash txdHash;

	if (uParam0->f_1)
	{
		return 1;
	}
	else if (func_185(*uParam0, &txdHash, joaat("Inventory"), joaat("ui_itemviewer"), 0, 0))
	{
		if (TXD::DOES_STREAMED_TXD_EXIST(txdHash))
		{
			TXD::REQUEST_STREAMED_TXD(txdHash, false);
			uParam0->f_3 = txdHash;
		}
	}

	return 1;
}

BOOL func_40(var uParam0, var uParam1) // Position - 0x2BFB Hash - 0xCFF740DC ^0xCFF740DC
{
	if (func_186(uParam0, &uParam1->[0 /*9*/]))
	{
		func_181(0, uParam1->[0 /*9*/]);
		func_187(uParam0, uParam1);
		return true;
	}

	return false;
}

int func_41(var uParam0, var uParam1) // Position - 0x2C29 Hash - 0x6565581A ^0x6565581A
{
	return 1;
}

BOOL func_42(int iParam0) // Position - 0x2C32 Hash - 0xB0D16BD7 ^0x968915A6
{
	if (iParam0 < 0)
		return false;

	if (iParam0 > 48)
		return false;

	if (Global_1945188[iParam0 /*18*/].f_1 & 2 == 0)
		return false;

	return HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3);
}

BOOL func_43(int iParam0, BOOL bParam1) // Position - 0x2C71 Hash - 0x4D69B900 ^0x415C6741
{
	int num;

	if (bParam1 && !func_42(iParam0))
		return false;

	num = func_93(iParam0);

	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1945188[num /*18*/].f_3))
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);

	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1945188[num /*18*/].f_3);
}

void func_44(BOOL bParam0) // Position - 0x2CC9 Hash - 0xDA8F6A70 ^0xDA8F6A70
{
	if (bParam0)
		Global_1935689 = 1;
	else
		Global_1935689 = 2;

	return;
}

BOOL func_45(var uParam0) // Position - 0x2CE3 Hash - 0x8E17540C ^0x6CC7D307
{
	BOOL num;

	num = 0;
	uParam0->f_136 = 0;

	if (func_32(Global_36622[1], true))
	{
		num = 1;
		uParam0->f_136 = 1;
		func_88(&Global_36622[1], !uParam0->f_151);
		func_88(&Global_36622[0], true);
	}

	if (func_32(Global_36622[0], true))
	{
		num = 1;
		func_88(&Global_36622[0], !uParam0->f_150);
		func_88(&Global_36622[1], true);
	}

	return num;
}

Hash func_46(Hash hParam0) // Position - 0x2D50 Hash - 0x49053431 ^0x13BD88EB
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

BOOL func_47(Hash hParam0) // Position - 0x2E58 Hash - 0x5A094C43 ^0x5A094C43
{
	return hParam0 > -1 && hParam0 < 200;
}

BOOL func_48(Hash hParam0) // Position - 0x2E6E Hash - 0x6E1FF8D2 ^0xA37D6FD2
{
	if (func_122() != -1)
		return false;

	if (!func_47(hParam0))
		return false;

	return func_135(Global_1347702[hParam0 /*49*/].f_15, true);
}

int func_49(Hash hParam0, BOOL bParam1) // Position - 0x2E9F Hash - 0xCA5491A8 ^0x3140F2AC
{
	if (bParam1)
		if (func_188(Global_1347702[hParam0 /*49*/].f_12, 2097152))
			if (func_135(Global_1835011[59 /*74*/].f_1, true))
				return 0;
		else if (func_188(Global_1347702[hParam0 /*49*/].f_12, 256))
			if (!func_135(Global_1835011[59 /*74*/].f_1, true))
				return 0;

	return func_189(hParam0);
}

BOOL func_50(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x2F0B Hash - 0xB13E2226 ^0xA63BD3BC
{
	int num;

	if (Global_1572887.f_12 != -1)
	{
		if (bParam2 && iParam0 == 0 && bParam1 == false)
			return Global_1898164.f_163;
	
		if (bParam2 && iParam0 == 0 && bParam1 == true)
			return Global_1898164.f_164;
	
		if (func_190())
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
		num = func_191(Global_1898164.f_1[0 /*5*/]);
	
		if (func_47(num) && func_188(Global_1347702[num /*49*/].f_12, 131072))
			return false;
	}

	if (iParam0 == 0 && func_192(Global_1898164.f_1[0 /*5*/]))
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

void func_51(Hash hParam0, BOOL bParam1) // Position - 0x310F Hash - 0xD9457448 ^0xD9457448
{
	Global_40.f_490.f_402[hParam0] = Global_40.f_490.f_402[hParam0] || bParam1;
	return;
}

void func_52(Hash hParam0) // Position - 0x3134 Hash - 0xC300184D ^0xC300184D
{
	func_193();

	if (!func_47(hParam0))
		return;

	Global_40.f_1093 = Global_1347702[hParam0 /*49*/];
	return;
}

BOOL func_53(Hash hParam0, BOOL bParam1) // Position - 0x315B Hash - 0x7A9B781A ^0x7A9B781A
{
	return Global_40.f_490.f_402[hParam0] && bParam1 != false;
}

BOOL func_54(Hash hParam0, BOOL bParam1) // Position - 0x3175 Hash - 0xAA3DFEB ^0xAA3DFEB
{
	int i;

	if (func_122() != -1)
		return false;

	for (i = 0; i <= Global_40.f_1094 - 1; i = i + 1)
	{
		if (Global_40.f_450[i] == hParam0)
			if (!bParam1 || Global_1347702[i /*49*/].f_13 & 16384 == 0)
				return true;
	}

	return false;
}

int func_55(Hash hParam0) // Position - 0x31D2 Hash - 0xA3643963 ^0xF9EF53C7
{
	if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0 || Global_1347702[hParam0 /*49*/].f_12 & 33554432 != 0)
		return 1;

	return 3;
}

Hash func_56(Hash hParam0) // Position - 0x3208 Hash - 0x7D845FB3 ^0x8C761B1C
{
	const char* str;

	str = Global_1347702[hParam0 /*49*/].f_3;
	return MISC::GET_HASH_KEY(&str);
}

const char* func_57(int iParam0,  Param1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x3222 Hash - 0xAAA10C27 ^0x5F94E968
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

	return MISC::VAR_STRING(2, func_194(Param1));
}

void func_58(int iParam0, const char* sParam1, const char* sParam2, int iParam3) // Position - 0x3297 Hash - 0x680C4C3F ^0xCB675611
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

void func_59(Hash hParam0) // Position - 0x32EF Hash - 0x653603B ^0x6B1D5D13
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

	sprite = func_195(hParam0, false);
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

void func_60(Hash hParam0, BOOL bParam1) // Position - 0x33E1 Hash - 0x5EEEE2EA ^0x7DE8FB38
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
	
		func_196(hParam0, 8);
	}

	return;
}

BOOL func_61(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x3483 Hash - 0x41C0912B ^0x734B270C
{
	int num;

	if (!func_83(hParam0, 0))
		return false;

	num = func_115(hParam0);

	if (num == joaat("WEAPON"))
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return true;
		else
			return false;
	else if (num == joaat("AMMO"))
		if (!func_197(hParam0, 1))
			return false;

	return func_98(hParam0, false, bParam2) >= iParam1;
}

void func_62(var uParam0) // Position - 0x34ED Hash - 0xA4DD7C3 ^0x2192A444
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

void func_63(var uParam0) // Position - 0x3547 Hash - 0x7DBE30D6 ^0xC0E19F9B
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

void func_64(var uParam0) // Position - 0x35CF Hash - 0xD31813AD ^0x1D25FB9E
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

void func_65(var uParam0) // Position - 0x3657 Hash - 0x7EE54F18 ^0xA7AE657D
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

int func_66(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3, float fParam4) // Position - 0x36F7 Hash - 0x5AD1F9FD ^0x42FC5FEC
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

BOOL func_67(int iParam0) // Position - 0x3A13 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_198(iParam0);
}

BOOL func_68(Hash hParam0) // Position - 0x3A21 Hash - 0xBFE07B66 ^0x7CF1C952
{
	return func_31(hParam0, 566155764) && !UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(joaat("Map"));
}

int func_69(Hash hParam0, int iParam1) // Position - 0x3A43 Hash - 0x7A1C2599 ^0xFF9B5634
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

BOOL func_70(int iParam0) // Position - 0x3A8D Hash - 0xAD766E45 ^0x99868738
{
	if (iParam0 == 82200319)
		return 1;

	return 0;
}

int func_71(int iParam0) // Position - 0x3AA4 Hash - 0xED4DC84E ^0x9575F0C0
{
	switch (iParam0)
	{
		case -2012820803:
			return 1001486814;
	
		case -1680391208:
			return -1802851441;
	
		case -1594812622:
			return -1890586292;
	
		case -1556675047:
			return 1371776514;
	
		case -1454682982:
			return -1184308213;
	
		case -1449342224:
			return 1560872143;
	
		case -1261034125:
			return 924313143;
	
		case -1254096446:
			return -942045252;
	
		case -1253105631:
			return 1719193452;
	
		case -924992065:
			return -1862299111;
	
		case -915721704:
			return -1151534797;
	
		case -849973848:
			return 1882514148;
	
		case -760557223:
			return 2134142591;
	
		case -634222073:
			return -911614461;
	
		case -572653278:
			return -549220042;
	
		case -532692958:
			return 293303717;
	
		case -413074747:
			return 1822214480;
	
		case -358162791:
			return -2122099277;
	
		case -279147844:
			return 1499898596;
	
		case -246260565:
			return 1573399751;
	
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			if (func_200(func_199(3)) == 0)
				return 1323994892;
			else
				return -2100835330;
			break;
	
		case 18296369:
			return 1207697423;
	
		case 61577350:
			return -38767767;
	
		case 109840158:
			return -1793811613;
	
		case 202891657:
			return -1929044860;
	
		case 340173459:
			return -2106624491;
	
		case 368626453:
			return -1681356223;
	
		case 543847666:
			return -830115910;
	
		case 662019373:
			return -662209602;
	
		case 706727493:
			return -1467596218;
	
		case 888242611:
			return 1211786018;
	
		case 903996873:
			return -1510851298;
	
		case 1012860904:
			return 1103889939;
	
		case 1032348365:
			return 1799528770;
	
		case 1318524723:
			return -251964625;
	
		case 1538503020:
			return -870708883;
	
		case 1566650197:
			if (func_200(func_199(3)) == 0)
				return -194659462;
			else
				return -2099454688;
			break;
	
		case 1712504077:
			return 1124096174;
	
		case 1737771952:
			return -653022672;
	
		case 1767753378:
			if (func_200(func_199(3)) == 0)
				return 389460201;
			else
				return 1264044047;
			break;
	
		case 1786928078:
			return -1764788133;
	
		case 1787203230:
			return 626082474;
	}

	return -1;
}

int func_72(Hash hParam0) // Position - 0x3DC7 Hash - 0x467965F7 ^0x43F7C8DC
{
	if (!func_83(hParam0, 0))
		return -1;

	if (!func_31(hParam0, -1227898937))
		return -1;

	if (func_31(hParam0, -958604072))
		return 0;
	else if (func_31(hParam0, -726894473))
		return 1;
	else if (func_31(hParam0, -1705966655))
		return 2;
	else if (func_31(hParam0, -1205780639))
		return 3;
	else if (func_31(hParam0, -825365342))
		return 4;
	else if (func_31(hParam0, -580548123))
		return 5;
	else if (func_31(hParam0, -1536419873))
		return 6;
	else if (func_31(hParam0, -1306610876))
		return 7;
	else if (func_31(hParam0, 149872887))
		return 8;
	else if (func_31(hParam0, 1252156801))
		return 9;
	else if (func_31(hParam0, -217500080))
		return 10;
	else if (func_31(hParam0, -515403059))
		return 11;
	else if (func_31(hParam0, 387251815))
		return 12;
	else if (func_31(hParam0, 90594058))
		return 13;

	return -1;
}

int func_73(var uParam0, Any anParam1) // Position - 0x3F1B Hash - 0x7C9B8472 ^0xC727ACAE
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (uParam0->f_5.f_2[i /*5*/].f_2 == 0)
		{
		}
		else if (ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_NUM_VALUES(anParam1, uParam0->f_5.f_2[i /*5*/].f_2) == 0)
		{
		}
		else if (ITEMDATABASE::_ITEMDATABASE_LOCALIZATION_GET_VALUE(anParam1, uParam0->f_5.f_2[i /*5*/].f_2, 1) == 0)
		{
			return num;
		}
		else
		{
			num = num + 1;
		}
	}

	return num;
}

void func_74(int iParam0, var uParam1) // Position - 0x3F8C Hash - 0x45E5CB0A ^0x45E5CB0A
{
	switch (iParam0)
	{
		case 0:
			uParam1->[1] = 1058023652;
			uParam1->[2] = 83386168;
			uParam1->[3] = 1470235786;
			uParam1->[5] = 138629420;
			uParam1->[6] = -35898274;
			break;
	
		case 1:
			uParam1->[1] = -1132942503;
			uParam1->[2] = -306257787;
			uParam1->[3] = -1082391552;
			uParam1->[5] = -1933252363;
			uParam1->[6] = 1921299573;
			break;
	
		case 2:
			uParam1->[1] = 1097896734;
			uParam1->[2] = -527730691;
			uParam1->[3] = -2020686331;
			uParam1->[5] = 1558140816;
			uParam1->[6] = 1203318084;
			break;
	
		case 3:
			uParam1->[1] = 635501564;
			uParam1->[2] = 1536271015;
			uParam1->[3] = -2031552171;
			uParam1->[5] = -549142654;
			uParam1->[6] = 266150010;
			break;
	
		case 4:
			uParam1->[1] = -486466236;
			uParam1->[2] = -857116358;
			uParam1->[3] = 1599477265;
			uParam1->[5] = 1213931689;
			uParam1->[6] = 2136444581;
			break;
	
		case 5:
			uParam1->[1] = -1316093079;
			uParam1->[2] = -1046072745;
			uParam1->[3] = -1270311012;
			uParam1->[5] = 1957525344;
			uParam1->[6] = 211363637;
			break;
	
		case 6:
			uParam1->[1] = 679234593;
			uParam1->[2] = 790141037;
			uParam1->[3] = 0;
			uParam1->[5] = -393040806;
			uParam1->[6] = 225637914;
			break;
	
		case 7:
			uParam1->[1] = 1284380168;
			uParam1->[2] = -651770051;
			uParam1->[3] = -2097735057;
			uParam1->[5] = 821662409;
			uParam1->[6] = 619608751;
			break;
	
		case 8:
			uParam1->[1] = -1742930715;
			uParam1->[2] = -1352987288;
			uParam1->[3] = -1113478667;
			uParam1->[5] = 676730061;
			uParam1->[6] = -2136718000;
			break;
	
		case 9:
			uParam1->[1] = 233145454;
			uParam1->[2] = -1030003209;
			uParam1->[3] = 0;
			uParam1->[5] = -2067943350;
			uParam1->[6] = -1761585969;
			break;
	
		case 10:
			uParam1->[1] = 440932517;
			uParam1->[2] = 802847004;
			uParam1->[3] = 0;
			uParam1->[5] = -1968735607;
			uParam1->[6] = 2094456548;
			break;
	
		case 11:
			uParam1->[1] = -218858354;
			uParam1->[2] = -16526676;
			uParam1->[3] = 0;
			uParam1->[5] = -713790542;
			uParam1->[6] = -1009301384;
			break;
	
		case 12:
			uParam1->[1] = -1926688180;
			uParam1->[2] = -1798429678;
			uParam1->[3] = 0;
			uParam1->[5] = -1095881944;
			uParam1->[6] = -1938110786;
			break;
	
		case 13:
			uParam1->[1] = -42574812;
			uParam1->[2] = 1232101727;
			uParam1->[3] = 0;
			uParam1->[5] = -1109376882;
			uParam1->[6] = 1873683499;
			break;
	
		case 14:
			uParam1->[1] = 56995427;
			uParam1->[2] = -626969930;
			uParam1->[3] = 0;
			uParam1->[5] = 1185101111;
			uParam1->[6] = 905319389;
			break;
	
		case 15:
			uParam1->[1] = 222587387;
			uParam1->[2] = 609189180;
			uParam1->[3] = 0;
			uParam1->[5] = -1234411431;
			uParam1->[6] = -1465203498;
			break;
	
		case 16:
			uParam1->[1] = -215060262;
			uParam1->[2] = 344902766;
			uParam1->[3] = 0;
			uParam1->[5] = 1697949471;
			uParam1->[6] = 449155650;
			break;
	
		case 17:
			uParam1->[1] = 565147534;
			uParam1->[2] = 1085644998;
			uParam1->[3] = 0;
			uParam1->[5] = -1673893059;
			uParam1->[6] = 1762592015;
			break;
	
		case 18:
			uParam1->[1] = -1947344575;
			uParam1->[2] = 1183113484;
			uParam1->[3] = 0;
			uParam1->[5] = 215714142;
			uParam1->[6] = -14029317;
			break;
	
		case 19:
			uParam1->[1] = -187013772;
			uParam1->[2] = -1718077947;
			uParam1->[3] = 0;
			uParam1->[5] = -529147089;
			uParam1->[6] = 1971848557;
			break;
	
		case 20:
			uParam1->[1] = 404261010;
			uParam1->[2] = -293066142;
			uParam1->[3] = 0;
			uParam1->[5] = 1536037743;
			uParam1->[6] = -1916012566;
			break;
	
		case 21:
			uParam1->[1] = -1369644388;
			uParam1->[2] = 885729844;
			uParam1->[3] = 445380022;
			uParam1->[5] = -757204467;
			uParam1->[6] = 206761206;
			break;
	
		case 22:
			uParam1->[1] = -518998776;
			uParam1->[2] = 437388956;
			uParam1->[3] = 1204871705;
			uParam1->[5] = -1805886990;
			uParam1->[6] = 330225817;
			break;
	
		case 23:
			uParam1->[1] = 694865154;
			uParam1->[2] = 992018002;
			uParam1->[3] = 89821894;
			uParam1->[5] = 2116883103;
			uParam1->[6] = -305630760;
			break;
	
		case 24:
			uParam1->[1] = -544747299;
			uParam1->[2] = 1149473811;
			uParam1->[3] = 0;
			uParam1->[5] = 762780430;
			uParam1->[6] = 1080508654;
			break;
	
		case 25:
			uParam1->[1] = -1351317536;
			uParam1->[2] = -1017472673;
			uParam1->[3] = -912546335;
			uParam1->[5] = -1902013391;
			uParam1->[6] = -1590183587;
			break;
	
		case 26:
			uParam1->[1] = 886055955;
			uParam1->[2] = 571895420;
			uParam1->[3] = 0;
			uParam1->[5] = 141091591;
			uParam1->[6] = -160252133;
			break;
	
		case 27:
			uParam1->[1] = -556285487;
			uParam1->[2] = 1614302152;
			uParam1->[3] = 0;
			uParam1->[5] = -419436105;
			uParam1->[6] = -1153592781;
			break;
	
		case 28:
			uParam1->[1] = 2037158384;
			uParam1->[2] = 585557722;
			uParam1->[3] = 0;
			uParam1->[5] = -656934440;
			uParam1->[6] = 1773837215;
			break;
	
		case 29:
			uParam1->[1] = -546026667;
			uParam1->[2] = 2043867312;
			uParam1->[3] = 0;
			uParam1->[5] = -2108845481;
			uParam1->[6] = -1131313442;
			break;
	
		case 30:
			uParam1->[1] = 998414367;
			uParam1->[2] = 2113575249;
			uParam1->[3] = -876464929;
			uParam1->[5] = -1369345218;
			uParam1->[6] = 1074337419;
			break;
	
		case 31:
			uParam1->[1] = -1513488517;
			uParam1->[2] = 757007611;
			uParam1->[3] = 0;
			uParam1->[5] = -1953397901;
			uParam1->[6] = -1129290320;
			break;
	
		case 32:
			uParam1->[1] = -188888539;
			uParam1->[2] = 1163343855;
			uParam1->[3] = 316887816;
			uParam1->[5] = 1093667790;
			uParam1->[6] = -1053389863;
			break;
	
		case 33:
			uParam1->[1] = -532564011;
			uParam1->[2] = -733172977;
			uParam1->[3] = 0;
			uParam1->[5] = 907866416;
			uParam1->[6] = 333294770;
			break;
	
		default:
			break;
	}

	return;
}

void func_75(int iParam0, var uParam1) // Position - 0x4792 Hash - 0xAFAE64AC ^0xD4C49360
{
	uParam1->[0] = 0;

	switch (iParam0)
	{
		case 0:
			uParam1->[1] = 1897544931;
			uParam1->[2] = 266041631;
			uParam1->[3] = 0;
			uParam1->[5] = 1509550115;
			uParam1->[6] = 509767913;
			uParam1->[7] = 0;
			break;
	
		case 1:
			uParam1->[1] = 2015614314;
			uParam1->[2] = -882651535;
			uParam1->[3] = 0;
			uParam1->[5] = 197851966;
			uParam1->[6] = -521034356;
			uParam1->[7] = 0;
			break;
	
		case 2:
			uParam1->[1] = -1930969928;
			uParam1->[2] = -1309514843;
			uParam1->[3] = 0;
			uParam1->[5] = -1876026974;
			uParam1->[6] = -1163727221;
			uParam1->[7] = 0;
			break;
	
		case 3:
			uParam1->[1] = -16828255;
			uParam1->[2] = -1765089170;
			uParam1->[3] = 0;
			uParam1->[5] = -949517903;
			uParam1->[6] = -1144296811;
			uParam1->[7] = 0;
			break;
	
		case 4:
			uParam1->[1] = -2077710768;
			uParam1->[2] = 1630201582;
			uParam1->[3] = 0;
			uParam1->[5] = 389673950;
			uParam1->[6] = -328163764;
			uParam1->[7] = 0;
			break;
	
		case 5:
			uParam1->[1] = -890348822;
			uParam1->[2] = 1191730756;
			uParam1->[3] = 0;
			uParam1->[5] = -244620647;
			uParam1->[6] = joaat("FAM1_HPAA");
			uParam1->[7] = 0;
			break;
	
		case 6:
			uParam1->[1] = -1296064150;
			uParam1->[2] = 1840190058;
			uParam1->[3] = 0;
			uParam1->[5] = 2114150388;
			uParam1->[6] = 1313079414;
			uParam1->[7] = 0;
			break;
	
		case 7:
			uParam1->[1] = 504104914;
			uParam1->[2] = -670131942;
			uParam1->[3] = 0;
			uParam1->[5] = -39402208;
			uParam1->[6] = 200630717;
			uParam1->[7] = 0;
			break;
	
		case 8:
			uParam1->[1] = 772020613;
			uParam1->[2] = 2083596926;
			uParam1->[3] = 0;
			uParam1->[5] = 1921439563;
			uParam1->[6] = -1454783280;
			uParam1->[7] = 0;
			break;
	
		case 9:
			uParam1->[1] = -706329904;
			uParam1->[2] = 810875384;
			uParam1->[3] = 0;
			uParam1->[5] = 1942418467;
			uParam1->[6] = 1361948401;
			uParam1->[7] = 0;
			break;
	
		case 10:
			uParam1->[1] = 1996723693;
			uParam1->[2] = -2077382259;
			uParam1->[3] = 0;
			uParam1->[5] = -1609894991;
			uParam1->[6] = -1848617156;
			uParam1->[7] = 0;
			break;
	
		case 11:
			uParam1->[1] = -1118758269;
			uParam1->[2] = 1001361578;
			uParam1->[3] = 0;
			uParam1->[5] = 1188868442;
			uParam1->[6] = -85911196;
			uParam1->[7] = 0;
			break;
	
		case 12:
			uParam1->[1] = -1084988756;
			uParam1->[2] = 664353388;
			uParam1->[3] = 0;
			uParam1->[5] = -925751739;
			uParam1->[6] = -1224834402;
			uParam1->[7] = 0;
			break;
	
		case 13:
			uParam1->[1] = 1300422639;
			uParam1->[2] = -1886721378;
			uParam1->[3] = 0;
			uParam1->[5] = 402394595;
			uParam1->[6] = 1280669333;
			uParam1->[7] = 0;
			break;
	
		case 14:
			uParam1->[1] = 1031073462;
			uParam1->[2] = -1765843222;
			uParam1->[3] = -612472729;
			uParam1->[5] = 84541090;
			uParam1->[6] = -723181991;
			uParam1->[7] = -542952491;
			break;
	
		default:
			break;
	}

	return;
}

void func_76(var uParam0) // Position - 0x4B46 Hash - 0x50D621B0 ^0xA87CE0EC
{
	if (uParam0->f_131 > 0)
		PED::_SET_PED_BLACKBOARD_BOOL(Global_35, "GENERIC_BOOK_READ_AVAILABLE", true, -1);

	return;
}

void func_77(int iParam0, int iParam1) // Position - 0x4B66 Hash - 0x6BC99D9C ^0x6BC99D9C
{
	if (!func_192(iParam0))
		return;

	func_201(iParam0, iParam1);
	return;
}

BOOL func_78(int iParam0, int iParam1) // Position - 0x4B83 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_79(int iParam0, int iParam1) // Position - 0x4B92 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

void func_80(int iParam0) // Position - 0x4BA3 Hash - 0xD873A03B ^0xA79CB019
{
	switch (iParam0)
	{
		case -2114196387:
		case 1824375265:
			Global_40.f_9146.f_94[13] = 1;
			break;
	
		case -1492175229:
			Global_40.f_9146.f_94[5] = 1;
			break;
	
		case -1260334554:
			Global_40.f_9146.f_94[4] = 1;
			break;
	
		case -884998428:
			Global_40.f_9146.f_94[12] = 1;
			break;
	
		case -866909932:
			Global_40.f_9146.f_94[2] = 1;
			break;
	
		case 268535918:
			Global_40.f_9146.f_94[1] = 1;
			break;
	
		case 667072496:
			Global_40.f_9146.f_94[0] = 1;
			break;
	
		case 1585456486:
			Global_40.f_9146.f_94[6] = 1;
			break;
	}

	return;
}

void func_81(Hash hParam0) // Position - 0x4C63 Hash - 0xBDD5F70B ^0xFFB15F73
{
	int num;
	int num2;
	int num3;
	var unk;
	BOOL flag;
	int i;
	Hash hash;

	if (func_31(hParam0, 1989861793))
	{
		num = func_69(hParam0, 1697966752);
	
		if (num != 0)
		{
			unk = { func_202(joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0, 0, 0, -1, num, 0) };
		
			if (func_203(unk, &num2, &num3, 0))
			{
				flag = false;
			
				for (i = 0; i < num3; i = i + 1)
				{
					hash = func_204(i, num2);
				
					if (hash != hParam0 && func_83(hash, 0))
						if (func_205(hash, 0, false, true, 0))
							flag = true;
				}
			
				func_206(num2);
			
				if (flag)
					func_207(hParam0);
				else
					func_105(306, false);
			}
		}
	}

	return;
}

void func_82(Hash hParam0) // Position - 0x4D1C Hash - 0xA526C727 ^0xE3A2F00B
{
	int num;
	Vector3 vector;
	float radius;

	if (func_31(hParam0, 566155764))
	{
		func_208(hParam0);
		num = func_209(hParam0);
	
		if (num != -1)
		{
			vector = { func_210(num) };
			radius = { func_211(num) };
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vector, radius);
		}
	
		UIAPPS::LAUNCH_UIAPP_BY_HASH(joaat("Map"));
	}

	return;
}

BOOL func_83(Hash hParam0, int iParam1) // Position - 0x4D6E Hash - 0x2B935ABB ^0xABFBDF54
{
	if (hParam0 == 0)
		return false;

	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(hParam0, iParam1);
}

void func_84(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4D88 Hash - 0x89AE2BEC ^0x89AE2BEC
{
	int num;

	if (bParam2 && !func_42(iParam0))
		return;

	num = func_93(iParam0);

	if (bParam1)
	{
		func_212(iParam0, 4);
		func_213(num, true);
		func_214(num, true);
	}
	else
	{
		func_215(iParam0, 4);
		func_214(num, false);
	}

	return;
}

BOOL func_85(var uParam0, var uParam1) // Position - 0x4DD7 Hash - 0xCC356685 ^0xBBDA1B1
{
	BOOL flag;

	if (func_24(*uParam1, uParam0->f_130))
		flag = !func_31(*uParam1, 1051234725);

	if (func_86(*uParam1, uParam0->f_130))
		flag = func_31(*uParam1, 601161511);

	return flag;
}

BOOL func_86(Hash hParam0, int iParam1) // Position - 0x4E1A Hash - 0xDB76EF08 ^0x45A19FF7
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

BOOL func_87(int iParam0, BOOL bParam1) // Position - 0x4F76 Hash - 0xC074CB7F ^0xC074CB7F
{
	if (bParam1 && !func_42(iParam0))
		return false;

	return !func_216(iParam0, 4);
}

void func_88(int iParam0, BOOL bParam1) // Position - 0x4F9B Hash - 0x46B3F171 ^0x46B3F171
{
	if (func_42(*iParam0))
		func_84(*iParam0, bParam1, true);

	return;
}

void func_89(var uParam0, var uParam1) // Position - 0x4FB7 Hash - 0xE59010A2 ^0xE59010A2
{
	func_88(&Global_36622[3], func_85(uParam0, uParam1));
	return;
}

BOOL func_90(Hash hParam0, int iParam1) // Position - 0x4FD1 Hash - 0xDB76EF08 ^0x8DABBCD3
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

void func_91(var uParam0) // Position - 0x512D Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

void func_92(var uParam0, var uParam1, var uParam2) // Position - 0x5135 Hash - 0x2421381E ^0x46E4832C
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(joaat("translation_overlay")))
	{
		num = uParam1->f_51 + uParam1->f_52 + 1;
		flag = uParam0->f_135 < num - 1;
		flag2 = uParam0->f_135 > 0;
	
		if (flag2)
		{
			if (!func_42(uParam1->f_1))
				uParam1->f_1 = func_217("NEWS_PREV_ARTICLE", joaat("INPUT_DOCUMENT_PAGE_PREV"), 0, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), false);
		
			if (func_218(uParam1->f_1, true))
			{
				func_219(uParam0, uParam2);
				func_220(uParam0, uParam1, uParam2);
			}
		}
		else if (func_42(uParam1->f_1))
		{
			func_221(&(uParam1->f_1), true, true);
		}
	
		if (flag)
		{
			if (!func_42(*uParam1))
				*uParam1 = func_217("NEWS_NEXT_ARTICLE", joaat("INPUT_DOCUMENT_PAGE_NEXT"), 0, 570, 4000, 10, 1073741824, 0, 1065353216, false, 3, joaat("SHORT_TIMED_EVENT"), false);
		
			if (func_218(*uParam1, true))
			{
				func_222(uParam0, uParam2);
				func_220(uParam0, uParam1, uParam2);
			}
		}
		else if (func_42(*uParam1))
		{
			func_221(uParam1, true, true);
		}
	}
	else
	{
		if (func_42(uParam1->f_1))
			func_221(&(uParam1->f_1), true, true);
	
		if (func_42(*uParam1))
			func_221(uParam1, true, true);
	}

	return;
}

int func_93(int iParam0) // Position - 0x5275 Hash - 0xC9D82232 ^0xC9D82232
{
	return iParam0;
}

void func_94(var uParam0, Hash hParam1) // Position - 0x527F Hash - 0x37667EFC ^0xB4D4815A
{
	Hash entryId;

	entryId = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Translate");
	uParam0->f_5.f_63 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, "Generic");

	if (func_31(hParam1, 1104960349))
	{
		func_223(uParam0, hParam1);
	}
	else if (func_31(hParam1, 1989861793))
	{
		func_224(uParam0, hParam1);
	}
	else if (func_31(hParam1, -772152977))
	{
		func_225(uParam0, hParam1);
	}
	else if (func_31(hParam1, -2081717885))
	{
		func_226(uParam0, hParam1);
	}
	else if (func_69(hParam1, 1224357681) == joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"))
	{
		func_227(uParam0, hParam1);
	}
	else if (func_31(hParam1, -1227898937))
	{
		uParam0->f_135 = 0;
		func_228(uParam0, hParam1);
	}
	else
	{
		func_229(uParam0, hParam1);
	}

	return;
}

BOOL func_95(Hash hParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x534D Hash - 0x198FCB70 ^0x369C0AB5
{
	if (func_122() == -1)
	{
		if (func_230(hParam0) && func_231(hParam0))
		{
			func_232(hParam0, iParam1, true, &bParam2, iParam3);
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

BOOL func_96(Hash hParam0, var uParam1, int iParam2) // Position - 0x53A4 Hash - 0x19531B0A ^0x19531B0A
{
	var unk;
	int num;
	int num2;

	*uParam1 = iParam2;
	func_233(hParam0, uParam1);
	unk = { func_234(hParam0, false, true) };
	num = func_235(hParam0, &unk, false, false);
	num2 = func_236(hParam0, false);

	if (num > 1 && !func_237() && num2 + iParam2 >= num)
		if (func_31(hParam0, -2051813666))
			func_105(583, true);
		else
			func_105(582, false);

	if (func_238(hParam0, &unk, *uParam1, false, false))
		if (num2 < num)
			*uParam1 = num - num2;
		else
			return false;

	return true;
}

void func_97(Hash hParam0, BOOL bParam1) // Position - 0x5440 Hash - 0xB66258E7 ^0x1C70D810
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

int func_98(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x54EC Hash - 0x27EBD222 ^0x461275A8
{
	int num;
	Hash ammoType;
	int inventoryItemCountWithItemid;

	if (!func_83(hParam0, 0))
		return 0;

	num = func_115(hParam0);

	if (num == joaat("AMMO") || bParam1 && num == joaat("WEAPON"))
	{
		ammoType = func_239(hParam0, 1);
	
		if (ammoType != 0)
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
	}
	else if (num == joaat("WEAPON"))
	{
		return func_240(hParam0, false);
	}

	inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_241(bParam2), hParam0, false);
	return inventoryItemCountWithItemid;
}

BOOL func_99(Hash hParam0) // Position - 0x556E Hash - 0xAC8EB620 ^0xAC8EB620
{
	if (func_122() != -1)
		return false;

	return func_100(hParam0) != 0;
}

Hash func_100(Hash hParam0) // Position - 0x558A Hash - 0x6FAFBBB4 ^0x738A5F7C
{
	Hash collectableItemHash;
	int i;

	for (i = 0; i < func_242(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_243(collectableItemHash))
			return collectableItemHash;
	}

	return 0;
}

Hash func_101(Hash hParam0) // Position - 0x55C6 Hash - 0xD6E12BEB ^0x67FB12E2
{
	return COLLECTION::_COLLECTABLE_GET_SUBCATEGORY(hParam0);
}

int func_102(Hash hParam0) // Position - 0x55D4 Hash - 0x63EE8363 ^0x22F3A4BC
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < func_242(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (hParam0 == func_101(collectableItemHash))
			if (func_61(func_243(collectableItemHash), 1, false))
				num = num + 1;
	}

	return num;
}

void func_103(Hash hParam0) // Position - 0x5621 Hash - 0x492800CC ^0x9F572505
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	func_244(48);
	func_245(false, -1);
	return;
}

BOOL func_104(int iParam0) // Position - 0x563C Hash - 0x5FF09631 ^0xD3AB2726
{
	if (func_122() != -1)
		return false;

	return func_135(Global_1347702[iParam0 /*49*/].f_15, true);
}

void func_105(int iParam0, BOOL bParam1) // Position - 0x565F Hash - 0x8A4CBA15 ^0x8A4CBA15
{
	int num;
	int num2;

	func_246(iParam0, &num, &num2);

	if (!func_247(iParam0, num, num2, bParam1))
		return;

	func_248(num, num2);
	return;
}

int func_106(Hash hParam0) // Position - 0x568C Hash - 0xDCB10D9D ^0xF3DC1D4F
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), hParam0);
}

Hash func_107(Hash hParam0) // Position - 0x569F Hash - 0xDCB10D9D ^0x4B188B5C
{
	return COLLECTION::_0x93F2E7B5DB85657B(joaat("CIGARETTE_CARDS"), hParam0);
}

BOOL func_108() // Position - 0x56B2 Hash - 0x65674CA9 ^0x17A1348F
{
	return true;
}

BOOL func_109(int iParam0) // Position - 0x56D1 Hash - 0x5FF09631 ^0x616FE32F
{
	if (func_122() != -1)
		return false;

	return func_135(Global_1835011[iParam0 /*74*/].f_1, true);
}

BOOL func_110(Hash hParam0) // Position - 0x56F4 Hash - 0x107F2F0B ^0xDB4FB10D
{
	if (func_122() != -1)
		return false;

	if (!func_47(hParam0))
		return false;

	return func_249(Global_1347702[hParam0 /*49*/].f_15);
}

int func_111() // Position - 0x5724 Hash - 0xA2AE820C ^0xA2AE820C
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (func_61(func_250(i), 1, false))
			num = num + 1;
	}

	return num;
}

void func_112(int iParam0, Hash hParam1, int iParam2, Hash hParam3, int iParam4, BOOL bParam5, int iParam6, BOOL bParam7) // Position - 0x5759 Hash - 0x2D6CF941 ^0x813D1B96
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
		
			if (func_108() && func_110(38) || func_104(38))
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
			if (func_108() && func_110(39) || func_104(39))
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
			if (func_108() && func_110(41) || func_104(41))
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
			num = func_251(hParam3, 19);
			hash2 = -1531394072;
			hashKey = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			hash = joaat("col_ex_intro");
			break;
	
		case 49:
			if (func_108() && func_110(49) || func_104(49))
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
			num = func_251(hParam3, 20);
			hash2 = joaat("taxidermy");
			hashKey = joaat("blip_rc_hobbs");
			hash = joaat("col_tx_intro");
			break;
	}

	str3 = func_252(iParam0, hash2, iParam6, str3, iParam4, num2, hParam3);

	if (iParam6 == 8)
	{
		hashKey = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		hashKey2 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		hashKey2 = MISC::GET_HASH_KEY("toast_log_blips");
	}

	func_253(iParam0, hash, hash2);
	func_254(iParam0, hash, unk, str5, str4);
	func_255(iParam0, hash, str3, str6, str, str2, hashKey, hashKey2);
	func_256(iParam0, hash, hash2, hParam3, hParam1, iParam6, num, iParam2, num2, bParam5);
	func_257(iParam0, hash, hash2, iParam6);
	func_258(iParam0, hash, hash2, iParam6, bParam7);
	return;
}

void func_113(int iParam0) // Position - 0x5B94 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12004 = Global_40.f_12004 || iParam0;
	return;
}

void func_114(int iParam0, Hash hParam1, Hash hParam2, int iParam3, int iParam4, int iParam5, Hash hParam6) // Position - 0x5BAB Hash - 0xD806FABF ^0xF7F3ACE4
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
		
			if (func_108() && func_110(38) || func_104(38))
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
		
			if (func_108() && func_110(39) || func_104(39))
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
		
			if (func_108() && func_110(49) || func_104(49))
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
		if (func_108() && func_110(38) || func_104(38))
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
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 1)
		{
			str4 = "COL_CC_CARD_POSTED_OBJ";
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else if (iParam5 == 0)
		{
			func_261(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_107(hParam6))), hashKey2, hashKey, -2, 0, 0, 0, 0, true, true);
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
		else
		{
			str2 = "COL_CC_INTRO";
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		}
	}
	else if (num == joaat("dino_bones"))
	{
		if (func_108() && func_110(39) || func_104(39))
			hash = joaat("col_db_intro");
		else
			hash = joaat("col_db_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else if (num == joaat("rock_carvings"))
	{
		if (func_108() && func_110(49) || func_104(49))
			hash = joaat("col_rc_intro");
		else
			hash = joaat("col_rc_intro_pre");
	
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, hash);
	
		if (iParam5 == 1)
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str4, iParam3, iParam4), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
		else
			func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), hashKey2, hashKey, joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	}

	return;
}

int func_115(Hash hParam0) // Position - 0x6157 Hash - 0x199110B9 ^0xAC31347C
{
	var outData;

	if (!func_83(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_2;
}

BOOL func_116(Hash hParam0, int iParam1) // Position - 0x6182 Hash - 0x6D89877F ^0x75E613A5
{
	if (!func_83(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(hParam0, iParam1);
}

BOOL func_117(int iParam0) // Position - 0x61A1 Hash - 0xA0FCEF7F ^0xA0FCEF7F
{
	if (!func_262(iParam0))
		return false;

	return func_263(iParam0);
}

void func_118(int iParam0) // Position - 0x61BD Hash - 0xFDF9CB10 ^0xFDF9CB10
{
	if (!func_262(iParam0))
		return;

	func_264(iParam0);
	func_265(iParam0);
	return;
}

Hash func_119(Hash hParam0) // Position - 0x61DE Hash - 0x199110B9 ^0xEA34403C
{
	var outData;

	if (!func_83(hParam0, 0))
		return 0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(hParam0, &outData))
		return 0;

	return outData.f_1;
}

Hash func_120(Hash hParam0, BOOL bParam1) // Position - 0x6209 Hash - 0x27CC99BE ^0x9BD61A93
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

	if (func_83(hash, 0))
		if (bParam1)
			if (func_266(hash) || func_267(hash))
				return hash;
		else
			return hash;

	return hParam0;
}

Hash func_121(Hash hParam0, BOOL bParam1) // Position - 0x638F Hash - 0x68919B0 ^0x66A44A24
{
	if (!func_83(hParam0, 0))
		return 0;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return hParam0;

	!bParam1;
	return 0;
}

BOOL func_122() // Position - 0x63BB Hash - 0x4228A1C2 ^0x6E8485BE
{
	return Global_1572887.f_12;
}

void func_123(Hash hParam0) // Position - 0x63C9 Hash - 0x6D90E810 ^0x7EE3BF23
{
	Hash weaponUnlock;

	if (Global_1572887.f_12 != -1)
		return;

	if (!func_268(hParam0))
		return;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return;

	UNLOCK::UNLOCK_SET_UNLOCKED(weaponUnlock, true);
	return;
}

BOOL func_124(BOOL bParam0) // Position - 0x6403 Hash - 0x5FE544FD ^0x9DF7DC41
{
	if (func_122() == -1)
		return true;

	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_241(bParam0));
}

BOOL func_125(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, Hash hParam6, BOOL bParam7) // Position - 0x6421 Hash - 0x61DE9CAE ^0x4ADCEE54
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
		unk = { func_234(hParam0, false, true) };
		hash = joaat("SLOTID_WEAPON_0");
		unk6.f_9 = joaat("SLOTID_NONE");
	
		for (i = 0; i < 4; i = i + 1)
		{
			hash = func_269(398 + i, 1);
		
			if (func_270(hParam0, &unk, hash, false))
			{
				if (func_271(hParam0, &unk6, hash))
				{
					unk28 = { func_272(hParam0, unk, hash, false) };
					func_273(hParam0, &unk28, &unk, 1, -142743235, 1, false);
					break;
				}
			}
		}
	}

	if (func_124(false))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
			return 0;
	
		func_126(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0), iParam1, hParam6);
		func_274(hParam0, iParam1);
		return 1;
	}

	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, hParam0, 0, false))
		return 0;

	iParam1 > 0;
	WEAPON::GIVE_WEAPON_TO_PED(Global_35, hParam0, 0, bParam2, bParam3, iParam4, bParam5, 1056964608, 1065353216, hParam6, bParam7, 0, false);
	return 1;
}

BOOL func_126(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x6573 Hash - 0xCABE5725 ^0xB186E46E
{
	if (iParam1 < 1)
		return true;

	if (!func_128(hParam0))
		return false;

	if (!func_124(false))
		return false;

	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_35, hParam0, iParam1, hParam2);
	return true;
}

BOOL func_127(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, BOOL bParam4) // Position - 0x65AE Hash - 0x59CC5407 ^0xB9F9E5A1
{
	Hash weaponHash;
	var unk;
	int num;
	Hash weaponHash2;
	BOOL flag;

	weaponHash = func_121(hParam0, false);

	if (WEAPON::IS_WEAPON_VALID(weaponHash))
	{
		if (func_122() == -1)
		{
			func_123(weaponHash);
		
			if (hParam1 == 1248274121)
				func_275(weaponHash);
		}
	
		if (!func_238(hParam0, &unk, 1, false, false))
		{
			func_232(hParam0, 1, false, uParam2, hParam1);
			num = func_276(weaponHash);
		
			if (WEAPON::_IS_WEAPON_SNIPER(weaponHash))
			{
				func_125(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("weapon_fishingrod") || weaponHash == joaat("weapon_kit_binoculars"))
			{
				func_125(weaponHash, 0, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (weaponHash == joaat("WEAPON_LASSO"))
			{
				func_125(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(weaponHash))
			{
				if (weaponHash == joaat("weapon_melee_knife_john") && !func_277())
					return false;
			
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(hParam0))
				{
				}
				else if (!func_278(weaponHash))
				{
					func_125(weaponHash, 1, bParam3, bParam4, 0, false, hParam1, false);
				}
				else
				{
					func_125(weaponHash, WEAPON::GET_WEAPON_CLIP_SIZE(weaponHash) * 4, bParam3, bParam4, 0, false, hParam1, false);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponHash))
			{
				weaponHash2 = func_279(Global_35, 2, false, true);
			
				if (func_268(weaponHash2) && !Global_43891 && weaponHash2 != weaponHash && !func_117(24) && bParam4)
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_35, weaponHash2);
			
				flag = true;
			
				if (func_268(weaponHash2) && func_117(24))
					if (!func_125(weaponHash, num, bParam3, bParam4, 3, flag, hParam1, false))
						return false;
				else if (!func_125(weaponHash, num, bParam3, bParam4, 0, flag, hParam1, false))
					return false;
			}
			else if (!func_125(weaponHash, num, bParam3, bParam4, 0, false, hParam1, false))
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
		func_105(480, true);

	return true;
}

BOOL func_128(Hash hParam0) // Position - 0x67BA Hash - 0xD6E12BEB ^0xA529D76A
{
	return WEAPON::_IS_AMMO_VALID(hParam0);
}

BOOL func_129(Hash hParam0, var uParam1, Hash hParam2) // Position - 0x67C8 Hash - 0x8FE8AA03 ^0x8ABA2B4
{
	int num;
	int weaponClipSize;
	int ammo;
	int pedAmmoByType;
	Hash weaponTypeFromAmmoType;
	int num2;
	int num3;

	if (!func_128(hParam0))
		return false;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);
	pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	if (func_268(weaponTypeFromAmmoType))
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
		func_166(func_280(hParam0), func_165(hParam0), true);
		return false;
	}

	if (ammo == pedAmmoByType + num)
		if (func_122() == -1)
			if (func_135(Global_1835011[14 /*74*/].f_1, true))
				func_105(416, false);

	if (num == 0)
		return false;

	if (func_124(false))
	{
		if (func_126(hParam0, num, hParam2))
		{
			*uParam1 = num;
			return true;
		}
	}
	else
	{
		return func_171(hParam0, *uParam1, hParam2);
	}

	return false;
}

void func_130(Hash hParam0) // Position - 0x6911 Hash - 0x4FF3DD4C ^0xAF84DD67
{
	var unk;

	if (hParam0 == joaat("provision_talisman_eagle_talon") && !func_281() || hParam0 != joaat("provision_talisman_eagle_talon"))
		if (func_282(Global_35, hParam0, &unk))
			func_150(PLAYER::PLAYER_PED_ID(), hParam0, 0, -358215195, true, true, true, false, true, true);

	switch (hParam0)
	{
		case joaat("provision_talisman_buffalo_horn"):
			Global_40.f_11095.f_51 = Global_40.f_11095.f_51 + 0.1f;
			func_156();
			break;
	
		case joaat("provision_talisman_bear_claw"):
			Global_40.f_11095.f_49 = Global_40.f_11095.f_49 + 0.1f;
			func_156();
			break;
	
		case joaat("provision_talisman_eagle_talon"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_154();
			break;
	
		case joaat("provision_talisman_raven_claw"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.2f;
			func_152();
			break;
	
		case joaat("provision_talisman_alligator_tooth"):
			Global_40.f_11095.f_50 = Global_40.f_11095.f_50 + 0.1f;
			func_156();
			break;
	}

	return;
}

void func_131(Hash hParam0) // Position - 0x6A18 Hash - 0xA92CE7CF ^0x8CEA2EC6
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
			func_284();
			break;
	
		case joaat("provision_trinket_fox_claw"):
			Global_40.f_11095.f_58 = Global_40.f_11095.f_58 + 0.5f;
			func_154();
			break;
	
		case joaat("provision_trinket_hawk_talon"):
			Global_40.f_11095.f_64 = Global_40.f_11095.f_64 + 0.3f;
			func_283();
			break;
	
		case joaat("provision_trinket_beaver_tooth"):
			Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
			func_152();
			break;
	
		case joaat("provision_trinket_iguana_scale"):
			Global_40.f_11095.f_63 = Global_40.f_11095.f_63 + 0.1f;
			func_155();
			break;
	
		case joaat("provision_trinket_coyote_fang"):
			Global_40.f_11095.f_56 = Global_40.f_11095.f_56 + 0.1f;
			break;
	
		case joaat("provision_trinket_bison_horn"):
			Global_40.f_11095.f_61 = Global_40.f_11095.f_61 + 0.1f;
			func_153();
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
			func_156();
			break;
	}

	return;
}

struct<2> func_132(int iParam0) // Position - 0x6C03 Hash - 0xE1D56150 ^0x706BE6DE
{
	var unk;

	unk.f_1 = iParam0;
	return unk;
}

void func_133(var uParam0, var uParam1, int iParam2) // Position - 0x6C15 Hash - 0x8FAA7FE4 ^0x7A58E602
{
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
	return;
}

struct<2> func_134(int iParam0, int iParam1) // Position - 0x6C25 Hash - 0xDB125B20 ^0x71B3ED52
{
	int num;

	num = iParam0;
	num.f_1 = iParam1;
	return num;
}

BOOL func_135(int iParam0, BOOL bParam1) // Position - 0x6C3B Hash - 0xAA5BFD67 ^0xAA5BFD67
{
	switch (func_285(iParam0))
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

void func_136(Hash hParam0) // Position - 0x6C6C Hash - 0xF29DD96C ^0x175841E3
{
	BOOL flag;

	flag = func_31(hParam0, -2017733358);

	if (func_286() < 3)
		if (flag)
			if (func_288(func_287(hParam0), hParam0))
				func_166(79, func_165(func_287(hParam0)), true);
			else
				func_166(78, func_165(func_287(hParam0)), true);
		else
			func_166(80, func_165(func_289(hParam0)), true);

	return;
}

BOOL func_137() // Position - 0x6CD9 Hash - 0x452521BB ^0x7FA3002C
{
	if (func_290(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_290(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400) || func_290(joaat("document_arthur_high_bounty_1"), 400) || func_290(joaat("document_arthur_high_bounty_2"), 400) || func_290(joaat("document_arthur_has_poster_1"), 400) || func_290(joaat("document_arthur_has_poster_2"), 400))
		return true;

	return false;
}

int func_138(Hash hParam0, BOOL bParam1, int iParam2, int iParam3, const char* sParam4, int iParam5, BOOL bParam6, int iParam7) // Position - 0x6D4F Hash - 0x44FDFBC7 ^0xD59B23EE
{
	int num;
	Hash hash;

	num = func_291(hParam0, bParam6, iParam7);

	if (!bParam1)
		func_292(num, sParam4, iParam5);

	hash = 752097756;

	if (bParam6)
		hash = -897553835;

	func_293(num, bParam1, iParam2, iParam3, hash);
	return num;
}

void func_139(Hash hParam0) // Position - 0x6D96 Hash - 0x9BA47EC0 ^0xC5DB4E3B
{
	switch (hParam0)
	{
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_01"):
			func_112(43, 0, 0, joaat("exotic_stage_01"), func_298(1), false, -1, false);
			func_299(1);
			break;
	
		case joaat("DOCUMENT_NOTE_DINO_BONES"):
			func_112(39, 0, 0, 0, 0, false, 1, false);
			func_114(39, 0, 0, 0, 0, -1, 0);
			func_295(16);
			break;
	
		case joaat("DOCUMENT_LETTER_TAXIDERMY"):
			func_112(51, 0, 0, joaat("taxidermy_order_04"), 0, false, 4, false);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_294(8192);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_02"):
			func_112(43, 0, 0, joaat("exotic_stage_02"), func_298(2), false, -1, false);
			func_299(2);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_03"):
			func_112(43, 0, 0, joaat("exotic_stage_03"), func_298(4), false, -1, false);
			func_299(4);
			break;
	
		case joaat("DOCUMENT_NOTE_ROCK_CARVINGS"):
			func_112(49, 0, 0, 0, 0, false, 1, false);
			func_114(49, 0, 0, 0, 0, -1, 0);
			func_297(16);
			break;
	
		case joaat("DOCUMENT_NOTE_TAXIDERMY"):
			func_112(51, 0, 0, joaat("taxidermy_order_05"), 0, false, 1, false);
			func_114(51, 0, 0, 0, 0, -1, 0);
			func_294(524288);
			break;
	
		case joaat("DOCUMENT_NOTE_RARE_FISH"):
			func_112(41, 0, 0, 0, 0, false, 1, false);
			func_114(41, 0, 0, 0, 0, -1, 0);
			func_296(8);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_05"):
			func_112(43, 0, 0, joaat("exotic_stage_05"), func_298(16), false, -1, false);
			func_299(16);
			break;
	
		case joaat("DOCUMENT_NOTE_EXOTICS_STAGE_04"):
			func_112(43, 0, 0, joaat("exotic_stage_04"), func_298(8), false, -1, false);
			func_299(8);
			break;
	}

	return;
}

void func_140(Hash hParam0) // Position - 0x6F2C Hash - 0x7DB0E964 ^0xC7C463BF
{
	if (func_300() == 1)
	{
		if (func_104(39))
		{
			func_105(342, false);
		}
		else
		{
			func_105(343, false);
			func_295(1);
		}
	}

	if (func_300() >= 30)
		func_105(344, false);

	func_112(39, 0, 0, 0, 0, false, -1, false);
	func_114(39, 0, 0, func_300(), 30, 1, 0);
	return;
}

void func_141(Hash hParam0) // Position - 0x6F8B Hash - 0xD7DD81BD ^0x9CB6E38C
{
	if (func_301() == 1)
	{
		if (func_104(49))
		{
			func_105(409, false);
		}
		else
		{
			func_105(410, false);
			func_297(1);
		}
	}

	if (func_301() >= 10)
		func_105(411, false);

	func_112(49, 0, 0, 0, 0, false, -1, false);
	func_114(49, 0, 0, func_301(), 10, 1, 0);
	return;
}

void func_142(Hash hParam0) // Position - 0x6FEA Hash - 0x68B64163 ^0x7FDDC87D
{
	int num;

	switch (hParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_05"), 1);
			func_105(438, false);
			func_302(joaat("taxidermy_order_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_05"), num, false, -1, false);
			func_114(51, 0, 0, num, func_251(joaat("taxidermy_order_05"), 20), 1, 0);
			func_294(32768);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_04"), 1);
			func_302(joaat("taxidermy_order_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_04"), num, false, -1, false);
			func_114(51, 0, 0, num, func_251(joaat("taxidermy_order_04"), 20), 1, 0);
			func_294(512);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_03"), 1);
			func_302(joaat("taxidermy_order_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_03"), num, false, -1, false);
			func_114(51, 0, 0, num, func_251(joaat("taxidermy_order_03"), 20), 1, 0);
			func_294(64);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_01"), 1);
			func_105(437, false);
			func_105(440, false);
			func_302(joaat("taxidermy_order_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_01"), num, false, -1, false);
			func_114(51, 0, 0, num, func_251(joaat("taxidermy_order_01"), 20), 1, 0);
			func_294(1);
			func_303(-748969569, false, false);
			break;
	
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(joaat("taxidermy_order_02"), 1);
			func_302(joaat("taxidermy_order_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &num, true, 0, false);
			func_112(51, 0, 0, joaat("taxidermy_order_02"), num, false, -1, false);
			func_114(51, 0, 0, num, func_251(joaat("taxidermy_order_02"), 20), 1, 0);
			func_294(8);
			break;
	
		default:
			func_105(439, false);
			break;
	}

	return;
}

void func_143() // Position - 0x71D8 Hash - 0xC8FE42DB ^0x507D23E9
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(joaat("sp_chal_expl_root")) < 2)
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(joaat("sp_chal_expl_root"), joaat("acw_expl_rank_01_treasure"), 1);

	return;
}

void func_144(Hash hParam0, int iParam1) // Position - 0x71FC Hash - 0x51E4CC2F ^0x54D846FD
{
	int num;
	int num2;

	num2 = 0;

	if (func_122() == -1)
	{
		if (!func_104(43))
		{
			if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE"))
				func_105(348, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH"))
				func_105(350, false);
			else if (hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY"))
				func_105(352, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_of_night"))
				func_105(400, false);
		}
		else if (func_31(hParam0, 412399755))
		{
			func_304(joaat("exotic_stage_01"));
		
			if (func_305() == 0)
			{
				func_245(false, 10);
				num2 = func_306(hParam0, iParam1, 1);
			
				if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
				{
					if (func_307(hParam0) < func_308(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_01"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 30, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(44))
		{
			if (hParam0 == joaat("PROVISION_HERON_FEATHER"))
				func_105(354, false);
			else if (hParam0 == joaat("provision_ro_flower_lady_slipper"))
				func_105(399, false);
			else if (hParam0 == joaat("provision_ro_flower_moccasin"))
				func_105(401, false);
		}
		else if (func_31(hParam0, 709057512))
		{
			func_304(joaat("exotic_stage_02"));
		
			if (func_305() == 1)
			{
				func_245(false, 10);
				num2 = func_306(hParam0, iParam1, 2);
			
				if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
				{
					if (func_307(hParam0) < func_308(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_02"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 37, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(45))
		{
			if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				func_105(359, false);
			else if (hParam0 == joaat("provision_ro_flower_acunas_star"))
				func_105(394, false);
			else if (hParam0 == joaat("provision_ro_flower_cigar"))
				func_105(395, false);
			else if (hParam0 == joaat("provision_ro_flower_ghost"))
				func_105(398, false);
		}
		else if (func_31(hParam0, -1478961327))
		{
			func_304(joaat("exotic_stage_03"));
		
			if (func_305() == 2)
			{
				func_245(false, 10);
				num2 = func_306(hParam0, iParam1, 4);
			
				if (hParam0 == joaat("PROVISION_GATOR_EGG"))
				{
					if (!(func_309(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
					{
						func_310(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
						func_244(48);
					}
				
					if (func_307(hParam0) < func_308(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 40, 1, 0);
					}
				}
				else if (hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
				{
					if (func_307(hParam0) < func_308(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_03"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 40, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(46))
		{
			if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER"))
				func_105(356, false);
			else if (hParam0 == joaat("provision_ro_flower_night_scented"))
				func_105(402, false);
			else if (hParam0 == joaat("provision_ro_flower_rat_tail"))
				func_105(404, false);
			else if (hParam0 == joaat("provision_ro_flower_spider"))
				func_105(406, false);
		}
		else if (func_31(hParam0, -1238404098))
		{
			func_304(joaat("exotic_stage_04"));
		
			if (func_305() == 3)
			{
				func_245(false, 10);
				num2 = func_306(hParam0, iParam1, 8);
			
				if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
				{
					if (func_307(hParam0) < func_308(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_04"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 50, 1, 0);
					}
				}
			}
		}
	
		if (!func_104(47))
		{
			if (hParam0 == joaat("provision_ro_flower_clamshell"))
				func_105(396, false);
			else if (hParam0 == joaat("provision_ro_flower_dragons"))
				func_105(397, false);
			else if (hParam0 == joaat("provision_ro_flower_sparrows"))
				func_105(405, false);
			else if (hParam0 == joaat("provision_ro_flower_queens"))
				func_105(403, false);
		}
		else if (func_31(hParam0, 1160548794))
		{
			func_304(joaat("exotic_stage_05"));
		
			if (func_305() == 4)
			{
				func_245(false, 10);
				num2 = func_306(hParam0, iParam1, 16);
			
				if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
				{
					if (func_307(hParam0) < func_308(hParam0))
					{
						func_112(43, hParam0, iParam1, joaat("exotic_stage_05"), num2, false, -1, false);
						func_114(43, 0, 0, num2, 25, 1, 0);
					}
				}
			}
		}
	}

	return;
}

void func_145(Hash hParam0) // Position - 0x7715 Hash - 0x5FDB9C87 ^0xFFDE9D68
{
	int num;

	if (hParam0 == joaat("PROVISION_GATOR_EGG"))
	{
		if (!(func_309(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0)) >= 25))
		{
			func_310(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(num, joaat("gator_eggs"), 0), 1);
			func_244(48);
		}
	}

	return;
}

void func_146(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x7755 Hash - 0x306960CD ^0xBFFBAE09
{
	Hash collectableItemHash;
	int i;
	int num;

	for (i = 0; i < 5; i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("taxidermy"), joaat("taxidermy_order"));
	
		if (func_61(func_311(collectableItemHash, 10), 1, false))
			if (bParam2)
				func_312(hParam0, collectableItemHash, num, iParam1, bParam2);
			else
				func_313(hParam0, collectableItemHash, bParam3);
	}

	return;
}

void func_147(Hash hParam0, Hash hParam1, Entity eParam2) // Position - 0x77B5 Hash - 0x2973E533 ^0x2C76667A
{
	int num;

	if (func_122() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(eParam2))
		{
			num = MISC::_0x6F02B5E50511721E(eParam2);
		
			if (num < -1)
			{
			}
			else if (num >= 0)
			{
				func_138(0, false, 1065353216, 1, 0, 0, hParam1 == -897553835, num);
				return;
			}
		}
	}

	switch (hParam0)
	{
		case joaat("MONEY_TAXIDERMY_STAGE_2"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_2"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_billstack"):
			func_138(joaat("reward_billstack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_RARE_FISH"):
			func_138(joaat("REWARD_RARE_FISH"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_BILLFOLD_SML"):
			func_138(joaat("reward_billfold_sml"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINCUP_LG"):
			func_138(joaat("REWARD_COINCUP_LG"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_4"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_4"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case -1394529493:
			func_138(joaat("REWARD_FIVE_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TEN_DOLLARS"):
			func_138(joaat("REWARD_TEN_DOLLARS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_MONEYSTACK_LARGE"):
			if (!func_314())
				func_138(joaat("REWARD_MONEYSTACK_LARGE"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_moneystack"):
			func_138(joaat("reward_moneystack"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_ALL"):
			func_138(joaat("REWARD_CARD_SET_ALL"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_CARD_SET_RARE"):
			func_138(joaat("REWARD_CARD_SET_RARE"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_3"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_3"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("MONEY_COINCUP_SM"):
			func_138(joaat("REWARD_COINCUP_SM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_1"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_1"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_moneyclip"):
			func_138(joaat("reward_moneyclip"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_coinstack"):
			func_138(joaat("REWARD_COINS"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("money_one_dollar"):
			func_138(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_COINSACK"):
			func_138(joaat("REWARD_BOUNTYHUNTING_MEDIUM"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CALLOWAY_LETTER"):
			func_138(joaat("REWARD_CALLOWAY_LETTER"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coin"):
			func_138(joaat("reward_coin"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_BILLFOLD"):
			func_138(joaat("reward_billfold"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_CARD_SET_COMMON"):
			func_138(joaat("REWARD_CARD_SET_COMMON"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("money_coinpurse"):
			func_138(joaat("reward_coinpurse"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	
		case joaat("MONEY_TAXIDERMY_STAGE_5"):
			func_138(joaat("REWARD_TAXIDERMY_STAGE_5"), false, 1065353216, 1, 0, 0, false, -1);
			break;
	
		case joaat("currency_cash"):
			func_138(joaat("REWARD_BILL"), false, 1065353216, 1, 0, 0, hParam1 == -897553835, -1);
			break;
	}

	return;
}

void func_148(Hash hParam0) // Position - 0x7B8D Hash - 0x7B1EFD1 ^0x61F0FB99
{
	if (func_104(41))
		func_105(363, false);
	else
		func_105(362, false);

	switch (hParam0)
	{
		case joaat("provision_fish_chain_pickerel_legendary"):
			func_315(joaat("legendary_fish_02"));
			func_316(joaat("legendary_fishing_spot_02"));
			func_317(joaat("legendary_fishing_spot_02"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_muskie_legendary"):
			func_315(joaat("legendary_fish_06"));
			func_316(joaat("legendary_fishing_spot_06"));
			func_317(joaat("legendary_fishing_spot_06"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_bluegill_legendary"):
			func_315(joaat("legendary_fish_13"));
			func_316(joaat("legendary_fishing_spot_13"));
			func_317(joaat("legendary_fishing_spot_13"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_lake_sturgeon_legendary"):
			func_315(joaat("legendary_fish_03"));
			func_316(joaat("legendary_fishing_spot_03"));
			func_317(joaat("legendary_fishing_spot_03"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_redfin_pickerel_legendary"):
			func_315(joaat("legendary_fish_08"));
			func_316(joaat("legendary_fishing_spot_08"));
			func_317(joaat("legendary_fishing_spot_08"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_steelhead_trout_legendary"):
			func_315(joaat("legendary_fish_12"));
			func_316(joaat("legendary_fishing_spot_12"));
			func_317(joaat("legendary_fishing_spot_12"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_longnose_gar_legendary"):
			func_315(joaat("legendary_fish_05"));
			func_316(joaat("legendary_fishing_spot_05"));
			func_317(joaat("legendary_fishing_spot_05"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_largemouth_bass_legendary"):
			func_315(joaat("legendary_fish_04"));
			func_316(joaat("legendary_fishing_spot_04"));
			func_317(joaat("legendary_fishing_spot_04"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_northern_pike_legendary"):
			func_315(joaat("legendary_fish_14"));
			func_316(joaat("legendary_fishing_spot_14"));
			func_317(joaat("legendary_fishing_spot_14"));
			break;
	
		case joaat("provision_fish_rock_bass_legendary"):
			func_315(joaat("legendary_fish_09"));
			func_316(joaat("legendary_fishing_spot_09"));
			func_317(joaat("legendary_fishing_spot_09"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_perch_legendary"):
			func_315(joaat("legendary_fish_07"));
			func_316(joaat("legendary_fishing_spot_07"));
			func_317(joaat("legendary_fishing_spot_07"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_bullhead_catfish_legendary"):
			func_315(joaat("legendary_fish_01"));
			func_316(joaat("legendary_fishing_spot_01"));
			func_317(joaat("legendary_fishing_spot_01"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_sockeye_salmon_legendary"):
			func_315(joaat("legendary_fish_11"));
			func_316(joaat("legendary_fishing_spot_11"));
			func_317(joaat("legendary_fishing_spot_11"));
			func_245(false, 10);
			break;
	
		case joaat("provision_fish_smallmouth_bass_legendary"):
			func_315(joaat("legendary_fish_10"));
			func_316(joaat("legendary_fishing_spot_10"));
			func_317(joaat("legendary_fishing_spot_10"));
			func_245(false, 10);
			break;
	}

	return;
}

void func_149(Hash hParam0, var uParam1) // Position - 0x7E0C Hash - 0xC6F24F1D ^0xC6F24F1D
{
	var unk;

	func_318(hParam0, uParam1, &unk);
	return;
}

int func_150(Ped pedParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Position - 0x7E1E Hash - 0x20E8246C ^0x1B874796
{
	var unk;
	int num;

	if (iParam3 == -358215195)
	{
		unk = { func_234(hParam1, true, false) };
		iParam3 = func_319(unk.f_4);
	
		if (iParam3 == -358215195)
			return 0;
	}

	if (!func_321(hParam1, hParam2, func_320(iParam3, 1), bParam4, bParam9))
		return 0;

	func_322(true, func_122() == -1 && bParam5, true);

	switch (iParam3)
	{
		case 1108822547:
			if (func_324(32768) && hParam1 != Global_1946054.f_57[func_320(iParam3, 1) /*11*/])
			{
				func_325();
				func_323(22, iParam3, 256, 0, false);
			}
		
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(pedParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(pedParam0, 2);
			break;
	
		case 1145151482:
		case 1742327865:
			if (bParam8 && hParam1 != Global_1946054.f_57[func_320(iParam3, 1) /*11*/])
				func_323(31, 0, 0, 0, false);
			break;
	}

	if (!bParam6)
	{
		if (bParam7)
			func_323(22, iParam3, 0, 0, false);
	
		return 1;
	}

	num = func_326(iParam3);

	if (PED::IS_PED_A_PLAYER(pedParam0))
	{
		func_323(19, 0, num, 0, false);
	
		if (iParam3 == 1742327865 || iParam3 == 1108822547 || iParam3 == 1145151482)
		{
			func_327(0);
			func_328(36, 0, 0);
		}
	}
	else
	{
		num = num | 1;
		func_323(19, 0, num, pedParam0, false);
	}

	return 1;
}

BOOL func_151(var uParam0, BOOL bParam1) // Position - 0x7F8D Hash - 0x2DC8D50 ^0x79739B7E
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
	hash = func_279(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, true, false);
	hash2 = func_279(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, true, false);

	if (func_329("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_330(&unk, i, num, num2))
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

void func_152() // Position - 0x8058 Hash - 0x774616D ^0xF8A3E77D
{
	PLAYER::_SET_WEAPON_DEGRADATION_MODIFIER(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_60);
	return;
}

void func_153() // Position - 0x8072 Hash - 0xC65F3A3C ^0xD750E3C1
{
	float num;
	float num2;

	num = Global_40.f_11095.f_62;
	num2 = Global_40.f_11095.f_62 + Global_40.f_11095.f_61;
	PLAYER::_SET_PLAYER_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f - num, 1f - num2);
	return;
}

void func_154() // Position - 0x80A7 Hash - 0xD548C250 ^0x2F524E3B
{
	PLAYER::_EAGLE_EYE_SET_DRAIN_RATE_MODIFIER(PLAYER::PLAYER_ID(), 1f / (1f + Global_40.f_11095.f_58));
	return;
}

void func_155() // Position - 0x80C3 Hash - 0x774616D ^0x91C5BAF4
{
	PLAYER::_SET_RECEIVED_HORSEBACK_DAMAGE_DECREASE(PLAYER::PLAYER_ID(), 1f - Global_40.f_11095.f_63);
	return;
}

void func_156() // Position - 0x80DD Hash - 0xEE37C7BE ^0xEE37C7BE
{
	func_331();
	func_332();
	func_333();
	return;
}

void func_157(int iParam0, int iParam1, BOOL bParam2) // Position - 0x80F4 Hash - 0x968DA278 ^0xDB35B31F
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

void func_158(int iParam0, BOOL bParam1) // Position - 0x84CB Hash - 0x922C415B ^0x2167CE34
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
	func_259(MISC::VAR_STRING(2, str), MISC::VAR_STRING(2, str2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), joaat("player_menu"), MISC::VAR_STRING(2, str3), joaat("sp_missions"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, true, true);
	return;
}

void func_159(int iParam0) // Position - 0x85E1 Hash - 0x25D46568 ^0x354A75AA
{
	Global_40.f_12004.f_7 = Global_40.f_12004.f_7 || iParam0;
	return;
}

void func_160(int iParam0) // Position - 0x85FC Hash - 0x25D46568 ^0x1D3325E9
{
	Global_40.f_12004.f_8 = Global_40.f_12004.f_8 || iParam0;
	return;
}

void func_161(int iParam0) // Position - 0x8617 Hash - 0x25D46568 ^0x2B49A91A
{
	Global_40.f_12004.f_9 = Global_40.f_12004.f_9 || iParam0;
	return;
}

void func_162(int iParam0) // Position - 0x8632 Hash - 0x25D46568 ^0x71AC48D1
{
	Global_40.f_12004.f_10 = Global_40.f_12004.f_10 || iParam0;
	return;
}

void func_163(int iParam0) // Position - 0x864D Hash - 0x25D46568 ^0xFA2D4760
{
	Global_40.f_12004.f_11 = Global_40.f_12004.f_11 || iParam0;
	return;
}

void func_164(int iParam0) // Position - 0x8668 Hash - 0x25D46568 ^0x2140FCBF
{
	Global_40.f_12004.f_12 = Global_40.f_12004.f_12 || iParam0;
	return;
}

eBlipSprite func_165(Hash hParam0) // Position - 0x8683 Hash - 0x72D0E66A ^0x72D0E66A
{
	if (!func_83(hParam0, 0))
		return BLIP_HIGHER;

	return hParam0;
}

void func_166(int iParam0, eBlipSprite ebsParam1, BOOL bParam2) // Position - 0x869C Hash - 0xF79C008F ^0xF7AEE4EB
{
	int num;
	int num2;

	func_246(iParam0, &num, &num2);

	if (!func_247(iParam0, num, num2, bParam2))
		return;

	if (!func_334(iParam0, 1024))
		return;

	func_248(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
	return;
}

void func_167(int iParam0, eBlipSprite ebsParam1, BOOL bParam2, BOOL bParam3) // Position - 0x86FC Hash - 0x692A8F54 ^0x2BADE95C
{
	int num;
	int num2;

	func_246(iParam0, &num, &num2);

	if (!func_247(iParam0, num, num2, bParam2))
		return;

	if (!func_334(iParam0, 1024))
		return;

	func_248(num, num2);
	Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/] = ebsParam1;

	if (!bParam3)
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	else
		Global_1905944.f_22[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;

	return;
}

Hash func_168() // Position - 0x8777 Hash - 0xB996E1A6 ^0x8FBE5D65
{
	int numFound;
	Hash collectableItemHash;
	int i;
	int num;
	int endRange;
	int randomIntInRange;

	numFound = COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("CIGARETTE_CARDS"), 0);

	if (numFound == func_242())
		return func_169();

	endRange = func_242() - numFound;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);

	for (i = 0; i < func_242(); i = i + 1)
	{
		collectableItemHash = COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("CIGARETTE_CARDS"), 0);
	
		if (!func_335(collectableItemHash))
		{
			if (randomIntInRange == num)
				return func_243(collectableItemHash);
		
			num = num + 1;
		}
	}

	return 0;
}

Hash func_169() // Position - 0x87F1 Hash - 0x354121B4 ^0x6B7FEC83
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, func_242());
	return func_243(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(randomIntInRange, joaat("CIGARETTE_CARDS"), 0));
}

void func_170(var uParam0) // Position - 0x8814 Hash - 0x26E9B20B ^0x108E1842
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

BOOL func_171(Hash hParam0, int iParam1, Hash hParam2) // Position - 0x8869 Hash - 0x1EF65EF0 ^0x1EF65EF0
{
	var unk;
	var unk6;

	if (!func_83(hParam0, 0))
		return 0;

	if (iParam1 < 1)
		return 0;

	unk = { func_234(hParam0, false, true) };
	unk6 = { func_272(hParam0, unk, unk.f_4, false) };
	return func_336(hParam0, &unk6, &unk, iParam1, hParam2, false);
}

void func_172(Hash hParam0) // Position - 0x88B8 Hash - 0x90E372CB ^0xEE55522E
{
	int num;
	Hash hash;
	Hash hash2;

	if (func_122() != -1)
		return;

	switch (func_119(hParam0))
	{
		case -2061583405:
			if (hParam0 == joaat("clothing_item_hat_pzero_000") || hParam0 == joaat("clothing_p3_player_three_ms1_hat_000_000"))
				func_323(32, hParam0, 0, 0, false);
			break;
	
		case -999503751:
			num = func_338(hParam0);
		
			if (func_339(num))
				func_340(num, num >= 0 && num <= 5, true);
			else
				func_323(30, hParam0, 0, 0, false);
		
			if (func_341() == -2125499975 || func_341() == -449205311)
			{
				switch (hParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_323(32, hParam0, 0, 0, false);
						break;
				}
			}
			else if (func_341() == 1160113249)
			{
				switch (hParam0)
				{
					case -361635024:
						func_323(32, hParam0, 0, 0, false);
						break;
				}
			}
			break;
	
		case -525676072:
			if (!func_342(-525676072, false))
				if (func_343(-525676072, &hash))
					func_323(33, hash, 0, 0, false);
		
			func_323(32, hParam0, 0, 0, false);
			break;
	
		case 81053684:
			if (hParam0 == joaat("kit_bandana") && func_337(81053684, false) <= 0)
				func_323(32, hParam0, 0, 0, false);
			break;
	}

	if (hParam0 == joaat("clothing_sp_offhand_000") || hParam0 == -1515874150 || hParam0 == joaat("upgrade_offhand_holster"))
	{
		if (!func_344(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
			func_150(Global_35, hParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
	
		func_118(24);
	
		if (func_151(&hash2, false))
			func_125(hash2, 0, false, true, 3, false, 752097756, false);
	}

	return;
}

void func_173(Hash hParam0) // Position - 0x8A8A Hash - 0xCA585644 ^0x516CBCE8
{
	if (func_31(hParam0, 943695443))
		func_345(0, hParam0);
	else if (func_31(hParam0, -2096528786))
		func_345(1, hParam0);
	else if (func_31(hParam0, -1094167013))
		func_345(2, hParam0);
	else if (func_31(hParam0, 1936654645))
		func_345(3, hParam0);
	else if (func_31(hParam0, 1306489306))
		func_345(4, hParam0);
	else if (func_31(hParam0, 435762317))
		func_345(5, hParam0);
	else if (func_31(hParam0, 1259363210))
		func_345(6, hParam0);
	else if (func_31(hParam0, 881398259))
		func_345(7, hParam0);
	else if (func_31(hParam0, -541549214))
		func_345(8, hParam0);
	else if (func_31(hParam0, 130796156))
		func_345(-1, hParam0);

	return;
}

int func_174(Hash hParam0, int iParam1) // Position - 0x8B80 Hash - 0xFACD027 ^0xBE1FDD6
{
	var unk;
	var unk5;

	unk5.f_1 = 10;
	func_346(&unk5, joaat("LOOT_TYPE_NORMAL"));
	return func_347(hParam0, &unk5, &unk, iParam1);
}

struct<2> func_175(Hash hParam0) // Position - 0x8BA9 Hash - 0xA94BD8E0 ^0x321CB6EB
{
	var unk;
	var unk3;

	if (!func_83(hParam0, 0))
		return unk;

	if (func_31(hParam0, -305066475))
		if (func_122() == -1)
			if (func_31(hParam0, -537818634))
				return func_348(joaat("MEDICINE_AND_DEADEYE_ITEMS"));
			else
				return func_348(joaat("deadeye_items"));
	else if (func_31(hParam0, -537818634))
		return func_348(joaat("medicine_items"));

	if (func_31(hParam0, 2084895747))
		return func_348(joaat("lock_breaker_items"));

	return unk3;
}

void func_176(Hash hParam0) // Position - 0x8C3D Hash - 0x3BD36909 ^0x17029712
{
	switch (hParam0)
	{
		case joaat("provision_bird_feather_flight"):
			if (func_122() == -1)
				if (func_135(Global_1835011[4 /*74*/].f_1, true))
					func_105(109, true);
			break;
	}

	return;
}

void func_177(Hash hParam0, int iParam1) // Position - 0x8C76 Hash - 0x3053C451 ^0xA8B7E1A6
{
	char* str;

	str = AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(func_349(0));
	func_352(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", iParam1, str), "inventory_items", func_351(hParam0), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_178(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x8CB6 Hash - 0xB6CF78C ^0x845E9244
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

	if (!func_83(hParam0, 0))
		return;

	if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
		return;

	if (iParam1 == 0)
		return;

	if (!func_353())
	{
		func_354(hParam0, iParam1, bParam2, bParam4);
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
		else if (bParam2 && func_116(hParam0, 2097152))
			TEXT_LABEL_ASSIGN_STRING(&unk, "ITEM_READ_PUMP_MULT", 32);
	
		flag = true;
	}

	num2 = func_115(hParam0);
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
	else if (!func_356(hParam0, &str, num4, num3, 0, joaat("ui_itemviewer")))
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

	str3 = func_357(MISC::VAR_STRING(10, &unk, MISC::VAR_STRING(0, func_165(hParam0)), num), num5);

	if (iParam1 == 1 || func_31(hParam0, 1443104131) || hParam0 == joaat("consumable_cigarette_box") || hParam0 == joaat("CONSUMABLE_CIGARETTE_BOX_USED") || hParam0 == joaat("consumable_cigarette_box_cheap") || hParam0 == joaat("consumable_cigarette_box_cheap_used"))
		str3 = MISC::VAR_STRING(0, func_165(hParam0));

	func_352(str3, str.f_1, MISC::GET_HASH_KEY(str), num6, num5, "Transaction_Feed_Sounds", str2, 0, true);
	return;
}

int func_179(var uParam0, var uParam1) // Position - 0x8F0B Hash - 0xF1B2F4A1 ^0xB33DB94D
{
	int i;
	int num;
	var unk;

	if (func_329("ALL SATCHEL", &(uParam0->f_1.f_1), &(uParam0->f_1), joaat("SLOTID_SATCHEL"), false))
	{
		uParam0->f_145 = 1;
		i = 0;
		num = 0;
	
		if (uParam0->f_1 > 0)
		{
			unk.f_9 = joaat("SLOTID_NONE");
		
			for (i = uParam0->f_1 - 1; i >= 0; i = i + -1)
			{
				if (!func_330(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
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
						if (func_358(&unk, 0, true))
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

BOOL func_180(var uParam0, var uParam1) // Position - 0x8FC3 Hash - 0x49B557A3 ^0x6DB1C669
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
		if (func_330(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_359(uParam1->[0 /*9*/], unk.f_4))
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

void func_181(int iParam0, Hash hParam1) // Position - 0x9071 Hash - 0xB96CAE86 ^0xDAFA9881
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

BOOL func_182(var uParam0, var uParam1) // Position - 0x90DA Hash - 0x3520A53 ^0xA8B698E5
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
	
		if (func_330(&unk, i, uParam0->f_1.f_1, uParam0->f_1))
		{
			if (func_359(uParam1->[0 /*9*/], unk.f_4))
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

void func_183(var uParam0) // Position - 0x9191 Hash - 0x70905DA9 ^0x70905DA9
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_83(uParam0->[i /*9*/], 0))
			func_360(&uParam0->[i /*9*/]);
	}

	return;
}

void func_184(var uParam0) // Position - 0x91C3 Hash - 0xFDB128B0 ^0x6FE0DE4A
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (func_83(uParam0->[i /*9*/], 0))
			uParam0->[i /*9*/].f_4 = func_69(uParam0->[i /*9*/], -949239683);
	}

	return;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_185(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x9202 Hash - 0x92B705D3 ^0xB783F681
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

BOOL func_186(var uParam0, var uParam1) // Position - 0x92F8 Hash - 0xE7E68C2A ^0xEBD68818
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

int func_187(var uParam0, var uParam1) // Position - 0x9368 Hash - 0xA8E32B9 ^0xA8E32B9
{
	int num;

	num = func_72(uParam1->[0 /*9*/]);

	if (func_361(num))
	{
		func_363(num, func_362(uParam1->[0 /*9*/]));
	
		if (!func_364(num, 2))
			func_365(num, 2);
	}

	return 1;
}

BOOL func_188(int iParam0, int iParam1) // Position - 0x93A9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_189(Hash hParam0) // Position - 0x93B8 Hash - 0x749A091D ^0x749A091D
{
	int i;

	if (func_48(hParam0))
		return 0;

	if (func_54(hParam0, false))
	{
		func_366(hParam0);
		return 1;
	}
	else
	{
		for (i = 0; i < Global_40.f_450; i = i + 1)
		{
			if (Global_40.f_450[i] == -1)
			{
				func_366(hParam0);
				Global_40.f_450[i] = hParam0;
				Global_40.f_1094 = Global_40.f_1094 + 1;
				Global_1430257 = i;
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_190() // Position - 0x9434 Hash - 0x2C13EB06 ^0x38F12C8A
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

Hash func_191(int iParam0) // Position - 0x9487 Hash - 0x6FF652AC ^0x6FF652AC
{
	if (!func_192(iParam0))
		return -1;

	return func_368(func_367(iParam0));
}

BOOL func_192(int iParam0) // Position - 0x94A7 Hash - 0xB07F56E4 ^0xA1690581
{
	if (Global_1572887.f_12 == -1)
		return iParam0 > 0 && iParam0 < &func_2;

	return iParam0 > 0 && iParam0 < 20001;
}

void func_193() // Position - 0x94DA Hash - 0xDFECB6AC ^0xDFECB6AC
{
	int num;
	Hash i;

	num = Global_40.f_1093;
	Global_40.f_1093 = -1;

	if (func_369(num))
	{
		for (i = 0; i < Global_1347702; i = i + 1)
		{
			if (func_47(i) && Global_1347702[i /*49*/] == num)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[i /*49*/].f_37))
				{
					func_370(i, false);
					func_372(i, func_371(i), false, false);
				}
			}
		}
	}

	return;
}

 func_194( Param0) // Position - 0x954E Hash - 0xC9D82232 ^0xC9D82232
{
	return Param0;
}

eBlipSprite func_195(Hash hParam0, BOOL bParam1) // Position - 0x9558 Hash - 0x16E1F4C ^0xED8629A6
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
		if (bParam1 || func_135(Global_1347702[hParam0 /*49*/].f_15, true))
			return joaat("blip_rc_obediah_hinton");
	else if (hParam0 == 127)
		return joaat("blip_rc_lightning");
	else if (hParam0 == 136)
		return joaat("blip_rc_slave_catcher");
	else if (hParam0 == 143)
		return joaat("blip_rc_odd_fellows");
	else if (hParam0 == 147)
		if (bParam1 || func_135(Global_1347702[hParam0 /*49*/].f_15, true))
			return joaat("blip_rc_war_veteran");

	if (hParam0 == 151)
		return -1176045274;

	return Global_1347702[hParam0 /*49*/].f_36;
}

void func_196(Hash hParam0, BOOL bParam1) // Position - 0x9763 Hash - 0x6C273DD6 ^0x6C273DD6
{
	Global_40.f_490.f_402[hParam0] = Global_40.f_490.f_402[hParam0] - Global_40.f_490.f_402[hParam0] && bParam1;
	return;
}

BOOL func_197(Hash hParam0, int iParam1) // Position - 0x9796 Hash - 0x2A2D0794 ^0x8C1DA314
{
	Hash hash;
	int num;
	int num2;
	int i;
	var unk;

	if (!func_83(hParam0, 0))
		return false;

	if (Global_1935630.f_12)
		return false;

	hash = func_239(hParam0, iParam1);
	unk.f_9 = joaat("SLOTID_NONE");

	if (func_329("ALL WEAPONS", &num, &num2, joaat("SLOTID_NONE"), false))
	{
		for (i = 0; i < num2; i = i + 1)
		{
			if (!func_330(&unk, i, num, num2))
			{
			}
			else if (!func_268(unk.f_4))
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

BOOL func_198(int iParam0) // Position - 0x983E Hash - 0xA059D395 ^0xE600C05
{
	return func_373(Global_1935496.f_27, iParam0);
}

int func_199(int iParam0) // Position - 0x9852 Hash - 0x7647021A ^0xF0097466
{
	return Global_1835011[iParam0 /*74*/].f_1;
}

int func_200(int iParam0) // Position - 0x9864 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_192(iParam0))
		return -1;

	return func_374(iParam0);
}

void func_201(int iParam0, int iParam1) // Position - 0x9880 Hash - 0xB1BDF10D ^0xB21C30B2
{
	if (Global_1572887.f_12 != -1)
		return;

	Global_12106[iParam0 /*7*/].f_3 = iParam1;
	return;
}

struct<10> func_202(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x98A0 Hash - 0x440EE211 ^0xAE2816F9
{
	int num;

	num = -1;
	num.f_1 = -1;
	num.f_2 = -1;
	num.f_3 = -1;
	num.f_4 = -1;
	num.f_5 = -1;
	num.f_6 = -1;
	num.f_7 = -1;
	num.f_8 = -1;

	if (iParam0 != 0 && iParam0 != joaat("SLOTID_NONE"))
		num = iParam0;

	if (iParam1 != 0 && iParam1 != joaat("SLOTID_NONE"))
		num.f_1 = iParam1;

	if (iParam2 != 0 && iParam2 != -1)
		num.f_2 = iParam2;

	if (iParam3 != 0)
		num.f_3 = iParam3;

	if (iParam4 != 0)
		num.f_4 = iParam4;

	if (iParam5 != 0)
		num.f_5 = iParam5;

	if (iParam6 != -1)
		num.f_6 = iParam6;

	if (iParam7 != 0)
		num.f_8 = iParam7;

	if (iParam8 != 0)
		num.f_7 = iParam8;

	return num;
}

BOOL func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int* piParam11, int iParam12) // Position - 0x9974 Hash - 0xB0933807 ^0x5CBA43FF
{
	*uParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, piParam11, iParam12);

	if (*uParam10 >= 0)
		return true;

	return false;
}

Hash func_204(int iParam0, int iParam1) // Position - 0x9995 Hash - 0x3644D28E ^0x6DB2088F
{
	int outKey;

	if (iParam1 < 0)
		return 0;

	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
		return 0;

	outKey = 0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &outKey))
		return 0;

	return outKey;
}

BOOL func_205(Hash hParam0, Hash hParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x99D8 Hash - 0x9850C0DA ^0x9850C0DA
{
	BOOL flag;
	int acquireCostsCount;
	Hash outData;
	int i;

	if (!func_83(hParam0, 0))
		return false;

	if (hParam1 != 0 && !func_375(hParam0, hParam1, true))
		return false;

	flag = false;

	if (hParam1 == 0)
	{
		acquireCostsCount = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(hParam0);
		outData.f_4 = 15;
		outData.f_36 = 10;
	
		for (i = 0; i < acquireCostsCount; i = i + 1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(hParam0, i, &outData))
				if (outData.f_2 == joaat("cost_type_craft") && func_375(hParam0, outData, true))
					if (func_376(hParam0, outData))
						flag = true;
		}
	}
	else if (func_376(hParam0, hParam1))
	{
		flag = true;
	}

	if (flag)
		if (!bParam2)
			func_105(206, false);

	if (bParam3)
		if (!func_50(0, false, true))
			func_245(true, 5);

	if (flag)
		return true;

	return false;
}

int func_206(int iParam0) // Position - 0x9AB7 Hash - 0x6B3C6310 ^0x9A4DF434
{
	if (iParam0 < 0)
		return 0;

	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
		return 0;

	return 1;
}

void func_207(Hash hParam0) // Position - 0x9AD8 Hash - 0x7652572 ^0x985F29FB
{
	int num;

	num = -1;

	switch (hParam0)
	{
		case joaat("document_pamphlet_molotov"):
			num = 326;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_HOMING_TOMAHAWK"):
			num = 328;
			break;
	
		case -1724192342:
			num = 330;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_REVIVER"):
			num = 308;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_HORSE_MEDICINE"):
			num = 307;
			break;
	
		case -1267972061:
			num = 309;
			break;
	
		case -755457379:
			num = 322;
			break;
	
		case -566881549:
			num = 332;
			break;
	
		case -378547623:
			num = 316;
			break;
	
		case joaat("document_pamphlet_special_horse_stimulant"):
			num = 310;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_INCENDIARY_BUCKSHOT"):
			num = 334;
			break;
	
		case joaat("document_pamphlet_special_medicine"):
			num = 312;
			break;
	
		case 147796381:
			num = 333;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_DYNAMITE_ARROW"):
			num = 320;
			break;
	
		case joaat("document_pamphlet_special_tonic"):
			num = 315;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_SNAKE_OIL"):
			num = 314;
			break;
	
		case 829545206:
			num = 317;
			break;
	
		case 890514341:
			num = 311;
			break;
	
		case 891318243:
			num = 319;
			break;
	
		case joaat("document_pamphlet_poison_throwing_knife"):
			num = 331;
			break;
	
		case joaat("document_pamphlet_volatile_dynamite"):
			num = 325;
			break;
	
		case 1015404643:
			num = 324;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SLUG_EXPLOSIVE"):
			num = 335;
			break;
	
		case joaat("document_pamphlet_improved_throw_knife"):
			num = 329;
			break;
	
		case 1619534881:
			num = 321;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_SPECIAL_RESTORATIVE"):
			num = 313;
			break;
	
		case joaat("document_pamphlet_volatile_molotov"):
			num = 327;
			break;
	
		case joaat("DOCUMENT_PAMPHLET_POISON_ARROW"):
			num = 323;
			break;
	}

	if (num != -1)
		func_105(num, false);

	return;
}

void func_208(Hash hParam0) // Position - 0x9C80 Hash - 0xD5CD6AEF ^0x89628A56
{
	var unk;
	var value;

	unk.f_3 = 1;
	unk.f_4 = hParam0;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&value, PLAYER::PLAYER_ID());
	func_377(&unk, value);
	return;
}

int func_209(Hash hParam0) // Position - 0x9CA5 Hash - 0x86322C5 ^0xCD2DA3A
{
	int i;

	for (i = 0; i <= 49; i = i + 1)
	{
		if (Global_1165157.f_49[i /*2*/] == hParam0)
			return i;
	}

	return -1;
}

Vector3 func_210(int iParam0) // Position - 0x9CD5 Hash - 0x41098A4 ^0x4C5558DE
{
	var unk;
	var unk4;

	if (func_378(&unk4, iParam0) && func_379(&unk4))
		func_380(unk4, 924198834, &unk, true);

	return unk;
}

Vector3 func_211(int iParam0) // Position - 0x9D08 Hash - 0x41098A4 ^0xEFA7220E
{
	var unk;
	var unk4;

	if (func_378(&unk4, iParam0) && func_379(&unk4))
		func_380(unk4, 1334964216, &unk, true);

	return unk;
}

void func_212(int iParam0, int iParam1) // Position - 0x9D3B Hash - 0x3CB91E05 ^0x9B77B27B
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 - Global_1945188[iParam0 /*18*/].f_1 && iParam1;
	return;
}

void func_213(int iParam0, BOOL bParam1) // Position - 0x9D6E Hash - 0x7190BAC6 ^0x6DC372CF
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		if (Global_1945188[iParam0 /*18*/].f_5 == 5 && !func_216(iParam0, 8))
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, false);
		else
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_214(int iParam0, BOOL bParam1) // Position - 0x9DC6 Hash - 0x7CAB2FC9 ^0x77D638E9
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1945188[iParam0 /*18*/].f_3))
		HUD::_UI_PROMPT_SET_ENABLED(Global_1945188[iParam0 /*18*/].f_3, bParam1);

	return;
}

void func_215(int iParam0, int iParam1) // Position - 0x9DEF Hash - 0x6CA42F68 ^0x7439A78D
{
	if (iParam0 < 0)
		return;

	Global_1945188[iParam0 /*18*/].f_1 = Global_1945188[iParam0 /*18*/].f_1 || iParam1;
	return;
}

BOOL func_216(int iParam0, int iParam1) // Position - 0x9E17 Hash - 0xFED667A ^0x326E18C5
{
	if (iParam0 < 0)
		return false;

	return Global_1945188[iParam0 /*18*/].f_1 && iParam1 != false;
}

int func_217(char* sParam0, Hash hParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, int iParam10, Hash hParam11, BOOL bParam12) // Position - 0x9E38 Hash - 0x6B838E14 ^0xADF883E0
{
	int i;
	int num;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return 0;

	if (!PAD::_IS_CONTROL_ACTION_VALID(hParam1, 0))
		return 0;

	for (i = 0; i < 48; i = i + 1)
	{
		if (func_216(i, 2))
		{
		}
		else if (num == 0)
		{
			num = i;
		}
	}

	if (num != 0)
	{
		func_381(num, hParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, bParam9, false, 0, hParam11, bParam12);
		return num;
	}

	return 0;
}

BOOL func_218(int iParam0, BOOL bParam1) // Position - 0x9EBE Hash - 0xAAB142C4 ^0xBB29AF2
{
	int num;

	if (bParam1 && !func_42(iParam0))
		return false;

	num = func_93(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1945188[num /*18*/].f_3);
}

void func_219(var uParam0, int iParam1) // Position - 0x9EF1 Hash - 0xF00E1CAD ^0xB991ABCD
{
	uParam0->f_135 = uParam0->f_135 - 1;

	switch (iParam1)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
		case 1566650197:
		case 1767753378:
			if (uParam0->f_135 == 1)
				uParam0->f_135 = 0;
			break;
	}

	return;
}

void func_220(var uParam0, var uParam1, var uParam2) // Position - 0x9F2D Hash - 0x305B676F ^0x69108804
{
	int num;

	if (uParam0->f_135 < uParam1->f_51)
	{
		func_228(uParam0, uParam2);
	}
	else
	{
		num = uParam0->f_135 - uParam1->f_51;
	
		if (Global_40.f_9479[uParam1->f_50 /*4*/].f_1 != -1)
		{
			if (num == 0)
			{
				func_382(&(uParam1->f_2));
				return;
			}
			else
			{
				num = num - 1;
			}
		}
	
		if (Global_40.f_9479[uParam1->f_50 /*4*/].f_2 != -1)
		{
			if (num == 0)
			{
				func_382(&(uParam1->f_18));
				return;
			}
		}
	
		func_382(&(uParam1->f_34));
	}

	return;
}

void func_221(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x9FAD Hash - 0xDB5555BD ^0xDAB11740
{
	int num;

	if (bParam1 && !func_42(*uParam0))
	{
		*uParam0 = 0;
		return;
	}

	num = func_93(*uParam0);

	if (Global_1945188[num /*18*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}

	func_383(num);
	*uParam0 = 0;
	return;
}

void func_222(var uParam0, int iParam1) // Position - 0xA001 Hash - 0x56BAAF68 ^0xFDADA04
{
	uParam0->f_135 = uParam0->f_135 + 1;

	switch (iParam1)
	{
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
		case 1566650197:
		case 1767753378:
			if (uParam0->f_135 == 1)
				uParam0->f_135 = 2;
			break;
	}

	return;
}

void func_223(var uParam0, Hash hParam1) // Position - 0xA03D Hash - 0x7799F092 ^0x38A0024A
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
					func_384(&(uParam0->f_5), 1, 2, true, false);
					break;
			
				case -139224928:
					func_384(&(uParam0->f_5), 4, 1, true, false);
					break;
			
				case -29447330:
					func_384(&(uParam0->f_5), 5, 2, true, false);
					break;
			
				case 159464507:
					func_384(&(uParam0->f_5), 6, 1, true, false);
					break;
			
				case 276123595:
					func_384(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1175698187:
					func_384(&(uParam0->f_5), 7, 2, false, false);
					break;
			
				case 1410847083:
					func_384(&(uParam0->f_5), 0, 0, true, false);
					break;
			
				case 1724675796:
					func_384(&(uParam0->f_5), 2, 1, true, false);
					break;
			}
		}
	}

	return;
}

void func_224(var uParam0, Hash hParam1) // Position - 0xA147 Hash - 0xF209FECA ^0xC3164B84
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
					func_384(&(uParam0->f_5), num, 2, true, false);
					num = num + 1;
					break;
			
				case 1410847083:
					func_384(&(uParam0->f_5), num, 0, true, false);
					num = num + 1;
					break;
			}
		}
	}

	return;
}

void func_225(var uParam0, Hash hParam1) // Position - 0xA1E4 Hash - 0x7799F092 ^0x38A0024A
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
					func_384(&(uParam0->f_5), 2, 3, true, false);
					break;
			
				case -29447330:
					func_384(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 276123595:
					func_384(&(uParam0->f_5), 3, 3, true, false);
					break;
			
				case 1410847083:
					func_384(&(uParam0->f_5), 0, 0, true, false);
					break;
			}
		}
	}

	uParam0->f_5 = hParam1;
	func_384(&(uParam0->f_5), 1, 1, true, false);
	return;
}

void func_226(var uParam0, Hash hParam1) // Position - 0xA2AC Hash - 0xF209FECA ^0xC3164B84
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
							func_384(&(uParam0->f_5), num, 5, false, func_31(hParam1, -1804424566));
							num = num + 1;
							break;
					
						case 276123595:
							func_384(&(uParam0->f_5), num, 5, false, false);
							num = num + 1;
							break;
					
						case 1410847083:
							func_384(&(uParam0->f_5), num, 1, true, false);
							num = num + 1;
							break;
					
						case 1724675796:
							func_384(&(uParam0->f_5), num, 6, true, false);
							num = num + 1;
							break;
					}
					break;
			
				default:
					switch (uParam0->f_5.f_2[j /*5*/])
					{
						case -641080715:
							func_384(&(uParam0->f_5), num, 2, false, false);
							num = num + 1;
							break;
					
						case 1410847083:
							func_384(&(uParam0->f_5), num, 1, true, false);
							num = num + 1;
							break;
					
						case 1724675796:
							func_384(&(uParam0->f_5), num, 3, true, false);
							num = num + 1;
							break;
					}
					break;
			}
		}
	}

	return;
}

void func_227(var uParam0, Hash hParam1) // Position - 0xA421 Hash - 0x7799F092 ^0x38A0024A
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
					func_384(&(uParam0->f_5), 3, 0, true, false);
					break;
			
				case -139224928:
					func_384(&(uParam0->f_5), 2, 0, true, false);
					break;
			
				case -29447330:
					func_384(&(uParam0->f_5), 5, 3, true, false);
					break;
			
				case 276123595:
					func_384(&(uParam0->f_5), 4, 3, true, false);
					break;
			
				case 852595847:
					func_384(&(uParam0->f_5), 7, 3, true, false);
					break;
			
				case 1175698187:
					func_384(&(uParam0->f_5), 6, 3, true, false);
					break;
			
				case 1410847083:
					func_384(&(uParam0->f_5), 0, 1, true, false);
					break;
			
				case 1488412754:
					func_384(&(uParam0->f_5), 8, 3, true, false);
					break;
			
				case 1724675796:
					func_384(&(uParam0->f_5), 1, 0, true, false);
					break;
			}
		}
	}

	return;
}

void func_228(var uParam0, Hash hParam1) // Position - 0xA541 Hash - 0x2B6CE800 ^0x4C12B1B
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
				if (func_200(func_199(3)) == 0)
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
			
				func_385(i, hash, flag, value);
			}
		}
	
		flag = true;
	
		if (value == joaat("NONE") || value == 0)
			flag = false;
	
		func_385(i, hash, flag, value);
	}

	return;
}

void func_229(var uParam0, Hash hParam1) // Position - 0xA63F Hash - 0x7799F092 ^0x38A0024A
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
					func_386(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -1720361947:
				case -139224928:
					func_386(hParam1, &(uParam0->f_5), &unk, 1);
					break;
			
				case -641080715:
				case -29447330:
				case 276123595:
					func_386(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			
				case 159464507:
				case 1410847083:
					func_386(hParam1, &(uParam0->f_5), &unk, 0);
					break;
			
				case 852595847:
				case 1175698187:
				case 1488412754:
					func_386(hParam1, &(uParam0->f_5), &unk, 2);
					break;
			}
		}
	}

	return;
}

BOOL func_230(Hash hParam0) // Position - 0xA739 Hash - 0x1B551CF7 ^0xF7F1B098
{
	return func_115(hParam0) == joaat("WEAPON");
}

BOOL func_231(Hash hParam0) // Position - 0xA74D Hash - 0x8471597D ^0x85715A53
{
	var unk;

	if (func_122() != -1)
		return false;

	if (func_116(hParam0, 1048576))
		return false;

	if (WEAPON::IS_WEAPON_VALID(hParam0))
		return func_238(hParam0, &unk, 1, false, false);

	return func_61(hParam0, 1, false);
}

void func_232(Hash hParam0, int iParam1, BOOL bParam2, var uParam3, Hash hParam4) // Position - 0xA791 Hash - 0x8D4768B0 ^0x68D8A424
{
	Hash weaponHash;

	if (func_115(hParam0) != joaat("WEAPON"))
		return;

	weaponHash = func_121(hParam0, false);

	if (!WEAPON::IS_WEAPON_VALID(weaponHash))
		return;

	if (bParam2 || !func_267(weaponHash))
	{
		if (func_122() == -1)
			func_123(weaponHash);
	
		if (bParam2 || !WEAPON::HAS_PED_GOT_WEAPON(Global_35, weaponHash, 0, false) && func_98(hParam0, false, false) == 0)
		{
			if (!*uParam3 && !(hParam4 == 1248274121))
			{
				func_178(hParam0, iParam1, false, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}

	return;
}

void func_233(Hash hParam0, var uParam1) // Position - 0xA838 Hash - 0xAE8D4BA4 ^0x3C850E20
{
	var unk;

	if (func_31(hParam0, 58855631))
	{
		func_387(hParam0, -915411861, &unk, true);
		*uParam1 = *uParam1 * unk;
	}

	return;
}

struct<5> func_234(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0xA866 Hash - 0xE6705E3C ^0xB9EA38F4
{
	var unk;
	var unk6;
	var unk28;

	unk = { func_388(bParam1) };
	unk.f_4 = joaat("SLOTID_SATCHEL");

	switch (func_115(hParam0))
	{
		case joaat("UPGRADE"):
			if (func_392(hParam0, -1823706425))
			{
				unk = { func_272(joaat("kit_camp"), unk, joaat("SLOTID_SATCHEL"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("kit_camp"));
			}
			else if (func_392(hParam0, joaat("CI_CATEGORY_WARDROBE")))
			{
				unk = { func_272(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
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
			unk = { func_391(bParam1) };
		
			switch (func_119(hParam0))
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
				unk = { func_272(joaat("WARDROBE"), unk, joaat("SLOTID_WARDROBE"), bParam1) };
				unk.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(hParam0, joaat("WARDROBE"));
			}
			else
			{
				unk.f_4 = joaat("SLOTID_WARDROBE");
			}
			break;
	
		case joaat("WEAPON"):
			unk = { func_389(bParam1) };
		
			if (bParam2 && func_390(hParam0, true))
			{
				unk6.f_9 = joaat("SLOTID_NONE");
			
				if (!func_270(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_0");
				else if (!func_270(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					unk.f_4 = joaat("SLOTID_WEAPON_1");
				else if (func_271(hParam0, &unk6, joaat("SLOTID_WEAPON_0")))
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
			
				if (!func_393(unk, &unk28, bParam1, false))
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

int func_235(Hash hParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0xAB23 Hash - 0x9D75BA2C ^0xE0E521B7
{
	if (!func_83(hParam0, 0))
		return 0;

	if (!func_124(false))
		bParam2 = true;

	if (bParam2 || !func_394(hParam0))
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(hParam0, uParam1->f_4);

	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_241(bParam3), hParam0);
}

int func_236(Hash hParam0, BOOL bParam1) // Position - 0xAB71 Hash - 0xE0F47B47 ^0x52A64D28
{
	if (func_128(hParam0))
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, hParam0);

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_241(bParam1), hParam0, false);
}

BOOL func_237() // Position - 0xAB9B Hash - 0x221AE79E ^0x8AFE11D8
{
	if (func_122() != -1)
		return false;

	if (!func_108())
		return false;

	if (!func_135(Global_1835011[1 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[2 /*74*/].f_1, true) && func_135(Global_1347702[120 /*49*/].f_15, true) && !func_135(Global_1835011[4 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[37 /*74*/].f_1, true) && !func_135(Global_1835011[39 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[57 /*74*/].f_1, true) && !func_135(Global_1835011[60 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[26 /*74*/].f_1, true) && !func_135(Global_1347702[67 /*49*/].f_15, true))
		return true;

	if (func_135(Global_1835011[62 /*74*/].f_1, true) && func_135(Global_1835011[63 /*74*/].f_1, true) && !func_135(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[75 /*74*/].f_1, true) && !func_135(Global_1347702[1 /*49*/].f_15, true))
		return true;

	if (func_135(Global_1835011[76 /*74*/].f_1, true) && !func_135(Global_1835011[77 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[40 /*74*/].f_1, true) && func_135(Global_1835011[41 /*74*/].f_1, true) && !func_135(Global_1835011[44 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[62 /*74*/].f_1, true) && func_135(Global_1835011[63 /*74*/].f_1, true) && !func_135(Global_1835011[64 /*74*/].f_1, true))
		return true;

	if (func_135(Global_1835011[65 /*74*/].f_1, true) && func_135(Global_1835011[66 /*74*/].f_1, true) && !func_135(Global_1835011[67 /*74*/].f_1, true))
		return true;

	return false;
}

BOOL func_238(Hash hParam0, Any* panParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xADE1 Hash - 0x6FD18E8B ^0x7C3C83FA
{
	var unk;
	var unk5;
	var unk27;
	int num;
	int inventoryItemCountWithItemid;

	func_395(&hParam0);

	if (!func_83(hParam0, 0))
		return 0;

	if (!func_124(false))
		bParam3 = true;

	if (func_230(hParam0) && WEAPON::IS_WEAPON_A_GUN(hParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		{
			unk = { func_389(false) };
			unk5.f_9 = joaat("SLOTID_NONE");
		
			if (!func_270(hParam0, &unk, joaat("SLOTID_WEAPON_0"), false))
				return 0;
			else if (func_271(hParam0, &unk5, joaat("SLOTID_WEAPON_0")))
				return 0;
		
			if (func_390(hParam0, true))
				if (!func_270(hParam0, &unk, joaat("SLOTID_WEAPON_1"), false))
					return 0;
				else if (func_271(hParam0, &unk5, joaat("SLOTID_WEAPON_1")))
					return 0;
		}
		else if (!func_396(hParam0, &unk27, false))
		{
			return 0;
		}
	
		return 1;
	}

	num = func_235(hParam0, panParam1, bParam3, bParam4);

	if (num < 0)
		return 0;
	else if (num == 0)
		return 1;

	if (bParam3 || !func_394(hParam0))
		inventoryItemCountWithItemid = func_397(hParam0, *panParam1, panParam1->f_4, bParam4);
	else
		inventoryItemCountWithItemid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_241(bParam4), hParam0, false);

	if (inventoryItemCountWithItemid + iParam2 > num)
		return 1;

	return 0;
}

Hash func_239(Hash hParam0, int iParam1) // Position - 0xAF26 Hash - 0x4BCFEB5A ^0x390DECDB
{
	int num;
	var unk;
	Hash hash;

	if (!func_83(hParam0, 0))
		return 0;

	num = func_115(hParam0);

	if (num == joaat("WEAPON") && WEAPON::IS_WEAPON_VALID(hParam0))
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0);
	else if (num == joaat("AMMO") && WEAPON::_IS_AMMO_VALID(hParam0))
		return hParam0;

	if (func_31(hParam0, 1399091007))
	{
		func_318(hParam0, &unk, &hash);
		return hash;
	}

	return 0;
}

int func_240(Hash hParam0, BOOL bParam1) // Position - 0xAFA0 Hash - 0x884C76BA ^0xDB141D11
{
	var unk;
	int num;
	int num2;

	if (!WEAPON::IS_WEAPON_VALID(hParam0))
		return 0;

	unk = { func_398(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam1)
		func_399(&unk, func_389(false));

	if (!func_400(&unk, &num, &num2, false))
		return 0;

	func_9(num);
	return num2;
}

int func_241(BOOL bParam0) // Position - 0xAFFE Hash - 0x58DE66BA ^0xF4629DE1
{
	if (func_122() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
			return 5;
	
		return 1;
	}

	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
		return 3;

	return 2;
}

int func_242() // Position - 0xB03F Hash - 0xCF63D31C ^0x4A7E574E
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_COLLECTABLES(joaat("CIGARETTE_CARDS"), 0);
}

Hash func_243(Hash hParam0) // Position - 0xB051 Hash - 0xD6E12BEB ^0xB2E8744E
{
	return COLLECTION::_0xEC3959E9950BF56B(hParam0);
}

void func_244(int iParam0) // Position - 0xB05F Hash - 0x246F2C0 ^0x1534606D
{
	int num;
	float value;

	if (func_122() != -1)
		return;

	num = func_401(iParam0);
	value = func_402(iParam0);

	if (Global_1347477.f_117 || !func_117(31) || !func_403(num))
		return;

	if (value <= 0f)
		return;

	if (func_404(num) >= 7)
		return;

	if (num == 1)
		value = value * (1f + Global_40.f_11095.f_57);
	else if (num == 0)
		value = value * (1f + Global_40.f_11095.f_55);
	else if (num == 2)
		value = value * (1f + Global_40.f_11095.f_56);

	value = value * (float)Global_1347477.f_182;
	value = BUILTIN::TO_FLOAT(BUILTIN::ROUND(value));
	func_405(num, Global_40.f_11095.f_11[num] + value, false);
	func_352(MISC::VAR_STRING(6, func_406(iParam0), value), "itemtype_textures", func_407(num), 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, true);
	return;
}

void func_245(BOOL bParam0, int iParam1) // Position - 0xB15E Hash - 0x28F6DA48 ^0xFBF7E1AC
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
		return;

	Global_0.f_1 = iParam1;

	if (bParam0)
		func_408(&Global_0, 8);

	if (!func_108() || func_122() != -1)
		return;

	func_408(&Global_0, 1);
	return;
}

void func_246(int iParam0, var uParam1, var uParam2) // Position - 0xB1A4 Hash - 0xE3170F06 ^0xE3170F06
{
	int num;

	num = iParam0;
	*uParam1 = num / 31;
	*uParam2 = num % 31;
	return;
}

BOOL func_247(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0xB1C0 Hash - 0x7B1D1D5F ^0x7B1D1D5F
{
	if (iParam1 < 0 || iParam1 > 21)
		return false;

	if (func_409(iParam1, iParam2))
		if (!bParam3)
			return false;

	if (!func_410(iParam0))
		return false;

	if (func_411(iParam0))
		return false;

	if (Global_1898164.f_163 && !func_334(iParam0, 1) || func_412(32768))
		if (!func_334(iParam0, 262144) || !Global_1905944.f_5696)
			return false;

	if (!func_413())
		return false;

	return true;
}

void func_248(int iParam0, int iParam1) // Position - 0xB262 Hash - 0x978E21B ^0xA1438975
{
	int address;

	address = Global_1905944[iParam0];
	MISC::SET_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_249(int iParam0) // Position - 0xB286 Hash - 0xCAB4B86D ^0xCAB4B86D
{
	int num;

	num = func_285(iParam0);
	return num == 3 || num == 4;
}

Hash func_250(int iParam0) // Position - 0xB2A4 Hash - 0xB8EC44B7 ^0x693BD882
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

int func_251(Hash hParam0, int iParam1) // Position - 0xB35D Hash - 0xB815F93D ^0xDF1F4B5F
{
	var unk;
	int num;

	if (!func_414(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&num, &unk);
	return num;
}

char* func_252(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0xB38C Hash - 0xF20034E5 ^0x3F7E0F82
{
	switch (iParam1)
	{
		case joaat("CIGARETTE_CARDS"):
			if (iParam2 == 7)
				sParam3 = "COL_TX_CHECK_BACK";
			else if (iParam2 == 8)
				sParam3 = "COL_CC_COMPLETE";
			else if (func_111() >= 12)
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_415(), 12);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_416(), 12);
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
			else if (func_300() >= 30)
				sParam3 = MISC::VAR_STRING(2, "COL_DB_POSTED_OBJ", func_417(), 30);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_DB_FOUND_OBJ", func_300(), 30);
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
				sParam3 = MISC::VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", iParam4, func_251(iParam6, 20));
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
				sParam3 = MISC::VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_418(), 13);
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
			else if (func_301() >= 10)
				sParam3 = MISC::VAR_STRING(2, "COL_RC_POSTED_OBJ", func_419(), 10);
			else
				sParam3 = MISC::VAR_STRING(2, "COL_RC_FOUND_OBJ", func_301(), 10);
			break;
	}

	return sParam3;
}

BOOL func_253(int iParam0, Hash hParam1, Hash hParam2) // Position - 0xB679 Hash - 0xC978E890 ^0x1621426E
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

BOOL func_254(int iParam0, Hash hParam1, Vector3 vParam2, var uParam3, var uParam4, char* sParam5, char* sParam6) // Position - 0xB726 Hash - 0xC1094219 ^0x58B3963B
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, hParam1))
		UILOG::_UILOG_ADD_ENTRY_HASH(3, hParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);

	return true;
}

BOOL func_255(int iParam0, Hash hParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, Hash hParam6, Hash hParam7) // Position - 0xB752 Hash - 0xD1184F03 ^0x47C2A228
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(sParam2), sParam2, false, false, false);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, hParam1, true);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, hParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, hParam1, hParam6, hParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, hParam1, MISC::VAR_STRING(2, sParam3));
	return true;
}

BOOL func_256(int iParam0, Hash hParam1, Hash hParam2, int iParam3, Hash hParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9) // Position - 0xB7A1 Hash - 0x486F524F ^0x64D8785E
{
	int i;
	BOOL flag;
	Hash hash;

	flag = false;

	for (i = 0; i < iParam6; i = i + 1)
	{
		if (hParam2 == joaat("CIGARETTE_CARDS"))
		{
			hash = func_420(i);
		
			if (hParam4 == hash)
				flag = true;
			else
				flag = func_61(hash, 1, false) || func_422(func_421(hash));
		
			if (iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_420(i))), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(func_420(i)), flag, true, false);
		}
	
		if (hParam2 == joaat("dino_bones"))
		{
			if (i == 0)
			{
				flag = func_300() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_423(i)), func_423(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_417() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_423(i)), func_423(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_423(i)), func_423(i), flag, true, false);
			}
		}
	
		if (hParam2 == -1531394072)
		{
			hash = func_311(iParam3, func_424(i));
		
			if (iParam5 == 8)
				flag = true;
			else if (bParam9)
				if (hParam4 == hash)
					flag = func_307(hash) - iParam7 >= func_251(iParam3, func_425(i));
				else
					flag = func_307(hash) >= func_251(iParam3, func_425(i));
			else if (hParam4 == hash)
				flag = func_307(hash) + iParam7 >= func_251(iParam3, func_425(i));
			else
				flag = func_307(hash) >= func_251(iParam3, func_425(i));
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash)), AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(hash), flag, true, false);
		}
	
		if (hParam2 == 1995362678)
		{
			if (func_427(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
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
				flag = func_301() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_429(i)), func_429(i), flag, true, false);
			}
			else if (i == 1)
			{
				flag = func_419() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_429(i)), func_429(i), flag, true, false);
			}
			else
			{
				if (iParam5 == 8)
					flag = true;
				else
					flag = false;
			
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_429(i)), func_429(i), flag, true, false);
			}
		}
	
		if (hParam2 == joaat("taxidermy"))
		{
			hash = func_311(iParam3, func_424(i));
		
			if (bParam9)
				if (hParam4 == hash)
					flag = func_307(hash) - iParam7 >= 1;
				else
					flag = func_430(hash);
			else if (hParam4 == hash)
				flag = true;
			else
				flag = func_430(hash);
		
			if (iParam5 == 7 || iParam5 == 3 || iParam5 == 4 || iParam5 == 5 || iParam5 == 0 || iParam5 == 1 || iParam5 == 2 || iParam5 == 8)
				flag = true;
		
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, hParam1, MISC::GET_HASH_KEY(func_431(hash)), func_431(hash), flag, true, false);
		}
	}

	return true;
}

BOOL func_257(int iParam0, Hash hParam1, Hash hParam2, int iParam3) // Position - 0xBB16 Hash - 0x3C34F826 ^0xDFEA06D
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
		if (func_418() >= 13)
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

BOOL func_258(int iParam0, Hash hParam1, Hash hParam2, int iParam3, BOOL bParam4) // Position - 0xBC1F Hash - 0xBE0BA427 ^0x588A6FB8
{
	if (func_192(func_432(0)) && func_433(0) == 1 || func_433(0) == 8 || func_433(0) == 6)
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

int func_259(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, BOOL bParam12, BOOL bParam13) // Position - 0xBCC1 Hash - 0x51CE9407 ^0x19439D00
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(Hash hParam0) // Position - 0xBD38 Hash - 0xA17D549C ^0xFEDF244
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

int func_261(const char* sParam0, const char* sParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, BOOL bParam9, BOOL bParam10) // Position - 0xBDE8 Hash - 0xB88D7AA5 ^0x36259347
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

BOOL func_262(int iParam0) // Position - 0xBE49 Hash - 0xA19B21D2 ^0xA19B21D2
{
	if (iParam0 == 0)
		return false;

	return true;
}

BOOL func_263(int iParam0) // Position - 0xBE5C Hash - 0x22102713 ^0x1660170E
{
	int num;
	int num2;
	int offset;

	num = iParam0;
	num2 = num / 31;
	offset = num % 31;
	return MISC::IS_BIT_SET(Global_40.f_7857[num2], offset);
}

void func_264(int iParam0) // Position - 0xBE86 Hash - 0x48EBE6BD ^0x358C7E90
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

void func_265(int iParam0) // Position - 0xBEC0 Hash - 0x9DDBADAA ^0x9DDBADAA
{
	Hash hash;

	switch (iParam0)
	{
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
	
		case 2:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_105(586, false);
			break;
	
		case 3:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_105(587, false);
			break;
	
		case 4:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_105(588, false);
			break;
	
		case 5:
			if (!Global_1879534 && func_108() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
				func_261("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("hud_toasts"), 1963346246, -2, 0, 0, 0, 0, true, true);
		
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_105(589, false);
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
			func_434(true);
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
			func_435(1);
			break;
	
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_435(2);
			break;
	
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_435(3);
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
		
			if (func_122() == -1)
			{
				if (!func_344(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || func_442(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (func_277())
						hash = -1515874150;
					else
						hash = joaat("clothing_sp_offhand_000");
				
					if (!func_61(hash, 1, false))
						func_171(hash, 1, 752097756);
				
					func_150(Global_35, hash, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), true, true, true, false, true, true);
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
			func_436(true);
			break;
	
		case 34:
			func_437(true);
			break;
	
		case 35:
			func_438(true);
			break;
	
		case 36:
			break;
	
		case 37:
			func_439(false);
			break;
	
		case 38:
			func_440(false);
			break;
	
		case 39:
			func_441(false);
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
			func_443();
			break;
	
		case 47:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
	
		case 48:
			if (func_122() == -1)
				if (!func_61(1013902307, 1, false))
					func_171(1013902307, 1, 752097756);
			break;
	
		case 49:
			if (func_122() == -1)
				if (!func_61(786809402, 1, false))
					func_171(786809402, 1, 752097756);
			break;
	
		case 50:
			if (func_122() == -1)
			{
				if (!func_61(1013902307, 1, false))
					func_171(1013902307, 1, 752097756);
			
				if (!func_61(142640135, 1, false))
					func_171(142640135, 1, 752097756);
			}
			break;
	
		case 51:
			if (func_122() == -1)
			{
				if (!func_61(786809402, 1, false))
					func_171(786809402, 1, 752097756);
			
				if (!func_61(-518019409, 1, false))
					func_171(-518019409, 1, 752097756);
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

BOOL func_266(Hash hParam0) // Position - 0xC621 Hash - 0x8C6B1607 ^0xB465A08C
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_VISIBLE(weaponUnlock))
		return true;

	return false;
}

BOOL func_267(Hash hParam0) // Position - 0xC649 Hash - 0x8C6B1607 ^0xFBDEB3EC
{
	Hash weaponUnlock;

	weaponUnlock = WEAPON::_GET_WEAPON_UNLOCK(hParam0);

	if (weaponUnlock == 0)
		return false;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(weaponUnlock))
		return true;

	return false;
}

BOOL func_268(Hash hParam0) // Position - 0xC671 Hash - 0x7830C71D ^0x6BD1FDB5
{
	return WEAPON::IS_WEAPON_VALID(hParam0) && hParam0 != joaat("WEAPON_UNARMED");
}

Hash func_269(int iParam0, int iParam1) // Position - 0xC68C Hash - 0xE1D12727 ^0x71D656A6
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

BOOL func_270(Hash hParam0, var uParam1, Hash hParam2, BOOL bParam3) // Position - 0xE7D6 Hash - 0x4285A587 ^0x4285A587
{
	return func_397(hParam0, *uParam1, hParam2, bParam3) > 0;
}

BOOL func_271(Hash hParam0, Any* panParam1, Hash hParam2) // Position - 0xE7EE Hash - 0x3A11B8CD ^0x3324439A
{
	var unk;

	if (func_444(hParam0, &unk, panParam1, hParam2))
		return panParam1->f_17 > 0f;

	return false;
}

struct<4> func_272(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0xE80F Hash - 0x7592A56E ^0x2977A7FA
{
	var outGuid;

	if (!func_83(hParam0, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_241(bParam6), &uParam1, hParam0, hParam5, &outGuid);
	return outGuid;
}

BOOL func_273(Hash hParam0, Any* panParam1, var uParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE840 Hash - 0xA0AA5F74 ^0x6BC7AEA2
{
	var unk;
	int num;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (func_445(hParam0))
		return false;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_393(*panParam1, &unk, bParam6, false))
		return false;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!func_124(bParam6))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_241(bParam6), panParam1, iParam3, hParam4))
		return false;

	return true;
}

void func_274(Hash hParam0, int iParam1) // Position - 0xE8D0 Hash - 0xBFC80B98 ^0x997FC438
{
	int ammo;
	int ammo2;

	if (WEAPON::GET_AMMO_IN_CLIP(Global_35, &ammo, hParam0) && ammo < iParam1 && ammo < WEAPON::GET_WEAPON_CLIP_SIZE(hParam0))
	{
		ammo2 = func_446(WEAPON::GET_WEAPON_CLIP_SIZE(hParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, hParam0, ammo2);
	}

	return;
}

void func_275(Hash hParam0) // Position - 0xE918 Hash - 0x708BD33E ^0xEDA8DB26
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
	value = func_447();
	func_448(&value, 0, 0, 0, 1, 0, 0, false);
	DECORATOR::DECOR_SET_INT(Global_35, propertyName2, value);
	return;
}

int func_276(Hash hParam0) // Position - 0xE9E7 Hash - 0x62B2BF56 ^0x18236051
{
	int num;
	int pedAmmoByType;

	if (func_449(hParam0))
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

BOOL func_277() // Position - 0xEA63 Hash - 0xD5D58EB4 ^0xC93B1BFF
{
	if (func_122() != -1)
		return false;

	if (Global_40.f_39 == joaat("player_three"))
		return true;

	return false;
}

BOOL func_278(Hash hParam0) // Position - 0xEA88 Hash - 0xE6B34BF5 ^0xE4729149
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(hParam0));
}

Hash func_279(Ped pedParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0xEA9A Hash - 0x1C2A4A11 ^0x6B00CBB4
{
	int weaponHash;

	weaponHash = 0;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0))
		WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, bParam2, iParam1, bParam3);

	return weaponHash;
}

int func_280(Hash hParam0) // Position - 0xEAC0 Hash - 0x119612CE ^0xEB4896D6
{
	Hash weaponTypeFromAmmoType;

	weaponTypeFromAmmoType = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(hParam0);

	if (WEAPON::IS_WEAPON_A_GUN(weaponTypeFromAmmoType))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_117(50))
			{
				if (!func_117(48))
					return 133;
			
				return 135;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(weaponTypeFromAmmoType))
		{
			if (!func_117(51))
			{
				if (!func_117(49))
					return 134;
			
				return 136;
			}
		}
	}

	return 137;
}

BOOL func_281() // Position - 0xEB2C Hash - 0x11DC3931 ^0x9BD7583B
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"));
}

BOOL func_282(Ped pedParam0, Hash hParam1, var uParam2) // Position - 0xEB3D Hash - 0x4FC4FA99 ^0x540DBE26
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

	if (!func_83(hParam1, 0))
		return false;

	if (func_115(hParam1) != joaat("CLOTHING"))
		return false;

	isMP = func_122() != -1;
	metaPedType = PED::_GET_META_PED_TYPE(pedParam0);

	if (func_119(hParam1) == -999503751)
		return true;

	num = func_450(hParam1);

	if (num == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}

	flag = false;
	componentHash = hParam1;

	if (func_31(hParam1, 866047851))
	{
		num2 = func_320(num, 1);
	
		if (func_451(&(Global_1946054.f_1497)) >= 2 && Global_1946054.f_1497.f_1[num2 /*3*/] != componentHash)
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
			if (func_452(1868067663, &unk))
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
			num5 = func_453(componentHash, num, metaPedType, isMP);
			num4 = func_453(Global_1946054.f_1497.f_1[num2 /*3*/], num, metaPedType, isMP);
		
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
			hash = func_119(Global_1946054.f_1497.f_1[num2 /*3*/]);
		
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
			hash = func_119(hParam1);
			num2 = 36;
			num3 = 35;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_31(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				*uParam2 = -357399012;
				return false;
			}
		
			if (hash == 1769055947 || hash == 1545016984)
				break;
		
			if (hParam1 != Global_1946054.f_57[num3 /*11*/] && func_454(Global_1946054.f_1497.f_1[num2 /*3*/]))
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

void func_283() // Position - 0xEE4D Hash - 0xA141D86C ^0xD3302552
{
	PLAYER::_SET_BOW_STAMINA_DRAIN_SPEED(PLAYER::PLAYER_ID(), 1f - (Global_40.f_11095.f_64 + Global_1347477.f_175));
	return;
}

void func_284() // Position - 0xEE6E Hash - 0xDC6E219D ^0xBD2A18DD
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

int func_285(int iParam0) // Position - 0xEEC3 Hash - 0x71D355F9 ^0x71D355F9
{
	if (!func_192(iParam0))
		return -1;

	return func_455(iParam0);
}

int func_286() // Position - 0xEEDF Hash - 0x6F6FB6A ^0x6F6FB6A
{
	int num;
	int i;

	for (i = 0; i < 26; i = i + 1)
	{
		if (func_61(func_456(i), 1, false))
			num = num + 1;
	}

	return num;
}

Hash func_287(Hash hParam0) // Position - 0xEF11 Hash - 0xBD10D1A2 ^0xAD2FE305
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

BOOL func_288(int iParam0, Hash hParam1) // Position - 0xEFA7 Hash - 0x33707815 ^0xEA5B7C5C
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

Hash func_289(Hash hParam0) // Position - 0xF108 Hash - 0xB8EC44B7 ^0x8CFD1640
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

BOOL func_290(Hash hParam0, int iParam1) // Position - 0xF1CF Hash - 0xB78A2FC ^0x6E3EB1C7
{
	int num;

	num = func_457(hParam0);

	if (num != -15)
	{
		func_448(&num, 0, iParam1, 0, 0, 0, 0, false);
		return !func_458(num, true);
	}

	return false;
}

int func_291(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xF201 Hash - 0xE2402AAF ^0x47ECB962
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
		
			if (func_83(hash, 0) && func_31(hash, -1921346699))
				return BUILTIN::CEIL((float)num2.f_12[i] * num);
		}
	}

	return 0;
}

void func_292(int iParam0, const char* sParam1, int iParam2) // Position - 0xF2C6 Hash - 0x4DF85B80 ^0xB4DF8C9F
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_MONEY_EARN";

	func_352(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	return;
}

void func_293(int iParam0, BOOL bParam1, int iParam2, int iParam3, Hash hParam4) // Position - 0xF307 Hash - 0x9636EF60 ^0x355C8D65
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
	
		if (func_459())
			num2 = BUILTIN::FLOOR(BUILTIN::TO_FLOAT(value) * 0.1f);
	
		iParam0 = iParam0 + num2;
		value = value + num2;
		func_352(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_total_take"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
		iParam0 = iParam0 - num;
	
		if (num > 0)
		{
			func_460(num);
			func_461(num, 0, 0);
		}
	
		func_352(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", value), "ITEMTYPE_TEXTURES", joaat("itemtype_cash"), 0, joaat("COLOR_PURE_WHITE"), 0, 0, 0, true);
	}
	else
	{
		value = iParam0;
	}

	if (value > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(value, hParam4);
		func_133(func_348(joaat("CAREER_CASH")), value);
	}

	return;
}

void func_294(int iParam0) // Position - 0xF3E3 Hash - 0x25D46568 ^0xBF368405
{
	Global_40.f_12004.f_6 = Global_40.f_12004.f_6 || iParam0;
	return;
}

void func_295(int iParam0) // Position - 0xF3FE Hash - 0x25D46568 ^0xBD3E2EC1
{
	Global_40.f_12004.f_1 = Global_40.f_12004.f_1 || iParam0;
	return;
}

void func_296(int iParam0) // Position - 0xF419 Hash - 0x25D46568 ^0x155CD956
{
	Global_40.f_12004.f_3 = Global_40.f_12004.f_3 || iParam0;
	return;
}

void func_297(int iParam0) // Position - 0xF434 Hash - 0x25D46568 ^0x27CAC05F
{
	Global_40.f_12004.f_5 = Global_40.f_12004.f_5 || iParam0;
	return;
}

int func_298(int iParam0) // Position - 0xF44F Hash - 0xC69F7374 ^0xCEC8F963
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

	num2 = func_307(hash);
	num3 = func_307(hash2);
	num4 = func_307(hash3);
	num6 = func_308(hash);
	num7 = func_308(hash2);
	num8 = func_308(hash3);

	if (iParam0 != 2)
	{
		num5 = func_307(hash4);
		num9 = func_308(hash4);
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

void func_299(int iParam0) // Position - 0xF5C2 Hash - 0x25D46568 ^0xF36E5C55
{
	Global_40.f_12004.f_2 = Global_40.f_12004.f_2 || iParam0;
	return;
}

int func_300() // Position - 0xF5DD Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_462(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_301() // Position - 0xF616 Hash - 0xCF63D31C ^0x5129EE00
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_FOUND(joaat("rock_carvings"), 0);
}

BOOL func_302(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3, int iParam4, BOOL bParam5) // Position - 0xF628 Hash - 0x9548C303 ^0x2CDF6383
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
			if (func_430(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_430(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_430(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_02"))
	{
		if (bParam3)
			if (func_430(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_430(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_430(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash) && func_430(hash2))
			return true;
	}
	else if (hParam0 == joaat("taxidermy_order_03"))
	{
		if (bParam3)
			if (func_430(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_430(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_430(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash) && func_430(hash2) && func_430(hash3))
			return true;
	}
	else
	{
		if (bParam3)
			if (func_430(hParam1))
				*uParam2 = *uParam2 + 1;
	
		if (bParam5)
			if (func_430(hParam1))
				*uParam2 = *uParam2 - iParam4;
	
		if (func_430(hash))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash2))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash3))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash4))
			*uParam2 = *uParam2 + 1;
	
		if (func_430(hash) && func_430(hash2) && func_430(hash3) && func_430(hash4))
			return true;
	}

	return false;
}

void func_303(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0xFAED Hash - 0x5A64C5C8 ^0x6D52F178
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
			func_465();
			func_463(iParam0);
			break;
	
		case -1925798111:
			func_463(-1925798111);
			func_464(-919512195);
			func_464(420709909);
			func_464(1703426636);
			break;
	
		case -1838352012:
			func_464(-1674179981);
			func_464(-1835851517);
			func_463(-1838352012);
			break;
	
		case -1835851517:
			func_464(-1674179981);
			func_464(-1838352012);
			func_463(-1835851517);
			break;
	
		case -1738165526:
			func_463(-1738165526);
			func_464(0);
			func_464(473295046);
			break;
	
		case -1717960576:
			func_464(210001842);
			func_463(-1717960576);
			break;
	
		case -1674179981:
			func_464(-1835851517);
			func_464(-1838352012);
			func_463(-1674179981);
			break;
	
		case -1612662716:
			func_464(1822001510);
			func_463(-1612662716);
			break;
	
		case -1414537028:
			func_464(38162571);
			func_464(1350391819);
			func_464(54073871);
			func_463(-1414537028);
			break;
	
		case -1311865656:
			func_463(-1311865656);
			func_464(1509509592);
			func_464(-959357075);
			func_464(405586984);
			break;
	
		case -1271608261:
			func_464(-150493654);
			func_464(1846061697);
			func_464(-1145519186);
			func_463(-1271608261);
			break;
	
		case -1223121209:
			func_463(-1223121209);
			func_464(630808005);
			break;
	
		case -1145519186:
			func_464(-150493654);
			func_464(-1271608261);
			func_464(1846061697);
			func_463(-1145519186);
			break;
	
		case -1124061431:
			func_464(198200492);
			func_463(-1124061431);
			func_464(52706132);
			func_464(-259123672);
			break;
	
		case -1080627546:
			if (bParam1)
				func_463(-1080627546);
			else
				func_464(-1080627546);
			break;
	
		case -1056767524:
		case -538889627:
		case -538880323:
			func_464(-538889627);
			func_464(-538880323);
			func_464(-1056767524);
			func_463(iParam0);
			break;
	
		case -959357075:
			func_463(-959357075);
			func_464(1509509592);
			func_464(405586984);
			func_464(-1311865656);
			break;
	
		case -919512195:
			func_463(-919512195);
			func_464(-1925798111);
			func_464(420709909);
			func_464(1703426636);
			break;
	
		case -664252410:
			func_464(2019386373);
			func_464(2109952320);
			func_463(-664252410);
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
			func_466();
			func_463(iParam0);
			break;
	
		case -524145696:
			if (bParam1)
				func_463(-524145696);
			else
				func_464(-524145696);
		
			func_464(1626481264);
			func_464(282809459);
			break;
	
		case -502324015:
			func_464(1497516462);
			func_464(2016141805);
			func_464(1010885152);
			func_463(-502324015);
			break;
	
		case -434590080:
			func_464(1376646519);
			func_464(931649776);
			func_464(1743048395);
			func_464(449774763);
			func_463(-434590080);
			break;
	
		case -404698347:
			func_464(1306158345);
			func_464(1952610440);
			func_464(-223469678);
			func_464(1517904467);
			func_463(-404698347);
			break;
	
		case -259123672:
			func_464(198200492);
			func_464(-1124061431);
			func_464(52706132);
			func_463(-259123672);
			break;
	
		case -223469678:
			func_464(1306158345);
			func_464(1952610440);
			func_464(-404698347);
			func_464(1517904467);
			func_463(-223469678);
			break;
	
		case -150493654:
			func_464(-1271608261);
			func_464(1846061697);
			func_464(-1145519186);
			func_463(-150493654);
			break;
	
		case 0:
			func_463(0);
			func_464(473295046);
			func_464(-1738165526);
			break;
	
		case 38162571:
			func_464(-1414537028);
			func_464(1350391819);
			func_464(54073871);
			func_463(38162571);
			break;
	
		case 52706132:
			func_464(198200492);
			func_464(-1124061431);
			func_463(52706132);
			func_464(-259123672);
			break;
	
		case 54073871:
			func_464(-1414537028);
			func_464(38162571);
			func_464(1350391819);
			func_463(54073871);
			break;
	
		case 198200492:
			func_463(198200492);
			func_464(-1124061431);
			func_464(52706132);
			func_464(-259123672);
			break;
	
		case 210001842:
			func_464(-1717960576);
			func_463(210001842);
			break;
	
		case 280705402:
			func_464(1766284049);
			func_464(1926308480);
			func_463(280705402);
			break;
	
		case 282809459:
			func_463(282809459);
			func_464(1626481264);
			func_464(-524145696);
			break;
	
		case 405586984:
			func_463(405586984);
			func_464(1509509592);
			func_464(-959357075);
			func_464(-1311865656);
			break;
	
		case 420709909:
			func_463(420709909);
			func_464(-919512195);
			func_464(-1925798111);
			func_464(1703426636);
			break;
	
		case 439465264:
			if (func_467(1609506757))
				if (bParam1)
					func_463(439465264);
				else
					func_464(439465264);
			break;
	
		case 449774763:
			func_464(1376646519);
			func_464(931649776);
			func_464(-434590080);
			func_464(1743048395);
			func_463(449774763);
			break;
	
		case 473295046:
			func_463(473295046);
			func_464(0);
			func_464(-1738165526);
			break;
	
		case 630808005:
			func_463(630808005);
			func_464(-1223121209);
			break;
	
		case 885203519:
			if (bParam1)
				func_463(885203519);
			else
				func_464(885203519);
			break;
	
		case 931649776:
			func_464(1376646519);
			func_464(-434590080);
			func_464(1743048395);
			func_464(449774763);
			func_463(931649776);
			break;
	
		case 932909855:
			func_463(932909855);
			func_464(2051822093);
			break;
	
		case 1010885152:
			func_464(1497516462);
			func_464(2016141805);
			func_463(1010885152);
			func_464(-502324015);
			break;
	
		case 1306158345:
			func_464(1952610440);
			func_464(-223469678);
			func_464(-404698347);
			func_464(1517904467);
			func_463(1306158345);
			break;
	
		case 1350391819:
			func_464(-1414537028);
			func_464(38162571);
			func_464(54073871);
			func_463(1350391819);
			break;
	
		case 1376646519:
			func_464(931649776);
			func_464(-434590080);
			func_464(1743048395);
			func_464(449774763);
			func_463(1376646519);
			break;
	
		case 1453909576:
			func_463(1453909576);
			func_464(1643531967);
			break;
	
		case 1497516462:
			func_463(1497516462);
			func_464(2016141805);
			func_464(1010885152);
			func_464(-502324015);
			break;
	
		case 1509509592:
			func_463(1509509592);
			func_464(405586984);
			func_464(-959357075);
			func_464(-1311865656);
			break;
	
		case 1517904467:
			func_464(1306158345);
			func_464(1952610440);
			func_464(-223469678);
			func_464(-404698347);
			func_463(1517904467);
			break;
	
		case 1609506757:
			if (bParam1)
			{
				func_464(439465264);
				func_463(1609506757);
			}
			else
			{
				func_464(1609506757);
				func_464(439465264);
			}
			break;
	
		case 1626481264:
			func_463(1626481264);
			func_464(-524145696);
			func_464(282809459);
			break;
	
		case 1643531967:
			func_463(1643531967);
			func_464(1453909576);
			break;
	
		case 1703426636:
			func_463(1703426636);
			func_464(-919512195);
			func_464(-1925798111);
			func_464(420709909);
			break;
	
		case 1743048395:
			func_464(1376646519);
			func_464(931649776);
			func_464(-434590080);
			func_464(449774763);
			func_463(1743048395);
			break;
	
		case 1766284049:
			func_464(280705402);
			func_464(1926308480);
			func_463(1766284049);
			break;
	
		case 1822001510:
			func_464(-1612662716);
			func_463(1822001510);
			break;
	
		case 1846061697:
			func_464(-150493654);
			func_464(-1271608261);
			func_464(-1145519186);
			func_463(1846061697);
			break;
	
		case 1926308480:
			func_464(1766284049);
			func_464(280705402);
			func_463(1926308480);
			break;
	
		case 1952610440:
			func_464(1306158345);
			func_464(-223469678);
			func_464(-404698347);
			func_464(1517904467);
			func_463(1952610440);
			break;
	
		case 2016141805:
			func_464(1497516462);
			func_463(2016141805);
			func_464(1010885152);
			func_464(-502324015);
			break;
	
		case 2019386373:
			func_464(-664252410);
			func_464(2109952320);
			func_463(2019386373);
			break;
	
		case 2051822093:
			func_463(2051822093);
			func_464(932909855);
			break;
	
		case 2109952320:
			func_464(2019386373);
			func_464(-664252410);
			func_463(2109952320);
			break;
	
		default:
			if (bParam1)
				if (!func_467(iParam0))
					func_463(iParam0);
			else if (func_467(iParam0))
				func_464(iParam0);
			break;
	}

	return;
}

void func_304(Hash hParam0) // Position - 0x10613 Hash - 0x70E5F07F ^0x70E5F07F
{
	if (!func_468(hParam0))
		func_470(func_469(hParam0));

	return;
}

int func_305() // Position - 0x1062F Hash - 0x40F73196 ^0x4F871B7D
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (func_468(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, -1531394072, 0)))
			num = num + 1;
	}

	return num;
}

int func_306(Hash hParam0, int iParam1, int iParam2) // Position - 0x10667 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_307(hash);
	num3 = func_307(hash2);
	num4 = func_307(hash3);
	num6 = func_308(hash);
	num7 = func_308(hash2);
	num8 = func_308(hash3);

	if (iParam2 != 2)
	{
		num5 = func_307(hash4);
		num9 = func_308(hash4);
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

int func_307(Hash hParam0) // Position - 0x1087A Hash - 0x3E479F4F ^0x3E479F4F
{
	int num;

	if (func_61(hParam0, 1, false))
		num = func_98(hParam0, false, false);

	return num;
}

int func_308(Hash hParam0) // Position - 0x10899 Hash - 0xEED5739D ^0xEED5739D
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

int func_309(Hash hParam0) // Position - 0x10972 Hash - 0xD6E12BEB ^0x1BFBC7C9
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0);
}

void func_310(Hash hParam0, int iParam1) // Position - 0x10980 Hash - 0xAEE04633 ^0x64A87C96
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, iParam1);
	return;
}

Hash func_311(Hash hParam0, int iParam1) // Position - 0x10990 Hash - 0xB815F93D ^0x864481B4
{
	var unk;
	int num;

	if (!func_414(17, &unk))
		return 0;

	unk.f_2 = iParam1;
	unk.f_3 = hParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&num, &unk);
	return num;
}

void func_312(Hash hParam0, Hash hParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x109BF Hash - 0xC19694F5 ^0xC19694F5
{
	if (hParam0 == func_311(hParam1, 5) || hParam0 == func_311(hParam1, 6) || hParam0 == func_311(hParam1, 7) || hParam0 == func_311(hParam1, 8) || hParam0 == func_311(hParam1, 9))
	{
		func_302(hParam1, hParam0, &iParam2, false, iParam3, bParam4);
		func_112(51, 0, 0, hParam1, iParam2, false, -1, false);
		func_114(51, 0, 0, 0, 0, -1, 0);
	}

	return;
}

void func_313(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x10A41 Hash - 0xCAA72529 ^0xCAA72529
{
	int num;

	num = 1;

	if (hParam0 == func_311(hParam1, 5) || hParam0 == func_311(hParam1, 6) || hParam0 == func_311(hParam1, 7) || hParam0 == func_311(hParam1, 8) || hParam0 == func_311(hParam1, 9))
	{
		if (func_302(hParam1, hParam0, &num, false, 0, false))
		{
			func_112(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_114(51, 0, 0, num, func_251(hParam1, 20), 1, 0);
		}
		else
		{
			func_112(51, hParam0, 0, hParam1, num, false, -1, false);
		
			if (!bParam2)
				func_114(51, 0, 0, num, func_251(hParam1, 20), 1, 0);
		}
	}

	return;
}

BOOL func_314() // Position - 0x10B02 Hash - 0xFE7975D2 ^0x5148ACFC
{
	if (func_249(Global_1347702[37 /*49*/].f_15) && Global_1392388.f_7)
		return true;

	return false;
}

void func_315(Hash hParam0) // Position - 0x10B2B Hash - 0x70E4913D ^0x3306E40C
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);
	return;
}

void func_316(Hash hParam0) // Position - 0x10B3A Hash - 0xB02A89A ^0x586D0DC7
{
	if (!func_471(hParam0))
		COLLECTION::_COLLECTABLE_INCREMENT_NUM_FOUND(hParam0, 1);

	return;
}

void func_317(Hash hParam0) // Position - 0x10B53 Hash - 0x70E4913D ^0xC7621DBD
{
	COLLECTION::_COLLECTABLE_INCREMENT_NUM_TURNED_IN(hParam0, 1);
	return;
}

void func_318(Hash hParam0, var uParam1, var uParam2) // Position - 0x10B62 Hash - 0x38E6C2DD ^0xA4FE6475
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

int func_319(var uParam0) // Position - 0x10D6E Hash - 0x10AF8248 ^0x703E5ADF
{
	int i;

	for (i = 0; i < 39; i = i + 1)
	{
		if (Global_1946054.f_57[i /*11*/].f_8 == uParam0)
			return func_472(i, 1);
	}

	return -358215195;
}

int func_320(int iParam0, int iParam1) // Position - 0x10DA9 Hash - 0x9D981F95 ^0x9D981F95
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

BOOL func_321(Hash hParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x10F7A Hash - 0x5BE0E7EF ^0xB7318963
{
	var unk;
	int num;
	int i;

	func_473();

	if (iParam2 == 39)
	{
		unk = { func_234(hParam0, true, false) };
		iParam2 = func_320(func_319(unk.f_4), 1);
	}

	if (iParam2 < 0 || iParam2 >= 39)
		return false;

	if (func_31(hParam0, 866047851) && func_451(&(Global_1946054.f_1378)) >= 2)
		return false;

	if (func_324(32768) && iParam2 == 10 && hParam0 != Global_1946054.f_57[iParam2 /*11*/])
		func_474(func_472(iParam2, 1));

	num = 0;

	if (bParam4)
		num = 3;

	func_475(iParam2);
	func_476(iParam2, num);

	if (Global_1946054.f_1378.f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && Global_1946054.f_57[iParam2 /*11*/].f_1 > 1)
	{
		func_477(&Global_1946054.f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_477(&Global_1946054.f_1497.f_1[iParam2 /*3*/], 4, 6);
	}

	func_478(&(Global_1946054.f_1378), hParam0, iParam2, bParam4, true);

	if (hParam1 == 0)
		hParam1 = Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1;

	Global_1946054.f_1378.f_1[iParam2 /*3*/] = hParam0;
	Global_1946054.f_1378.f_1[iParam2 /*3*/].f_1 = func_479(hParam0, iParam2, hParam1, func_122() != -1);

	if (bParam4)
		func_480(&(Global_1946054.f_1378), true, 3);
	else
		func_480(&(Global_1946054.f_1378), true, 0);

	if (bParam3)
	{
		for (i = 0; i < Global_1946054.f_2589; i = i + 1)
		{
			if (Global_1946054.f_2589.f_2[i /*2*/] >= 0 && Global_1946054.f_2589.f_2[i /*2*/] < 39)
			{
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/] = 0;
				Global_1946054.f_2456[Global_1946054.f_2589.f_2[i /*2*/] /*2*/].f_1 = 0;
				func_481(func_472(Global_1946054.f_2589.f_2[i /*2*/], 1), 1, 6);
			}
		}
	}

	return true;
}

void func_322(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11187 Hash - 0x5AF76643 ^0x5AF76643
{
	func_482(&(Global_1946054.f_2589), bParam0, bParam1, bParam2);
	return;
}

void func_323(int iParam0, Hash hParam1, int iParam2, Ped pedParam3, BOOL bParam4) // Position - 0x111A0 Hash - 0x32CA993A ^0x90267B41
{
	int num;

	if (bParam4)
		func_483(16384);

	num = iParam0;
	num.f_1 = hParam1;
	num.f_2 = iParam2;
	num.f_3 = pedParam3;
	func_484(num);
	return;
}

BOOL func_324(BOOL bParam0) // Position - 0x111D2 Hash - 0x9B2B80BE ^0x9B2B80BE
{
	return Global_1946054 && bParam0 != false;
}

void func_325() // Position - 0x111E3 Hash - 0xB6203BF0 ^0x217DD714
{
	func_485(&(Global_1946054.f_2776));
	func_486(32768);
	func_481(1108822547, 8, 6);
	return;
}

int func_326(int iParam0) // Position - 0x1120A Hash - 0x6D41B005 ^0x1854201E
{
	int num;
	int num2;

	num = 0;
	num2 = func_320(iParam0, 1);

	switch (iParam0)
	{
		case 1108822547:
			if (Global_1946054.f_1497.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/] || Global_1946054.f_1378.f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				num = 48;
			break;
	}

	return num;
}

void func_327(int iParam0) // Position - 0x1126E Hash - 0x1B3C2724 ^0xC6DA7F4E
{
	int num;

	if (func_487(iParam0, 4096))
		Global_1946054.f_858 = Global_1946054.f_858 + 1;

	if (Global_1946054.f_858 <= 0)
		return;

	num.f_1 = iParam0;
	num = 34;
	func_488(num);
	return;
}

void func_328(int iParam0, int iParam1, int iParam2) // Position - 0x112B2 Hash - 0xE79F3F0D ^0xAC72E90D
{
	int num;

	num.f_1 = iParam2;
	num = iParam0;
	num.f_2 = iParam1;
	func_488(num);
	return;
}

BOOL func_329(char* sParam0, var uParam1, int* piParam2, Hash hParam3, BOOL bParam4) // Position - 0x112D2 Hash - 0xA7F38D3E ^0x25D43AAB
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_241(bParam4), sParam0, hParam3, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

BOOL func_330(Any* panParam0, int iParam1, int iParam2, int iParam3) // Position - 0x112F9 Hash - 0xF1DE71ED ^0x4F212F50
{
	if (iParam2 < 0)
		return false;

	if (iParam1 < 0 || iParam1 >= iParam3)
		return false;

	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, panParam0))
		return false;

	return true;
}

float func_331() // Position - 0x11334 Hash - 0xB0642BCC ^0x4D6FEEA4
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

	if (func_489())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 2) || Global_40.f_11095.f_46 == 0)
		return func_490(2);

	if (Global_1347477.f_119)
		return func_490(2);

	num = (float)Global_40.f_11095.f_46 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_491();
	num3 = func_492();
	num4 = func_493();
	num5 = func_494();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_50));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_495());
	num8 = func_490(2) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_496(3, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_497(3, num9, num9 > 100f);
	return func_498(num8, -100f, 100f);
}

float func_332() // Position - 0x1145D Hash - 0x951B1CCC ^0x7B312694
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

	if (func_489())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 1) || Global_40.f_11095.f_47 == 0)
		return func_490(1);

	if (Global_1347477.f_119)
		return func_490(1);

	num = (float)Global_40.f_11095.f_47 * 60f;
	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_491();
	num3 = func_492();
	num4 = func_493();
	num5 = func_494();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_51));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_495());
	num8 = func_490(1) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_496(2, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_497(2, num9, num9 > 100f);
	return func_498(num8, -100f, 100f);
}

float func_333() // Position - 0x11586 Hash - 0x4D146F4A ^0xFC60D2FE
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

	if (func_489())
		return 0f;

	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(Global_35, 0) || Global_40.f_11095.f_48 == 0)
		return func_490(0);

	num = (float)Global_40.f_11095.f_48 * 60f;

	if (func_499())
		num = 10f * 60f * (Global_40.f_11095.f_54 + 1f);
	else if (func_500())
		num = 10f * 60f * (Global_40.f_11095.f_53 + 1f);
	else if (Global_1347477.f_119)
		return func_490(0);

	if (Global_40.f_11095.f_43)
		num = 10f * 60f;

	num = num / BUILTIN::TO_FLOAT(7);
	num2 = func_491();
	num3 = func_492();
	num4 = func_493();
	num5 = func_494();
	num6 = 1f / (1f - (num2 + num3 + num4 + num5 + Global_40.f_11095.f_49));
	num = num * num6;
	num7 = 200f / num;
	num7 = num7 * (30f / func_495());
	num8 = func_490(0) - num7;
	value = BUILTIN::ROUND((num / 60f) * BUILTIN::TO_FLOAT(7));
	num9 = 100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(value));
	num10 = (num8 + 100f) / 200f;
	func_496(1, BUILTIN::ROUND(BUILTIN::TO_FLOAT(value) * num10), false);
	func_497(1, num9, num9 > 100f);

	if (num8 <= -100f && PLAYER::_GET_PLAYER_HEALTH(PLAYER::PLAYER_ID()) < 1f)
		return func_490(0);

	return func_498(num8, -100f, 100f);
}

BOOL func_334(int iParam0, int iParam1) // Position - 0x1172D Hash - 0xECB143B0 ^0x9BF3D063
{
	return Global_1905944.f_22[iParam0 /*9*/].f_2 && iParam1 != false;
}

BOOL func_335(Hash hParam0) // Position - 0x11746 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_336(Hash hParam0, Any* panParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x11756 Hash - 0x86E39CDA ^0xCF922D1
{
	!func_83(hParam0, 0);

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_238(hParam0, panParam2, iParam3, bParam5, false))
		return 0;

	if (!func_124(false))
		return 0;

	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_241(false), panParam1, panParam2, hParam0, panParam2->f_4, iParam3, hParam4))
		return 0;

	return 1;
}

int func_337(int iParam0, BOOL bParam1) // Position - 0x117B8 Hash - 0x6C404ADF ^0x7D516F33
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
				return func_501();
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

int func_338(Hash hParam0) // Position - 0x11847 Hash - 0x9830D1FB ^0x9830D1FB
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

BOOL func_339(int iParam0) // Position - 0x11C5A Hash - 0x76C5FB13 ^0x76C5FB13
{
	if (iParam0 < 0 || iParam0 >= 95)
		return false;

	return true;
}

void func_340(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x11C79 Hash - 0xC1426DBB ^0xC1426DBB
{
	Hash hash;

	if (!func_339(iParam0))
		return;

	if (func_502(iParam0))
		return;

	if (!func_503(iParam0))
		func_504(iParam0, true, false);

	hash = func_505(iParam0);

	if (hash != 0 && !(iParam0 >= 0 && iParam0 <= 5))
		if (func_506(iParam0, 512))
			func_323(30, hash, 0, 0, false);

	if (!func_507() && !bParam1 && !func_50(0, false, true))
		func_508(MISC::VAR_STRING(10, "OUT_JOURN_DONE", MISC::VAR_STRING(0, hash)), 10000, 0, 0, 0, true);

	func_509(iParam0, 6);

	if (bParam2)
		if (!func_50(0, false, true))
			func_245(true, 4);

	return;
}

int func_341() // Position - 0x11D3F Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_1946054.f_1;
}

BOOL func_342(int iParam0, BOOL bParam1) // Position - 0x11D4D Hash - 0xACEDDC2C ^0xACEDDC2C
{
	return func_337(iParam0, false) < func_510(iParam0, bParam1);
}

BOOL func_343(Hash hParam0, var uParam1) // Position - 0x11D65 Hash - 0x8324C1A5 ^0xBCA9CBC8
{
	int i;
	Hash hash;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_119(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	return false;
}

BOOL func_344(int iParam0) // Position - 0x11DA9 Hash - 0xEB793C30 ^0xF0C7C18C
{
	if (iParam0 == -358215195)
		return false;

	return Global_1946054.f_1497.f_1[func_320(iParam0, 1) /*3*/] != Global_1946054.f_57[func_320(iParam0, 1) /*11*/];
}

void func_345(int iParam0, Hash hParam1) // Position - 0x11DE1 Hash - 0x1B56319F ^0x3D9B5946
{
	if (func_31(hParam1, 130796156))
	{
		func_511(hParam1, false);
	}
	else if (func_31(hParam1, 930141731))
	{
		func_511(hParam1, true);
		func_512(iParam0);
	}

	return;
}

void func_346(var uParam0, int iParam1) // Position - 0x11E1C Hash - 0x84556899 ^0xA18AFCFA
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

int func_347(Hash hParam0, var uParam1, Any anParam2, int iParam3) // Position - 0x11EFD Hash - 0xD7FAFF38 ^0x7903CCF6
{
	var unk;
	int num;

	if (hParam0 == 0)
		return 0;

	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
		return 0;

	func_513(uParam1);
	SECURE_STORE(&unk, hParam0);

	if (!NETWORK::_0x77B299E8799B1332(&unk, &(uParam1->f_1), anParam2))
		return 0;

	num.f_2.f_1 = 10;
	num = iParam3;
	num.f_2 = { *uParam1 };
	func_514(anParam2, hParam0, num);
	return 1;
}

struct<2> func_348(int iParam0) // Position - 0x11F66 Hash - 0x573E385B ^0x573E385B
{
	int num;

	num = iParam0;
	return num;
}

var func_349(int iParam0) // Position - 0x11F76 Hash - 0x6AA34421 ^0x7B821F1
{
	return Global_1900073.f_159[iParam0];
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0(int iParam0) // Position - 0x11F88 Hash - 0xA17D549C ^0xBD0CB063
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

Hash func_351(Hash hParam0) // Position - 0x1205F Hash - 0x42CB27A1 ^0xAE7DBAA9
{
	Hash num;

	if (!func_185(hParam0, &num, joaat("Inventory"), 0, 0, joaat("ui_itemviewer")))
		return joaat("_placeholder");

	return num;
}

int func_352(const char* sParam0, const char* sParam1, Hash hParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, BOOL bParam8) // Position - 0x12089 Hash - 0x72075C17 ^0x3AC6D3FB
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
	func_515(sParam0, sParam1, hParam2);
	return num2;
}

BOOL func_353() // Position - 0x120EC Hash - 0xC631EDDE ^0xC631EDDE
{
	return !Global_1911774;
}

void func_354(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x120F9 Hash - 0xD988E1C5 ^0xEB41314B
{
	Global_1911774.f_4[Global_1911774.f_3 /*4*/] = hParam0;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_1 = iParam1;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_2 = iParam2;
	Global_1911774.f_4[Global_1911774.f_3 /*4*/].f_3 = iParam3;

	if (Global_1911774.f_3 < 20)
		Global_1911774.f_3 = Global_1911774.f_3 + 1;

	return;
}

var func_355(BOOL bParam0, var uParam1, var uParam2) // Position - 0x12163 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
// Unhandled jump detected. Output should be considered invalid
BOOL func_356(Hash hParam0, var uParam1, int iParam2, Hash hParam3, Hash hParam4, Hash hParam5) // Position - 0x1217A Hash - 0x92B705D3 ^0xB783F681
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

const char* func_357(const char* sParam0, int iParam1) // Position - 0x1226D Hash - 0x9E99F03 ^0x6F468FFA
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

BOOL func_358(var uParam0, int iParam1, BOOL bParam2) // Position - 0x12287 Hash - 0x58578E17 ^0xA6EA6348
{
	if (bParam2)
		if (!func_516(uParam0->f_9))
			return false;

	if (!func_517(uParam0->f_4))
		return false;

	if (!func_518(uParam0->f_4, iParam1, false))
		return false;

	if (!func_519(uParam0->f_4))
		return false;

	if (func_520(false))
		if (!func_83(uParam0->f_4, 0) || uParam0->f_11 <= 0)
			return false;

	if (Global_1935689.f_9440 == 0 && !func_521())
		func_522(uParam0->f_4);

	return true;
}

BOOL func_359(Hash hParam0, Hash hParam1) // Position - 0x1231B Hash - 0x9D305ADC ^0xED1BD779
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

void func_360(var uParam0) // Position - 0x123BD Hash - 0xA0478F20 ^0x9FF689C1
{
	var outData;

	if (func_70(uParam0->f_4))
		if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(*uParam0, &outData))
			uParam0->f_5.f_2 = outData.f_4;

	return;
}

BOOL func_361(int iParam0) // Position - 0x123E9 Hash - 0x35C18C30 ^0x35C18C30
{
	return iParam0 > -1 && iParam0 < 14;
}

int func_362(int iParam0) // Position - 0x123FF Hash - 0xEC3CB391 ^0xEC3CB391
{
	switch (iParam0)
	{
		case -2012820803:
			return 1;
	
		case -1680391208:
			return 1;
	
		case -1594812622:
			return 2;
	
		case -1556675047:
			return 1;
	
		case -1454682982:
			return 0;
	
		case -1449342224:
			return 2;
	
		case -1261034125:
			return 1;
	
		case -1254096446:
			return 1;
	
		case -1253105631:
			return 1;
	
		case -924992065:
			return 0;
	
		case -915721704:
			return 1;
	
		case -849973848:
			return 1;
	
		case -760557223:
			return 0;
	
		case -634222073:
			return 2;
	
		case -572653278:
			return 2;
	
		case -532692958:
			return 2;
	
		case -413074747:
			return 0;
	
		case -358162791:
			return 2;
	
		case -279147844:
			return 0;
	
		case -246260565:
			return 0;
	
		case joaat("DOCUMENT_NEWSPAPER_ED_01"):
			return 0;
	
		case 18296369:
			return 0;
	
		case 61577350:
			return 1;
	
		case 109840158:
			return 0;
	
		case 202891657:
			return 1;
	
		case 340173459:
			return 0;
	
		case 368626453:
			return 2;
	
		case 543847666:
			return 2;
	
		case 662019373:
			return 2;
	
		case 706727493:
			return 0;
	
		case 888242611:
			return 2;
	
		case 903996873:
			return 0;
	
		case 1012860904:
			return 1;
	
		case 1032348365:
			return 2;
	
		case 1318524723:
			return 0;
	
		case 1538503020:
			return 0;
	
		case 1566650197:
			return 2;
	
		case 1712504077:
			return 2;
	
		case 1737771952:
			return 1;
	
		case 1767753378:
			return 1;
	
		case 1786928078:
			return 2;
	
		case 1787203230:
			return 1;
	}

	return 0;
}

void func_363(int iParam0, int iParam1) // Position - 0x12632 Hash - 0x2920DB5B ^0xE60588FE
{
	char* str;
	var unk;
	var unk9;
	Hash entryId;
	Hash hash;
	Hash hash2;
	Hash hash3;
	var unk17;

	if (func_361(iParam0))
	{
		str = func_523(iParam1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
		TEXT_LABEL_ASSIGN_STRING(&unk9, "", 64);
		entryId = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");
		hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, "DynamicArticle_01");
		hash2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, "DynamicArticle_02");
		hash3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(entryId, "FishingArticle");
	
		if (func_524(Global_40.f_9479[iParam0 /*4*/].f_1))
		{
			TEXT_LABEL_APPEND_STRING(&unk, str, 64);
			TEXT_LABEL_APPEND_STRING(&unk, func_525(Global_40.f_9479[iParam0 /*4*/].f_1), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(hash, "Texture", &unk);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "Visible", true);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "Visible", false);
		}
	
		if (func_524(Global_40.f_9479[iParam0 /*4*/].f_2))
		{
			TEXT_LABEL_APPEND_STRING(&unk9, str, 64);
			TEXT_LABEL_APPEND_STRING(&unk9, func_525(Global_40.f_9479[iParam0 /*4*/].f_2), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(hash2, "Texture", &unk9);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash2, "Visible", true);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash2, "Visible", false);
		}
	
		TEXT_LABEL_ASSIGN_STRING(&unk17, "", 64);
	
		if (Global_40.f_9479[iParam0 /*4*/].f_3 != -1)
		{
			TEXT_LABEL_APPEND_STRING(&unk17, str, 64);
			TEXT_LABEL_APPEND_STRING(&unk17, func_526(Global_40.f_9479[iParam0 /*4*/].f_3), 64);
			DATABINDING::_DATABINDING_ADD_DATA_STRING(hash3, "Texture", &unk17);
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash3, "Visible", true);
		}
		else
		{
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash3, "Visible", false);
		}
	}

	return;
}

BOOL func_364(int iParam0, int iParam1) // Position - 0x12794 Hash - 0x3BA7BEB4 ^0x3BA7BEB4
{
	if (!func_361(iParam0))
		return false;

	return Global_40.f_9479[iParam0 /*4*/] == iParam1;
}

void func_365(int iParam0, int iParam1) // Position - 0x127B7 Hash - 0xAF66E3EB ^0xAF66E3EB
{
	if (!func_361(iParam0))
		return;

	Global_40.f_9479[iParam0 /*4*/] = iParam1;
	return;
}

void func_366(Hash hParam0) // Position - 0x127D8 Hash - 0xBF830D7B ^0xC31B9D5D
{
	int num;
	int i;

	if (Global_1347702[hParam0 /*49*/].f_13 & 2 == 0)
	{
		num = 0;
	
		for (i = 0; i <= 4; i = i + 1)
		{
			if (func_527(Global_1347702[hParam0 /*49*/].f_29[i]))
				func_529(&num, func_528(Global_1347702[hParam0 /*49*/].f_29[i]));
		}
	
		if (num == 0)
			func_530(&(Global_1347702[hParam0 /*49*/].f_13), 2);
		else if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
			if (func_532(num, Global_1347702[hParam0 /*49*/].f_15, 1, Global_1347702[hParam0 /*49*/].f_27, func_531()))
				func_530(&(Global_1347702[hParam0 /*49*/].f_13), 2);
		else
			func_530(&(Global_1347702[hParam0 /*49*/].f_13), 2);
	}

	return;
}

BOOL func_367(int iParam0) // Position - 0x1289D Hash - 0xCF02205D ^0x2D99561F
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/];

	if (iParam0 < 0 || iParam0 >= 20001)
		return false;

	return Global_1058888.f_428[iParam0 /*2*/];
}

int func_368(BOOL bParam0) // Position - 0x128DB Hash - 0x8C5A395C ^0x61226A3F
{
	return BUILTIN::SHIFT_RIGHT(bParam0, 5) & 1023;
}

BOOL func_369(int iParam0) // Position - 0x128EE Hash - 0x82195F64 ^0x82195F64
{
	return iParam0 > -1 && iParam0 <= 81;
}

void func_370(Hash hParam0, BOOL bParam1) // Position - 0x12904 Hash - 0x13B9FDF3 ^0x834B1029
{
	if (!func_47(hParam0))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
	{
		func_533(&(Global_1347702[hParam0 /*49*/].f_14));
		func_534(&(Global_1347702[hParam0 /*49*/].f_13), 16);
		func_535(hParam0);
	
		if (!func_536(PLAYER::PLAYER_ID(), true, false, true) || Global_43891 || bParam1)
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1347702[hParam0 /*49*/].f_40, false);
			func_534(&(Global_1347702[hParam0 /*49*/].f_13), 4096);
			func_537(&(Global_1347702[hParam0 /*49*/].f_37));
		}
		else
		{
			func_538(hParam0, 16384);
			func_539(hParam0, true, func_371(hParam0));
		}
	}

	return;
}

Vector3 func_371(Hash hParam0) // Position - 0x129BA Hash - 0xC80D35E3 ^0xC80D35E3
{
	var unk;

	if (!func_47(hParam0))
		return 0f, 0f, 0f;

	unk = { 0f, 0f, 0f };

	if (func_540(hParam0, &unk))
		Global_1347702[hParam0 /*49*/].f_24 = { unk };

	return Global_1347702[hParam0 /*49*/].f_24;
}

void func_372(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x12A00 Hash - 0x8D139366 ^0xCA824361
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

	if (func_412(32768))
		return;

	if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
		return;

	Global_1347702[hParam0 /*49*/].f_38 = func_541(hParam0);

	if (!bParam5 && func_542(hParam0))
	{
		Global_1347702[hParam0 /*49*/].f_37 = MAP::BLIP_ADD_FOR_RADIUS(Global_1347702[hParam0 /*49*/].f_38, func_543(hParam0), Global_1347702[hParam0 /*49*/].f_18);
	
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
		func_544(8);
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

	func_545(hParam0);
	MAP::SET_BLIP_FLASH_TIMER(Global_1347702[hParam0 /*49*/].f_37, 64, hParam0);

	if (func_122() == -1)
	{
		func_546(hParam0);
		num = func_547(Global_40.f_4283);
	
		if (func_548(num) && func_549(Global_1888801[num /*35*/].f_13))
		{
			flag = true;
			flag2 = func_550(num);
		}
	
		if (func_551(hParam0, flag, num))
			func_552(Global_1347702[hParam0 /*49*/].f_15, flag2, flag, num);
	}

	if (bParam4)
		if (HUD::IS_RADAR_HIDDEN_BY_SCRIPT() || CAM::IS_SCREEN_FADED_OUT())
			return;

	if (Global_1347702[hParam0 /*49*/].f_13 & 1 == 0)
	{
		func_530(&(Global_1347702[hParam0 /*49*/].f_13), 1);
	
		if (!func_542(hParam0) || func_188(Global_1347702[hParam0 /*49*/].f_12, 1) || func_188(Global_1347702[hParam0 /*49*/].f_12, 512) || func_553(Global_1347702[hParam0 /*49*/].f_13, 2048))
			MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_URGENT_ALERT"));
	}

	if (Global_1347702[hParam0 /*49*/].f_13 & 32768 == 0)
		if (Global_1347702[hParam0 /*49*/].f_36 == joaat("blip_rc") && Global_1347702[hParam0 /*49*/].f_12 & 1 == 0 && Global_1347702[hParam0 /*49*/].f_12 & 2 != 0)
			MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_RADAR_EDGE_NEVER"));
		else
			func_530(&(Global_1347702[hParam0 /*49*/].f_13), 32768);

	if (Global_1347702[hParam0 /*49*/].f_12 & 8 != 0 && Global_40.f_490.f_402[hParam0] & 2 == 0)
	{
		if (func_554(hParam0))
		{
			if (hParam0 == 97)
				func_105(185, false);
			else
				func_105(186, true);
		}
		else
		{
			TEXT_LABEL_COPY(&unk, { Global_1347702[hParam0 /*49*/].f_3 }, 3);
			TEXT_LABEL_APPEND_STRING(&unk, "_FIRST", 24);
			sprite = Global_1347702[hParam0 /*49*/].f_37;
			Global_1347702[hParam0 /*49*/].f_40 = func_508(MISC::VAR_STRING(2, &unk, sprite), 10000, 0, 0, 0, true);
		}
	
		func_51(hParam0, 2);
	}

	return;
}

BOOL func_373(int iParam0, int iParam1) // Position - 0x12E57 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

int func_374(int iParam0) // Position - 0x12E66 Hash - 0xB1EC3C9 ^0x256D499C
{
	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_3;

	return 0;
}

BOOL func_375(Hash hParam0, Hash hParam1, BOOL bParam2) // Position - 0x12E85 Hash - 0xEAB06984 ^0xE37CC970
{
	var unk;
	int num;
	int i;
	Hash unlockHash;

	unk = 10;

	if (bParam2 && func_122() == false && !UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
		return false;

	if (!func_555(hParam0, hParam1, &unk, &num) || num < 1)
		return false;

	for (i = 0; i < num; i = i + 1)
	{
		unlockHash = unk[i];
	
		if (unlockHash == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
		{
			return true;
		}
	}

	return false;
}

BOOL func_376(Hash hParam0, Hash hParam1) // Position - 0x12F04 Hash - 0xD62E0B98 ^0xD62E0B98
{
	BOOL flag;
	int num;
	var unk;
	Hash unlockHash;
	int i;

	if (func_122() != -1)
		return false;

	unk = 10;

	if (func_555(hParam0, hParam1, &unk, &num))
	{
		for (i = 0; i < num; i = i + 1)
		{
			unlockHash = unk[i];
		
			if (unlockHash == 0)
			{
			}
			else
			{
				if (!flag)
					if (!UNLOCK::UNLOCK_IS_UNLOCKED(unlockHash))
						flag = true;
			
				UNLOCK::UNLOCK_SET_UNLOCKED(unlockHash, true);
			}
		}
	}

	return flag;
}

void func_377(Any* panParam0, var uParam1) // Position - 0x12F6D Hash - 0x84FDBFAA ^0x80D50078
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
		return;

	*panParam0 = 25;
	panParam0->f_1 = PLAYER::PLAYER_ID();
	panParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, panParam0, 5, 7, &uParam1);
	func_556(*panParam0);
	return;
}

BOOL func_378(Any* panParam0, int iParam1) // Position - 0x12FAB Hash - 0x560233C2 ^0x9009F283
{
	*panParam0 = Global_1165157.f_155;
	panParam0->f_2 = 1335336942;
	panParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

BOOL func_379(Any* panParam0) // Position - 0x12FD5 Hash - 0x424BB8C9 ^0x958D7B30
{
	panParam0->f_2 = 1037679264;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(panParam0->f_1), panParam0);
}

int func_380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, Vector3* pvParam6, BOOL bParam7) // Position - 0x12FF0 Hash - 0x75EEBFEF ^0x20737992
{
	uParam0.f_2 = iParam5;

	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(pvParam6, &uParam0))
		return 1;
	else
		bParam7;

	return 0;
}

void func_381(int iParam0, Hash hParam1, char* sParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, Volume volParam10, Volume volParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, BOOL bParam21, BOOL bParam22, Hash hParam23, Hash hParam24, BOOL bParam25) // Position - 0x13016 Hash - 0x1B501888 ^0x6546232B
{
	Prompt prompt;

	Global_1945188[iParam0 /*18*/].f_4 = hParam1;
	Global_1945188[iParam0 /*18*/] = iParam4;
	Global_1945188[iParam0 /*18*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1945188[iParam0 /*18*/].f_2 = iParam5;
	Global_1945188[iParam0 /*18*/].f_6 = { fParam6 };
	Global_1945188[iParam0 /*18*/].f_9 = fParam9;
	Global_1945188[iParam0 /*18*/].f_10 = volParam10;
	Global_1945188[iParam0 /*18*/].f_11 = volParam11;
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
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(prompt, volParam11);
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
	func_213(iParam0, true);
	func_214(iParam0, true);
	func_215(iParam0, 128);
	return;
}

void func_382(var uParam0) // Position - 0x132BC Hash - 0x1A373C3 ^0x5B75D90
{
	Hash hash;
	int i;
	BOOL flag;

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Newspaper");

	for (i = 0; i < 15; i = i + 1)
	{
		flag = true;
	
		if (uParam0->[i] == joaat("NONE") || uParam0->[i] == 0)
			flag = false;
	
		func_385(i, hash, flag, uParam0->[i]);
	}

	return;
}

void func_383(int iParam0) // Position - 0x13318 Hash - 0x8FF365FE ^0xD4724536
{
	if (!func_557(iParam0))
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

void func_384(var uParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x133CB Hash - 0x99C4924D ^0x634037CF
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

void func_385(int iParam0, Hash hParam1, BOOL bParam2, Hash hParam3) // Position - 0x13464 Hash - 0x41148AF9 ^0x11F28F70
{
	Hash hash;

	hash = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(hParam1, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "style", func_559(iParam0));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(hash, "isVisible", bParam2);

	if (bParam2)
		DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "text", hParam3);
	else
		DATABINDING::_DATABINDING_ADD_DATA_HASH(hash, "text", 0);

	return;
}

void func_386(Hash hParam0, var uParam1, var uParam2, Hash hParam3) // Position - 0x134B9 Hash - 0x4011D718 ^0x538697D5
{
	if (*uParam2 < 7)
	{
		uParam1->f_64[*uParam2] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_63, func_560(hParam0, *uParam2));
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "text", *uParam1);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_64[*uParam2], "style", hParam3);
		*uParam2 = *uParam2 + 1;
	}

	return;
}

int func_387(Hash hParam0, Hash hParam1, var uParam2, BOOL bParam3) // Position - 0x13516 Hash - 0x86539460 ^0x24468AF7
{
	var outData;

	if (!func_83(hParam0, 0))
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

struct<4> func_388(BOOL bParam0) // Position - 0x13564 Hash - 0x90FA0E77 ^0x3A1AB59A
{
	return func_272(joaat("character"), func_561(), joaat("SLOTID_NONE"), bParam0);
}

struct<4> func_389(BOOL bParam0) // Position - 0x13580 Hash - 0xBD79B8DD ^0x2443BBA9
{
	int num;

	num = func_241(bParam0);

	if (num == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223200))
			Global_1223200 = { func_272(923904168, func_388(bParam0), -740156546, bParam0) };
	
		return Global_1223200;
	}
	else if (num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223208))
			Global_1223208 = { func_272(923904168, func_388(bParam0), -740156546, false) };
	
		return Global_1223208;
	}

	return func_272(923904168, func_388(bParam0), -740156546, false);
}

BOOL func_390(Hash hParam0, BOOL bParam1) // Position - 0x13615 Hash - 0x62864AB ^0xBC339691
{
	if (func_119(hParam0) == 1779021115)
		return false;

	if (WEAPON::_IS_WEAPON_ONE_HANDED(hParam0))
		if (bParam1)
			return func_117(24);
		else
			return true;

	return false;
}

struct<4> func_391(BOOL bParam0) // Position - 0x1364E Hash - 0x8A689EFF ^0x60C7E77C
{
	int num;

	num = func_241(bParam0);

	if (num == 2 || num == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1223204))
			Global_1223204 = { func_272(271701509, func_388(bParam0), 12999093, false) };
	
		return Global_1223204;
	}

	return func_272(271701509, func_388(bParam0), 12999093, false);
}

BOOL func_392(Hash hParam0, Hash hParam1) // Position - 0x136B2 Hash - 0x1874093C ^0x7F0FACAB
{
	Hash outSlotId;
	Hash category;
	int i;
	int fitsSlotCount;

	if (hParam0 == 0 || hParam1 == 0)
		return false;

	category = func_119(hParam0);
	fitsSlotCount = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(category);

	for (i = 0; i < fitsSlotCount; i = i + 1)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(category, i, &outSlotId))
			if (ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(hParam0, hParam1, outSlotId))
				return true;
	}

	return false;
}

BOOL func_393(var uParam0, var uParam1, var uParam2, var uParam3, Any* panParam4, BOOL bParam5, BOOL bParam6) // Position - 0x13711 Hash - 0xC40FC7D1 ^0x18789FFF
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(func_241(bParam5), &uParam0, panParam4, !bParam6))
		return false;

	return true;
}

BOOL func_394(Hash hParam0) // Position - 0x13741 Hash - 0x1BC045DA ^0x469FDDE1
{
	if (func_562(hParam0, joaat("DEFAULT")) == 0)
		return false;

	return true;
}

int func_395(var uParam0) // Position - 0x1375D Hash - 0xE0B16A5D ^0x1D9BDFB4
{
	if (!func_83(*uParam0, 0))
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

BOOL func_396(Hash hParam0, var uParam1, BOOL bParam2) // Position - 0x137D9 Hash - 0xDE5D4AAC ^0xDB35B0F6
{
	var unk;
	Hash hash;
	var unk6;
	BOOL flag;
	int i;

	if (!func_83(hParam0, 0))
		return false;

	unk = { func_234(hParam0, false, true) };
	hash = joaat("SLOTID_WEAPON_0");
	unk6.f_9 = joaat("SLOTID_NONE");
	flag = false;

	for (i = 0; i < 4; i = i + 1)
	{
		hash = func_269(398 + i, 1);
	
		if (func_270(hParam0, &unk, hash, false))
		{
			flag = func_271(hParam0, &unk6, hash);
		
			if (bParam2 && flag || !flag)
			{
				*uParam1 = hash;
				return true;
			}
		}
	}

	return false;
}

int func_397(Hash hParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, BOOL bParam6) // Position - 0x1386D Hash - 0xD01EE834 ^0xC97ABD1E
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_83(hParam0, 0))
		return 0;

	guid = { func_272(hParam0, uParam1, hParam5, bParam6) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_241(bParam6), &guid, false);
	return inventoryItemCountWithGuid;
}

struct<18> func_398(Hash hParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x138B5 Hash - 0x84700F53 ^0xB9E7AA96
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

void func_399(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x13987 Hash - 0x281CBA7C ^0xED4677E6
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		uParam0->f_9 = { uParam1 };

	return;
}

BOOL func_400(Any* panParam0, var uParam1, int* piParam2, BOOL bParam3) // Position - 0x139A2 Hash - 0xA09A22CB ^0x2B47F617
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_241(bParam3), panParam0, piParam2);

	if (*uParam1 >= 0)
		return true;

	return false;
}

int func_401(int iParam0) // Position - 0x139C7 Hash - 0x92F940EE ^0x92F940EE
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

float func_402(int iParam0) // Position - 0x13A1B Hash - 0xBAFBA316 ^0xBAFBA316
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
			return func_563(iParam0);
	
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
			return func_563(iParam0);
	
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
			return func_563(iParam0);
	
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

BOOL func_403(int iParam0) // Position - 0x13CE9 Hash - 0x2B2275C1 ^0x2B2275C1
{
	switch (iParam0)
	{
		case 0:
			return func_117(18);
	
		case 1:
			return func_117(19);
	
		case 2:
			return func_117(20);
	
		default:
		
	}

	return true;
}

int func_404(int iParam0) // Position - 0x13D27 Hash - 0xBCE241D5 ^0x339AC097
{
	return func_564(Global_40.f_11095.f_11[iParam0]);
}

void func_405(int iParam0, float fParam1, BOOL bParam2) // Position - 0x13D3F Hash - 0xFC76D814 ^0x758E9A9F
{
	int num;
	float num2;
	int num3;
	int num4;

	if (func_122() != -1)
		return;

	if (Global_1347477.f_117 || !func_117(31))
		return;

	num = func_404(iParam0);
	num2 = Global_40.f_11095.f_11[iParam0];

	if (num >= 7)
		return;

	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	num3 = func_404(iParam0);

	if (func_565(iParam0) && func_566(iParam0))
	{
		if (!bParam2)
		{
			num4 = func_567(num2, fParam1);
		
			if (fParam1 > (float)func_568(iParam0) && num3 > num || num4 != 0)
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (num3 > num)
						func_105(func_569(iParam0), false);
				
					func_570(iParam0, num3, num4);
					func_571(iParam0, 7000);
				}
			
				Global_1347477.f_8 = 1;
			}
		}
	}

	Global_1347477.f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
	return;
}

char* func_406(int iParam0) // Position - 0x13E41 Hash - 0xEB40D7A4 ^0x7916B58B
{
	return "PLAYER_RPG_XP_GAIN";
}

Hash func_407(int iParam0) // Position - 0x13E4D Hash - 0x21FAF347 ^0xAF7D8F21
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

void func_408(Hash hParam0, int iParam1) // Position - 0x13E88 Hash - 0x53A96DDB ^0xB6A79257
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

BOOL func_409(int iParam0, int iParam1) // Position - 0x13E9B Hash - 0xDD376ADC ^0x3FEE2146
{
	if (func_122() != -1)
		return MISC::IS_BIT_SET(Global_36638.f_1444[iParam0], iParam1);

	return MISC::IS_BIT_SET(Global_40.f_7832[iParam0], iParam1);
}

BOOL func_410(int iParam0) // Position - 0x13ECE Hash - 0x3E25647A ^0x3E25647A
{
	if (func_122() != -1)
		if (func_334(iParam0, 4))
			return false;
	else if (func_334(iParam0, 2))
		return false;

	return true;
}

BOOL func_411(int iParam0) // Position - 0x13EFE Hash - 0xF83B91D5 ^0xBF549DB5
{
	int i;
	int cloudTimeAsInt;
	int num;
	int num2;

	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (!func_334(iParam0, 65536) && !func_334(iParam0, 32768))
		return false;

	for (i = 0; i < Global_40.f_7756; i = i + 1)
	{
		if (Global_40.f_7756[i /*3*/].f_2 == iParam0)
		{
			num2 = 3;
		
			if (func_334(iParam0, 131072))
				num2 = 2;
		
			num = cloudTimeAsInt - Global_40.f_7756[i /*3*/];
		
			if (Global_40.f_7756[i /*3*/].f_1 >= num2)
				return true;
		
			if (num < 1800 && func_334(iParam0, 32768))
				return true;
		}
	}

	return false;
}

BOOL func_412(int iParam0) // Position - 0x13FAA Hash - 0xC67CC87B ^0xCFDC16A8
{
	return Global_1572864.f_3 && iParam0 != false;
}

BOOL func_413() // Position - 0x13FBD Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1905944.f_5694;
}

BOOL func_414(int iParam0, var uParam1) // Position - 0x13FCC Hash - 0xDBBC0B25 ^0xDBBC0B25
{
	if (!func_572(iParam0))
		return false;

	*uParam1 = Global_1914270[iParam0];

	if (*uParam1 == 0)
		return false;

	return true;
}

int func_415() // Position - 0x13FF9 Hash - 0x923C8306 ^0x923C8306
{
	return func_573(Global_40.f_12019);
}

int func_416() // Position - 0x1400D Hash - 0x5DD72DA6 ^0x5DD72DA6
{
	int num;
	int i;
	Hash hash;

	num = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		hash = func_250(i);
	
		if (func_61(hash, 1, false) || func_422(func_421(hash)))
			num = num + 1;
	}

	return num;
}

int func_417() // Position - 0x14056 Hash - 0x55CBD06D ^0xA496A325
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 30; i = i + 1)
	{
		if (func_574(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, joaat("dino_bones"), 0)))
			num = num + 1;
	}

	return num;
}

int func_418() // Position - 0x1408F Hash - 0x73582AAF ^0xDAB74775
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 14; i = i + 1)
	{
		if (func_427(COLLECTION::_COLLECTABLE_GET_COLLECTABLE_ITEM_HASH(i, 1995362678, 0)))
			num = num + 1;
	}

	return num;
}

int func_419() // Position - 0x140C8 Hash - 0xCF63D31C ^0x129791
{
	return COLLECTION::_COLLECTABLE_CATEGORY_GET_NUM_TURNED_IN(joaat("rock_carvings"), 0);
}

int func_420(int iParam0) // Position - 0x140DA Hash - 0xB8EC44B7 ^0x693BD882
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

BOOL func_421(Hash hParam0) // Position - 0x14193 Hash - 0x6931DCCD ^0x96AB98B4
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

BOOL func_422(BOOL bParam0) // Position - 0x14229 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12019 && bParam0 != false;
}

char* func_423(int iParam0) // Position - 0x1423C Hash - 0x21CE226B ^0xFE21EA70
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

int func_424(int iParam0) // Position - 0x14277 Hash - 0xDD8DC1C4 ^0xDD8DC1C4
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

int func_425(int iParam0) // Position - 0x142BC Hash - 0x499196F8 ^0x499196F8
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

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0(Hash hParam0) // Position - 0x14305 Hash - 0xA17D549C ^0xAE3EE571
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

BOOL func_427(Hash hParam0) // Position - 0x14413 Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0(Hash hParam0) // Position - 0x14423 Hash - 0xA17D549C ^0x8C943CF0
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

char* func_429(int iParam0) // Position - 0x144E0 Hash - 0x21CE226B ^0xE06FD201
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

BOOL func_430(Hash hParam0) // Position - 0x1451B Hash - 0x5C411CF ^0x5C411CF
{
	if (func_575(hParam0) && func_61(hParam0, 1, false))
		return 1;
	else if (func_576(hParam0) && func_577(hParam0))
		return 1;

	return 0;
}

char* func_431(Hash hParam0) // Position - 0x14559 Hash - 0x9E507475 ^0x6B452D62
{
	if (!func_83(hParam0, 0))
		return "";

	return HUD::GET_STRING_FROM_HASH_KEY(func_165(hParam0));
}

int func_432(int iParam0) // Position - 0x1457D Hash - 0x6AA34421 ^0x2D6E2AEF
{
	return Global_1898164.f_1[iParam0 /*5*/];
}

int func_433(int iParam0) // Position - 0x1458F Hash - 0x1B04F1B9 ^0x733D143B
{
	return Global_1898164.f_1[iParam0 /*5*/].f_2;
}

void func_434(BOOL bParam0) // Position - 0x145A3 Hash - 0xB584A39F ^0xFC4CA802
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

void func_435(int iParam0) // Position - 0x145E1 Hash - 0x2EDDC601 ^0xD5F96979
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

void func_436(BOOL bParam0) // Position - 0x1464F Hash - 0x731EA76E ^0xD49C9ADF
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
	return;
}

void func_437(BOOL bParam0) // Position - 0x14689 Hash - 0x731EA76E ^0xCC0310C8
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
	return;
}

void func_438(BOOL bParam0) // Position - 0x146C3 Hash - 0x731EA76E ^0xC0281252
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
		return;

	ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35);
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
	return;
}

void func_439(BOOL bParam0) // Position - 0x146FD Hash - 0x6ED794F8 ^0x98C24F9E
{
	Hash hash;

	hash = 398076311;

	if (bParam0)
		HUD::_ENABLE_HUD_CONTEXT(hash);
	else
		HUD::_DISABLE_HUD_CONTEXT(hash);

	return;
}

void func_440(BOOL bParam0) // Position - 0x14720 Hash - 0x15EA8A2D ^0x6EE74130
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

void func_441(BOOL bParam0) // Position - 0x14762 Hash - 0xBAD014C9 ^0x3FDE3E28
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

Hash func_442(int iParam0) // Position - 0x147A4 Hash - 0x5B34E283 ^0x820CF35B
{
	if (iParam0 == -358215195)
		return 0;

	return Global_1946054.f_1497.f_1[func_320(iParam0, 1) /*3*/];
}

void func_443() // Position - 0x147CC Hash - 0x68C5513E ^0xDCD966E2
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_578();
		UNLOCK::UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		func_123(joaat("weapon_revolver_cattleman_john"));
		func_171(joaat("weapon_revolver_cattleman_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_revolver_cattleman_john"), true, 2, false, false);
		func_123(joaat("weapon_melee_knife_john"));
		func_171(joaat("weapon_melee_knife_john"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("weapon_melee_knife_john"), true, 4, false, false);
	}

	return;
}

BOOL func_444(Hash hParam0, Any* panParam1, Any* panParam2, Hash hParam3) // Position - 0x14844 Hash - 0xE51043B0 ^0xB0CA6EA5
{
	int inventoryId;

	inventoryId = func_241(false);
	*panParam1 = { func_272(hParam0, func_389(false), hParam3, false) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam1))
		return false;

	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(inventoryId, panParam1, panParam2, 22, 1))
		return false;

	return true;
}

BOOL func_445(Hash hParam0) // Position - 0x14889 Hash - 0xC561A1F5 ^0xE0EE3BCE
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(hParam0))
		return true;

	return false;
}

int func_446(int iParam0, int iParam1) // Position - 0x1489F Hash - 0x20FBB09E ^0x20FBB09E
{
	if (iParam0 > iParam1)
		return iParam1;

	return iParam0;
}

int func_447() // Position - 0x148B5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899515;
}

void func_448(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7) // Position - 0x148C1 Hash - 0x898C409B ^0x898C409B
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_579(*uParam0);
	i = func_580(*uParam0);
	num2 = func_581(*uParam0);
	j = func_582(*uParam0);
	k = func_583(*uParam0);
	l = func_584(*uParam0);

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

	for (m = func_585(i, num); num2 > m; m = func_585(i, num))
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

	func_586(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_449(Hash hParam0) // Position - 0x14A49 Hash - 0xD6E12BEB ^0x5BC6EDF6
{
	return WEAPON::IS_WEAPON_BOW(hParam0);
}

int func_450(Hash hParam0) // Position - 0x14A57 Hash - 0xD5A0FAAB ^0x54F422C9
{
	var unk;

	unk = { func_234(hParam0, true, false) };
	return func_319(unk.f_4);
}

int func_451(Hash hParam0) // Position - 0x14A73 Hash - 0xAD4E1DF8 ^0x7BAA459F
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

BOOL func_452(Hash hParam0, var uParam1) // Position - 0x14BC4 Hash - 0xE98237F5 ^0x5BEBEE9E
{
	Hash hash;
	int num;

	num = func_320(func_587(hParam0), 1);

	if (num >= 39)
		return false;

	if (Global_1946054.f_1497.f_1[num /*3*/] != 0 && Global_1946054.f_1497.f_1[num /*3*/] != Global_1946054.f_57[num /*11*/])
	{
		hash = Global_1946054.f_1497.f_1[num /*3*/];
	
		if (func_119(hash) == hParam0)
		{
			*uParam1 = hash;
			return true;
		}
	}

	*uParam1 = 0;
	return false;
}

int func_453(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14C3B Hash - 0xFB14E414 ^0x5DDCA43D
{
	int num;

	if (hParam0 == Global_1946054.f_57[func_320(iParam1, 1) /*11*/])
		return 0;

	num = 0;

	if (!func_324(524288))
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

BOOL func_454(Hash hParam0) // Position - 0x14CA6 Hash - 0xDEBEF6D4 ^0xDEBEF6D4
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

int func_455(int iParam0) // Position - 0x14CE9 Hash - 0x73B9D562 ^0xF1D88D6F
{
	int num;

	if (Global_1572887.f_12 == -1)
		return Global_12106[iParam0 /*7*/].f_1;

	num = func_588(iParam0);

	if (num < 0)
		return 0;

	return Global_1058888.f_40431.f_1[num /*2*/].f_1;
}

Hash func_456(int iParam0) // Position - 0x14D2A Hash - 0xB8EC44B7 ^0xD4FF48D5
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

int func_457(Hash hParam0) // Position - 0x14EA7 Hash - 0xEF74E9FE ^0xEF74E9FE
{
	return func_589(hParam0, -1);
}

BOOL func_458(int iParam0, BOOL bParam1) // Position - 0x14EB6 Hash - 0x10DE2364 ^0x10DE2364
{
	return func_590(func_447(), iParam0, bParam1);
}

BOOL func_459() // Position - 0x14ECA Hash - 0x35D5C88E ^0x2371BCA7
{
	if (func_281())
		return DLC::_GET_SPECIAL_EDITION_CASH_CAMP_BONUS_ENABLED();

	return false;
}

void func_460(int iParam0) // Position - 0x14EE1 Hash - 0xB9BB46A1 ^0xB9BB46A1
{
	if (iParam0 <= 0)
		return;

	if (Global_40.f_4283.f_325 + iParam0 < 0)
		return;

	func_591(Global_40.f_4283.f_325 + iParam0);
	return;
}

void func_461(int iParam0, const char* sParam1, int iParam2) // Position - 0x14F15 Hash - 0x56940320 ^0x967A7AC5
{
	if (iParam0 == 0)
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		sParam1 = "FEED_GANG_MONEY_EARN";

	if (func_459())
		func_352(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings_special"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);
	else
		func_352(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", joaat("itemtype_gang_savings"), 0, joaat("COLOR_GOLD"), 0, 0, 0, true);

	return;
}

BOOL func_462(Hash hParam0) // Position - 0x14F81 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

void func_463(int iParam0) // Position - 0x14F91 Hash - 0xE2FB6CC5 ^0x3F95ACE7
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_592(iParam0, 1);
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

void func_464(int iParam0) // Position - 0x1502A Hash - 0xE2FB6CC5 ^0x5A2D5EFE
{
	int num;
	int num2;
	int offset;
	int num3;

	num = func_592(iParam0, 1);
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

void func_465() // Position - 0x150B0 Hash - 0x480C4EB2 ^0xAA61B05F
{
	func_464(-939420910);
	func_464(-1187950766);
	func_464(356365161);
	func_464(753127042);
	func_464(-2038424081);
	func_464(1884271742);
	func_464(459290420);
	return;
}

void func_466() // Position - 0x150F7 Hash - 0xD73EDD4 ^0xB34A84FD
{
	func_464(704802028);
	func_464(588987611);
	func_464(2008888900);
	func_464(1649996811);
	func_464(227918160);
	func_464(168171957);
	func_464(1193080109);
	func_464(-491981251);
	func_464(-639037538);
	func_464(-618620429);
	return;
}

BOOL func_467(int iParam0) // Position - 0x15159 Hash - 0xBF89485 ^0x62E162D4
{
	int num;
	int num2;
	int offset;

	num = func_592(iParam0, 1);
	num2 = num / 31;
	offset = num % 31;

	if (Global_1572887.f_12 == -1)
		return MISC::IS_BIT_SET(Global_40.f_283[num2], offset);

	return MISC::IS_BIT_SET(Global_1058888.f_40497[num2], offset);
}

BOOL func_468(Hash hParam0) // Position - 0x151A8 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_469(Hash hParam0) // Position - 0x151B8 Hash - 0xEAAB2463 ^0xEAAB2463
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

void func_470(int iParam0) // Position - 0x151FD Hash - 0x25D46568 ^0x96CB7C96
{
	Global_40.f_12019.f_43 = Global_40.f_12019.f_43 || iParam0;
	return;
}

BOOL func_471(Hash hParam0) // Position - 0x15218 Hash - 0xC5BCA0B1 ^0xC3FDA847
{
	return COLLECTION::_COLLECTABLE_GET_NUM_FOUND(hParam0) > 0;
}

int func_472(int iParam0, int iParam1) // Position - 0x15228 Hash - 0xE1D12727 ^0xA46110B3
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

void func_473() // Position - 0x15477 Hash - 0xAC3F2945 ^0x4C166717
{
	int i;

	Global_1946054.f_1378 = Global_1946054.f_1497;

	for (i = 0; i < 39; i = i + 1)
	{
		Global_1946054.f_1378.f_1[i /*3*/] = { Global_1946054.f_1497.f_1[i /*3*/] };
	}

	return;
}

void func_474(int iParam0) // Position - 0x154BE Hash - 0x65A082AE ^0x65A082AE
{
	func_481(iParam0, 8, 6);
	return;
}

void func_475(int iParam0) // Position - 0x154CF Hash - 0x20214C72 ^0x20214C72
{
	func_593(&(Global_1946054.f_2589), iParam0);
	return;
}

void func_476(int iParam0, int iParam1) // Position - 0x154E4 Hash - 0x2AD6C09E ^0x2AD6C09E
{
	func_594(&(Global_1946054.f_2589), iParam0, iParam1);
	return;
}

void func_477(Hash hParam0, int iParam1, int iParam2) // Position - 0x154FB Hash - 0xDEDED6D0 ^0xA620FD73
{
	hParam0->f_2 = hParam0->f_2 || iParam1;
	return;
}

void func_478(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1550E Hash - 0xC0B7C171 ^0x28B721CF
{
	int num;
	int num2;
	Hash hash;
	int num3;

	num2 = 12;
	hash = func_119(uParam0->f_1[iParam2 /*3*/]);
	num3 = 0;

	if (bParam3)
		num3 = 3;

	if (func_595(iParam2, 65536) && uParam0->f_1[num2 /*3*/] == -452402570)
	{
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_476(num2, num3);
	}

	if (func_344(-1586649372) && func_595(iParam2, 524288))
	{
		num2 = 33;
		uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
		uParam0->f_1[num2 /*3*/].f_1 = 0;
	
		if (bParam4)
			func_476(num2, num3);
	}

	switch (hash)
	{
		case -1719060085:
		case -852381396:
		case 153430294:
		case 1033860813:
		case 1096747416:
		case 1282123855:
			func_596(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case -1423861687:
			func_596(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			num2 = 16;
		
			if (uParam0->f_1[num2 /*3*/].f_1 == joaat("base"))
			{
				uParam0->f_1[num2 /*3*/].f_1 = -1539589426;
			
				if (bParam4)
					func_476(num2, num3);
			}
		
			if (uParam0->f_1[num2 /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/].f_1 = 1334603721;
			
				if (bParam4)
					func_476(num2, num3);
			}
			break;
	
		case -923693316:
			num2 = 36;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_476(num2, num3);
			}
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_454(Global_1946054.f_1497.f_1[num2 /*3*/]) || func_31(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_476(num2, num3);
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
						func_476(num2, num3);
				}
			
				num2 = 38;
			
				if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_476(num2, num3);
				}
			
				num2 = 35;
			
				if (-923693316 == func_119(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_476(num2, num3);
				}
			}
			else
			{
				num2 = 35;
			
				if (func_454(hParam1) && uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/] && -923693316 == func_119(uParam0->f_1[num2 /*3*/]))
				{
					uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
					uParam0->f_1[num2 /*3*/].f_1 = 0;
				
					if (bParam4)
						func_476(num2, num3);
				}
			}
			break;
	
		case -497931013:
			func_596(uParam0, true & bParam4, false, true, bParam3);
			break;
	
		case 688587926:
			func_596(uParam0, false, true & bParam4, true & bParam4, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] == Global_1946054.f_57[num2 /*11*/])
				break;
		
			num = 16;
		
			if (uParam0->f_1[num /*3*/].f_1 == joaat("base") || uParam0->f_1[num /*3*/].f_1 == 1530758430)
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_476(num2, num3);
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
						func_476(num2, num3);
				}
			}
		
			func_596(uParam0, true & bParam4, true & bParam4, true & bParam4, bParam3);
			break;
	
		case 1769055947:
			num2 = 36;
		
			if (uParam0->f_1[iParam2 /*3*/] != Global_1946054.f_57[iParam2 /*11*/] && func_31(Global_1946054.f_1497.f_1[num2 /*3*/], -1638171711))
			{
				uParam0->f_1[iParam2 /*3*/] = Global_1946054.f_57[iParam2 /*11*/];
				uParam0->f_1[iParam2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_476(num2, num3);
			}
			break;
	
		case 1868067663:
			func_596(uParam0, true & bParam4, true & bParam4, false, bParam3);
			num2 = 22;
		
			if (uParam0->f_1[num2 /*3*/] != Global_1946054.f_57[num2 /*11*/])
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_476(num2, num3);
			}
			break;
	}

	switch (func_119(hParam1))
	{
		case -525676072:
			num2 = 12;
		
			if (81053684 == func_119(uParam0->f_1[num2 /*3*/]) || func_31(uParam0->f_1[num2 /*3*/], 866047851))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_476(num2, num3);
			}
			break;
	
		case 81053684:
			num2 = 10;
		
			if (-525676072 == func_119(uParam0->f_1[num2 /*3*/]))
			{
				uParam0->f_1[num2 /*3*/] = Global_1946054.f_57[num2 /*11*/];
				uParam0->f_1[num2 /*3*/].f_1 = 0;
			
				if (bParam4)
					func_476(num2, num3);
			}
			break;
	}

	return;
}

Hash func_479(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3) // Position - 0x15B52 Hash - 0x68649B2F ^0x68649B2F
{
	BOOL flag;

	flag = func_597(0);

	if (hParam2 != 0 && func_598(hParam0, flag, hParam2, bParam3) != -1)
		return hParam2;

	if (func_599(hParam0, func_472(iParam1, 1), &hParam2))
		return hParam2;

	return 0;
}

void func_480(var uParam0, BOOL bParam1, int iParam2) // Position - 0x15B98 Hash - 0xE06CF505 ^0xBC49746F
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

	flag = func_122() != -1;
	flag2 = func_597(0);

	if (func_324(32768))
		num2 = num2 + 1;

	for (i = 0; i < 39; i = i + 1)
	{
		num = Global_1946054.f_57.f_430[i];
	
		if (num <= -1 || num >= 39)
		{
		}
		else
		{
			num5 = func_472(num, 1);
		
			if (func_600(num5, 8))
			{
			}
			else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
			{
			}
			else if (func_600(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
			{
			}
			else
			{
				num4 = func_453(uParam0->f_1[num /*3*/], num5, flag2, flag);
			
				if (num2 + num4 > 31)
				{
					num3 = i;
					break;
				}
			
				num2 = num2 + num4;
			}
		}
	}

	num6 = func_601(uParam0);

	if (num3 > 0)
	{
		if (!func_324(524288))
		{
			func_483(524288);
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
				num5 = func_472(num, 1);
			
				if (func_600(num5, 8))
				{
				}
				else if (Global_1946054.f_57[num /*11*/].f_2[0] == joaat("MISSING") || uParam0->f_1[num /*3*/] == 0)
				{
				}
				else if (func_600(num5, 6) || uParam0->f_1[num /*3*/] == Global_1946054.f_57[num /*11*/])
				{
				}
				else
				{
					num4 = func_453(uParam0->f_1[num /*3*/], num5, flag2, flag);
				
					if (num2 + num4 > 31)
					{
						uParam0->f_1[num /*3*/] = Global_1946054.f_57[num /*11*/];
						uParam0->f_1[num /*3*/].f_1 = 0;
					
						if (bParam1)
							func_476(num, iParam2);
					}
				
					num2 = num2 + num4;
				}
			}
		}
	}

	if (num2 + num6 < 31)
		func_486(524288);

	return;
}

void func_481(int iParam0, int iParam1, int iParam2) // Position - 0x15DB5 Hash - 0x8A858A95 ^0xC4492E92
{
	Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 = Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 - Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 && iParam1;
	return;
}

void func_482(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x15DF4 Hash - 0x234E957C ^0xF69883
{
	int i;

	if (*iParam0 <= 0)
		return;

	for (i = 0; i < *iParam0; i = i + 1)
	{
		func_602(iParam0->f_2[i /*2*/], bParam1, bParam2);
	}

	if (func_122() == -1)
	{
		if (Global_40.f_7729 != 0 || !func_603(2, Global_26796.f_776) || Global_1946054.f_1497 != func_505(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096;
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] = Global_40.f_7157[Global_40.f_7729 /*3*/] | 4096;
				Global_1946054.f_1497 = func_505(Global_40.f_7729);
				Global_1946054.f_1378 = func_505(Global_40.f_7729);
				Global_26796.f_776 = 0;
				func_604(-1, false, 6);
			}
		}
	}

	if (bParam3)
		func_605(false, true);

	return;
}

void func_483(BOOL bParam0) // Position - 0x15F13 Hash - 0xB6AD8D7C ^0xB6AD8D7C
{
	Global_1946054 = Global_1946054 || bParam0;
	return;
}

void func_484(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x15F26 Hash - 0x21CB5355 ^0x21CB5355
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
		
			if (func_606(iParam0))
			{
				for (i = 0; i < Global_1946054.f_850; i = i + 1)
				{
					num = (Global_1946054.f_855 + i) % 25;
				
					if (Global_1946054.f_668[num /*4*/] == iParam0 && Global_1946054.f_668[num /*4*/].f_1 == iParam0.f_1 && Global_1946054.f_668[num /*4*/].f_2 == iParam0.f_2)
						return;
				}
			}
		
			func_607(iParam0);
			Global_1946054.f_668[Global_1946054.f_856 /*4*/] = { iParam0 };
			Global_1946054.f_850 = Global_1946054.f_850 + 1;
			Global_1946054.f_856 = (Global_1946054.f_856 + 1) % 25;
			func_483(8);
			break;
	
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946054.f_851 >= 25)
				return;
		
			if (func_606(iParam0))
				return;
		
			func_607(iParam0);
			Global_1946054.f_567[Global_1946054.f_851 /*4*/] = { iParam0 };
			Global_1946054.f_851 = Global_1946054.f_851 + 1;
			func_483(8);
			break;
	
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_328(iParam0, iParam0.f_1, iParam0.f_2);
			break;
	}

	return;
}

void func_485(var uParam0) // Position - 0x16132 Hash - 0x7C3D914C ^0xB1998A7B
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

void func_486(BOOL bParam0) // Position - 0x16190 Hash - 0xBBD3AFCB ^0xBBD3AFCB
{
	Global_1946054 = Global_1946054 - Global_1946054 && bParam0;
	return;
}

BOOL func_487(int iParam0, int iParam1) // Position - 0x161A8 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_488(int iParam0, var uParam1, var uParam2, var uParam3) // Position - 0x161B7 Hash - 0x1074C30B ^0x1074C30B
{
	int i;
	int num;

	if (Global_1946054.f_852 >= 20)
		return;

	if (func_606(iParam0))
	{
		for (i = 0; i < Global_1946054.f_852; i = i + 1)
		{
			num = (Global_1946054.f_853 + i) % 20;
		
			if (Global_1946054.f_769[num /*4*/] == iParam0 && Global_1946054.f_769[num /*4*/].f_2 == iParam0.f_2 && Global_1946054.f_769[num /*4*/].f_3 == iParam0.f_3 && Global_1946054.f_769[num /*4*/].f_1 == iParam0.f_1)
				return;
		
			if (Global_1946054.f_769[num /*4*/] == 34 && func_606(20))
				return;
		}
	}

	func_607(iParam0);
	Global_1946054.f_769[Global_1946054.f_854 /*4*/] = { iParam0 };
	Global_1946054.f_852 = Global_1946054.f_852 + 1;
	Global_1946054.f_854 = (Global_1946054.f_854 + 1) % 20;
	func_483(8);
	return;
}

BOOL func_489() // Position - 0x162BB Hash - 0xAD9852FF ^0x906C33C9
{
	if (Global_1572887.f_12 != -1)
		return false;

	return Global_1347477.f_203;
}

float func_490(int iParam0) // Position - 0x162D7 Hash - 0xB9E2D182 ^0xB9E2D182
{
	return Global_40.f_11095[iParam0];
}

float func_491() // Position - 0x162E9 Hash - 0x85B5D708 ^0x4351E399
{
	float num;
	int num2;

	num = func_608(13);
	num2 = func_609(num);

	if (num2 == 0)
		return 0.15f;

	if (num2 == 10 || num2 == -10)
		return -0.25f;

	return 0f;
}

float func_492() // Position - 0x1632C Hash - 0x82C14FCE ^0x536BA17
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
		return 0.25f;

	return 0f;
}

float func_493() // Position - 0x16347 Hash - 0xC978DB91 ^0xB55E9465
{
	if (func_281())
		if (DLC::_GET_SPECIAL_EDITION_CORE_STATS_BONUS_ENABLED())
			return 0.2f;

	return 0f;
}

float func_494() // Position - 0x16366 Hash - 0xA5EDFE9E ^0x34BC3E89
{
	if (Global_40.f_39 == joaat("player_three"))
		return 0f;

	if (Global_40.f_11095.f_67 >= 9)
		return -0.2f;

	if (Global_40.f_11095.f_67 >= 7)
		return -0.05f;

	return 0f;
}

var func_495() // Position - 0x163A8 Hash - 0x4228A1C2 ^0x5D82C45B
{
	return Global_1954815.f_3;
}

void func_496(int iParam0, int iParam1, BOOL bParam2) // Position - 0x163B6 Hash - 0x99040EF7 ^0xDDBC8DE3
{
	char* str;

	str = func_610(iParam0, 1, false, false);
	str = MISC::VAR_STRING(2, str, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1954819.f_5.f_2[iParam0 /*36*/].f_12[1], str);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1954819.f_5.f_2[iParam0 /*36*/].f_16[1], bParam2);
	return;
}

void func_497(int iParam0, float fParam1, BOOL bParam2) // Position - 0x16402 Hash - 0x96E8475F ^0x25D18765
{
	char* str;

	str = func_610(iParam0, 2, false, false);
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

float func_498(float fParam0, float fParam1, float fParam2) // Position - 0x16548 Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

BOOL func_499() // Position - 0x1656F Hash - 0x8E60F5AE ^0x8E60F5AE
{
	return func_608(12) <= -99f;
}

BOOL func_500() // Position - 0x16583 Hash - 0xAF9CDCF ^0xAF9CDCF
{
	return func_608(12) >= 99f;
}

int func_501() // Position - 0x16597 Hash - 0x16CCC184 ^0xC9058B80
{
	int i;
	Hash hash;
	int num;

	num = 0;

	for (i = 0; i < Global_1946054.f_2657.f_19; i = i + 1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_119(hash) == -999503751)
			if (func_611() != hash)
				num = num + 1;
	}

	return num;
}

BOOL func_502(int iParam0) // Position - 0x165E8 Hash - 0xFE3170D1 ^0xFE3170D1
{
	if (!func_339(iParam0))
		return false;

	if (func_506(iParam0, 4))
		return true;

	return false;
}

BOOL func_503(int iParam0) // Position - 0x1660D Hash - 0x2EF48521 ^0x2EF48521
{
	if (!func_339(iParam0))
		return false;

	if (func_506(iParam0, 2))
		return true;

	return false;
}

void func_504(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16632 Hash - 0xC49CD38D ^0xC49CD38D
{
	if (!func_339(iParam0))
		return;

	if (!func_503(iParam0))
	{
		func_509(iParam0, 2);
	
		if (bParam2)
			if (!func_50(0, false, true))
				func_245(true, 4);
	
		if (!func_507() && !bParam1 && !func_50(0, false, true))
			func_508(MISC::VAR_STRING(10, "OUT_JOURN_ADD", func_612(iParam0)), 10000, 0, 0, 0, true);
	}

	return;
}

Hash func_505(int iParam0) // Position - 0x166A7 Hash - 0xB8EC44B7 ^0xE877E9C4
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

BOOL func_506(int iParam0, BOOL bParam1) // Position - 0x16BDC Hash - 0xA750EBE5 ^0xA750EBE5
{
	if (!func_339(iParam0))
		return false;

	return Global_40.f_7157[iParam0 /*3*/] && bParam1 != false;
}

BOOL func_507() // Position - 0x16C01 Hash - 0xBA23ABC ^0x93F0A0D4
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return currentMessage != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(currentMessage) == 4;
}

int func_508(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x16C21 Hash - 0x8EBD6187 ^0x42F0F0AC
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

void func_509(int iParam0, BOOL bParam1) // Position - 0x16C5C Hash - 0x9A8E96E6 ^0x9A8E96E6
{
	if (!func_339(iParam0))
		return;

	Global_40.f_7157[iParam0 /*3*/] = Global_40.f_7157[iParam0 /*3*/] || bParam1;
	return;
}

int func_510(int iParam0, BOOL bParam1) // Position - 0x16C88 Hash - 0x14DDA26B ^0xFFF4A8D0
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

void func_511(Hash hParam0, BOOL bParam1) // Position - 0x16D2B Hash - 0xC1237140 ^0xC1237140
{
	int num;

	num = func_613(hParam0);

	switch (num)
	{
		case 0:
			if (bParam1)
				func_118(50);
			else
				func_118(48);
			break;
	
		case 1:
			if (bParam1)
				func_118(51);
			else
				func_118(49);
			break;
	
		case 2:
			if (bParam1)
			{
				if (!func_614(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_152();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
				func_152();
			}
			break;
	
		case 3:
			func_118(24);
		
			if (bParam1)
			{
				if (!func_614(num))
				{
					Global_40.f_11095.f_60 = Global_40.f_11095.f_60 + 0.1f;
					func_152();
				}
			}
			break;
	}

	return;
}

void func_512(int iParam0) // Position - 0x16E0A Hash - 0x562E9379 ^0x562E9379
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_615(0))
				num = num + 1;
		
			if (func_615(2))
				num = num + 1;
		
			if (func_615(4))
				num = num + 1;
		
			if (!func_616(16))
			{
				if (num == 1)
				{
					func_617();
					func_105(456, true);
					func_618(16);
				}
			}
		
			if (!func_616(32))
			{
				if (num >= 3)
				{
					func_617();
					func_105(456, true);
					func_618(32);
				}
			}
			break;
	
		case 1:
		case 3:
		case 7:
			if (func_615(1))
				num = num + 1;
		
			if (func_615(3))
				num = num + 1;
		
			if (func_615(7))
				num = num + 1;
		
			if (!func_616(1))
			{
				if (num == 1)
				{
					func_619();
					func_105(457, true);
					func_618(1);
				}
			}
		
			if (!func_616(2))
			{
				if (num >= 3)
				{
					func_619();
					func_105(457, true);
					func_618(2);
				}
			}
			break;
	
		case 5:
		case 6:
		case 8:
			if (func_615(5))
				num = num + 1;
		
			if (func_615(6))
				num = num + 1;
		
			if (func_615(8))
				num = num + 1;
		
			if (!func_616(4))
			{
				if (num == 1)
				{
					func_620();
					func_105(455, true);
					func_618(4);
				}
			}
		
			if (!func_616(8))
			{
				if (num >= 3)
				{
					func_620();
					func_105(455, true);
					func_618(8);
				}
			}
			break;
	}

	return;
}

void func_513(var uParam0) // Position - 0x16FA1 Hash - 0x2CE00B72 ^0x958A4727
{
	func_346(uParam0, joaat("MULTIPLAYER_GAME"));

	if (Global_1946054.f_1 == joaat("MPC_PLAYER_TYPE_MP_MALE"))
		func_346(uParam0, joaat("LOOTER_PED_IS_MALE"));
	else
		func_346(uParam0, joaat("LOOTER_PED_IS_FEMALE"));

	return;
}

void func_514(Any anParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x16FDB Hash - 0x2A3EC766 ^0xE5AAC4BD
{
	int i;
	var unk;

	if (!func_621(anParam0))
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

void func_515(const char* sParam0, const char* sParam1, Hash hParam2) // Position - 0x1707C Hash - 0xC233DF85 ^0x5FF82D96
{
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedText"), MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureDict"), MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(joaat("FeedTextureName"), hParam2);
	return;
}

BOOL func_516(int iParam0) // Position - 0x170AD Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1162387149:
		case joaat("SLOTID_SATCHEL"):
			return true;
	}

	return false;
}

BOOL func_517(Hash hParam0) // Position - 0x170D1 Hash - 0xA177C2D7 ^0x45332B51
{
	int num;

	num = func_115(hParam0);

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
			switch (func_119(hParam0))
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

	if (func_119(hParam0) == -829303394)
		return false;

	return true;
}

BOOL func_518(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x171E9 Hash - 0xB6B420BD ^0x591AD86
{
	BOOL flag;

	flag = false;

	if (iParam1 == 0 || iParam1 == -2074770370 || bParam2 || func_520(false))
		flag = true;

	if (!bParam2)
		if (!func_83(hParam0, 0) || hParam0 == 1259508039 || hParam0 == joaat("kit_wardrobe"))
			return false;

	if (!flag && func_622(hParam0))
		return false;

	switch (iParam1)
	{
		case -2074770370:
			if (Global_1935689.f_17 == 1 || Global_1935689.f_17 == 2)
				return func_624(hParam0, iParam1);
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
			return func_116(hParam0, 8388608);
	
		case -283002878:
		case 0:
			if (!func_520(false))
			{
				if (hParam0 == joaat("KIT_HANDHELD_CATALOG"))
					return true;
			
				if (func_518(hParam0, -1559802791, true) || func_518(hParam0, -1268291907, true) || func_518(hParam0, -96974025, true) || func_518(hParam0, -1666604090, true) || func_518(hParam0, 1561961676, true) || func_518(hParam0, -156634416, true) || func_518(hParam0, 1061777683, true) || func_518(hParam0, -2074770370, true) || func_518(hParam0, -693134279, true) || func_518(hParam0, -182626652, true) || func_623(hParam0))
					return true;
			}
			else
			{
				return true;
			}
			break;
	
		case -182626652:
			if (func_625(hParam0, Global_1914319.f_16855.f_1))
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

BOOL func_519(Hash hParam0) // Position - 0x17498 Hash - 0xB65FA383 ^0xB65FA383
{
	switch (hParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}

	if (func_520(false) && Global_1914319.f_16855 == 2)
	{
		if (!func_626(hParam0))
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

	if (func_122() == false)
		if (func_31(hParam0, -805003139))
			if (!UNLOCK::UNLOCK_IS_VISIBLE(hParam0))
				return false;

	if (func_115(hParam0) == joaat("UPGRADE") && !(func_31(hParam0, -1540973036) || func_31(hParam0, 1192444843)))
		return false;

	return true;
}

BOOL func_520(BOOL bParam0) // Position - 0x17599 Hash - 0xAF6688CF ^0xA8FFE08D
{
	if (bParam0)
		return Global_1914319.f_17370;

	return Global_1914319.f_17370 || Global_1914319.f_18996.f_1;
}

BOOL func_521() // Position - 0x175C9 Hash - 0x4228A1C2 ^0x5DCAFF22
{
	return Global_1935689.f_10;
}

void func_522(var uParam0) // Position - 0x175D7 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1935689.f_9440 = uParam0;
	return;
}

char* func_523(int iParam0) // Position - 0x175E8 Hash - 0xB35E9534 ^0x69EB9D14
{
	switch (iParam0)
	{
		case 0:
			return "BL_";
	
		case 1:
			return "NH_";
	
		case 2:
			return "SD_";
	}

	return "";
}

BOOL func_524(int iParam0) // Position - 0x1762C Hash - 0xF063617F ^0xF063617F
{
	return iParam0 > -1 && iParam0 < 34;
}

char* func_525(int iParam0) // Position - 0x17642 Hash - 0xE6862179 ^0xBC6623C
{
	switch (iParam0)
	{
		case 0:
			return "D_CACR01";
	
		case 1:
			return "D_CACR02";
	
		case 2:
			return "D_CACR03";
	
		case 3:
			return "D_CACR04";
	
		case 4:
			return "D_STAGE4";
	
		case 5:
			return "D_CRN1";
	
		case 6:
			return "D_DST5";
	
		case 7:
			return "D_MUD5_1";
	
		case 8:
			return "D_MUD5_2";
	
		case 9:
			return "D_BNTYSNK";
	
		case 10:
			return "D_PRNBG";
	
		case 11:
			return "D_RBRAN";
	
		case 12:
			return "D_RBT05";
	
		case 13:
			return "D_RBT15";
	
		case 14:
			return "D_RBT18A";
	
		case 15:
			return "D_RBT18B";
	
		case 16:
			return "D_RBT23B";
	
		case 17:
			return "D_RBT23A";
	
		case 18:
			return "D_RBT23D";
	
		case 19:
			return "D_RBT23C";
	
		case 20:
			return "D_RCDIN2";
	
		case 21:
			return "D_RCAL13";
	
		case 22:
			return "D_RCLDN1";
	
		case 23:
			return "D_RFMA3";
	
		case 24:
			return "D_RFMA4";
	
		case 25:
			return "D_RHNTN6";
	
		case 26:
			return "D_RKTTY5";
	
		case 27:
			return "D_RMASN5";
	
		case 28:
			return "D_RMAYR3A";
	
		case 29:
			return "D_RMAYR3B";
	
		case 30:
			return "D_RNATV1";
	
		case 31:
			return "D_RRTL7";
	
		case 32:
			return "D_RSKLR";
	
		case 33:
			return "D_UTP2";
	}

	return "";
}

char* func_526(int iParam0) // Position - 0x17876 Hash - 0xE6862179 ^0x970390F3
{
	switch (iParam0)
	{
		case 0:
			return "FISHING_BLUEGILL";
	
		case 1:
			return "FISHING_BULLHEAD_CATFISH";
	
		case 2:
			return "FISHING_CHAIN_PICKEREL";
	
		case 3:
			return "FISHING_CHANNEL_CATFISH";
	
		case 4:
			return "FISHING_LAKE_STURGEON";
	
		case 5:
			return "FISHING_LARGEMOUTH_BASS";
	
		case 6:
			return "FISHING_LONGNOSE_GAR";
	
		case 7:
			return "FISHING_MUSKIE";
	
		case 8:
			return "FISHING_NORTHERN_PIKE";
	
		case 9:
			return "FISHING_PERCH";
	
		case 10:
			return "FISHING_REDFIN_PICKEREL";
	
		case 11:
			return "FISHING_ROCK_BASS";
	
		case 12:
			return "FISHING_SOCKEYE_SALMON";
	
		case 13:
			return "FISHING_STEELHEAD_TROUT";
	
		case 14:
			return "FISHING_STRANGE_DISAPPEARANCE";
	}

	return "";
}

BOOL func_527(int iParam0) // Position - 0x1797A Hash - 0xFD10BCB1 ^0xFD10BCB1
{
	if (iParam0 <= -1 || iParam0 >= 27)
		return false;

	return true;
}

int func_528(int iParam0) // Position - 0x17999 Hash - 0xBE2A032D ^0xE6F2CF3B
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

void func_529(var uParam0, int iParam1) // Position - 0x179A8 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_530(int iParam0, int iParam1) // Position - 0x179B9 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

int func_531() // Position - 0x179CA Hash - 0xC5B83CF5 ^0xD520990E
{
	return Global_40.f_4283.f_1;
}

BOOL func_532(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x179DA Hash - 0x2F357F29 ^0x2F357F29
{
	int i;

	if (func_122() != -1)
		return true;

	if (iParam2 == 0 && func_50(0, true, true))
		return false;

	if (Global_1879534)
		return false;

	if (func_627(iParam0, iParam1))
		return false;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_628(i, &iParam0))
		{
			Global_40.f_4942[i /*60*/].f_59 = iParam1;
		
			if (iParam3 == iParam4)
				func_629(i, 512, true);
			else
				func_630(i, 512, true);
		}
	}

	return true;
}

void func_533(var uParam0) // Position - 0x17A6A Hash - 0x4918B04C ^0x4918B04C
{
	*uParam0 = 0;
	return;
}

void func_534(int iParam0, int iParam1) // Position - 0x17A76 Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

void func_535(Hash hParam0) // Position - 0x17A8B Hash - 0xD7FDBA69 ^0xCD0FDBA9
{
	if (func_631(179) || func_631(180))
		if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
			if (Global_1347702[hParam0 /*49*/].f_37 == Global_1905944.f_5698)
				func_632(1);

	if (func_633(179))
		func_634(179);

	if (func_633(180))
		func_634(180);

	return;
}

BOOL func_536(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x17AF0 Hash - 0x1083E71B ^0xE27096E9
{
	if (func_635(plParam0, bParam1, bParam2, bParam3))
		return true;

	if (bParam1)
		if (LAW::_ARE_WITNESSES_PENDING(PLAYER::PLAYER_ID()))
			return true;

	return false;
}

void func_537(eBlipSprite ebsParam0) // Position - 0x17B20 Hash - 0xB0965077 ^0xCF35C455
{
	if (MAP::DOES_BLIP_EXIST(*ebsParam0))
		MAP::REMOVE_BLIP(ebsParam0);

	return;
}

void func_538(Hash hParam0, int iParam1) // Position - 0x17B38 Hash - 0x35B60260 ^0x5D185E4D
{
	int i;

	if (!func_47(hParam0))
		return;

	func_636(&(Global_1347702[hParam0 /*49*/].f_14), iParam1);
	func_636(&(Global_1347702[hParam0 /*49*/].f_14), 2);
	func_637(&(Global_1347702[hParam0 /*49*/].f_12), 16384);
	func_534(&(Global_1347702[hParam0 /*49*/].f_13), 32);

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

void func_539(Hash hParam0, BOOL bParam1, var uParam2, var uParam3, var uParam4) // Position - 0x17BD5 Hash - 0x1D42FDF4 ^0x4350D410
{
	if (!func_47(hParam0))
		return;

	if (Global_1347702[hParam0 /*49*/].f_13 & 32 != 0)
		return;
	else if (Global_1347702[hParam0 /*49*/].f_13 & 4096 != 0)
		if (bParam1)
			return;

	func_535(hParam0);

	if (Global_1347702[hParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[hParam0 /*49*/].f_13 & 2048 == 0)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	
		if (bParam1)
			MAP::REMOVE_BLIP(&(Global_1347702[hParam0 /*49*/].f_37));
	
		func_372(hParam0, func_543(hParam0), false, true);
	}
	else if (Global_1347702[hParam0 /*49*/].f_18 > -1f)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	
		if (bParam1)
			MAP::REMOVE_BLIP(&(Global_1347702[hParam0 /*49*/].f_37));
	
		func_372(hParam0, uParam2, false, true);
	}
	else if (!bParam1)
	{
		func_372(hParam0, uParam2, false, false);
	}

	MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_LOCKED"));
	func_530(&(Global_1347702[hParam0 /*49*/].f_13), 4096);
	return;
}

BOOL func_540(Hash hParam0, var uParam1) // Position - 0x17CE0 Hash - 0xF607B79C ^0x9512C6CD
{
	if (hParam0 == 90)
	{
		if (func_200(Global_1347702[hParam0 /*49*/].f_15) != 0)
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

Blip func_541(Hash hParam0) // Position - 0x17D76 Hash - 0xBD05D4EC ^0x11B65A46
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

BOOL func_542(Hash hParam0) // Position - 0x17E09 Hash - 0xA89AC49 ^0x69E11C5C
{
	if (func_122() != -1)
		return false;

	if (!func_47(hParam0))
		return false;

	if (Global_1347702[hParam0 /*49*/].f_12 & 1048576 != 0 && Global_1347702[hParam0 /*49*/].f_13 & 2048 != 0)
		return false;

	if (Global_1347702[hParam0 /*49*/].f_18 > -1f)
		return true;

	return false;
}

Vector3 func_543(Hash hParam0) // Position - 0x17E6C Hash - 0x563C355B ^0x563C355B
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

void func_544(int iParam0) // Position - 0x182F1 Hash - 0xD31B7E0 ^0xD31B7E0
{
	switch (func_122())
	{
		case -1:
			Global_1357549.f_1494 = Global_1357549.f_1494 || iParam0;
			break;
	}

	return;
}

void func_545(Hash hParam0) // Position - 0x1831D Hash - 0x61A76EF4 ^0x86150C0D
{
	if (!func_542(hParam0))
	{
		if (Global_1347702[hParam0 /*49*/].f_13 & 16 != 0)
		{
			if (Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
			{
				if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
					MAP::BLIP_ADD_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
			
				func_530(&(Global_1347702[hParam0 /*49*/].f_13), 32);
			}
		}
		else
		{
			if (MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37))
				MAP::BLIP_REMOVE_MODIFIER(Global_1347702[hParam0 /*49*/].f_37, joaat("BLIP_MODIFIER_OUTSIDE_TOD"));
		
			func_534(&(Global_1347702[hParam0 /*49*/].f_13), 32);
		}
	}

	return;
}

void func_546(Hash hParam0) // Position - 0x183C0 Hash - 0xAC04978C ^0x82563A0D
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

int func_547(int iParam0) // Position - 0x18417 Hash - 0x84838E68 ^0x84838E68
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

BOOL func_548(int iParam0) // Position - 0x1849A Hash - 0x7AB6E77F ^0x7AB6E77F
{
	return iParam0 >= 0 && iParam0 <= 150;
}

BOOL func_549(int iParam0) // Position - 0x184B0 Hash - 0xC62F3EC7 ^0x941BF203
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
		return MAP::DOES_BLIP_EXIST(Global_36308[iParam0]);

	return false;
}

BOOL func_550(int iParam0) // Position - 0x184D9 Hash - 0x89548BD6 ^0x617C5136
{
	if (!func_638(Global_40.f_4283))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
			return true;
	
		if (func_639(iParam0))
			if (BUILTIN::VDIST(Global_36, func_640(iParam0)) < BUILTIN::VDIST(Global_36, Global_1888801[iParam0 /*35*/].f_15))
				return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, func_640(iParam0), false) <= func_641();
	
		return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1888801[iParam0 /*35*/].f_15, false) <= func_641();
	}

	return func_642();
}

BOOL func_551(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0x18569 Hash - 0xB3D5384F ^0xC314784E
{
	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1347702[hParam0 /*49*/].f_37) && Global_1347702[hParam0 /*49*/].f_12 & 1 != 0)
		return Global_1347702[hParam0 /*49*/].f_27 == iParam2;

	return false;
}

void func_552(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x185AD Hash - 0x436A2EB9 ^0x436A2EB9
{
	int num;
	Hash hash;
	Hash styleHash;

	if (!func_192(iParam0))
		return;

	switch (func_643(iParam0))
	{
		case 1:
			num = func_191(iParam0);
		
			if (func_644(num, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
				if (func_645(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
					styleHash = joaat("BLIP_STYLE_MISSION_RADIUS_HIDDEN");
				else
					styleHash = joaat("BLIP_STYLE_MISSION_HIDDEN");
			else if (func_645(num, -1) && !Global_1835011[num /*74*/].f_70 && Global_1835011[num /*74*/].f_63 & 2 == 0)
				styleHash = joaat("BLIP_STYLE_MISSION_RADIUS");
			else
				styleHash = joaat("BLIP_STYLE_MISSION");
		
			if (Global_1835011[num /*74*/].f_28 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1835011[num /*74*/].f_27, styleHash);
			
				if (!func_646(num))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_KEY_MISSION"));
			
				if (func_647(&Global_1835011[num /*74*/], 2))
					MAP::BLIP_ADD_MODIFIER(Global_1835011[num /*74*/].f_27, joaat("BLIP_MODIFIER_LOCKED"));
			
				Global_1835011[num /*74*/].f_28 = styleHash;
			}
			break;
	
		case 8:
			hash = func_191(iParam0);
		
			if (func_648(hash, bParam1, bParam2, iParam3) && Global_1357549.f_1709 > 1)
			{
				switch (func_541(hash))
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
				styleHash = func_541(hash);
			}
		
			if (Global_1347702[hash /*49*/].f_38 != styleHash)
			{
				MAP::_BLIP_ADD_STYLE(Global_1347702[hash /*49*/].f_37, styleHash);
				func_546(hash);
				Global_1347702[hash /*49*/].f_38 = styleHash;
			}
			break;
	}

	return;
}

BOOL func_553(int iParam0, int iParam1) // Position - 0x187A9 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

BOOL func_554(Hash hParam0) // Position - 0x187B8 Hash - 0x38C3233C ^0x38C3233C
{
	if (hParam0 == 97 || hParam0 == 99 || hParam0 == 6)
		return true;

	return false;
}

BOOL func_555(Hash hParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0x187E2 Hash - 0xE87847ED ^0xAF7DC6D
{
	var outData;
	int i;

	*uParam3 = 0;

	if (*uParam2 < 10)
		return false;

	if (!func_83(hParam0, 0))
		return false;

	outData.f_4 = 15;
	outData.f_36 = 10;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(hParam0, hParam1, &outData))
		return false;

	*uParam3 = outData.f_35;

	for (i = 0; i < outData.f_35; i = i + 1)
	{
		uParam2->[i] = outData.f_36[i];
	}

	return true;
}

void func_556(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x18857 Hash - 0x59F2662F ^0x59F2662F
{
	return;
}

BOOL func_557(int iParam0) // Position - 0x1885F Hash - 0xF7D98D06 ^0xF7D98D06
{
	return func_216(iParam0, 2);
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM_0_0_0_0(int iParam0) // Position - 0x1886E Hash - 0xA17D549C ^0x16E8B4E6
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

Hash func_559(int iParam0) // Position - 0x18945 Hash - 0x8A42746 ^0x8A42746
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

char* func_560(Hash hParam0, int iParam1) // Position - 0x18988 Hash - 0x42D82A11 ^0x17D63F31
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

struct<4> func_561() // Position - 0x18A1C Hash - 0xEC8CF1E8 ^0xEC8CF1E8
{
	var unk;

	return unk;
}

int func_562(Hash hParam0, Hash hParam1) // Position - 0x18A28 Hash - 0x39B5DB67 ^0xD5694E3C
{
	if (hParam1 == 0)
		return 0;

	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(hParam0, hParam1);
}

float func_563(int iParam0) // Position - 0x18A42 Hash - 0x212D15D1 ^0x936F419E
{
	int num;
	int num2;
	float num3;
	float num4;
	int num5;
	int num6;
	int num7;

	num5 = func_401(iParam0);

	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			num4 = Global_40.f_11095.f_11[num5];
			num6 = func_564(num4);
			num = num6;
			num7 = num + 1;
			num2 = func_649(num7) - func_649(num6);
			num3 = (float)num2 * 0.25f;
			return num3;
	
		default:
		
	}

	return -1f;
}

int func_564(float fParam0) // Position - 0x18AAC Hash - 0x3E9B0DE9 ^0x3E9B0DE9
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

int func_565(int iParam0) // Position - 0x18B38 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_566(int iParam0) // Position - 0x18B71 Hash - 0xB8632262 ^0xB8632262
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

int func_567(float fParam0, float fParam1) // Position - 0x18BF0 Hash - 0xD6DD6059 ^0x47213A0D
{
	int num;
	float num2;
	float num3;
	float num4;
	int num5;
	int num6;

	num = func_564(fParam0);
	num2 = BUILTIN::TO_FLOAT(func_649(num));
	num3 = BUILTIN::TO_FLOAT(func_649(num + 1));
	num4 = num3 - num2;
	num5 = BUILTIN::FLOOR(((fParam0 - num2) / num4) * 4f);
	num6 = BUILTIN::FLOOR(((fParam1 - num2) / num4) * 4f);

	if (num5 == num6)
		return 0;

	if (num6 >= 4 || num6 < 0)
		return 0;

	return num6;
}

int func_568(int iParam0) // Position - 0x18C63 Hash - 0x49D35AE6 ^0xCCB27CDD
{
	int num;

	if (func_650(iParam0, &num))
		return func_649(num);

	switch (iParam0)
	{
		case 0:
			if (func_651())
				return 550;
			else
				return 100;
			break;
	
		case 1:
			if (func_651())
				return 550;
			else
				return 50;
			break;
	
		case 2:
			if (func_651())
				return 550;
			else
				return 50;
			break;
	
		case 4:
			return 0;
	}

	return 0;
}

int func_569(int iParam0) // Position - 0x18CEF Hash - 0xEE6D3E20 ^0xEE6D3E20
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

void func_570(int iParam0, int iParam1, int iParam2) // Position - 0x18D21 Hash - 0x29688DE6 ^0xE6021D0B
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

	num = num + func_652(iParam0);
	str3 = func_654(func_653(num, iParam2));
	str5 = func_655(iParam0);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(str5))
		str4 = "HUD_Toast_Soundset";

	str6 = MISC::VAR_STRING(10, str, func_656(iParam0));
	num2 = func_657(iParam0);
	hashKey = MISC::GET_HASH_KEY(str3);

	if (flag)
	{
		data = str6;
		data.f_1 = str2;
		data.f_3 = hashKey;
		data.f_2 = num2;
		data.f_4 = 1;
		data.f_5 = func_658(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&data);
	}

	func_259(str6, str2, num2, hashKey, joaat("stats_menu"), "INPUT_FEED_INTERACT_GENERIC", func_659(iParam0), -2, str4, str5, 0, 0, true, true);
	return;
}

void func_571(int iParam0, int iParam1) // Position - 0x18E19 Hash - 0xDA1E7FF9 ^0xEB114C96
{
	Global_1347477.f_9[iParam0 /*2*/] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

BOOL func_572(int iParam0) // Position - 0x18E32 Hash - 0x3270B633 ^0x3270B633
{
	return iParam0 > -1 && iParam0 < 25;
}

int func_573(BOOL bParam0) // Position - 0x18E48 Hash - 0x22A87A6A ^0x22A87A6A
{
	int i;

	for (i = 0; bParam0 != false; i = i + 1)
	{
		bParam0 = bParam0 && bParam0 - 1;
	}

	return i;
}

BOOL func_574(Hash hParam0) // Position - 0x18E6D Hash - 0xC5BCA0B1 ^0xFD46F9FC
{
	return COLLECTION::_COLLECTABLE_GET_NUM_TURNED_IN(hParam0) > 0;
}

BOOL func_575(Hash hParam0) // Position - 0x18E7D Hash - 0xB8632262 ^0xB8632262
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

int func_576(Hash hParam0) // Position - 0x18F24 Hash - 0xD6BB6FB5 ^0xD6BB6FB5
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

int func_577(Hash hParam0) // Position - 0x18F5D Hash - 0xFEF68B9C ^0xE8DB1D9E
{
	Entity entity;
	Hash model;
	int i;

	model.f_10 = 10;

	for (i = 0; i < 3; i = i + 1)
	{
		if (!func_660(&entity, 0, i, &model) && !func_660(&entity, 1, i, &model))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(model))
		{
			func_661(entity, &model);
		
			if (func_83(model.f_1, 0))
				return 1;
		}
	}

	return 0;
}

void func_578() // Position - 0x18FC9 Hash - 0x190164B9 ^0x2EDA1322
{
	var unk;
	var unk31;

	if (!INVENTORY::_INVENTORY_USE_SP_BACKUP())
		return;

	unk = 29;
	func_662(Global_35, &unk);
	unk31 = { func_388(false) };
	INVENTORY::_0xE36D4A38D28D9CFB(false);
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(5, 1, &unk31, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_663(false);
	func_664(7);
	func_665(joaat("kit_bandana"), true, true, false);

	if (func_341() == 1160113249)
	{
		func_665(joaat("clothing_p3_player_three_ms1_hat_000_000"), true, true, true);
		func_665(-361635024, true, true, true);
	}

	func_666(Global_35, &unk);
	return;
}

int func_579(int iParam0) // Position - 0x19052 Hash - 0xB4F18402 ^0x7A49D6D2
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * MISC::IS_BIT_SET(iParam0, 31) ? -1 : 1) + 1898;
}

int func_580(int iParam0) // Position - 0x19077 Hash - 0xB778A86 ^0x59904CDE
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_581(int iParam0) // Position - 0x1908A Hash - 0x78117956 ^0xDE0FB172
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_582(int iParam0) // Position - 0x1909D Hash - 0xF4D85E05 ^0xA287BB5C
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_583(int iParam0) // Position - 0x190B0 Hash - 0xA0361328 ^0x659968B0
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_584(int iParam0) // Position - 0x190C2 Hash - 0xD4A2C8FF ^0x5655DDE9
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_585(int iParam0, int iParam1) // Position - 0x190D4 Hash - 0x893AC59E ^0x893AC59E
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

void func_586(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1916E Hash - 0xA65AB937 ^0xA65AB937
{
	func_668(uParam0, iParam6);
	func_669(uParam0, iParam5);
	func_670(uParam0, iParam4);
	func_671(uParam0, iParam3);
	func_672(uParam0, iParam2);
	func_673(uParam0, iParam1);
	return;
}

int func_587(Hash hParam0) // Position - 0x191A6 Hash - 0xADA620BC ^0xEF3A3B3A
{
	var outSlotId;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(hParam0, 0, &outSlotId))
		return -358215195;

	return func_319(outSlotId);
}

int func_588(int iParam0) // Position - 0x191C9 Hash - 0x6EC15CF9 ^0xE613EBE0
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

int func_589(Hash hParam0, int iParam1) // Position - 0x1924A Hash - 0x7CE1A52B ^0x35B4CDB3
{
	int year;
	int month;
	int day;
	int hour;
	int minute;
	int second;
	int num;

	if (iParam1 < 0)
		iParam1 = func_241(false);

	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, hParam0, &year, &month, &day, &hour, &minute, &second))
		return -15;

	func_668(&num, year);
	func_669(&num, month);
	func_670(&num, day);
	func_671(&num, hour);
	func_672(&num, minute);
	func_673(&num, second);
	return num;
}

BOOL func_590(int iParam0, int iParam1, BOOL bParam2) // Position - 0x192AF Hash - 0x30CEFC86 ^0x30CEFC86
{
	if (bParam2)
		if (!func_674(iParam1) || !func_674(iParam0))
			return true;

	return iParam0 > iParam1;
}

void func_591(int iParam0) // Position - 0x192DC Hash - 0x7237E1A2 ^0x99714617
{
	var statId;

	if (iParam0 < 0)
		iParam0 = 0;

	Global_40.f_4283.f_325 = iParam0;
	statId = { func_348(joaat("GANG_SAVINGS_CASH")) };
	STATS::STAT_ID_SET_INT(&statId, iParam0, true);
	return;
}

int func_592(int iParam0, int iParam1) // Position - 0x1930F Hash - 0x8FA0E29 ^0xC3F68E87
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

void func_593(int iParam0, int iParam1) // Position - 0x1A428 Hash - 0x19A9221A ^0x79EEA925
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
			if (func_675(&iParam0->f_2[i /*2*/], 2) || iParam0->f_2[i /*2*/] == iParam1 || iParam0->f_2[i /*2*/] == 39)
			{
				iParam0->f_2[i /*2*/] = { unk };
			}
			else
			{
				if (func_675(&iParam0->f_2[i /*2*/], 1))
					func_676(&iParam0->f_2[i /*2*/], 2, 6);
			
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

void func_594(int iParam0, int iParam1, int iParam2) // Position - 0x1A554 Hash - 0x194BB6D7 ^0x6A98F372
{
	if (*iParam0 + 1 >= 10)
		return;

	if (!func_677(iParam0, 1))
		func_678(iParam0, 1);

	iParam0->f_2[*iParam0 /*2*/].f_1 = iParam2;
	iParam0->f_2[*iParam0 /*2*/] = iParam1;
	*iParam0 = *iParam0 + 1;
	return;
}

BOOL func_595(int iParam0, int iParam1) // Position - 0x1A59B Hash - 0xECB143B0 ^0x61AB85CB
{
	return Global_1946054.f_57[iParam0 /*11*/].f_9 && iParam1 != false;
}

void func_596(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1A5B4 Hash - 0xE34B9CEC ^0xAFBB60FB
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
			func_476(num2, num);
	
		if (bParam1)
			func_476(num4, num);
	}

	if (uParam0->f_1[num3 /*3*/].f_1 == -1333118809 || uParam0->f_1[num3 /*3*/].f_1 == joaat("Custom"))
	{
		uParam0->f_1[num3 /*3*/].f_1 = joaat("base");
	
		if (bParam3)
			func_476(num3, num);
	}

	return;
}

BOOL func_597(int iParam0) // Position - 0x1A6A0 Hash - 0x9F9FF8A1 ^0x4AEA2041
{
	int num;

	if (iParam0 == 0)
		iParam0 = func_341();

	num = 0;

	if (iParam0 == joaat("MPC_PLAYER_TYPE_MP_FEMALE"))
		num = 1;

	return num;
}

int func_598(Hash hParam0, BOOL bParam1, Hash hParam2, BOOL bParam3) // Position - 0x1A6C6 Hash - 0x3A135443 ^0x969430D9
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

BOOL func_599(Hash hParam0, int iParam1, var uParam2) // Position - 0x1A70A Hash - 0x266D0BAD ^0x37A4495C
{
	*uParam2 = joaat("base");
	return true;
}

BOOL func_600(int iParam0, int iParam1) // Position - 0x1A71B Hash - 0x5EDC7379 ^0x87AAB49F
{
	return Global_1946054.f_57[func_320(iParam0, 1) /*11*/].f_10 && iParam1 != false;
}

int func_601(var uParam0) // Position - 0x1A739 Hash - 0x3AB81F84 ^0x2BD03E57
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

void func_602(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1A784 Hash - 0x475F4FBD ^0x5DA546E8
{
	if (bParam1)
		Global_1946054.f_1497.f_1[iParam0 /*3*/] = { Global_1946054.f_1378.f_1[iParam0 /*3*/] };

	if (!bParam2)
		return;

	if (func_122() == -1)
		func_679(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_26796.f_776);
	else
		func_680(&Global_1946054.f_1497.f_1[iParam0 /*3*/], iParam0, Global_36638.f_45.f_350.f_1011);

	return;
}

BOOL func_603(BOOL bParam0, int iParam1) // Position - 0x1A7FA Hash - 0xAAB46313 ^0xDBD30AAB
{
	if (func_122() == -1)
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

void func_604(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1A877 Hash - 0x1F3A52DA ^0x1F3A52DA
{
	func_681(&(Global_1946054.f_1378), iParam0);
	func_682(2, iParam0, 6);

	if (bParam1)
		func_605(false, true);

	return;
}

void func_605(BOOL bParam0, BOOL bParam1) // Position - 0x1A89F Hash - 0x4F2782D4 ^0x9FBFC876
{
	if (bParam1)
		func_683(0);

	if (bParam0)
	{
		func_483(8);
		func_483(512);
	}
	else
	{
		func_483(8);
		func_483(16);
	}

	return;
}

BOOL func_606(int iParam0) // Position - 0x1A8D2 Hash - 0xEA95855 ^0xEA95855
{
	return Global_1946054.f_529[iParam0] > 0;
}

void func_607(int iParam0) // Position - 0x1A8E7 Hash - 0x9BC08F2D ^0x9BC08F2D
{
	Global_1946054.f_529[iParam0] = Global_1946054.f_529[iParam0] + 1;
	return;
}

float func_608(int iParam0) // Position - 0x1A907 Hash - 0x2C71CF8D ^0x7FC35B16
{
	return Global_40.f_11095.f_11[iParam0];
}

int func_609(float fParam0) // Position - 0x1A91B Hash - 0x28AB1AA4 ^0x3CDB2B4C
{
	return BUILTIN::ROUND((fParam0 / 100f) * BUILTIN::TO_FLOAT(10));
}

char* func_610(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1A936 Hash - 0xC24B5846 ^0x8065BB73
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

Hash func_611() // Position - 0x1A9DF Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_1946054.f_1497;
}

char* func_612(int iParam0) // Position - 0x1A9EE Hash - 0xCCDB3731 ^0xE4CE5877
{
	Hash hash;

	hash = func_505(iParam0);

	if (hash == 0)
		return "OUT_UNKNOWN";

	return func_431(hash);
}

int func_613(Hash hParam0) // Position - 0x1AA11 Hash - 0x9F080DD1 ^0x9F080DD1
{
	int num;

	if (func_684(hParam0))
		num = 0;
	else if (func_685(hParam0))
		num = 1;
	else if (func_686(hParam0))
		num = 2;
	else if (func_687(hParam0))
		num = 3;

	return num;
}

BOOL func_614(int iParam0) // Position - 0x1AA54 Hash - 0x8AC2B33E ^0x8AC2B33E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_61(func_688(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num > 1)
		return true;

	return false;
}

BOOL func_615(int iParam0) // Position - 0x1AA94 Hash - 0x626B55E1 ^0x626B55E1
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (func_61(func_689(i, iParam0), 1, false))
			num = num + 1;
	}

	if (num >= 4)
		return true;

	return false;
}

BOOL func_616(int iParam0) // Position - 0x1AAD3 Hash - 0x4B7BFD78 ^0x4B7BFD78
{
	return Global_40.f_12003 && iParam0 != false;
}

void func_617() // Position - 0x1AAE6 Hash - 0x40D9944C ^0x169F6962
{
	int num;

	if (func_122() != -1)
		return;

	func_171(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	num = func_404(1);
	func_570(1, num, 0);
	return;
}

void func_618(int iParam0) // Position - 0x1AB18 Hash - 0xC2794E8C ^0xC2794E8C
{
	Global_40.f_12003 = Global_40.f_12003 || iParam0;
	return;
}

void func_619() // Position - 0x1AB2F Hash - 0x1D33C94B ^0xA2EE5507
{
	int num;

	if (func_122() != -1)
		return;

	func_171(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	num = func_404(2);
	func_570(2, num, 0);
	return;
}

void func_620() // Position - 0x1AB61 Hash - 0xB797F7DC ^0xFD986A22
{
	int num;

	if (func_122() != -1)
		return;

	func_171(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	num = func_404(0);
	func_570(0, num, 0);
	return;
}

BOOL func_621(Any anParam0) // Position - 0x1AB93 Hash - 0xCC4B0CF2 ^0xC0C1FD86
{
	if (*anParam0 == 0 && anParam0->f_1 == 0 && anParam0->f_2 == 0 && anParam0->f_3 == 0)
		return false;

	return true;
}

BOOL func_622(Hash hParam0) // Position - 0x1ABC9 Hash - 0x94D015F5 ^0x14C4310B
{
	int i;

	for (i = 0; i < Global_1935689.f_19.f_1; i = i + 1)
	{
		if (func_690(hParam0, Global_1935689.f_19.f_2[i /*2*/]))
			return true;
	}

	return false;
}

BOOL func_623(Hash hParam0) // Position - 0x1AC04 Hash - 0x41E81FD3 ^0x6129C7A4
{
	if (func_31(hParam0, -839724752))
		return func_31(hParam0, 1937586541);

	return false;
}

BOOL func_624(Hash hParam0, int iParam1) // Position - 0x1AC29 Hash - 0xD64A2C8D ^0x52F52E2B
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

BOOL func_625(Hash hParam0, int iParam1) // Position - 0x1AD47 Hash - 0xCF0E4834 ^0xCF0E4834
{
	if (iParam1 == 101)
		return func_691(hParam0);

	if (func_692(hParam0, iParam1))
		return false;

	return func_693(hParam0, iParam1);
}

BOOL func_626(Hash hParam0) // Position - 0x1AD79 Hash - 0x242F1AF ^0x1D0FE23F
{
	Hash hash;

	if (hParam0 != 0)
	{
		if (func_116(hParam0, 8388608))
		{
			hash = func_311(func_694(hParam0), 10);
		
			if (hash != 0 && func_61(hash, 1, false))
			{
				Global_1901328.f_94 = 1;
				return func_695(func_694(hParam0), hParam0);
			}
			else if (hParam0 == func_311(func_696(hParam0), 5))
			{
				if (!func_48(39))
					return false;
				else
					return true;
			}
			else if (hParam0 == func_311(func_697(hParam0), 5))
			{
				if (!func_48(49))
					return false;
				else
					return true;
			}
			else if (func_698(hParam0))
			{
				if (!func_48(41))
					return false;
				else
					return func_700(func_699(hParam0), 5, false);
			}
			else if (func_701(hParam0))
			{
				if (func_61(-1813857561, 1, false))
					if (!func_48(48))
						return false;
					else
						return true;
				else
					return false;
			}
			else if (func_702(hParam0))
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

BOOL func_627(int iParam0, int iParam1) // Position - 0x1AEBF Hash - 0x4134D2DF ^0x8D80BF31
{
	int i;

	for (i = 0; i < 27; i = i + 1)
	{
		if (func_628(i, &iParam0))
			if (Global_40.f_4942[i /*60*/].f_59 != 0 && Global_40.f_4942[i /*60*/].f_59 != iParam1)
				return true;
	}

	return false;
}

BOOL func_628(int iParam0, var uParam1) // Position - 0x1AF0F Hash - 0x997B939E ^0x997B939E
{
	int num;

	if (!func_527(iParam0))
		return false;

	num = func_528(iParam0);
	return *uParam1 && num != false;
}

void func_629(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1AF35 Hash - 0x2E4D3D00 ^0x2E4D3D00
{
	if (bParam2)
		if (!func_527(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] || bParam1;
	return;
}

void func_630(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1AF66 Hash - 0xC1057B0F ^0xC1057B0F
{
	if (bParam2)
		if (!func_527(iParam0))
			return;

	Global_40.f_4942[iParam0 /*60*/] = Global_40.f_4942[iParam0 /*60*/] - Global_40.f_4942[iParam0 /*60*/] && bParam1;
	return;
}

BOOL func_631(int iParam0) // Position - 0x1AFA2 Hash - 0x854AC499 ^0x54AC68DD
{
	int currentMessage;

	currentMessage = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);

	if (currentMessage != 0)
		return currentMessage == Global_1905944.f_22[iParam0 /*9*/].f_1;

	return false;
}

void func_632(int iParam0) // Position - 0x1AFCA Hash - 0xF6DB87B5 ^0xF6DB87B5
{
	func_703(true);
	return;
}

BOOL func_633(int iParam0) // Position - 0x1AFD7 Hash - 0xBDE4FECD ^0x461A2A8
{
	int num;
	int offset;
	int address;

	func_246(iParam0, &num, &offset);
	address = Global_1905944[num];
	return MISC::IS_BIT_SET(address, offset);
}

void func_634(int iParam0) // Position - 0x1AFFB Hash - 0xAD18F8AE ^0xAD18F8AE
{
	int num;
	int num2;

	func_246(iParam0, &num, &num2);
	func_704(num, num2);
	return;
}

BOOL func_635(Player plParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B015 Hash - 0x7FC88506 ^0xB203680D
{
	var data;
	int i;
	Hash crimeType;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_705(bParam1, bParam2, bParam3);

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

void func_636(var uParam0, int iParam1) // Position - 0x1B14A Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_637(int iParam0, int iParam1) // Position - 0x1B15B Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_638(int iParam0) // Position - 0x1B16C Hash - 0xBF3EFB31 ^0xBF3EFB31
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

BOOL func_639(int iParam0) // Position - 0x1B19C Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 22:
			return true;
	}

	return false;
}

Vector3 func_640(int iParam0) // Position - 0x1B1BA Hash - 0xC7BD7946 ^0xC0EC040B
{
	switch (iParam0)
	{
		case 22:
			return -2578.5088f, 389.3037f, 148.3825f;
	}

	return Global_1888801[iParam0 /*35*/].f_15;
}

float func_641() // Position - 0x1B1F1 Hash - 0x97B49396 ^0x97B49396
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

BOOL func_642() // Position - 0x1B22D Hash - 0x3AC12039 ^0x3AC12039
{
	return Global_1894899 & 2 != 0;
}

int func_643(int iParam0) // Position - 0x1B23D Hash - 0x355AD4D4 ^0x355AD4D4
{
	if (!func_192(iParam0))
		return 0;

	return func_706(func_367(iParam0));
}

BOOL func_644(int iParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x1B25D Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_707(iParam0, bParam2, iParam3))
		return true;

	return false;
}

BOOL func_645(int iParam0, int iParam1) // Position - 0x1B27F Hash - 0x97F0E2FC ^0x97F0E2FC
{
	if (iParam1 != -1)
		return false;

	if (func_708(iParam0))
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

BOOL func_646(int iParam0) // Position - 0x1B343 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_709(iParam0);
}

BOOL func_647(int iParam0, int iParam1) // Position - 0x1B351 Hash - 0x718DD1EF ^0x863E326
{
	return iParam0->f_63 && iParam1 != false;
}

BOOL func_648(Hash hParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x1B362 Hash - 0x15392577 ^0x15392577
{
	if (!bParam1 && func_551(hParam0, bParam2, iParam3))
		return true;

	return false;
}

int func_649(int iParam0) // Position - 0x1B384 Hash - 0xD14E7A6C ^0x65ACC420
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

BOOL func_650(int iParam0, var uParam1) // Position - 0x1B3FA Hash - 0x7D48C204 ^0x7D48C204
{
	return false;
}

BOOL func_651() // Position - 0x1B403 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

int func_652(int iParam0) // Position - 0x1B40C Hash - 0xDB2BFD59 ^0x5419B7B7
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_241(false), joaat("UPGRADE_HEALTH_TANK_1"), false);
	
		case 1:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_241(false), joaat("UPGRADE_STAMINA_TANK_1"), false);
	
		case 2:
			return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_241(false), joaat("UPGRADE_DEADEYE_TANK_1"), false);
	}

	return 0;
}

struct<4> func_653(int iParam0, int iParam1) // Position - 0x1B46E Hash - 0xD5391B76 ^0x6D19FBAC
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

const char* func_654(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1B4A0 Hash - 0x1D52DDA1 ^0x2CC95A61
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_655(int iParam0) // Position - 0x1B4B4 Hash - 0x21CE226B ^0xDBED2BE
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

char* func_656(int iParam0) // Position - 0x1B4EF Hash - 0x21CE226B ^0xE7D9797
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

int func_657(int iParam0) // Position - 0x1B52A Hash - 0x21FAF347 ^0x467E3BE5
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

int func_658(int iParam0) // Position - 0x1B565 Hash - 0x5163992 ^0x5163992
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

int func_659(int iParam0) // Position - 0x1B594 Hash - 0x21FAF347 ^0xA8C8F0DA
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

BOOL func_660(var uParam0, int iParam1, int iParam2, var uParam3) // Position - 0x1B5CF Hash - 0x3AEC80A5 ^0x823C1FFF
{
	Ped ped;
	var unk;
	int num;

	if (func_710(iParam1) && !func_711(iParam1))
		ped = func_712(iParam1);
	else
		return false;

	func_713(uParam3);
	num = func_714(iParam2);

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

void func_661(Entity eParam0, var uParam1) // Position - 0x1B66E Hash - 0x9E997175 ^0xEF5C18F2
{
	Ped pedIndexFromEntityIndex;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::DOES_ENTITY_EXIST(pedIndexFromEntityIndex))
	{
		func_715(pedIndexFromEntityIndex, &(uParam1->f_5), &(uParam1->f_6), &(uParam1->f_7), &(uParam1->f_4));
	
		if (func_716(&(uParam1->f_1), pedIndexFromEntityIndex, uParam1->f_7, uParam1->f_5))
		{
		}
	}

	return;
}

void func_662(Ped pedParam0, Any* panParam1) // Position - 0x1B6B8 Hash - 0x2B5AFE28 ^0xF454BB04
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
	
		if (func_268(weaponHash))
			panParam1->[i] = weaponHash;
		else
			panParam1->[i] = 0;
	}

	return;
}

void func_663(BOOL bParam0) // Position - 0x1B71D Hash - 0x717F0B01 ^0x717F0B01
{
	int i;
	Hash hash;

	for (i = 17; i >= 0; i = i + -1)
	{
		hash = Global_1946054.f_2657[i];
	
		if (func_83(hash, 0))
			func_717(hash, false, bParam0);
	
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

void func_664(int iParam0) // Position - 0x1B7B6 Hash - 0xA42FEE36 ^0x2BB3D8A2
{
	int i;
	int num;
	Hash hash;

	Global_1946054.f_2657.f_26.f_2 = 3;
	Global_1946054.f_2657.f_26.f_1 = 3;
	Global_1946054.f_2657.f_26 = 3;

	if (func_122() == -1)
	{
		func_718(352481484);
	
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
	
		if (func_119(hash) != -999503751)
			func_719(&(Global_1946054.f_2657.f_26.f_26), hash, i);
	
		if (func_720(hash, false))
			func_721(hash, Global_1946054.f_1497.f_1[num /*3*/] == Global_1946054.f_2657[i]);
	}

	return;
}

void func_665(Hash hParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1B9A6 Hash - 0x65C82C94 ^0x421AD701
{
	Hash hash;
	BOOL flag;

	if (!func_722(hParam0))
		return;

	hash = func_119(hParam0);
	flag = false;

	switch (hash)
	{
		case -2061583405:
			flag = func_723(hParam0, &(Global_1946054.f_2657.f_21), Global_1946054.f_2657.f_26.f_1, bParam1);
			break;
	
		case -1719060085:
			flag = func_723(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case -999503751:
			flag = func_723(hParam0, &(Global_1946054.f_2657.f_20), Global_1946054.f_2657.f_26, bParam1);
			break;
	
		case -525676072:
			flag = func_723(hParam0, &(Global_1946054.f_2657.f_22), Global_1946054.f_2657.f_26.f_2, bParam1);
			break;
	
		case -413129408:
			flag = func_723(hParam0, &(Global_1946054.f_2657.f_24), 1, bParam1);
			break;
	
		case 81053684:
			flag = func_723(hParam0, &(Global_1946054.f_2657.f_23), 1, bParam1);
			break;
	}

	if (!flag)
		return;

	if (hParam0 == func_724(0))
	{
		func_725(hParam0, true);
	
		if (func_341() == 1160113249)
			func_725(func_724(-2125499975), false);
		else
			func_725(func_724(1160113249), false);
	}

	func_726();

	if (func_727(hash))
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_241(false), hParam0, 0);

	func_721(hParam0, bParam3);

	if (bParam2)
		func_605(false, false);

	return;
}

void func_666(Ped pedParam0, var uParam1) // Position - 0x1BB0C Hash - 0xEFD384E2 ^0xD2D4DFA3
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
				if (func_267(uParam1->[i]))
					WEAPON::GIVE_WEAPON_TO_PED(pedParam0, uParam1->[i], 0, false, false, 0, false, 1056964608, 1065353216, 752097756, false, 0, false);
		
			weaponHash = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &weaponHash, false, i, true);
		
			if (weaponHash != uParam1->[i])
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, uParam1->[i], true, i, false, false);
		}
	}

	return;
}

var func_667(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1BBB5 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_668(var uParam0, int iParam1) // Position - 0x1BBCC Hash - 0xD05180BA ^0x39589262
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

void func_669(var uParam0, int iParam1) // Position - 0x1BC52 Hash - 0x96B01D2A ^0x81E68218
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 62914560;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22);
	return;
}

void func_670(var uParam0, int iParam1) // Position - 0x1BC8E Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_580(*uParam0);
	num2 = func_579(*uParam0);

	if (iParam1 < 1 || iParam1 > func_585(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 4063232;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17);
	return;
}

void func_671(var uParam0, int iParam1) // Position - 0x1BCE1 Hash - 0xEAE0DB0 ^0x5D80487B
{
	if (iParam1 < 0 || iParam1 > 23)
		return;

	*uParam0 = *uParam0 - *uParam0 & 126976;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12);
	return;
}

void func_672(var uParam0, int iParam1) // Position - 0x1BD1C Hash - 0x7641A9E6 ^0xCBDBD6AE
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 4032;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6);
	return;
}

void func_673(var uParam0, int iParam1) // Position - 0x1BD55 Hash - 0xE78E2A7B ^0x42E1E438
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 63;
	*uParam0 = *uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0);
	return;
}

BOOL func_674(int iParam0) // Position - 0x1BD8D Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_584(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_583(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_582(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_579(iParam0);

	if (num4 <= 0 || num4 > 1930 || num4 < 1866)
		return false;

	num5 = func_580(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_581(iParam0);

	if (num6 < 1 || num6 > func_585(num5, num4))
		return false;

	return true;
}

BOOL func_675(var uParam0, int iParam1) // Position - 0x1BE69 Hash - 0x718DD1EF ^0xA172DFD1
{
	return uParam0->f_1 && iParam1 != false;
}

void func_676(var uParam0, int iParam1, int iParam2) // Position - 0x1BE7A Hash - 0xDEDED6D0 ^0xB4D62998
{
	uParam0->f_1 = uParam0->f_1 || iParam1;
	return;
}

BOOL func_677(int iParam0, int iParam1) // Position - 0x1BE8D Hash - 0x718DD1EF ^0xA172DFD1
{
	return iParam0->f_1 && iParam1 != false;
}

void func_678(int iParam0, int iParam1) // Position - 0x1BE9E Hash - 0x53A96DDB ^0x6089064A
{
	iParam0->f_1 = iParam0->f_1 || iParam1;
	return;
}

void func_679(Hash hParam0, int iParam1, int iParam2) // Position - 0x1BEB1 Hash - 0xC2C59C9E ^0x9DCB6812
{
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_680(Hash hParam0, int iParam1, int iParam2) // Position - 0x1BF0C Hash - 0x7711D950 ^0x19070BC5
{
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *hParam0 };
	Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 = Global_36638.f_45.f_350.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 - Global_26796.f_26[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/].f_2 & 1;
	return;
}

void func_681(var uParam0, int iParam1) // Position - 0x1BF76 Hash - 0x5B4F430F ^0xA0DE91CC
{
	int i;

	if (func_122() == -1)
	{
		if (iParam1 == -1)
			iParam1 = Global_26796.f_776;
	
		Global_26796.f_26[iParam1 /*120*/].f_1 = *uParam0;
	
		for (i = 0; i < 39; i = i + 1)
		{
			func_679(&uParam0->f_1[i /*3*/], i, iParam1);
		}
	
		return;
	}

	if (iParam1 == -1)
		iParam1 = Global_36638.f_45.f_350.f_1011;

	Global_36638.f_45.f_350.f_26[iParam1 /*120*/].f_1 = *uParam0;

	for (i = 0; i < 39; i = i + 1)
	{
		func_680(&uParam0->f_1[i /*3*/], i, iParam1);
	}

	return;
}

void func_682(BOOL bParam0, int iParam1, int iParam2) // Position - 0x1C012 Hash - 0x22FA317E ^0x7C0991BF
{
	if (func_122() == -1)
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

void func_683(int iParam0) // Position - 0x1C09A Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1946054.f_978 = iParam0;
	return;
}

BOOL func_684(Hash hParam0) // Position - 0x1C0AB Hash - 0x1FFCC90D ^0x701F5DF1
{
	if (!func_83(hParam0, 0))
		return false;

	if (func_31(hParam0, -1066545920))
		return true;

	return false;
}

BOOL func_685(Hash hParam0) // Position - 0x1C0D5 Hash - 0x1FFCC90D ^0xAD3356F0
{
	if (!func_83(hParam0, 0))
		return false;

	if (func_31(hParam0, -284267618))
		return true;

	return false;
}

BOOL func_686(Hash hParam0) // Position - 0x1C0FF Hash - 0x1FFCC90D ^0xE43ED45D
{
	if (!func_83(hParam0, 0))
		return false;

	if (func_31(hParam0, 363491182))
		return true;

	return false;
}

BOOL func_687(Hash hParam0) // Position - 0x1C129 Hash - 0x1FFCC90D ^0xCB06CB57
{
	if (!func_83(hParam0, 0))
		return false;

	if (func_31(hParam0, 1406113494))
		return true;

	return false;
}

Hash func_688(int iParam0, int iParam1) // Position - 0x1C153 Hash - 0xD72223E5 ^0xD72223E5
{
	switch (iParam1)
	{
		case 0:
			return func_728(iParam0);
	
		case 1:
			return func_729(iParam0);
	
		case 2:
			return func_730(iParam0);
	
		case 3:
			return func_731(iParam0);
	}

	return 0;
}

Hash func_689(int iParam0, int iParam1) // Position - 0x1C1AC Hash - 0x8B23AC7F ^0x8B23AC7F
{
	switch (iParam1)
	{
		case 0:
			return func_732(iParam0);
	
		case 1:
			return func_733(iParam0);
	
		case 2:
			return func_734(iParam0);
	
		case 3:
			return func_735(iParam0);
	
		case 4:
			return func_736(iParam0);
	
		case 5:
			return func_737(iParam0);
	
		case 6:
			return func_738(iParam0);
	
		case 7:
			return func_739(iParam0);
	
		case 8:
			return func_740(iParam0);
	}

	return 0;
}

BOOL func_690(Hash hParam0, int iParam1) // Position - 0x1C25F Hash - 0x930C4241 ^0x2C8F95BA
{
	return iParam1 == func_69(hParam0, 1224357681);
}

BOOL func_691(Hash hParam0) // Position - 0x1C275 Hash - 0xA839C3B7 ^0xFE515ADA
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

BOOL func_692(Hash hParam0, int iParam1) // Position - 0x1C2C6 Hash - 0xBD05594F ^0xF2BC2977
{
	if (func_122() == -1)
		if (iParam1 == 61)
			if (func_31(hParam0, 1490540191))
				return true;

	return false;
}

BOOL func_693(Hash hParam0, int iParam1) // Position - 0x1C2F0 Hash - 0x83A1723C ^0x83A1723C
{
	var unk;
	int num;
	Hash hash;

	if (hParam0 == 0)
		return 0;

	if (iParam1 == -1)
		return 0;

	num = func_741(iParam1);

	if (num == -1)
		return 0;

	if (!func_414(6, &unk))
		return 0;

	unk.f_2 = -815325344;
	unk.f_3 = func_742(num);

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

Hash func_694(Hash hParam0) // Position - 0x1C372 Hash - 0x26530429 ^0xECF5329B
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

BOOL func_695(Hash hParam0, Hash hParam1) // Position - 0x1C3C9 Hash - 0x97EE4136 ^0x97EE4136
{
	int num;

	num = func_251(hParam0, 20);

	if (num == 5)
		if (func_700(hParam0, 5, false) && func_700(hParam0, 6, false) && func_700(hParam0, 7, false) && func_700(hParam0, 8, false) && func_700(hParam0, 9, false))
			return func_116(hParam1, 8388608);
	else if (num == 4)
		if (func_700(hParam0, 5, false) && func_700(hParam0, 6, false) && func_700(hParam0, 7, false) && func_700(hParam0, 8, false))
			return func_116(hParam1, 8388608);
	else if (num == 3)
		if (func_700(hParam0, 5, false) && func_700(hParam0, 6, false) && func_700(hParam0, 7, false))
			return func_116(hParam1, 8388608);
	else if (num == 2)
		if (func_700(hParam0, 5, false) && func_700(hParam0, 6, false))
			return func_116(hParam1, 8388608);

	return false;
}

Hash func_696(Hash hParam0) // Position - 0x1C4EE Hash - 0xB8EC44B7 ^0x1B1A64FC
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

Hash func_697(Hash hParam0) // Position - 0x1C6A3 Hash - 0xB8EC44B7 ^0xCC0DC7B6
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

BOOL func_698(Hash hParam0) // Position - 0x1C740 Hash - 0xE48228D0 ^0xE48228D0
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

Hash func_699(Hash hParam0) // Position - 0x1C7A6 Hash - 0xB8EC44B7 ^0x75D9F70F
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

BOOL func_700(Hash hParam0, int iParam1, BOOL bParam2) // Position - 0x1C86D Hash - 0xC1832837 ^0xFC89CC12
{
	Hash hash;

	hash = func_311(hParam0, iParam1);

	if (hash == joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT") || hash == joaat("provision_fish_bullhead_catfish_legendary") || hash == joaat("provision_fish_chain_pickerel_legendary") || hash == joaat("provision_fish_perch_legendary") || hash == joaat("provision_fish_redfin_pickerel_legendary") || hash == joaat("provision_fish_rock_bass_legendary") || hash == joaat("provision_fish_bluegill_legendary"))
	{
		if (func_61(hash, 1, false))
		{
			if (bParam2)
			{
				Global_1901328.f_94 = 1;
				func_743(hash, 1, false, -142743235, false);
			}
		
			return true;
		}
	}
	else if (hash == joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT") || hash == joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT") || hash == joaat("provision_fish_lake_sturgeon_legendary") || hash == joaat("provision_fish_longnose_gar_legendary") || hash == joaat("provision_fish_muskie_legendary") || hash == joaat("provision_fish_largemouth_bass_legendary") || hash == joaat("provision_fish_smallmouth_bass_legendary") || hash == joaat("provision_fish_sockeye_salmon_legendary") || hash == joaat("provision_fish_steelhead_trout_legendary"))
	{
		if (func_744(hash, bParam2))
			return true;
	}

	return false;
}

BOOL func_701(Hash hParam0) // Position - 0x1CA76 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_702(Hash hParam0) // Position - 0x1CADC Hash - 0xE48228D0 ^0xE48228D0
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

void func_703(BOOL bParam0) // Position - 0x1CB3C Hash - 0x6C3953AD ^0xF72D6E5A
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
	return;
}

void func_704(int iParam0, int iParam1) // Position - 0x1CB4C Hash - 0x978E21B ^0x703A4DC6
{
	int address;

	address = Global_1905944[iParam0];
	MISC::CLEAR_BIT(&address, iParam1);
	Global_1905944[iParam0] = address;
	return;
}

BOOL func_705(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CB70 Hash - 0xC9655EC3 ^0x88C9AFE1
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

int func_706(BOOL bParam0) // Position - 0x1CC0E Hash - 0x825A04C0 ^0x825A04C0
{
	return bParam0 & 31;
}

BOOL func_707(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1CC1B Hash - 0x561CE123 ^0xB84B7B4C
{
	if (iParam0 == 18)
		return false;

	if (iParam0 == 71)
		return false;

	if (bParam1 && MAP::DOES_BLIP_EXIST(Global_1835011[iParam0 /*74*/].f_27) && Global_1835011[iParam0 /*74*/].f_21 == iParam2)
		return true;

	return false;
}

BOOL func_708(int iParam0) // Position - 0x1CC68 Hash - 0x67D822A ^0x67D822A
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_745(&Global_1835011[iParam0 /*74*/]);
	}

	return false;
}

BOOL func_709(int iParam0) // Position - 0x1CC98 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 7:
		case 36:
			return 1;
	}

	return 0;
}

BOOL func_710(int iParam0) // Position - 0x1CCBC Hash - 0xD24FFBD ^0x9719C36F
{
	iParam0 = func_746(iParam0);

	if (iParam0 <= -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
		return true;

	return false;
}

BOOL func_711(int iParam0) // Position - 0x1CCF4 Hash - 0xB5D64937 ^0xB5D64937
{
	Ped ped;

	iParam0 = func_746(iParam0);

	if (iParam0 == -1)
		return false;

	if (iParam0 >= 7)
		return false;

	if (!func_710(iParam0))
		return false;

	ped = func_712(iParam0);

	if (ENTITY::IS_ENTITY_DEAD(ped) || PED::IS_PED_INJURED(ped))
		return true;

	return false;
}

Ped func_712(int iParam0) // Position - 0x1CD48 Hash - 0x10419DB6 ^0x10419DB6
{
	iParam0 = func_746(iParam0);

	if (iParam0 == -1)
		return 0;

	if (iParam0 >= 7)
		return 0;

	return Global_1900383[iParam0 /*45*/];
}

void func_713(var uParam0) // Position - 0x1CD74 Hash - 0x6843C143 ^0xA531F0D1
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

int func_714(int iParam0) // Position - 0x1CE1B Hash - 0x1B64DC55 ^0x1B64DC55
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

void func_715(Ped pedParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1CE53 Hash - 0x125E1FB8 ^0x58C5F328
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

BOOL func_716(Any anParam0, Ped pedParam1, int iParam2, var uParam3) // Position - 0x1CEC8 Hash - 0xF684EE16 ^0xD8F147D7
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

void func_717(Hash hParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1CEF1 Hash - 0xB00F2D2F ^0xF97C1EB9
{
	BOOL flag;

	switch (func_119(hParam0))
	{
		case -2061583405:
			flag = func_747(hParam0, &(Global_1946054.f_2657.f_21));
			break;
	
		case -1719060085:
			flag = func_747(hParam0, &(Global_1946054.f_2657.f_24));
			break;
	
		case -999503751:
			flag = func_747(hParam0, &(Global_1946054.f_2657.f_20));
			break;
	
		case -525676072:
			flag = func_747(hParam0, &(Global_1946054.f_2657.f_22));
			break;
	
		case -413129408:
			flag = func_747(hParam0, &(Global_1946054.f_2657.f_25));
			break;
	
		case 81053684:
			flag = func_747(hParam0, &(Global_1946054.f_2657.f_23));
			break;
	}

	if (!flag)
		return;

	if (bParam2)
		func_726();

	if (bParam1)
		func_605(false, false);

	return;
}

void func_718(int iParam0) // Position - 0x1CFBE Hash - 0x958E8FB2 ^0x9CA4541C
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
	unk = { func_398(0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, iParam0) };

	if (func_400(&unk, &num, &num2, false))
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

void func_719(var uParam0, Hash hParam1, int iParam2) // Position - 0x1D088 Hash - 0xDDA2D03E ^0x15888349
{
	if (*uParam0 >= 13)
		return;

	func_748(iParam2, *uParam0);
	func_749(&uParam0->f_1[*uParam0 /*5*/], hParam1, -1, true, 0);
	*uParam0 = *uParam0 + 1;
	return;
}

BOOL func_720(Hash hParam0, BOOL bParam1) // Position - 0x1D0BE Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_234(hParam0, false, false) };
	guid = { func_272(hParam0, unk, unk.f_4, false) };

	if (func_397(hParam0, unk, unk.f_4, false) <= 0)
		return false;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_241(false), &guid, bParam1);
	return true;
}

void func_721(Hash hParam0, BOOL bParam1) // Position - 0x1D10A Hash - 0xE53C6141 ^0xE235D8BA
{
	var unk;
	var guid;

	unk = { func_234(hParam0, false, false) };
	guid = { func_272(hParam0, unk, unk.f_4, false) };

	if (func_397(hParam0, unk, unk.f_4, false) <= 0)
		return;

	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_241(false), &guid, bParam1);
	return;
}

BOOL func_722(Hash hParam0) // Position - 0x1D154 Hash - 0x701FABE1 ^0x8D951E11
{
	if (func_122() == -1)
		if (Global_40.f_4283 != 0)
			if (hParam0 == 1164374808)
				return false;

	return true;
}

BOOL func_723(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1D17D Hash - 0x23FDC0AC ^0x7E5464B5
{
	var unk;
	Hash hash;

	hash = hParam0;

	if (Global_1946054.f_2657.f_19 >= 18)
		return 0;

	if (*iParam1 >= iParam2)
		return 0;

	if (func_750(hash, &unk))
		return 0;

	if (bParam3 && !func_720(hParam0, false))
		return 0;

	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = hash;

	if (func_119(hParam0) != -999503751)
		func_719(&(Global_1946054.f_2657.f_26.f_26), hParam0, Global_1946054.f_2657.f_19);

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 + 1;
	*iParam1 = *iParam1 + 1;
	return 1;
}

Hash func_724(int iParam0) // Position - 0x1D225 Hash - 0x76CF7738 ^0x832144C4
{
	if (iParam0 == 0)
		iParam0 = func_341();

	if (iParam0 == 1160113249)
		return joaat("clothing_p3_player_three_ms1_hat_000_000");

	return joaat("clothing_item_hat_pzero_000");
}

int func_725(Hash hParam0, BOOL bParam1) // Position - 0x1D250 Hash - 0xBA02B72A ^0xF9656CC1
{
	var unk;
	var guid;

	unk = { func_234(hParam0, false, false) };
	guid = { func_272(hParam0, unk, unk.f_4, false) };

	if (func_397(hParam0, unk, unk.f_4, false) <= 0)
		return 0;

	INVENTORY::_0x0349404A22736740(bParam1, func_241(false), &guid);
	return 1;
}

void func_726() // Position - 0x1D29C Hash - 0x859243 ^0xC9B77C68
{
	int i;

	if (func_122() == -1)
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

BOOL func_727(Hash hParam0) // Position - 0x1D3D2 Hash - 0x616E2FF8 ^0x616E2FF8
{
	return func_752(func_751(hParam0));
}

Hash func_728(int iParam0) // Position - 0x1D3E4 Hash - 0xC02FF737 ^0xE6E3E291
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

Hash func_729(int iParam0) // Position - 0x1D473 Hash - 0xC02FF737 ^0x9CC78C98
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

Hash func_730(int iParam0) // Position - 0x1D502 Hash - 0xC02FF737 ^0x26BFE76B
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

Hash func_731(int iParam0) // Position - 0x1D591 Hash - 0xC02FF737 ^0xC89D76B1
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

Hash func_732(int iParam0) // Position - 0x1D620 Hash - 0x51E02475 ^0x6FAD83C9
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

Hash func_733(int iParam0) // Position - 0x1D669 Hash - 0x51E02475 ^0x73BA00BD
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

Hash func_734(int iParam0) // Position - 0x1D6B2 Hash - 0x51E02475 ^0xD39CAF97
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

Hash func_735(int iParam0) // Position - 0x1D6FB Hash - 0x51E02475 ^0xB8F3F001
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

Hash func_736(int iParam0) // Position - 0x1D744 Hash - 0x51E02475 ^0xCED8E5FA
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

Hash func_737(int iParam0) // Position - 0x1D78D Hash - 0x51E02475 ^0x25F7B61
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

Hash func_738(int iParam0) // Position - 0x1D7D6 Hash - 0x51E02475 ^0xE0DEBCEF
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

Hash func_739(int iParam0) // Position - 0x1D81F Hash - 0x51E02475 ^0x50FB5131
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

Hash func_740(int iParam0) // Position - 0x1D868 Hash - 0x51E02475 ^0x8656D204
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

int func_741(int iParam0) // Position - 0x1D8B1 Hash - 0x1497AC6A ^0x1497AC6A
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

int func_742(int iParam0) // Position - 0x1DD05 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_753(iParam0);
}

int func_743(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3, BOOL bParam4) // Position - 0x1DD13 Hash - 0x3C2EC293 ^0xC2A7C7CB
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	Hash ammoType;
	int pedAmmoByType;
	var statId;

	if (!func_83(hParam0, 0))
		return 0;

	flag = hParam3 == 562618531;
	flag2 = hParam3 == 1992602754;
	flag3 = hParam3 == -1387038764;
	ammoType = func_239(hParam0, 1);

	if (ammoType != 0)
	{
		pedAmmoByType = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, ammoType);
		pedAmmoByType = pedAmmoByType - iParam1;
	
		if (pedAmmoByType < 0)
			return 0;
	
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, ammoType, iParam1, hParam3);
	
		if (!bParam2)
			func_178(hParam0, -iParam1, flag, flag2, flag3);
	
		return 0;
	}

	if (!func_61(hParam0, 1, bParam4))
		return 0;

	statId = { func_175(hParam0) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_98(hParam0, false, false) - iParam1 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam1);
		}
		else if (func_98(hParam0, false, false) - iParam1 < 0)
		{
			func_743(hParam0, func_98(hParam0, false, false), bParam2, hParam3, bParam4);
			return 0;
		}
	}

	if (func_115(hParam0) == joaat("WEAPON"))
		if (!func_754(hParam0, iParam1, false, hParam3))
			return 0;
	else if (!func_755(hParam0, iParam1, hParam3, bParam2, bParam4))
		return 0;

	if (hParam0 == joaat("document_player_journal"))
		Global_1935496.f_20 = 0;

	if (!func_124(false))
		bParam2 = true;

	if (!bParam2 && hParam0 != 1309979101)
		func_178(hParam0, -iParam1, flag, flag2, flag3);

	func_756(hParam0, iParam1);
	return 1;
}

BOOL func_744(Hash hParam0, BOOL bParam1) // Position - 0x1DE87 Hash - 0xD42AA8CA ^0x22FA3BAF
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
					num = func_757(pedIndexFromEntityIndex, &unk);
					hash2 = func_758(entityFromItem);
				
					if (hash2 == hParam0)
					{
						if (bParam1)
						{
							Global_1901328.f_94 = 1;
							ENTITY::_DELETE_CARRIABLE(&entityFromItem);
							func_178(hash2, -1, false, false, false);
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
								func_178(unk[j], -1, false, false, false);
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
					func_715(pedIndexFromEntityIndex2, &unk12, &unk13, &num2, &unk14);
				
					if (func_716(&hash, pedIndexFromEntityIndex2, num2, unk12))
					{
						if (hash == hParam0)
						{
							if (bParam1)
							{
								Global_1901328.f_94 = 1;
								ENTITY::_DELETE_CARRIABLE(&entityFromItem);
								func_178(hash, -1, false, false, false);
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

	return func_759(hParam0, bParam1);
}

BOOL func_745(int iParam0) // Position - 0x1E014 Hash - 0xDFF4679C ^0x26F038D0
{
	if (func_760(&(iParam0->f_29), 62))
	{
		switch (func_761())
		{
			case 1:
				if (!func_760(&(iParam0->f_29), 6))
					return false;
				break;
		
			case 2:
				if (!func_760(&(iParam0->f_29), 8))
					return false;
				break;
		
			case 4:
				if (!func_760(&(iParam0->f_29), 16))
					return false;
				break;
		
			case 8:
				if (!func_760(&(iParam0->f_29), 32))
					if (func_760(&(iParam0->f_29), 2))
						if (func_582(func_447()) < 5)
							return false;
					else
						return false;
				break;
		}
	}

	return true;
}

int func_746(int iParam0) // Position - 0x1E0BE Hash - 0x802A6C1 ^0x802A6C1
{
	if (iParam0 == 7)
		return Global_40.f_1095;

	return iParam0;
}

BOOL func_747(Hash hParam0, int iParam1) // Position - 0x1E0D7 Hash - 0xC4C2E73D ^0x83FF84C9
{
	int num;
	Hash hash;

	hash = hParam0;

	if (!func_750(hash, &num))
		return 0;

	if (Global_1946054.f_2657.f_19 == 1)
	{
		Global_1946054.f_2657.f_19 = 0;
		*iParam1 = 0;
	
		if (func_119(hParam0) != -999503751)
			func_762(&(Global_1946054.f_2657.f_26), 0, Global_1946054.f_2657.f_19);
	
		Global_1946054.f_2657[0] = 0;
		return 1;
	}

	Global_1946054.f_2657.f_19 = Global_1946054.f_2657.f_19 - 1;
	*iParam1 = *iParam1 - 1;
	Global_1946054.f_2657[num] = Global_1946054.f_2657[Global_1946054.f_2657.f_19];
	Global_1946054.f_2657[Global_1946054.f_2657.f_19] = 0;

	if (func_119(hParam0) != -999503751)
		func_762(&(Global_1946054.f_2657.f_26), num, Global_1946054.f_2657.f_19);

	func_720(hParam0, true);
	return 1;
}

void func_748(int iParam0, int iParam1) // Position - 0x1E1BD Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_749(var uParam0, Hash hParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x1E1D6 Hash - 0x45C7B33 ^0xF6637CED
{
	if (PED::_IS_META_PED_ASSET_VALID(uParam0->f_3.f_1))
		func_763(uParam0);

	if (iParam2 == -1)
	{
		uParam0->f_1 = func_320(func_450(hParam1), 1);
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
		func_764(uParam0);

	return;
}

BOOL func_750(Hash hParam0, var uParam1) // Position - 0x1E232 Hash - 0x4A27386E ^0xBC93C855
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

int func_751(Hash hParam0) // Position - 0x1E272 Hash - 0x497B15BA ^0x497B15BA
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

BOOL func_752(int iParam0) // Position - 0x1E2C2 Hash - 0x8364EAF ^0xECEEE8D3
{
	return Global_1946054.f_2657.f_26.f_6 && iParam0 != false;
}

int func_753(int iParam0) // Position - 0x1E2DA Hash - 0xB8EC44B7 ^0x486668F8
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

BOOL func_754(Hash hParam0, int iParam1, BOOL bParam2, Hash hParam3) // Position - 0x1E4C7 Hash - 0x17E58D7C ^0xB0311DE1
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

	unk = { func_398(hParam0, joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), joaat("SLOTID_NONE"), 0, 0) };

	if (bParam2)
		func_399(&unk, func_389(false));

	if (!func_400(&unk, &num, &num2, false))
		return false;

	unk19.f_9 = joaat("SLOTID_NONE");

	for (i = 0; i < num2; i = i + 1)
	{
		if (num3 >= iParam1)
			break;
	
		if (!func_330(&unk19, i, num, num2))
		{
		}
		else
		{
			unk33.f_4 = unk19.f_9;
			unk33 = { unk19.f_5 };
		
			if (func_273(hParam0, &unk19, &unk33, 1, hParam3, 0, false))
				num3 = num3 + 1;
		}
	}

	func_9(num);
	num3 < iParam1;
	return true;
}

BOOL func_755(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1E592 Hash - 0x1BAC1FBB ^0xC7130937
{
	var unk;
	var unk6;

	if (!func_83(hParam0, 0))
		return false;

	if (iParam1 < 1)
		return false;

	unk = { func_234(hParam0, bParam4, true) };

	if (unk.f_4 == joaat("SLOTID_SATCHEL"))
		return func_765(hParam0, iParam1, hParam2, bParam3, bParam4);

	unk6 = { func_272(hParam0, unk, unk.f_4, bParam4) };
	return func_273(hParam0, &unk6, &unk, iParam1, hParam2, bParam3, bParam4);
}

void func_756(Hash hParam0, int iParam1) // Position - 0x1E603 Hash - 0x54327D01 ^0xB51B9F1D
{
	if (!Global_1901328.f_94)
	{
		if (func_31(hParam0, 606799272))
			func_766(hParam0, iParam1);
	
		if (func_31(hParam0, -1112814642) && func_31(hParam0, -1697809989))
			func_146(hParam0, iParam1, true, false);
	}

	return;
}

int func_757(Ped pedParam0, Any* panParam1) // Position - 0x1E656 Hash - 0xC08B2C8D ^0x93715860
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

	func_715(pedParam0, &skinningQuality, &unk, &damageCleanliness, &unk2);
	num = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(panParam1, pedParam0, damageCleanliness, skinningQuality);
	return num;
}

Hash func_758(Entity eParam0) // Position - 0x1E6A4 Hash - 0xC81C18F9 ^0xACAAEE80
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

	func_715(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);

	if (func_716(&num2, pedIndexFromEntityIndex, num, unk))
	{
	}

	return num2;
}

BOOL func_759(Hash hParam0, BOOL bParam1) // Position - 0x1E700 Hash - 0xB6F8966C ^0x3A39AAD0
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
	ped = func_767(0);

	if (ENTITY::DOES_ENTITY_EXIST(ped) && func_768(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(ped), &unk, &num, &num2))
	{
		i = 0;
	
		for (i = 0; i < num2; i = i + 1)
		{
			if (func_330(&unk19, i, num, num2))
			{
				if (hParam0 == unk19.f_4)
				{
					if (bParam1)
					{
						num3 = 1;
						func_769(&ped, hParam0, &num3, true, -142743235);
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

BOOL func_760(var uParam0, int iParam1) // Position - 0x1E7F2 Hash - 0x68CD914D ^0x68CD914D
{
	BOOL flag;

	flag = *uParam0 && iParam1;

	if (!(flag == false))
		return true;

	return false;
}

int func_761() // Position - 0x1E812 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1899516;
}

void func_762(int iParam0, int iParam1, int iParam2) // Position - 0x1E81E Hash - 0x76104A96 ^0xBBB9FCC8
{
	int num;
	int num2;

	num2 = func_770(iParam1);
	func_771(iParam1, iParam2);

	if (num2 >= 0 && iParam0->f_26 > 0)
	{
		func_772(&(iParam0->f_26), num2);
	
		if (func_773(iParam0->f_26, &num))
			func_774(num, num2);
	}

	return;
}

void func_763(var uParam0) // Position - 0x1E867 Hash - 0xB6E53040 ^0xB4A5DF25
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_775(&(uParam0->f_3));
	return;
}

void func_764(var uParam0) // Position - 0x1E885 Hash - 0xEA76ACA4 ^0x1B09C151
{
	if (uParam0->f_3)
		return;

	func_776(&(uParam0->f_3), *uParam0, uParam0->f_2);
	return;
}

BOOL func_765(Hash hParam0, int iParam1, Hash hParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1E8A6 Hash - 0x7CDDEAB4 ^0x7CDDEAB4
{
	int num;

	if (func_445(hParam0))
		return false;

	if (iParam1 <= 0)
		return false;

	if (!func_124(bParam4))
	{
		num = -1;
		return num != -1;
	}

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_241(bParam4), hParam0, iParam1, hParam2))
		return false;

	return true;
}

void func_766(Hash hParam0, int iParam1) // Position - 0x1E8F2 Hash - 0x86EED885 ^0xCCBC7389
{
	int num;

	num = 0;

	if (func_122() == -1)
	{
		if (func_104(43))
		{
			if (func_31(hParam0, 412399755))
			{
				func_304(joaat("exotic_stage_01"));
			
				if (func_305() == 0)
				{
					func_245(false, 10);
					num = func_777(hParam0, iParam1, 1);
				
					if (hParam0 == joaat("PROVISION_EGRET_PLUME_LITTLE") || hParam0 == joaat("PROVISION_EGRET_PLUME_REDDISH") || hParam0 == joaat("PROVISION_EGRET_PLUME_SNOWY") || hParam0 == joaat("provision_ro_flower_lady_of_night"))
						if (func_307(hParam0) < func_308(hParam0))
							func_112(43, hParam0, iParam1, joaat("exotic_stage_01"), num, true, -1, false);
				}
			}
		}
	
		if (func_104(44))
		{
			if (func_31(hParam0, 709057512))
			{
				func_304(joaat("exotic_stage_02"));
			
				if (func_305() == 1)
				{
					func_245(false, 10);
					num = func_777(hParam0, iParam1, 2);
				
					if (hParam0 == joaat("PROVISION_HERON_FEATHER") || hParam0 == joaat("provision_ro_flower_lady_slipper") || hParam0 == joaat("provision_ro_flower_moccasin"))
						if (func_307(hParam0) < func_308(hParam0))
							func_112(43, hParam0, iParam1, joaat("exotic_stage_02"), num, true, -1, false);
				}
			}
		}
	
		if (!func_104(45))
		{
			if (func_31(hParam0, -1478961327))
			{
				func_304(joaat("exotic_stage_03"));
			
				if (func_305() == 2)
				{
					func_245(false, 10);
					num = func_777(hParam0, iParam1, 4);
				
					if (hParam0 == joaat("PROVISION_GATOR_EGG") || hParam0 == joaat("provision_ro_flower_acunas_star") || hParam0 == joaat("provision_ro_flower_cigar") || hParam0 == joaat("provision_ro_flower_ghost"))
						if (func_307(hParam0) < func_308(hParam0))
							func_112(43, hParam0, iParam1, joaat("exotic_stage_03"), num, true, -1, false);
				}
			}
		}
	
		if (!func_104(46))
		{
			if (func_31(hParam0, -1238404098))
			{
				func_304(joaat("exotic_stage_04"));
			
				if (func_305() == 3)
				{
					func_245(false, 10);
					num = func_777(hParam0, iParam1, 8);
				
					if (hParam0 == joaat("PROVISION_SPOONBILL_FEATHER") || hParam0 == joaat("provision_ro_flower_night_scented") || hParam0 == joaat("provision_ro_flower_rat_tail") || hParam0 == joaat("provision_ro_flower_spider"))
						if (func_307(hParam0) < func_308(hParam0))
							func_112(43, hParam0, iParam1, joaat("exotic_stage_04"), num, true, -1, false);
				}
			}
		}
	
		if (!func_104(47))
		{
			if (func_31(hParam0, 1160548794))
			{
				func_304(joaat("exotic_stage_05"));
			
				if (func_305() == 4)
				{
					func_245(false, 10);
					num = func_777(hParam0, iParam1, 16);
				
					if (hParam0 == joaat("provision_ro_flower_clamshell") || hParam0 == joaat("provision_ro_flower_dragons") || hParam0 == joaat("provision_ro_flower_sparrows") || hParam0 == joaat("provision_ro_flower_queens"))
						if (func_307(hParam0) < func_308(hParam0))
							func_112(43, hParam0, iParam1, joaat("exotic_stage_05"), num, true, -1, false);
				}
			}
		}
	}

	return;
}

Ped func_767(int iParam0) // Position - 0x1EBD6 Hash - 0x992FCD8C ^0xAA6462C3
{
	Ped lastMount;

	if (func_778(iParam0))
	{
		if (func_122() == -1)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (!ENTITY::DOES_ENTITY_EXIST(lastMount))
				lastMount = func_712(func_746(0));
		}
		else
		{
			lastMount = PED::_GET_LAST_MOUNT(func_779());
		}
	}
	else if (func_122() == -1)
	{
		lastMount = func_712(0);
	}
	else
	{
		lastMount = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}

	return lastMount;
}

BOOL func_768(int iParam0, Any* panParam1, var uParam2, int* piParam3) // Position - 0x1EC3B Hash - 0x691EB829 ^0xDB420511
{
	*uParam2 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(iParam0, panParam1, piParam3);

	if (*uParam2 >= 0)
		return true;

	return false;
}

int func_769(var uParam0, Hash hParam1, var uParam2, BOOL bParam3, Hash hParam4) // Position - 0x1EC5C Hash - 0x69EE725C ^0x4869D6F1
{
	int inventoryIdFromPed;
	int num;
	var statId;
	int num2;

	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
		return 0;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*uParam0);
	num = func_780(inventoryIdFromPed, hParam1);

	if (func_781(*uParam0, hParam1, *uParam2, bParam3, hParam4))
	{
		statId = { func_175(hParam1) };
	
		if (STATS::STAT_ID_IS_VALID(&statId))
			STATS::_STAT_ID_DECREMENT_INT(&statId, *uParam2);
	
		if (func_782(hParam1))
		{
			func_783(*uParam0, hParam1, *uParam2);
		}
		else
		{
			func_783(*uParam0, hParam1, *uParam2);
			func_784(*uParam0, hParam1, *uParam2, true);
		}
	
		num2 = num - func_780(inventoryIdFromPed, hParam1);
		*uParam2 = *uParam2 - num2;
		return 1;
	}

	return 0;
}

int func_770(int iParam0) // Position - 0x1ED04 Hash - 0xF467740D ^0xD2664C5C
{
	return Global_1946054.f_2657.f_26.f_7[iParam0];
}

void func_771(int iParam0, int iParam1) // Position - 0x1ED1B Hash - 0x91F4E65D ^0xD2E825BC
{
	int num;

	num = Global_1946054.f_2657.f_26.f_7[iParam0];
	Global_1946054.f_2657.f_26.f_7[iParam0] = Global_1946054.f_2657.f_26.f_7[iParam1];
	Global_1946054.f_2657.f_26.f_7[iParam1] = num;
	return;
}

void func_772(var uParam0, int iParam1) // Position - 0x1ED63 Hash - 0x344D10E ^0xFB8D9D9B
{
	*uParam0 = *uParam0 - 1;
	func_763(&uParam0->f_1[iParam1 /*5*/]);
	uParam0->f_1[iParam1 /*5*/] = { uParam0->f_1[*uParam0 /*5*/] };
	return;
}

BOOL func_773(int iParam0, var uParam1) // Position - 0x1ED94 Hash - 0xE231A73F ^0x924E070C
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

void func_774(int iParam0, int iParam1) // Position - 0x1EDD8 Hash - 0x92E1BA9F ^0x719AD6CD
{
	Global_1946054.f_2657.f_26.f_7[iParam0] = iParam1;
	return;
}

void func_775(var uParam0) // Position - 0x1EDF1 Hash - 0x1F1EBE47 ^0xBF1144AB
{
	if (*uParam0 && PED::_IS_META_PED_ASSET_VALID(uParam0->f_1))
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(uParam0->f_1);
		uParam0->f_1 = -1;
	}

	*uParam0 = 0;
	return;
}

void func_776(var uParam0, Any anParam1, int iParam2) // Position - 0x1EE1D Hash - 0x8EB42709 ^0xB749D0A2
{
	int metaPedType;

	metaPedType = func_785(func_341());

	if (*uParam0)
		func_775(uParam0);

	uParam0->f_1 = PED::_REQUEST_META_PED_COMPONENT(metaPedType, anParam1, 0, func_122() != -1, iParam2);
	*uParam0 = 1;
	return;
}

int func_777(Hash hParam0, int iParam1, int iParam2) // Position - 0x1EE54 Hash - 0xED49A216 ^0x75828FFF
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

	num2 = func_307(hash);
	num3 = func_307(hash2);
	num4 = func_307(hash3);

	if (iParam2 != 2)
		num5 = func_307(hash4);

	num6 = func_308(hash);
	num7 = func_308(hash2);
	num8 = func_308(hash3);

	if (iParam2 != 2)
		num9 = func_308(hash4);

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

BOOL func_778(BOOL bParam0) // Position - 0x1EFCD Hash - 0x96106777 ^0x8FA2F1AF
{
	Ped lastMount;

	if (func_122() == -1)
	{
		if (Global_1914319.f_17370 || bParam0 || Global_1914319.f_16855 == 2)
		{
			lastMount = PED::_GET_LAST_MOUNT(Global_35);
		
			if (lastMount != func_712(7))
				return true;
		}
		else if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			lastMount = PED::GET_MOUNT(Global_35);
		
			if (lastMount != func_712(7))
				return true;
		}
	}
	else
	{
		lastMount = PED::_GET_LAST_MOUNT(func_779());
	
		if (lastMount != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			return true;
	}

	return false;
}

Ped func_779() // Position - 0x1F058 Hash - 0x14A4F660 ^0xC2F042AC
{
	return PLAYER::GET_PLAYER_PED(255);
}

int func_780(int iParam0, Hash hParam1) // Position - 0x1F066 Hash - 0x9ED796B6 ^0xF436F83
{
	var guid;
	int inventoryItemCountWithGuid;

	if (!func_83(hParam1, 0))
		return 0;

	guid = { func_786(iParam0, hParam1) };

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&guid))
		return 0;

	inventoryItemCountWithGuid = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &guid, false);
	return inventoryItemCountWithGuid;
}

BOOL func_781(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1F0A4 Hash - 0x4239382B ^0xCA53D4CD
{
	int inventoryIdFromPed;
	int num;

	inventoryIdFromPed = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(pedParam0);

	if (func_787(pedParam0))
	{
		num = func_788(pedParam0);
	
		if (func_83(hParam1, 0))
			if (func_782(hParam1))
				func_789(num, hParam1, iParam2);
	}

	return func_790(inventoryIdFromPed, hParam1, iParam2, bParam3, hParam4);
}

BOOL func_782(Hash hParam0) // Position - 0x1F0F0 Hash - 0x32CFAC25 ^0x32CFAC25
{
	int i;
	int num;
	Hash hash;

	if (!func_791(hParam0))
		return false;

	for (i = 0; i < 57; i = i + 1)
	{
		num = func_792(i, 1);
		hash = num;
	
		if (hParam0 == hash)
			return true;
	}

	return false;
}

int func_783(Ped pedParam0, Hash hParam1, int iParam2) // Position - 0x1F132 Hash - 0x40489E01 ^0xFB04AC2C
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

int func_784(Ped pedParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0x1F19A Hash - 0x83735129 ^0x5FB639F3
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
				func_715(pedIndexFromEntityIndex, &unk, &unk2, &num, &unk3);
				func_716(&hash, pedIndexFromEntityIndex, num, unk);
			
				if (!func_83(hash, 0))
					hash = func_793(entityFromItem);
			}
			else
			{
				hash = func_793(entityFromItem);
			}
		
			if (hash == hParam1)
			{
				PED::DETACH_CARRIABLE_ENTITY(entityFromItem, false, false);
			
				if (bParam3)
				{
					func_794(entityFromItem);
					ENTITY::_DELETE_CARRIABLE(&entityFromItem);
				}
			
				iParam2 = iParam2 - 1;
			}
		}
	}

	ITEMSET::DESTROY_ITEMSET(itemset);
	return iParam2;
}

int func_785(int iParam0) // Position - 0x1F27A Hash - 0xB4860741 ^0xB4860741
{
	if (func_122() == -1)
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

struct<4> func_786(int iParam0, Hash hParam1) // Position - 0x1F2D1 Hash - 0x4379F5A3 ^0xD8DD7D07
{
	var unk;

	unk = { func_795(iParam0) };
	return func_796(iParam0, hParam1, unk, unk.f_4);
}

BOOL func_787(Ped pedParam0) // Position - 0x1F2F3 Hash - 0x9634B86A ^0x7C777CAE
{
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	ENTITY::IS_ENTITY_DEAD(pedParam0) || PED::IS_PED_INJURED(pedParam0);
	num = func_788(pedParam0);

	if (num == -1)
		return false;

	return true;
}

int func_788(Ped pedParam0) // Position - 0x1F331 Hash - 0xD44AE303 ^0xA29D7F05
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

void func_789(int iParam0, Hash hParam1, int iParam2) // Position - 0x1F376 Hash - 0xAC28FF72 ^0xA969E0AB
{
	Hash hash;
	int num;

	iParam0 = func_746(iParam0);

	if (iParam0 == -1)
		return;

	if (iParam0 >= 7)
		return;

	hash = func_797(hParam1);
	num = func_798(hash, 1);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] - iParam2;
	Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num] = func_799(Global_40.f_1095.f_1[iParam0 /*436*/].f_298[num], 0, 10);
	return;
}

BOOL func_790(int iParam0, Hash hParam1, int iParam2, BOOL bParam3, Hash hParam4) // Position - 0x1F403 Hash - 0x58967A60 ^0x975E68C3
{
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	var statId;

	if (!func_83(hParam1, 0))
		return 0;

	flag = hParam4 == 562618531;
	flag2 = hParam4 == 1992602754;
	flag3 = hParam4 == -1387038764;

	if (!func_800(iParam0, hParam1, 1))
		return 0;

	statId = { func_175(hParam1) };

	if (STATS::STAT_ID_IS_VALID(&statId))
	{
		if (func_780(iParam0, hParam1) - iParam2 >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&statId, iParam2);
		}
		else if (func_780(iParam0, hParam1) - iParam2 < 0)
		{
			func_790(iParam0, hParam1, func_98(hParam1, false, false), bParam3, hParam4);
			return 0;
		}
	}

	if (!func_801(iParam0, hParam1, iParam2, hParam4, bParam3))
		return 0;

	if (!func_124(false))
		bParam3 = true;

	if (!bParam3 && hParam1 != 1309979101)
		func_178(hParam1, -iParam2, flag, flag2, flag3);

	return 1;
}

BOOL func_791(Hash hParam0) // Position - 0x1F4E6 Hash - 0x33F7D399 ^0xEB534519
{
	if (!func_83(hParam0, 0))
		return false;

	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(hParam0);
}

int func_792(int iParam0, int iParam1) // Position - 0x1F503 Hash - 0xE1D12727 ^0xC55B8D95
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

Hash func_793(Entity eParam0) // Position - 0x1F83C Hash - 0x715B29E5 ^0xAF0BC29E
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
			carriableFromEntity = func_802(pedIndexFromEntityIndex);
		}
	}

	return carriableFromEntity;
}

void func_794(Entity eParam0) // Position - 0x1F87B Hash - 0xC5AA53DE ^0x680DD5A
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

	if (func_803(ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex), num2))
	{
		num = -1708424762;
	}
	else
	{
		unk = 10;
		func_757(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0), &unk);
	
		for (i = 0; i < 10; i = i + 1)
		{
			if (!func_83(unk[i], 0))
			{
			}
			else if (!func_804(unk[i]))
			{
			}
			else
			{
				num3 = func_805(unk[i], num2);
			
				if (func_806(num3, num))
					num = num3;
			}
		}
	}

	func_807(&num);

	if (func_806(num, Global_1357549.f_1492))
		Global_1357549.f_1492 = num;

	return;
}

struct<5> func_795(int iParam0) // Position - 0x1F945 Hash - 0xE091DFA ^0x699D572
{
	var unk;

	unk = { func_796(iParam0, joaat("character"), func_561(), joaat("SLOTID_NONE")) };
	unk.f_4 = joaat("SLOTID_SATCHEL");
	return unk;
}

struct<4> func_796(int iParam0, Hash hParam1, var uParam2, var uParam3, var uParam4, var uParam5, Hash hParam6) // Position - 0x1F972 Hash - 0x5F68FD81 ^0xF6C5E078
{
	var outGuid;

	if (!func_83(hParam1, 0))
		return outGuid;

	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, hParam1, hParam6, &outGuid);
	return outGuid;
}

Hash func_797(Hash hParam0) // Position - 0x1F99F Hash - 0x2D6C03B6 ^0x2D6C03B6
{
	if (!func_782(hParam0))
		return 0;

	return hParam0;
}

int func_798(Hash hParam0, int iParam1) // Position - 0x1F9B7 Hash - 0x5E5FF029 ^0x5E5FF029
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

int func_799(int iParam0, int iParam1, int iParam2) // Position - 0x1FC43 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

BOOL func_800(int iParam0, Hash hParam1, int iParam2) // Position - 0x1FC68 Hash - 0x5E31EF6C ^0x5E31EF6C
{
	if (!func_83(hParam1, 0))
		return false;

	return func_780(iParam0, hParam1) >= iParam2;
}

BOOL func_801(int iParam0, Hash hParam1, int iParam2, Hash hParam3, BOOL bParam4) // Position - 0x1FC8A Hash - 0x1ABECC38 ^0x1ABECC38
{
	var unk;
	var unk6;

	if (!func_83(hParam1, 0))
		return false;

	if (iParam2 < 1)
		return false;

	unk = { func_795(iParam0) };
	unk6 = { func_796(iParam0, hParam1, unk, unk.f_4) };
	return func_808(iParam0, hParam1, &unk6, iParam2, hParam3, bParam4);
}

Hash func_802(Ped pedParam0) // Position - 0x1FCD9 Hash - 0xF32C828D ^0x75879223
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

	func_715(pedParam0, &unk, &unk2, &num, &unk3);
	func_716(&num2, pedParam0, num, unk);

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

BOOL func_803(Hash hParam0, int iParam1) // Position - 0x1FD66 Hash - 0xF5E57FDF ^0xF5E57FDF
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

BOOL func_804(Hash hParam0) // Position - 0x1FE43 Hash - 0x6BAA9EF6 ^0x42D7C39C
{
	if (func_31(hParam0, -839724752) || func_31(hParam0, joaat("ci_tag_item_meat_animal")) || func_31(hParam0, 1286414894))
		return true;

	return false;
}

int func_805(Hash hParam0, int iParam1) // Position - 0x1FE80 Hash - 0xC5733D28 ^0xFB197C4
{
	if (!func_83(hParam0, 0))
		return 878851736;

	if (!func_804(hParam0))
		return 878851736;

	if (func_809(hParam0, iParam1))
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

BOOL func_806(int iParam0, int iParam1) // Position - 0x1FF29 Hash - 0xD4119D7E ^0x719C18FD
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

void func_807(var uParam0) // Position - 0x20008 Hash - 0x4298C46 ^0x74410755
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

BOOL func_808(int iParam0, Hash hParam1, Any* panParam2, int iParam3, Hash hParam4, BOOL bParam5) // Position - 0x2007B Hash - 0xBC47E790 ^0xD04171B4
{
	var unk;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(panParam2))
		return 0;

	if (func_445(hParam1))
		return 0;

	unk.f_9 = joaat("SLOTID_NONE");

	if (!func_810(iParam0, *panParam2, &unk, false))
		return 0;

	if (iParam3 < 0)
		iParam3 = unk.f_11;
	else if (iParam3 > unk.f_11)
		iParam3 = unk.f_11;

	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, panParam2, iParam3, hParam4))
		return 0;

	return 1;
}

BOOL func_809(Hash hParam0, int iParam1) // Position - 0x200F3 Hash - 0xF5E57FDF ^0xF5E57FDF
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

BOOL func_810(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, Any* panParam5, BOOL bParam6) // Position - 0x20224 Hash - 0x9301D070 ^0x96DC8844
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
		return false;

	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, panParam5, !bParam6))
		return false;

	return true;
}

